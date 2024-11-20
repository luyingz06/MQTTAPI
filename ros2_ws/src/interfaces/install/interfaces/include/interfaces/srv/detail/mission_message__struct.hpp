// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from interfaces:srv/MissionMessage.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES__SRV__DETAIL__MISSION_MESSAGE__STRUCT_HPP_
#define INTERFACES__SRV__DETAIL__MISSION_MESSAGE__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__interfaces__srv__MissionMessage_Request __attribute__((deprecated))
#else
# define DEPRECATED__interfaces__srv__MissionMessage_Request __declspec(deprecated)
#endif

namespace interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct MissionMessage_Request_
{
  using Type = MissionMessage_Request_<ContainerAllocator>;

  explicit MissionMessage_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->input_value = 0l;
      this->input_message = "";
    }
  }

  explicit MissionMessage_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : input_message(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->input_value = 0l;
      this->input_message = "";
    }
  }

  // field types and members
  using _input_value_type =
    int32_t;
  _input_value_type input_value;
  using _input_message_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _input_message_type input_message;

  // setters for named parameter idiom
  Type & set__input_value(
    const int32_t & _arg)
  {
    this->input_value = _arg;
    return *this;
  }
  Type & set__input_message(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->input_message = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    interfaces::srv::MissionMessage_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const interfaces::srv::MissionMessage_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<interfaces::srv::MissionMessage_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<interfaces::srv::MissionMessage_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      interfaces::srv::MissionMessage_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<interfaces::srv::MissionMessage_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      interfaces::srv::MissionMessage_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<interfaces::srv::MissionMessage_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<interfaces::srv::MissionMessage_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<interfaces::srv::MissionMessage_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__interfaces__srv__MissionMessage_Request
    std::shared_ptr<interfaces::srv::MissionMessage_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__interfaces__srv__MissionMessage_Request
    std::shared_ptr<interfaces::srv::MissionMessage_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MissionMessage_Request_ & other) const
  {
    if (this->input_value != other.input_value) {
      return false;
    }
    if (this->input_message != other.input_message) {
      return false;
    }
    return true;
  }
  bool operator!=(const MissionMessage_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MissionMessage_Request_

// alias to use template instance with default allocator
using MissionMessage_Request =
  interfaces::srv::MissionMessage_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace interfaces


#ifndef _WIN32
# define DEPRECATED__interfaces__srv__MissionMessage_Response __attribute__((deprecated))
#else
# define DEPRECATED__interfaces__srv__MissionMessage_Response __declspec(deprecated)
#endif

namespace interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct MissionMessage_Response_
{
  using Type = MissionMessage_Response_<ContainerAllocator>;

  explicit MissionMessage_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->response_message = "";
    }
  }

  explicit MissionMessage_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : response_message(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->response_message = "";
    }
  }

  // field types and members
  using _success_type =
    bool;
  _success_type success;
  using _response_message_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _response_message_type response_message;

  // setters for named parameter idiom
  Type & set__success(
    const bool & _arg)
  {
    this->success = _arg;
    return *this;
  }
  Type & set__response_message(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->response_message = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    interfaces::srv::MissionMessage_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const interfaces::srv::MissionMessage_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<interfaces::srv::MissionMessage_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<interfaces::srv::MissionMessage_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      interfaces::srv::MissionMessage_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<interfaces::srv::MissionMessage_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      interfaces::srv::MissionMessage_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<interfaces::srv::MissionMessage_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<interfaces::srv::MissionMessage_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<interfaces::srv::MissionMessage_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__interfaces__srv__MissionMessage_Response
    std::shared_ptr<interfaces::srv::MissionMessage_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__interfaces__srv__MissionMessage_Response
    std::shared_ptr<interfaces::srv::MissionMessage_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MissionMessage_Response_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    if (this->response_message != other.response_message) {
      return false;
    }
    return true;
  }
  bool operator!=(const MissionMessage_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MissionMessage_Response_

// alias to use template instance with default allocator
using MissionMessage_Response =
  interfaces::srv::MissionMessage_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace interfaces

namespace interfaces
{

namespace srv
{

struct MissionMessage
{
  using Request = interfaces::srv::MissionMessage_Request;
  using Response = interfaces::srv::MissionMessage_Response;
};

}  // namespace srv

}  // namespace interfaces

#endif  // INTERFACES__SRV__DETAIL__MISSION_MESSAGE__STRUCT_HPP_
