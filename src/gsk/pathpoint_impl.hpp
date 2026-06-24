// AUTO-GENERATED

#ifndef _GI_GSK_PATHPOINT_IMPL_HPP_
#define _GI_GSK_PATHPOINT_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gsk {

namespace base {

// int gsk_path_point_compare (const GskPathPoint* point1 /*none*/, const GskPathPoint* point2 /*none*/);
// gint gsk_path_point_compare (const ::GskPathPoint* point1 /*none*/, const ::GskPathPoint* point2 /*none*/);
gint base::PathPointBase::compare (const Gsk::PathPoint_Ref point2) const noexcept
{
  typedef gint (*call_wrap_t) (const ::GskPathPoint* point1, const ::GskPathPoint* point2);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gsk_path_point_compare;
  auto point2_to_c = gi::unwrap (point2, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const ::GskPathPoint*) (gobj_()), (const ::GskPathPoint*) (point2_to_c));
  return _temp_ret;
}

// GskPathPoint* /*full*/ gsk_path_point_copy (GskPathPoint* point /*none*/);
// ::GskPathPoint* /*full*/ gsk_path_point_copy (::GskPathPoint* point /*none*/);
Gsk::PathPoint base::PathPointBase::copy () noexcept
{
  typedef ::GskPathPoint* (*call_wrap_t) (::GskPathPoint* point);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gsk_path_point_copy;
  auto _temp_ret = call_wrap_v ((::GskPathPoint*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// gboolean gsk_path_point_equal (const GskPathPoint* point1 /*none*/, const GskPathPoint* point2 /*none*/);
// gboolean gsk_path_point_equal (const ::GskPathPoint* point1 /*none*/, const ::GskPathPoint* point2 /*none*/);
bool base::PathPointBase::equal (const Gsk::PathPoint_Ref point2) const noexcept
{
  typedef gboolean (*call_wrap_t) (const ::GskPathPoint* point1, const ::GskPathPoint* point2);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gsk_path_point_equal;
  auto point2_to_c = gi::unwrap (point2, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const ::GskPathPoint*) (gobj_()), (const ::GskPathPoint*) (point2_to_c));
  return _temp_ret;
}

// void gsk_path_point_free (GskPathPoint* point /*none*/);
// void gsk_path_point_free (::GskPathPoint* point /*none*/);
// IGNORE; marked ignore

// float gsk_path_point_get_curvature (const GskPathPoint* point /*none*/, GskPath* path /*none*/, GskPathDirection direction, graphene_point_t* center /*none,out,nullable,ca*/);
// gfloat gsk_path_point_get_curvature (const ::GskPathPoint* point /*none*/, ::GskPath* path /*none*/, ::GskPathDirection direction, ::graphene_point_t* center /*none,out,nullable,ca*/);
gfloat base::PathPointBase::get_curvature (Gsk::Path_Ref path, Gsk::PathDirection direction, Graphene::Point & center) const noexcept
{
  typedef gfloat (*call_wrap_t) (const ::GskPathPoint* point, ::GskPath* path, ::GskPathDirection direction, ::graphene_point_t* center);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gsk_path_point_get_curvature;
  detail::allocate(center);
  static_assert(sizeof(::graphene_point_t) == sizeof(*(center).gobj_()), "");
  auto direction_to_c = gi::unwrap (direction);
  auto path_to_c = gi::unwrap (path, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const ::GskPathPoint*) (gobj_()), (::GskPath*) (path_to_c), (::GskPathDirection) (direction_to_c), (::graphene_point_t*) ((::graphene_point_t*) (center).gobj_()));
  return _temp_ret;
}
std::tuple<gfloat, Graphene::Point> base::PathPointBase::get_curvature (Gsk::Path_Ref path, Gsk::PathDirection direction) const noexcept
{
  typedef gfloat (*call_wrap_t) (const ::GskPathPoint* point, ::GskPath* path, ::GskPathDirection direction, ::graphene_point_t* center);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gsk_path_point_get_curvature;
  Graphene::Point center_c;
  auto center = &center_c;
  detail::allocate(*center);
  static_assert(sizeof(::graphene_point_t) == sizeof(*(*center).gobj_()), "");
  auto direction_to_c = gi::unwrap (direction);
  auto path_to_c = gi::unwrap (path, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const ::GskPathPoint*) (gobj_()), (::GskPath*) (path_to_c), (::GskPathDirection) (direction_to_c), (::graphene_point_t*) (center ? (::graphene_point_t*) (*center).gobj_() : nullptr));
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = center_c;
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}

// float gsk_path_point_get_distance (const GskPathPoint* point /*none*/, GskPathMeasure* measure /*none*/);
// gfloat gsk_path_point_get_distance (const ::GskPathPoint* point /*none*/, ::GskPathMeasure* measure /*none*/);
gfloat base::PathPointBase::get_distance (Gsk::PathMeasure_Ref measure) const noexcept
{
  typedef gfloat (*call_wrap_t) (const ::GskPathPoint* point, ::GskPathMeasure* measure);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gsk_path_point_get_distance;
  auto measure_to_c = gi::unwrap (measure, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const ::GskPathPoint*) (gobj_()), (::GskPathMeasure*) (measure_to_c));
  return _temp_ret;
}

