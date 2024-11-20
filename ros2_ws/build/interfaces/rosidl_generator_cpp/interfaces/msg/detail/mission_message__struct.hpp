// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from interfaces:msg/MissionMessage.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES__MSG__DETAIL__MISSION_MESSAGE__STRUCT_HPP_
#define INTERFACES__MSG__DETAIL__MISSION_MESSAGE__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__interfaces__msg__MissionMessage __attribute__((deprecated))
#else
# define DEPRECATED__interfaces__msg__MissionMessage __declspec(deprecated)
#endif

namespace interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct MissionMessage_
{
  using Type = MissionMessage_<ContainerAllocator>;

  explicit MissionMessage_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->mission_id = 0l;
      this->details = "";
    }
  }

  explicit MissionMessage_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : details(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->mission_id = 0l;
      this->details = "";
    }
  }

  // field types and members
  using _mission_id_type =
    int32_t;
  _mission_id_type mission_id;
  using _details_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _details_type details;

  // setters for named parameter idiom
  Type & set__mission_id(
    const int32_t & _arg)
  {
    this->mission_id = _arg;
    return *this;
  }
  Type & set__details(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->details = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    interfaces::msg::MissionMessage_<ContainerAllocator> *;
  using ConstRawPtr =
    const interfaces::msg::MissionMessage_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<interfaces::msg::MissionMessage_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<interfaces::msg::MissionMessage_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      interfaces::msg::MissionMessage_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<interfaces::msg::MissionMessage_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      interfaces::msg::MissionMessage_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<interfaces::msg::MissionMessage_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<interfaces::msg::MissionMessage_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<interfaces::msg::MissionMessage_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__interfaces__msg__MissionMessage
    std::shared_ptr<interfaces::msg::MissionMessage_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__interfaces__msg__MissionMessage
    std::shared_ptr<interfaces::msg::MissionMessage_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MissionMessage_ & other) const
  {
    if (this->mission_id != other.mission_id) {
      return false;
    }
    if (this->details != other.details) {
      return false;
    }
    return true;
  }
  bool operator!=(const MissionMessage_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MissionMessage_

// alias to use template instance with default allocator
using MissionMessage =
  interfaces::msg::MissionMessage_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace interfaces

#endif  // INTERFACES__MSG__DETAIL__MISSION_MESSAGE__STRUCT_HPP_
