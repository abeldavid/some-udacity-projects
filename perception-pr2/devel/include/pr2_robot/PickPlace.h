// Generated by gencpp from file pr2_robot/PickPlace.msg
// DO NOT EDIT!


#ifndef PR2_ROBOT_MESSAGE_PICKPLACE_H
#define PR2_ROBOT_MESSAGE_PICKPLACE_H

#include <ros/service_traits.h>


#include <pr2_robot/PickPlaceRequest.h>
#include <pr2_robot/PickPlaceResponse.h>


namespace pr2_robot
{

struct PickPlace
{

typedef PickPlaceRequest Request;
typedef PickPlaceResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct PickPlace
} // namespace pr2_robot


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::pr2_robot::PickPlace > {
  static const char* value()
  {
    return "803571dc87b1116273df703ec8a12b59";
  }

  static const char* value(const ::pr2_robot::PickPlace&) { return value(); }
};

template<>
struct DataType< ::pr2_robot::PickPlace > {
  static const char* value()
  {
    return "pr2_robot/PickPlace";
  }

  static const char* value(const ::pr2_robot::PickPlace&) { return value(); }
};


// service_traits::MD5Sum< ::pr2_robot::PickPlaceRequest> should match 
// service_traits::MD5Sum< ::pr2_robot::PickPlace > 
template<>
struct MD5Sum< ::pr2_robot::PickPlaceRequest>
{
  static const char* value()
  {
    return MD5Sum< ::pr2_robot::PickPlace >::value();
  }
  static const char* value(const ::pr2_robot::PickPlaceRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::pr2_robot::PickPlaceRequest> should match 
// service_traits::DataType< ::pr2_robot::PickPlace > 
template<>
struct DataType< ::pr2_robot::PickPlaceRequest>
{
  static const char* value()
  {
    return DataType< ::pr2_robot::PickPlace >::value();
  }
  static const char* value(const ::pr2_robot::PickPlaceRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::pr2_robot::PickPlaceResponse> should match 
// service_traits::MD5Sum< ::pr2_robot::PickPlace > 
template<>
struct MD5Sum< ::pr2_robot::PickPlaceResponse>
{
  static const char* value()
  {
    return MD5Sum< ::pr2_robot::PickPlace >::value();
  }
  static const char* value(const ::pr2_robot::PickPlaceResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::pr2_robot::PickPlaceResponse> should match 
// service_traits::DataType< ::pr2_robot::PickPlace > 
template<>
struct DataType< ::pr2_robot::PickPlaceResponse>
{
  static const char* value()
  {
    return DataType< ::pr2_robot::PickPlace >::value();
  }
  static const char* value(const ::pr2_robot::PickPlaceResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // PR2_ROBOT_MESSAGE_PICKPLACE_H
