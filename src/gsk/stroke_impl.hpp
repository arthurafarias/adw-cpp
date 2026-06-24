// AUTO-GENERATED

#ifndef _GI_GSK_STROKE_IMPL_HPP_
#define _GI_GSK_STROKE_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gsk {

namespace base {

// GskStroke* /*full*/ gsk_stroke_new (float line_width);
// ::GskStroke* /*full*/ gsk_stroke_new (gfloat line_width);
Gsk::Stroke base::StrokeBase::new_ (gfloat line_width) noexcept
{
  typedef ::GskStroke* (*call_wrap_t) (gfloat line_width);
  call_wrap_t call_wrap_v = (call_wrap_t) gsk_stroke_new;
  auto line_width_to_c = line_width;
  auto _temp_ret = call_wrap_v ((gfloat) (line_width_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// GskStroke* /*full*/ gsk_stroke_copy (const GskStroke* other /*none*/);
// ::GskStroke* /*full*/ gsk_stroke_copy (const ::GskStroke* other /*none*/);
Gsk::Stroke base::StrokeBase::copy () const noexcept
{
  typedef ::GskStroke* (*call_wrap_t) (const ::GskStroke* other);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gsk_stroke_copy;
  auto _temp_ret = call_wrap_v ((const ::GskStroke*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// void gsk_stroke_free (GskStroke* self /*none*/);
// void gsk_stroke_free (::GskStroke* self /*none*/);
// IGNORE; marked ignore

// const float* /*none,nullable*/ gsk_stroke_get_dash (const GskStroke* self /*none*/, gsize* n_dash);
// const gfloat* /*none,nullable*/ gsk_stroke_get_dash (const ::GskStroke* self /*none*/, gsize* n_dash);
gi::Collection<gi::DSpan, gfloat, gi::transfer_none_t> base::StrokeBase::get_dash () const noexcept
{
  typedef const gfloat* (*call_wrap_t) (const ::GskStroke* self, gsize* n_dash);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gsk_stroke_get_dash;
  gsize n_dash;
  auto _ret_o = call_wrap_v ((const ::GskStroke*) (gobj_()), (gsize*) (&n_dash));
  gi::Collection<gi::DSpan, gfloat, gi::transfer_none_t> _temp_ret;
  _temp_ret = gi::wrap_to<gi::Collection<gi::DSpan, gfloat, gi::transfer_none_t>>(_ret_o, n_dash, gi::transfer_none);
  return _temp_ret;
}

// float gsk_stroke_get_dash_offset (const GskStroke* self /*none*/);
// gfloat gsk_stroke_get_dash_offset (const ::GskStroke* self /*none*/);
gfloat base::StrokeBase::get_dash_offset () const noexcept
{
  typedef gfloat (*call_wrap_t) (const ::GskStroke* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gsk_stroke_get_dash_offset;
  auto _temp_ret = call_wrap_v ((const ::GskStroke*) (gobj_()));
  return _temp_ret;
}

// GskLineCap gsk_stroke_get_line_cap (const GskStroke* self /*none*/);
// ::GskLineCap gsk_stroke_get_line_cap (const ::GskStroke* self /*none*/);
Gsk::LineCap base::StrokeBase::get_line_cap () const noexcept
{
  typedef ::GskLineCap (*call_wrap_t) (const ::GskStroke* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gsk_stroke_get_line_cap;
  auto _temp_ret = call_wrap_v ((const ::GskStroke*) (gobj_()));
  return gi::wrap (_temp_ret);
}

// GskLineJoin gsk_stroke_get_line_join (const GskStroke* self /*none*/);
// ::GskLineJoin gsk_stroke_get_line_join (const ::GskStroke* self /*none*/);
Gsk::LineJoin base::StrokeBase::get_line_join () const noexcept
{
  typedef ::GskLineJoin (*call_wrap_t) (const ::GskStroke* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gsk_stroke_get_line_join;
  auto _temp_ret = call_wrap_v ((const ::GskStroke*) (gobj_()));
  return gi::wrap (_temp_ret);
}

// float gsk_stroke_get_line_width (const GskStroke* self /*none*/);
// gfloat gsk_stroke_get_line_width (const ::GskStroke* self /*none*/);
gfloat base::StrokeBase::get_line_width () const noexcept
{
  typedef gfloat (*call_wrap_t) (const ::GskStroke* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gsk_stroke_get_line_width;
  auto _temp_ret = call_wrap_v ((const ::GskStroke*) (gobj_()));
  return _temp_ret;
}

// float gsk_stroke_get_miter_limit (const GskStroke* self /*none*/);
// gfloat gsk_stroke_get_miter_limit (const ::GskStroke* self /*none*/);
gfloat base::StrokeBase::get_miter_limit () const noexcept
{
  typedef gfloat (*call_wrap_t) (const ::GskStroke* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gsk_stroke_get_miter_limit;
  auto _temp_ret = call_wrap_v ((const ::GskStroke*) (gobj_()));
  return _temp_ret;
}

// void gsk_stroke_set_dash (GskStroke* self /*none*/, const float* dash /*none,nullable*/, gsize n_dash);
// void gsk_stroke_set_dash (::GskStroke* self /*none*/, const gfloat* dash /*none,nullable*/, gsize n_dash);
void base::StrokeBase::set_dash (const gfloat * dash, gsize n_dash) noexcept
{
  typedef void (*call_wrap_t) (::GskStroke* self, const gfloat* dash, gsize n_dash);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gsk_stroke_set_dash;
  auto dash_to_c = dash;
  call_wrap_v ((::GskStroke*) (gobj_()), (const gfloat*) (dash_to_c), (gsize) (n_dash));
}

// void gsk_stroke_set_dash_offset (GskStroke* self /*none*/, float offset);
// void gsk_stroke_set_dash_offset (::GskStroke* self /*none*/, gfloat offset);
void base::StrokeBase::set_dash_offset (gfloat offset) noexcept
{
  typedef void (*call_wrap_t) (::GskStroke* self, gfloat offset);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gsk_stroke_set_dash_offset;
  auto offset_to_c = offset;
  call_wrap_v ((::GskStroke*) (gobj_()), (gfloat) (offset_to_c));
}

// void gsk_stroke_set_line_cap (GskStroke* self /*none*/, GskLineCap line_cap);
// void gsk_stroke_set_line_cap (::GskStroke* self /*none*/, ::GskLineCap line_cap);
void base::StrokeBase::set_line_cap (Gsk::LineCap line_cap) noexcept
{
  typedef void (*call_wrap_t) (::GskStroke* self, ::GskLineCap line_cap);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gsk_stroke_set_line_cap;
  auto line_cap_to_c = gi::unwrap (line_cap);
  call_wrap_v ((::GskStroke*) (gobj_()), (::GskLineCap) (line_cap_to_c));
}

// void gsk_stroke_set_line_join (GskStroke* self /*none*/, GskLineJoin line_join);
// void gsk_stroke_set_line_join (::GskStroke* self /*none*/, ::GskLineJoin line_join);
void base::StrokeBase::set_line_join (Gsk::LineJoin line_join) noexcept
{
  typedef void (*call_wrap_t) (::GskStroke* self, ::GskLineJoin line_join);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gsk_stroke_set_line_join;
  auto line_join_to_c = gi::unwrap (line_join);
  call_wrap_v ((::GskStroke*) (gobj_()), (::GskLineJoin) (line_join_to_c));
}

// void gsk_stroke_set_line_width (GskStroke* self /*none*/, float line_width);
// void gsk_stroke_set_line_width (::GskStroke* self /*none*/, gfloat line_width);
void base::StrokeBase::set_line_width (gfloat line_width) noexcept
{
  typedef void (*call_wrap_t) (::GskStroke* self, gfloat line_width);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gsk_stroke_set_line_width;
  auto line_width_to_c = line_width;
  call_wrap_v ((::GskStroke*) (gobj_()), (gfloat) (line_width_to_c));
}

// void gsk_stroke_set_miter_limit (GskStroke* self /*none*/, float limit);
// void gsk_stroke_set_miter_limit (::GskStroke* self /*none*/, gfloat limit);
void base::StrokeBase::set_miter_limit (gfloat limit) noexcept
{
  typedef void (*call_wrap_t) (::GskStroke* self, gfloat limit);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gsk_stroke_set_miter_limit;
  auto limit_to_c = limit;
  call_wrap_v ((::GskStroke*) (gobj_()), (gfloat) (limit_to_c));
}

// void gsk_stroke_to_cairo (const GskStroke* self /*none*/, cairo_t* cr /*none*/);
// void gsk_stroke_to_cairo (const ::GskStroke* self /*none*/, ::cairo_t* cr /*none*/);
void base::StrokeBase::to_cairo (cairo::Context_Ref cr) const noexcept
{
  typedef void (*call_wrap_t) (const ::GskStroke* self, ::cairo_t* cr);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gsk_stroke_to_cairo;
  auto cr_to_c = gi::unwrap (cr, gi::transfer_none);
  call_wrap_v ((const ::GskStroke*) (gobj_()), (::cairo_t*) (cr_to_c));
}

// gboolean gsk_stroke_equal (gconstpointer stroke1, gconstpointer stroke2);
// gboolean gsk_stroke_equal (const void* stroke1, const void* stroke2);
bool base::StrokeBase::equal (const void* stroke1, const void* stroke2) noexcept
{
  typedef gboolean (*call_wrap_t) (const void* stroke1, const void* stroke2);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gsk_stroke_equal;
  auto stroke2_to_c = stroke2;
  auto stroke1_to_c = stroke1;
  auto _temp_ret = call_wrap_v ((const void*) (stroke1_to_c), (const void*) (stroke2_to_c));
  return _temp_ret;
}


} // namespace base

} // namespace Gsk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gsk/stroke_extra_def_impl.hpp>)
#include <gsk/stroke_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gsk/stroke_extra_impl.hpp>)
#include <gsk/stroke_extra_impl.hpp>
#endif
#endif

#endif
