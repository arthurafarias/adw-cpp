// AUTO-GENERATED

#ifndef _GI_ADW_PREFERENCESDIALOG_IMPL_HPP_
#define _GI_ADW_PREFERENCESDIALOG_IMPL_HPP_

namespace gi {

namespace repository {

namespace Adw {

namespace base {

// AdwDialog* /*none*/ adw_preferences_dialog_new ();
// ::AdwPreferencesDialog* /*none*/ adw_preferences_dialog_new ();
Adw::PreferencesDialog base::PreferencesDialogBase::new_ () noexcept
{
  typedef ::AdwPreferencesDialog* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) adw_preferences_dialog_new;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// void adw_preferences_dialog_add (AdwPreferencesDialog* self /*none*/, AdwPreferencesPage* page /*none*/);
// void adw_preferences_dialog_add (::AdwPreferencesDialog* self /*none*/, ::AdwPreferencesPage* page /*none*/);
void base::PreferencesDialogBase::add (Adw::PreferencesPage page) noexcept
{
  typedef void (*call_wrap_t) (::AdwPreferencesDialog* self, ::AdwPreferencesPage* page);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_preferences_dialog_add;
  auto page_to_c = gi::unwrap (page, gi::transfer_none);
  call_wrap_v ((::AdwPreferencesDialog*) (gobj_()), (::AdwPreferencesPage*) (page_to_c));
}

// void adw_preferences_dialog_add_toast (AdwPreferencesDialog* self /*none*/, AdwToast* toast /*full*/);
// void adw_preferences_dialog_add_toast (::AdwPreferencesDialog* self /*none*/, ::AdwToast* toast /*full*/);
void base::PreferencesDialogBase::add_toast (Adw::Toast toast) noexcept
{
  typedef void (*call_wrap_t) (::AdwPreferencesDialog* self, ::AdwToast* toast);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_preferences_dialog_add_toast;
  auto toast_to_c = gi::unwrap (toast, gi::transfer_full);
  call_wrap_v ((::AdwPreferencesDialog*) (gobj_()), (::AdwToast*) (toast_to_c));
}

// gboolean adw_preferences_dialog_get_search_enabled (AdwPreferencesDialog* self /*none*/);
// gboolean adw_preferences_dialog_get_search_enabled (::AdwPreferencesDialog* self /*none*/);
bool base::PreferencesDialogBase::get_search_enabled () noexcept
{
  typedef gboolean (*call_wrap_t) (::AdwPreferencesDialog* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_preferences_dialog_get_search_enabled;
  auto _temp_ret = call_wrap_v ((::AdwPreferencesDialog*) (gobj_()));
  return _temp_ret;
}

// AdwPreferencesPage* /*none,nullable*/ adw_preferences_dialog_get_visible_page (AdwPreferencesDialog* self /*none*/);
// ::AdwPreferencesPage* /*none,nullable*/ adw_preferences_dialog_get_visible_page (::AdwPreferencesDialog* self /*none*/);
Adw::PreferencesPage base::PreferencesDialogBase::get_visible_page () noexcept
{
  typedef ::AdwPreferencesPage* (*call_wrap_t) (::AdwPreferencesDialog* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_preferences_dialog_get_visible_page;
  auto _temp_ret = call_wrap_v ((::AdwPreferencesDialog*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// const char* /*none,nullable*/ adw_preferences_dialog_get_visible_page_name (AdwPreferencesDialog* self /*none*/);
// const char* /*none,nullable*/ adw_preferences_dialog_get_visible_page_name (::AdwPreferencesDialog* self /*none*/);
gi::cstring_v base::PreferencesDialogBase::get_visible_page_name () noexcept
{
  typedef const char* (*call_wrap_t) (::AdwPreferencesDialog* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_preferences_dialog_get_visible_page_name;
  auto _temp_ret = call_wrap_v ((::AdwPreferencesDialog*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// gboolean adw_preferences_dialog_pop_subpage (AdwPreferencesDialog* self /*none*/);
// gboolean adw_preferences_dialog_pop_subpage (::AdwPreferencesDialog* self /*none*/);
bool base::PreferencesDialogBase::pop_subpage () noexcept
{
  typedef gboolean (*call_wrap_t) (::AdwPreferencesDialog* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_preferences_dialog_pop_subpage;
  auto _temp_ret = call_wrap_v ((::AdwPreferencesDialog*) (gobj_()));
  return _temp_ret;
}

// void adw_preferences_dialog_push_subpage (AdwPreferencesDialog* self /*none*/, AdwNavigationPage* page /*none*/);
// void adw_preferences_dialog_push_subpage (::AdwPreferencesDialog* self /*none*/, ::AdwNavigationPage* page /*none*/);
void base::PreferencesDialogBase::push_subpage (Adw::NavigationPage page) noexcept
{
  typedef void (*call_wrap_t) (::AdwPreferencesDialog* self, ::AdwNavigationPage* page);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_preferences_dialog_push_subpage;
  auto page_to_c = gi::unwrap (page, gi::transfer_none);
  call_wrap_v ((::AdwPreferencesDialog*) (gobj_()), (::AdwNavigationPage*) (page_to_c));
}

// void adw_preferences_dialog_remove (AdwPreferencesDialog* self /*none*/, AdwPreferencesPage* page /*none*/);
// void adw_preferences_dialog_remove (::AdwPreferencesDialog* self /*none*/, ::AdwPreferencesPage* page /*none*/);
void base::PreferencesDialogBase::remove (Adw::PreferencesPage page) noexcept
{
  typedef void (*call_wrap_t) (::AdwPreferencesDialog* self, ::AdwPreferencesPage* page);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_preferences_dialog_remove;
  auto page_to_c = gi::unwrap (page, gi::transfer_none);
  call_wrap_v ((::AdwPreferencesDialog*) (gobj_()), (::AdwPreferencesPage*) (page_to_c));
}

// void adw_preferences_dialog_set_search_enabled (AdwPreferencesDialog* self /*none*/, gboolean search_enabled);
// void adw_preferences_dialog_set_search_enabled (::AdwPreferencesDialog* self /*none*/, gboolean search_enabled);
void base::PreferencesDialogBase::set_search_enabled (gboolean search_enabled) noexcept
{
  typedef void (*call_wrap_t) (::AdwPreferencesDialog* self, gboolean search_enabled);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_preferences_dialog_set_search_enabled;
  auto search_enabled_to_c = search_enabled;
  call_wrap_v ((::AdwPreferencesDialog*) (gobj_()), (gboolean) (search_enabled_to_c));
}

// void adw_preferences_dialog_set_visible_page (AdwPreferencesDialog* self /*none*/, AdwPreferencesPage* page /*none*/);
// void adw_preferences_dialog_set_visible_page (::AdwPreferencesDialog* self /*none*/, ::AdwPreferencesPage* page /*none*/);
void base::PreferencesDialogBase::set_visible_page (Adw::PreferencesPage page) noexcept
{
  typedef void (*call_wrap_t) (::AdwPreferencesDialog* self, ::AdwPreferencesPage* page);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_preferences_dialog_set_visible_page;
  auto page_to_c = gi::unwrap (page, gi::transfer_none);
  call_wrap_v ((::AdwPreferencesDialog*) (gobj_()), (::AdwPreferencesPage*) (page_to_c));
}

// void adw_preferences_dialog_set_visible_page_name (AdwPreferencesDialog* self /*none*/, const char* name /*none*/);
// void adw_preferences_dialog_set_visible_page_name (::AdwPreferencesDialog* self /*none*/, const char* name /*none*/);
void base::PreferencesDialogBase::set_visible_page_name (const gi::cstring_v name) noexcept
{
  typedef void (*call_wrap_t) (::AdwPreferencesDialog* self, const char* name);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_preferences_dialog_set_visible_page_name;
  auto name_to_c = gi::unwrap (name, gi::transfer_none);
  call_wrap_v ((::AdwPreferencesDialog*) (gobj_()), (const char*) (name_to_c));
}


} // namespace base

} // namespace Adw

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<adw/preferencesdialog_extra_def_impl.hpp>)
#include <adw/preferencesdialog_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<adw/preferencesdialog_extra_impl.hpp>)
#include <adw/preferencesdialog_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Adw {

namespace impl {

namespace internal {

void PreferencesDialogClassDef::class_init (gpointer class_struct, gpointer factory)
{
  ::AdwPreferencesDialogClass *methods = (::AdwPreferencesDialogClass *) class_struct;
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
