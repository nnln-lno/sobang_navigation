// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from sobang_navigation:msg/LocalState.idl
// generated code does not contain a copyright notice

#ifndef SOBANG_NAVIGATION__MSG__DETAIL__LOCAL_STATE__STRUCT_H_
#define SOBANG_NAVIGATION__MSG__DETAIL__LOCAL_STATE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'pose'
#include "geometry_msgs/msg/detail/pose__struct.h"

/// Struct defined in msg/LocalState in the package sobang_navigation.
typedef struct sobang_navigation__msg__LocalState
{
  std_msgs__msg__Header header;
  geometry_msgs__msg__Pose pose;
} sobang_navigation__msg__LocalState;

// Struct for a sequence of sobang_navigation__msg__LocalState.
typedef struct sobang_navigation__msg__LocalState__Sequence
{
  sobang_navigation__msg__LocalState * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} sobang_navigation__msg__LocalState__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SOBANG_NAVIGATION__MSG__DETAIL__LOCAL_STATE__STRUCT_H_
