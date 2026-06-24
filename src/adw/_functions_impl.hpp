// AUTO-GENERATED

#ifndef _GI_ADW__FUNCTIONS_IMPL_HPP_
#define _GI_ADW__FUNCTIONS_IMPL_HPP_

namespace gi {

namespace repository {

namespace Adw {

namespace AccentColorNS_ {

// void adw_accent_color_to_rgba (AdwAccentColor self, GdkRGBA* rgba /*none,out,ca*/);
// void adw_accent_color_to_rgba (::AdwAccentColor self, ::GdkRGBA* rgba /*none,out,ca*/);
void to_rgba (Adw::AccentColor self, Gdk::RGBA & rgba) noexcept
{
  typedef void (*call_wrap_t) (::AdwAccentColor self, ::GdkRGBA* rgba);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_accent_color_to_rgba;
  detail::allocate(rgba);
  static_assert(sizeof(::GdkRGBA) == sizeof(*(rgba).gobj_()), "");
  auto self_to_c = gi::unwrap (self);
  call_wrap_v ((::AdwAccentColor) (self_to_c), (::GdkRGBA*) ((::GdkRGBA*) (rgba).gobj_()));
}
Gdk::RGBA to_rgba (Adw::AccentColor self) noexcept
{
  typedef void (*call_wrap_t) (::AdwAccentColor self, ::GdkRGBA* rgba);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_accent_color_to_rgba;
  Gdk::RGBA rgba_c;
  auto rgba = &rgba_c;
  detail::allocate(*rgba);
  static_assert(sizeof(::GdkRGBA) == sizeof(*(*rgba).gobj_()), "");
  auto self_to_c = gi::unwrap (self);
  call_wrap_v ((::AdwAccentColor) (self_to_c), (::GdkRGBA*) (rgba ? (::GdkRGBA*) (*rgba).gobj_() : nullptr));
  return rgba_c;
}

// void adw_accent_color_to_standalone_rgba (AdwAccentColor self, gboolean dark, GdkRGBA* rgba /*none,out,ca*/);
// void adw_accent_color_to_standalone_rgba (::AdwAccentColor self, gboolean dark, ::GdkRGBA* rgba /*none,out,ca*/);
void to_standalone_rgba (Adw::AccentColor self, gboolean dark, Gdk::RGBA & rgba) noexcept
{
  typedef void (*call_wrap_t) (::AdwAccentColor self, gboolean dark, ::GdkRGBA* rgba);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_accent_color_to_standalone_rgba;
  detail::allocate(rgba);
  static_assert(sizeof(::GdkRGBA) == sizeof(*(rgba).gobj_()), "");
  auto dark_to_c = dark;
  auto self_to_c = gi::unwrap (self);
  call_wrap_v ((::AdwAccentColor) (self_to_c), (gboolean) (dark_to_c), (::GdkRGBA*) ((::GdkRGBA*) (rgba).gobj_()));
}
Gdk::RGBA to_standalone_rgba (Adw::AccentColor self, gboolean dark) noexcept
{
  typedef void (*call_wrap_t) (::AdwAccentColor self, gboolean dark, ::GdkRGBA* rgba);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_accent_color_to_standalone_rgba;
  Gdk::RGBA rgba_c;
  auto rgba = &rgba_c;
  detail::allocate(*rgba);
  static_assert(sizeof(::GdkRGBA) == sizeof(*(*rgba).gobj_()), "");
  auto dark_to_c = dark;
  auto self_to_c = gi::unwrap (self);
  call_wrap_v ((::AdwAccentColor) (self_to_c), (gboolean) (dark_to_c), (::GdkRGBA*) (rgba ? (::GdkRGBA*) (*rgba).gobj_() : nullptr));
  return rgba_c;
}

} // namespace AccentColorNS_

namespace EasingNS_ {

// double adw_easing_ease (AdwEasing self, double value);
// gdouble adw_easing_ease (::AdwEasing self, gdouble value);
gdouble ease (Adw::Easing self, gdouble value) noexcept
{
  typedef gdouble (*call_wrap_t) (::AdwEasing self, gdouble value);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_easing_ease;
  auto value_to_c = value;
  auto self_to_c = gi::unwrap (self);
  auto _temp_ret = call_wrap_v ((::AdwEasing) (self_to_c), (gdouble) (value_to_c));
  return _temp_ret;
}

} // namespace EasingNS_

namespace LengthUnitNS_ {

// double adw_length_unit_from_px (AdwLengthUnit unit, double value, GtkSettings* settings /*none,nullable*/);
// gdouble adw_length_unit_from_px (::AdwLengthUnit unit, gdouble value, ::GtkSettings* settings /*none,nullable*/);
gdouble from_px (Adw::LengthUnit unit, gdouble value, Gtk::Settings settings) noexcept
{
  typedef gdouble (*call_wrap_t) (::AdwLengthUnit unit, gdouble value, ::GtkSettings* settings);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_length_unit_from_px;
  auto settings_to_c = gi::unwrap (settings, gi::transfer_none);
  auto value_to_c = value;
  auto unit_to_c = gi::unwrap (unit);
  auto _temp_ret = call_wrap_v ((::AdwLengthUnit) (unit_to_c), (gdouble) (value_to_c), (::GtkSettings*) (settings_to_c));
  return _temp_ret;
}
gdouble from_px (Adw::LengthUnit unit, gdouble value) noexcept
{
  typedef gdouble (*call_wrap_t) (::AdwLengthUnit unit, gdouble value, ::GtkSettings* settings);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_length_unit_from_px;
  auto settings_to_c = nullptr;
  auto value_to_c = value;
  auto unit_to_c = gi::unwrap (unit);
  auto _temp_ret = call_wrap_v ((::AdwLengthUnit) (unit_to_c), (gdouble) (value_to_c), (::GtkSettings*) (settings_to_c));
  return _temp_ret;
}

// double adw_length_unit_to_px (AdwLengthUnit unit, double value, GtkSettings* settings /*none,nullable*/);
// gdouble adw_length_unit_to_px (::AdwLengthUnit unit, gdouble value, ::GtkSettings* settings /*none,nullable*/);
gdouble to_px (Adw::LengthUnit unit, gdouble value, Gtk::Settings settings) noexcept
{
  typedef gdouble (*call_wrap_t) (::AdwLengthUnit unit, gdouble value, ::GtkSettings* settings);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_length_unit_to_px;
  auto settings_to_c = gi::unwrap (settings, gi::transfer_none);
  auto value_to_c = value;
  auto unit_to_c = gi::unwrap (unit);
  auto _temp_ret = call_wrap_v ((::AdwLengthUnit) (unit_to_c), (gdouble) (value_to_c), (::GtkSettings*) (settings_to_c));
  return _temp_ret;
}
gdouble to_px (Adw::LengthUnit unit, gdouble value) noexcept
{
  typedef gdouble (*call_wrap_t) (::AdwLengthUnit unit, gdouble value, ::GtkSettings* settings);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_length_unit_to_px;
  auto settings_to_c = nullptr;
  auto value_to_c = value;
  auto unit_to_c = gi::unwrap (unit);
  auto _temp_ret = call_wrap_v ((::AdwLengthUnit) (unit_to_c), (gdouble) (value_to_c), (::GtkSettings*) (settings_to_c));
  return _temp_ret;
}

} // namespace LengthUnitNS_

// gboolean adw_get_enable_animations (GtkWidget* widget /*none*/);
// gboolean adw_get_enable_animations (::GtkWidget* widget /*none*/);
bool get_enable_animations (Gtk::Widget widget) noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkWidget* widget);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_get_enable_animations;
  auto widget_to_c = gi::unwrap (widget, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GtkWidget*) (widget_to_c));
  return _temp_ret;
}

