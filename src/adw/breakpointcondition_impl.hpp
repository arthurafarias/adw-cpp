// AUTO-GENERATED

#ifndef _GI_ADW_BREAKPOINTCONDITION_IMPL_HPP_
#define _GI_ADW_BREAKPOINTCONDITION_IMPL_HPP_

namespace gi {

namespace repository {

namespace Adw {

namespace base {

// AdwBreakpointCondition* /*full*/ adw_breakpoint_condition_new_and (AdwBreakpointCondition* condition_1 /*full*/, AdwBreakpointCondition* condition_2 /*full*/);
// ::AdwBreakpointCondition* /*full*/ adw_breakpoint_condition_new_and (::AdwBreakpointCondition* condition_1 /*full*/, ::AdwBreakpointCondition* condition_2 /*full*/);
Adw::BreakpointCondition base::BreakpointConditionBase::new_and (Adw::BreakpointCondition condition_1, Adw::BreakpointCondition condition_2) noexcept
{
  typedef ::AdwBreakpointCondition* (*call_wrap_t) (::AdwBreakpointCondition* condition_1, ::AdwBreakpointCondition* condition_2);
  call_wrap_t call_wrap_v = (call_wrap_t) adw_breakpoint_condition_new_and;
  auto condition_2_to_c = gi::unwrap (std::move(condition_2), gi::transfer_full);
  auto condition_1_to_c = gi::unwrap (std::move(condition_1), gi::transfer_full);
  auto _temp_ret = call_wrap_v ((::AdwBreakpointCondition*) (condition_1_to_c), (::AdwBreakpointCondition*) (condition_2_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// AdwBreakpointCondition* /*full*/ adw_breakpoint_condition_new_length (AdwBreakpointConditionLengthType type, double value, AdwLengthUnit unit);
// ::AdwBreakpointCondition* /*full*/ adw_breakpoint_condition_new_length (::AdwBreakpointConditionLengthType type, gdouble value, ::AdwLengthUnit unit);
Adw::BreakpointCondition base::BreakpointConditionBase::new_length (Adw::BreakpointConditionLengthType type, gdouble value, Adw::LengthUnit unit) noexcept
{
  typedef ::AdwBreakpointCondition* (*call_wrap_t) (::AdwBreakpointConditionLengthType type, gdouble value, ::AdwLengthUnit unit);
  call_wrap_t call_wrap_v = (call_wrap_t) adw_breakpoint_condition_new_length;
  auto unit_to_c = gi::unwrap (unit);
  auto value_to_c = value;
  auto type_to_c = gi::unwrap (type);
  auto _temp_ret = call_wrap_v ((::AdwBreakpointConditionLengthType) (type_to_c), (gdouble) (value_to_c), (::AdwLengthUnit) (unit_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// AdwBreakpointCondition* /*full*/ adw_breakpoint_condition_new_or (AdwBreakpointCondition* condition_1 /*full*/, AdwBreakpointCondition* condition_2 /*full*/);
// ::AdwBreakpointCondition* /*full*/ adw_breakpoint_condition_new_or (::AdwBreakpointCondition* condition_1 /*full*/, ::AdwBreakpointCondition* condition_2 /*full*/);
Adw::BreakpointCondition base::BreakpointConditionBase::new_or (Adw::BreakpointCondition condition_1, Adw::BreakpointCondition condition_2) noexcept
{
  typedef ::AdwBreakpointCondition* (*call_wrap_t) (::AdwBreakpointCondition* condition_1, ::AdwBreakpointCondition* condition_2);
  call_wrap_t call_wrap_v = (call_wrap_t) adw_breakpoint_condition_new_or;
  auto condition_2_to_c = gi::unwrap (std::move(condition_2), gi::transfer_full);
  auto condition_1_to_c = gi::unwrap (std::move(condition_1), gi::transfer_full);
  auto _temp_ret = call_wrap_v ((::AdwBreakpointCondition*) (condition_1_to_c), (::AdwBreakpointCondition*) (condition_2_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// AdwBreakpointCondition* /*full*/ adw_breakpoint_condition_new_ratio (AdwBreakpointConditionRatioType type, int width, int height);
// ::AdwBreakpointCondition* /*full*/ adw_breakpoint_condition_new_ratio (::AdwBreakpointConditionRatioType type, gint width, gint height);
Adw::BreakpointCondition base::BreakpointConditionBase::new_ratio (Adw::BreakpointConditionRatioType type, gint width, gint height) noexcept
{
  typedef ::AdwBreakpointCondition* (*call_wrap_t) (::AdwBreakpointConditionRatioType type, gint width, gint height);
  call_wrap_t call_wrap_v = (call_wrap_t) adw_breakpoint_condition_new_ratio;
  auto height_to_c = height;
  auto width_to_c = width;
  auto type_to_c = gi::unwrap (type);
  auto _temp_ret = call_wrap_v ((::AdwBreakpointConditionRatioType) (type_to_c), (gint) (width_to_c), (gint) (height_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// AdwBreakpointCondition* /*full*/ adw_breakpoint_condition_copy (AdwBreakpointCondition* self /*none*/);
// ::AdwBreakpointCondition* /*full*/ adw_breakpoint_condition_copy (::AdwBreakpointCondition* self /*none*/);
Adw::BreakpointCondition base::BreakpointConditionBase::copy () noexcept
{
  typedef ::AdwBreakpointCondition* (*call_wrap_t) (::AdwBreakpointCondition* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_breakpoint_condition_copy;
  auto _temp_ret = call_wrap_v ((::AdwBreakpointCondition*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// void adw_breakpoint_condition_free (AdwBreakpointCondition* self /*none*/);
// void adw_breakpoint_condition_free (::AdwBreakpointCondition* self /*none*/);
// IGNORE; marked ignore

// char* /*full*/ adw_breakpoint_condition_to_string (AdwBreakpointCondition* self /*none*/);
// char* /*full*/ adw_breakpoint_condition_to_string (::AdwBreakpointCondition* self /*none*/);
gi::cstring base::BreakpointConditionBase::to_string () noexcept
{
  typedef char* (*call_wrap_t) (::AdwBreakpointCondition* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_breakpoint_condition_to_string;
  auto _temp_ret = call_wrap_v ((::AdwBreakpointCondition*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// AdwBreakpointCondition* /*full*/ adw_breakpoint_condition_parse (const char* str /*none*/);
// ::AdwBreakpointCondition* /*full*/ adw_breakpoint_condition_parse (const char* str /*none*/);
Adw::BreakpointCondition base::BreakpointConditionBase::parse (const gi::cstring_v str) noexcept
{
  typedef ::AdwBreakpointCondition* (*call_wrap_t) (const char* str);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_breakpoint_condition_parse;
  auto str_to_c = gi::unwrap (str, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const char*) (str_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}


} // namespace base

} // namespace Adw

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<adw/breakpointcondition_extra_def_impl.hpp>)
#include <adw/breakpointcondition_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<adw/breakpointcondition_extra_impl.hpp>)
#include <adw/breakpointcondition_extra_impl.hpp>
#endif
#endif

#endif
