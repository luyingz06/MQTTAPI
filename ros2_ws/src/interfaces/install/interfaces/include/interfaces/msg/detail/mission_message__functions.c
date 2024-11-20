// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from interfaces:msg/MissionMessage.idl
// generated code does not contain a copyright notice
#include "interfaces/msg/detail/mission_message__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `mission_id`
// Member `action`
#include "rosidl_runtime_c/string_functions.h"

bool
interfaces__msg__MissionMessage__init(interfaces__msg__MissionMessage * msg)
{
  if (!msg) {
    return false;
  }
  // mission_id
  if (!rosidl_runtime_c__String__init(&msg->mission_id)) {
    interfaces__msg__MissionMessage__fini(msg);
    return false;
  }
  // action
  if (!rosidl_runtime_c__String__init(&msg->action)) {
    interfaces__msg__MissionMessage__fini(msg);
    return false;
  }
  // order
  return true;
}

void
interfaces__msg__MissionMessage__fini(interfaces__msg__MissionMessage * msg)
{
  if (!msg) {
    return;
  }
  // mission_id
  rosidl_runtime_c__String__fini(&msg->mission_id);
  // action
  rosidl_runtime_c__String__fini(&msg->action);
  // order
}

bool
interfaces__msg__MissionMessage__are_equal(const interfaces__msg__MissionMessage * lhs, const interfaces__msg__MissionMessage * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // mission_id
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->mission_id), &(rhs->mission_id)))
  {
    return false;
  }
  // action
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->action), &(rhs->action)))
  {
    return false;
  }
  // order
  if (lhs->order != rhs->order) {
    return false;
  }
  return true;
}

bool
interfaces__msg__MissionMessage__copy(
  const interfaces__msg__MissionMessage * input,
  interfaces__msg__MissionMessage * output)
{
  if (!input || !output) {
    return false;
  }
  // mission_id
  if (!rosidl_runtime_c__String__copy(
      &(input->mission_id), &(output->mission_id)))
  {
    return false;
  }
  // action
  if (!rosidl_runtime_c__String__copy(
      &(input->action), &(output->action)))
  {
    return false;
  }
  // order
  output->order = input->order;
  return true;
}

interfaces__msg__MissionMessage *
interfaces__msg__MissionMessage__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  interfaces__msg__MissionMessage * msg = (interfaces__msg__MissionMessage *)allocator.allocate(sizeof(interfaces__msg__MissionMessage), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(interfaces__msg__MissionMessage));
  bool success = interfaces__msg__MissionMessage__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
interfaces__msg__MissionMessage__destroy(interfaces__msg__MissionMessage * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    interfaces__msg__MissionMessage__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
interfaces__msg__MissionMessage__Sequence__init(interfaces__msg__MissionMessage__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  interfaces__msg__MissionMessage * data = NULL;

  if (size) {
    data = (interfaces__msg__MissionMessage *)allocator.zero_allocate(size, sizeof(interfaces__msg__MissionMessage), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = interfaces__msg__MissionMessage__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        interfaces__msg__MissionMessage__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
interfaces__msg__MissionMessage__Sequence__fini(interfaces__msg__MissionMessage__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      interfaces__msg__MissionMessage__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

interfaces__msg__MissionMessage__Sequence *
interfaces__msg__MissionMessage__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  interfaces__msg__MissionMessage__Sequence * array = (interfaces__msg__MissionMessage__Sequence *)allocator.allocate(sizeof(interfaces__msg__MissionMessage__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = interfaces__msg__MissionMessage__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
interfaces__msg__MissionMessage__Sequence__destroy(interfaces__msg__MissionMessage__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    interfaces__msg__MissionMessage__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
interfaces__msg__MissionMessage__Sequence__are_equal(const interfaces__msg__MissionMessage__Sequence * lhs, const interfaces__msg__MissionMessage__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!interfaces__msg__MissionMessage__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
interfaces__msg__MissionMessage__Sequence__copy(
  const interfaces__msg__MissionMessage__Sequence * input,
  interfaces__msg__MissionMessage__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(interfaces__msg__MissionMessage);
    interfaces__msg__MissionMessage * data =
      (interfaces__msg__MissionMessage *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!interfaces__msg__MissionMessage__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          interfaces__msg__MissionMessage__fini(&data[i]);
        }
        free(data);
        return false;
      }
    }
    output->data = data;
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!interfaces__msg__MissionMessage__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