// guint adw_get_major_version ();
// guint adw_get_major_version ();
guint get_major_version () noexcept
{
  typedef guint (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_get_major_version;
  auto _temp_ret = call_wrap_v ();
  return _temp_ret;
}

// guint adw_get_micro_version ();
// guint adw_get_micro_version ();
guint get_micro_version () noexcept
{
  typedef guint (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_get_micro_version;
  auto _temp_ret = call_wrap_v ();
  return _temp_ret;
}

// guint adw_get_minor_version ();
// guint adw_get_minor_version ();
guint get_minor_version () noexcept
{
  typedef guint (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_get_minor_version;
  auto _temp_ret = call_wrap_v ();
  return _temp_ret;
}

// void adw_init ();
// void adw_init ();
void init () noexcept
{
  typedef void (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_init;
  call_wrap_v ();
}

// gboolean adw_is_initialized ();
// gboolean adw_is_initialized ();
bool is_initialized () noexcept
{
  typedef gboolean (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_is_initialized;
  auto _temp_ret = call_wrap_v ();
  return _temp_ret;
}

// double adw_lerp (double a, double b, double t);
// gdouble adw_lerp (gdouble a, gdouble b, gdouble t);
gdouble lerp (gdouble a, gdouble b, gdouble t) noexcept
{
  typedef gdouble (*call_wrap_t) (gdouble a, gdouble b, gdouble t);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_lerp;
  auto t_to_c = t;
  auto b_to_c = b;
  auto a_to_c = a;
  auto _temp_ret = call_wrap_v ((gdouble) (a_to_c), (gdouble) (b_to_c), (gdouble) (t_to_c));
  return _temp_ret;
}

// void adw_rgba_to_standalone (const GdkRGBA* rgba /*none*/, gboolean dark, GdkRGBA* standalone_rgba /*none,out,ca*/);
// void adw_rgba_to_standalone (const ::GdkRGBA* rgba /*none*/, gboolean dark, ::GdkRGBA* standalone_rgba /*none,out,ca*/);
void rgba_to_standalone (const Gdk::RGBA_Ref rgba, gboolean dark, Gdk::RGBA & standalone_rgba) noexcept
{
  typedef void (*call_wrap_t) (const ::GdkRGBA* rgba, gboolean dark, ::GdkRGBA* standalone_rgba);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_rgba_to_standalone;
  detail::allocate(standalone_rgba);
  static_assert(sizeof(::GdkRGBA) == sizeof(*(standalone_rgba).gobj_()), "");
  auto dark_to_c = dark;
  auto rgba_to_c = gi::unwrap (rgba, gi::transfer_none);
  call_wrap_v ((const ::GdkRGBA*) (rgba_to_c), (gboolean) (dark_to_c), (::GdkRGBA*) ((::GdkRGBA*) (standalone_rgba).gobj_()));
}
Gdk::RGBA rgba_to_standalone (const Gdk::RGBA_Ref rgba, gboolean dark) noexcept
{
  typedef void (*call_wrap_t) (const ::GdkRGBA* rgba, gboolean dark, ::GdkRGBA* standalone_rgba);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_rgba_to_standalone;
  Gdk::RGBA standalone_rgba_c;
  auto standalone_rgba = &standalone_rgba_c;
  detail::allocate(*standalone_rgba);
  static_assert(sizeof(::GdkRGBA) == sizeof(*(*standalone_rgba).gobj_()), "");
  auto dark_to_c = dark;
  auto rgba_to_c = gi::unwrap (rgba, gi::transfer_none);
  call_wrap_v ((const ::GdkRGBA*) (rgba_to_c), (gboolean) (dark_to_c), (::GdkRGBA*) (standalone_rgba ? (::GdkRGBA*) (*standalone_rgba).gobj_() : nullptr));
  return standalone_rgba_c;
}

// void adw_show_about_dialog (GtkWidget* parent /*none*/, const char* first_property_name /*none*/,  ..._ /*none*/);
// void adw_show_about_dialog (::GtkWidget* parent /*none*/, const char* first_property_name /*none*/,  ..._ /*none*/);
// IGNORE; not introspectable, varargs not supported

// void adw_show_about_dialog_from_appdata (GtkWidget* parent /*none*/, const char* resource_path /*none*/, const char* release_notes_version /*none,nullable*/, const char* first_property_name /*none*/,  ..._ /*none*/);
// void adw_show_about_dialog_from_appdata (::GtkWidget* parent /*none*/, const char* resource_path /*none*/, const char* release_notes_version /*none,nullable*/, const char* first_property_name /*none*/,  ..._ /*none*/);
// IGNORE; not introspectable, varargs not supported

} // namespace Adw

} // namespace repository

} // namespace gi

#endif
