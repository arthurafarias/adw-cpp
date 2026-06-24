// AUTO-GENERATED

#ifndef _GI_CAIRO_GLYPH_IMPL_HPP_
#define _GI_CAIRO_GLYPH_IMPL_HPP_

namespace gi {

namespace repository {

namespace cairo {

namespace base {

GI_MODULE_STATIC_OR_INLINE gulong _field_index_get (const ::cairo_glyph_t* obj) { return (gulong) obj->index; }
// gulong Glyph::index (const ::cairo_glyph_t* obj /*none*/);
// gulong Glyph::index (const ::cairo_glyph_t* obj /*none*/);
gulong base::GlyphBase::index_ () const noexcept
{
  typedef gulong (*call_wrap_t) (const ::cairo_glyph_t* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_index_get;
  auto _temp_ret = call_wrap_v ((const ::cairo_glyph_t*) (gobj_()));
  return _temp_ret;
}

GI_MODULE_STATIC_OR_INLINE void _field_index_set (::cairo_glyph_t* obj, gulong _value) { obj->index = (decltype(obj->index)) _value; }
//  Glyph::index (::cairo_glyph_t* obj /*none*/, gulong _value);
// void Glyph::index (::cairo_glyph_t* obj /*none*/, gulong _value);
void base::GlyphBase::index_ (gulong _value) noexcept
{
  typedef void (*call_wrap_t) (::cairo_glyph_t* obj, gulong _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_index_set;
  auto _value_to_c = _value;
  call_wrap_v ((::cairo_glyph_t*) (gobj_()), (gulong) (_value_to_c));
}

GI_MODULE_STATIC_OR_INLINE gdouble _field_x_get (const ::cairo_glyph_t* obj) { return (gdouble) obj->x; }
// gdouble Glyph::x (const ::cairo_glyph_t* obj /*none*/);
// gdouble Glyph::x (const ::cairo_glyph_t* obj /*none*/);
gdouble base::GlyphBase::x_ () const noexcept
{
  typedef gdouble (*call_wrap_t) (const ::cairo_glyph_t* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_x_get;
  auto _temp_ret = call_wrap_v ((const ::cairo_glyph_t*) (gobj_()));
  return _temp_ret;
}

GI_MODULE_STATIC_OR_INLINE void _field_x_set (::cairo_glyph_t* obj, gdouble _value) { obj->x = (decltype(obj->x)) _value; }
//  Glyph::x (::cairo_glyph_t* obj /*none*/, gdouble _value);
// void Glyph::x (::cairo_glyph_t* obj /*none*/, gdouble _value);
void base::GlyphBase::x_ (gdouble _value) noexcept
{
  typedef void (*call_wrap_t) (::cairo_glyph_t* obj, gdouble _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_x_set;
  auto _value_to_c = _value;
  call_wrap_v ((::cairo_glyph_t*) (gobj_()), (gdouble) (_value_to_c));
}

GI_MODULE_STATIC_OR_INLINE gdouble _field_y_get (const ::cairo_glyph_t* obj) { return (gdouble) obj->y; }
// gdouble Glyph::y (const ::cairo_glyph_t* obj /*none*/);
// gdouble Glyph::y (const ::cairo_glyph_t* obj /*none*/);
gdouble base::GlyphBase::y_ () const noexcept
{
  typedef gdouble (*call_wrap_t) (const ::cairo_glyph_t* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_y_get;
  auto _temp_ret = call_wrap_v ((const ::cairo_glyph_t*) (gobj_()));
  return _temp_ret;
}

GI_MODULE_STATIC_OR_INLINE void _field_y_set (::cairo_glyph_t* obj, gdouble _value) { obj->y = (decltype(obj->y)) _value; }
//  Glyph::y (::cairo_glyph_t* obj /*none*/, gdouble _value);
// void Glyph::y (::cairo_glyph_t* obj /*none*/, gdouble _value);
void base::GlyphBase::y_ (gdouble _value) noexcept
{
  typedef void (*call_wrap_t) (::cairo_glyph_t* obj, gdouble _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_y_set;
  auto _value_to_c = _value;
  call_wrap_v ((::cairo_glyph_t*) (gobj_()), (gdouble) (_value_to_c));
}


} // namespace base

} // namespace cairo

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<cairo/glyph_extra_def_impl.hpp>)
#include <cairo/glyph_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<cairo/glyph_extra_impl.hpp>)
#include <cairo/glyph_extra_impl.hpp>
#endif
#endif

#endif
