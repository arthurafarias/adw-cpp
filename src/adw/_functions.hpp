// AUTO-GENERATED

#ifndef _GI_ADW__FUNCTIONS_HPP_
#define _GI_ADW__FUNCTIONS_HPP_

namespace gi {

namespace repository {

namespace Adw {

namespace AccentColorNS_ {

// void adw_accent_color_to_rgba (AdwAccentColor self, GdkRGBA* rgba /*none,out,ca*/);
// void adw_accent_color_to_rgba (::AdwAccentColor self, ::GdkRGBA* rgba /*none,out,ca*/);
GI_INLINE_DECL void to_rgba (Adw::AccentColor self, Gdk::RGBA & rgba) noexcept;
GI_INLINE_DECL Gdk::RGBA to_rgba (Adw::AccentColor self) noexcept;

// void adw_accent_color_to_standalone_rgba (AdwAccentColor self, gboolean dark, GdkRGBA* rgba /*none,out,ca*/);
// void adw_accent_color_to_standalone_rgba (::AdwAccentColor self, gboolean dark, ::GdkRGBA* rgba /*none,out,ca*/);
GI_INLINE_DECL void to_standalone_rgba (Adw::AccentColor self, gboolean dark, Gdk::RGBA & rgba) noexcept;
GI_INLINE_DECL Gdk::RGBA to_standalone_rgba (Adw::AccentColor self, gboolean dark) noexcept;

} // namespace AccentColorNS_

namespace EasingNS_ {

// double adw_easing_ease (AdwEasing self, double value);
// gdouble adw_easing_ease (::AdwEasing self, gdouble value);
GI_INLINE_DECL gdouble ease (Adw::Easing self, gdouble value) noexcept;

} // namespace EasingNS_

namespace LengthUnitNS_ {

// double adw_length_unit_from_px (AdwLengthUnit unit, double value, GtkSettings* settings /*none,nullable*/);
// gdouble adw_length_unit_from_px (::AdwLengthUnit unit, gdouble value, ::GtkSettings* settings /*none,nullable*/);
GI_INLINE_DECL gdouble from_px (Adw::LengthUnit unit, gdouble value, Gtk::Settings settings) noexcept;
GI_INLINE_DECL gdouble from_px (Adw::LengthUnit unit, gdouble value) noexcept;

// double adw_length_unit_to_px (AdwLengthUnit unit, double value, GtkSettings* settings /*none,nullable*/);
// gdouble adw_length_unit_to_px (::AdwLengthUnit unit, gdouble value, ::GtkSettings* settings /*none,nullable*/);
GI_INLINE_DECL gdouble to_px (Adw::LengthUnit unit, gdouble value, Gtk::Settings settings) noexcept;
GI_INLINE_DECL gdouble to_px (Adw::LengthUnit unit, gdouble value) noexcept;

} // namespace LengthUnitNS_

// gboolean adw_get_enable_animations (GtkWidget* widget /*none*/);
// gboolean adw_get_enable_animations (::GtkWidget* widget /*none*/);
GI_INLINE_DECL bool get_enable_animations (Gtk::Widget widget) noexcept;

// guint adw_get_major_version ();
// guint adw_get_major_version ();
GI_INLINE_DECL guint get_major_version () noexcept;

// guint adw_get_micro_version ();
// guint adw_get_micro_version ();
GI_INLINE_DECL guint get_micro_version () noexcept;

// guint adw_get_minor_version ();
// guint adw_get_minor_version ();
GI_INLINE_DECL guint get_minor_version () noexcept;

// void adw_init ();
// void adw_init ();
GI_INLINE_DECL void init () noexcept;

// gboolean adw_is_initialized ();
// gboolean adw_is_initialized ();
GI_INLINE_DECL bool is_initialized () noexcept;

// double adw_lerp (double a, double b, double t);
// gdouble adw_lerp (gdouble a, gdouble b, gdouble t);
GI_INLINE_DECL gdouble lerp (gdouble a, gdouble b, gdouble t) noexcept;

// void adw_rgba_to_standalone (const GdkRGBA* rgba /*none*/, gboolean dark, GdkRGBA* standalone_rgba /*none,out,ca*/);
// void adw_rgba_to_standalone (const ::GdkRGBA* rgba /*none*/, gboolean dark, ::GdkRGBA* standalone_rgba /*none,out,ca*/);
GI_INLINE_DECL void rgba_to_standalone (const Gdk::RGBA_Ref rgba, gboolean dark, Gdk::RGBA & standalone_rgba) noexcept;
GI_INLINE_DECL Gdk::RGBA rgba_to_standalone (const Gdk::RGBA_Ref rgba, gboolean dark) noexcept;

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
