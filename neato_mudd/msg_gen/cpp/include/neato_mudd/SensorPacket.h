/* Auto-generated by genmsg_cpp for file /home/robotics/groovy_workspace/sandbox/neato_mudd/msg/SensorPacket.msg */
#ifndef NEATO_MUDD_MESSAGE_SENSORPACKET_H
#define NEATO_MUDD_MESSAGE_SENSORPACKET_H
#include <string>
#include <vector>
#include <map>
#include <ostream>
#include "ros/serialization.h"
#include "ros/builtin_message_traits.h"
#include "ros/message_operations.h"
#include "ros/time.h"

#include "ros/macros.h"

#include "ros/assert.h"

#include "std_msgs/Header.h"

namespace neato_mudd
{
template <class ContainerAllocator>
struct SensorPacket_ {
  typedef SensorPacket_<ContainerAllocator> Type;

  SensorPacket_()
  : header()
  , WallSensorInMM(0)
  , BatteryVoltageInmV(0)
  , LeftDropInMM(0)
  , RightDropInMM(0)
  , RightMagSensor(0)
  , LeftMagSensor(0)
  , XTemp0InC(0)
  , XTemp1InC(0)
  , VacuumCurrentInmA(0)
  , ChargeVoltInmV(0)
  , BatteryTemp1InC(0)
  , CurrentInmA(0)
  , BatteryTemp0InC(0)
  , SNSR_DC_JACK_CONNECT(false)
  , SNSR_DUSTBIN_IS_IN(false)
  , SNSR_LEFT_WHEEL_EXTENDED(false)
  , SNSR_RIGHT_WHEEL_EXTENDED(false)
  , LSIDEBIT(false)
  , LFRONTBIT(false)
  , RSIDEBIT(false)
  , RFRONTBIT(false)
  , BTN_SOFT_KEY(false)
  , BTN_SCROLL_UP(false)
  , BTN_SCROLL_DOWN(false)
  , BTN_START(false)
  , BTN_BACK(false)
  , Brush_MaxPWM(0)
  , Brush_PWM(0)
  , Brush_mVolts(0)
  , Brush_Encoder(0)
  , Brush_RPM(0)
  , Vaccuum_MaxPWM(0)
  , Vaccuum_PWM(0)
  , Vaccuum_CurrentInMA(0)
  , Vaccuum_Encoder(0)
  , Vaccuum_RPM(0)
  , LeftWheel_MaxPWM(0)
  , LeftWheel_PWM(0)
  , LeftWheel_mVolts(0)
  , LeftWheel_Encoder(0)
  , LeftWheel_PositionInMM(0)
  , LeftWheel_RPM(0)
  , RightWheel_MaxPWM(0)
  , RightWheel_PWM(0)
  , RightWheel_mVolts(0)
  , RightWheel_Encoder(0)
  , RightWheel_PositionInMM(0)
  , RightWheel_RPM(0)
  , Laser_MaxPWM(0)
  , Laser_PWM(0)
  , Laser_mVolts(0)
  , Laser_Encoder(0)
  , Laser_RPM(0)
  , Charger_MaxPWM(0)
  , Charger_PWM(0)
  , Charger_mAH(0)
  , FuelPercent(0)
  , BatteryOverTemp(0)
  , ChargingActive(false)
  , ChargingEnabled(false)
  , ConfidentOnFuel(false)
  , OnReservedFuel(false)
  , EmptyFuel(false)
  , BatteryFailure(false)
  , ExtPwrPresent(false)
  , VBattV(0)
  , VExtV(0)
  , MaxPWM(0)
  {
  }

