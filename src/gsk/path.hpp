// AUTO-GENERATED

#ifndef _GI_GSK_PATH_HPP_
#define _GI_GSK_PATH_HPP_


namespace gi {

namespace repository {

namespace Gsk {

class PathPoint;
class PathPoint_Ref;
class Path_Ref;
class Stroke;
class Stroke_Ref;

class Path;

namespace base {


#define GI_GSK_PATH_BASE base::PathBase
class PathBase : public gi::detail::GBoxedWrapperBase<PathBase, ::GskPath>
{
typedef gi::detail::GBoxedWrapperBase<PathBase, ::GskPath> super_type;
public:

PathBase (std::nullptr_t = nullptr) : super_type() {}

static GType get_type_ () G_GNUC_CONST { return gsk_path_get_type(); } 

// gboolean gsk_path_equal (const GskPath* path1 /*none*/, const GskPath* path2 /*none*/);
// gboolean gsk_path_equal (const ::GskPath* path1 /*none*/, const ::GskPath* path2 /*none*/);
GI_INLINE_DECL bool equal (const Gsk::Path_Ref path2) const noexcept;

// gboolean gsk_path_foreach (GskPath* self /*none*/, GskPathForeachFlags flags, GskPathForeachFunc func /*none*/, gpointer user_data);
// gboolean gsk_path_foreach (::GskPath* self /*none*/, ::GskPathForeachFlags flags,  func /*none*/, void* user_data);
// SKIP; func type  not supported

// gboolean gsk_path_foreach_intersection (GskPath* path1 /*none*/, GskPath* path2 /*none,nullable*/, GskPathIntersectionFunc func /*none*/, gpointer user_data);
// gboolean gsk_path_foreach_intersection (::GskPath* path1 /*none*/, ::GskPath* path2 /*none,nullable*/, Gsk::PathIntersectionFunc::cfunction_type func /*none*/, void* user_data);
GI_INLINE_DECL bool foreach_intersection (Gsk::Path_Ref path2, Gsk::PathIntersectionFunc func) noexcept;
GI_INLINE_DECL bool foreach_intersection (Gsk::PathIntersectionFunc func) noexcept;

// gboolean gsk_path_get_bounds (GskPath* self /*none*/, graphene_rect_t* bounds /*none,out,ca*/);
// gboolean gsk_path_get_bounds (::GskPath* self /*none*/, ::graphene_rect_t* bounds /*none,out,ca*/);
GI_INLINE_DECL bool get_bounds (Graphene::Rect & bounds) noexcept;
GI_INLINE_DECL std::tuple<bool, Graphene::Rect> get_bounds () noexcept;

// gboolean gsk_path_get_closest_point (GskPath* self /*none*/, const graphene_point_t* point /*none*/, float threshold, GskPathPoint* result /*none,out,ca*/, float* distance);
// gboolean gsk_path_get_closest_point (::GskPath* self /*none*/, const ::graphene_point_t* point /*none*/, gfloat threshold, ::GskPathPoint* result /*none,out,ca*/, gfloat* distance);
GI_INLINE_DECL bool get_closest_point (const Graphene::Point_Ref point, gfloat threshold, Gsk::PathPoint & result, gfloat * distance) noexcept;
GI_INLINE_DECL std::tuple<bool, Gsk::PathPoint, gfloat> get_closest_point (const Graphene::Point_Ref point, gfloat threshold) noexcept;

// gboolean gsk_path_get_end_point (GskPath* self /*none*/, GskPathPoint* result /*none,out,ca*/);
// gboolean gsk_path_get_end_point (::GskPath* self /*none*/, ::GskPathPoint* result /*none,out,ca*/);
GI_INLINE_DECL bool get_end_point (Gsk::PathPoint & result) noexcept;
GI_INLINE_DECL std::tuple<bool, Gsk::PathPoint> get_end_point () noexcept;

// gboolean gsk_path_get_next (GskPath* self /*none*/, GskPathPoint* point /*full,inout*/);
// gboolean gsk_path_get_next (::GskPath* self /*none*/, ::GskPathPoint** point /*full,inout*/);
// SKIP; inconsistent point inout pointer depth (1 vs 2)

// gboolean gsk_path_get_previous (GskPath* self /*none*/, GskPathPoint* point /*full,inout*/);
// gboolean gsk_path_get_previous (::GskPath* self /*none*/, ::GskPathPoint** point /*full,inout*/);
// SKIP; inconsistent point inout pointer depth (1 vs 2)

// gboolean gsk_path_get_start_point (GskPath* self /*none*/, GskPathPoint* result /*none,out,ca*/);
// gboolean gsk_path_get_start_point (::GskPath* self /*none*/, ::GskPathPoint* result /*none,out,ca*/);
GI_INLINE_DECL bool get_start_point (Gsk::PathPoint & result) noexcept;
GI_INLINE_DECL std::tuple<bool, Gsk::PathPoint> get_start_point () noexcept;

// gboolean gsk_path_get_stroke_bounds (GskPath* self /*none*/, const GskStroke* stroke /*none*/, graphene_rect_t* bounds /*none,out,ca*/);
// gboolean gsk_path_get_stroke_bounds (::GskPath* self /*none*/, const ::GskStroke* stroke /*none*/, ::graphene_rect_t* bounds /*none,out,ca*/);
GI_INLINE_DECL bool get_stroke_bounds (const Gsk::Stroke_Ref stroke, Graphene::Rect & bounds) noexcept;
GI_INLINE_DECL std::tuple<bool, Graphene::Rect> get_stroke_bounds (const Gsk::Stroke_Ref stroke) noexcept;

// gboolean gsk_path_get_tight_bounds (GskPath* self /*none*/, graphene_rect_t* bounds /*none,out,ca*/);
// gboolean gsk_path_get_tight_bounds (::GskPath* self /*none*/, ::graphene_rect_t* bounds /*none,out,ca*/);
GI_INLINE_DECL bool get_tight_bounds (Graphene::Rect & bounds) noexcept;
GI_INLINE_DECL std::tuple<bool, Graphene::Rect> get_tight_bounds () noexcept;

// gboolean gsk_path_in_fill (GskPath* self /*none*/, const graphene_point_t* point /*none*/, GskFillRule fill_rule);
// gboolean gsk_path_in_fill (::GskPath* self /*none*/, const ::graphene_point_t* point /*none*/, ::GskFillRule fill_rule);
GI_INLINE_DECL bool in_fill (const Graphene::Point_Ref point, Gsk::FillRule fill_rule) noexcept;

// gboolean gsk_path_is_closed (GskPath* self /*none*/);
// gboolean gsk_path_is_closed (::GskPath* self /*none*/);
GI_INLINE_DECL bool is_closed () noexcept;

// gboolean gsk_path_is_empty (GskPath* self /*none*/);
// gboolean gsk_path_is_empty (::GskPath* self /*none*/);
GI_INLINE_DECL bool is_empty () noexcept;

// void gsk_path_print (GskPath* self /*none*/, GString* string /*none*/);
// void gsk_path_print (::GskPath* self /*none*/, ::GString* string /*none*/);
GI_INLINE_DECL void print (GLib::String_Ref string) noexcept;

// GskPath* /*full*/ gsk_path_ref (GskPath* self /*none*/);
// ::GskPath* /*full*/ gsk_path_ref (::GskPath* self /*none*/);
// IGNORE; marked ignore

// void gsk_path_to_cairo (GskPath* self /*none*/, cairo_t* cr /*none*/);
// void gsk_path_to_cairo (::GskPath* self /*none*/, ::cairo_t* cr /*none*/);
GI_INLINE_DECL void to_cairo (cairo::Context_Ref cr) noexcept;

// char* /*full*/ gsk_path_to_string (GskPath* self /*none*/);
// char* /*full*/ gsk_path_to_string (::GskPath* self /*none*/);
GI_INLINE_DECL gi::cstring to_string () noexcept;

// void gsk_path_unref (GskPath* self /*none*/);
// void gsk_path_unref (::GskPath* self /*none*/);
// IGNORE; marked ignore

// GskPath* /*full,nullable*/ gsk_path_parse (const char* string /*none*/);
// ::GskPath* /*full,nullable*/ gsk_path_parse (const char* string /*none*/);
static GI_INLINE_DECL Gsk::Path parse (const gi::cstring_v string) noexcept;

}; // class

} // namespace base

} // namespace Gsk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gsk/path_extra_def.hpp>)
#include <gsk/path_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gsk/path_extra.hpp>)
#include <gsk/path_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gsk {

class Path_Ref;

class Path : public gi::detail::GBoxedWrapper<Path, ::GskPath, GI_GSK_PATH_BASE, Path_Ref>
{ typedef gi::detail::GBoxedWrapper<Path, ::GskPath, GI_GSK_PATH_BASE, Path_Ref> super_type; using super_type::super_type; };


class Path_Ref : public gi::detail::GBoxedRefWrapper<Path, ::GskPath, GI_GSK_PATH_BASE>
{ typedef gi::detail::GBoxedRefWrapper<Path, ::GskPath, GI_GSK_PATH_BASE> super_type; using super_type::super_type; };

} // namespace Gsk

template<> struct declare_cpptype_of<::GskPath>
{ typedef Gsk::Path type; }; 

} // namespace repository

} // namespace gi

#endif
