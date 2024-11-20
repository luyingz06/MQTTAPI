// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from interfaces:msg/MissionMessage.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES__MSG__DETAIL__MISSION_MESSAGE__TRAITS_HPP_
#define INTERFACES__MSG__DETAIL__MISSION_MESSAGE__TRAITS_HPP_

#include "interfaces/msg/detail/mission_message__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<interfaces::msg::MissionMessage>()
{
  return "interfaces::msg::MissionMessage";
}

template<>
inline const char * name<interfaces::msg::MissionMessage>()
{
  return "interfaces/msg/MissionMessage";
}

template<>
struct has_fixed_size<interfaces::msg::MissionMessage>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<interfaces::msg::MissionMessage>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<interfaces::msg::MissionMessage>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // INTERFACES__MSG__DETAIL__MISSION_MESSAGE__TRAITS_HPP_
