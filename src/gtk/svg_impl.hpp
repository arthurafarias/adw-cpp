// AUTO-GENERATED

#ifndef _GI_GTK_SVG_IMPL_HPP_
#define _GI_GTK_SVG_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

Gdk::Paintable SvgBase::interface_ (gi::interface_tag<Gdk::Paintable>)
{ return gi::wrap ((Gdk::Paintable::BaseObjectType*) gobj_copy_(), gi::transfer_full); }

SvgBase::operator Gdk::Paintable ()
{ return interface_ (gi::interface_tag<Gdk::Paintable>()); }

Gtk::SymbolicPaintable SvgBase::interface_ (gi::interface_tag<Gtk::SymbolicPaintable>)
{ return gi::wrap ((Gtk::SymbolicPaintable::BaseObjectType*) gobj_copy_(), gi::transfer_full); }

SvgBase::operator Gtk::SymbolicPaintable ()
{ return interface_ (gi::interface_tag<Gtk::SymbolicPaintable>()); }

// GtkSvg* /*full*/ gtk_svg_new ();
// ::GtkSvg* /*full*/ gtk_svg_new ();
Gtk::Svg base::SvgBase::new_ () noexcept
{
  typedef ::GtkSvg* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_svg_new;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// GtkSvg* /*full*/ gtk_svg_new_from_bytes (GBytes* bytes /*none*/);
// ::GtkSvg* /*full*/ gtk_svg_new_from_bytes (::GBytes* bytes /*none*/);
Gtk::Svg base::SvgBase::new_from_bytes (GLib::Bytes_Ref bytes) noexcept
{
  typedef ::GtkSvg* (*call_wrap_t) (::GBytes* bytes);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_svg_new_from_bytes;
  auto bytes_to_c = gi::unwrap (bytes, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GBytes*) (bytes_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// GtkSvg* /*full*/ gtk_svg_new_from_resource (const char* path /*none*/);
// ::GtkSvg* /*full*/ gtk_svg_new_from_resource (const char* path /*none*/);
Gtk::Svg base::SvgBase::new_from_resource (const gi::cstring_v path) noexcept
{
  typedef ::GtkSvg* (*call_wrap_t) (const char* path);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_svg_new_from_resource;
  auto path_to_c = gi::unwrap (path, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const char*) (path_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// GtkSvgFeatures gtk_svg_get_features (GtkSvg* self /*none*/);
// ::GtkSvgFeatures gtk_svg_get_features (::GtkSvg* self /*none*/);
Gtk::SvgFeatures base::SvgBase::get_features () noexcept
{
  typedef ::GtkSvgFeatures (*call_wrap_t) (::GtkSvg* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_svg_get_features;
  auto _temp_ret = call_wrap_v ((::GtkSvg*) (gobj_()));
  return gi::wrap (_temp_ret);
}

// unsigned int gtk_svg_get_state (GtkSvg* self /*none*/);
// guint gtk_svg_get_state (::GtkSvg* self /*none*/);
guint base::SvgBase::get_state () noexcept
{
  typedef guint (*call_wrap_t) (::GtkSvg* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_svg_get_state;
  auto _temp_ret = call_wrap_v ((::GtkSvg*) (gobj_()));
  return _temp_ret;
}

// const char** /*none,nullable*/ gtk_svg_get_state_names (GtkSvg* self /*none*/, unsigned int* length);
// const char** /*none,nullable*/ gtk_svg_get_state_names (::GtkSvg* self /*none*/, guint* length);
gi::Collection<gi::ZTSpan, char*, gi::transfer_none_t> base::SvgBase::get_state_names (guint & length) noexcept
{
  typedef const char** (*call_wrap_t) (::GtkSvg* self, guint* length);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_svg_get_state_names;
  guint length_o {};
  auto _temp_ret = call_wrap_v ((::GtkSvg*) (gobj_()), (guint*) (&length_o));
  length = length_o;
  return gi::wrap_to<gi::Collection<gi::ZTSpan, char*, gi::transfer_none_t>>(_temp_ret, gi::transfer_none);
}
std::tuple<gi::Collection<gi::ZTSpan, char*, gi::transfer_none_t>, guint> base::SvgBase::get_state_names () noexcept
{
  typedef const char** (*call_wrap_t) (::GtkSvg* self, guint* length);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_svg_get_state_names;
  guint length_o {};
  auto _temp_ret = call_wrap_v ((::GtkSvg*) (gobj_()), (guint*) (&length_o));
  auto &&tmp_return_1 = gi::wrap_to<gi::Collection<gi::ZTSpan, char*, gi::transfer_none_t>>(_temp_ret, gi::transfer_none);
  auto &&tmp_return_2 = length_o;
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}

// double gtk_svg_get_weight (GtkSvg* self /*none*/);
// gdouble gtk_svg_get_weight (::GtkSvg* self /*none*/);
gdouble base::SvgBase::get_weight () noexcept
{
  typedef gdouble (*call_wrap_t) (::GtkSvg* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_svg_get_weight;
  auto _temp_ret = call_wrap_v ((::GtkSvg*) (gobj_()));
  return _temp_ret;
}

// void gtk_svg_load_from_bytes (GtkSvg* self /*none*/, GBytes* bytes /*none*/);
// void gtk_svg_load_from_bytes (::GtkSvg* self /*none*/, ::GBytes* bytes /*none*/);
void base::SvgBase::load_from_bytes (GLib::Bytes_Ref bytes) noexcept
{
  typedef void (*call_wrap_t) (::GtkSvg* self, ::GBytes* bytes);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_svg_load_from_bytes;
  auto bytes_to_c = gi::unwrap (bytes, gi::transfer_none);
  call_wrap_v ((::GtkSvg*) (gobj_()), (::GBytes*) (bytes_to_c));
}

// void gtk_svg_load_from_resource (GtkSvg* self /*none*/, const char* path /*none*/);
// void gtk_svg_load_from_resource (::GtkSvg* self /*none*/, const char* path /*none*/);
void base::SvgBase::load_from_resource (const gi::cstring_v path) noexcept
{
  typedef void (*call_wrap_t) (::GtkSvg* self, const char* path);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_svg_load_from_resource;
  auto path_to_c = gi::unwrap (path, gi::transfer_none);
  call_wrap_v ((::GtkSvg*) (gobj_()), (const char*) (path_to_c));
}

// void gtk_svg_pause (GtkSvg* self /*none*/);
// void gtk_svg_pause (::GtkSvg* self /*none*/);
void base::SvgBase::pause () noexcept
{
  typedef void (*call_wrap_t) (::GtkSvg* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_svg_pause;
  call_wrap_v ((::GtkSvg*) (gobj_()));
}

// void gtk_svg_play (GtkSvg* self /*none*/);
// void gtk_svg_play (::GtkSvg* self /*none*/);
void base::SvgBase::play () noexcept
{
  typedef void (*call_wrap_t) (::GtkSvg* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_svg_play;
  call_wrap_v ((::GtkSvg*) (gobj_()));
}

// GBytes* /*full*/ gtk_svg_serialize (GtkSvg* self /*none*/);
// ::GBytes* /*full*/ gtk_svg_serialize (::GtkSvg* self /*none*/);
GLib::Bytes base::SvgBase::serialize () noexcept
{
  typedef ::GBytes* (*call_wrap_t) (::GtkSvg* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_svg_serialize;
  auto _temp_ret = call_wrap_v ((::GtkSvg*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// void gtk_svg_set_features (GtkSvg* self /*none*/, GtkSvgFeatures features);
// void gtk_svg_set_features (::GtkSvg* self /*none*/, ::GtkSvgFeatures features);
void base::SvgBase::set_features (Gtk::SvgFeatures features) noexcept
{
  typedef void (*call_wrap_t) (::GtkSvg* self, ::GtkSvgFeatures features);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_svg_set_features;
  auto features_to_c = gi::unwrap (features);
  call_wrap_v ((::GtkSvg*) (gobj_()), (::GtkSvgFeatures) (features_to_c));
}

// void gtk_svg_set_frame_clock (GtkSvg* self /*none*/, GdkFrameClock* clock /*none*/);
// void gtk_svg_set_frame_clock (::GtkSvg* self /*none*/, ::GdkFrameClock* clock /*none*/);
void base::SvgBase::set_frame_clock (Gdk::FrameClock clock) noexcept
{
  typedef void (*call_wrap_t) (::GtkSvg* self, ::GdkFrameClock* clock);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_svg_set_frame_clock;
  auto clock_to_c = gi::unwrap (clock, gi::transfer_none);
  call_wrap_v ((::GtkSvg*) (gobj_()), (::GdkFrameClock*) (clock_to_c));
}

// void gtk_svg_set_state (GtkSvg* self /*none*/, unsigned int state);
// void gtk_svg_set_state (::GtkSvg* self /*none*/, guint state);
void base::SvgBase::set_state (guint state) noexcept
{
  typedef void (*call_wrap_t) (::GtkSvg* self, guint state);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_svg_set_state;
  auto state_to_c = state;
  call_wrap_v ((::GtkSvg*) (gobj_()), (guint) (state_to_c));
}

// void gtk_svg_set_weight (GtkSvg* self /*none*/, double weight);
// void gtk_svg_set_weight (::GtkSvg* self /*none*/, gdouble weight);
void base::SvgBase::set_weight (gdouble weight) noexcept
{
  typedef void (*call_wrap_t) (::GtkSvg* self, gdouble weight);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_svg_set_weight;
  auto weight_to_c = weight;
  call_wrap_v ((::GtkSvg*) (gobj_()), (gdouble) (weight_to_c));
}

// gboolean gtk_svg_write_to_file (GtkSvg* self /*none*/, const char* filename /*none*/, GError ** error);
// gboolean gtk_svg_write_to_file (::GtkSvg* self /*none*/, const char* filename /*none*/, GError ** error);
bool base::SvgBase::write_to_file (const gi::cstring_v filename)
{
  typedef gboolean (*call_wrap_t) (::GtkSvg* self, const char* filename, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_svg_write_to_file;
  auto filename_to_c = gi::unwrap (filename, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GtkSvg*) (gobj_()), (const char*) (filename_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
bool base::SvgBase::write_to_file (const gi::cstring_v filename, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkSvg* self, const char* filename, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_svg_write_to_file;
  auto filename_to_c = gi::unwrap (filename, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GtkSvg*) (gobj_()), (const char*) (filename_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}



} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/svg_extra_def_impl.hpp>)
#include <gtk/svg_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/svg_extra_impl.hpp>)
#include <gtk/svg_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {

void SvgClassDef::class_init (gpointer class_struct, gpointer factory)
{
  ::GtkSvgClass *methods = (::GtkSvgClass *) class_struct;
  (void) methods;

  auto init_data = GI_MEMBER_INIT_DATA(TypeInitData, factory);
  (void) init_data;

}

} // namespace internal

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
