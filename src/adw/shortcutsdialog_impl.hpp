// AUTO-GENERATED

#ifndef _GI_ADW_SHORTCUTSDIALOG_IMPL_HPP_
#define _GI_ADW_SHORTCUTSDIALOG_IMPL_HPP_

namespace gi {

namespace repository {

namespace Adw {

namespace base {

// AdwDialog* /*none*/ adw_shortcuts_dialog_new ();
// ::AdwShortcutsDialog* /*none*/ adw_shortcuts_dialog_new ();
Adw::ShortcutsDialog base::ShortcutsDialogBase::new_ () noexcept
{
  typedef ::AdwShortcutsDialog* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) adw_shortcuts_dialog_new;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// void adw_shortcuts_dialog_add (AdwShortcutsDialog* self /*none*/, AdwShortcutsSection* section /*full*/);
// void adw_shortcuts_dialog_add (::AdwShortcutsDialog* self /*none*/, ::AdwShortcutsSection* section /*full*/);
void base::ShortcutsDialogBase::add (Adw::ShortcutsSection section) noexcept
{
  typedef void (*call_wrap_t) (::AdwShortcutsDialog* self, ::AdwShortcutsSection* section);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_shortcuts_dialog_add;
  auto section_to_c = gi::unwrap (section, gi::transfer_full);
  call_wrap_v ((::AdwShortcutsDialog*) (gobj_()), (::AdwShortcutsSection*) (section_to_c));
}


} // namespace base

} // namespace Adw

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<adw/shortcutsdialog_extra_def_impl.hpp>)
#include <adw/shortcutsdialog_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<adw/shortcutsdialog_extra_impl.hpp>)
#include <adw/shortcutsdialog_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Adw {

namespace impl {

namespace internal {

void ShortcutsDialogClassDef::class_init (gpointer class_struct, gpointer factory)
{
  ::AdwShortcutsDialogClass *methods = (::AdwShortcutsDialogClass *) class_struct;
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
