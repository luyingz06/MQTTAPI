// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from interfaces:msg/MissionMessage.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES__MSG__DETAIL__MISSION_MESSAGE__STRUCT_H_
#define INTERFACES__MSG__DETAIL__MISSION_MESSAGE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'details'
#include "rosidl_runtime_c/string.h"

// Struct defined in msg/MissionMessage in the package interfaces.
typedef struct interfaces__msg__MissionMessage
{
  int32_t mission_id;
  rosidl_runtime_c__String details;
} interfaces__msg__MissionMessage;

// Struct for a sequence of interfaces__msg__MissionMessage.
typedef struct interfaces__msg__MissionMessage__Sequence
{
  interfaces__msg__MissionMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} interfaces__msg__MissionMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // INTERFACES__MSG__DETAIL__MISSION_MESSAGE__STRUCT_H_
