// AUTO-GENERATED

#ifndef _GI_ADW_PREFERENCESROW_IMPL_HPP_
#define _GI_ADW_PREFERENCESROW_IMPL_HPP_

namespace gi {

namespace repository {

namespace Adw {

namespace base {

// GtkWidget* /*none*/ adw_preferences_row_new ();
// ::AdwPreferencesRow* /*none*/ adw_preferences_row_new ();
Adw::PreferencesRow base::PreferencesRowBase::new_ () noexcept
{
  typedef ::AdwPreferencesRow* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) adw_preferences_row_new;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// const char* /*none*/ adw_preferences_row_get_title (AdwPreferencesRow* self /*none*/);
// const char* /*none*/ adw_preferences_row_get_title (::AdwPreferencesRow* self /*none*/);
gi::cstring_v base::PreferencesRowBase::get_title () noexcept
{
  typedef const char* (*call_wrap_t) (::AdwPreferencesRow* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_preferences_row_get_title;
  auto _temp_ret = call_wrap_v ((::AdwPreferencesRow*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// gboolean adw_preferences_row_get_title_selectable (AdwPreferencesRow* self /*none*/);
// gboolean adw_preferences_row_get_title_selectable (::AdwPreferencesRow* self /*none*/);
bool base::PreferencesRowBase::get_title_selectable () noexcept
{
  typedef gboolean (*call_wrap_t) (::AdwPreferencesRow* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_preferences_row_get_title_selectable;
  auto _temp_ret = call_wrap_v ((::AdwPreferencesRow*) (gobj_()));
  return _temp_ret;
}

// gboolean adw_preferences_row_get_use_markup (AdwPreferencesRow* self /*none*/);
// gboolean adw_preferences_row_get_use_markup (::AdwPreferencesRow* self /*none*/);
bool base::PreferencesRowBase::get_use_markup () noexcept
{
  typedef gboolean (*call_wrap_t) (::AdwPreferencesRow* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_preferences_row_get_use_markup;
  auto _temp_ret = call_wrap_v ((::AdwPreferencesRow*) (gobj_()));
  return _temp_ret;
}

// gboolean adw_preferences_row_get_use_underline (AdwPreferencesRow* self /*none*/);
// gboolean adw_preferences_row_get_use_underline (::AdwPreferencesRow* self /*none*/);
bool base::PreferencesRowBase::get_use_underline () noexcept
{
  typedef gboolean (*call_wrap_t) (::AdwPreferencesRow* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_preferences_row_get_use_underline;
  auto _temp_ret = call_wrap_v ((::AdwPreferencesRow*) (gobj_()));
  return _temp_ret;
}

// void adw_preferences_row_set_title (AdwPreferencesRow* self /*none*/, const char* title /*none*/);
// void adw_preferences_row_set_title (::AdwPreferencesRow* self /*none*/, const char* title /*none*/);
void base::PreferencesRowBase::set_title (const gi::cstring_v title) noexcept
{
  typedef void (*call_wrap_t) (::AdwPreferencesRow* self, const char* title);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_preferences_row_set_title;
  auto title_to_c = gi::unwrap (title, gi::transfer_none);
  call_wrap_v ((::AdwPreferencesRow*) (gobj_()), (const char*) (title_to_c));
}

// void adw_preferences_row_set_title_selectable (AdwPreferencesRow* self /*none*/, gboolean title_selectable);
// void adw_preferences_row_set_title_selectable (::AdwPreferencesRow* self /*none*/, gboolean title_selectable);
void base::PreferencesRowBase::set_title_selectable (gboolean title_selectable) noexcept
{
  typedef void (*call_wrap_t) (::AdwPreferencesRow* self, gboolean title_selectable);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_preferences_row_set_title_selectable;
  auto title_selectable_to_c = title_selectable;
  call_wrap_v ((::AdwPreferencesRow*) (gobj_()), (gboolean) (title_selectable_to_c));
}

// void adw_preferences_row_set_use_markup (AdwPreferencesRow* self /*none*/, gboolean use_markup);
// void adw_preferences_row_set_use_markup (::AdwPreferencesRow* self /*none*/, gboolean use_markup);
void base::PreferencesRowBase::set_use_markup (gboolean use_markup) noexcept
{
  typedef void (*call_wrap_t) (::AdwPreferencesRow* self, gboolean use_markup);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_preferences_row_set_use_markup;
  auto use_markup_to_c = use_markup;
  call_wrap_v ((::AdwPreferencesRow*) (gobj_()), (gboolean) (use_markup_to_c));
}

// void adw_preferences_row_set_use_underline (AdwPreferencesRow* self /*none*/, gboolean use_underline);
// void adw_preferences_row_set_use_underline (::AdwPreferencesRow* self /*none*/, gboolean use_underline);
void base::PreferencesRowBase::set_use_underline (gboolean use_underline) noexcept
{
  typedef void (*call_wrap_t) (::AdwPreferencesRow* self, gboolean use_underline);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_preferences_row_set_use_underline;
  auto use_underline_to_c = use_underline;
  call_wrap_v ((::AdwPreferencesRow*) (gobj_()), (gboolean) (use_underline_to_c));
}


} // namespace base

} // namespace Adw

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<adw/preferencesrow_extra_def_impl.hpp>)
#include <adw/preferencesrow_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<adw/preferencesrow_extra_impl.hpp>)
#include <adw/preferencesrow_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Adw {

namespace impl {

namespace internal {

void PreferencesRowClassDef::class_init (gpointer class_struct, gpointer factory)
{
  ::AdwPreferencesRowClass *methods = (::AdwPreferencesRowClass *) class_struct;
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
