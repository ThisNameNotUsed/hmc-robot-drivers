/* Auto-generated by genmsg_cpp for file /home/robotics/ros_workspace/hmc-robot-drivers/irobot_mudd/srv/Song.srv */
#ifndef IROBOT_MUDD_SERVICE_SONG_H
#define IROBOT_MUDD_SERVICE_SONG_H
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
struct SongRequest_ {
  typedef SongRequest_<ContainerAllocator> Type;

  SongRequest_()
  : notes()
  , durations()
  {
  }

  SongRequest_(const ContainerAllocator& _alloc)
  : notes(_alloc)
  , durations(_alloc)
  {
  }

  typedef std::vector<uint16_t, typename ContainerAllocator::template rebind<uint16_t>::other >  _notes_type;
  std::vector<uint16_t, typename ContainerAllocator::template rebind<uint16_t>::other >  notes;

  typedef std::vector<uint16_t, typename ContainerAllocator::template rebind<uint16_t>::other >  _durations_type;
  std::vector<uint16_t, typename ContainerAllocator::template rebind<uint16_t>::other >  durations;


  ROS_DEPRECATED uint32_t get_notes_size() const { return (uint32_t)notes.size(); }
  ROS_DEPRECATED void set_notes_size(uint32_t size) { notes.resize((size_t)size); }
  ROS_DEPRECATED void get_notes_vec(std::vector<uint16_t, typename ContainerAllocator::template rebind<uint16_t>::other > & vec) const { vec = this->notes; }
  ROS_DEPRECATED void set_notes_vec(const std::vector<uint16_t, typename ContainerAllocator::template rebind<uint16_t>::other > & vec) { this->notes = vec; }
  ROS_DEPRECATED uint32_t get_durations_size() const { return (uint32_t)durations.size(); }
  ROS_DEPRECATED void set_durations_size(uint32_t size) { durations.resize((size_t)size); }
  ROS_DEPRECATED void get_durations_vec(std::vector<uint16_t, typename ContainerAllocator::template rebind<uint16_t>::other > & vec) const { vec = this->durations; }
  ROS_DEPRECATED void set_durations_vec(const std::vector<uint16_t, typename ContainerAllocator::template rebind<uint16_t>::other > & vec) { this->durations = vec; }
private:
  static const char* __s_getDataType_() { return "irobot_mudd/SongRequest"; }
public:
  ROS_DEPRECATED static const std::string __s_getDataType() { return __s_getDataType_(); }

  ROS_DEPRECATED const std::string __getDataType() const { return __s_getDataType_(); }

private:
  static const char* __s_getMD5Sum_() { return "388d86b4dc7e70422fdaa94342b01fb1"; }
public:
  ROS_DEPRECATED static const std::string __s_getMD5Sum() { return __s_getMD5Sum_(); }

  ROS_DEPRECATED const std::string __getMD5Sum() const { return __s_getMD5Sum_(); }

private:
  static const char* __s_getServerMD5Sum_() { return "bbc1fa4f04d9b59e8fef37ab5483bbb7"; }
public:
  ROS_DEPRECATED static const std::string __s_getServerMD5Sum() { return __s_getServerMD5Sum_(); }

  ROS_DEPRECATED const std::string __getServerMD5Sum() const { return __s_getServerMD5Sum_(); }

private:
  static const char* __s_getMessageDefinition_() { return "uint16[] notes\n\
uint16[] durations\n\
\n\
"; }
public:
  ROS_DEPRECATED static const std::string __s_getMessageDefinition() { return __s_getMessageDefinition_(); }

  ROS_DEPRECATED const std::string __getMessageDefinition() const { return __s_getMessageDefinition_(); }

  ROS_DEPRECATED virtual uint8_t *serialize(uint8_t *write_ptr, uint32_t seq) const
  {
    ros::serialization::OStream stream(write_ptr, 1000000000);
    ros::serialization::serialize(stream, notes);
    ros::serialization::serialize(stream, durations);
    return stream.getData();
  }

  ROS_DEPRECATED virtual uint8_t *deserialize(uint8_t *read_ptr)
  {
    ros::serialization::IStream stream(read_ptr, 1000000000);
    ros::serialization::deserialize(stream, notes);
    ros::serialization::deserialize(stream, durations);
    return stream.getData();
  }

  ROS_DEPRECATED virtual uint32_t serializationLength() const
  {
    uint32_t size = 0;
    size += ros::serialization::serializationLength(notes);
    size += ros::serialization::serializationLength(durations);
    return size;
  }

  typedef boost::shared_ptr< ::irobot_mudd::SongRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::irobot_mudd::SongRequest_<ContainerAllocator>  const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;
}; // struct SongRequest
typedef  ::irobot_mudd::SongRequest_<std::allocator<void> > SongRequest;

typedef boost::shared_ptr< ::irobot_mudd::SongRequest> SongRequestPtr;
typedef boost::shared_ptr< ::irobot_mudd::SongRequest const> SongRequestConstPtr;


template <class ContainerAllocator>
struct SongResponse_ {
  typedef SongResponse_<ContainerAllocator> Type;

