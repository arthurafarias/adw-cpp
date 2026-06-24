// AUTO-GENERATED

#ifndef _GI_ADW_PREFERENCESPAGE_IMPL_HPP_
#define _GI_ADW_PREFERENCESPAGE_IMPL_HPP_

namespace gi {

namespace repository {

namespace Adw {

namespace base {

// GtkWidget* /*none*/ adw_preferences_page_new ();
// ::AdwPreferencesPage* /*none*/ adw_preferences_page_new ();
Adw::PreferencesPage base::PreferencesPageBase::new_ () noexcept
{
  typedef ::AdwPreferencesPage* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) adw_preferences_page_new;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// void adw_preferences_page_add (AdwPreferencesPage* self /*none*/, AdwPreferencesGroup* group /*none*/);
// void adw_preferences_page_add (::AdwPreferencesPage* self /*none*/, ::AdwPreferencesGroup* group /*none*/);
void base::PreferencesPageBase::add (Adw::PreferencesGroup group) noexcept
{
  typedef void (*call_wrap_t) (::AdwPreferencesPage* self, ::AdwPreferencesGroup* group);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_preferences_page_add;
  auto group_to_c = gi::unwrap (group, gi::transfer_none);
  call_wrap_v ((::AdwPreferencesPage*) (gobj_()), (::AdwPreferencesGroup*) (group_to_c));
}

// AdwBanner* /*none,nullable*/ adw_preferences_page_get_banner (AdwPreferencesPage* self /*none*/);
// ::AdwBanner* /*none,nullable*/ adw_preferences_page_get_banner (::AdwPreferencesPage* self /*none*/);
Adw::Banner base::PreferencesPageBase::get_banner () noexcept
{
  typedef ::AdwBanner* (*call_wrap_t) (::AdwPreferencesPage* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_preferences_page_get_banner;
  auto _temp_ret = call_wrap_v ((::AdwPreferencesPage*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// const char* /*none*/ adw_preferences_page_get_description (AdwPreferencesPage* self /*none*/);
// const char* /*none*/ adw_preferences_page_get_description (::AdwPreferencesPage* self /*none*/);
gi::cstring_v base::PreferencesPageBase::get_description () noexcept
{
  typedef const char* (*call_wrap_t) (::AdwPreferencesPage* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_preferences_page_get_description;
  auto _temp_ret = call_wrap_v ((::AdwPreferencesPage*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// gboolean adw_preferences_page_get_description_centered (AdwPreferencesPage* self /*none*/);
// gboolean adw_preferences_page_get_description_centered (::AdwPreferencesPage* self /*none*/);
bool base::PreferencesPageBase::get_description_centered () noexcept
{
  typedef gboolean (*call_wrap_t) (::AdwPreferencesPage* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_preferences_page_get_description_centered;
  auto _temp_ret = call_wrap_v ((::AdwPreferencesPage*) (gobj_()));
  return _temp_ret;
}

// AdwPreferencesGroup* /*none,nullable*/ adw_preferences_page_get_group (AdwPreferencesPage* self /*none*/, guint index);
// ::AdwPreferencesGroup* /*none,nullable*/ adw_preferences_page_get_group (::AdwPreferencesPage* self /*none*/, guint index);
Adw::PreferencesGroup base::PreferencesPageBase::get_group (guint index) noexcept
{
  typedef ::AdwPreferencesGroup* (*call_wrap_t) (::AdwPreferencesPage* self, guint index);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_preferences_page_get_group;
  auto index_to_c = index;
  auto _temp_ret = call_wrap_v ((::AdwPreferencesPage*) (gobj_()), (guint) (index_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// const char* /*none,nullable*/ adw_preferences_page_get_icon_name (AdwPreferencesPage* self /*none*/);
// const char* /*none,nullable*/ adw_preferences_page_get_icon_name (::AdwPreferencesPage* self /*none*/);
gi::cstring_v base::PreferencesPageBase::get_icon_name () noexcept
{
  typedef const char* (*call_wrap_t) (::AdwPreferencesPage* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_preferences_page_get_icon_name;
  auto _temp_ret = call_wrap_v ((::AdwPreferencesPage*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// const char* /*none,nullable*/ adw_preferences_page_get_name (AdwPreferencesPage* self /*none*/);
// const char* /*none,nullable*/ adw_preferences_page_get_name (::AdwPreferencesPage* self /*none*/);
gi::cstring_v base::PreferencesPageBase::get_name () noexcept
{
  typedef const char* (*call_wrap_t) (::AdwPreferencesPage* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_preferences_page_get_name;
  auto _temp_ret = call_wrap_v ((::AdwPreferencesPage*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// const char* /*none*/ adw_preferences_page_get_title (AdwPreferencesPage* self /*none*/);
// const char* /*none*/ adw_preferences_page_get_title (::AdwPreferencesPage* self /*none*/);
gi::cstring_v base::PreferencesPageBase::get_title () noexcept
{
  typedef const char* (*call_wrap_t) (::AdwPreferencesPage* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_preferences_page_get_title;
  auto _temp_ret = call_wrap_v ((::AdwPreferencesPage*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// gboolean adw_preferences_page_get_use_underline (AdwPreferencesPage* self /*none*/);
// gboolean adw_preferences_page_get_use_underline (::AdwPreferencesPage* self /*none*/);
bool base::PreferencesPageBase::get_use_underline () noexcept
{
  typedef gboolean (*call_wrap_t) (::AdwPreferencesPage* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_preferences_page_get_use_underline;
  auto _temp_ret = call_wrap_v ((::AdwPreferencesPage*) (gobj_()));
  return _temp_ret;
}

// void adw_preferences_page_insert (AdwPreferencesPage* self /*none*/, AdwPreferencesGroup* group /*none*/, int index);
// void adw_preferences_page_insert (::AdwPreferencesPage* self /*none*/, ::AdwPreferencesGroup* group /*none*/, gint index);
void base::PreferencesPageBase::insert (Adw::PreferencesGroup group, gint index) noexcept
{
  typedef void (*call_wrap_t) (::AdwPreferencesPage* self, ::AdwPreferencesGroup* group, gint index);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_preferences_page_insert;
  auto index_to_c = index;
  auto group_to_c = gi::unwrap (group, gi::transfer_none);
  call_wrap_v ((::AdwPreferencesPage*) (gobj_()), (::AdwPreferencesGroup*) (group_to_c), (gint) (index_to_c));
}

// void adw_preferences_page_remove (AdwPreferencesPage* self /*none*/, AdwPreferencesGroup* group /*none*/);
// void adw_preferences_page_remove (::AdwPreferencesPage* self /*none*/, ::AdwPreferencesGroup* group /*none*/);
void base::PreferencesPageBase::remove (Adw::PreferencesGroup group) noexcept
{
  typedef void (*call_wrap_t) (::AdwPreferencesPage* self, ::AdwPreferencesGroup* group);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_preferences_page_remove;
  auto group_to_c = gi::unwrap (group, gi::transfer_none);
  call_wrap_v ((::AdwPreferencesPage*) (gobj_()), (::AdwPreferencesGroup*) (group_to_c));
}

// void adw_preferences_page_scroll_to_top (AdwPreferencesPage* self /*none*/);
// void adw_preferences_page_scroll_to_top (::AdwPreferencesPage* self /*none*/);
void base::PreferencesPageBase::scroll_to_top () noexcept
{
  typedef void (*call_wrap_t) (::AdwPreferencesPage* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_preferences_page_scroll_to_top;
  call_wrap_v ((::AdwPreferencesPage*) (gobj_()));
}

// void adw_preferences_page_set_banner (AdwPreferencesPage* self /*none*/, AdwBanner* banner /*none,nullable*/);
// void adw_preferences_page_set_banner (::AdwPreferencesPage* self /*none*/, ::AdwBanner* banner /*none,nullable*/);
void base::PreferencesPageBase::set_banner (Adw::Banner banner) noexcept
{
  typedef void (*call_wrap_t) (::AdwPreferencesPage* self, ::AdwBanner* banner);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_preferences_page_set_banner;
  auto banner_to_c = gi::unwrap (banner, gi::transfer_none);
  call_wrap_v ((::AdwPreferencesPage*) (gobj_()), (::AdwBanner*) (banner_to_c));
}
void base::PreferencesPageBase::set_banner () noexcept
{
  typedef void (*call_wrap_t) (::AdwPreferencesPage* self, ::AdwBanner* banner);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_preferences_page_set_banner;
  auto banner_to_c = nullptr;
  call_wrap_v ((::AdwPreferencesPage*) (gobj_()), (::AdwBanner*) (banner_to_c));
}

// void adw_preferences_page_set_description (AdwPreferencesPage* self /*none*/, const char* description /*none*/);
// void adw_preferences_page_set_description (::AdwPreferencesPage* self /*none*/, const char* description /*none*/);
void base::PreferencesPageBase::set_description (const gi::cstring_v description) noexcept
{
  typedef void (*call_wrap_t) (::AdwPreferencesPage* self, const char* description);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_preferences_page_set_description;
  auto description_to_c = gi::unwrap (description, gi::transfer_none);
  call_wrap_v ((::AdwPreferencesPage*) (gobj_()), (const char*) (description_to_c));
}

// void adw_preferences_page_set_description_centered (AdwPreferencesPage* self /*none*/, gboolean centered);
// void adw_preferences_page_set_description_centered (::AdwPreferencesPage* self /*none*/, gboolean centered);
void base::PreferencesPageBase::set_description_centered (gboolean centered) noexcept
{
  typedef void (*call_wrap_t) (::AdwPreferencesPage* self, gboolean centered);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_preferences_page_set_description_centered;
  auto centered_to_c = centered;
  call_wrap_v ((::AdwPreferencesPage*) (gobj_()), (gboolean) (centered_to_c));
}

// void adw_preferences_page_set_icon_name (AdwPreferencesPage* self /*none*/, const char* icon_name /*none,nullable*/);
// void adw_preferences_page_set_icon_name (::AdwPreferencesPage* self /*none*/, const char* icon_name /*none,nullable*/);
void base::PreferencesPageBase::set_icon_name (const gi::cstring_v icon_name) noexcept
{
  typedef void (*call_wrap_t) (::AdwPreferencesPage* self, const char* icon_name);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_preferences_page_set_icon_name;
  auto icon_name_to_c = gi::unwrap (icon_name, gi::transfer_none);
  call_wrap_v ((::AdwPreferencesPage*) (gobj_()), (const char*) (icon_name_to_c));
}
void base::PreferencesPageBase::set_icon_name () noexcept
{
  typedef void (*call_wrap_t) (::AdwPreferencesPage* self, const char* icon_name);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_preferences_page_set_icon_name;
  auto icon_name_to_c = nullptr;
  call_wrap_v ((::AdwPreferencesPage*) (gobj_()), (const char*) (icon_name_to_c));
}

// void adw_preferences_page_set_name (AdwPreferencesPage* self /*none*/, const char* name /*none,nullable*/);
// void adw_preferences_page_set_name (::AdwPreferencesPage* self /*none*/, const char* name /*none,nullable*/);
void base::PreferencesPageBase::set_name (const gi::cstring_v name) noexcept
{
  typedef void (*call_wrap_t) (::AdwPreferencesPage* self, const char* name);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_preferences_page_set_name;
  auto name_to_c = gi::unwrap (name, gi::transfer_none);
  call_wrap_v ((::AdwPreferencesPage*) (gobj_()), (const char*) (name_to_c));
}
void base::PreferencesPageBase::set_name () noexcept
{
  typedef void (*call_wrap_t) (::AdwPreferencesPage* self, const char* name);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_preferences_page_set_name;
  auto name_to_c = nullptr;
  call_wrap_v ((::AdwPreferencesPage*) (gobj_()), (const char*) (name_to_c));
}

// void adw_preferences_page_set_title (AdwPreferencesPage* self /*none*/, const char* title /*none*/);
// void adw_preferences_page_set_title (::AdwPreferencesPage* self /*none*/, const char* title /*none*/);
void base::PreferencesPageBase::set_title (const gi::cstring_v title) noexcept
{
  typedef void (*call_wrap_t) (::AdwPreferencesPage* self, const char* title);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_preferences_page_set_title;
  auto title_to_c = gi::unwrap (title, gi::transfer_none);
  call_wrap_v ((::AdwPreferencesPage*) (gobj_()), (const char*) (title_to_c));
}

// void adw_preferences_page_set_use_underline (AdwPreferencesPage* self /*none*/, gboolean use_underline);
// void adw_preferences_page_set_use_underline (::AdwPreferencesPage* self /*none*/, gboolean use_underline);
void base::PreferencesPageBase::set_use_underline (gboolean use_underline) noexcept
{
  typedef void (*call_wrap_t) (::AdwPreferencesPage* self, gboolean use_underline);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_preferences_page_set_use_underline;
  auto use_underline_to_c = use_underline;
  call_wrap_v ((::AdwPreferencesPage*) (gobj_()), (gboolean) (use_underline_to_c));
}


} // namespace base

} // namespace Adw

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<adw/preferencespage_extra_def_impl.hpp>)
#include <adw/preferencespage_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<adw/preferencespage_extra_impl.hpp>)
#include <adw/preferencespage_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Adw {

namespace impl {

namespace internal {

void PreferencesPageClassDef::class_init (gpointer class_struct, gpointer factory)
{
  ::AdwPreferencesPageClass *methods = (::AdwPreferencesPageClass *) class_struct;
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
