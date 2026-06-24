// AUTO-GENERATED

#ifndef _GI_ADW_DIALOG_IMPL_HPP_
#define _GI_ADW_DIALOG_IMPL_HPP_

namespace gi {

namespace repository {

namespace Adw {

namespace base {

Gtk::ShortcutManager DialogBase::interface_ (gi::interface_tag<Gtk::ShortcutManager>)
{ return gi::wrap ((Gtk::ShortcutManager::BaseObjectType*) gobj_copy_(), gi::transfer_full); }

DialogBase::operator Gtk::ShortcutManager ()
{ return interface_ (gi::interface_tag<Gtk::ShortcutManager>()); }

// AdwDialog* /*none*/ adw_dialog_new ();
// ::AdwDialog* /*none*/ adw_dialog_new ();
Adw::Dialog base::DialogBase::new_ () noexcept
{
  typedef ::AdwDialog* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) adw_dialog_new;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// void adw_dialog_add_breakpoint (AdwDialog* self /*none*/, AdwBreakpoint* breakpoint /*full*/);
// void adw_dialog_add_breakpoint (::AdwDialog* self /*none*/, ::AdwBreakpoint* breakpoint /*full*/);
void base::DialogBase::add_breakpoint (Adw::Breakpoint breakpoint) noexcept
{
  typedef void (*call_wrap_t) (::AdwDialog* self, ::AdwBreakpoint* breakpoint);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_dialog_add_breakpoint;
  auto breakpoint_to_c = gi::unwrap (breakpoint, gi::transfer_full);
  call_wrap_v ((::AdwDialog*) (gobj_()), (::AdwBreakpoint*) (breakpoint_to_c));
}

// gboolean adw_dialog_close (AdwDialog* self /*none*/);
// gboolean adw_dialog_close (::AdwDialog* self /*none*/);
bool base::DialogBase::close () noexcept
{
  typedef gboolean (*call_wrap_t) (::AdwDialog* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_dialog_close;
  auto _temp_ret = call_wrap_v ((::AdwDialog*) (gobj_()));
  return _temp_ret;
}

// void adw_dialog_force_close (AdwDialog* self /*none*/);
// void adw_dialog_force_close (::AdwDialog* self /*none*/);
void base::DialogBase::force_close () noexcept
{
  typedef void (*call_wrap_t) (::AdwDialog* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_dialog_force_close;
  call_wrap_v ((::AdwDialog*) (gobj_()));
}

// gboolean adw_dialog_get_can_close (AdwDialog* self /*none*/);
// gboolean adw_dialog_get_can_close (::AdwDialog* self /*none*/);
bool base::DialogBase::get_can_close () noexcept
{
  typedef gboolean (*call_wrap_t) (::AdwDialog* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_dialog_get_can_close;
  auto _temp_ret = call_wrap_v ((::AdwDialog*) (gobj_()));
  return _temp_ret;
}

// GtkWidget* /*none,nullable*/ adw_dialog_get_child (AdwDialog* self /*none*/);
// ::GtkWidget* /*none,nullable*/ adw_dialog_get_child (::AdwDialog* self /*none*/);
Gtk::Widget base::DialogBase::get_child () noexcept
{
  typedef ::GtkWidget* (*call_wrap_t) (::AdwDialog* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_dialog_get_child;
  auto _temp_ret = call_wrap_v ((::AdwDialog*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// int adw_dialog_get_content_height (AdwDialog* self /*none*/);
// gint adw_dialog_get_content_height (::AdwDialog* self /*none*/);
gint base::DialogBase::get_content_height () noexcept
{
  typedef gint (*call_wrap_t) (::AdwDialog* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_dialog_get_content_height;
  auto _temp_ret = call_wrap_v ((::AdwDialog*) (gobj_()));
  return _temp_ret;
}

// int adw_dialog_get_content_width (AdwDialog* self /*none*/);
// gint adw_dialog_get_content_width (::AdwDialog* self /*none*/);
gint base::DialogBase::get_content_width () noexcept
{
  typedef gint (*call_wrap_t) (::AdwDialog* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_dialog_get_content_width;
  auto _temp_ret = call_wrap_v ((::AdwDialog*) (gobj_()));
  return _temp_ret;
}

// AdwBreakpoint* /*none,nullable*/ adw_dialog_get_current_breakpoint (AdwDialog* self /*none*/);
// ::AdwBreakpoint* /*none,nullable*/ adw_dialog_get_current_breakpoint (::AdwDialog* self /*none*/);
Adw::Breakpoint base::DialogBase::get_current_breakpoint () noexcept
{
  typedef ::AdwBreakpoint* (*call_wrap_t) (::AdwDialog* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_dialog_get_current_breakpoint;
  auto _temp_ret = call_wrap_v ((::AdwDialog*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// GtkWidget* /*none,nullable*/ adw_dialog_get_default_widget (AdwDialog* self /*none*/);
// ::GtkWidget* /*none,nullable*/ adw_dialog_get_default_widget (::AdwDialog* self /*none*/);
Gtk::Widget base::DialogBase::get_default_widget () noexcept
{
  typedef ::GtkWidget* (*call_wrap_t) (::AdwDialog* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_dialog_get_default_widget;
  auto _temp_ret = call_wrap_v ((::AdwDialog*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// GtkWidget* /*none,nullable*/ adw_dialog_get_focus (AdwDialog* self /*none*/);
// ::GtkWidget* /*none,nullable*/ adw_dialog_get_focus (::AdwDialog* self /*none*/);
Gtk::Widget base::DialogBase::get_focus () noexcept
{
  typedef ::GtkWidget* (*call_wrap_t) (::AdwDialog* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_dialog_get_focus;
  auto _temp_ret = call_wrap_v ((::AdwDialog*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// gboolean adw_dialog_get_follows_content_size (AdwDialog* self /*none*/);
// gboolean adw_dialog_get_follows_content_size (::AdwDialog* self /*none*/);
bool base::DialogBase::get_follows_content_size () noexcept
{
  typedef gboolean (*call_wrap_t) (::AdwDialog* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_dialog_get_follows_content_size;
  auto _temp_ret = call_wrap_v ((::AdwDialog*) (gobj_()));
  return _temp_ret;
}

// AdwDialogPresentationMode adw_dialog_get_presentation_mode (AdwDialog* self /*none*/);
// ::AdwDialogPresentationMode adw_dialog_get_presentation_mode (::AdwDialog* self /*none*/);
Adw::DialogPresentationMode base::DialogBase::get_presentation_mode () noexcept
{
  typedef ::AdwDialogPresentationMode (*call_wrap_t) (::AdwDialog* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_dialog_get_presentation_mode;
  auto _temp_ret = call_wrap_v ((::AdwDialog*) (gobj_()));
  return gi::wrap (_temp_ret);
}

// const char* /*none*/ adw_dialog_get_title (AdwDialog* self /*none*/);
// const char* /*none*/ adw_dialog_get_title (::AdwDialog* self /*none*/);
gi::cstring_v base::DialogBase::get_title () noexcept
{
  typedef const char* (*call_wrap_t) (::AdwDialog* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_dialog_get_title;
  auto _temp_ret = call_wrap_v ((::AdwDialog*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// void adw_dialog_present (AdwDialog* self /*none*/, GtkWidget* parent /*none,nullable*/);
// void adw_dialog_present (::AdwDialog* self /*none*/, ::GtkWidget* parent /*none,nullable*/);
void base::DialogBase::present (Gtk::Widget parent) noexcept
{
  typedef void (*call_wrap_t) (::AdwDialog* self, ::GtkWidget* parent);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_dialog_present;
  auto parent_to_c = gi::unwrap (parent, gi::transfer_none);
  call_wrap_v ((::AdwDialog*) (gobj_()), (::GtkWidget*) (parent_to_c));
}
void base::DialogBase::present () noexcept
{
  typedef void (*call_wrap_t) (::AdwDialog* self, ::GtkWidget* parent);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_dialog_present;
  auto parent_to_c = nullptr;
  call_wrap_v ((::AdwDialog*) (gobj_()), (::GtkWidget*) (parent_to_c));
}

// void adw_dialog_set_can_close (AdwDialog* self /*none*/, gboolean can_close);
// void adw_dialog_set_can_close (::AdwDialog* self /*none*/, gboolean can_close);
void base::DialogBase::set_can_close (gboolean can_close) noexcept
{
  typedef void (*call_wrap_t) (::AdwDialog* self, gboolean can_close);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_dialog_set_can_close;
  auto can_close_to_c = can_close;
  call_wrap_v ((::AdwDialog*) (gobj_()), (gboolean) (can_close_to_c));
}

// void adw_dialog_set_child (AdwDialog* self /*none*/, GtkWidget* child /*none,nullable*/);
// void adw_dialog_set_child (::AdwDialog* self /*none*/, ::GtkWidget* child /*none,nullable*/);
void base::DialogBase::set_child (Gtk::Widget child) noexcept
{
  typedef void (*call_wrap_t) (::AdwDialog* self, ::GtkWidget* child);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_dialog_set_child;
  auto child_to_c = gi::unwrap (child, gi::transfer_none);
  call_wrap_v ((::AdwDialog*) (gobj_()), (::GtkWidget*) (child_to_c));
}
void base::DialogBase::set_child () noexcept
{
  typedef void (*call_wrap_t) (::AdwDialog* self, ::GtkWidget* child);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_dialog_set_child;
  auto child_to_c = nullptr;
  call_wrap_v ((::AdwDialog*) (gobj_()), (::GtkWidget*) (child_to_c));
}

// void adw_dialog_set_content_height (AdwDialog* self /*none*/, int content_height);
// void adw_dialog_set_content_height (::AdwDialog* self /*none*/, gint content_height);
void base::DialogBase::set_content_height (gint content_height) noexcept
{
  typedef void (*call_wrap_t) (::AdwDialog* self, gint content_height);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_dialog_set_content_height;
  auto content_height_to_c = content_height;
  call_wrap_v ((::AdwDialog*) (gobj_()), (gint) (content_height_to_c));
}

// void adw_dialog_set_content_width (AdwDialog* self /*none*/, int content_width);
// void adw_dialog_set_content_width (::AdwDialog* self /*none*/, gint content_width);
void base::DialogBase::set_content_width (gint content_width) noexcept
{
  typedef void (*call_wrap_t) (::AdwDialog* self, gint content_width);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_dialog_set_content_width;
  auto content_width_to_c = content_width;
  call_wrap_v ((::AdwDialog*) (gobj_()), (gint) (content_width_to_c));
}

// void adw_dialog_set_default_widget (AdwDialog* self /*none*/, GtkWidget* default_widget /*none,nullable*/);
// void adw_dialog_set_default_widget (::AdwDialog* self /*none*/, ::GtkWidget* default_widget /*none,nullable*/);
void base::DialogBase::set_default_widget (Gtk::Widget default_widget) noexcept
{
  typedef void (*call_wrap_t) (::AdwDialog* self, ::GtkWidget* default_widget);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_dialog_set_default_widget;
  auto default_widget_to_c = gi::unwrap (default_widget, gi::transfer_none);
  call_wrap_v ((::AdwDialog*) (gobj_()), (::GtkWidget*) (default_widget_to_c));
}
void base::DialogBase::set_default_widget () noexcept
{
  typedef void (*call_wrap_t) (::AdwDialog* self, ::GtkWidget* default_widget);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_dialog_set_default_widget;
  auto default_widget_to_c = nullptr;
  call_wrap_v ((::AdwDialog*) (gobj_()), (::GtkWidget*) (default_widget_to_c));
}

// void adw_dialog_set_focus (AdwDialog* self /*none*/, GtkWidget* focus /*none,nullable*/);
// void adw_dialog_set_focus (::AdwDialog* self /*none*/, ::GtkWidget* focus /*none,nullable*/);
void base::DialogBase::set_focus (Gtk::Widget focus) noexcept
{
  typedef void (*call_wrap_t) (::AdwDialog* self, ::GtkWidget* focus);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_dialog_set_focus;
  auto focus_to_c = gi::unwrap (focus, gi::transfer_none);
  call_wrap_v ((::AdwDialog*) (gobj_()), (::GtkWidget*) (focus_to_c));
}
void base::DialogBase::set_focus () noexcept
{
  typedef void (*call_wrap_t) (::AdwDialog* self, ::GtkWidget* focus);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_dialog_set_focus;
  auto focus_to_c = nullptr;
  call_wrap_v ((::AdwDialog*) (gobj_()), (::GtkWidget*) (focus_to_c));
}

// void adw_dialog_set_follows_content_size (AdwDialog* self /*none*/, gboolean follows_content_size);
// void adw_dialog_set_follows_content_size (::AdwDialog* self /*none*/, gboolean follows_content_size);
void base::DialogBase::set_follows_content_size (gboolean follows_content_size) noexcept
{
  typedef void (*call_wrap_t) (::AdwDialog* self, gboolean follows_content_size);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_dialog_set_follows_content_size;
  auto follows_content_size_to_c = follows_content_size;
  call_wrap_v ((::AdwDialog*) (gobj_()), (gboolean) (follows_content_size_to_c));
}

// void adw_dialog_set_presentation_mode (AdwDialog* self /*none*/, AdwDialogPresentationMode presentation_mode);
// void adw_dialog_set_presentation_mode (::AdwDialog* self /*none*/, ::AdwDialogPresentationMode presentation_mode);
void base::DialogBase::set_presentation_mode (Adw::DialogPresentationMode presentation_mode) noexcept
{
  typedef void (*call_wrap_t) (::AdwDialog* self, ::AdwDialogPresentationMode presentation_mode);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_dialog_set_presentation_mode;
  auto presentation_mode_to_c = gi::unwrap (presentation_mode);
  call_wrap_v ((::AdwDialog*) (gobj_()), (::AdwDialogPresentationMode) (presentation_mode_to_c));
}

// void adw_dialog_set_title (AdwDialog* self /*none*/, const char* title /*none*/);
// void adw_dialog_set_title (::AdwDialog* self /*none*/, const char* title /*none*/);
void base::DialogBase::set_title (const gi::cstring_v title) noexcept
{
  typedef void (*call_wrap_t) (::AdwDialog* self, const char* title);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_dialog_set_title;
  auto title_to_c = gi::unwrap (title, gi::transfer_none);
  call_wrap_v ((::AdwDialog*) (gobj_()), (const char*) (title_to_c));
}




} // namespace base

} // namespace Adw

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<adw/dialog_extra_def_impl.hpp>)
#include <adw/dialog_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<adw/dialog_extra_impl.hpp>)
#include <adw/dialog_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Adw {

namespace impl {

namespace internal {

void DialogClassDef::class_init (gpointer class_struct, gpointer factory)
{
  ::AdwDialogClass *methods = (::AdwDialogClass *) class_struct;
  (void) methods;

  auto init_data = GI_MEMBER_INIT_DATA(TypeInitData, factory);
  (void) init_data;

  if (init_data.close_attempt) methods->close_attempt = (decltype (methods->close_attempt)) gi::detail::method_wrapper<self, void (*) (), gi::transfer_full_t, std::tuple<>>::wrapper<&self::close_attempt_>;
  if (init_data.closed) methods->closed = (decltype (methods->closed)) gi::detail::method_wrapper<self, void (*) (), gi::transfer_full_t, std::tuple<>>::wrapper<&self::closed_>;
}

// void Dialog::close_attempt (AdwDialog* dialog /*none*/);
// void Dialog::close_attempt (::AdwDialog* dialog /*none*/);
void DialogClass::close_attempt_ () noexcept
{
  if (!get_struct_()->close_attempt) { g_critical ("no method in class struct"); return ; }
  typedef void (*call_wrap_t) (::AdwDialog* dialog);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->close_attempt;
  call_wrap_v ((::AdwDialog*) (gobj_()));
}

// void Dialog::closed (AdwDialog* dialog /*none*/);
// void Dialog::closed (::AdwDialog* dialog /*none*/);
void DialogClass::closed_ () noexcept
{
  if (!get_struct_()->closed) { g_critical ("no method in class struct"); return ; }
  typedef void (*call_wrap_t) (::AdwDialog* dialog);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->closed;
  call_wrap_v ((::AdwDialog*) (gobj_()));
}

} // namespace internal

} // namespace impl

} // namespace Adw

} // namespace repository

} // namespace gi

#endif
