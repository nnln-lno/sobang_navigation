// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from sobang_navigation:msg/UwbData.idl
// generated code does not contain a copyright notice

#ifndef SOBANG_NAVIGATION__MSG__DETAIL__UWB_DATA__BUILDER_HPP_
#define SOBANG_NAVIGATION__MSG__DETAIL__UWB_DATA__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "sobang_navigation/msg/detail/uwb_data__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace sobang_navigation
{

namespace msg
{

namespace builder
{

class Init_UwbData_pose
{
public:
  explicit Init_UwbData_pose(::sobang_navigation::msg::UwbData & msg)
  : msg_(msg)
  {}
  ::sobang_navigation::msg::UwbData pose(::sobang_navigation::msg::UwbData::_pose_type arg)
  {
    msg_.pose = std::move(arg);
    return std::move(msg_);
  }

private:
  ::sobang_navigation::msg::UwbData msg_;
};

class Init_UwbData_ranges
{
public:
  explicit Init_UwbData_ranges(::sobang_navigation::msg::UwbData & msg)
  : msg_(msg)
  {}
  Init_UwbData_pose ranges(::sobang_navigation::msg::UwbData::_ranges_type arg)
  {
    msg_.ranges = std::move(arg);
    return Init_UwbData_pose(msg_);
  }

private:
  ::sobang_navigation::msg::UwbData msg_;
};

class Init_UwbData_anchor_ids
{
public:
  explicit Init_UwbData_anchor_ids(::sobang_navigation::msg::UwbData & msg)
  : msg_(msg)
  {}
  Init_UwbData_ranges anchor_ids(::sobang_navigation::msg::UwbData::_anchor_ids_type arg)
  {
    msg_.anchor_ids = std::move(arg);
    return Init_UwbData_ranges(msg_);
  }

private:
  ::sobang_navigation::msg::UwbData msg_;
};

class Init_UwbData_header
{
public:
  Init_UwbData_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_UwbData_anchor_ids header(::sobang_navigation::msg::UwbData::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_UwbData_anchor_ids(msg_);
  }

private:
  ::sobang_navigation::msg::UwbData msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::sobang_navigation::msg::UwbData>()
{
  return sobang_navigation::msg::builder::Init_UwbData_header();
}

}  // namespace sobang_navigation

#endif  // SOBANG_NAVIGATION__MSG__DETAIL__UWB_DATA__BUILDER_HPP_
