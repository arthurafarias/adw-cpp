// AUTO-GENERATED

#ifndef _GI_ADW_SHORTCUTSSECTION_IMPL_HPP_
#define _GI_ADW_SHORTCUTSSECTION_IMPL_HPP_

namespace gi {

namespace repository {

namespace Adw {

namespace base {

Gio::ListModel ShortcutsSectionBase::interface_ (gi::interface_tag<Gio::ListModel>)
{ return gi::wrap ((Gio::ListModel::BaseObjectType*) gobj_copy_(), gi::transfer_full); }

ShortcutsSectionBase::operator Gio::ListModel ()
{ return interface_ (gi::interface_tag<Gio::ListModel>()); }

Gtk::Buildable ShortcutsSectionBase::interface_ (gi::interface_tag<Gtk::Buildable>)
{ return gi::wrap ((Gtk::Buildable::BaseObjectType*) gobj_copy_(), gi::transfer_full); }

ShortcutsSectionBase::operator Gtk::Buildable ()
{ return interface_ (gi::interface_tag<Gtk::Buildable>()); }

// AdwShortcutsSection* /*full*/ adw_shortcuts_section_new (const char* title /*none,nullable*/);
// ::AdwShortcutsSection* /*full*/ adw_shortcuts_section_new (const char* title /*none,nullable*/);
Adw::ShortcutsSection base::ShortcutsSectionBase::new_ (const gi::cstring_v title) noexcept
{
  typedef ::AdwShortcutsSection* (*call_wrap_t) (const char* title);
  call_wrap_t call_wrap_v = (call_wrap_t) adw_shortcuts_section_new;
  auto title_to_c = gi::unwrap (title, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const char*) (title_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}
Adw::ShortcutsSection base::ShortcutsSectionBase::new_ () noexcept
{
  typedef ::AdwShortcutsSection* (*call_wrap_t) (const char* title);
  call_wrap_t call_wrap_v = (call_wrap_t) adw_shortcuts_section_new;
  auto title_to_c = nullptr;
  auto _temp_ret = call_wrap_v ((const char*) (title_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// void adw_shortcuts_section_add (AdwShortcutsSection* self /*none*/, AdwShortcutsItem* item /*full*/);
// void adw_shortcuts_section_add (::AdwShortcutsSection* self /*none*/, ::AdwShortcutsItem* item /*full*/);
void base::ShortcutsSectionBase::add (Adw::ShortcutsItem item) noexcept
{
  typedef void (*call_wrap_t) (::AdwShortcutsSection* self, ::AdwShortcutsItem* item);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_shortcuts_section_add;
  auto item_to_c = gi::unwrap (item, gi::transfer_full);
  call_wrap_v ((::AdwShortcutsSection*) (gobj_()), (::AdwShortcutsItem*) (item_to_c));
}

// const char* /*none,nullable*/ adw_shortcuts_section_get_title (AdwShortcutsSection* self /*none*/);
// const char* /*none,nullable*/ adw_shortcuts_section_get_title (::AdwShortcutsSection* self /*none*/);
gi::cstring_v base::ShortcutsSectionBase::get_title () noexcept
{
  typedef const char* (*call_wrap_t) (::AdwShortcutsSection* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_shortcuts_section_get_title;
  auto _temp_ret = call_wrap_v ((::AdwShortcutsSection*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// void adw_shortcuts_section_set_title (AdwShortcutsSection* self /*none*/, const char* title /*none,nullable*/);
// void adw_shortcuts_section_set_title (::AdwShortcutsSection* self /*none*/, const char* title /*none,nullable*/);
void base::ShortcutsSectionBase::set_title (const gi::cstring_v title) noexcept
{
  typedef void (*call_wrap_t) (::AdwShortcutsSection* self, const char* title);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_shortcuts_section_set_title;
  auto title_to_c = gi::unwrap (title, gi::transfer_none);
  call_wrap_v ((::AdwShortcutsSection*) (gobj_()), (const char*) (title_to_c));
}
void base::ShortcutsSectionBase::set_title () noexcept
{
  typedef void (*call_wrap_t) (::AdwShortcutsSection* self, const char* title);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_shortcuts_section_set_title;
  auto title_to_c = nullptr;
  call_wrap_v ((::AdwShortcutsSection*) (gobj_()), (const char*) (title_to_c));
}


} // namespace base

} // namespace Adw

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<adw/shortcutssection_extra_def_impl.hpp>)
#include <adw/shortcutssection_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<adw/shortcutssection_extra_impl.hpp>)
#include <adw/shortcutssection_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Adw {

namespace impl {

namespace internal {

void ShortcutsSectionClassDef::class_init (gpointer class_struct, gpointer factory)
{
  ::AdwShortcutsSectionClass *methods = (::AdwShortcutsSectionClass *) class_struct;
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
