// AUTO-GENERATED

#ifndef _GI_GTK_SHORTCUTSWINDOW_IMPL_HPP_
#define _GI_GTK_SHORTCUTSWINDOW_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

// void gtk_shortcuts_window_add_section (GtkShortcutsWindow* self /*none*/, GtkShortcutsSection* section /*none*/);
// void gtk_shortcuts_window_add_section (::GtkShortcutsWindow* self /*none*/, ::GtkShortcutsSection* section /*none*/);
void base::ShortcutsWindowBase::add_section (Gtk::ShortcutsSection section) noexcept
{
  typedef void (*call_wrap_t) (::GtkShortcutsWindow* self, ::GtkShortcutsSection* section);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_shortcuts_window_add_section;
  auto section_to_c = gi::unwrap (section, gi::transfer_none);
  call_wrap_v ((::GtkShortcutsWindow*) (gobj_()), (::GtkShortcutsSection*) (section_to_c));
}




} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/shortcutswindow_extra_def_impl.hpp>)
#include <gtk/shortcutswindow_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/shortcutswindow_extra_impl.hpp>)
#include <gtk/shortcutswindow_extra_impl.hpp>
#endif
#endif

#endif
