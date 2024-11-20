// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from interfaces:srv/MissionMessage.idl
// generated code does not contain a copyright notice
#include "interfaces/srv/detail/mission_message__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "interfaces/srv/detail/mission_message__struct.h"
#include "interfaces/srv/detail/mission_message__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "rosidl_runtime_c/string.h"  // input_message
#include "rosidl_runtime_c/string_functions.h"  // input_message

// forward declare type support functions


using _MissionMessage_Request__ros_msg_type = interfaces__srv__MissionMessage_Request;

static bool _MissionMessage_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _MissionMessage_Request__ros_msg_type * ros_message = static_cast<const _MissionMessage_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: input_value
  {
    cdr << ros_message->input_value;
  }

  // Field name: input_message
  {
    const rosidl_runtime_c__String * str = &ros_message->input_message;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  return true;
}

static bool _MissionMessage_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _MissionMessage_Request__ros_msg_type * ros_message = static_cast<_MissionMessage_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: input_value
  {
    cdr >> ros_message->input_value;
  }

  // Field name: input_message
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->input_message.data) {
      rosidl_runtime_c__String__init(&ros_message->input_message);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->input_message,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'input_message'\n");
      return false;
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_interfaces
size_t get_serialized_size_interfaces__srv__MissionMessage_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _MissionMessage_Request__ros_msg_type * ros_message = static_cast<const _MissionMessage_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name input_value
  {
    size_t item_size = sizeof(ros_message->input_value);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name input_message
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->input_message.size + 1);

  return current_alignment - initial_alignment;
}

static uint32_t _MissionMessage_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_interfaces__srv__MissionMessage_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_interfaces
size_t max_serialized_size_interfaces__srv__MissionMessage_Request(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: input_value
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: input_message
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _MissionMessage_Request__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_interfaces__srv__MissionMessage_Request(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_MissionMessage_Request = {
  "interfaces::srv",
  "MissionMessage_Request",
  _MissionMessage_Request__cdr_serialize,
  _MissionMessage_Request__cdr_deserialize,
  _MissionMessage_Request__get_serialized_size,
  _MissionMessage_Request__max_serialized_size
};

static rosidl_message_type_support_t _MissionMessage_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_MissionMessage_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, interfaces, srv, MissionMessage_Request)() {
  return &_MissionMessage_Request__type_support;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include <cassert>
// already included above
// #include <limits>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "interfaces/srv/detail/mission_message__struct.h"
// already included above
// #include "interfaces/srv/detail/mission_message__functions.h"
// already included above
// #include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

// already included above
// #include "rosidl_runtime_c/string.h"  // response_message
// already included above
// #include "rosidl_runtime_c/string_functions.h"  // response_message

// forward declare type support functions


using _MissionMessage_Response__ros_msg_type = interfaces__srv__MissionMessage_Response;

static bool _MissionMessage_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _MissionMessage_Response__ros_msg_type * ros_message = static_cast<const _MissionMessage_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: success
  {
    cdr << (ros_message->success ? true : false);
  }

  // Field name: response_message
  {
    const rosidl_runtime_c__String * str = &ros_message->response_message;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  return true;
}

static bool _MissionMessage_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _MissionMessage_Response__ros_msg_type * ros_message = static_cast<_MissionMessage_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: success
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->success = tmp ? true : false;
  }

  // Field name: response_message
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->response_message.data) {
      rosidl_runtime_c__String__init(&ros_message->response_message);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->response_message,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'response_message'\n");
      return false;
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_interfaces
size_t get_serialized_size_interfaces__srv__MissionMessage_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _MissionMessage_Response__ros_msg_type * ros_message = static_cast<const _MissionMessage_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name success
  {
    size_t item_size = sizeof(ros_message->success);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name response_message
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->response_message.size + 1);

  return current_alignment - initial_alignment;
}

static uint32_t _MissionMessage_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_interfaces__srv__MissionMessage_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_interfaces
size_t max_serialized_size_interfaces__srv__MissionMessage_Response(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: success
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: response_message
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _MissionMessage_Response__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_interfaces__srv__MissionMessage_Response(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_MissionMessage_Response = {
  "interfaces::srv",
  "MissionMessage_Response",
  _MissionMessage_Response__cdr_serialize,
  _MissionMessage_Response__cdr_deserialize,
  _MissionMessage_Response__get_serialized_size,
  _MissionMessage_Response__max_serialized_size
};

static rosidl_message_type_support_t _MissionMessage_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_MissionMessage_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, interfaces, srv, MissionMessage_Response)() {
  return &_MissionMessage_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "interfaces/srv/mission_message.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t MissionMessage__callbacks = {
  "interfaces::srv",
  "MissionMessage",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, interfaces, srv, MissionMessage_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, interfaces, srv, MissionMessage_Response)(),
};

static rosidl_service_type_support_t MissionMessage__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &MissionMessage__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, interfaces, srv, MissionMessage)() {
  return &MissionMessage__handle;
}

#if defined(__cplusplus)
}
#endif
