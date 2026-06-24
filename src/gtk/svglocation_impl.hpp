// AUTO-GENERATED

#ifndef _GI_GTK_SVGLOCATION_IMPL_HPP_
#define _GI_GTK_SVGLOCATION_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

GI_MODULE_STATIC_OR_INLINE gsize _field_bytes_get (const ::GtkSvgLocation* obj) { return (gsize) obj->bytes; }
// gsize SvgLocation::bytes (const ::GtkSvgLocation* obj /*none*/);
// gsize SvgLocation::bytes (const ::GtkSvgLocation* obj /*none*/);
gsize base::SvgLocationBase::bytes_ () const noexcept
{
  typedef gsize (*call_wrap_t) (const ::GtkSvgLocation* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_bytes_get;
  auto _temp_ret = call_wrap_v ((const ::GtkSvgLocation*) (gobj_()));
  return _temp_ret;
}

GI_MODULE_STATIC_OR_INLINE void _field_bytes_set (::GtkSvgLocation* obj, gsize _value) { obj->bytes = (decltype(obj->bytes)) _value; }
//  SvgLocation::bytes (::GtkSvgLocation* obj /*none*/, gsize _value);
// void SvgLocation::bytes (::GtkSvgLocation* obj /*none*/, gsize _value);
void base::SvgLocationBase::bytes_ (gsize _value) noexcept
{
  typedef void (*call_wrap_t) (::GtkSvgLocation* obj, gsize _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_bytes_set;
  auto _value_to_c = _value;
  call_wrap_v ((::GtkSvgLocation*) (gobj_()), (gsize) (_value_to_c));
}

GI_MODULE_STATIC_OR_INLINE gsize _field_lines_get (const ::GtkSvgLocation* obj) { return (gsize) obj->lines; }
// gsize SvgLocation::lines (const ::GtkSvgLocation* obj /*none*/);
// gsize SvgLocation::lines (const ::GtkSvgLocation* obj /*none*/);
gsize base::SvgLocationBase::lines_ () const noexcept
{
  typedef gsize (*call_wrap_t) (const ::GtkSvgLocation* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_lines_get;
  auto _temp_ret = call_wrap_v ((const ::GtkSvgLocation*) (gobj_()));
  return _temp_ret;
}

GI_MODULE_STATIC_OR_INLINE void _field_lines_set (::GtkSvgLocation* obj, gsize _value) { obj->lines = (decltype(obj->lines)) _value; }
//  SvgLocation::lines (::GtkSvgLocation* obj /*none*/, gsize _value);
// void SvgLocation::lines (::GtkSvgLocation* obj /*none*/, gsize _value);
void base::SvgLocationBase::lines_ (gsize _value) noexcept
{
  typedef void (*call_wrap_t) (::GtkSvgLocation* obj, gsize _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_lines_set;
  auto _value_to_c = _value;
  call_wrap_v ((::GtkSvgLocation*) (gobj_()), (gsize) (_value_to_c));
}

GI_MODULE_STATIC_OR_INLINE gsize _field_line_chars_get (const ::GtkSvgLocation* obj) { return (gsize) obj->line_chars; }
// gsize SvgLocation::line_chars (const ::GtkSvgLocation* obj /*none*/);
// gsize SvgLocation::line_chars (const ::GtkSvgLocation* obj /*none*/);
gsize base::SvgLocationBase::line_chars_ () const noexcept
{
  typedef gsize (*call_wrap_t) (const ::GtkSvgLocation* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_line_chars_get;
  auto _temp_ret = call_wrap_v ((const ::GtkSvgLocation*) (gobj_()));
  return _temp_ret;
}

GI_MODULE_STATIC_OR_INLINE void _field_line_chars_set (::GtkSvgLocation* obj, gsize _value) { obj->line_chars = (decltype(obj->line_chars)) _value; }
//  SvgLocation::line_chars (::GtkSvgLocation* obj /*none*/, gsize _value);
// void SvgLocation::line_chars (::GtkSvgLocation* obj /*none*/, gsize _value);
void base::SvgLocationBase::line_chars_ (gsize _value) noexcept
{
  typedef void (*call_wrap_t) (::GtkSvgLocation* obj, gsize _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_line_chars_set;
  auto _value_to_c = _value;
  call_wrap_v ((::GtkSvgLocation*) (gobj_()), (gsize) (_value_to_c));
}


} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/svglocation_extra_def_impl.hpp>)
#include <gtk/svglocation_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/svglocation_extra_impl.hpp>)
#include <gtk/svglocation_extra_impl.hpp>
#endif
#endif

#endif
