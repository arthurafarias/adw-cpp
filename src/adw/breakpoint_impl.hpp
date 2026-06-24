// AUTO-GENERATED

#ifndef _GI_ADW_BREAKPOINT_IMPL_HPP_
#define _GI_ADW_BREAKPOINT_IMPL_HPP_

namespace gi {

namespace repository {

namespace Adw {

namespace base {

Gtk::Buildable BreakpointBase::interface_ (gi::interface_tag<Gtk::Buildable>)
{ return gi::wrap ((Gtk::Buildable::BaseObjectType*) gobj_copy_(), gi::transfer_full); }

BreakpointBase::operator Gtk::Buildable ()
{ return interface_ (gi::interface_tag<Gtk::Buildable>()); }

// AdwBreakpoint* /*full*/ adw_breakpoint_new (AdwBreakpointCondition* condition /*full*/);
// ::AdwBreakpoint* /*full*/ adw_breakpoint_new (::AdwBreakpointCondition* condition /*full*/);
Adw::Breakpoint base::BreakpointBase::new_ (Adw::BreakpointCondition condition) noexcept
{
  typedef ::AdwBreakpoint* (*call_wrap_t) (::AdwBreakpointCondition* condition);
  call_wrap_t call_wrap_v = (call_wrap_t) adw_breakpoint_new;
  auto condition_to_c = gi::unwrap (std::move(condition), gi::transfer_full);
  auto _temp_ret = call_wrap_v ((::AdwBreakpointCondition*) (condition_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// void adw_breakpoint_add_setter (AdwBreakpoint* self /*none*/, GObject* object /*none*/, const char* property /*none*/, const GValue* value /*none,nullable*/);
// void adw_breakpoint_add_setter (::AdwBreakpoint* self /*none*/, ::GObject* object /*none*/, const char* property /*none*/, const ::GValue* value /*none,nullable*/);
void base::BreakpointBase::add_setter (GObject::Object object, const gi::cstring_v property, const GObject::Value_Ref value) noexcept
{
  typedef void (*call_wrap_t) (::AdwBreakpoint* self, ::GObject* object, const char* property, const ::GValue* value);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_breakpoint_add_setter;
  auto value_to_c = gi::unwrap (value, gi::transfer_none);
  auto property_to_c = gi::unwrap (property, gi::transfer_none);
  auto object_to_c = gi::unwrap (object, gi::transfer_none);
  call_wrap_v ((::AdwBreakpoint*) (gobj_()), (::GObject*) (object_to_c), (const char*) (property_to_c), (const ::GValue*) (value_to_c));
}
void base::BreakpointBase::add_setter (GObject::Object object, const gi::cstring_v property) noexcept
{
  typedef void (*call_wrap_t) (::AdwBreakpoint* self, ::GObject* object, const char* property, const ::GValue* value);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_breakpoint_add_setter;
  auto value_to_c = nullptr;
  auto property_to_c = gi::unwrap (property, gi::transfer_none);
  auto object_to_c = gi::unwrap (object, gi::transfer_none);
  call_wrap_v ((::AdwBreakpoint*) (gobj_()), (::GObject*) (object_to_c), (const char*) (property_to_c), (const ::GValue*) (value_to_c));
}

// void adw_breakpoint_add_setters (AdwBreakpoint* self /*none*/, GObject* first_object /*none*/, const char* first_property /*none*/,  ..._ /*none*/);
// void adw_breakpoint_add_setters (::AdwBreakpoint* self /*none*/, ::GObject* first_object /*none*/, const char* first_property /*none*/,  ..._ /*none*/);
// IGNORE; not introspectable; shadowed-by add_settersv, varargs not supported

// void adw_breakpoint_add_setters_valist (AdwBreakpoint* self /*none*/, GObject* first_object /*none*/, const char* first_property /*none*/, va_list args /*none*/);
// void adw_breakpoint_add_setters_valist (::AdwBreakpoint* self /*none*/, ::GObject* first_object /*none*/, const char* first_property /*none*/,  args /*none*/);
// IGNORE; not introspectable, args type  not supported

// void adw_breakpoint_add_settersv (AdwBreakpoint* self /*none*/, int n_setters, GObject** objects /*none*/, const char** names /*none*/, const GValue** values /*none*/);
// void adw_breakpoint_add_settersv (::AdwBreakpoint* self /*none*/, gint n_setters, ::GObject** objects /*none*/, const char** names /*none*/, const ::GValue** values /*none*/);
void base::BreakpointBase::add_setters (gi::CollectionParameter<gi::DSpan, ::GObject*, gi::transfer_none_t> objects, gi::CollectionParameter<gi::DSpan, char*, gi::transfer_none_t> names, gi::CollectionParameter<gi::DSpan, ::GValue*, gi::transfer_none_t> values) noexcept
{
  typedef void (*call_wrap_t) (::AdwBreakpoint* self, gint n_setters, ::GObject** objects, const char** names, const ::GValue** values);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_breakpoint_add_settersv;
  auto values_w = unwrap (std::move(values), gi::transfer_none);
  auto values_to_c = values_w;
  auto names_w = unwrap (std::move(names), gi::transfer_none);
  auto names_to_c = names_w;
  auto objects_w = unwrap (std::move(objects), gi::transfer_none);
  auto objects_to_c = objects_w;
  call_wrap_v ((::AdwBreakpoint*) (gobj_()), (gint) (objects._size()), (::GObject**) (objects_to_c), (const char**) (names_to_c), (const ::GValue**) (values_to_c));
}

// AdwBreakpointCondition* /*none,nullable*/ adw_breakpoint_get_condition (AdwBreakpoint* self /*none*/);
// ::AdwBreakpointCondition* /*none,nullable*/ adw_breakpoint_get_condition (::AdwBreakpoint* self /*none*/);
Adw::BreakpointCondition_Ref base::BreakpointBase::get_condition () noexcept
{
  typedef ::AdwBreakpointCondition* (*call_wrap_t) (::AdwBreakpoint* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_breakpoint_get_condition;
  auto _temp_ret = call_wrap_v ((::AdwBreakpoint*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// void adw_breakpoint_set_condition (AdwBreakpoint* self /*none*/, AdwBreakpointCondition* condition /*none,nullable*/);
// void adw_breakpoint_set_condition (::AdwBreakpoint* self /*none*/, ::AdwBreakpointCondition* condition /*none,nullable*/);
void base::BreakpointBase::set_condition (Adw::BreakpointCondition_Ref condition) noexcept
{
  typedef void (*call_wrap_t) (::AdwBreakpoint* self, ::AdwBreakpointCondition* condition);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_breakpoint_set_condition;
  auto condition_to_c = gi::unwrap (condition, gi::transfer_none);
  call_wrap_v ((::AdwBreakpoint*) (gobj_()), (::AdwBreakpointCondition*) (condition_to_c));
}
void base::BreakpointBase::set_condition () noexcept
{
  typedef void (*call_wrap_t) (::AdwBreakpoint* self, ::AdwBreakpointCondition* condition);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_breakpoint_set_condition;
  auto condition_to_c = nullptr;
  call_wrap_v ((::AdwBreakpoint*) (gobj_()), (::AdwBreakpointCondition*) (condition_to_c));
}




} // namespace base

} // namespace Adw

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<adw/breakpoint_extra_def_impl.hpp>)
#include <adw/breakpoint_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<adw/breakpoint_extra_impl.hpp>)
#include <adw/breakpoint_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Adw {

namespace impl {

namespace internal {

void BreakpointClassDef::class_init (gpointer class_struct, gpointer factory)
{
  ::AdwBreakpointClass *methods = (::AdwBreakpointClass *) class_struct;
  (void) methods;

  auto init_data = GI_MEMBER_INIT_DATA(TypeInitData, factory);
  (void) init_data;

}

} // namespace internal

} // namespace impl

} // namespace Adw

} // namespace repository

} // namespace gi

#endif
