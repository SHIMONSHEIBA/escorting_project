// Generated by gencpp from file rosplan_knowledge_msgs/CreatePRM.msg
// DO NOT EDIT!


#ifndef ROSPLAN_KNOWLEDGE_MSGS_MESSAGE_CREATEPRM_H
#define ROSPLAN_KNOWLEDGE_MSGS_MESSAGE_CREATEPRM_H

#include <ros/service_traits.h>


#include <rosplan_knowledge_msgs/CreatePRMRequest.h>
#include <rosplan_knowledge_msgs/CreatePRMResponse.h>


namespace rosplan_knowledge_msgs
{

struct CreatePRM
{

typedef CreatePRMRequest Request;
typedef CreatePRMResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct CreatePRM
} // namespace rosplan_knowledge_msgs


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::rosplan_knowledge_msgs::CreatePRM > {
  static const char* value()
  {
    return "e2d990767484410646d05d82e9a4545b";
  }

  static const char* value(const ::rosplan_knowledge_msgs::CreatePRM&) { return value(); }
};

template<>
struct DataType< ::rosplan_knowledge_msgs::CreatePRM > {
  static const char* value()
  {
    return "rosplan_knowledge_msgs/CreatePRM";
  }

  static const char* value(const ::rosplan_knowledge_msgs::CreatePRM&) { return value(); }
};


// service_traits::MD5Sum< ::rosplan_knowledge_msgs::CreatePRMRequest> should match 
// service_traits::MD5Sum< ::rosplan_knowledge_msgs::CreatePRM > 
template<>
struct MD5Sum< ::rosplan_knowledge_msgs::CreatePRMRequest>
{
  static const char* value()
  {
    return MD5Sum< ::rosplan_knowledge_msgs::CreatePRM >::value();
  }
  static const char* value(const ::rosplan_knowledge_msgs::CreatePRMRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::rosplan_knowledge_msgs::CreatePRMRequest> should match 
// service_traits::DataType< ::rosplan_knowledge_msgs::CreatePRM > 
template<>
struct DataType< ::rosplan_knowledge_msgs::CreatePRMRequest>
{
  static const char* value()
  {
    return DataType< ::rosplan_knowledge_msgs::CreatePRM >::value();
  }
  static const char* value(const ::rosplan_knowledge_msgs::CreatePRMRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::rosplan_knowledge_msgs::CreatePRMResponse> should match 
// service_traits::MD5Sum< ::rosplan_knowledge_msgs::CreatePRM > 
template<>
struct MD5Sum< ::rosplan_knowledge_msgs::CreatePRMResponse>
{
  static const char* value()
  {
    return MD5Sum< ::rosplan_knowledge_msgs::CreatePRM >::value();
  }
  static const char* value(const ::rosplan_knowledge_msgs::CreatePRMResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::rosplan_knowledge_msgs::CreatePRMResponse> should match 
// service_traits::DataType< ::rosplan_knowledge_msgs::CreatePRM > 
template<>
struct DataType< ::rosplan_knowledge_msgs::CreatePRMResponse>
{
  static const char* value()
  {
    return DataType< ::rosplan_knowledge_msgs::CreatePRM >::value();
  }
  static const char* value(const ::rosplan_knowledge_msgs::CreatePRMResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // ROSPLAN_KNOWLEDGE_MSGS_MESSAGE_CREATEPRM_H