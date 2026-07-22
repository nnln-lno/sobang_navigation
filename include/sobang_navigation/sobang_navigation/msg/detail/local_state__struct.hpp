// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from sobang_navigation:msg/LocalState.idl
// generated code does not contain a copyright notice

#ifndef SOBANG_NAVIGATION__MSG__DETAIL__LOCAL_STATE__STRUCT_HPP_
#define SOBANG_NAVIGATION__MSG__DETAIL__LOCAL_STATE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.hpp"
// Member 'pose'
#include "geometry_msgs/msg/detail/pose__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__sobang_navigation__msg__LocalState __attribute__((deprecated))
#else
# define DEPRECATED__sobang_navigation__msg__LocalState __declspec(deprecated)
#endif

namespace sobang_navigation
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct LocalState_
{
  using Type = LocalState_<ContainerAllocator>;

  explicit LocalState_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    pose(_init)
  {
    (void)_init;
  }

  explicit LocalState_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    pose(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _pose_type =
    geometry_msgs::msg::Pose_<ContainerAllocator>;
  _pose_type pose;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__pose(
    const geometry_msgs::msg::Pose_<ContainerAllocator> & _arg)
  {
    this->pose = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    sobang_navigation::msg::LocalState_<ContainerAllocator> *;
  using ConstRawPtr =
    const sobang_navigation::msg::LocalState_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<sobang_navigation::msg::LocalState_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<sobang_navigation::msg::LocalState_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      sobang_navigation::msg::LocalState_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<sobang_navigation::msg::LocalState_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      sobang_navigation::msg::LocalState_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<sobang_navigation::msg::LocalState_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<sobang_navigation::msg::LocalState_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<sobang_navigation::msg::LocalState_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__sobang_navigation__msg__LocalState
    std::shared_ptr<sobang_navigation::msg::LocalState_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__sobang_navigation__msg__LocalState
    std::shared_ptr<sobang_navigation::msg::LocalState_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const LocalState_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->pose != other.pose) {
      return false;
    }
    return true;
  }
  bool operator!=(const LocalState_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct LocalState_

// alias to use template instance with default allocator
using LocalState =
  sobang_navigation::msg::LocalState_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace sobang_navigation

#endif  // SOBANG_NAVIGATION__MSG__DETAIL__LOCAL_STATE__STRUCT_HPP_
