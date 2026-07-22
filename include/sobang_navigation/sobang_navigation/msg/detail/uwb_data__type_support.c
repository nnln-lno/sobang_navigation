// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from sobang_navigation:msg/UwbData.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "sobang_navigation/msg/detail/uwb_data__rosidl_typesupport_introspection_c.h"
#include "sobang_navigation/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "sobang_navigation/msg/detail/uwb_data__functions.h"
#include "sobang_navigation/msg/detail/uwb_data__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `anchor_ids`
// Member `ranges`
#include "rosidl_runtime_c/primitives_sequence_functions.h"
// Member `pose`
#include "geometry_msgs/msg/pose_array.h"
// Member `pose`
#include "geometry_msgs/msg/detail/pose_array__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void sobang_navigation__msg__UwbData__rosidl_typesupport_introspection_c__UwbData_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  sobang_navigation__msg__UwbData__init(message_memory);
}

void sobang_navigation__msg__UwbData__rosidl_typesupport_introspection_c__UwbData_fini_function(void * message_memory)
{
  sobang_navigation__msg__UwbData__fini(message_memory);
}

size_t sobang_navigation__msg__UwbData__rosidl_typesupport_introspection_c__size_function__UwbData__anchor_ids(
  const void * untyped_member)
{
  const rosidl_runtime_c__int16__Sequence * member =
    (const rosidl_runtime_c__int16__Sequence *)(untyped_member);
  return member->size;
}

const void * sobang_navigation__msg__UwbData__rosidl_typesupport_introspection_c__get_const_function__UwbData__anchor_ids(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__int16__Sequence * member =
    (const rosidl_runtime_c__int16__Sequence *)(untyped_member);
  return &member->data[index];
}

void * sobang_navigation__msg__UwbData__rosidl_typesupport_introspection_c__get_function__UwbData__anchor_ids(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__int16__Sequence * member =
    (rosidl_runtime_c__int16__Sequence *)(untyped_member);
  return &member->data[index];
}

void sobang_navigation__msg__UwbData__rosidl_typesupport_introspection_c__fetch_function__UwbData__anchor_ids(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const int16_t * item =
    ((const int16_t *)
    sobang_navigation__msg__UwbData__rosidl_typesupport_introspection_c__get_const_function__UwbData__anchor_ids(untyped_member, index));
  int16_t * value =
    (int16_t *)(untyped_value);
  *value = *item;
}

void sobang_navigation__msg__UwbData__rosidl_typesupport_introspection_c__assign_function__UwbData__anchor_ids(
  void * untyped_member, size_t index, const void * untyped_value)
{
  int16_t * item =
    ((int16_t *)
    sobang_navigation__msg__UwbData__rosidl_typesupport_introspection_c__get_function__UwbData__anchor_ids(untyped_member, index));
  const int16_t * value =
    (const int16_t *)(untyped_value);
  *item = *value;
}

bool sobang_navigation__msg__UwbData__rosidl_typesupport_introspection_c__resize_function__UwbData__anchor_ids(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__int16__Sequence * member =
    (rosidl_runtime_c__int16__Sequence *)(untyped_member);
  rosidl_runtime_c__int16__Sequence__fini(member);
  return rosidl_runtime_c__int16__Sequence__init(member, size);
}

size_t sobang_navigation__msg__UwbData__rosidl_typesupport_introspection_c__size_function__UwbData__ranges(
  const void * untyped_member)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return member->size;
}