  SensorPacket_(const ContainerAllocator& _alloc)
  : header(_alloc)
  , WallSensorInMM(0)
  , BatteryVoltageInmV(0)
  , LeftDropInMM(0)
  , RightDropInMM(0)
  , RightMagSensor(0)
  , LeftMagSensor(0)
  , XTemp0InC(0)
  , XTemp1InC(0)
  , VacuumCurrentInmA(0)
  , ChargeVoltInmV(0)
  , BatteryTemp1InC(0)
  , CurrentInmA(0)
  , BatteryTemp0InC(0)
  , SNSR_DC_JACK_CONNECT(false)
  , SNSR_DUSTBIN_IS_IN(false)
  , SNSR_LEFT_WHEEL_EXTENDED(false)
  , SNSR_RIGHT_WHEEL_EXTENDED(false)
  , LSIDEBIT(false)
  , LFRONTBIT(false)
  , RSIDEBIT(false)
  , RFRONTBIT(false)
  , BTN_SOFT_KEY(false)
  , BTN_SCROLL_UP(false)
  , BTN_SCROLL_DOWN(false)
  , BTN_START(false)
  , BTN_BACK(false)
  , Brush_MaxPWM(0)
  , Brush_PWM(0)
  , Brush_mVolts(0)
  , Brush_Encoder(0)
  , Brush_RPM(0)
  , Vaccuum_MaxPWM(0)
  , Vaccuum_PWM(0)
  , Vaccuum_CurrentInMA(0)
  , Vaccuum_Encoder(0)
  , Vaccuum_RPM(0)
  , LeftWheel_MaxPWM(0)
  , LeftWheel_PWM(0)
  , LeftWheel_mVolts(0)
  , LeftWheel_Encoder(0)
  , LeftWheel_PositionInMM(0)
  , LeftWheel_RPM(0)
  , RightWheel_MaxPWM(0)
  , RightWheel_PWM(0)
  , RightWheel_mVolts(0)
  , RightWheel_Encoder(0)
  , RightWheel_PositionInMM(0)
  , RightWheel_RPM(0)
  , Laser_MaxPWM(0)
  , Laser_PWM(0)
  , Laser_mVolts(0)
  , Laser_Encoder(0)
  , Laser_RPM(0)
  , Charger_MaxPWM(0)
  , Charger_PWM(0)
  , Charger_mAH(0)
  , FuelPercent(0)
  , BatteryOverTemp(0)
  , ChargingActive(false)
  , ChargingEnabled(false)
  , ConfidentOnFuel(false)
  , OnReservedFuel(false)
  , EmptyFuel(false)
  , BatteryFailure(false)
  , ExtPwrPresent(false)
  , VBattV(0)
  , VExtV(0)
  , MaxPWM(0)
  {
  }

  typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
   ::std_msgs::Header_<ContainerAllocator>  header;

  typedef uint8_t _WallSensorInMM_type;
  uint8_t WallSensorInMM;

  typedef int16_t _BatteryVoltageInmV_type;
  int16_t BatteryVoltageInmV;

  typedef uint8_t _LeftDropInMM_type;
  uint8_t LeftDropInMM;

  typedef uint8_t _RightDropInMM_type;
  uint8_t RightDropInMM;

  typedef int8_t _RightMagSensor_type;
  int8_t RightMagSensor;

  typedef int8_t _LeftMagSensor_type;
  int8_t LeftMagSensor;

  typedef uint8_t _XTemp0InC_type;
  uint8_t XTemp0InC;

  typedef uint8_t _XTemp1InC_type;
  uint8_t XTemp1InC;

  typedef int16_t _VacuumCurrentInmA_type;
  int16_t VacuumCurrentInmA;

  typedef int16_t _ChargeVoltInmV_type;
  int16_t ChargeVoltInmV;

  typedef uint8_t _BatteryTemp1InC_type;
  uint8_t BatteryTemp1InC;

  typedef int16_t _CurrentInmA_type;
  int16_t CurrentInmA;

  typedef uint8_t _BatteryTemp0InC_type;
  uint8_t BatteryTemp0InC;

  typedef uint8_t _SNSR_DC_JACK_CONNECT_type;
  uint8_t SNSR_DC_JACK_CONNECT;

  typedef uint8_t _SNSR_DUSTBIN_IS_IN_type;
  uint8_t SNSR_DUSTBIN_IS_IN;

  typedef uint8_t _SNSR_LEFT_WHEEL_EXTENDED_type;
  uint8_t SNSR_LEFT_WHEEL_EXTENDED;

  typedef uint8_t _SNSR_RIGHT_WHEEL_EXTENDED_type;
  uint8_t SNSR_RIGHT_WHEEL_EXTENDED;

  typedef uint8_t _LSIDEBIT_type;
  uint8_t LSIDEBIT;

  typedef uint8_t _LFRONTBIT_type;
  uint8_t LFRONTBIT;

  typedef uint8_t _RSIDEBIT_type;
  uint8_t RSIDEBIT;

  typedef uint8_t _RFRONTBIT_type;
  uint8_t RFRONTBIT;

