// AUTO-GENERATED

#ifndef _GI_ADW_APPLICATIONWINDOW_IMPL_HPP_
#define _GI_ADW_APPLICATIONWINDOW_IMPL_HPP_

namespace gi {

namespace repository {

namespace Adw {

namespace base {

// GtkWidget* /*none*/ adw_application_window_new (GtkApplication* app /*none*/);
// ::AdwApplicationWindow* /*none*/ adw_application_window_new (::GtkApplication* app /*none*/);
Adw::ApplicationWindow base::ApplicationWindowBase::new_ (Gtk::Application app) noexcept
{
  typedef ::AdwApplicationWindow* (*call_wrap_t) (::GtkApplication* app);
  call_wrap_t call_wrap_v = (call_wrap_t) adw_application_window_new;
  auto app_to_c = gi::unwrap (app, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GtkApplication*) (app_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// void adw_application_window_add_breakpoint (AdwApplicationWindow* self /*none*/, AdwBreakpoint* breakpoint /*full*/);
// void adw_application_window_add_breakpoint (::AdwApplicationWindow* self /*none*/, ::AdwBreakpoint* breakpoint /*full*/);
void base::ApplicationWindowBase::add_breakpoint (Adw::Breakpoint breakpoint) noexcept
{
  typedef void (*call_wrap_t) (::AdwApplicationWindow* self, ::AdwBreakpoint* breakpoint);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_application_window_add_breakpoint;
  auto breakpoint_to_c = gi::unwrap (breakpoint, gi::transfer_full);
  call_wrap_v ((::AdwApplicationWindow*) (gobj_()), (::AdwBreakpoint*) (breakpoint_to_c));
}

// gboolean adw_application_window_get_adaptive_preview (AdwApplicationWindow* self /*none*/);
// gboolean adw_application_window_get_adaptive_preview (::AdwApplicationWindow* self /*none*/);
bool base::ApplicationWindowBase::get_adaptive_preview () noexcept
{
  typedef gboolean (*call_wrap_t) (::AdwApplicationWindow* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_application_window_get_adaptive_preview;
  auto _temp_ret = call_wrap_v ((::AdwApplicationWindow*) (gobj_()));
  return _temp_ret;
}

// GtkWidget* /*none,nullable*/ adw_application_window_get_content (AdwApplicationWindow* self /*none*/);
// ::GtkWidget* /*none,nullable*/ adw_application_window_get_content (::AdwApplicationWindow* self /*none*/);
Gtk::Widget base::ApplicationWindowBase::get_content () noexcept
{
  typedef ::GtkWidget* (*call_wrap_t) (::AdwApplicationWindow* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_application_window_get_content;
  auto _temp_ret = call_wrap_v ((::AdwApplicationWindow*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// AdwBreakpoint* /*none,nullable*/ adw_application_window_get_current_breakpoint (AdwApplicationWindow* self /*none*/);
// ::AdwBreakpoint* /*none,nullable*/ adw_application_window_get_current_breakpoint (::AdwApplicationWindow* self /*none*/);
Adw::Breakpoint base::ApplicationWindowBase::get_current_breakpoint () noexcept
{
  typedef ::AdwBreakpoint* (*call_wrap_t) (::AdwApplicationWindow* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_application_window_get_current_breakpoint;
  auto _temp_ret = call_wrap_v ((::AdwApplicationWindow*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// GListModel* /*full*/ adw_application_window_get_dialogs (AdwApplicationWindow* self /*none*/);
// ::GListModel* /*full*/ adw_application_window_get_dialogs (::AdwApplicationWindow* self /*none*/);
Gio::ListModel base::ApplicationWindowBase::get_dialogs () noexcept
{
  typedef ::GListModel* (*call_wrap_t) (::AdwApplicationWindow* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_application_window_get_dialogs;
  auto _temp_ret = call_wrap_v ((::AdwApplicationWindow*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// AdwDialog* /*none,nullable*/ adw_application_window_get_visible_dialog (AdwApplicationWindow* self /*none*/);
// ::AdwDialog* /*none,nullable*/ adw_application_window_get_visible_dialog (::AdwApplicationWindow* self /*none*/);
Adw::Dialog base::ApplicationWindowBase::get_visible_dialog () noexcept
{
  typedef ::AdwDialog* (*call_wrap_t) (::AdwApplicationWindow* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_application_window_get_visible_dialog;
  auto _temp_ret = call_wrap_v ((::AdwApplicationWindow*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// void adw_application_window_set_adaptive_preview (AdwApplicationWindow* self /*none*/, gboolean adaptive_preview);
// void adw_application_window_set_adaptive_preview (::AdwApplicationWindow* self /*none*/, gboolean adaptive_preview);
void base::ApplicationWindowBase::set_adaptive_preview (gboolean adaptive_preview) noexcept
{
  typedef void (*call_wrap_t) (::AdwApplicationWindow* self, gboolean adaptive_preview);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_application_window_set_adaptive_preview;
  auto adaptive_preview_to_c = adaptive_preview;
  call_wrap_v ((::AdwApplicationWindow*) (gobj_()), (gboolean) (adaptive_preview_to_c));
}

// void adw_application_window_set_content (AdwApplicationWindow* self /*none*/, GtkWidget* content /*none,nullable*/);
// void adw_application_window_set_content (::AdwApplicationWindow* self /*none*/, ::GtkWidget* content /*none,nullable*/);
void base::ApplicationWindowBase::set_content (Gtk::Widget content) noexcept
{
  typedef void (*call_wrap_t) (::AdwApplicationWindow* self, ::GtkWidget* content);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_application_window_set_content;
  auto content_to_c = gi::unwrap (content, gi::transfer_none);
  call_wrap_v ((::AdwApplicationWindow*) (gobj_()), (::GtkWidget*) (content_to_c));
}
void base::ApplicationWindowBase::set_content () noexcept
{
  typedef void (*call_wrap_t) (::AdwApplicationWindow* self, ::GtkWidget* content);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_application_window_set_content;
  auto content_to_c = nullptr;
  call_wrap_v ((::AdwApplicationWindow*) (gobj_()), (::GtkWidget*) (content_to_c));
}


} // namespace base

} // namespace Adw

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<adw/applicationwindow_extra_def_impl.hpp>)
#include <adw/applicationwindow_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<adw/applicationwindow_extra_impl.hpp>)
#include <adw/applicationwindow_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Adw {

namespace impl {

namespace internal {

void ApplicationWindowClassDef::class_init (gpointer class_struct, gpointer factory)
{
  ::AdwApplicationWindowClass *methods = (::AdwApplicationWindowClass *) class_struct;
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
