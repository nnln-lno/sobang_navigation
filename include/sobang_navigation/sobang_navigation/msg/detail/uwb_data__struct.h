// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from sobang_navigation:msg/UwbData.idl
// generated code does not contain a copyright notice

#ifndef SOBANG_NAVIGATION__MSG__DETAIL__UWB_DATA__STRUCT_H_
#define SOBANG_NAVIGATION__MSG__DETAIL__UWB_DATA__STRUCT_H_

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
// Member 'anchor_ids'
// Member 'ranges'
#include "rosidl_runtime_c/primitives_sequence.h"
// Member 'pose'
#include "geometry_msgs/msg/detail/pose_array__struct.h"

/// Struct defined in msg/UwbData in the package sobang_navigation.
typedef struct sobang_navigation__msg__UwbData
{
  std_msgs__msg__Header header;
  rosidl_runtime_c__int16__Sequence anchor_ids;
  rosidl_runtime_c__float__Sequence ranges;
  geometry_msgs__msg__PoseArray pose;
} sobang_navigation__msg__UwbData;

// Struct for a sequence of sobang_navigation__msg__UwbData.
typedef struct sobang_navigation__msg__UwbData__Sequence
{
  sobang_navigation__msg__UwbData * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} sobang_navigation__msg__UwbData__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SOBANG_NAVIGATION__MSG__DETAIL__UWB_DATA__STRUCT_H_