  typedef uint8_t _BTN_SOFT_KEY_type;
  uint8_t BTN_SOFT_KEY;

  typedef uint8_t _BTN_SCROLL_UP_type;
  uint8_t BTN_SCROLL_UP;

  typedef uint8_t _BTN_SCROLL_DOWN_type;
  uint8_t BTN_SCROLL_DOWN;

  typedef uint8_t _BTN_START_type;
  uint8_t BTN_START;

  typedef uint8_t _BTN_BACK_type;
  uint8_t BTN_BACK;

  typedef uint16_t _Brush_MaxPWM_type;
  uint16_t Brush_MaxPWM;

  typedef uint16_t _Brush_PWM_type;
  uint16_t Brush_PWM;

  typedef int16_t _Brush_mVolts_type;
  int16_t Brush_mVolts;

  typedef int32_t _Brush_Encoder_type;
  int32_t Brush_Encoder;

  typedef uint16_t _Brush_RPM_type;
  uint16_t Brush_RPM;

  typedef uint16_t _Vaccuum_MaxPWM_type;
  uint16_t Vaccuum_MaxPWM;

  typedef uint16_t _Vaccuum_PWM_type;
  uint16_t Vaccuum_PWM;

  typedef int16_t _Vaccuum_CurrentInMA_type;
  int16_t Vaccuum_CurrentInMA;

  typedef int32_t _Vaccuum_Encoder_type;
  int32_t Vaccuum_Encoder;

  typedef uint16_t _Vaccuum_RPM_type;
  uint16_t Vaccuum_RPM;

  typedef uint16_t _LeftWheel_MaxPWM_type;
  uint16_t LeftWheel_MaxPWM;

  typedef uint16_t _LeftWheel_PWM_type;
  uint16_t LeftWheel_PWM;

  typedef int16_t _LeftWheel_mVolts_type;
  int16_t LeftWheel_mVolts;

  typedef int32_t _LeftWheel_Encoder_type;
  int32_t LeftWheel_Encoder;

  typedef int32_t _LeftWheel_PositionInMM_type;
  int32_t LeftWheel_PositionInMM;

  typedef uint16_t _LeftWheel_RPM_type;
  uint16_t LeftWheel_RPM;

  typedef uint16_t _RightWheel_MaxPWM_type;
  uint16_t RightWheel_MaxPWM;

  typedef uint16_t _RightWheel_PWM_type;
  uint16_t RightWheel_PWM;

  typedef int16_t _RightWheel_mVolts_type;
  int16_t RightWheel_mVolts;

  typedef int32_t _RightWheel_Encoder_type;
  int32_t RightWheel_Encoder;

  typedef int32_t _RightWheel_PositionInMM_type;
  int32_t RightWheel_PositionInMM;

  typedef uint16_t _RightWheel_RPM_type;
  uint16_t RightWheel_RPM;

  typedef uint16_t _Laser_MaxPWM_type;
  uint16_t Laser_MaxPWM;

  typedef uint16_t _Laser_PWM_type;
  uint16_t Laser_PWM;

  typedef int16_t _Laser_mVolts_type;
  int16_t Laser_mVolts;

  typedef int32_t _Laser_Encoder_type;
  int32_t Laser_Encoder;

  typedef uint16_t _Laser_RPM_type;
  uint16_t Laser_RPM;

  typedef uint16_t _Charger_MaxPWM_type;
  uint16_t Charger_MaxPWM;

  typedef uint16_t _Charger_PWM_type;
  uint16_t Charger_PWM;

  typedef int16_t _Charger_mAH_type;
  int16_t Charger_mAH;

  typedef uint8_t _FuelPercent_type;
  uint8_t FuelPercent;

  typedef uint8_t _BatteryOverTemp_type;
  uint8_t BatteryOverTemp;

  typedef uint8_t _ChargingActive_type;
  uint8_t ChargingActive;

  typedef uint8_t _ChargingEnabled_type;
  uint8_t ChargingEnabled;

  typedef uint8_t _ConfidentOnFuel_type;
  uint8_t ConfidentOnFuel;

  typedef uint8_t _OnReservedFuel_type;
  uint8_t OnReservedFuel;

  typedef uint8_t _EmptyFuel_type;
  uint8_t EmptyFuel;

  typedef uint8_t _BatteryFailure_type;
  uint8_t BatteryFailure;

