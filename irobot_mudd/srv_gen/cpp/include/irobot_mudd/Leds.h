/* Auto-generated by genmsg_cpp for file /home/robotics/ros_workspace/hmc-robot-drivers/irobot_mudd/srv/Leds.srv */
#ifndef IROBOT_MUDD_SERVICE_LEDS_H
#define IROBOT_MUDD_SERVICE_LEDS_H
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

#include "ros/service_traits.h"




namespace irobot_mudd
{
template <class ContainerAllocator>
struct LedsRequest_ {
  typedef LedsRequest_<ContainerAllocator> Type;

  LedsRequest_()
  : advance(false)
  , play(false)
  , color(0)
  , intensity(0)
  {
  }

  LedsRequest_(const ContainerAllocator& _alloc)
  : advance(false)
  , play(false)
  , color(0)
  , intensity(0)
  {
  }

  typedef uint8_t _advance_type;
  uint8_t advance;

  typedef uint8_t _play_type;
  uint8_t play;

  typedef uint8_t _color_type;
  uint8_t color;

  typedef uint8_t _intensity_type;
  uint8_t intensity;


private:
  static const char* __s_getDataType_() { return "irobot_mudd/LedsRequest"; }
public:
  ROS_DEPRECATED static const std::string __s_getDataType() { return __s_getDataType_(); }

  ROS_DEPRECATED const std::string __getDataType() const { return __s_getDataType_(); }

private:
  static const char* __s_getMD5Sum_() { return "df36903a5aadf6b7eb388fa7522028da"; }
public:
  ROS_DEPRECATED static const std::string __s_getMD5Sum() { return __s_getMD5Sum_(); }

  ROS_DEPRECATED const std::string __getMD5Sum() const { return __s_getMD5Sum_(); }

private:
  static const char* __s_getServerMD5Sum_() { return "926a8fe91d451f4d4bb099ec9e86ff14"; }
public:
  ROS_DEPRECATED static const std::string __s_getServerMD5Sum() { return __s_getServerMD5Sum_(); }

  ROS_DEPRECATED const std::string __getServerMD5Sum() const { return __s_getServerMD5Sum_(); }

private:
  static const char* __s_getMessageDefinition_() { return "bool advance\n\
bool play\n\
uint8 color\n\
uint8 intensity\n\
\n\
"; }
public:
  ROS_DEPRECATED static const std::string __s_getMessageDefinition() { return __s_getMessageDefinition_(); }

  ROS_DEPRECATED const std::string __getMessageDefinition() const { return __s_getMessageDefinition_(); }

  ROS_DEPRECATED virtual uint8_t *serialize(uint8_t *write_ptr, uint32_t seq) const
  {
    ros::serialization::OStream stream(write_ptr, 1000000000);
    ros::serialization::serialize(stream, advance);
    ros::serialization::serialize(stream, play);
    ros::serialization::serialize(stream, color);
    ros::serialization::serialize(stream, intensity);
    return stream.getData();
  }

  ROS_DEPRECATED virtual uint8_t *deserialize(uint8_t *read_ptr)
  {
    ros::serialization::IStream stream(read_ptr, 1000000000);
    ros::serialization::deserialize(stream, advance);
    ros::serialization::deserialize(stream, play);
    ros::serialization::deserialize(stream, color);
    ros::serialization::deserialize(stream, intensity);
    return stream.getData();
  }

  ROS_DEPRECATED virtual uint32_t serializationLength() const
  {
    uint32_t size = 0;
    size += ros::serialization::serializationLength(advance);
    size += ros::serialization::serializationLength(play);
    size += ros::serialization::serializationLength(color);
    size += ros::serialization::serializationLength(intensity);
    return size;
  }

  typedef boost::shared_ptr< ::irobot_mudd::LedsRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::irobot_mudd::LedsRequest_<ContainerAllocator>  const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;
}; // struct LedsRequest
typedef  ::irobot_mudd::LedsRequest_<std::allocator<void> > LedsRequest;

typedef boost::shared_ptr< ::irobot_mudd::LedsRequest> LedsRequestPtr;
typedef boost::shared_ptr< ::irobot_mudd::LedsRequest const> LedsRequestConstPtr;


template <class ContainerAllocator>
struct LedsResponse_ {
  typedef LedsResponse_<ContainerAllocator> Type;

  LedsResponse_()
  : success(false)
  {
  }

  LedsResponse_(const ContainerAllocator& _alloc)
  : success(false)
  {
  }

  typedef uint8_t _success_type;
  uint8_t success;


private:
  static const char* __s_getDataType_() { return "irobot_mudd/LedsResponse"; }
public:
  ROS_DEPRECATED static const std::string __s_getDataType() { return __s_getDataType_(); }

  ROS_DEPRECATED const std::string __getDataType() const { return __s_getDataType_(); }

private:
  static const char* __s_getMD5Sum_() { return "358e233cde0c8a8bcfea4ce193f8fc15"; }
public:
  ROS_DEPRECATED static const std::string __s_getMD5Sum() { return __s_getMD5Sum_(); }

  ROS_DEPRECATED const std::string __getMD5Sum() const { return __s_getMD5Sum_(); }

private:
  static const char* __s_getServerMD5Sum_() { return "926a8fe91d451f4d4bb099ec9e86ff14"; }
public:
  ROS_DEPRECATED static const std::string __s_getServerMD5Sum() { return __s_getServerMD5Sum_(); }

