// AUTO-GENERATED

#ifndef _GI_ADW_WINDOW_IMPL_HPP_
#define _GI_ADW_WINDOW_IMPL_HPP_

namespace gi {

namespace repository {

namespace Adw {

namespace base {

// GtkWidget* /*none*/ adw_window_new ();
// ::AdwWindow* /*none*/ adw_window_new ();
Adw::Window base::WindowBase::new_ () noexcept
{
  typedef ::AdwWindow* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) adw_window_new;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// void adw_window_add_breakpoint (AdwWindow* self /*none*/, AdwBreakpoint* breakpoint /*full*/);
// void adw_window_add_breakpoint (::AdwWindow* self /*none*/, ::AdwBreakpoint* breakpoint /*full*/);
void base::WindowBase::add_breakpoint (Adw::Breakpoint breakpoint) noexcept
{
  typedef void (*call_wrap_t) (::AdwWindow* self, ::AdwBreakpoint* breakpoint);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_window_add_breakpoint;
  auto breakpoint_to_c = gi::unwrap (breakpoint, gi::transfer_full);
  call_wrap_v ((::AdwWindow*) (gobj_()), (::AdwBreakpoint*) (breakpoint_to_c));
}

// gboolean adw_window_get_adaptive_preview (AdwWindow* self /*none*/);
// gboolean adw_window_get_adaptive_preview (::AdwWindow* self /*none*/);
bool base::WindowBase::get_adaptive_preview () noexcept
{
  typedef gboolean (*call_wrap_t) (::AdwWindow* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_window_get_adaptive_preview;
  auto _temp_ret = call_wrap_v ((::AdwWindow*) (gobj_()));
  return _temp_ret;
}

// GtkWidget* /*none,nullable*/ adw_window_get_content (AdwWindow* self /*none*/);
// ::GtkWidget* /*none,nullable*/ adw_window_get_content (::AdwWindow* self /*none*/);
Gtk::Widget base::WindowBase::get_content () noexcept
{
  typedef ::GtkWidget* (*call_wrap_t) (::AdwWindow* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_window_get_content;
  auto _temp_ret = call_wrap_v ((::AdwWindow*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// AdwBreakpoint* /*none,nullable*/ adw_window_get_current_breakpoint (AdwWindow* self /*none*/);
// ::AdwBreakpoint* /*none,nullable*/ adw_window_get_current_breakpoint (::AdwWindow* self /*none*/);
Adw::Breakpoint base::WindowBase::get_current_breakpoint () noexcept
{
  typedef ::AdwBreakpoint* (*call_wrap_t) (::AdwWindow* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_window_get_current_breakpoint;
  auto _temp_ret = call_wrap_v ((::AdwWindow*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// GListModel* /*full*/ adw_window_get_dialogs (AdwWindow* self /*none*/);
// ::GListModel* /*full*/ adw_window_get_dialogs (::AdwWindow* self /*none*/);
Gio::ListModel base::WindowBase::get_dialogs () noexcept
{
  typedef ::GListModel* (*call_wrap_t) (::AdwWindow* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_window_get_dialogs;
  auto _temp_ret = call_wrap_v ((::AdwWindow*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// AdwDialog* /*none,nullable*/ adw_window_get_visible_dialog (AdwWindow* self /*none*/);
// ::AdwDialog* /*none,nullable*/ adw_window_get_visible_dialog (::AdwWindow* self /*none*/);
Adw::Dialog base::WindowBase::get_visible_dialog () noexcept
{
  typedef ::AdwDialog* (*call_wrap_t) (::AdwWindow* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_window_get_visible_dialog;
  auto _temp_ret = call_wrap_v ((::AdwWindow*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// void adw_window_set_adaptive_preview (AdwWindow* self /*none*/, gboolean adaptive_preview);
// void adw_window_set_adaptive_preview (::AdwWindow* self /*none*/, gboolean adaptive_preview);
void base::WindowBase::set_adaptive_preview (gboolean adaptive_preview) noexcept
{
  typedef void (*call_wrap_t) (::AdwWindow* self, gboolean adaptive_preview);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_window_set_adaptive_preview;
  auto adaptive_preview_to_c = adaptive_preview;
  call_wrap_v ((::AdwWindow*) (gobj_()), (gboolean) (adaptive_preview_to_c));
}

// void adw_window_set_content (AdwWindow* self /*none*/, GtkWidget* content /*none,nullable*/);
// void adw_window_set_content (::AdwWindow* self /*none*/, ::GtkWidget* content /*none,nullable*/);
void base::WindowBase::set_content (Gtk::Widget content) noexcept
{
  typedef void (*call_wrap_t) (::AdwWindow* self, ::GtkWidget* content);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_window_set_content;
  auto content_to_c = gi::unwrap (content, gi::transfer_none);
  call_wrap_v ((::AdwWindow*) (gobj_()), (::GtkWidget*) (content_to_c));
}
void base::WindowBase::set_content () noexcept
{
  typedef void (*call_wrap_t) (::AdwWindow* self, ::GtkWidget* content);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_window_set_content;
  auto content_to_c = nullptr;
  call_wrap_v ((::AdwWindow*) (gobj_()), (::GtkWidget*) (content_to_c));
}


} // namespace base

} // namespace Adw

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<adw/window_extra_def_impl.hpp>)
#include <adw/window_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<adw/window_extra_impl.hpp>)
#include <adw/window_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Adw {

namespace impl {

namespace internal {

void WindowClassDef::class_init (gpointer class_struct, gpointer factory)
{
  ::AdwWindowClass *methods = (::AdwWindowClass *) class_struct;
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
