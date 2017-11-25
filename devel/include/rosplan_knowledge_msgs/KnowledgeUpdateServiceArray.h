// Generated by gencpp from file rosplan_knowledge_msgs/KnowledgeUpdateServiceArray.msg
// DO NOT EDIT!


#ifndef ROSPLAN_KNOWLEDGE_MSGS_MESSAGE_KNOWLEDGEUPDATESERVICEARRAY_H
#define ROSPLAN_KNOWLEDGE_MSGS_MESSAGE_KNOWLEDGEUPDATESERVICEARRAY_H

#include <ros/service_traits.h>


#include <rosplan_knowledge_msgs/KnowledgeUpdateServiceArrayRequest.h>
#include <rosplan_knowledge_msgs/KnowledgeUpdateServiceArrayResponse.h>


namespace rosplan_knowledge_msgs
{

struct KnowledgeUpdateServiceArray
{

typedef KnowledgeUpdateServiceArrayRequest Request;
typedef KnowledgeUpdateServiceArrayResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct KnowledgeUpdateServiceArray
} // namespace rosplan_knowledge_msgs


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::rosplan_knowledge_msgs::KnowledgeUpdateServiceArray > {
  static const char* value()
  {
    return "837765eff2c5aff85dc1654a7e74e555";
  }

  static const char* value(const ::rosplan_knowledge_msgs::KnowledgeUpdateServiceArray&) { return value(); }
};

template<>
struct DataType< ::rosplan_knowledge_msgs::KnowledgeUpdateServiceArray > {
  static const char* value()
  {
    return "rosplan_knowledge_msgs/KnowledgeUpdateServiceArray";
  }

  static const char* value(const ::rosplan_knowledge_msgs::KnowledgeUpdateServiceArray&) { return value(); }
};


// service_traits::MD5Sum< ::rosplan_knowledge_msgs::KnowledgeUpdateServiceArrayRequest> should match 
// service_traits::MD5Sum< ::rosplan_knowledge_msgs::KnowledgeUpdateServiceArray > 
template<>
struct MD5Sum< ::rosplan_knowledge_msgs::KnowledgeUpdateServiceArrayRequest>
{
  static const char* value()
  {
    return MD5Sum< ::rosplan_knowledge_msgs::KnowledgeUpdateServiceArray >::value();
  }
  static const char* value(const ::rosplan_knowledge_msgs::KnowledgeUpdateServiceArrayRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::rosplan_knowledge_msgs::KnowledgeUpdateServiceArrayRequest> should match 
// service_traits::DataType< ::rosplan_knowledge_msgs::KnowledgeUpdateServiceArray > 
template<>
struct DataType< ::rosplan_knowledge_msgs::KnowledgeUpdateServiceArrayRequest>
{
  static const char* value()
  {
    return DataType< ::rosplan_knowledge_msgs::KnowledgeUpdateServiceArray >::value();
  }
  static const char* value(const ::rosplan_knowledge_msgs::KnowledgeUpdateServiceArrayRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::rosplan_knowledge_msgs::KnowledgeUpdateServiceArrayResponse> should match 
// service_traits::MD5Sum< ::rosplan_knowledge_msgs::KnowledgeUpdateServiceArray > 
template<>
struct MD5Sum< ::rosplan_knowledge_msgs::KnowledgeUpdateServiceArrayResponse>
{
  static const char* value()
  {
    return MD5Sum< ::rosplan_knowledge_msgs::KnowledgeUpdateServiceArray >::value();
  }
  static const char* value(const ::rosplan_knowledge_msgs::KnowledgeUpdateServiceArrayResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::rosplan_knowledge_msgs::KnowledgeUpdateServiceArrayResponse> should match 
// service_traits::DataType< ::rosplan_knowledge_msgs::KnowledgeUpdateServiceArray > 
template<>
struct DataType< ::rosplan_knowledge_msgs::KnowledgeUpdateServiceArrayResponse>
{
  static const char* value()
  {
    return DataType< ::rosplan_knowledge_msgs::KnowledgeUpdateServiceArray >::value();
  }
  static const char* value(const ::rosplan_knowledge_msgs::KnowledgeUpdateServiceArrayResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // ROSPLAN_KNOWLEDGE_MSGS_MESSAGE_KNOWLEDGEUPDATESERVICEARRAY_H
