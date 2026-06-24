// AUTO-GENERATED

#ifndef _GI_ADW_WINDOWTITLE_IMPL_HPP_
#define _GI_ADW_WINDOWTITLE_IMPL_HPP_

namespace gi {

namespace repository {

namespace Adw {

namespace base {

// GtkWidget* /*none*/ adw_window_title_new (const char* title /*none*/, const char* subtitle /*none*/);
// ::AdwWindowTitle* /*none*/ adw_window_title_new (const char* title /*none*/, const char* subtitle /*none*/);
Adw::WindowTitle base::WindowTitleBase::new_ (const gi::cstring_v title, const gi::cstring_v subtitle) noexcept
{
  typedef ::AdwWindowTitle* (*call_wrap_t) (const char* title, const char* subtitle);
  call_wrap_t call_wrap_v = (call_wrap_t) adw_window_title_new;
  auto subtitle_to_c = gi::unwrap (subtitle, gi::transfer_none);
  auto title_to_c = gi::unwrap (title, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const char*) (title_to_c), (const char*) (subtitle_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// const char* /*none*/ adw_window_title_get_subtitle (AdwWindowTitle* self /*none*/);
// const char* /*none*/ adw_window_title_get_subtitle (::AdwWindowTitle* self /*none*/);
gi::cstring_v base::WindowTitleBase::get_subtitle () noexcept
{
  typedef const char* (*call_wrap_t) (::AdwWindowTitle* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_window_title_get_subtitle;
  auto _temp_ret = call_wrap_v ((::AdwWindowTitle*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// const char* /*none*/ adw_window_title_get_title (AdwWindowTitle* self /*none*/);
// const char* /*none*/ adw_window_title_get_title (::AdwWindowTitle* self /*none*/);
gi::cstring_v base::WindowTitleBase::get_title () noexcept
{
  typedef const char* (*call_wrap_t) (::AdwWindowTitle* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_window_title_get_title;
  auto _temp_ret = call_wrap_v ((::AdwWindowTitle*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// void adw_window_title_set_subtitle (AdwWindowTitle* self /*none*/, const char* subtitle /*none*/);
// void adw_window_title_set_subtitle (::AdwWindowTitle* self /*none*/, const char* subtitle /*none*/);
void base::WindowTitleBase::set_subtitle (const gi::cstring_v subtitle) noexcept
{
  typedef void (*call_wrap_t) (::AdwWindowTitle* self, const char* subtitle);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_window_title_set_subtitle;
  auto subtitle_to_c = gi::unwrap (subtitle, gi::transfer_none);
  call_wrap_v ((::AdwWindowTitle*) (gobj_()), (const char*) (subtitle_to_c));
}

// void adw_window_title_set_title (AdwWindowTitle* self /*none*/, const char* title /*none*/);
// void adw_window_title_set_title (::AdwWindowTitle* self /*none*/, const char* title /*none*/);
void base::WindowTitleBase::set_title (const gi::cstring_v title) noexcept
{
  typedef void (*call_wrap_t) (::AdwWindowTitle* self, const char* title);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_window_title_set_title;
  auto title_to_c = gi::unwrap (title, gi::transfer_none);
  call_wrap_v ((::AdwWindowTitle*) (gobj_()), (const char*) (title_to_c));
}


} // namespace base

} // namespace Adw

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<adw/windowtitle_extra_def_impl.hpp>)
#include <adw/windowtitle_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<adw/windowtitle_extra_impl.hpp>)
#include <adw/windowtitle_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Adw {

namespace impl {

namespace internal {

void WindowTitleClassDef::class_init (gpointer class_struct, gpointer factory)
{
  ::AdwWindowTitleClass *methods = (::AdwWindowTitleClass *) class_struct;
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
