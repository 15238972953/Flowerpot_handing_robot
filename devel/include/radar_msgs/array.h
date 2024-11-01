// Generated by gencpp from file radar_msgs/array.msg
// DO NOT EDIT!


#ifndef RADAR_MSGS_MESSAGE_ARRAY_H
#define RADAR_MSGS_MESSAGE_ARRAY_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <radar_msgs/radar.h>

namespace radar_msgs
{
template <class ContainerAllocator>
struct array_
{
  typedef array_<ContainerAllocator> Type;

  array_()
    : array()  {
    }
  array_(const ContainerAllocator& _alloc)
    : array(_alloc)  {
  (void)_alloc;
    }



   typedef std::vector< ::radar_msgs::radar_<ContainerAllocator> , typename std::allocator_traits<ContainerAllocator>::template rebind_alloc< ::radar_msgs::radar_<ContainerAllocator> >> _array_type;
  _array_type array;





  typedef boost::shared_ptr< ::radar_msgs::array_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::radar_msgs::array_<ContainerAllocator> const> ConstPtr;

}; // struct array_

typedef ::radar_msgs::array_<std::allocator<void> > array;

typedef boost::shared_ptr< ::radar_msgs::array > arrayPtr;
typedef boost::shared_ptr< ::radar_msgs::array const> arrayConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::radar_msgs::array_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::radar_msgs::array_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::radar_msgs::array_<ContainerAllocator1> & lhs, const ::radar_msgs::array_<ContainerAllocator2> & rhs)
{
  return lhs.array == rhs.array;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::radar_msgs::array_<ContainerAllocator1> & lhs, const ::radar_msgs::array_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace radar_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::radar_msgs::array_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::radar_msgs::array_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::radar_msgs::array_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::radar_msgs::array_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::radar_msgs::array_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::radar_msgs::array_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::radar_msgs::array_<ContainerAllocator> >
{
  static const char* value()
  {
    return "6a3b08d0414549cec20d43547def240d";
  }

  static const char* value(const ::radar_msgs::array_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x6a3b08d0414549ceULL;
  static const uint64_t static_value2 = 0xc20d43547def240dULL;
};

template<class ContainerAllocator>
struct DataType< ::radar_msgs::array_<ContainerAllocator> >
{
  static const char* value()
  {
    return "radar_msgs/array";
  }

  static const char* value(const ::radar_msgs::array_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::radar_msgs::array_<ContainerAllocator> >
{
  static const char* value()
  {
    return "radar[] array\n"
"================================================================================\n"
"MSG: radar_msgs/radar\n"
"int8 n\n"
"float32 r\n"
"float32 phi\n"
;
  }

  static const char* value(const ::radar_msgs::array_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::radar_msgs::array_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.array);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct array_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::radar_msgs::array_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::radar_msgs::array_<ContainerAllocator>& v)
  {
    s << indent << "array[]" << std::endl;
    for (size_t i = 0; i < v.array.size(); ++i)
    {
      s << indent << "  array[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::radar_msgs::radar_<ContainerAllocator> >::stream(s, indent + "    ", v.array[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // RADAR_MSGS_MESSAGE_ARRAY_H
