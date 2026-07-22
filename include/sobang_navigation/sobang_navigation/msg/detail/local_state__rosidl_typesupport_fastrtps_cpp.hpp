// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__rosidl_typesupport_fastrtps_cpp.hpp.em
// with input from sobang_navigation:msg/LocalState.idl
// generated code does not contain a copyright notice

#ifndef SOBANG_NAVIGATION__MSG__DETAIL__LOCAL_STATE__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
#define SOBANG_NAVIGATION__MSG__DETAIL__LOCAL_STATE__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_

#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "sobang_navigation/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
#include "sobang_navigation/msg/detail/local_state__struct.hpp"

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

#include "fastcdr/Cdr.h"

namespace sobang_navigation
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_sobang_navigation
cdr_serialize(
  const sobang_navigation::msg::LocalState & ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_sobang_navigation
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  sobang_navigation::msg::LocalState & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_sobang_navigation
get_serialized_size(
  const sobang_navigation::msg::LocalState & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_sobang_navigation
max_serialized_size_LocalState(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace sobang_navigation

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_sobang_navigation
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, sobang_navigation, msg, LocalState)();

#ifdef __cplusplus
}
#endif

#endif  // SOBANG_NAVIGATION__MSG__DETAIL__LOCAL_STATE__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
