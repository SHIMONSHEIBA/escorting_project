// Generated by gencpp from file rosplan_dispatch_msgs/PlanFeedback.msg
// DO NOT EDIT!


#ifndef ROSPLAN_DISPATCH_MSGS_MESSAGE_PLANFEEDBACK_H
#define ROSPLAN_DISPATCH_MSGS_MESSAGE_PLANFEEDBACK_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace rosplan_dispatch_msgs
{
template <class ContainerAllocator>
struct PlanFeedback_
{
  typedef PlanFeedback_<ContainerAllocator> Type;

  PlanFeedback_()
    : current_phase()
    , current_status()
    , percent_completed(0)  {
    }
  PlanFeedback_(const ContainerAllocator& _alloc)
    : current_phase(_alloc)
    , current_status(_alloc)
    , percent_completed(0)  {
  (void)_alloc;
    }



   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _current_phase_type;
  _current_phase_type current_phase;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _current_status_type;
  _current_status_type current_status;

   typedef int32_t _percent_completed_type;
  _percent_completed_type percent_completed;




  typedef boost::shared_ptr< ::rosplan_dispatch_msgs::PlanFeedback_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::rosplan_dispatch_msgs::PlanFeedback_<ContainerAllocator> const> ConstPtr;

}; // struct PlanFeedback_

typedef ::rosplan_dispatch_msgs::PlanFeedback_<std::allocator<void> > PlanFeedback;

typedef boost::shared_ptr< ::rosplan_dispatch_msgs::PlanFeedback > PlanFeedbackPtr;
typedef boost::shared_ptr< ::rosplan_dispatch_msgs::PlanFeedback const> PlanFeedbackConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::rosplan_dispatch_msgs::PlanFeedback_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::rosplan_dispatch_msgs::PlanFeedback_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace rosplan_dispatch_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'rosplan_dispatch_msgs': ['/home/robot/catkin_ws_escorting/src/ROSPlan/src/rosplan/rosplan_dispatch_msgs/msg', '/home/robot/catkin_ws_escorting/devel/share/rosplan_dispatch_msgs/msg'], 'std_msgs': ['/opt/ros/indigo/share/std_msgs/cmake/../msg'], 'actionlib_msgs': ['/opt/ros/indigo/share/actionlib_msgs/cmake/../msg'], 'diagnostic_msgs': ['/opt/ros/indigo/share/diagnostic_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::rosplan_dispatch_msgs::PlanFeedback_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::rosplan_dispatch_msgs::PlanFeedback_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::rosplan_dispatch_msgs::PlanFeedback_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::rosplan_dispatch_msgs::PlanFeedback_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::rosplan_dispatch_msgs::PlanFeedback_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::rosplan_dispatch_msgs::PlanFeedback_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::rosplan_dispatch_msgs::PlanFeedback_<ContainerAllocator> >
{
  static const char* value()
  {
    return "791f3441963c8bf65c82e3e2bc873576";
  }

  static const char* value(const ::rosplan_dispatch_msgs::PlanFeedback_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x791f3441963c8bf6ULL;
  static const uint64_t static_value2 = 0x5c82e3e2bc873576ULL;
};

template<class ContainerAllocator>
struct DataType< ::rosplan_dispatch_msgs::PlanFeedback_<ContainerAllocator> >
{
  static const char* value()
  {
    return "rosplan_dispatch_msgs/PlanFeedback";
  }

  static const char* value(const ::rosplan_dispatch_msgs::PlanFeedback_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::rosplan_dispatch_msgs::PlanFeedback_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n\
# feedback definition\n\
string current_phase\n\
string current_status\n\
int32 percent_completed\n\
\n\
\n\
";
  }

  static const char* value(const ::rosplan_dispatch_msgs::PlanFeedback_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::rosplan_dispatch_msgs::PlanFeedback_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.current_phase);
      stream.next(m.current_status);
      stream.next(m.percent_completed);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct PlanFeedback_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::rosplan_dispatch_msgs::PlanFeedback_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::rosplan_dispatch_msgs::PlanFeedback_<ContainerAllocator>& v)
  {
    s << indent << "current_phase: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.current_phase);
    s << indent << "current_status: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.current_status);
    s << indent << "percent_completed: ";
    Printer<int32_t>::stream(s, indent + "  ", v.percent_completed);
  }
};

} // namespace message_operations
} // namespace ros

#endif // ROSPLAN_DISPATCH_MSGS_MESSAGE_PLANFEEDBACK_H
