// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from sobang_navigation:msg/LocalState.idl
// generated code does not contain a copyright notice
#include "sobang_navigation/msg/detail/local_state__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `pose`
#include "geometry_msgs/msg/detail/pose__functions.h"

bool
sobang_navigation__msg__LocalState__init(sobang_navigation__msg__LocalState * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    sobang_navigation__msg__LocalState__fini(msg);
    return false;
  }
  // pose
  if (!geometry_msgs__msg__Pose__init(&msg->pose)) {
    sobang_navigation__msg__LocalState__fini(msg);
    return false;
  }
  return true;
}

void
sobang_navigation__msg__LocalState__fini(sobang_navigation__msg__LocalState * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // pose
  geometry_msgs__msg__Pose__fini(&msg->pose);
}

bool
sobang_navigation__msg__LocalState__are_equal(const sobang_navigation__msg__LocalState * lhs, const sobang_navigation__msg__LocalState * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__are_equal(
      &(lhs->header), &(rhs->header)))
  {
    return false;
  }
  // pose
  if (!geometry_msgs__msg__Pose__are_equal(
      &(lhs->pose), &(rhs->pose)))
  {
    return false;
  }
  return true;
}

bool
sobang_navigation__msg__LocalState__copy(
  const sobang_navigation__msg__LocalState * input,
  sobang_navigation__msg__LocalState * output)
{
  if (!input || !output) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__copy(
      &(input->header), &(output->header)))
  {
    return false;
  }
  // pose
  if (!geometry_msgs__msg__Pose__copy(
      &(input->pose), &(output->pose)))
  {
    return false;
  }
  return true;
}

sobang_navigation__msg__LocalState *
sobang_navigation__msg__LocalState__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  sobang_navigation__msg__LocalState * msg = (sobang_navigation__msg__LocalState *)allocator.allocate(sizeof(sobang_navigation__msg__LocalState), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(sobang_navigation__msg__LocalState));
  bool success = sobang_navigation__msg__LocalState__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
sobang_navigation__msg__LocalState__destroy(sobang_navigation__msg__LocalState * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    sobang_navigation__msg__LocalState__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
sobang_navigation__msg__LocalState__Sequence__init(sobang_navigation__msg__LocalState__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  sobang_navigation__msg__LocalState * data = NULL;

  if (size) {
    data = (sobang_navigation__msg__LocalState *)allocator.zero_allocate(size, sizeof(sobang_navigation__msg__LocalState), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = sobang_navigation__msg__LocalState__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        sobang_navigation__msg__LocalState__fini(&data[i - 1]);
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
sobang_navigation__msg__LocalState__Sequence__fini(sobang_navigation__msg__LocalState__Sequence * array)
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
      sobang_navigation__msg__LocalState__fini(&array->data[i]);
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

sobang_navigation__msg__LocalState__Sequence *
sobang_navigation__msg__LocalState__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  sobang_navigation__msg__LocalState__Sequence * array = (sobang_navigation__msg__LocalState__Sequence *)allocator.allocate(sizeof(sobang_navigation__msg__LocalState__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = sobang_navigation__msg__LocalState__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
sobang_navigation__msg__LocalState__Sequence__destroy(sobang_navigation__msg__LocalState__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    sobang_navigation__msg__LocalState__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
sobang_navigation__msg__LocalState__Sequence__are_equal(const sobang_navigation__msg__LocalState__Sequence * lhs, const sobang_navigation__msg__LocalState__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!sobang_navigation__msg__LocalState__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
sobang_navigation__msg__LocalState__Sequence__copy(
  const sobang_navigation__msg__LocalState__Sequence * input,
  sobang_navigation__msg__LocalState__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(sobang_navigation__msg__LocalState);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    sobang_navigation__msg__LocalState * data =
      (sobang_navigation__msg__LocalState *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!sobang_navigation__msg__LocalState__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          sobang_navigation__msg__LocalState__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!sobang_navigation__msg__LocalState__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
