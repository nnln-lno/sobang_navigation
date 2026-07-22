// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from sobang_navigation:msg/LocalState.idl
// generated code does not contain a copyright notice

#ifndef SOBANG_NAVIGATION__MSG__DETAIL__LOCAL_STATE__FUNCTIONS_H_
#define SOBANG_NAVIGATION__MSG__DETAIL__LOCAL_STATE__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "sobang_navigation/msg/rosidl_generator_c__visibility_control.h"

#include "sobang_navigation/msg/detail/local_state__struct.h"

/// Initialize msg/LocalState message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * sobang_navigation__msg__LocalState
 * )) before or use
 * sobang_navigation__msg__LocalState__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_sobang_navigation
bool
sobang_navigation__msg__LocalState__init(sobang_navigation__msg__LocalState * msg);

/// Finalize msg/LocalState message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_sobang_navigation
void
sobang_navigation__msg__LocalState__fini(sobang_navigation__msg__LocalState * msg);

/// Create msg/LocalState message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * sobang_navigation__msg__LocalState__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_sobang_navigation
sobang_navigation__msg__LocalState *
sobang_navigation__msg__LocalState__create();

/// Destroy msg/LocalState message.
/**
 * It calls
 * sobang_navigation__msg__LocalState__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_sobang_navigation
void
sobang_navigation__msg__LocalState__destroy(sobang_navigation__msg__LocalState * msg);

/// Check for msg/LocalState message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_sobang_navigation
bool
sobang_navigation__msg__LocalState__are_equal(const sobang_navigation__msg__LocalState * lhs, const sobang_navigation__msg__LocalState * rhs);

/// Copy a msg/LocalState message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_sobang_navigation
bool
sobang_navigation__msg__LocalState__copy(
  const sobang_navigation__msg__LocalState * input,
  sobang_navigation__msg__LocalState * output);

/// Initialize array of msg/LocalState messages.
/**
 * It allocates the memory for the number of elements and calls
 * sobang_navigation__msg__LocalState__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_sobang_navigation
bool
sobang_navigation__msg__LocalState__Sequence__init(sobang_navigation__msg__LocalState__Sequence * array, size_t size);

/// Finalize array of msg/LocalState messages.
/**
 * It calls
 * sobang_navigation__msg__LocalState__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_sobang_navigation
void
sobang_navigation__msg__LocalState__Sequence__fini(sobang_navigation__msg__LocalState__Sequence * array);

/// Create array of msg/LocalState messages.
/**
 * It allocates the memory for the array and calls
 * sobang_navigation__msg__LocalState__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_sobang_navigation
sobang_navigation__msg__LocalState__Sequence *
sobang_navigation__msg__LocalState__Sequence__create(size_t size);

/// Destroy array of msg/LocalState messages.
/**
 * It calls
 * sobang_navigation__msg__LocalState__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_sobang_navigation
void
sobang_navigation__msg__LocalState__Sequence__destroy(sobang_navigation__msg__LocalState__Sequence * array);

/// Check for msg/LocalState message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_sobang_navigation
bool
sobang_navigation__msg__LocalState__Sequence__are_equal(const sobang_navigation__msg__LocalState__Sequence * lhs, const sobang_navigation__msg__LocalState__Sequence * rhs);

/// Copy an array of msg/LocalState messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_sobang_navigation
bool
sobang_navigation__msg__LocalState__Sequence__copy(
  const sobang_navigation__msg__LocalState__Sequence * input,
  sobang_navigation__msg__LocalState__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // SOBANG_NAVIGATION__MSG__DETAIL__LOCAL_STATE__FUNCTIONS_H_
