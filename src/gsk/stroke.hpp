// AUTO-GENERATED

#ifndef _GI_GSK_STROKE_HPP_
#define _GI_GSK_STROKE_HPP_


namespace gi {

namespace repository {

namespace Gsk {

class Stroke_Ref;

class Stroke;

namespace base {


#define GI_GSK_STROKE_BASE base::StrokeBase
class StrokeBase : public gi::detail::GBoxedWrapperBase<StrokeBase, ::GskStroke>
{
typedef gi::detail::GBoxedWrapperBase<StrokeBase, ::GskStroke> super_type;
public:

StrokeBase (std::nullptr_t = nullptr) : super_type() {}

static GType get_type_ () G_GNUC_CONST { return gsk_stroke_get_type(); } 

// GskStroke* /*full*/ gsk_stroke_new (float line_width);
// ::GskStroke* /*full*/ gsk_stroke_new (gfloat line_width);
static GI_INLINE_DECL Gsk::Stroke new_ (gfloat line_width) noexcept;

// GskStroke* /*full*/ gsk_stroke_copy (const GskStroke* other /*none*/);
// ::GskStroke* /*full*/ gsk_stroke_copy (const ::GskStroke* other /*none*/);
GI_INLINE_DECL Gsk::Stroke copy () const noexcept;

// void gsk_stroke_free (GskStroke* self /*none*/);
// void gsk_stroke_free (::GskStroke* self /*none*/);
// IGNORE; marked ignore

// const float* /*none,nullable*/ gsk_stroke_get_dash (const GskStroke* self /*none*/, gsize* n_dash);
// const gfloat* /*none,nullable*/ gsk_stroke_get_dash (const ::GskStroke* self /*none*/, gsize* n_dash);
GI_INLINE_DECL gi::Collection<gi::DSpan, gfloat, gi::transfer_none_t> get_dash () const noexcept;

// float gsk_stroke_get_dash_offset (const GskStroke* self /*none*/);
// gfloat gsk_stroke_get_dash_offset (const ::GskStroke* self /*none*/);
GI_INLINE_DECL gfloat get_dash_offset () const noexcept;

// GskLineCap gsk_stroke_get_line_cap (const GskStroke* self /*none*/);
// ::GskLineCap gsk_stroke_get_line_cap (const ::GskStroke* self /*none*/);
GI_INLINE_DECL Gsk::LineCap get_line_cap () const noexcept;

// GskLineJoin gsk_stroke_get_line_join (const GskStroke* self /*none*/);
// ::GskLineJoin gsk_stroke_get_line_join (const ::GskStroke* self /*none*/);
GI_INLINE_DECL Gsk::LineJoin get_line_join () const noexcept;

// float gsk_stroke_get_line_width (const GskStroke* self /*none*/);
// gfloat gsk_stroke_get_line_width (const ::GskStroke* self /*none*/);
GI_INLINE_DECL gfloat get_line_width () const noexcept;

// float gsk_stroke_get_miter_limit (const GskStroke* self /*none*/);
// gfloat gsk_stroke_get_miter_limit (const ::GskStroke* self /*none*/);
GI_INLINE_DECL gfloat get_miter_limit () const noexcept;

// void gsk_stroke_set_dash (GskStroke* self /*none*/, const float* dash /*none,nullable*/, gsize n_dash);
// void gsk_stroke_set_dash (::GskStroke* self /*none*/, const gfloat* dash /*none,nullable*/, gsize n_dash);
GI_INLINE_DECL void set_dash (const gfloat * dash, gsize n_dash) noexcept;

// void gsk_stroke_set_dash_offset (GskStroke* self /*none*/, float offset);
// void gsk_stroke_set_dash_offset (::GskStroke* self /*none*/, gfloat offset);
GI_INLINE_DECL void set_dash_offset (gfloat offset) noexcept;

// void gsk_stroke_set_line_cap (GskStroke* self /*none*/, GskLineCap line_cap);
// void gsk_stroke_set_line_cap (::GskStroke* self /*none*/, ::GskLineCap line_cap);
GI_INLINE_DECL void set_line_cap (Gsk::LineCap line_cap) noexcept;

// void gsk_stroke_set_line_join (GskStroke* self /*none*/, GskLineJoin line_join);
// void gsk_stroke_set_line_join (::GskStroke* self /*none*/, ::GskLineJoin line_join);
GI_INLINE_DECL void set_line_join (Gsk::LineJoin line_join) noexcept;

// void gsk_stroke_set_line_width (GskStroke* self /*none*/, float line_width);
// void gsk_stroke_set_line_width (::GskStroke* self /*none*/, gfloat line_width);
GI_INLINE_DECL void set_line_width (gfloat line_width) noexcept;

// void gsk_stroke_set_miter_limit (GskStroke* self /*none*/, float limit);
// void gsk_stroke_set_miter_limit (::GskStroke* self /*none*/, gfloat limit);
GI_INLINE_DECL void set_miter_limit (gfloat limit) noexcept;

// void gsk_stroke_to_cairo (const GskStroke* self /*none*/, cairo_t* cr /*none*/);
// void gsk_stroke_to_cairo (const ::GskStroke* self /*none*/, ::cairo_t* cr /*none*/);
GI_INLINE_DECL void to_cairo (cairo::Context_Ref cr) const noexcept;

// gboolean gsk_stroke_equal (gconstpointer stroke1, gconstpointer stroke2);
// gboolean gsk_stroke_equal (const void* stroke1, const void* stroke2);
static GI_INLINE_DECL bool equal (const void* stroke1, const void* stroke2) noexcept;

}; // class

} // namespace base

} // namespace Gsk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gsk/stroke_extra_def.hpp>)
#include <gsk/stroke_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gsk/stroke_extra.hpp>)
#include <gsk/stroke_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gsk {

class Stroke_Ref;

class Stroke : public gi::detail::GBoxedWrapper<Stroke, ::GskStroke, GI_GSK_STROKE_BASE, Stroke_Ref>
{ typedef gi::detail::GBoxedWrapper<Stroke, ::GskStroke, GI_GSK_STROKE_BASE, Stroke_Ref> super_type; using super_type::super_type; };


class Stroke_Ref : public gi::detail::GBoxedRefWrapper<Stroke, ::GskStroke, GI_GSK_STROKE_BASE>
{ typedef gi::detail::GBoxedRefWrapper<Stroke, ::GskStroke, GI_GSK_STROKE_BASE> super_type; using super_type::super_type; };

} // namespace Gsk

template<> struct declare_cpptype_of<::GskStroke>
{ typedef Gsk::Stroke type; }; 

} // namespace repository

} // namespace gi

#endif