const void * sobang_navigation__msg__UwbData__rosidl_typesupport_introspection_c__get_const_function__UwbData__ranges(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void * sobang_navigation__msg__UwbData__rosidl_typesupport_introspection_c__get_function__UwbData__ranges(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void sobang_navigation__msg__UwbData__rosidl_typesupport_introspection_c__fetch_function__UwbData__ranges(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    sobang_navigation__msg__UwbData__rosidl_typesupport_introspection_c__get_const_function__UwbData__ranges(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void sobang_navigation__msg__UwbData__rosidl_typesupport_introspection_c__assign_function__UwbData__ranges(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    sobang_navigation__msg__UwbData__rosidl_typesupport_introspection_c__get_function__UwbData__ranges(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

bool sobang_navigation__msg__UwbData__rosidl_typesupport_introspection_c__resize_function__UwbData__ranges(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  rosidl_runtime_c__float__Sequence__fini(member);
  return rosidl_runtime_c__float__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember sobang_navigation__msg__UwbData__rosidl_typesupport_introspection_c__UwbData_message_member_array[4] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(sobang_navigation__msg__UwbData, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "anchor_ids",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(sobang_navigation__msg__UwbData, anchor_ids),  // bytes offset in struct
    NULL,  // default value
    sobang_navigation__msg__UwbData__rosidl_typesupport_introspection_c__size_function__UwbData__anchor_ids,  // size() function pointer
    sobang_navigation__msg__UwbData__rosidl_typesupport_introspection_c__get_const_function__UwbData__anchor_ids,  // get_const(index) function pointer
    sobang_navigation__msg__UwbData__rosidl_typesupport_introspection_c__get_function__UwbData__anchor_ids,  // get(index) function pointer
    sobang_navigation__msg__UwbData__rosidl_typesupport_introspection_c__fetch_function__UwbData__anchor_ids,  // fetch(index, &value) function pointer
    sobang_navigation__msg__UwbData__rosidl_typesupport_introspection_c__assign_function__UwbData__anchor_ids,  // assign(index, value) function pointer
    sobang_navigation__msg__UwbData__rosidl_typesupport_introspection_c__resize_function__UwbData__anchor_ids  // resize(index) function pointer
  },
  {
    "ranges",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(sobang_navigation__msg__UwbData, ranges),  // bytes offset in struct
    NULL,  // default value
    sobang_navigation__msg__UwbData__rosidl_typesupport_introspection_c__size_function__UwbData__ranges,  // size() function pointer
    sobang_navigation__msg__UwbData__rosidl_typesupport_introspection_c__get_const_function__UwbData__ranges,  // get_const(index) function pointer
    sobang_navigation__msg__UwbData__rosidl_typesupport_introspection_c__get_function__UwbData__ranges,  // get(index) function pointer
    sobang_navigation__msg__UwbData__rosidl_typesupport_introspection_c__fetch_function__UwbData__ranges,  // fetch(index, &value) function pointer
    sobang_navigation__msg__UwbData__rosidl_typesupport_introspection_c__assign_function__UwbData__ranges,  // assign(index, value) function pointer
    sobang_navigation__msg__UwbData__rosidl_typesupport_introspection_c__resize_function__UwbData__ranges  // resize(index) function pointer
  },
  {
    "pose",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(sobang_navigation__msg__UwbData, pose),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers sobang_navigation__msg__UwbData__rosidl_typesupport_introspection_c__UwbData_message_members = {
  "sobang_navigation__msg",  // message namespace
  "UwbData",  // message name
  4,  // number of fields
  sizeof(sobang_navigation__msg__UwbData),
  sobang_navigation__msg__UwbData__rosidl_typesupport_introspection_c__UwbData_message_member_array,  // message members
  sobang_navigation__msg__UwbData__rosidl_typesupport_introspection_c__UwbData_init_function,  // function to initialize message memory (memory has to be allocated)
  sobang_navigation__msg__UwbData__rosidl_typesupport_introspection_c__UwbData_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t sobang_navigation__msg__UwbData__rosidl_typesupport_introspection_c__UwbData_message_type_support_handle = {
  0,
  &sobang_navigation__msg__UwbData__rosidl_typesupport_introspection_c__UwbData_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_sobang_navigation
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, sobang_navigation, msg, UwbData)() {
  sobang_navigation__msg__UwbData__rosidl_typesupport_introspection_c__UwbData_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  sobang_navigation__msg__UwbData__rosidl_typesupport_introspection_c__UwbData_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, PoseArray)();
  if (!sobang_navigation__msg__UwbData__rosidl_typesupport_introspection_c__UwbData_message_type_support_handle.typesupport_identifier) {
    sobang_navigation__msg__UwbData__rosidl_typesupport_introspection_c__UwbData_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &sobang_navigation__msg__UwbData__rosidl_typesupport_introspection_c__UwbData_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
