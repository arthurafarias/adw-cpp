// AUTO-GENERATED

#ifndef _GI_GTK_SHORTCUTSSECTION_IMPL_HPP_
#define _GI_GTK_SHORTCUTSSECTION_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

// void gtk_shortcuts_section_add_group (GtkShortcutsSection* self /*none*/, GtkShortcutsGroup* group /*none*/);
// void gtk_shortcuts_section_add_group (::GtkShortcutsSection* self /*none*/, ::GtkShortcutsGroup* group /*none*/);
void base::ShortcutsSectionBase::add_group (Gtk::ShortcutsGroup group) noexcept
{
  typedef void (*call_wrap_t) (::GtkShortcutsSection* self, ::GtkShortcutsGroup* group);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_shortcuts_section_add_group;
  auto group_to_c = gi::unwrap (group, gi::transfer_none);
  call_wrap_v ((::GtkShortcutsSection*) (gobj_()), (::GtkShortcutsGroup*) (group_to_c));
}



} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/shortcutssection_extra_def_impl.hpp>)
#include <gtk/shortcutssection_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/shortcutssection_extra_impl.hpp>)
#include <gtk/shortcutssection_extra_impl.hpp>
#endif
#endif

#endif
