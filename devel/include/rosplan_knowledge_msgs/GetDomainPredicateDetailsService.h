// Generated by gencpp from file rosplan_knowledge_msgs/GetDomainPredicateDetailsService.msg
// DO NOT EDIT!


#ifndef ROSPLAN_KNOWLEDGE_MSGS_MESSAGE_GETDOMAINPREDICATEDETAILSSERVICE_H
#define ROSPLAN_KNOWLEDGE_MSGS_MESSAGE_GETDOMAINPREDICATEDETAILSSERVICE_H

#include <ros/service_traits.h>


#include <rosplan_knowledge_msgs/GetDomainPredicateDetailsServiceRequest.h>
#include <rosplan_knowledge_msgs/GetDomainPredicateDetailsServiceResponse.h>


namespace rosplan_knowledge_msgs
{

struct GetDomainPredicateDetailsService
{

typedef GetDomainPredicateDetailsServiceRequest Request;
typedef GetDomainPredicateDetailsServiceResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct GetDomainPredicateDetailsService
} // namespace rosplan_knowledge_msgs


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::rosplan_knowledge_msgs::GetDomainPredicateDetailsService > {
  static const char* value()
  {
    return "a2d0df3018ceb22168c64e3d02f01b80";
  }

  static const char* value(const ::rosplan_knowledge_msgs::GetDomainPredicateDetailsService&) { return value(); }
};

template<>
struct DataType< ::rosplan_knowledge_msgs::GetDomainPredicateDetailsService > {
  static const char* value()
  {
    return "rosplan_knowledge_msgs/GetDomainPredicateDetailsService";
  }

  static const char* value(const ::rosplan_knowledge_msgs::GetDomainPredicateDetailsService&) { return value(); }
};


// service_traits::MD5Sum< ::rosplan_knowledge_msgs::GetDomainPredicateDetailsServiceRequest> should match 
// service_traits::MD5Sum< ::rosplan_knowledge_msgs::GetDomainPredicateDetailsService > 
template<>
struct MD5Sum< ::rosplan_knowledge_msgs::GetDomainPredicateDetailsServiceRequest>
{
  static const char* value()
  {
    return MD5Sum< ::rosplan_knowledge_msgs::GetDomainPredicateDetailsService >::value();
  }
  static const char* value(const ::rosplan_knowledge_msgs::GetDomainPredicateDetailsServiceRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::rosplan_knowledge_msgs::GetDomainPredicateDetailsServiceRequest> should match 
// service_traits::DataType< ::rosplan_knowledge_msgs::GetDomainPredicateDetailsService > 
template<>
struct DataType< ::rosplan_knowledge_msgs::GetDomainPredicateDetailsServiceRequest>
{
  static const char* value()
  {
    return DataType< ::rosplan_knowledge_msgs::GetDomainPredicateDetailsService >::value();
  }
  static const char* value(const ::rosplan_knowledge_msgs::GetDomainPredicateDetailsServiceRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::rosplan_knowledge_msgs::GetDomainPredicateDetailsServiceResponse> should match 
// service_traits::MD5Sum< ::rosplan_knowledge_msgs::GetDomainPredicateDetailsService > 
template<>
struct MD5Sum< ::rosplan_knowledge_msgs::GetDomainPredicateDetailsServiceResponse>
{
  static const char* value()
  {
    return MD5Sum< ::rosplan_knowledge_msgs::GetDomainPredicateDetailsService >::value();
  }
  static const char* value(const ::rosplan_knowledge_msgs::GetDomainPredicateDetailsServiceResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::rosplan_knowledge_msgs::GetDomainPredicateDetailsServiceResponse> should match 
// service_traits::DataType< ::rosplan_knowledge_msgs::GetDomainPredicateDetailsService > 
template<>
struct DataType< ::rosplan_knowledge_msgs::GetDomainPredicateDetailsServiceResponse>
{
  static const char* value()
  {
    return DataType< ::rosplan_knowledge_msgs::GetDomainPredicateDetailsService >::value();
  }
  static const char* value(const ::rosplan_knowledge_msgs::GetDomainPredicateDetailsServiceResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // ROSPLAN_KNOWLEDGE_MSGS_MESSAGE_GETDOMAINPREDICATEDETAILSSERVICE_H
