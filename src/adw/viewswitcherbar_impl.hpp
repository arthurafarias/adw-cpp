// AUTO-GENERATED

#ifndef _GI_ADW_VIEWSWITCHERBAR_IMPL_HPP_
#define _GI_ADW_VIEWSWITCHERBAR_IMPL_HPP_

namespace gi {

namespace repository {

namespace Adw {

namespace base {

// GtkWidget* /*none*/ adw_view_switcher_bar_new ();
// ::AdwViewSwitcherBar* /*none*/ adw_view_switcher_bar_new ();
Adw::ViewSwitcherBar base::ViewSwitcherBarBase::new_ () noexcept
{
  typedef ::AdwViewSwitcherBar* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) adw_view_switcher_bar_new;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// gboolean adw_view_switcher_bar_get_reveal (AdwViewSwitcherBar* self /*none*/);
// gboolean adw_view_switcher_bar_get_reveal (::AdwViewSwitcherBar* self /*none*/);
bool base::ViewSwitcherBarBase::get_reveal () noexcept
{
  typedef gboolean (*call_wrap_t) (::AdwViewSwitcherBar* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_view_switcher_bar_get_reveal;
  auto _temp_ret = call_wrap_v ((::AdwViewSwitcherBar*) (gobj_()));
  return _temp_ret;
}

// AdwViewStack* /*none,nullable*/ adw_view_switcher_bar_get_stack (AdwViewSwitcherBar* self /*none*/);
// ::AdwViewStack* /*none,nullable*/ adw_view_switcher_bar_get_stack (::AdwViewSwitcherBar* self /*none*/);
Adw::ViewStack base::ViewSwitcherBarBase::get_stack () noexcept
{
  typedef ::AdwViewStack* (*call_wrap_t) (::AdwViewSwitcherBar* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_view_switcher_bar_get_stack;
  auto _temp_ret = call_wrap_v ((::AdwViewSwitcherBar*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// void adw_view_switcher_bar_set_reveal (AdwViewSwitcherBar* self /*none*/, gboolean reveal);
// void adw_view_switcher_bar_set_reveal (::AdwViewSwitcherBar* self /*none*/, gboolean reveal);
void base::ViewSwitcherBarBase::set_reveal (gboolean reveal) noexcept
{
  typedef void (*call_wrap_t) (::AdwViewSwitcherBar* self, gboolean reveal);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_view_switcher_bar_set_reveal;
  auto reveal_to_c = reveal;
  call_wrap_v ((::AdwViewSwitcherBar*) (gobj_()), (gboolean) (reveal_to_c));
}

// void adw_view_switcher_bar_set_stack (AdwViewSwitcherBar* self /*none*/, AdwViewStack* stack /*none,nullable*/);
// void adw_view_switcher_bar_set_stack (::AdwViewSwitcherBar* self /*none*/, ::AdwViewStack* stack /*none,nullable*/);
void base::ViewSwitcherBarBase::set_stack (Adw::ViewStack stack) noexcept
{
  typedef void (*call_wrap_t) (::AdwViewSwitcherBar* self, ::AdwViewStack* stack);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_view_switcher_bar_set_stack;
  auto stack_to_c = gi::unwrap (stack, gi::transfer_none);
  call_wrap_v ((::AdwViewSwitcherBar*) (gobj_()), (::AdwViewStack*) (stack_to_c));
}
void base::ViewSwitcherBarBase::set_stack () noexcept
{
  typedef void (*call_wrap_t) (::AdwViewSwitcherBar* self, ::AdwViewStack* stack);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_view_switcher_bar_set_stack;
  auto stack_to_c = nullptr;
  call_wrap_v ((::AdwViewSwitcherBar*) (gobj_()), (::AdwViewStack*) (stack_to_c));
}


} // namespace base

} // namespace Adw

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<adw/viewswitcherbar_extra_def_impl.hpp>)
#include <adw/viewswitcherbar_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<adw/viewswitcherbar_extra_impl.hpp>)
#include <adw/viewswitcherbar_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Adw {

namespace impl {

namespace internal {

void ViewSwitcherBarClassDef::class_init (gpointer class_struct, gpointer factory)
{
  ::AdwViewSwitcherBarClass *methods = (::AdwViewSwitcherBarClass *) class_struct;
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
