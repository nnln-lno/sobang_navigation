// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from sobang_navigation:msg/LocalState.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "sobang_navigation/msg/detail/local_state__rosidl_typesupport_introspection_c.h"
#include "sobang_navigation/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "sobang_navigation/msg/detail/local_state__functions.h"
#include "sobang_navigation/msg/detail/local_state__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `pose`
#include "geometry_msgs/msg/pose.h"
// Member `pose`
#include "geometry_msgs/msg/detail/pose__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void sobang_navigation__msg__LocalState__rosidl_typesupport_introspection_c__LocalState_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  sobang_navigation__msg__LocalState__init(message_memory);
}

void sobang_navigation__msg__LocalState__rosidl_typesupport_introspection_c__LocalState_fini_function(void * message_memory)
{
  sobang_navigation__msg__LocalState__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember sobang_navigation__msg__LocalState__rosidl_typesupport_introspection_c__LocalState_message_member_array[2] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(sobang_navigation__msg__LocalState, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "pose",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(sobang_navigation__msg__LocalState, pose),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers sobang_navigation__msg__LocalState__rosidl_typesupport_introspection_c__LocalState_message_members = {
  "sobang_navigation__msg",  // message namespace
  "LocalState",  // message name
  2,  // number of fields
  sizeof(sobang_navigation__msg__LocalState),
  sobang_navigation__msg__LocalState__rosidl_typesupport_introspection_c__LocalState_message_member_array,  // message members
  sobang_navigation__msg__LocalState__rosidl_typesupport_introspection_c__LocalState_init_function,  // function to initialize message memory (memory has to be allocated)
  sobang_navigation__msg__LocalState__rosidl_typesupport_introspection_c__LocalState_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t sobang_navigation__msg__LocalState__rosidl_typesupport_introspection_c__LocalState_message_type_support_handle = {
  0,
  &sobang_navigation__msg__LocalState__rosidl_typesupport_introspection_c__LocalState_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_sobang_navigation
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, sobang_navigation, msg, LocalState)() {
  sobang_navigation__msg__LocalState__rosidl_typesupport_introspection_c__LocalState_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  sobang_navigation__msg__LocalState__rosidl_typesupport_introspection_c__LocalState_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Pose)();
  if (!sobang_navigation__msg__LocalState__rosidl_typesupport_introspection_c__LocalState_message_type_support_handle.typesupport_identifier) {
    sobang_navigation__msg__LocalState__rosidl_typesupport_introspection_c__LocalState_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &sobang_navigation__msg__LocalState__rosidl_typesupport_introspection_c__LocalState_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
