// AUTO-GENERATED

#ifndef _GI_ADW_BANNER_IMPL_HPP_
#define _GI_ADW_BANNER_IMPL_HPP_

namespace gi {

namespace repository {

namespace Adw {

namespace base {

Gtk::Actionable BannerBase::interface_ (gi::interface_tag<Gtk::Actionable>)
{ return gi::wrap ((Gtk::Actionable::BaseObjectType*) gobj_copy_(), gi::transfer_full); }

BannerBase::operator Gtk::Actionable ()
{ return interface_ (gi::interface_tag<Gtk::Actionable>()); }

// GtkWidget* /*none*/ adw_banner_new (const char* title /*none*/);
// ::AdwBanner* /*none*/ adw_banner_new (const char* title /*none*/);
Adw::Banner base::BannerBase::new_ (const gi::cstring_v title) noexcept
{
  typedef ::AdwBanner* (*call_wrap_t) (const char* title);
  call_wrap_t call_wrap_v = (call_wrap_t) adw_banner_new;
  auto title_to_c = gi::unwrap (title, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const char*) (title_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// const char* /*none,nullable*/ adw_banner_get_button_label (AdwBanner* self /*none*/);
// const char* /*none,nullable*/ adw_banner_get_button_label (::AdwBanner* self /*none*/);
gi::cstring_v base::BannerBase::get_button_label () noexcept
{
  typedef const char* (*call_wrap_t) (::AdwBanner* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_banner_get_button_label;
  auto _temp_ret = call_wrap_v ((::AdwBanner*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// AdwBannerButtonStyle adw_banner_get_button_style (AdwBanner* self /*none*/);
// ::AdwBannerButtonStyle adw_banner_get_button_style (::AdwBanner* self /*none*/);
Adw::BannerButtonStyle base::BannerBase::get_button_style () noexcept
{
  typedef ::AdwBannerButtonStyle (*call_wrap_t) (::AdwBanner* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_banner_get_button_style;
  auto _temp_ret = call_wrap_v ((::AdwBanner*) (gobj_()));
  return gi::wrap (_temp_ret);
}

// gboolean adw_banner_get_revealed (AdwBanner* self /*none*/);
// gboolean adw_banner_get_revealed (::AdwBanner* self /*none*/);
bool base::BannerBase::get_revealed () noexcept
{
  typedef gboolean (*call_wrap_t) (::AdwBanner* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_banner_get_revealed;
  auto _temp_ret = call_wrap_v ((::AdwBanner*) (gobj_()));
  return _temp_ret;
}

// const char* /*none*/ adw_banner_get_title (AdwBanner* self /*none*/);
// const char* /*none*/ adw_banner_get_title (::AdwBanner* self /*none*/);
gi::cstring_v base::BannerBase::get_title () noexcept
{
  typedef const char* (*call_wrap_t) (::AdwBanner* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_banner_get_title;
  auto _temp_ret = call_wrap_v ((::AdwBanner*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// gboolean adw_banner_get_use_markup (AdwBanner* self /*none*/);
// gboolean adw_banner_get_use_markup (::AdwBanner* self /*none*/);
bool base::BannerBase::get_use_markup () noexcept
{
  typedef gboolean (*call_wrap_t) (::AdwBanner* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_banner_get_use_markup;
  auto _temp_ret = call_wrap_v ((::AdwBanner*) (gobj_()));
  return _temp_ret;
}

// void adw_banner_set_button_label (AdwBanner* self /*none*/, const char* label /*none,nullable*/);
// void adw_banner_set_button_label (::AdwBanner* self /*none*/, const char* label /*none,nullable*/);
void base::BannerBase::set_button_label (const gi::cstring_v label) noexcept
{
  typedef void (*call_wrap_t) (::AdwBanner* self, const char* label);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_banner_set_button_label;
  auto label_to_c = gi::unwrap (label, gi::transfer_none);
  call_wrap_v ((::AdwBanner*) (gobj_()), (const char*) (label_to_c));
}
void base::BannerBase::set_button_label () noexcept
{
  typedef void (*call_wrap_t) (::AdwBanner* self, const char* label);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_banner_set_button_label;
  auto label_to_c = nullptr;
  call_wrap_v ((::AdwBanner*) (gobj_()), (const char*) (label_to_c));
}

// void adw_banner_set_button_style (AdwBanner* self /*none*/, AdwBannerButtonStyle style);
// void adw_banner_set_button_style (::AdwBanner* self /*none*/, ::AdwBannerButtonStyle style);
void base::BannerBase::set_button_style (Adw::BannerButtonStyle style) noexcept
{
  typedef void (*call_wrap_t) (::AdwBanner* self, ::AdwBannerButtonStyle style);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_banner_set_button_style;
  auto style_to_c = gi::unwrap (style);
  call_wrap_v ((::AdwBanner*) (gobj_()), (::AdwBannerButtonStyle) (style_to_c));
}

// void adw_banner_set_revealed (AdwBanner* self /*none*/, gboolean revealed);
// void adw_banner_set_revealed (::AdwBanner* self /*none*/, gboolean revealed);
void base::BannerBase::set_revealed (gboolean revealed) noexcept
{
  typedef void (*call_wrap_t) (::AdwBanner* self, gboolean revealed);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_banner_set_revealed;
  auto revealed_to_c = revealed;
  call_wrap_v ((::AdwBanner*) (gobj_()), (gboolean) (revealed_to_c));
}

// void adw_banner_set_title (AdwBanner* self /*none*/, const char* title /*none*/);
// void adw_banner_set_title (::AdwBanner* self /*none*/, const char* title /*none*/);
void base::BannerBase::set_title (const gi::cstring_v title) noexcept
{
  typedef void (*call_wrap_t) (::AdwBanner* self, const char* title);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_banner_set_title;
  auto title_to_c = gi::unwrap (title, gi::transfer_none);
  call_wrap_v ((::AdwBanner*) (gobj_()), (const char*) (title_to_c));
}

// void adw_banner_set_use_markup (AdwBanner* self /*none*/, gboolean use_markup);
// void adw_banner_set_use_markup (::AdwBanner* self /*none*/, gboolean use_markup);
void base::BannerBase::set_use_markup (gboolean use_markup) noexcept
{
  typedef void (*call_wrap_t) (::AdwBanner* self, gboolean use_markup);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_banner_set_use_markup;
  auto use_markup_to_c = use_markup;
  call_wrap_v ((::AdwBanner*) (gobj_()), (gboolean) (use_markup_to_c));
}



} // namespace base

} // namespace Adw

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<adw/banner_extra_def_impl.hpp>)
#include <adw/banner_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<adw/banner_extra_impl.hpp>)
#include <adw/banner_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Adw {

namespace impl {

namespace internal {

void BannerClassDef::class_init (gpointer class_struct, gpointer factory)
{
  ::AdwBannerClass *methods = (::AdwBannerClass *) class_struct;
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
