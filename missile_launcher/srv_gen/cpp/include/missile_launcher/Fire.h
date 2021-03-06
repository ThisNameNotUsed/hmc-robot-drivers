/* Auto-generated by genmsg_cpp for file /home/robot/rosbots/hmc-robot-drivers/missile_launcher/srv/Fire.srv */
#ifndef MISSILE_LAUNCHER_SERVICE_FIRE_H
#define MISSILE_LAUNCHER_SERVICE_FIRE_H
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




namespace missile_launcher
{
template <class ContainerAllocator>
struct FireRequest_ {
  typedef FireRequest_<ContainerAllocator> Type;

  FireRequest_()
  {
  }

  FireRequest_(const ContainerAllocator& _alloc)
  {
  }


  typedef boost::shared_ptr< ::missile_launcher::FireRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::missile_launcher::FireRequest_<ContainerAllocator>  const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;
}; // struct FireRequest
typedef  ::missile_launcher::FireRequest_<std::allocator<void> > FireRequest;

typedef boost::shared_ptr< ::missile_launcher::FireRequest> FireRequestPtr;
typedef boost::shared_ptr< ::missile_launcher::FireRequest const> FireRequestConstPtr;


template <class ContainerAllocator>
struct FireResponse_ {
  typedef FireResponse_<ContainerAllocator> Type;

  FireResponse_()
  : success(false)
  {
  }

  FireResponse_(const ContainerAllocator& _alloc)
  : success(false)
  {
  }

  typedef uint8_t _success_type;
  uint8_t success;


  typedef boost::shared_ptr< ::missile_launcher::FireResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::missile_launcher::FireResponse_<ContainerAllocator>  const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;
}; // struct FireResponse
typedef  ::missile_launcher::FireResponse_<std::allocator<void> > FireResponse;

typedef boost::shared_ptr< ::missile_launcher::FireResponse> FireResponsePtr;
typedef boost::shared_ptr< ::missile_launcher::FireResponse const> FireResponseConstPtr;

struct Fire
{

typedef FireRequest Request;
typedef FireResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;
}; // struct Fire
} // namespace missile_launcher

namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::missile_launcher::FireRequest_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::missile_launcher::FireRequest_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::missile_launcher::FireRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "d41d8cd98f00b204e9800998ecf8427e";
  }

  static const char* value(const  ::missile_launcher::FireRequest_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0xd41d8cd98f00b204ULL;
  static const uint64_t static_value2 = 0xe9800998ecf8427eULL;
};

template<class ContainerAllocator>
struct DataType< ::missile_launcher::FireRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "missile_launcher/FireRequest";
  }

  static const char* value(const  ::missile_launcher::FireRequest_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::missile_launcher::FireRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "\n\
";
  }

  static const char* value(const  ::missile_launcher::FireRequest_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator> struct IsFixedSize< ::missile_launcher::FireRequest_<ContainerAllocator> > : public TrueType {};
} // namespace message_traits
} // namespace ros


namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::missile_launcher::FireResponse_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::missile_launcher::FireResponse_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::missile_launcher::FireResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "358e233cde0c8a8bcfea4ce193f8fc15";
  }

  static const char* value(const  ::missile_launcher::FireResponse_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0x358e233cde0c8a8bULL;
  static const uint64_t static_value2 = 0xcfea4ce193f8fc15ULL;
};

template<class ContainerAllocator>
struct DataType< ::missile_launcher::FireResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "missile_launcher/FireResponse";
  }

  static const char* value(const  ::missile_launcher::FireResponse_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::missile_launcher::FireResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "bool success\n\
\n\
\n\
";
  }

  static const char* value(const  ::missile_launcher::FireResponse_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator> struct IsFixedSize< ::missile_launcher::FireResponse_<ContainerAllocator> > : public TrueType {};
} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::missile_launcher::FireRequest_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct FireRequest_
} // namespace serialization
} // namespace ros


namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::missile_launcher::FireResponse_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.success);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct FireResponse_
} // namespace serialization
} // namespace ros

namespace ros
{
namespace service_traits
{
template<>
struct MD5Sum<missile_launcher::Fire> {
  static const char* value() 
  {
    return "358e233cde0c8a8bcfea4ce193f8fc15";
  }

  static const char* value(const missile_launcher::Fire&) { return value(); } 
};

template<>
struct DataType<missile_launcher::Fire> {
  static const char* value() 
  {
    return "missile_launcher/Fire";
  }

  static const char* value(const missile_launcher::Fire&) { return value(); } 
};

template<class ContainerAllocator>
struct MD5Sum<missile_launcher::FireRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "358e233cde0c8a8bcfea4ce193f8fc15";
  }

  static const char* value(const missile_launcher::FireRequest_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct DataType<missile_launcher::FireRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "missile_launcher/Fire";
  }

  static const char* value(const missile_launcher::FireRequest_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct MD5Sum<missile_launcher::FireResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "358e233cde0c8a8bcfea4ce193f8fc15";
  }

  static const char* value(const missile_launcher::FireResponse_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct DataType<missile_launcher::FireResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "missile_launcher/Fire";
  }

  static const char* value(const missile_launcher::FireResponse_<ContainerAllocator> &) { return value(); } 
};

} // namespace service_traits
} // namespace ros

#endif // MISSILE_LAUNCHER_SERVICE_FIRE_H

