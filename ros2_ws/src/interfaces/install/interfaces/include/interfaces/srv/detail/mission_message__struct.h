// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from interfaces:srv/MissionMessage.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES__SRV__DETAIL__MISSION_MESSAGE__STRUCT_H_
#define INTERFACES__SRV__DETAIL__MISSION_MESSAGE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'input_message'
#include "rosidl_runtime_c/string.h"

// Struct defined in srv/MissionMessage in the package interfaces.
typedef struct interfaces__srv__MissionMessage_Request
{
  int32_t input_value;
  rosidl_runtime_c__String input_message;
} interfaces__srv__MissionMessage_Request;

// Struct for a sequence of interfaces__srv__MissionMessage_Request.
typedef struct interfaces__srv__MissionMessage_Request__Sequence
{
  interfaces__srv__MissionMessage_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} interfaces__srv__MissionMessage_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'response_message'
// already included above
// #include "rosidl_runtime_c/string.h"

// Struct defined in srv/MissionMessage in the package interfaces.
typedef struct interfaces__srv__MissionMessage_Response
{
  bool success;
  rosidl_runtime_c__String response_message;
} interfaces__srv__MissionMessage_Response;

// Struct for a sequence of interfaces__srv__MissionMessage_Response.
typedef struct interfaces__srv__MissionMessage_Response__Sequence
{
  interfaces__srv__MissionMessage_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} interfaces__srv__MissionMessage_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // INTERFACES__SRV__DETAIL__MISSION_MESSAGE__STRUCT_H_
