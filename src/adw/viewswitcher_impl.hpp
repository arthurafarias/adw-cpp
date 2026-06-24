// AUTO-GENERATED

#ifndef _GI_ADW_VIEWSWITCHER_IMPL_HPP_
#define _GI_ADW_VIEWSWITCHER_IMPL_HPP_

namespace gi {

namespace repository {

namespace Adw {

namespace base {

// GtkWidget* /*none*/ adw_view_switcher_new ();
// ::AdwViewSwitcher* /*none*/ adw_view_switcher_new ();
Adw::ViewSwitcher base::ViewSwitcherBase::new_ () noexcept
{
  typedef ::AdwViewSwitcher* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) adw_view_switcher_new;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// AdwViewSwitcherPolicy adw_view_switcher_get_policy (AdwViewSwitcher* self /*none*/);
// ::AdwViewSwitcherPolicy adw_view_switcher_get_policy (::AdwViewSwitcher* self /*none*/);
Adw::ViewSwitcherPolicy base::ViewSwitcherBase::get_policy () noexcept
{
  typedef ::AdwViewSwitcherPolicy (*call_wrap_t) (::AdwViewSwitcher* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_view_switcher_get_policy;
  auto _temp_ret = call_wrap_v ((::AdwViewSwitcher*) (gobj_()));
  return gi::wrap (_temp_ret);
}

// AdwViewStack* /*none,nullable*/ adw_view_switcher_get_stack (AdwViewSwitcher* self /*none*/);
// ::AdwViewStack* /*none,nullable*/ adw_view_switcher_get_stack (::AdwViewSwitcher* self /*none*/);
Adw::ViewStack base::ViewSwitcherBase::get_stack () noexcept
{
  typedef ::AdwViewStack* (*call_wrap_t) (::AdwViewSwitcher* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_view_switcher_get_stack;
  auto _temp_ret = call_wrap_v ((::AdwViewSwitcher*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// void adw_view_switcher_set_policy (AdwViewSwitcher* self /*none*/, AdwViewSwitcherPolicy policy);
// void adw_view_switcher_set_policy (::AdwViewSwitcher* self /*none*/, ::AdwViewSwitcherPolicy policy);
void base::ViewSwitcherBase::set_policy (Adw::ViewSwitcherPolicy policy) noexcept
{
  typedef void (*call_wrap_t) (::AdwViewSwitcher* self, ::AdwViewSwitcherPolicy policy);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_view_switcher_set_policy;
  auto policy_to_c = gi::unwrap (policy);
  call_wrap_v ((::AdwViewSwitcher*) (gobj_()), (::AdwViewSwitcherPolicy) (policy_to_c));
}

// void adw_view_switcher_set_stack (AdwViewSwitcher* self /*none*/, AdwViewStack* stack /*none,nullable*/);
// void adw_view_switcher_set_stack (::AdwViewSwitcher* self /*none*/, ::AdwViewStack* stack /*none,nullable*/);
void base::ViewSwitcherBase::set_stack (Adw::ViewStack stack) noexcept
{
  typedef void (*call_wrap_t) (::AdwViewSwitcher* self, ::AdwViewStack* stack);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_view_switcher_set_stack;
  auto stack_to_c = gi::unwrap (stack, gi::transfer_none);
  call_wrap_v ((::AdwViewSwitcher*) (gobj_()), (::AdwViewStack*) (stack_to_c));
}
void base::ViewSwitcherBase::set_stack () noexcept
{
  typedef void (*call_wrap_t) (::AdwViewSwitcher* self, ::AdwViewStack* stack);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_view_switcher_set_stack;
  auto stack_to_c = nullptr;
  call_wrap_v ((::AdwViewSwitcher*) (gobj_()), (::AdwViewStack*) (stack_to_c));
}


} // namespace base

} // namespace Adw

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<adw/viewswitcher_extra_def_impl.hpp>)
#include <adw/viewswitcher_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<adw/viewswitcher_extra_impl.hpp>)
#include <adw/viewswitcher_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Adw {

namespace impl {

namespace internal {

void ViewSwitcherClassDef::class_init (gpointer class_struct, gpointer factory)
{
  ::AdwViewSwitcherClass *methods = (::AdwViewSwitcherClass *) class_struct;
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
