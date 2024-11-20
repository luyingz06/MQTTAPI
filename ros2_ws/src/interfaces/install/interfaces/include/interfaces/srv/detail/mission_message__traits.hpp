// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from interfaces:srv/MissionMessage.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES__SRV__DETAIL__MISSION_MESSAGE__TRAITS_HPP_
#define INTERFACES__SRV__DETAIL__MISSION_MESSAGE__TRAITS_HPP_

#include "interfaces/srv/detail/mission_message__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<interfaces::srv::MissionMessage_Request>()
{
  return "interfaces::srv::MissionMessage_Request";
}

template<>
inline const char * name<interfaces::srv::MissionMessage_Request>()
{
  return "interfaces/srv/MissionMessage_Request";
}

template<>
struct has_fixed_size<interfaces::srv::MissionMessage_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<interfaces::srv::MissionMessage_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<interfaces::srv::MissionMessage_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<interfaces::srv::MissionMessage_Response>()
{
  return "interfaces::srv::MissionMessage_Response";
}

template<>
inline const char * name<interfaces::srv::MissionMessage_Response>()
{
  return "interfaces/srv/MissionMessage_Response";
}

template<>
struct has_fixed_size<interfaces::srv::MissionMessage_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<interfaces::srv::MissionMessage_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<interfaces::srv::MissionMessage_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<interfaces::srv::MissionMessage>()
{
  return "interfaces::srv::MissionMessage";
}

template<>
inline const char * name<interfaces::srv::MissionMessage>()
{
  return "interfaces/srv/MissionMessage";
}

template<>
struct has_fixed_size<interfaces::srv::MissionMessage>
  : std::integral_constant<
    bool,
    has_fixed_size<interfaces::srv::MissionMessage_Request>::value &&
    has_fixed_size<interfaces::srv::MissionMessage_Response>::value
  >
{
};

template<>
struct has_bounded_size<interfaces::srv::MissionMessage>
  : std::integral_constant<
    bool,
    has_bounded_size<interfaces::srv::MissionMessage_Request>::value &&
    has_bounded_size<interfaces::srv::MissionMessage_Response>::value
  >
{
};

template<>
struct is_service<interfaces::srv::MissionMessage>
  : std::true_type
{
};

template<>
struct is_service_request<interfaces::srv::MissionMessage_Request>
  : std::true_type
{
};

template<>
struct is_service_response<interfaces::srv::MissionMessage_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // INTERFACES__SRV__DETAIL__MISSION_MESSAGE__TRAITS_HPP_
