// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from interfaces:msg/MissionMessage.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES__MSG__DETAIL__MISSION_MESSAGE__BUILDER_HPP_
#define INTERFACES__MSG__DETAIL__MISSION_MESSAGE__BUILDER_HPP_

#include "interfaces/msg/detail/mission_message__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace interfaces
{

namespace msg
{

namespace builder
{

class Init_MissionMessage_details
{
public:
  explicit Init_MissionMessage_details(::interfaces::msg::MissionMessage & msg)
  : msg_(msg)
  {}
  ::interfaces::msg::MissionMessage details(::interfaces::msg::MissionMessage::_details_type arg)
  {
    msg_.details = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interfaces::msg::MissionMessage msg_;
};

class Init_MissionMessage_mission_id
{
public:
  Init_MissionMessage_mission_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MissionMessage_details mission_id(::interfaces::msg::MissionMessage::_mission_id_type arg)
  {
    msg_.mission_id = std::move(arg);
    return Init_MissionMessage_details(msg_);
  }

private:
  ::interfaces::msg::MissionMessage msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::interfaces::msg::MissionMessage>()
{
  return interfaces::msg::builder::Init_MissionMessage_mission_id();
}

}  // namespace interfaces

#endif  // INTERFACES__MSG__DETAIL__MISSION_MESSAGE__BUILDER_HPP_
