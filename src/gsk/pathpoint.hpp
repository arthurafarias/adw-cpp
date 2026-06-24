// AUTO-GENERATED

#ifndef _GI_GSK_PATHPOINT_HPP_
#define _GI_GSK_PATHPOINT_HPP_


namespace gi {

namespace repository {

namespace Gsk {

class Path;
class PathMeasure;
class PathMeasure_Ref;
class PathPoint_Ref;
class Path_Ref;

class PathPoint;

namespace base {


#define GI_GSK_PATHPOINT_BASE base::PathPointBase
class PathPointBase : public gi::detail::GBoxedWrapperBase<PathPointBase, ::GskPathPoint>
{
typedef gi::detail::GBoxedWrapperBase<PathPointBase, ::GskPathPoint> super_type;
public:

PathPointBase (std::nullptr_t = nullptr) : super_type() {}

static GType get_type_ () G_GNUC_CONST { return gsk_path_point_get_type(); } 

// int gsk_path_point_compare (const GskPathPoint* point1 /*none*/, const GskPathPoint* point2 /*none*/);
// gint gsk_path_point_compare (const ::GskPathPoint* point1 /*none*/, const ::GskPathPoint* point2 /*none*/);
GI_INLINE_DECL gint compare (const Gsk::PathPoint_Ref point2) const noexcept;

// GskPathPoint* /*full*/ gsk_path_point_copy (GskPathPoint* point /*none*/);
// ::GskPathPoint* /*full*/ gsk_path_point_copy (::GskPathPoint* point /*none*/);
GI_INLINE_DECL Gsk::PathPoint copy () noexcept;

// gboolean gsk_path_point_equal (const GskPathPoint* point1 /*none*/, const GskPathPoint* point2 /*none*/);
// gboolean gsk_path_point_equal (const ::GskPathPoint* point1 /*none*/, const ::GskPathPoint* point2 /*none*/);
GI_INLINE_DECL bool equal (const Gsk::PathPoint_Ref point2) const noexcept;

// void gsk_path_point_free (GskPathPoint* point /*none*/);
// void gsk_path_point_free (::GskPathPoint* point /*none*/);
// IGNORE; marked ignore

// float gsk_path_point_get_curvature (const GskPathPoint* point /*none*/, GskPath* path /*none*/, GskPathDirection direction, graphene_point_t* center /*none,out,nullable,ca*/);
// gfloat gsk_path_point_get_curvature (const ::GskPathPoint* point /*none*/, ::GskPath* path /*none*/, ::GskPathDirection direction, ::graphene_point_t* center /*none,out,nullable,ca*/);
GI_INLINE_DECL gfloat get_curvature (Gsk::Path_Ref path, Gsk::PathDirection direction, Graphene::Point & center) const noexcept;
GI_INLINE_DECL std::tuple<gfloat, Graphene::Point> get_curvature (Gsk::Path_Ref path, Gsk::PathDirection direction) const noexcept;

// float gsk_path_point_get_distance (const GskPathPoint* point /*none*/, GskPathMeasure* measure /*none*/);
// gfloat gsk_path_point_get_distance (const ::GskPathPoint* point /*none*/, ::GskPathMeasure* measure /*none*/);
GI_INLINE_DECL gfloat get_distance (Gsk::PathMeasure_Ref measure) const noexcept;

// void gsk_path_point_get_position (const GskPathPoint* point /*none*/, GskPath* path /*none*/, graphene_point_t* position /*none,out,ca*/);
// void gsk_path_point_get_position (const ::GskPathPoint* point /*none*/, ::GskPath* path /*none*/, ::graphene_point_t* position /*none,out,ca*/);
GI_INLINE_DECL void get_position (Gsk::Path_Ref path, Graphene::Point & position) const noexcept;
GI_INLINE_DECL Graphene::Point get_position (Gsk::Path_Ref path) const noexcept;

// float gsk_path_point_get_rotation (const GskPathPoint* point /*none*/, GskPath* path /*none*/, GskPathDirection direction);
// gfloat gsk_path_point_get_rotation (const ::GskPathPoint* point /*none*/, ::GskPath* path /*none*/, ::GskPathDirection direction);
GI_INLINE_DECL gfloat get_rotation (Gsk::Path_Ref path, Gsk::PathDirection direction) const noexcept;

// void gsk_path_point_get_tangent (const GskPathPoint* point /*none*/, GskPath* path /*none*/, GskPathDirection direction, graphene_vec2_t* tangent /*none,out,ca*/);
// void gsk_path_point_get_tangent (const ::GskPathPoint* point /*none*/, ::GskPath* path /*none*/, ::GskPathDirection direction, ::graphene_vec2_t* tangent /*none,out,ca*/);
GI_INLINE_DECL void get_tangent (Gsk::Path_Ref path, Gsk::PathDirection direction, Graphene::Vec2 & tangent) const noexcept;
GI_INLINE_DECL Graphene::Vec2 get_tangent (Gsk::Path_Ref path, Gsk::PathDirection direction) const noexcept;

}; // class

} // namespace base

} // namespace Gsk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gsk/pathpoint_extra_def.hpp>)
#include <gsk/pathpoint_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gsk/pathpoint_extra.hpp>)
#include <gsk/pathpoint_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gsk {

class PathPoint_Ref;

class PathPoint : public gi::detail::GBoxedWrapper<PathPoint, ::GskPathPoint, GI_GSK_PATHPOINT_BASE, PathPoint_Ref>
{ typedef gi::detail::GBoxedWrapper<PathPoint, ::GskPathPoint, GI_GSK_PATHPOINT_BASE, PathPoint_Ref> super_type; using super_type::super_type; };


class PathPoint_Ref : public gi::detail::GBoxedRefWrapper<PathPoint, ::GskPathPoint, GI_GSK_PATHPOINT_BASE>
{ typedef gi::detail::GBoxedRefWrapper<PathPoint, ::GskPathPoint, GI_GSK_PATHPOINT_BASE> super_type; using super_type::super_type; };

} // namespace Gsk

template<> struct declare_cpptype_of<::GskPathPoint>
{ typedef Gsk::PathPoint type; }; 

} // namespace repository

} // namespace gi

#endif