// void gsk_path_point_get_position (const GskPathPoint* point /*none*/, GskPath* path /*none*/, graphene_point_t* position /*none,out,ca*/);
// void gsk_path_point_get_position (const ::GskPathPoint* point /*none*/, ::GskPath* path /*none*/, ::graphene_point_t* position /*none,out,ca*/);
void base::PathPointBase::get_position (Gsk::Path_Ref path, Graphene::Point & position) const noexcept
{
  typedef void (*call_wrap_t) (const ::GskPathPoint* point, ::GskPath* path, ::graphene_point_t* position);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gsk_path_point_get_position;
  detail::allocate(position);
  static_assert(sizeof(::graphene_point_t) == sizeof(*(position).gobj_()), "");
  auto path_to_c = gi::unwrap (path, gi::transfer_none);
  call_wrap_v ((const ::GskPathPoint*) (gobj_()), (::GskPath*) (path_to_c), (::graphene_point_t*) ((::graphene_point_t*) (position).gobj_()));
}
Graphene::Point base::PathPointBase::get_position (Gsk::Path_Ref path) const noexcept
{
  typedef void (*call_wrap_t) (const ::GskPathPoint* point, ::GskPath* path, ::graphene_point_t* position);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gsk_path_point_get_position;
  Graphene::Point position_c;
  auto position = &position_c;
  detail::allocate(*position);
  static_assert(sizeof(::graphene_point_t) == sizeof(*(*position).gobj_()), "");
  auto path_to_c = gi::unwrap (path, gi::transfer_none);
  call_wrap_v ((const ::GskPathPoint*) (gobj_()), (::GskPath*) (path_to_c), (::graphene_point_t*) (position ? (::graphene_point_t*) (*position).gobj_() : nullptr));
  return position_c;
}

// float gsk_path_point_get_rotation (const GskPathPoint* point /*none*/, GskPath* path /*none*/, GskPathDirection direction);
// gfloat gsk_path_point_get_rotation (const ::GskPathPoint* point /*none*/, ::GskPath* path /*none*/, ::GskPathDirection direction);
gfloat base::PathPointBase::get_rotation (Gsk::Path_Ref path, Gsk::PathDirection direction) const noexcept
{
  typedef gfloat (*call_wrap_t) (const ::GskPathPoint* point, ::GskPath* path, ::GskPathDirection direction);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gsk_path_point_get_rotation;
  auto direction_to_c = gi::unwrap (direction);
  auto path_to_c = gi::unwrap (path, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const ::GskPathPoint*) (gobj_()), (::GskPath*) (path_to_c), (::GskPathDirection) (direction_to_c));
  return _temp_ret;
}

// void gsk_path_point_get_tangent (const GskPathPoint* point /*none*/, GskPath* path /*none*/, GskPathDirection direction, graphene_vec2_t* tangent /*none,out,ca*/);
// void gsk_path_point_get_tangent (const ::GskPathPoint* point /*none*/, ::GskPath* path /*none*/, ::GskPathDirection direction, ::graphene_vec2_t* tangent /*none,out,ca*/);
void base::PathPointBase::get_tangent (Gsk::Path_Ref path, Gsk::PathDirection direction, Graphene::Vec2 & tangent) const noexcept
{
  typedef void (*call_wrap_t) (const ::GskPathPoint* point, ::GskPath* path, ::GskPathDirection direction, ::graphene_vec2_t* tangent);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gsk_path_point_get_tangent;
  detail::allocate(tangent);
  static_assert(sizeof(::graphene_vec2_t) == sizeof(*(tangent).gobj_()), "");
  auto direction_to_c = gi::unwrap (direction);
  auto path_to_c = gi::unwrap (path, gi::transfer_none);
  call_wrap_v ((const ::GskPathPoint*) (gobj_()), (::GskPath*) (path_to_c), (::GskPathDirection) (direction_to_c), (::graphene_vec2_t*) ((::graphene_vec2_t*) (tangent).gobj_()));
}
Graphene::Vec2 base::PathPointBase::get_tangent (Gsk::Path_Ref path, Gsk::PathDirection direction) const noexcept
{
  typedef void (*call_wrap_t) (const ::GskPathPoint* point, ::GskPath* path, ::GskPathDirection direction, ::graphene_vec2_t* tangent);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gsk_path_point_get_tangent;
  Graphene::Vec2 tangent_c;
  auto tangent = &tangent_c;
  detail::allocate(*tangent);
  static_assert(sizeof(::graphene_vec2_t) == sizeof(*(*tangent).gobj_()), "");
  auto direction_to_c = gi::unwrap (direction);
  auto path_to_c = gi::unwrap (path, gi::transfer_none);
  call_wrap_v ((const ::GskPathPoint*) (gobj_()), (::GskPath*) (path_to_c), (::GskPathDirection) (direction_to_c), (::graphene_vec2_t*) (tangent ? (::graphene_vec2_t*) (*tangent).gobj_() : nullptr));
  return tangent_c;
}


} // namespace base

} // namespace Gsk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gsk/pathpoint_extra_def_impl.hpp>)
#include <gsk/pathpoint_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gsk/pathpoint_extra_impl.hpp>)
#include <gsk/pathpoint_extra_impl.hpp>
#endif
#endif

#endif
