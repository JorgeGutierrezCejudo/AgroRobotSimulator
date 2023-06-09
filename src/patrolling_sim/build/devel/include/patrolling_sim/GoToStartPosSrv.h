// Generated by gencpp from file patrolling_sim/GoToStartPosSrv.msg
// DO NOT EDIT!


#ifndef PATROLLING_SIM_MESSAGE_GOTOSTARTPOSSRV_H
#define PATROLLING_SIM_MESSAGE_GOTOSTARTPOSSRV_H

#include <ros/service_traits.h>


#include <patrolling_sim/GoToStartPosSrvRequest.h>
#include <patrolling_sim/GoToStartPosSrvResponse.h>


namespace patrolling_sim
{

struct GoToStartPosSrv
{

typedef GoToStartPosSrvRequest Request;
typedef GoToStartPosSrvResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct GoToStartPosSrv
} // namespace patrolling_sim


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::patrolling_sim::GoToStartPosSrv > {
  static const char* value()
  {
    return "46245284711564dca6f0ea10c19a6573";
  }

  static const char* value(const ::patrolling_sim::GoToStartPosSrv&) { return value(); }
};

template<>
struct DataType< ::patrolling_sim::GoToStartPosSrv > {
  static const char* value()
  {
    return "patrolling_sim/GoToStartPosSrv";
  }

  static const char* value(const ::patrolling_sim::GoToStartPosSrv&) { return value(); }
};


// service_traits::MD5Sum< ::patrolling_sim::GoToStartPosSrvRequest> should match
// service_traits::MD5Sum< ::patrolling_sim::GoToStartPosSrv >
template<>
struct MD5Sum< ::patrolling_sim::GoToStartPosSrvRequest>
{
  static const char* value()
  {
    return MD5Sum< ::patrolling_sim::GoToStartPosSrv >::value();
  }
  static const char* value(const ::patrolling_sim::GoToStartPosSrvRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::patrolling_sim::GoToStartPosSrvRequest> should match
// service_traits::DataType< ::patrolling_sim::GoToStartPosSrv >
template<>
struct DataType< ::patrolling_sim::GoToStartPosSrvRequest>
{
  static const char* value()
  {
    return DataType< ::patrolling_sim::GoToStartPosSrv >::value();
  }
  static const char* value(const ::patrolling_sim::GoToStartPosSrvRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::patrolling_sim::GoToStartPosSrvResponse> should match
// service_traits::MD5Sum< ::patrolling_sim::GoToStartPosSrv >
template<>
struct MD5Sum< ::patrolling_sim::GoToStartPosSrvResponse>
{
  static const char* value()
  {
    return MD5Sum< ::patrolling_sim::GoToStartPosSrv >::value();
  }
  static const char* value(const ::patrolling_sim::GoToStartPosSrvResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::patrolling_sim::GoToStartPosSrvResponse> should match
// service_traits::DataType< ::patrolling_sim::GoToStartPosSrv >
template<>
struct DataType< ::patrolling_sim::GoToStartPosSrvResponse>
{
  static const char* value()
  {
    return DataType< ::patrolling_sim::GoToStartPosSrv >::value();
  }
  static const char* value(const ::patrolling_sim::GoToStartPosSrvResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // PATROLLING_SIM_MESSAGE_GOTOSTARTPOSSRV_H
