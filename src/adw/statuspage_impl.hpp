// AUTO-GENERATED

#ifndef _GI_ADW_STATUSPAGE_IMPL_HPP_
#define _GI_ADW_STATUSPAGE_IMPL_HPP_

namespace gi {

namespace repository {

namespace Adw {

namespace base {

// GtkWidget* /*none*/ adw_status_page_new ();
// ::AdwStatusPage* /*none*/ adw_status_page_new ();
Adw::StatusPage base::StatusPageBase::new_ () noexcept
{
  typedef ::AdwStatusPage* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) adw_status_page_new;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// GtkWidget* /*none,nullable*/ adw_status_page_get_child (AdwStatusPage* self /*none*/);
// ::GtkWidget* /*none,nullable*/ adw_status_page_get_child (::AdwStatusPage* self /*none*/);
Gtk::Widget base::StatusPageBase::get_child () noexcept
{
  typedef ::GtkWidget* (*call_wrap_t) (::AdwStatusPage* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_status_page_get_child;
  auto _temp_ret = call_wrap_v ((::AdwStatusPage*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// const char* /*none,nullable*/ adw_status_page_get_description (AdwStatusPage* self /*none*/);
// const char* /*none,nullable*/ adw_status_page_get_description (::AdwStatusPage* self /*none*/);
gi::cstring_v base::StatusPageBase::get_description () noexcept
{
  typedef const char* (*call_wrap_t) (::AdwStatusPage* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_status_page_get_description;
  auto _temp_ret = call_wrap_v ((::AdwStatusPage*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// const char* /*none,nullable*/ adw_status_page_get_icon_name (AdwStatusPage* self /*none*/);
// const char* /*none,nullable*/ adw_status_page_get_icon_name (::AdwStatusPage* self /*none*/);
gi::cstring_v base::StatusPageBase::get_icon_name () noexcept
{
  typedef const char* (*call_wrap_t) (::AdwStatusPage* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_status_page_get_icon_name;
  auto _temp_ret = call_wrap_v ((::AdwStatusPage*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// GdkPaintable* /*none,nullable*/ adw_status_page_get_paintable (AdwStatusPage* self /*none*/);
// ::GdkPaintable* /*none,nullable*/ adw_status_page_get_paintable (::AdwStatusPage* self /*none*/);
Gdk::Paintable base::StatusPageBase::get_paintable () noexcept
{
  typedef ::GdkPaintable* (*call_wrap_t) (::AdwStatusPage* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_status_page_get_paintable;
  auto _temp_ret = call_wrap_v ((::AdwStatusPage*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// const char* /*none*/ adw_status_page_get_title (AdwStatusPage* self /*none*/);
// const char* /*none*/ adw_status_page_get_title (::AdwStatusPage* self /*none*/);
gi::cstring_v base::StatusPageBase::get_title () noexcept
{
  typedef const char* (*call_wrap_t) (::AdwStatusPage* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_status_page_get_title;
  auto _temp_ret = call_wrap_v ((::AdwStatusPage*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// void adw_status_page_set_child (AdwStatusPage* self /*none*/, GtkWidget* child /*none,nullable*/);
// void adw_status_page_set_child (::AdwStatusPage* self /*none*/, ::GtkWidget* child /*none,nullable*/);
void base::StatusPageBase::set_child (Gtk::Widget child) noexcept
{
  typedef void (*call_wrap_t) (::AdwStatusPage* self, ::GtkWidget* child);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_status_page_set_child;
  auto child_to_c = gi::unwrap (child, gi::transfer_none);
  call_wrap_v ((::AdwStatusPage*) (gobj_()), (::GtkWidget*) (child_to_c));
}
void base::StatusPageBase::set_child () noexcept
{
  typedef void (*call_wrap_t) (::AdwStatusPage* self, ::GtkWidget* child);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_status_page_set_child;
  auto child_to_c = nullptr;
  call_wrap_v ((::AdwStatusPage*) (gobj_()), (::GtkWidget*) (child_to_c));
}

// void adw_status_page_set_description (AdwStatusPage* self /*none*/, const char* description /*none,nullable*/);
// void adw_status_page_set_description (::AdwStatusPage* self /*none*/, const char* description /*none,nullable*/);
void base::StatusPageBase::set_description (const gi::cstring_v description) noexcept
{
  typedef void (*call_wrap_t) (::AdwStatusPage* self, const char* description);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_status_page_set_description;
  auto description_to_c = gi::unwrap (description, gi::transfer_none);
  call_wrap_v ((::AdwStatusPage*) (gobj_()), (const char*) (description_to_c));
}
void base::StatusPageBase::set_description () noexcept
{
  typedef void (*call_wrap_t) (::AdwStatusPage* self, const char* description);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_status_page_set_description;
  auto description_to_c = nullptr;
  call_wrap_v ((::AdwStatusPage*) (gobj_()), (const char*) (description_to_c));
}

// void adw_status_page_set_icon_name (AdwStatusPage* self /*none*/, const char* icon_name /*none,nullable*/);
// void adw_status_page_set_icon_name (::AdwStatusPage* self /*none*/, const char* icon_name /*none,nullable*/);
void base::StatusPageBase::set_icon_name (const gi::cstring_v icon_name) noexcept
{
  typedef void (*call_wrap_t) (::AdwStatusPage* self, const char* icon_name);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_status_page_set_icon_name;
  auto icon_name_to_c = gi::unwrap (icon_name, gi::transfer_none);
  call_wrap_v ((::AdwStatusPage*) (gobj_()), (const char*) (icon_name_to_c));
}
void base::StatusPageBase::set_icon_name () noexcept
{
  typedef void (*call_wrap_t) (::AdwStatusPage* self, const char* icon_name);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_status_page_set_icon_name;
  auto icon_name_to_c = nullptr;
  call_wrap_v ((::AdwStatusPage*) (gobj_()), (const char*) (icon_name_to_c));
}

// void adw_status_page_set_paintable (AdwStatusPage* self /*none*/, GdkPaintable* paintable /*none,nullable*/);
// void adw_status_page_set_paintable (::AdwStatusPage* self /*none*/, ::GdkPaintable* paintable /*none,nullable*/);
void base::StatusPageBase::set_paintable (Gdk::Paintable paintable) noexcept
{
  typedef void (*call_wrap_t) (::AdwStatusPage* self, ::GdkPaintable* paintable);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_status_page_set_paintable;
  auto paintable_to_c = gi::unwrap (paintable, gi::transfer_none);
  call_wrap_v ((::AdwStatusPage*) (gobj_()), (::GdkPaintable*) (paintable_to_c));
}
void base::StatusPageBase::set_paintable () noexcept
{
  typedef void (*call_wrap_t) (::AdwStatusPage* self, ::GdkPaintable* paintable);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_status_page_set_paintable;
  auto paintable_to_c = nullptr;
  call_wrap_v ((::AdwStatusPage*) (gobj_()), (::GdkPaintable*) (paintable_to_c));
}

// void adw_status_page_set_title (AdwStatusPage* self /*none*/, const char* title /*none*/);
// void adw_status_page_set_title (::AdwStatusPage* self /*none*/, const char* title /*none*/);
void base::StatusPageBase::set_title (const gi::cstring_v title) noexcept
{
  typedef void (*call_wrap_t) (::AdwStatusPage* self, const char* title);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_status_page_set_title;
  auto title_to_c = gi::unwrap (title, gi::transfer_none);
  call_wrap_v ((::AdwStatusPage*) (gobj_()), (const char*) (title_to_c));
}


} // namespace base

} // namespace Adw

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<adw/statuspage_extra_def_impl.hpp>)
#include <adw/statuspage_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<adw/statuspage_extra_impl.hpp>)
#include <adw/statuspage_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Adw {

namespace impl {

namespace internal {

void StatusPageClassDef::class_init (gpointer class_struct, gpointer factory)
{
  ::AdwStatusPageClass *methods = (::AdwStatusPageClass *) class_struct;
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
