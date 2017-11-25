// Generated by gencpp from file rosplan_knowledge_msgs/KnowledgeUpdateService.msg
// DO NOT EDIT!


#ifndef ROSPLAN_KNOWLEDGE_MSGS_MESSAGE_KNOWLEDGEUPDATESERVICE_H
#define ROSPLAN_KNOWLEDGE_MSGS_MESSAGE_KNOWLEDGEUPDATESERVICE_H

#include <ros/service_traits.h>


#include <rosplan_knowledge_msgs/KnowledgeUpdateServiceRequest.h>
#include <rosplan_knowledge_msgs/KnowledgeUpdateServiceResponse.h>


namespace rosplan_knowledge_msgs
{

struct KnowledgeUpdateService
{

typedef KnowledgeUpdateServiceRequest Request;
typedef KnowledgeUpdateServiceResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct KnowledgeUpdateService
} // namespace rosplan_knowledge_msgs


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::rosplan_knowledge_msgs::KnowledgeUpdateService > {
  static const char* value()
  {
    return "837765eff2c5aff85dc1654a7e74e555";
  }

  static const char* value(const ::rosplan_knowledge_msgs::KnowledgeUpdateService&) { return value(); }
};

template<>
struct DataType< ::rosplan_knowledge_msgs::KnowledgeUpdateService > {
  static const char* value()
  {
    return "rosplan_knowledge_msgs/KnowledgeUpdateService";
  }

  static const char* value(const ::rosplan_knowledge_msgs::KnowledgeUpdateService&) { return value(); }
};


// service_traits::MD5Sum< ::rosplan_knowledge_msgs::KnowledgeUpdateServiceRequest> should match 
// service_traits::MD5Sum< ::rosplan_knowledge_msgs::KnowledgeUpdateService > 
template<>
struct MD5Sum< ::rosplan_knowledge_msgs::KnowledgeUpdateServiceRequest>
{
  static const char* value()
  {
    return MD5Sum< ::rosplan_knowledge_msgs::KnowledgeUpdateService >::value();
  }
  static const char* value(const ::rosplan_knowledge_msgs::KnowledgeUpdateServiceRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::rosplan_knowledge_msgs::KnowledgeUpdateServiceRequest> should match 
// service_traits::DataType< ::rosplan_knowledge_msgs::KnowledgeUpdateService > 
template<>
struct DataType< ::rosplan_knowledge_msgs::KnowledgeUpdateServiceRequest>
{
  static const char* value()
  {
    return DataType< ::rosplan_knowledge_msgs::KnowledgeUpdateService >::value();
  }
  static const char* value(const ::rosplan_knowledge_msgs::KnowledgeUpdateServiceRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::rosplan_knowledge_msgs::KnowledgeUpdateServiceResponse> should match 
// service_traits::MD5Sum< ::rosplan_knowledge_msgs::KnowledgeUpdateService > 
template<>
struct MD5Sum< ::rosplan_knowledge_msgs::KnowledgeUpdateServiceResponse>
{
  static const char* value()
  {
    return MD5Sum< ::rosplan_knowledge_msgs::KnowledgeUpdateService >::value();
  }
  static const char* value(const ::rosplan_knowledge_msgs::KnowledgeUpdateServiceResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::rosplan_knowledge_msgs::KnowledgeUpdateServiceResponse> should match 
// service_traits::DataType< ::rosplan_knowledge_msgs::KnowledgeUpdateService > 
template<>
struct DataType< ::rosplan_knowledge_msgs::KnowledgeUpdateServiceResponse>
{
  static const char* value()
  {
    return DataType< ::rosplan_knowledge_msgs::KnowledgeUpdateService >::value();
  }
  static const char* value(const ::rosplan_knowledge_msgs::KnowledgeUpdateServiceResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // ROSPLAN_KNOWLEDGE_MSGS_MESSAGE_KNOWLEDGEUPDATESERVICE_H
