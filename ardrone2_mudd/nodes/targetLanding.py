#########################################
#########     Drone Imports     #########
#########################################
import roslib; roslib.load_manifest('ardrone2_mudd')
from ardrone2_mudd.srv import *
from ardrone2_mudd.msg import *
from sensor_msgs.msg import *
from std_msgs.msg import String
import rospy
import ardrone2

#########################################
#########  Imports other things #########
#########################################
import time,sys,random,cv,cv_bridge,math

#########################################
#########    Variable Setting   #########
#########################################
BOUNDING_DATA_SOURCE = "imageData"
NAV_DATA_SOURCE = "ardrone2/navData"
DRONE_CONTROL_SOURCE = "ardrone2/heli"
DRONE_CONFIG_SOURCE = "ardrone2/config"

class myArdrone(ardrone.Ardrone):
    def __init__(self, controlName=DRONE_CONTROL_SOURCE, ):
        ardrone2.Ardrone.__init__(self)
        self.state = "keyboard"
        self.boxX = 0
        self.boxHeight = 0
        self.tarHeight = 35.0/240
        self.tarX = .46
	self.toleranceX = 40/320.0
	self.toleranceHeight = 10/240.0
	self.toleranceArea = .001
	self.noBox = True

    def loop(self):
        while True:
            char = self.getKeyPress()
            if char == 'n':
                self.state = "start"
                self.fsm()

    def fsm(self,timer_event=None):
        print self.state + " " + str(self.boxX) + " " + str(self.boxHeight)
        if self.state == "keyboard":
            return
        elif self.state == "start":
            self.takeoff()
            self.state = "searching"
	elif self.state == "searching":
	    if self.noBox:
	    	self.spinLeft(.3)
	    else:
		self.state = "closing_in"
        elif self.state == "closing_in":
            if abs(self.boxX - self.tarX) < self.toleranceX:
                self.state = "approaching"
            elif self.boxX < self.tarX:
                self.spinLeft(.3)
            else:
                self.spinRight(.3)
        elif self.state == "approaching":
	    if self.noBox:
		self.state = "searching"
            elif abs(self.boxX - self.tarX) > self.toleranceX:
                self.state = "closing_in"
            elif self.tarHeight - self.boxHeight > self.toleranceHeight:
                self.forward(.07)
            else:
                self.land()
                self.state = "landing"
        elif self.state == "landing":
            self.hover()
            rospy.sleep(.25)
            self.land()
            self.state = "keyboard"

        rospy.Timer( rospy.Duration(0.01), self.fsm, oneshot=True )

    def bBoxUpdate(self, data):
        #Format is: "CenterX (in percent of box width) CenterY (in percent of box height)
        #            Area (in percent of box area) LeftEdge (in percent of box width)
        #            TopEdge (in percent of box height) RightEdge (in percent of box width)
        #            BottomEdge (in percent of box height)"
        br      = data.data.split()
	centerX = float(br[0])
	centerY = float(br[1])
	area    = float(br[2])
	height  = float(br[6])-float(br[4]) #the y axis points down.
        if area < self.toleranceArea:
	    print "I see a too small box of area %f"%area
	    self.noBox = True
            self.boxX = float("inf")
	    self.boxHeight = 0
        else:
	    self.noBox = False
            self.boxX = centerX
            self.boxHeight = height

if __name__== "__main__":
  drone = myArdrone()
  print "\r Connecting to bounding box data"
  ardrone.rospy.Subscriber("imageData",String,drone.bBoxUpdate,queue_size=1)
  print "Ready"
  drone.loop()
