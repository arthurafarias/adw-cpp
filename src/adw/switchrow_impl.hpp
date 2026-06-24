// AUTO-GENERATED

#ifndef _GI_ADW_SWITCHROW_IMPL_HPP_
#define _GI_ADW_SWITCHROW_IMPL_HPP_

namespace gi {

namespace repository {

namespace Adw {

namespace base {

// GtkWidget* /*none*/ adw_switch_row_new ();
// ::AdwSwitchRow* /*none*/ adw_switch_row_new ();
Adw::SwitchRow base::SwitchRowBase::new_ () noexcept
{
  typedef ::AdwSwitchRow* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) adw_switch_row_new;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// gboolean adw_switch_row_get_active (AdwSwitchRow* self /*none*/);
// gboolean adw_switch_row_get_active (::AdwSwitchRow* self /*none*/);
bool base::SwitchRowBase::get_active () noexcept
{
  typedef gboolean (*call_wrap_t) (::AdwSwitchRow* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_switch_row_get_active;
  auto _temp_ret = call_wrap_v ((::AdwSwitchRow*) (gobj_()));
  return _temp_ret;
}

// void adw_switch_row_set_active (AdwSwitchRow* self /*none*/, gboolean is_active);
// void adw_switch_row_set_active (::AdwSwitchRow* self /*none*/, gboolean is_active);
void base::SwitchRowBase::set_active (gboolean is_active) noexcept
{
  typedef void (*call_wrap_t) (::AdwSwitchRow* self, gboolean is_active);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_switch_row_set_active;
  auto is_active_to_c = is_active;
  call_wrap_v ((::AdwSwitchRow*) (gobj_()), (gboolean) (is_active_to_c));
}


} // namespace base

} // namespace Adw

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<adw/switchrow_extra_def_impl.hpp>)
#include <adw/switchrow_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<adw/switchrow_extra_impl.hpp>)
#include <adw/switchrow_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Adw {

namespace impl {

namespace internal {

void SwitchRowClassDef::class_init (gpointer class_struct, gpointer factory)
{
  ::AdwSwitchRowClass *methods = (::AdwSwitchRowClass *) class_struct;
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
