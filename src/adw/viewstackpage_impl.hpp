// AUTO-GENERATED

#ifndef _GI_ADW_VIEWSTACKPAGE_IMPL_HPP_
#define _GI_ADW_VIEWSTACKPAGE_IMPL_HPP_

namespace gi {

namespace repository {

namespace Adw {

namespace base {

Gtk::Accessible ViewStackPageBase::interface_ (gi::interface_tag<Gtk::Accessible>)
{ return gi::wrap ((Gtk::Accessible::BaseObjectType*) gobj_copy_(), gi::transfer_full); }

ViewStackPageBase::operator Gtk::Accessible ()
{ return interface_ (gi::interface_tag<Gtk::Accessible>()); }

// guint adw_view_stack_page_get_badge_number (AdwViewStackPage* self /*none*/);
// guint adw_view_stack_page_get_badge_number (::AdwViewStackPage* self /*none*/);
guint base::ViewStackPageBase::get_badge_number () noexcept
{
  typedef guint (*call_wrap_t) (::AdwViewStackPage* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_view_stack_page_get_badge_number;
  auto _temp_ret = call_wrap_v ((::AdwViewStackPage*) (gobj_()));
  return _temp_ret;
}

// GtkWidget* /*none*/ adw_view_stack_page_get_child (AdwViewStackPage* self /*none*/);
// ::GtkWidget* /*none*/ adw_view_stack_page_get_child (::AdwViewStackPage* self /*none*/);
Gtk::Widget base::ViewStackPageBase::get_child () noexcept
{
  typedef ::GtkWidget* (*call_wrap_t) (::AdwViewStackPage* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_view_stack_page_get_child;
  auto _temp_ret = call_wrap_v ((::AdwViewStackPage*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// const char* /*none,nullable*/ adw_view_stack_page_get_icon_name (AdwViewStackPage* self /*none*/);
// const char* /*none,nullable*/ adw_view_stack_page_get_icon_name (::AdwViewStackPage* self /*none*/);
gi::cstring_v base::ViewStackPageBase::get_icon_name () noexcept
{
  typedef const char* (*call_wrap_t) (::AdwViewStackPage* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_view_stack_page_get_icon_name;
  auto _temp_ret = call_wrap_v ((::AdwViewStackPage*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// const char* /*none,nullable*/ adw_view_stack_page_get_name (AdwViewStackPage* self /*none*/);
// const char* /*none,nullable*/ adw_view_stack_page_get_name (::AdwViewStackPage* self /*none*/);
gi::cstring_v base::ViewStackPageBase::get_name () noexcept
{
  typedef const char* (*call_wrap_t) (::AdwViewStackPage* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_view_stack_page_get_name;
  auto _temp_ret = call_wrap_v ((::AdwViewStackPage*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// gboolean adw_view_stack_page_get_needs_attention (AdwViewStackPage* self /*none*/);
// gboolean adw_view_stack_page_get_needs_attention (::AdwViewStackPage* self /*none*/);
bool base::ViewStackPageBase::get_needs_attention () noexcept
{
  typedef gboolean (*call_wrap_t) (::AdwViewStackPage* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_view_stack_page_get_needs_attention;
  auto _temp_ret = call_wrap_v ((::AdwViewStackPage*) (gobj_()));
  return _temp_ret;
}

// const char* /*none,nullable*/ adw_view_stack_page_get_section_title (AdwViewStackPage* self /*none*/);
// const char* /*none,nullable*/ adw_view_stack_page_get_section_title (::AdwViewStackPage* self /*none*/);
gi::cstring_v base::ViewStackPageBase::get_section_title () noexcept
{
  typedef const char* (*call_wrap_t) (::AdwViewStackPage* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_view_stack_page_get_section_title;
  auto _temp_ret = call_wrap_v ((::AdwViewStackPage*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// gboolean adw_view_stack_page_get_starts_section (AdwViewStackPage* self /*none*/);
// gboolean adw_view_stack_page_get_starts_section (::AdwViewStackPage* self /*none*/);
bool base::ViewStackPageBase::get_starts_section () noexcept
{
  typedef gboolean (*call_wrap_t) (::AdwViewStackPage* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_view_stack_page_get_starts_section;
  auto _temp_ret = call_wrap_v ((::AdwViewStackPage*) (gobj_()));
  return _temp_ret;
}

// const char* /*none,nullable*/ adw_view_stack_page_get_title (AdwViewStackPage* self /*none*/);
// const char* /*none,nullable*/ adw_view_stack_page_get_title (::AdwViewStackPage* self /*none*/);
gi::cstring_v base::ViewStackPageBase::get_title () noexcept
{
  typedef const char* (*call_wrap_t) (::AdwViewStackPage* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_view_stack_page_get_title;
  auto _temp_ret = call_wrap_v ((::AdwViewStackPage*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// gboolean adw_view_stack_page_get_use_underline (AdwViewStackPage* self /*none*/);
// gboolean adw_view_stack_page_get_use_underline (::AdwViewStackPage* self /*none*/);
bool base::ViewStackPageBase::get_use_underline () noexcept
{
  typedef gboolean (*call_wrap_t) (::AdwViewStackPage* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_view_stack_page_get_use_underline;
  auto _temp_ret = call_wrap_v ((::AdwViewStackPage*) (gobj_()));
  return _temp_ret;
}

// gboolean adw_view_stack_page_get_visible (AdwViewStackPage* self /*none*/);
// gboolean adw_view_stack_page_get_visible (::AdwViewStackPage* self /*none*/);
bool base::ViewStackPageBase::get_visible () noexcept
{
  typedef gboolean (*call_wrap_t) (::AdwViewStackPage* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_view_stack_page_get_visible;
  auto _temp_ret = call_wrap_v ((::AdwViewStackPage*) (gobj_()));
  return _temp_ret;
}

// void adw_view_stack_page_set_badge_number (AdwViewStackPage* self /*none*/, guint badge_number);
// void adw_view_stack_page_set_badge_number (::AdwViewStackPage* self /*none*/, guint badge_number);
void base::ViewStackPageBase::set_badge_number (guint badge_number) noexcept
{
  typedef void (*call_wrap_t) (::AdwViewStackPage* self, guint badge_number);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_view_stack_page_set_badge_number;
  auto badge_number_to_c = badge_number;
  call_wrap_v ((::AdwViewStackPage*) (gobj_()), (guint) (badge_number_to_c));
}

// void adw_view_stack_page_set_icon_name (AdwViewStackPage* self /*none*/, const char* icon_name /*none,nullable*/);
// void adw_view_stack_page_set_icon_name (::AdwViewStackPage* self /*none*/, const char* icon_name /*none,nullable*/);
void base::ViewStackPageBase::set_icon_name (const gi::cstring_v icon_name) noexcept
{
  typedef void (*call_wrap_t) (::AdwViewStackPage* self, const char* icon_name);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_view_stack_page_set_icon_name;
  auto icon_name_to_c = gi::unwrap (icon_name, gi::transfer_none);
  call_wrap_v ((::AdwViewStackPage*) (gobj_()), (const char*) (icon_name_to_c));
}
void base::ViewStackPageBase::set_icon_name () noexcept
{
  typedef void (*call_wrap_t) (::AdwViewStackPage* self, const char* icon_name);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_view_stack_page_set_icon_name;
  auto icon_name_to_c = nullptr;
  call_wrap_v ((::AdwViewStackPage*) (gobj_()), (const char*) (icon_name_to_c));
}

// void adw_view_stack_page_set_name (AdwViewStackPage* self /*none*/, const char* name /*none,nullable*/);
// void adw_view_stack_page_set_name (::AdwViewStackPage* self /*none*/, const char* name /*none,nullable*/);
void base::ViewStackPageBase::set_name (const gi::cstring_v name) noexcept
{
  typedef void (*call_wrap_t) (::AdwViewStackPage* self, const char* name);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_view_stack_page_set_name;
  auto name_to_c = gi::unwrap (name, gi::transfer_none);
  call_wrap_v ((::AdwViewStackPage*) (gobj_()), (const char*) (name_to_c));
}
void base::ViewStackPageBase::set_name () noexcept
{
  typedef void (*call_wrap_t) (::AdwViewStackPage* self, const char* name);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_view_stack_page_set_name;
  auto name_to_c = nullptr;
  call_wrap_v ((::AdwViewStackPage*) (gobj_()), (const char*) (name_to_c));
}

// void adw_view_stack_page_set_needs_attention (AdwViewStackPage* self /*none*/, gboolean needs_attention);
// void adw_view_stack_page_set_needs_attention (::AdwViewStackPage* self /*none*/, gboolean needs_attention);
void base::ViewStackPageBase::set_needs_attention (gboolean needs_attention) noexcept
{
  typedef void (*call_wrap_t) (::AdwViewStackPage* self, gboolean needs_attention);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_view_stack_page_set_needs_attention;
  auto needs_attention_to_c = needs_attention;
  call_wrap_v ((::AdwViewStackPage*) (gobj_()), (gboolean) (needs_attention_to_c));
}

// void adw_view_stack_page_set_section_title (AdwViewStackPage* self /*none*/, const char* section_title /*none,nullable*/);
// void adw_view_stack_page_set_section_title (::AdwViewStackPage* self /*none*/, const char* section_title /*none,nullable*/);
void base::ViewStackPageBase::set_section_title (const gi::cstring_v section_title) noexcept
{
  typedef void (*call_wrap_t) (::AdwViewStackPage* self, const char* section_title);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_view_stack_page_set_section_title;
  auto section_title_to_c = gi::unwrap (section_title, gi::transfer_none);
  call_wrap_v ((::AdwViewStackPage*) (gobj_()), (const char*) (section_title_to_c));
}
void base::ViewStackPageBase::set_section_title () noexcept
{
  typedef void (*call_wrap_t) (::AdwViewStackPage* self, const char* section_title);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_view_stack_page_set_section_title;
  auto section_title_to_c = nullptr;
  call_wrap_v ((::AdwViewStackPage*) (gobj_()), (const char*) (section_title_to_c));
}

// void adw_view_stack_page_set_starts_section (AdwViewStackPage* self /*none*/, gboolean starts_section);
// void adw_view_stack_page_set_starts_section (::AdwViewStackPage* self /*none*/, gboolean starts_section);
void base::ViewStackPageBase::set_starts_section (gboolean starts_section) noexcept
{
  typedef void (*call_wrap_t) (::AdwViewStackPage* self, gboolean starts_section);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_view_stack_page_set_starts_section;
  auto starts_section_to_c = starts_section;
  call_wrap_v ((::AdwViewStackPage*) (gobj_()), (gboolean) (starts_section_to_c));
}

// void adw_view_stack_page_set_title (AdwViewStackPage* self /*none*/, const char* title /*none,nullable*/);
// void adw_view_stack_page_set_title (::AdwViewStackPage* self /*none*/, const char* title /*none,nullable*/);
void base::ViewStackPageBase::set_title (const gi::cstring_v title) noexcept
{
  typedef void (*call_wrap_t) (::AdwViewStackPage* self, const char* title);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_view_stack_page_set_title;
  auto title_to_c = gi::unwrap (title, gi::transfer_none);
  call_wrap_v ((::AdwViewStackPage*) (gobj_()), (const char*) (title_to_c));
}
void base::ViewStackPageBase::set_title () noexcept
{
  typedef void (*call_wrap_t) (::AdwViewStackPage* self, const char* title);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_view_stack_page_set_title;
  auto title_to_c = nullptr;
  call_wrap_v ((::AdwViewStackPage*) (gobj_()), (const char*) (title_to_c));
}

// void adw_view_stack_page_set_use_underline (AdwViewStackPage* self /*none*/, gboolean use_underline);
// void adw_view_stack_page_set_use_underline (::AdwViewStackPage* self /*none*/, gboolean use_underline);
void base::ViewStackPageBase::set_use_underline (gboolean use_underline) noexcept
{
  typedef void (*call_wrap_t) (::AdwViewStackPage* self, gboolean use_underline);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_view_stack_page_set_use_underline;
  auto use_underline_to_c = use_underline;
  call_wrap_v ((::AdwViewStackPage*) (gobj_()), (gboolean) (use_underline_to_c));
}

// void adw_view_stack_page_set_visible (AdwViewStackPage* self /*none*/, gboolean visible);
// void adw_view_stack_page_set_visible (::AdwViewStackPage* self /*none*/, gboolean visible);
void base::ViewStackPageBase::set_visible (gboolean visible) noexcept
{
  typedef void (*call_wrap_t) (::AdwViewStackPage* self, gboolean visible);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_view_stack_page_set_visible;
  auto visible_to_c = visible;
  call_wrap_v ((::AdwViewStackPage*) (gobj_()), (gboolean) (visible_to_c));
}


} // namespace base

} // namespace Adw

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<adw/viewstackpage_extra_def_impl.hpp>)
#include <adw/viewstackpage_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<adw/viewstackpage_extra_impl.hpp>)
#include <adw/viewstackpage_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Adw {

namespace impl {

namespace internal {

void ViewStackPageClassDef::class_init (gpointer class_struct, gpointer factory)
{
  ::AdwViewStackPageClass *methods = (::AdwViewStackPageClass *) class_struct;
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
