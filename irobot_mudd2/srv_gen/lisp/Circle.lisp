; Auto-generated. Do not edit!


(cl:in-package irobot_mudd-srv)


;//! \htmlinclude Circle-request.msg.html

(cl:defclass <Circle-request> (roslisp-msg-protocol:ros-message)
  ((speed
    :reader speed
    :initarg :speed
    :type cl:fixnum
    :initform 0)
   (radius
    :reader radius
    :initarg :radius
    :type cl:fixnum
    :initform 0))
)

(cl:defclass Circle-request (<Circle-request>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <Circle-request>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'Circle-request)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name irobot_mudd-srv:<Circle-request> is deprecated: use irobot_mudd-srv:Circle-request instead.")))

(cl:ensure-generic-function 'speed-val :lambda-list '(m))
(cl:defmethod speed-val ((m <Circle-request>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader irobot_mudd-srv:speed-val is deprecated.  Use irobot_mudd-srv:speed instead.")
  (speed m))

(cl:ensure-generic-function 'radius-val :lambda-list '(m))
(cl:defmethod radius-val ((m <Circle-request>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader irobot_mudd-srv:radius-val is deprecated.  Use irobot_mudd-srv:radius instead.")
  (radius m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <Circle-request>) ostream)
  "Serializes a message object of type '<Circle-request>"
  (cl:let* ((signed (cl:slot-value msg 'speed)) (unsigned (cl:if (cl:< signed 0) (cl:+ signed 65536) signed)))
    (cl:write-byte (cl:ldb (cl:byte 8 0) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) unsigned) ostream)
    )
  (cl:let* ((signed (cl:slot-value msg 'radius)) (unsigned (cl:if (cl:< signed 0) (cl:+ signed 65536) signed)))
    (cl:write-byte (cl:ldb (cl:byte 8 0) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) unsigned) ostream)
    )
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <Circle-request>) istream)
  "Deserializes a message object of type '<Circle-request>"
    (cl:let ((unsigned 0))
      (cl:setf (cl:ldb (cl:byte 8 0) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) unsigned) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'speed) (cl:if (cl:< unsigned 32768) unsigned (cl:- unsigned 65536))))
    (cl:let ((unsigned 0))
      (cl:setf (cl:ldb (cl:byte 8 0) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) unsigned) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'radius) (cl:if (cl:< unsigned 32768) unsigned (cl:- unsigned 65536))))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<Circle-request>)))
  "Returns string type for a service object of type '<Circle-request>"
  "irobot_mudd/CircleRequest")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'Circle-request)))
  "Returns string type for a service object of type 'Circle-request"
  "irobot_mudd/CircleRequest")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<Circle-request>)))
  "Returns md5sum for a message object of type '<Circle-request>"
  "7ada5548d47348ecdfb4dedc0f9f402e")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'Circle-request)))
  "Returns md5sum for a message object of type 'Circle-request"
  "7ada5548d47348ecdfb4dedc0f9f402e")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<Circle-request>)))
  "Returns full string definition for message of type '<Circle-request>"
  (cl:format cl:nil "int16 speed~%int16 radius~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'Circle-request)))
  "Returns full string definition for message of type 'Circle-request"
  (cl:format cl:nil "int16 speed~%int16 radius~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <Circle-request>))
  (cl:+ 0
     2
     2
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <Circle-request>))
  "Converts a ROS message object to a list"
  (cl:list 'Circle-request
    (cl:cons ':speed (speed msg))
    (cl:cons ':radius (radius msg))
))
;//! \htmlinclude Circle-response.msg.html

(cl:defclass <Circle-response> (roslisp-msg-protocol:ros-message)
  ((success
    :reader success
    :initarg :success
    :type cl:boolean
    :initform cl:nil))
)

(cl:defclass Circle-response (<Circle-response>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <Circle-response>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'Circle-response)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name irobot_mudd-srv:<Circle-response> is deprecated: use irobot_mudd-srv:Circle-response instead.")))

(cl:ensure-generic-function 'success-val :lambda-list '(m))
(cl:defmethod success-val ((m <Circle-response>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader irobot_mudd-srv:success-val is deprecated.  Use irobot_mudd-srv:success instead.")
  (success m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <Circle-response>) ostream)
  "Serializes a message object of type '<Circle-response>"
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:if (cl:slot-value msg 'success) 1 0)) ostream)
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <Circle-response>) istream)
  "Deserializes a message object of type '<Circle-response>"
    (cl:setf (cl:slot-value msg 'success) (cl:not (cl:zerop (cl:read-byte istream))))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<Circle-response>)))
  "Returns string type for a service object of type '<Circle-response>"
  "irobot_mudd/CircleResponse")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'Circle-response)))
  "Returns string type for a service object of type 'Circle-response"
  "irobot_mudd/CircleResponse")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<Circle-response>)))
  "Returns md5sum for a message object of type '<Circle-response>"
  "7ada5548d47348ecdfb4dedc0f9f402e")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'Circle-response)))
  "Returns md5sum for a message object of type 'Circle-response"
  "7ada5548d47348ecdfb4dedc0f9f402e")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<Circle-response>)))
  "Returns full string definition for message of type '<Circle-response>"
  (cl:format cl:nil "bool success~%~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'Circle-response)))
  "Returns full string definition for message of type 'Circle-response"
  (cl:format cl:nil "bool success~%~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <Circle-response>))
  (cl:+ 0
     1
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <Circle-response>))
  "Converts a ROS message object to a list"
  (cl:list 'Circle-response
    (cl:cons ':success (success msg))
))
(cl:defmethod roslisp-msg-protocol:service-request-type ((msg (cl:eql 'Circle)))
  'Circle-request)
(cl:defmethod roslisp-msg-protocol:service-response-type ((msg (cl:eql 'Circle)))
  'Circle-response)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'Circle)))
  "Returns string type for a service object of type '<Circle>"
  "irobot_mudd/Circle")