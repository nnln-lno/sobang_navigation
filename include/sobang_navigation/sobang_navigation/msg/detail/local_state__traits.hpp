// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from sobang_navigation:msg/LocalState.idl
// generated code does not contain a copyright notice

#ifndef SOBANG_NAVIGATION__MSG__DETAIL__LOCAL_STATE__TRAITS_HPP_
#define SOBANG_NAVIGATION__MSG__DETAIL__LOCAL_STATE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "sobang_navigation/msg/detail/local_state__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'pose'
#include "geometry_msgs/msg/detail/pose__traits.hpp"

namespace sobang_navigation
{

namespace msg
{

inline void to_flow_style_yaml(
  const LocalState & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: pose
  {
    out << "pose: ";
    to_flow_style_yaml(msg.pose, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const LocalState & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: header
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "header:\n";
    to_block_style_yaml(msg.header, out, indentation + 2);
  }

  // member: pose
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pose:\n";
    to_block_style_yaml(msg.pose, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const LocalState & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace sobang_navigation

namespace rosidl_generator_traits
{

[[deprecated("use sobang_navigation::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const sobang_navigation::msg::LocalState & msg,
  std::ostream & out, size_t indentation = 0)
{
  sobang_navigation::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use sobang_navigation::msg::to_yaml() instead")]]
inline std::string to_yaml(const sobang_navigation::msg::LocalState & msg)
{
  return sobang_navigation::msg::to_yaml(msg);
}

template<>
inline const char * data_type<sobang_navigation::msg::LocalState>()
{
  return "sobang_navigation::msg::LocalState";
}

template<>
inline const char * name<sobang_navigation::msg::LocalState>()
{
  return "sobang_navigation/msg/LocalState";
}

template<>
struct has_fixed_size<sobang_navigation::msg::LocalState>
  : std::integral_constant<bool, has_fixed_size<geometry_msgs::msg::Pose>::value && has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<sobang_navigation::msg::LocalState>
  : std::integral_constant<bool, has_bounded_size<geometry_msgs::msg::Pose>::value && has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<sobang_navigation::msg::LocalState>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // SOBANG_NAVIGATION__MSG__DETAIL__LOCAL_STATE__TRAITS_HPP_
