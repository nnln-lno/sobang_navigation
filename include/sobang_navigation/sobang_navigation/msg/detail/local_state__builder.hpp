// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from sobang_navigation:msg/LocalState.idl
// generated code does not contain a copyright notice

#ifndef SOBANG_NAVIGATION__MSG__DETAIL__LOCAL_STATE__BUILDER_HPP_
#define SOBANG_NAVIGATION__MSG__DETAIL__LOCAL_STATE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "sobang_navigation/msg/detail/local_state__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace sobang_navigation
{

namespace msg
{

namespace builder
{

class Init_LocalState_pose
{
public:
  explicit Init_LocalState_pose(::sobang_navigation::msg::LocalState & msg)
  : msg_(msg)
  {}
  ::sobang_navigation::msg::LocalState pose(::sobang_navigation::msg::LocalState::_pose_type arg)
  {
    msg_.pose = std::move(arg);
    return std::move(msg_);
  }

private:
  ::sobang_navigation::msg::LocalState msg_;
};

class Init_LocalState_header
{
public:
  Init_LocalState_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_LocalState_pose header(::sobang_navigation::msg::LocalState::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_LocalState_pose(msg_);
  }

private:
  ::sobang_navigation::msg::LocalState msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::sobang_navigation::msg::LocalState>()
{
  return sobang_navigation::msg::builder::Init_LocalState_header();
}

}  // namespace sobang_navigation

#endif  // SOBANG_NAVIGATION__MSG__DETAIL__LOCAL_STATE__BUILDER_HPP_
