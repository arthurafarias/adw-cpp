// AUTO-GENERATED

#ifndef _GI_GTK_SHORTCUTSGROUP_IMPL_HPP_
#define _GI_GTK_SHORTCUTSGROUP_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

// void gtk_shortcuts_group_add_shortcut (GtkShortcutsGroup* self /*none*/, GtkShortcutsShortcut* shortcut /*none*/);
// void gtk_shortcuts_group_add_shortcut (::GtkShortcutsGroup* self /*none*/, ::GtkShortcutsShortcut* shortcut /*none*/);
void base::ShortcutsGroupBase::add_shortcut (Gtk::ShortcutsShortcut shortcut) noexcept
{
  typedef void (*call_wrap_t) (::GtkShortcutsGroup* self, ::GtkShortcutsShortcut* shortcut);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_shortcuts_group_add_shortcut;
  auto shortcut_to_c = gi::unwrap (shortcut, gi::transfer_none);
  call_wrap_v ((::GtkShortcutsGroup*) (gobj_()), (::GtkShortcutsShortcut*) (shortcut_to_c));
}


} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/shortcutsgroup_extra_def_impl.hpp>)
#include <gtk/shortcutsgroup_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/shortcutsgroup_extra_impl.hpp>)
#include <gtk/shortcutsgroup_extra_impl.hpp>
#endif
#endif

#endif
