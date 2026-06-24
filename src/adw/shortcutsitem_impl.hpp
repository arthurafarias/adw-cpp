// AUTO-GENERATED

#ifndef _GI_ADW_SHORTCUTSITEM_IMPL_HPP_
#define _GI_ADW_SHORTCUTSITEM_IMPL_HPP_

namespace gi {

namespace repository {

namespace Adw {

namespace base {

// AdwShortcutsItem* /*full*/ adw_shortcuts_item_new (const char* title /*none*/, const char* accelerator /*none*/);
// ::AdwShortcutsItem* /*full*/ adw_shortcuts_item_new (const char* title /*none*/, const char* accelerator /*none*/);
Adw::ShortcutsItem base::ShortcutsItemBase::new_ (const gi::cstring_v title, const gi::cstring_v accelerator) noexcept
{
  typedef ::AdwShortcutsItem* (*call_wrap_t) (const char* title, const char* accelerator);
  call_wrap_t call_wrap_v = (call_wrap_t) adw_shortcuts_item_new;
  auto accelerator_to_c = gi::unwrap (accelerator, gi::transfer_none);
  auto title_to_c = gi::unwrap (title, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const char*) (title_to_c), (const char*) (accelerator_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// AdwShortcutsItem* /*full*/ adw_shortcuts_item_new_from_action (const char* title /*none*/, const char* action_name /*none*/);
// ::AdwShortcutsItem* /*full*/ adw_shortcuts_item_new_from_action (const char* title /*none*/, const char* action_name /*none*/);
Adw::ShortcutsItem base::ShortcutsItemBase::new_from_action (const gi::cstring_v title, const gi::cstring_v action_name) noexcept
{
  typedef ::AdwShortcutsItem* (*call_wrap_t) (const char* title, const char* action_name);
  call_wrap_t call_wrap_v = (call_wrap_t) adw_shortcuts_item_new_from_action;
  auto action_name_to_c = gi::unwrap (action_name, gi::transfer_none);
  auto title_to_c = gi::unwrap (title, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const char*) (title_to_c), (const char*) (action_name_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// const char* /*none*/ adw_shortcuts_item_get_accelerator (AdwShortcutsItem* self /*none*/);
// const char* /*none*/ adw_shortcuts_item_get_accelerator (::AdwShortcutsItem* self /*none*/);
gi::cstring_v base::ShortcutsItemBase::get_accelerator () noexcept
{
  typedef const char* (*call_wrap_t) (::AdwShortcutsItem* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_shortcuts_item_get_accelerator;
  auto _temp_ret = call_wrap_v ((::AdwShortcutsItem*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// const char* /*none*/ adw_shortcuts_item_get_action_name (AdwShortcutsItem* self /*none*/);
// const char* /*none*/ adw_shortcuts_item_get_action_name (::AdwShortcutsItem* self /*none*/);
gi::cstring_v base::ShortcutsItemBase::get_action_name () noexcept
{
  typedef const char* (*call_wrap_t) (::AdwShortcutsItem* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_shortcuts_item_get_action_name;
  auto _temp_ret = call_wrap_v ((::AdwShortcutsItem*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// GtkTextDirection adw_shortcuts_item_get_direction (AdwShortcutsItem* self /*none*/);
// ::GtkTextDirection adw_shortcuts_item_get_direction (::AdwShortcutsItem* self /*none*/);
Gtk::TextDirection base::ShortcutsItemBase::get_direction () noexcept
{
  typedef ::GtkTextDirection (*call_wrap_t) (::AdwShortcutsItem* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_shortcuts_item_get_direction;
  auto _temp_ret = call_wrap_v ((::AdwShortcutsItem*) (gobj_()));
  return gi::wrap (_temp_ret);
}

// const char* /*none*/ adw_shortcuts_item_get_subtitle (AdwShortcutsItem* self /*none*/);
// const char* /*none*/ adw_shortcuts_item_get_subtitle (::AdwShortcutsItem* self /*none*/);
gi::cstring_v base::ShortcutsItemBase::get_subtitle () noexcept
{
  typedef const char* (*call_wrap_t) (::AdwShortcutsItem* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_shortcuts_item_get_subtitle;
  auto _temp_ret = call_wrap_v ((::AdwShortcutsItem*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// const char* /*none*/ adw_shortcuts_item_get_title (AdwShortcutsItem* self /*none*/);
// const char* /*none*/ adw_shortcuts_item_get_title (::AdwShortcutsItem* self /*none*/);
gi::cstring_v base::ShortcutsItemBase::get_title () noexcept
{
  typedef const char* (*call_wrap_t) (::AdwShortcutsItem* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_shortcuts_item_get_title;
  auto _temp_ret = call_wrap_v ((::AdwShortcutsItem*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// void adw_shortcuts_item_set_accelerator (AdwShortcutsItem* self /*none*/, const char* accelerator /*none*/);
// void adw_shortcuts_item_set_accelerator (::AdwShortcutsItem* self /*none*/, const char* accelerator /*none*/);
void base::ShortcutsItemBase::set_accelerator (const gi::cstring_v accelerator) noexcept
{
  typedef void (*call_wrap_t) (::AdwShortcutsItem* self, const char* accelerator);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_shortcuts_item_set_accelerator;
  auto accelerator_to_c = gi::unwrap (accelerator, gi::transfer_none);
  call_wrap_v ((::AdwShortcutsItem*) (gobj_()), (const char*) (accelerator_to_c));
}

// void adw_shortcuts_item_set_action_name (AdwShortcutsItem* self /*none*/, const char* action_name /*none*/);
// void adw_shortcuts_item_set_action_name (::AdwShortcutsItem* self /*none*/, const char* action_name /*none*/);
void base::ShortcutsItemBase::set_action_name (const gi::cstring_v action_name) noexcept
{
  typedef void (*call_wrap_t) (::AdwShortcutsItem* self, const char* action_name);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_shortcuts_item_set_action_name;
  auto action_name_to_c = gi::unwrap (action_name, gi::transfer_none);
  call_wrap_v ((::AdwShortcutsItem*) (gobj_()), (const char*) (action_name_to_c));
}

// void adw_shortcuts_item_set_direction (AdwShortcutsItem* self /*none*/, GtkTextDirection direction);
// void adw_shortcuts_item_set_direction (::AdwShortcutsItem* self /*none*/, ::GtkTextDirection direction);
void base::ShortcutsItemBase::set_direction (Gtk::TextDirection direction) noexcept
{
  typedef void (*call_wrap_t) (::AdwShortcutsItem* self, ::GtkTextDirection direction);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_shortcuts_item_set_direction;
  auto direction_to_c = gi::unwrap (direction);
  call_wrap_v ((::AdwShortcutsItem*) (gobj_()), (::GtkTextDirection) (direction_to_c));
}

// void adw_shortcuts_item_set_subtitle (AdwShortcutsItem* self /*none*/, const char* subtitle /*none*/);
// void adw_shortcuts_item_set_subtitle (::AdwShortcutsItem* self /*none*/, const char* subtitle /*none*/);
void base::ShortcutsItemBase::set_subtitle (const gi::cstring_v subtitle) noexcept
{
  typedef void (*call_wrap_t) (::AdwShortcutsItem* self, const char* subtitle);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_shortcuts_item_set_subtitle;
  auto subtitle_to_c = gi::unwrap (subtitle, gi::transfer_none);
  call_wrap_v ((::AdwShortcutsItem*) (gobj_()), (const char*) (subtitle_to_c));
}

// void adw_shortcuts_item_set_title (AdwShortcutsItem* self /*none*/, const char* title /*none*/);
// void adw_shortcuts_item_set_title (::AdwShortcutsItem* self /*none*/, const char* title /*none*/);
void base::ShortcutsItemBase::set_title (const gi::cstring_v title) noexcept
{
  typedef void (*call_wrap_t) (::AdwShortcutsItem* self, const char* title);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_shortcuts_item_set_title;
  auto title_to_c = gi::unwrap (title, gi::transfer_none);
  call_wrap_v ((::AdwShortcutsItem*) (gobj_()), (const char*) (title_to_c));
}


} // namespace base

} // namespace Adw

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<adw/shortcutsitem_extra_def_impl.hpp>)
#include <adw/shortcutsitem_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<adw/shortcutsitem_extra_impl.hpp>)
#include <adw/shortcutsitem_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Adw {

namespace impl {

namespace internal {

void ShortcutsItemClassDef::class_init (gpointer class_struct, gpointer factory)
{
  ::AdwShortcutsItemClass *methods = (::AdwShortcutsItemClass *) class_struct;
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