  SongResponse_()
  : success(false)
  {
  }

  SongResponse_(const ContainerAllocator& _alloc)
  : success(false)
  {
  }

  typedef uint8_t _success_type;
  uint8_t success;


private:
  static const char* __s_getDataType_() { return "irobot_mudd/SongResponse"; }
public:
  ROS_DEPRECATED static const std::string __s_getDataType() { return __s_getDataType_(); }

  ROS_DEPRECATED const std::string __getDataType() const { return __s_getDataType_(); }

private:
  static const char* __s_getMD5Sum_() { return "358e233cde0c8a8bcfea4ce193f8fc15"; }
public:
  ROS_DEPRECATED static const std::string __s_getMD5Sum() { return __s_getMD5Sum_(); }

  ROS_DEPRECATED const std::string __getMD5Sum() const { return __s_getMD5Sum_(); }

private:
  static const char* __s_getServerMD5Sum_() { return "bbc1fa4f04d9b59e8fef37ab5483bbb7"; }
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

  typedef boost::shared_ptr< ::irobot_mudd::SongResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::irobot_mudd::SongResponse_<ContainerAllocator>  const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;
}; // struct SongResponse
typedef  ::irobot_mudd::SongResponse_<std::allocator<void> > SongResponse;

typedef boost::shared_ptr< ::irobot_mudd::SongResponse> SongResponsePtr;
typedef boost::shared_ptr< ::irobot_mudd::SongResponse const> SongResponseConstPtr;

struct Song
{

typedef SongRequest Request;
typedef SongResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;
}; // struct Song
} // namespace irobot_mudd

namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::irobot_mudd::SongRequest_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::irobot_mudd::SongRequest_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::irobot_mudd::SongRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "388d86b4dc7e70422fdaa94342b01fb1";
  }

  static const char* value(const  ::irobot_mudd::SongRequest_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0x388d86b4dc7e7042ULL;
  static const uint64_t static_value2 = 0x2fdaa94342b01fb1ULL;
};

template<class ContainerAllocator>
struct DataType< ::irobot_mudd::SongRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "irobot_mudd/SongRequest";
  }

  static const char* value(const  ::irobot_mudd::SongRequest_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::irobot_mudd::SongRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "uint16[] notes\n\
uint16[] durations\n\
\n\
";
  }

  static const char* value(const  ::irobot_mudd::SongRequest_<ContainerAllocator> &) { return value(); } 
};

} // namespace message_traits
} // namespace ros


namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::irobot_mudd::SongResponse_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::irobot_mudd::SongResponse_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::irobot_mudd::SongResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "358e233cde0c8a8bcfea4ce193f8fc15";
  }

  static const char* value(const  ::irobot_mudd::SongResponse_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0x358e233cde0c8a8bULL;
  static const uint64_t static_value2 = 0xcfea4ce193f8fc15ULL;
};

template<class ContainerAllocator>
struct DataType< ::irobot_mudd::SongResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "irobot_mudd/SongResponse";
  }

  static const char* value(const  ::irobot_mudd::SongResponse_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::irobot_mudd::SongResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "bool success\n\
\n\
\n\
";
  }

  static const char* value(const  ::irobot_mudd::SongResponse_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator> struct IsFixedSize< ::irobot_mudd::SongResponse_<ContainerAllocator> > : public TrueType {};
} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::irobot_mudd::SongRequest_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.notes);
    stream.next(m.durations);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct SongRequest_
} // namespace serialization
} // namespace ros


namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::irobot_mudd::SongResponse_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.success);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct SongResponse_
} // namespace serialization
} // namespace ros

namespace ros
{
namespace service_traits
{
template<>
struct MD5Sum<irobot_mudd::Song> {
  static const char* value() 
  {
    return "bbc1fa4f04d9b59e8fef37ab5483bbb7";
  }

  static const char* value(const irobot_mudd::Song&) { return value(); } 
};

template<>
struct DataType<irobot_mudd::Song> {
  static const char* value() 
  {
    return "irobot_mudd/Song";
  }

  static const char* value(const irobot_mudd::Song&) { return value(); } 
};

template<class ContainerAllocator>
struct MD5Sum<irobot_mudd::SongRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "bbc1fa4f04d9b59e8fef37ab5483bbb7";
  }

  static const char* value(const irobot_mudd::SongRequest_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct DataType<irobot_mudd::SongRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "irobot_mudd/Song";
  }

  static const char* value(const irobot_mudd::SongRequest_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct MD5Sum<irobot_mudd::SongResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "bbc1fa4f04d9b59e8fef37ab5483bbb7";
  }

  static const char* value(const irobot_mudd::SongResponse_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct DataType<irobot_mudd::SongResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "irobot_mudd/Song";
  }

  static const char* value(const irobot_mudd::SongResponse_<ContainerAllocator> &) { return value(); } 
};

} // namespace service_traits
} // namespace ros

#endif // IROBOT_MUDD_SERVICE_SONG_H
