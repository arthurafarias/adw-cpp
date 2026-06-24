// AUTO-GENERATED

#ifndef _GI_GSK_PATHBUILDER_HPP_
#define _GI_GSK_PATHBUILDER_HPP_


namespace gi {

namespace repository {

namespace Gsk {

class Path;
class PathBuilder_Ref;
class PathPoint;
class PathPoint_Ref;
class Path_Ref;
class RoundedRect;
class RoundedRect_Ref;

class PathBuilder;

namespace base {


#define GI_GSK_PATHBUILDER_BASE base::PathBuilderBase
class PathBuilderBase : public gi::detail::GBoxedWrapperBase<PathBuilderBase, ::GskPathBuilder>
{
typedef gi::detail::GBoxedWrapperBase<PathBuilderBase, ::GskPathBuilder> super_type;
public:

PathBuilderBase (std::nullptr_t = nullptr) : super_type() {}

static GType get_type_ () G_GNUC_CONST { return gsk_path_builder_get_type(); } 

// GskPathBuilder* /*full*/ gsk_path_builder_new ();
// ::GskPathBuilder* /*full*/ gsk_path_builder_new ();
static GI_INLINE_DECL Gsk::PathBuilder new_ () noexcept;

// void gsk_path_builder_add_cairo_path (GskPathBuilder* self /*none*/, const cairo_path_t* path /*none*/);
// void gsk_path_builder_add_cairo_path (::GskPathBuilder* self /*none*/, const  path /*none*/);
// SKIP; path type  not supported

// void gsk_path_builder_add_circle (GskPathBuilder* self /*none*/, const graphene_point_t* center /*none*/, float radius);
// void gsk_path_builder_add_circle (::GskPathBuilder* self /*none*/, const ::graphene_point_t* center /*none*/, gfloat radius);
GI_INLINE_DECL void add_circle (const Graphene::Point_Ref center, gfloat radius) noexcept;

// void gsk_path_builder_add_layout (GskPathBuilder* self /*none*/, PangoLayout* layout /*none*/);
// void gsk_path_builder_add_layout (::GskPathBuilder* self /*none*/, ::PangoLayout* layout /*none*/);
GI_INLINE_DECL void add_layout (Pango::Layout layout) noexcept;

// void gsk_path_builder_add_path (GskPathBuilder* self /*none*/, GskPath* path /*none*/);
// void gsk_path_builder_add_path (::GskPathBuilder* self /*none*/, ::GskPath* path /*none*/);
GI_INLINE_DECL void add_path (Gsk::Path_Ref path) noexcept;

// void gsk_path_builder_add_rect (GskPathBuilder* self /*none*/, const graphene_rect_t* rect /*none*/);
// void gsk_path_builder_add_rect (::GskPathBuilder* self /*none*/, const ::graphene_rect_t* rect /*none*/);
GI_INLINE_DECL void add_rect (const Graphene::Rect_Ref rect) noexcept;

// void gsk_path_builder_add_reverse_path (GskPathBuilder* self /*none*/, GskPath* path /*none*/);
// void gsk_path_builder_add_reverse_path (::GskPathBuilder* self /*none*/, ::GskPath* path /*none*/);
GI_INLINE_DECL void add_reverse_path (Gsk::Path_Ref path) noexcept;

// void gsk_path_builder_add_rounded_rect (GskPathBuilder* self /*none*/, const GskRoundedRect* rect /*none*/);
// void gsk_path_builder_add_rounded_rect (::GskPathBuilder* self /*none*/, const ::GskRoundedRect* rect /*none*/);
GI_INLINE_DECL void add_rounded_rect (const Gsk::RoundedRect_Ref rect) noexcept;

// void gsk_path_builder_add_segment (GskPathBuilder* self /*none*/, GskPath* path /*none*/, const GskPathPoint* start /*none*/, const GskPathPoint* end /*none*/);
// void gsk_path_builder_add_segment (::GskPathBuilder* self /*none*/, ::GskPath* path /*none*/, const ::GskPathPoint* start /*none*/, const ::GskPathPoint* end /*none*/);
GI_INLINE_DECL void add_segment (Gsk::Path_Ref path, const Gsk::PathPoint_Ref start, const Gsk::PathPoint_Ref end) noexcept;

// void gsk_path_builder_arc_to (GskPathBuilder* self /*none*/, float x1, float y1, float x2, float y2);
// void gsk_path_builder_arc_to (::GskPathBuilder* self /*none*/, gfloat x1, gfloat y1, gfloat x2, gfloat y2);
GI_INLINE_DECL void arc_to (gfloat x1, gfloat y1, gfloat x2, gfloat y2) noexcept;

// void gsk_path_builder_close (GskPathBuilder* self /*none*/);
// void gsk_path_builder_close (::GskPathBuilder* self /*none*/);
GI_INLINE_DECL void close () noexcept;

// void gsk_path_builder_conic_to (GskPathBuilder* self /*none*/, float x1, float y1, float x2, float y2, float weight);
// void gsk_path_builder_conic_to (::GskPathBuilder* self /*none*/, gfloat x1, gfloat y1, gfloat x2, gfloat y2, gfloat weight);
GI_INLINE_DECL void conic_to (gfloat x1, gfloat y1, gfloat x2, gfloat y2, gfloat weight) noexcept;

// void gsk_path_builder_cubic_to (GskPathBuilder* self /*none*/, float x1, float y1, float x2, float y2, float x3, float y3);
// void gsk_path_builder_cubic_to (::GskPathBuilder* self /*none*/, gfloat x1, gfloat y1, gfloat x2, gfloat y2, gfloat x3, gfloat y3);
GI_INLINE_DECL void cubic_to (gfloat x1, gfloat y1, gfloat x2, gfloat y2, gfloat x3, gfloat y3) noexcept;

// GskPath* /*full*/ gsk_path_builder_free_to_path (GskPathBuilder* self /*full*/);
// ::GskPath* /*full*/ gsk_path_builder_free_to_path (::GskPathBuilder* self /*full*/);
GI_INLINE_DECL Gsk::Path free_to_path () noexcept;

// const graphene_point_t* /*none*/ gsk_path_builder_get_current_point (GskPathBuilder* self /*none*/);
// const ::graphene_point_t* /*none*/ gsk_path_builder_get_current_point (::GskPathBuilder* self /*none*/);
GI_INLINE_DECL Graphene::Point_Ref get_current_point () noexcept;

// void gsk_path_builder_html_arc_to (GskPathBuilder* self /*none*/, float x1, float y1, float x2, float y2, float radius);
// void gsk_path_builder_html_arc_to (::GskPathBuilder* self /*none*/, gfloat x1, gfloat y1, gfloat x2, gfloat y2, gfloat radius);
GI_INLINE_DECL void html_arc_to (gfloat x1, gfloat y1, gfloat x2, gfloat y2, gfloat radius) noexcept;

// void gsk_path_builder_line_to (GskPathBuilder* self /*none*/, float x, float y);
// void gsk_path_builder_line_to (::GskPathBuilder* self /*none*/, gfloat x, gfloat y);
GI_INLINE_DECL void line_to (gfloat x, gfloat y) noexcept;

// void gsk_path_builder_move_to (GskPathBuilder* self /*none*/, float x, float y);
// void gsk_path_builder_move_to (::GskPathBuilder* self /*none*/, gfloat x, gfloat y);
GI_INLINE_DECL void move_to (gfloat x, gfloat y) noexcept;

// void gsk_path_builder_quad_to (GskPathBuilder* self /*none*/, float x1, float y1, float x2, float y2);
// void gsk_path_builder_quad_to (::GskPathBuilder* self /*none*/, gfloat x1, gfloat y1, gfloat x2, gfloat y2);
GI_INLINE_DECL void quad_to (gfloat x1, gfloat y1, gfloat x2, gfloat y2) noexcept;

// GskPathBuilder* /*none*/ gsk_path_builder_ref (GskPathBuilder* self /*none*/);
// ::GskPathBuilder* /*none*/ gsk_path_builder_ref (::GskPathBuilder* self /*none*/);
// IGNORE; marked ignore

// void gsk_path_builder_rel_arc_to (GskPathBuilder* self /*none*/, float x1, float y1, float x2, float y2);
// void gsk_path_builder_rel_arc_to (::GskPathBuilder* self /*none*/, gfloat x1, gfloat y1, gfloat x2, gfloat y2);
GI_INLINE_DECL void rel_arc_to (gfloat x1, gfloat y1, gfloat x2, gfloat y2) noexcept;

// void gsk_path_builder_rel_conic_to (GskPathBuilder* self /*none*/, float x1, float y1, float x2, float y2, float weight);
// void gsk_path_builder_rel_conic_to (::GskPathBuilder* self /*none*/, gfloat x1, gfloat y1, gfloat x2, gfloat y2, gfloat weight);
GI_INLINE_DECL void rel_conic_to (gfloat x1, gfloat y1, gfloat x2, gfloat y2, gfloat weight) noexcept;

// void gsk_path_builder_rel_cubic_to (GskPathBuilder* self /*none*/, float x1, float y1, float x2, float y2, float x3, float y3);
// void gsk_path_builder_rel_cubic_to (::GskPathBuilder* self /*none*/, gfloat x1, gfloat y1, gfloat x2, gfloat y2, gfloat x3, gfloat y3);
GI_INLINE_DECL void rel_cubic_to (gfloat x1, gfloat y1, gfloat x2, gfloat y2, gfloat x3, gfloat y3) noexcept;

// void gsk_path_builder_rel_html_arc_to (GskPathBuilder* self /*none*/, float x1, float y1, float x2, float y2, float radius);
// void gsk_path_builder_rel_html_arc_to (::GskPathBuilder* self /*none*/, gfloat x1, gfloat y1, gfloat x2, gfloat y2, gfloat radius);
GI_INLINE_DECL void rel_html_arc_to (gfloat x1, gfloat y1, gfloat x2, gfloat y2, gfloat radius) noexcept;

// void gsk_path_builder_rel_line_to (GskPathBuilder* self /*none*/, float x, float y);
// void gsk_path_builder_rel_line_to (::GskPathBuilder* self /*none*/, gfloat x, gfloat y);
GI_INLINE_DECL void rel_line_to (gfloat x, gfloat y) noexcept;

// void gsk_path_builder_rel_move_to (GskPathBuilder* self /*none*/, float x, float y);
// void gsk_path_builder_rel_move_to (::GskPathBuilder* self /*none*/, gfloat x, gfloat y);
GI_INLINE_DECL void rel_move_to (gfloat x, gfloat y) noexcept;

// void gsk_path_builder_rel_quad_to (GskPathBuilder* self /*none*/, float x1, float y1, float x2, float y2);
// void gsk_path_builder_rel_quad_to (::GskPathBuilder* self /*none*/, gfloat x1, gfloat y1, gfloat x2, gfloat y2);
GI_INLINE_DECL void rel_quad_to (gfloat x1, gfloat y1, gfloat x2, gfloat y2) noexcept;

// void gsk_path_builder_rel_svg_arc_to (GskPathBuilder* self /*none*/, float rx, float ry, float x_axis_rotation, gboolean large_arc, gboolean positive_sweep, float x, float y);
// void gsk_path_builder_rel_svg_arc_to (::GskPathBuilder* self /*none*/, gfloat rx, gfloat ry, gfloat x_axis_rotation, gboolean large_arc, gboolean positive_sweep, gfloat x, gfloat y);
GI_INLINE_DECL void rel_svg_arc_to (gfloat rx, gfloat ry, gfloat x_axis_rotation, gboolean large_arc, gboolean positive_sweep, gfloat x, gfloat y) noexcept;

// void gsk_path_builder_svg_arc_to (GskPathBuilder* self /*none*/, float rx, float ry, float x_axis_rotation, gboolean large_arc, gboolean positive_sweep, float x, float y);
// void gsk_path_builder_svg_arc_to (::GskPathBuilder* self /*none*/, gfloat rx, gfloat ry, gfloat x_axis_rotation, gboolean large_arc, gboolean positive_sweep, gfloat x, gfloat y);
GI_INLINE_DECL void svg_arc_to (gfloat rx, gfloat ry, gfloat x_axis_rotation, gboolean large_arc, gboolean positive_sweep, gfloat x, gfloat y) noexcept;

// GskPath* /*full*/ gsk_path_builder_to_path (GskPathBuilder* self /*none*/);
// ::GskPath* /*full*/ gsk_path_builder_to_path (::GskPathBuilder* self /*none*/);
GI_INLINE_DECL Gsk::Path to_path () noexcept;

// void gsk_path_builder_unref (GskPathBuilder* self /*none*/);
// void gsk_path_builder_unref (::GskPathBuilder* self /*none*/);
// IGNORE; marked ignore

}; // class

} // namespace base

} // namespace Gsk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gsk/pathbuilder_extra_def.hpp>)
#include <gsk/pathbuilder_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gsk/pathbuilder_extra.hpp>)
#include <gsk/pathbuilder_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gsk {

class PathBuilder_Ref;

class PathBuilder : public gi::detail::GBoxedWrapper<PathBuilder, ::GskPathBuilder, GI_GSK_PATHBUILDER_BASE, PathBuilder_Ref>
{ typedef gi::detail::GBoxedWrapper<PathBuilder, ::GskPathBuilder, GI_GSK_PATHBUILDER_BASE, PathBuilder_Ref> super_type; using super_type::super_type; };


class PathBuilder_Ref : public gi::detail::GBoxedRefWrapper<PathBuilder, ::GskPathBuilder, GI_GSK_PATHBUILDER_BASE>
{ typedef gi::detail::GBoxedRefWrapper<PathBuilder, ::GskPathBuilder, GI_GSK_PATHBUILDER_BASE> super_type; using super_type::super_type; };

} // namespace Gsk

template<> struct declare_cpptype_of<::GskPathBuilder>
{ typedef Gsk::PathBuilder type; }; 

} // namespace repository

} // namespace gi

#endif