  typedef uint8_t _ExtPwrPresent_type;
  uint8_t ExtPwrPresent;

  typedef int8_t _VBattV_type;
  int8_t VBattV;

  typedef int8_t _VExtV_type;
  int8_t VExtV;

  typedef uint16_t _MaxPWM_type;
  uint16_t MaxPWM;


  typedef boost::shared_ptr< ::neato_mudd::SensorPacket_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::neato_mudd::SensorPacket_<ContainerAllocator>  const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;
}; // struct SensorPacket
typedef  ::neato_mudd::SensorPacket_<std::allocator<void> > SensorPacket;

typedef boost::shared_ptr< ::neato_mudd::SensorPacket> SensorPacketPtr;
typedef boost::shared_ptr< ::neato_mudd::SensorPacket const> SensorPacketConstPtr;


template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const  ::neato_mudd::SensorPacket_<ContainerAllocator> & v)
{
  ros::message_operations::Printer< ::neato_mudd::SensorPacket_<ContainerAllocator> >::stream(s, "", v);
  return s;}

} // namespace neato_mudd

namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::neato_mudd::SensorPacket_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::neato_mudd::SensorPacket_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::neato_mudd::SensorPacket_<ContainerAllocator> > {
  static const char* value() 
  {
    return "4a183c92eb0a1689eded50f4e3ed8d65";
  }

  static const char* value(const  ::neato_mudd::SensorPacket_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0x4a183c92eb0a1689ULL;
  static const uint64_t static_value2 = 0xeded50f4e3ed8d65ULL;
};

template<class ContainerAllocator>
struct DataType< ::neato_mudd::SensorPacket_<ContainerAllocator> > {
  static const char* value() 
  {
    return "neato_mudd/SensorPacket";
  }

  static const char* value(const  ::neato_mudd::SensorPacket_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::neato_mudd::SensorPacket_<ContainerAllocator> > {
  static const char* value() 
  {
    return "Header header\n\
uint8 WallSensorInMM\n\
int16 BatteryVoltageInmV\n\
uint8 LeftDropInMM\n\
uint8 RightDropInMM\n\
int8 RightMagSensor\n\
int8 LeftMagSensor\n\
uint8 XTemp0InC\n\
uint8 XTemp1InC\n\
int16 VacuumCurrentInmA\n\
int16 ChargeVoltInmV\n\
uint8 BatteryTemp1InC\n\
int16 CurrentInmA\n\
uint8 BatteryTemp0InC\n\
bool SNSR_DC_JACK_CONNECT\n\
bool SNSR_DUSTBIN_IS_IN\n\
bool SNSR_LEFT_WHEEL_EXTENDED\n\
bool SNSR_RIGHT_WHEEL_EXTENDED\n\
bool LSIDEBIT\n\
bool LFRONTBIT\n\
bool RSIDEBIT\n\
bool RFRONTBIT\n\
bool BTN_SOFT_KEY\n\
bool BTN_SCROLL_UP\n\
bool BTN_SCROLL_DOWN\n\
bool BTN_START\n\
bool BTN_BACK\n\
uint16 Brush_MaxPWM\n\
uint16 Brush_PWM\n\
int16 Brush_mVolts\n\
int32 Brush_Encoder\n\
uint16 Brush_RPM\n\
uint16 Vaccuum_MaxPWM\n\
uint16 Vaccuum_PWM\n\
int16 Vaccuum_CurrentInMA\n\
int32 Vaccuum_Encoder\n\
uint16 Vaccuum_RPM\n\
uint16 LeftWheel_MaxPWM\n\
uint16 LeftWheel_PWM\n\
int16 LeftWheel_mVolts\n\
int32 LeftWheel_Encoder\n\
int32 LeftWheel_PositionInMM\n\
uint16 LeftWheel_RPM\n\
uint16 RightWheel_MaxPWM\n\
uint16 RightWheel_PWM\n\
int16 RightWheel_mVolts\n\
int32 RightWheel_Encoder\n\
int32 RightWheel_PositionInMM\n\
uint16 RightWheel_RPM\n\
uint16 Laser_MaxPWM\n\
uint16 Laser_PWM\n\
int16 Laser_mVolts\n\
int32 Laser_Encoder\n\
uint16 Laser_RPM\n\
uint16 Charger_MaxPWM\n\
uint16 Charger_PWM\n\
int16 Charger_mAH\n\
uint8 FuelPercent\n\
uint8 BatteryOverTemp\n\
bool ChargingActive\n\
bool ChargingEnabled\n\
bool ConfidentOnFuel\n\
bool OnReservedFuel\n\
bool EmptyFuel\n\
bool BatteryFailure\n\
bool ExtPwrPresent\n\
int8 VBattV\n\
int8 VExtV\n\
uint16 MaxPWM\n\
\n\
================================================================================\n\
MSG: std_msgs/Header\n\
# Standard metadata for higher-level stamped data types.\n\
# This is generally used to communicate timestamped data \n\
# in a particular coordinate frame.\n\
# \n\
# sequence ID: consecutively increasing ID \n\
uint32 seq\n\
#Two-integer timestamp that is expressed as:\n\
# * stamp.secs: seconds (stamp_secs) since epoch\n\
# * stamp.nsecs: nanoseconds since stamp_secs\n\
# time-handling sugar is provided by the client library\n\
time stamp\n\
#Frame this data is associated with\n\
# 0: no frame\n\
# 1: global frame\n\
string frame_id\n\
\n\
";
  }

  static const char* value(const  ::neato_mudd::SensorPacket_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator> struct HasHeader< ::neato_mudd::SensorPacket_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct HasHeader< const ::neato_mudd::SensorPacket_<ContainerAllocator> > : public TrueType {};
} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::neato_mudd::SensorPacket_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.header);
    stream.next(m.WallSensorInMM);
    stream.next(m.BatteryVoltageInmV);
    stream.next(m.LeftDropInMM);
    stream.next(m.RightDropInMM);
    stream.next(m.RightMagSensor);
    stream.next(m.LeftMagSensor);
    stream.next(m.XTemp0InC);
    stream.next(m.XTemp1InC);
    stream.next(m.VacuumCurrentInmA);
    stream.next(m.ChargeVoltInmV);
    stream.next(m.BatteryTemp1InC);
    stream.next(m.CurrentInmA);
    stream.next(m.BatteryTemp0InC);
    stream.next(m.SNSR_DC_JACK_CONNECT);
    stream.next(m.SNSR_DUSTBIN_IS_IN);
    stream.next(m.SNSR_LEFT_WHEEL_EXTENDED);
    stream.next(m.SNSR_RIGHT_WHEEL_EXTENDED);
    stream.next(m.LSIDEBIT);
    stream.next(m.LFRONTBIT);
    stream.next(m.RSIDEBIT);
    stream.next(m.RFRONTBIT);
    stream.next(m.BTN_SOFT_KEY);
    stream.next(m.BTN_SCROLL_UP);
    stream.next(m.BTN_SCROLL_DOWN);
    stream.next(m.BTN_START);
    stream.next(m.BTN_BACK);
    stream.next(m.Brush_MaxPWM);
    stream.next(m.Brush_PWM);
    stream.next(m.Brush_mVolts);
    stream.next(m.Brush_Encoder);
    stream.next(m.Brush_RPM);
    stream.next(m.Vaccuum_MaxPWM);
    stream.next(m.Vaccuum_PWM);
    stream.next(m.Vaccuum_CurrentInMA);
    stream.next(m.Vaccuum_Encoder);
    stream.next(m.Vaccuum_RPM);
    stream.next(m.LeftWheel_MaxPWM);
    stream.next(m.LeftWheel_PWM);
    stream.next(m.LeftWheel_mVolts);
    stream.next(m.LeftWheel_Encoder);
    stream.next(m.LeftWheel_PositionInMM);
    stream.next(m.LeftWheel_RPM);
    stream.next(m.RightWheel_MaxPWM);
    stream.next(m.RightWheel_PWM);
    stream.next(m.RightWheel_mVolts);
    stream.next(m.RightWheel_Encoder);
    stream.next(m.RightWheel_PositionInMM);
    stream.next(m.RightWheel_RPM);
    stream.next(m.Laser_MaxPWM);
    stream.next(m.Laser_PWM);
    stream.next(m.Laser_mVolts);
    stream.next(m.Laser_Encoder);
    stream.next(m.Laser_RPM);
    stream.next(m.Charger_MaxPWM);
    stream.next(m.Charger_PWM);
    stream.next(m.Charger_mAH);
    stream.next(m.FuelPercent);
    stream.next(m.BatteryOverTemp);
    stream.next(m.ChargingActive);
    stream.next(m.ChargingEnabled);
    stream.next(m.ConfidentOnFuel);
    stream.next(m.OnReservedFuel);
    stream.next(m.EmptyFuel);
    stream.next(m.BatteryFailure);
    stream.next(m.ExtPwrPresent);
    stream.next(m.VBattV);
    stream.next(m.VExtV);
    stream.next(m.MaxPWM);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct SensorPacket_
} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::neato_mudd::SensorPacket_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const  ::neato_mudd::SensorPacket_<ContainerAllocator> & v) 
  {
    s << indent << "header: ";
s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "WallSensorInMM: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.WallSensorInMM);
    s << indent << "BatteryVoltageInmV: ";
    Printer<int16_t>::stream(s, indent + "  ", v.BatteryVoltageInmV);
    s << indent << "LeftDropInMM: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.LeftDropInMM);
    s << indent << "RightDropInMM: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.RightDropInMM);
    s << indent << "RightMagSensor: ";
    Printer<int8_t>::stream(s, indent + "  ", v.RightMagSensor);
    s << indent << "LeftMagSensor: ";
    Printer<int8_t>::stream(s, indent + "  ", v.LeftMagSensor);
    s << indent << "XTemp0InC: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.XTemp0InC);
    s << indent << "XTemp1InC: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.XTemp1InC);
    s << indent << "VacuumCurrentInmA: ";
    Printer<int16_t>::stream(s, indent + "  ", v.VacuumCurrentInmA);
    s << indent << "ChargeVoltInmV: ";
    Printer<int16_t>::stream(s, indent + "  ", v.ChargeVoltInmV);
    s << indent << "BatteryTemp1InC: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.BatteryTemp1InC);
    s << indent << "CurrentInmA: ";
    Printer<int16_t>::stream(s, indent + "  ", v.CurrentInmA);
    s << indent << "BatteryTemp0InC: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.BatteryTemp0InC);
    s << indent << "SNSR_DC_JACK_CONNECT: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.SNSR_DC_JACK_CONNECT);
    s << indent << "SNSR_DUSTBIN_IS_IN: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.SNSR_DUSTBIN_IS_IN);
    s << indent << "SNSR_LEFT_WHEEL_EXTENDED: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.SNSR_LEFT_WHEEL_EXTENDED);
    s << indent << "SNSR_RIGHT_WHEEL_EXTENDED: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.SNSR_RIGHT_WHEEL_EXTENDED);
    s << indent << "LSIDEBIT: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.LSIDEBIT);
    s << indent << "LFRONTBIT: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.LFRONTBIT);
    s << indent << "RSIDEBIT: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.RSIDEBIT);
    s << indent << "RFRONTBIT: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.RFRONTBIT);
    s << indent << "BTN_SOFT_KEY: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.BTN_SOFT_KEY);
    s << indent << "BTN_SCROLL_UP: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.BTN_SCROLL_UP);
    s << indent << "BTN_SCROLL_DOWN: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.BTN_SCROLL_DOWN);
    s << indent << "BTN_START: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.BTN_START);
    s << indent << "BTN_BACK: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.BTN_BACK);
    s << indent << "Brush_MaxPWM: ";
    Printer<uint16_t>::stream(s, indent + "  ", v.Brush_MaxPWM);
    s << indent << "Brush_PWM: ";
    Printer<uint16_t>::stream(s, indent + "  ", v.Brush_PWM);
    s << indent << "Brush_mVolts: ";
    Printer<int16_t>::stream(s, indent + "  ", v.Brush_mVolts);
    s << indent << "Brush_Encoder: ";
    Printer<int32_t>::stream(s, indent + "  ", v.Brush_Encoder);
    s << indent << "Brush_RPM: ";
    Printer<uint16_t>::stream(s, indent + "  ", v.Brush_RPM);
    s << indent << "Vaccuum_MaxPWM: ";
    Printer<uint16_t>::stream(s, indent + "  ", v.Vaccuum_MaxPWM);
    s << indent << "Vaccuum_PWM: ";
    Printer<uint16_t>::stream(s, indent + "  ", v.Vaccuum_PWM);
    s << indent << "Vaccuum_CurrentInMA: ";
    Printer<int16_t>::stream(s, indent + "  ", v.Vaccuum_CurrentInMA);
    s << indent << "Vaccuum_Encoder: ";
    Printer<int32_t>::stream(s, indent + "  ", v.Vaccuum_Encoder);
    s << indent << "Vaccuum_RPM: ";
    Printer<uint16_t>::stream(s, indent + "  ", v.Vaccuum_RPM);
    s << indent << "LeftWheel_MaxPWM: ";
    Printer<uint16_t>::stream(s, indent + "  ", v.LeftWheel_MaxPWM);
    s << indent << "LeftWheel_PWM: ";
    Printer<uint16_t>::stream(s, indent + "  ", v.LeftWheel_PWM);
    s << indent << "LeftWheel_mVolts: ";
    Printer<int16_t>::stream(s, indent + "  ", v.LeftWheel_mVolts);
    s << indent << "LeftWheel_Encoder: ";
    Printer<int32_t>::stream(s, indent + "  ", v.LeftWheel_Encoder);
    s << indent << "LeftWheel_PositionInMM: ";
    Printer<int32_t>::stream(s, indent + "  ", v.LeftWheel_PositionInMM);
    s << indent << "LeftWheel_RPM: ";
    Printer<uint16_t>::stream(s, indent + "  ", v.LeftWheel_RPM);
    s << indent << "RightWheel_MaxPWM: ";
    Printer<uint16_t>::stream(s, indent + "  ", v.RightWheel_MaxPWM);
    s << indent << "RightWheel_PWM: ";
    Printer<uint16_t>::stream(s, indent + "  ", v.RightWheel_PWM);
    s << indent << "RightWheel_mVolts: ";
    Printer<int16_t>::stream(s, indent + "  ", v.RightWheel_mVolts);
    s << indent << "RightWheel_Encoder: ";
    Printer<int32_t>::stream(s, indent + "  ", v.RightWheel_Encoder);
    s << indent << "RightWheel_PositionInMM: ";
    Printer<int32_t>::stream(s, indent + "  ", v.RightWheel_PositionInMM);
    s << indent << "RightWheel_RPM: ";
    Printer<uint16_t>::stream(s, indent + "  ", v.RightWheel_RPM);
    s << indent << "Laser_MaxPWM: ";
    Printer<uint16_t>::stream(s, indent + "  ", v.Laser_MaxPWM);
    s << indent << "Laser_PWM: ";
    Printer<uint16_t>::stream(s, indent + "  ", v.Laser_PWM);
    s << indent << "Laser_mVolts: ";
    Printer<int16_t>::stream(s, indent + "  ", v.Laser_mVolts);
    s << indent << "Laser_Encoder: ";
    Printer<int32_t>::stream(s, indent + "  ", v.Laser_Encoder);
    s << indent << "Laser_RPM: ";
    Printer<uint16_t>::stream(s, indent + "  ", v.Laser_RPM);
    s << indent << "Charger_MaxPWM: ";
    Printer<uint16_t>::stream(s, indent + "  ", v.Charger_MaxPWM);
    s << indent << "Charger_PWM: ";
    Printer<uint16_t>::stream(s, indent + "  ", v.Charger_PWM);
    s << indent << "Charger_mAH: ";
    Printer<int16_t>::stream(s, indent + "  ", v.Charger_mAH);
    s << indent << "FuelPercent: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.FuelPercent);
    s << indent << "BatteryOverTemp: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.BatteryOverTemp);
    s << indent << "ChargingActive: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.ChargingActive);
    s << indent << "ChargingEnabled: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.ChargingEnabled);
    s << indent << "ConfidentOnFuel: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.ConfidentOnFuel);
    s << indent << "OnReservedFuel: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.OnReservedFuel);
    s << indent << "EmptyFuel: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.EmptyFuel);
    s << indent << "BatteryFailure: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.BatteryFailure);
    s << indent << "ExtPwrPresent: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.ExtPwrPresent);
    s << indent << "VBattV: ";
    Printer<int8_t>::stream(s, indent + "  ", v.VBattV);
    s << indent << "VExtV: ";
    Printer<int8_t>::stream(s, indent + "  ", v.VExtV);
    s << indent << "MaxPWM: ";
    Printer<uint16_t>::stream(s, indent + "  ", v.MaxPWM);
  }
};


} // namespace message_operations
} // namespace ros

#endif // NEATO_MUDD_MESSAGE_SENSORPACKET_H

