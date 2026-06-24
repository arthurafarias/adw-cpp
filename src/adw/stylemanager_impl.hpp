// AUTO-GENERATED

#ifndef _GI_ADW_STYLEMANAGER_IMPL_HPP_
#define _GI_ADW_STYLEMANAGER_IMPL_HPP_

namespace gi {

namespace repository {

namespace Adw {

namespace base {

// AdwStyleManager* /*none*/ adw_style_manager_get_default ();
// ::AdwStyleManager* /*none*/ adw_style_manager_get_default ();
Adw::StyleManager base::StyleManagerBase::get_default () noexcept
{
  typedef ::AdwStyleManager* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_style_manager_get_default;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// AdwStyleManager* /*none*/ adw_style_manager_get_for_display (GdkDisplay* display /*none*/);
// ::AdwStyleManager* /*none*/ adw_style_manager_get_for_display (::GdkDisplay* display /*none*/);
Adw::StyleManager base::StyleManagerBase::get_for_display (Gdk::Display display) noexcept
{
  typedef ::AdwStyleManager* (*call_wrap_t) (::GdkDisplay* display);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_style_manager_get_for_display;
  auto display_to_c = gi::unwrap (display, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GdkDisplay*) (display_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// AdwAccentColor adw_style_manager_get_accent_color (AdwStyleManager* self /*none*/);
// ::AdwAccentColor adw_style_manager_get_accent_color (::AdwStyleManager* self /*none*/);
Adw::AccentColor base::StyleManagerBase::get_accent_color () noexcept
{
  typedef ::AdwAccentColor (*call_wrap_t) (::AdwStyleManager* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_style_manager_get_accent_color;
  auto _temp_ret = call_wrap_v ((::AdwStyleManager*) (gobj_()));
  return gi::wrap (_temp_ret);
}

// GdkRGBA* /*full*/ adw_style_manager_get_accent_color_rgba (AdwStyleManager* self /*none*/);
// ::GdkRGBA* /*full*/ adw_style_manager_get_accent_color_rgba (::AdwStyleManager* self /*none*/);
Gdk::RGBA base::StyleManagerBase::get_accent_color_rgba () noexcept
{
  typedef ::GdkRGBA* (*call_wrap_t) (::AdwStyleManager* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_style_manager_get_accent_color_rgba;
  auto _temp_ret = call_wrap_v ((::AdwStyleManager*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// AdwColorScheme adw_style_manager_get_color_scheme (AdwStyleManager* self /*none*/);
// ::AdwColorScheme adw_style_manager_get_color_scheme (::AdwStyleManager* self /*none*/);
Adw::ColorScheme base::StyleManagerBase::get_color_scheme () noexcept
{
  typedef ::AdwColorScheme (*call_wrap_t) (::AdwStyleManager* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_style_manager_get_color_scheme;
  auto _temp_ret = call_wrap_v ((::AdwStyleManager*) (gobj_()));
  return gi::wrap (_temp_ret);
}

// gboolean adw_style_manager_get_dark (AdwStyleManager* self /*none*/);
// gboolean adw_style_manager_get_dark (::AdwStyleManager* self /*none*/);
bool base::StyleManagerBase::get_dark () noexcept
{
  typedef gboolean (*call_wrap_t) (::AdwStyleManager* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_style_manager_get_dark;
  auto _temp_ret = call_wrap_v ((::AdwStyleManager*) (gobj_()));
  return _temp_ret;
}

// GdkDisplay* /*none,nullable*/ adw_style_manager_get_display (AdwStyleManager* self /*none*/);
// ::GdkDisplay* /*none,nullable*/ adw_style_manager_get_display (::AdwStyleManager* self /*none*/);
Gdk::Display base::StyleManagerBase::get_display () noexcept
{
  typedef ::GdkDisplay* (*call_wrap_t) (::AdwStyleManager* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_style_manager_get_display;
  auto _temp_ret = call_wrap_v ((::AdwStyleManager*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// const char* /*none*/ adw_style_manager_get_document_font_name (AdwStyleManager* self /*none*/);
// const char* /*none*/ adw_style_manager_get_document_font_name (::AdwStyleManager* self /*none*/);
gi::cstring_v base::StyleManagerBase::get_document_font_name () noexcept
{
  typedef const char* (*call_wrap_t) (::AdwStyleManager* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_style_manager_get_document_font_name;
  auto _temp_ret = call_wrap_v ((::AdwStyleManager*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// gboolean adw_style_manager_get_high_contrast (AdwStyleManager* self /*none*/);
// gboolean adw_style_manager_get_high_contrast (::AdwStyleManager* self /*none*/);
bool base::StyleManagerBase::get_high_contrast () noexcept
{
  typedef gboolean (*call_wrap_t) (::AdwStyleManager* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_style_manager_get_high_contrast;
  auto _temp_ret = call_wrap_v ((::AdwStyleManager*) (gobj_()));
  return _temp_ret;
}

// const char* /*none*/ adw_style_manager_get_monospace_font_name (AdwStyleManager* self /*none*/);
// const char* /*none*/ adw_style_manager_get_monospace_font_name (::AdwStyleManager* self /*none*/);
gi::cstring_v base::StyleManagerBase::get_monospace_font_name () noexcept
{
  typedef const char* (*call_wrap_t) (::AdwStyleManager* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_style_manager_get_monospace_font_name;
  auto _temp_ret = call_wrap_v ((::AdwStyleManager*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// gboolean adw_style_manager_get_system_supports_accent_colors (AdwStyleManager* self /*none*/);
// gboolean adw_style_manager_get_system_supports_accent_colors (::AdwStyleManager* self /*none*/);
bool base::StyleManagerBase::get_system_supports_accent_colors () noexcept
{
  typedef gboolean (*call_wrap_t) (::AdwStyleManager* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_style_manager_get_system_supports_accent_colors;
  auto _temp_ret = call_wrap_v ((::AdwStyleManager*) (gobj_()));
  return _temp_ret;
}

// gboolean adw_style_manager_get_system_supports_color_schemes (AdwStyleManager* self /*none*/);
// gboolean adw_style_manager_get_system_supports_color_schemes (::AdwStyleManager* self /*none*/);
bool base::StyleManagerBase::get_system_supports_color_schemes () noexcept
{
  typedef gboolean (*call_wrap_t) (::AdwStyleManager* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_style_manager_get_system_supports_color_schemes;
  auto _temp_ret = call_wrap_v ((::AdwStyleManager*) (gobj_()));
  return _temp_ret;
}

// void adw_style_manager_set_color_scheme (AdwStyleManager* self /*none*/, AdwColorScheme color_scheme);
// void adw_style_manager_set_color_scheme (::AdwStyleManager* self /*none*/, ::AdwColorScheme color_scheme);
void base::StyleManagerBase::set_color_scheme (Adw::ColorScheme color_scheme) noexcept
{
  typedef void (*call_wrap_t) (::AdwStyleManager* self, ::AdwColorScheme color_scheme);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_style_manager_set_color_scheme;
  auto color_scheme_to_c = gi::unwrap (color_scheme);
  call_wrap_v ((::AdwStyleManager*) (gobj_()), (::AdwColorScheme) (color_scheme_to_c));
}


} // namespace base

} // namespace Adw

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<adw/stylemanager_extra_def_impl.hpp>)
#include <adw/stylemanager_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<adw/stylemanager_extra_impl.hpp>)
#include <adw/stylemanager_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Adw {

namespace impl {

namespace internal {

void StyleManagerClassDef::class_init (gpointer class_struct, gpointer factory)
{
  ::AdwStyleManagerClass *methods = (::AdwStyleManagerClass *) class_struct;
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
