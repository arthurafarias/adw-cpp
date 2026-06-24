// AUTO-GENERATED

#ifndef _GI_ADW_TOASTOVERLAY_IMPL_HPP_
#define _GI_ADW_TOASTOVERLAY_IMPL_HPP_

namespace gi {

namespace repository {

namespace Adw {

namespace base {

// GtkWidget* /*none*/ adw_toast_overlay_new ();
// ::AdwToastOverlay* /*none*/ adw_toast_overlay_new ();
Adw::ToastOverlay base::ToastOverlayBase::new_ () noexcept
{
  typedef ::AdwToastOverlay* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) adw_toast_overlay_new;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// void adw_toast_overlay_add_toast (AdwToastOverlay* self /*none*/, AdwToast* toast /*full*/);
// void adw_toast_overlay_add_toast (::AdwToastOverlay* self /*none*/, ::AdwToast* toast /*full*/);
void base::ToastOverlayBase::add_toast (Adw::Toast toast) noexcept
{
  typedef void (*call_wrap_t) (::AdwToastOverlay* self, ::AdwToast* toast);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_toast_overlay_add_toast;
  auto toast_to_c = gi::unwrap (toast, gi::transfer_full);
  call_wrap_v ((::AdwToastOverlay*) (gobj_()), (::AdwToast*) (toast_to_c));
}

// void adw_toast_overlay_dismiss_all (AdwToastOverlay* self /*none*/);
// void adw_toast_overlay_dismiss_all (::AdwToastOverlay* self /*none*/);
void base::ToastOverlayBase::dismiss_all () noexcept
{
  typedef void (*call_wrap_t) (::AdwToastOverlay* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_toast_overlay_dismiss_all;
  call_wrap_v ((::AdwToastOverlay*) (gobj_()));
}

// GtkWidget* /*none,nullable*/ adw_toast_overlay_get_child (AdwToastOverlay* self /*none*/);
// ::GtkWidget* /*none,nullable*/ adw_toast_overlay_get_child (::AdwToastOverlay* self /*none*/);
Gtk::Widget base::ToastOverlayBase::get_child () noexcept
{
  typedef ::GtkWidget* (*call_wrap_t) (::AdwToastOverlay* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_toast_overlay_get_child;
  auto _temp_ret = call_wrap_v ((::AdwToastOverlay*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// void adw_toast_overlay_set_child (AdwToastOverlay* self /*none*/, GtkWidget* child /*none,nullable*/);
// void adw_toast_overlay_set_child (::AdwToastOverlay* self /*none*/, ::GtkWidget* child /*none,nullable*/);
void base::ToastOverlayBase::set_child (Gtk::Widget child) noexcept
{
  typedef void (*call_wrap_t) (::AdwToastOverlay* self, ::GtkWidget* child);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_toast_overlay_set_child;
  auto child_to_c = gi::unwrap (child, gi::transfer_none);
  call_wrap_v ((::AdwToastOverlay*) (gobj_()), (::GtkWidget*) (child_to_c));
}
void base::ToastOverlayBase::set_child () noexcept
{
  typedef void (*call_wrap_t) (::AdwToastOverlay* self, ::GtkWidget* child);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_toast_overlay_set_child;
  auto child_to_c = nullptr;
  call_wrap_v ((::AdwToastOverlay*) (gobj_()), (::GtkWidget*) (child_to_c));
}


} // namespace base

} // namespace Adw

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<adw/toastoverlay_extra_def_impl.hpp>)
#include <adw/toastoverlay_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<adw/toastoverlay_extra_impl.hpp>)
#include <adw/toastoverlay_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Adw {

namespace impl {

namespace internal {

void ToastOverlayClassDef::class_init (gpointer class_struct, gpointer factory)
{
  ::AdwToastOverlayClass *methods = (::AdwToastOverlayClass *) class_struct;
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
