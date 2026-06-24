// AUTO-GENERATED

#ifndef _GI_ADW_BREAKPOINTCONDITION_HPP_
#define _GI_ADW_BREAKPOINTCONDITION_HPP_


namespace gi {

namespace repository {

namespace Adw {

class BreakpointCondition_Ref;

class BreakpointCondition;

namespace base {


#define GI_ADW_BREAKPOINTCONDITION_BASE base::BreakpointConditionBase
class BreakpointConditionBase : public gi::detail::GBoxedWrapperBase<BreakpointConditionBase, ::AdwBreakpointCondition>
{
typedef gi::detail::GBoxedWrapperBase<BreakpointConditionBase, ::AdwBreakpointCondition> super_type;
public:

BreakpointConditionBase (std::nullptr_t = nullptr) : super_type() {}

static GType get_type_ () G_GNUC_CONST { return adw_breakpoint_condition_get_type(); } 

// AdwBreakpointCondition* /*full*/ adw_breakpoint_condition_new_and (AdwBreakpointCondition* condition_1 /*full*/, AdwBreakpointCondition* condition_2 /*full*/);
// ::AdwBreakpointCondition* /*full*/ adw_breakpoint_condition_new_and (::AdwBreakpointCondition* condition_1 /*full*/, ::AdwBreakpointCondition* condition_2 /*full*/);
static GI_INLINE_DECL Adw::BreakpointCondition new_and (Adw::BreakpointCondition condition_1, Adw::BreakpointCondition condition_2) noexcept;

// AdwBreakpointCondition* /*full*/ adw_breakpoint_condition_new_length (AdwBreakpointConditionLengthType type, double value, AdwLengthUnit unit);
// ::AdwBreakpointCondition* /*full*/ adw_breakpoint_condition_new_length (::AdwBreakpointConditionLengthType type, gdouble value, ::AdwLengthUnit unit);
static GI_INLINE_DECL Adw::BreakpointCondition new_length (Adw::BreakpointConditionLengthType type, gdouble value, Adw::LengthUnit unit) noexcept;

// AdwBreakpointCondition* /*full*/ adw_breakpoint_condition_new_or (AdwBreakpointCondition* condition_1 /*full*/, AdwBreakpointCondition* condition_2 /*full*/);
// ::AdwBreakpointCondition* /*full*/ adw_breakpoint_condition_new_or (::AdwBreakpointCondition* condition_1 /*full*/, ::AdwBreakpointCondition* condition_2 /*full*/);
static GI_INLINE_DECL Adw::BreakpointCondition new_or (Adw::BreakpointCondition condition_1, Adw::BreakpointCondition condition_2) noexcept;

// AdwBreakpointCondition* /*full*/ adw_breakpoint_condition_new_ratio (AdwBreakpointConditionRatioType type, int width, int height);
// ::AdwBreakpointCondition* /*full*/ adw_breakpoint_condition_new_ratio (::AdwBreakpointConditionRatioType type, gint width, gint height);
static GI_INLINE_DECL Adw::BreakpointCondition new_ratio (Adw::BreakpointConditionRatioType type, gint width, gint height) noexcept;

// AdwBreakpointCondition* /*full*/ adw_breakpoint_condition_copy (AdwBreakpointCondition* self /*none*/);
// ::AdwBreakpointCondition* /*full*/ adw_breakpoint_condition_copy (::AdwBreakpointCondition* self /*none*/);
GI_INLINE_DECL Adw::BreakpointCondition copy () noexcept;

// void adw_breakpoint_condition_free (AdwBreakpointCondition* self /*none*/);
// void adw_breakpoint_condition_free (::AdwBreakpointCondition* self /*none*/);
// IGNORE; marked ignore

// char* /*full*/ adw_breakpoint_condition_to_string (AdwBreakpointCondition* self /*none*/);
// char* /*full*/ adw_breakpoint_condition_to_string (::AdwBreakpointCondition* self /*none*/);
GI_INLINE_DECL gi::cstring to_string () noexcept;

// AdwBreakpointCondition* /*full*/ adw_breakpoint_condition_parse (const char* str /*none*/);
// ::AdwBreakpointCondition* /*full*/ adw_breakpoint_condition_parse (const char* str /*none*/);
static GI_INLINE_DECL Adw::BreakpointCondition parse (const gi::cstring_v str) noexcept;

}; // class

} // namespace base

} // namespace Adw

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<adw/breakpointcondition_extra_def.hpp>)
#include <adw/breakpointcondition_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<adw/breakpointcondition_extra.hpp>)
#include <adw/breakpointcondition_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Adw {

class BreakpointCondition_Ref;

class BreakpointCondition : public gi::detail::GBoxedWrapper<BreakpointCondition, ::AdwBreakpointCondition, GI_ADW_BREAKPOINTCONDITION_BASE, BreakpointCondition_Ref>
{ typedef gi::detail::GBoxedWrapper<BreakpointCondition, ::AdwBreakpointCondition, GI_ADW_BREAKPOINTCONDITION_BASE, BreakpointCondition_Ref> super_type; using super_type::super_type; };


class BreakpointCondition_Ref : public gi::detail::GBoxedRefWrapper<BreakpointCondition, ::AdwBreakpointCondition, GI_ADW_BREAKPOINTCONDITION_BASE>
{ typedef gi::detail::GBoxedRefWrapper<BreakpointCondition, ::AdwBreakpointCondition, GI_ADW_BREAKPOINTCONDITION_BASE> super_type; using super_type::super_type; };

} // namespace Adw

template<> struct declare_cpptype_of<::AdwBreakpointCondition>
{ typedef Adw::BreakpointCondition type; }; 

} // namespace repository

} // namespace gi

#endif