  ROS_DEPRECATED const std::string __getServerMD5Sum() const { return __s_getServerMD5Sum_(); }

private:
  static const char* __s_getMessageDefinition_() { return "bool success\n\
\n\
\n\
"; }
public:
  ROS_DEPRECATED static const std::string __s_getMessageDefinition() { return __s_getMessageDefinition_(); }

  ROS_DEPRECATED const std::string __getMessageDefinition() const { return __s_getMessageDefinition_(); }

  ROS_DEPRECATED virtual uint8_t *serialize(uint8_t *write_ptr, uint32_t seq) const
  {
    ros::serialization::OStream stream(write_ptr, 1000000000);
    ros::serialization::serialize(stream, success);
    return stream.getData();
  }

  ROS_DEPRECATED virtual uint8_t *deserialize(uint8_t *read_ptr)
  {
    ros::serialization::IStream stream(read_ptr, 1000000000);
    ros::serialization::deserialize(stream, success);
    return stream.getData();
  }

  ROS_DEPRECATED virtual uint32_t serializationLength() const
  {
    uint32_t size = 0;
    size += ros::serialization::serializationLength(success);
    return size;
  }

  typedef boost::shared_ptr< ::irobot_mudd::LedsResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::irobot_mudd::LedsResponse_<ContainerAllocator>  const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;
}; // struct LedsResponse
typedef  ::irobot_mudd::LedsResponse_<std::allocator<void> > LedsResponse;

typedef boost::shared_ptr< ::irobot_mudd::LedsResponse> LedsResponsePtr;
typedef boost::shared_ptr< ::irobot_mudd::LedsResponse const> LedsResponseConstPtr;

struct Leds
{

typedef LedsRequest Request;
typedef LedsResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;
}; // struct Leds
} // namespace irobot_mudd

namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::irobot_mudd::LedsRequest_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::irobot_mudd::LedsRequest_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::irobot_mudd::LedsRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "df36903a5aadf6b7eb388fa7522028da";
  }

  static const char* value(const  ::irobot_mudd::LedsRequest_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0xdf36903a5aadf6b7ULL;
  static const uint64_t static_value2 = 0xeb388fa7522028daULL;
};

template<class ContainerAllocator>
struct DataType< ::irobot_mudd::LedsRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "irobot_mudd/LedsRequest";
  }

  static const char* value(const  ::irobot_mudd::LedsRequest_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::irobot_mudd::LedsRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "bool advance\n\
bool play\n\
uint8 color\n\
uint8 intensity\n\
\n\
";
  }

  static const char* value(const  ::irobot_mudd::LedsRequest_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator> struct IsFixedSize< ::irobot_mudd::LedsRequest_<ContainerAllocator> > : public TrueType {};
} // namespace message_traits
} // namespace ros


namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::irobot_mudd::LedsResponse_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::irobot_mudd::LedsResponse_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::irobot_mudd::LedsResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "358e233cde0c8a8bcfea4ce193f8fc15";
  }

  static const char* value(const  ::irobot_mudd::LedsResponse_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0x358e233cde0c8a8bULL;
  static const uint64_t static_value2 = 0xcfea4ce193f8fc15ULL;
};

template<class ContainerAllocator>
struct DataType< ::irobot_mudd::LedsResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "irobot_mudd/LedsResponse";
  }

  static const char* value(const  ::irobot_mudd::LedsResponse_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::irobot_mudd::LedsResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "bool success\n\
\n\
\n\
";
  }

  static const char* value(const  ::irobot_mudd::LedsResponse_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator> struct IsFixedSize< ::irobot_mudd::LedsResponse_<ContainerAllocator> > : public TrueType {};
} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::irobot_mudd::LedsRequest_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.advance);
    stream.next(m.play);
    stream.next(m.color);
    stream.next(m.intensity);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct LedsRequest_
} // namespace serialization
} // namespace ros


namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::irobot_mudd::LedsResponse_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.success);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct LedsResponse_
} // namespace serialization
} // namespace ros

namespace ros
{
namespace service_traits
{
template<>
struct MD5Sum<irobot_mudd::Leds> {
  static const char* value() 
  {
    return "926a8fe91d451f4d4bb099ec9e86ff14";
  }

  static const char* value(const irobot_mudd::Leds&) { return value(); } 
};

template<>
struct DataType<irobot_mudd::Leds> {
  static const char* value() 
  {
    return "irobot_mudd/Leds";
  }

  static const char* value(const irobot_mudd::Leds&) { return value(); } 
};

template<class ContainerAllocator>
struct MD5Sum<irobot_mudd::LedsRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "926a8fe91d451f4d4bb099ec9e86ff14";
  }

  static const char* value(const irobot_mudd::LedsRequest_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct DataType<irobot_mudd::LedsRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "irobot_mudd/Leds";
  }

  static const char* value(const irobot_mudd::LedsRequest_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct MD5Sum<irobot_mudd::LedsResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "926a8fe91d451f4d4bb099ec9e86ff14";
  }

  static const char* value(const irobot_mudd::LedsResponse_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct DataType<irobot_mudd::LedsResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "irobot_mudd/Leds";
  }

  static const char* value(const irobot_mudd::LedsResponse_<ContainerAllocator> &) { return value(); } 
};

} // namespace service_traits
} // namespace ros

#endif // IROBOT_MUDD_SERVICE_LEDS_H

