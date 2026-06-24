// AUTO-GENERATED

#ifndef _GI_ADW_AVATAR_IMPL_HPP_
#define _GI_ADW_AVATAR_IMPL_HPP_

namespace gi {

namespace repository {

namespace Adw {

namespace base {

// GtkWidget* /*none*/ adw_avatar_new (int size, const char* text /*none,nullable*/, gboolean show_initials);
// ::AdwAvatar* /*none*/ adw_avatar_new (gint size, const char* text /*none,nullable*/, gboolean show_initials);
Adw::Avatar base::AvatarBase::new_ (gint size, const gi::cstring_v text, gboolean show_initials) noexcept
{
  typedef ::AdwAvatar* (*call_wrap_t) (gint size, const char* text, gboolean show_initials);
  call_wrap_t call_wrap_v = (call_wrap_t) adw_avatar_new;
  auto show_initials_to_c = show_initials;
  auto text_to_c = gi::unwrap (text, gi::transfer_none);
  auto size_to_c = size;
  auto _temp_ret = call_wrap_v ((gint) (size_to_c), (const char*) (text_to_c), (gboolean) (show_initials_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none);
}
Adw::Avatar base::AvatarBase::new_ (gint size, gboolean show_initials) noexcept
{
  typedef ::AdwAvatar* (*call_wrap_t) (gint size, const char* text, gboolean show_initials);
  call_wrap_t call_wrap_v = (call_wrap_t) adw_avatar_new;
  auto show_initials_to_c = show_initials;
  auto text_to_c = nullptr;
  auto size_to_c = size;
  auto _temp_ret = call_wrap_v ((gint) (size_to_c), (const char*) (text_to_c), (gboolean) (show_initials_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// GdkTexture* /*full*/ adw_avatar_draw_to_texture (AdwAvatar* self /*none*/, int scale_factor);
// ::GdkTexture* /*full*/ adw_avatar_draw_to_texture (::AdwAvatar* self /*none*/, gint scale_factor);
Gdk::Texture base::AvatarBase::draw_to_texture (gint scale_factor) noexcept
{
  typedef ::GdkTexture* (*call_wrap_t) (::AdwAvatar* self, gint scale_factor);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_avatar_draw_to_texture;
  auto scale_factor_to_c = scale_factor;
  auto _temp_ret = call_wrap_v ((::AdwAvatar*) (gobj_()), (gint) (scale_factor_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// GdkPaintable* /*none,nullable*/ adw_avatar_get_custom_image (AdwAvatar* self /*none*/);
// ::GdkPaintable* /*none,nullable*/ adw_avatar_get_custom_image (::AdwAvatar* self /*none*/);
Gdk::Paintable base::AvatarBase::get_custom_image () noexcept
{
  typedef ::GdkPaintable* (*call_wrap_t) (::AdwAvatar* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_avatar_get_custom_image;
  auto _temp_ret = call_wrap_v ((::AdwAvatar*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// const char* /*none,nullable*/ adw_avatar_get_icon_name (AdwAvatar* self /*none*/);
// const char* /*none,nullable*/ adw_avatar_get_icon_name (::AdwAvatar* self /*none*/);
gi::cstring_v base::AvatarBase::get_icon_name () noexcept
{
  typedef const char* (*call_wrap_t) (::AdwAvatar* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_avatar_get_icon_name;
  auto _temp_ret = call_wrap_v ((::AdwAvatar*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// gboolean adw_avatar_get_show_initials (AdwAvatar* self /*none*/);
// gboolean adw_avatar_get_show_initials (::AdwAvatar* self /*none*/);
bool base::AvatarBase::get_show_initials () noexcept
{
  typedef gboolean (*call_wrap_t) (::AdwAvatar* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_avatar_get_show_initials;
  auto _temp_ret = call_wrap_v ((::AdwAvatar*) (gobj_()));
  return _temp_ret;
}

// int adw_avatar_get_size (AdwAvatar* self /*none*/);
// gint adw_avatar_get_size (::AdwAvatar* self /*none*/);
gint base::AvatarBase::get_size () noexcept
{
  typedef gint (*call_wrap_t) (::AdwAvatar* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_avatar_get_size;
  auto _temp_ret = call_wrap_v ((::AdwAvatar*) (gobj_()));
  return _temp_ret;
}

// const char* /*none,nullable*/ adw_avatar_get_text (AdwAvatar* self /*none*/);
// const char* /*none,nullable*/ adw_avatar_get_text (::AdwAvatar* self /*none*/);
gi::cstring_v base::AvatarBase::get_text () noexcept
{
  typedef const char* (*call_wrap_t) (::AdwAvatar* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_avatar_get_text;
  auto _temp_ret = call_wrap_v ((::AdwAvatar*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// void adw_avatar_set_custom_image (AdwAvatar* self /*none*/, GdkPaintable* custom_image /*none,nullable*/);
// void adw_avatar_set_custom_image (::AdwAvatar* self /*none*/, ::GdkPaintable* custom_image /*none,nullable*/);
void base::AvatarBase::set_custom_image (Gdk::Paintable custom_image) noexcept
{
  typedef void (*call_wrap_t) (::AdwAvatar* self, ::GdkPaintable* custom_image);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_avatar_set_custom_image;
  auto custom_image_to_c = gi::unwrap (custom_image, gi::transfer_none);
  call_wrap_v ((::AdwAvatar*) (gobj_()), (::GdkPaintable*) (custom_image_to_c));
}
void base::AvatarBase::set_custom_image () noexcept
{
  typedef void (*call_wrap_t) (::AdwAvatar* self, ::GdkPaintable* custom_image);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_avatar_set_custom_image;
  auto custom_image_to_c = nullptr;
  call_wrap_v ((::AdwAvatar*) (gobj_()), (::GdkPaintable*) (custom_image_to_c));
}

// void adw_avatar_set_icon_name (AdwAvatar* self /*none*/, const char* icon_name /*none,nullable*/);
// void adw_avatar_set_icon_name (::AdwAvatar* self /*none*/, const char* icon_name /*none,nullable*/);
void base::AvatarBase::set_icon_name (const gi::cstring_v icon_name) noexcept
{
  typedef void (*call_wrap_t) (::AdwAvatar* self, const char* icon_name);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_avatar_set_icon_name;
  auto icon_name_to_c = gi::unwrap (icon_name, gi::transfer_none);
  call_wrap_v ((::AdwAvatar*) (gobj_()), (const char*) (icon_name_to_c));
}
void base::AvatarBase::set_icon_name () noexcept
{
  typedef void (*call_wrap_t) (::AdwAvatar* self, const char* icon_name);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_avatar_set_icon_name;
  auto icon_name_to_c = nullptr;
  call_wrap_v ((::AdwAvatar*) (gobj_()), (const char*) (icon_name_to_c));
}

// void adw_avatar_set_show_initials (AdwAvatar* self /*none*/, gboolean show_initials);
// void adw_avatar_set_show_initials (::AdwAvatar* self /*none*/, gboolean show_initials);
void base::AvatarBase::set_show_initials (gboolean show_initials) noexcept
{
  typedef void (*call_wrap_t) (::AdwAvatar* self, gboolean show_initials);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_avatar_set_show_initials;
  auto show_initials_to_c = show_initials;
  call_wrap_v ((::AdwAvatar*) (gobj_()), (gboolean) (show_initials_to_c));
}

// void adw_avatar_set_size (AdwAvatar* self /*none*/, int size);
// void adw_avatar_set_size (::AdwAvatar* self /*none*/, gint size);
void base::AvatarBase::set_size (gint size) noexcept
{
  typedef void (*call_wrap_t) (::AdwAvatar* self, gint size);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_avatar_set_size;
  auto size_to_c = size;
  call_wrap_v ((::AdwAvatar*) (gobj_()), (gint) (size_to_c));
}

// void adw_avatar_set_text (AdwAvatar* self /*none*/, const char* text /*none,nullable*/);
// void adw_avatar_set_text (::AdwAvatar* self /*none*/, const char* text /*none,nullable*/);
void base::AvatarBase::set_text (const gi::cstring_v text) noexcept
{
  typedef void (*call_wrap_t) (::AdwAvatar* self, const char* text);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_avatar_set_text;
  auto text_to_c = gi::unwrap (text, gi::transfer_none);
  call_wrap_v ((::AdwAvatar*) (gobj_()), (const char*) (text_to_c));
}
void base::AvatarBase::set_text () noexcept
{
  typedef void (*call_wrap_t) (::AdwAvatar* self, const char* text);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_avatar_set_text;
  auto text_to_c = nullptr;
  call_wrap_v ((::AdwAvatar*) (gobj_()), (const char*) (text_to_c));
}


} // namespace base

} // namespace Adw

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<adw/avatar_extra_def_impl.hpp>)
#include <adw/avatar_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<adw/avatar_extra_impl.hpp>)
#include <adw/avatar_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Adw {

namespace impl {

namespace internal {

void AvatarClassDef::class_init (gpointer class_struct, gpointer factory)
{
  ::AdwAvatarClass *methods = (::AdwAvatarClass *) class_struct;
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
