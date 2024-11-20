// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from interfaces:srv/MissionMessage.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES__SRV__DETAIL__MISSION_MESSAGE__BUILDER_HPP_
#define INTERFACES__SRV__DETAIL__MISSION_MESSAGE__BUILDER_HPP_

#include "interfaces/srv/detail/mission_message__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace interfaces
{

namespace srv
{

namespace builder
{

class Init_MissionMessage_Request_input_message
{
public:
  explicit Init_MissionMessage_Request_input_message(::interfaces::srv::MissionMessage_Request & msg)
  : msg_(msg)
  {}
  ::interfaces::srv::MissionMessage_Request input_message(::interfaces::srv::MissionMessage_Request::_input_message_type arg)
  {
    msg_.input_message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interfaces::srv::MissionMessage_Request msg_;
};

class Init_MissionMessage_Request_input_value
{
public:
  Init_MissionMessage_Request_input_value()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MissionMessage_Request_input_message input_value(::interfaces::srv::MissionMessage_Request::_input_value_type arg)
  {
    msg_.input_value = std::move(arg);
    return Init_MissionMessage_Request_input_message(msg_);
  }

private:
  ::interfaces::srv::MissionMessage_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::interfaces::srv::MissionMessage_Request>()
{
  return interfaces::srv::builder::Init_MissionMessage_Request_input_value();
}

}  // namespace interfaces


namespace interfaces
{

namespace srv
{

namespace builder
{

class Init_MissionMessage_Response_response_message
{
public:
  explicit Init_MissionMessage_Response_response_message(::interfaces::srv::MissionMessage_Response & msg)
  : msg_(msg)
  {}
  ::interfaces::srv::MissionMessage_Response response_message(::interfaces::srv::MissionMessage_Response::_response_message_type arg)
  {
    msg_.response_message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interfaces::srv::MissionMessage_Response msg_;
};

class Init_MissionMessage_Response_success
{
public:
  Init_MissionMessage_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MissionMessage_Response_response_message success(::interfaces::srv::MissionMessage_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_MissionMessage_Response_response_message(msg_);
  }

private:
  ::interfaces::srv::MissionMessage_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::interfaces::srv::MissionMessage_Response>()
{
  return interfaces::srv::builder::Init_MissionMessage_Response_success();
}

}  // namespace interfaces

#endif  // INTERFACES__SRV__DETAIL__MISSION_MESSAGE__BUILDER_HPP_
