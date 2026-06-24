// AUTO-GENERATED

#ifndef _GI_GSK_PATH_IMPL_HPP_
#define _GI_GSK_PATH_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gsk {

namespace base {

// gboolean gsk_path_equal (const GskPath* path1 /*none*/, const GskPath* path2 /*none*/);
// gboolean gsk_path_equal (const ::GskPath* path1 /*none*/, const ::GskPath* path2 /*none*/);
bool base::PathBase::equal (const Gsk::Path_Ref path2) const noexcept
{
  typedef gboolean (*call_wrap_t) (const ::GskPath* path1, const ::GskPath* path2);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gsk_path_equal;
  auto path2_to_c = gi::unwrap (path2, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const ::GskPath*) (gobj_()), (const ::GskPath*) (path2_to_c));
  return _temp_ret;
}

// gboolean gsk_path_foreach (GskPath* self /*none*/, GskPathForeachFlags flags, GskPathForeachFunc func /*none*/, gpointer user_data);
// gboolean gsk_path_foreach (::GskPath* self /*none*/, ::GskPathForeachFlags flags,  func /*none*/, void* user_data);
// SKIP; func type  not supported

// gboolean gsk_path_foreach_intersection (GskPath* path1 /*none*/, GskPath* path2 /*none,nullable*/, GskPathIntersectionFunc func /*none*/, gpointer user_data);
// gboolean gsk_path_foreach_intersection (::GskPath* path1 /*none*/, ::GskPath* path2 /*none,nullable*/, Gsk::PathIntersectionFunc::cfunction_type func /*none*/, void* user_data);
bool base::PathBase::foreach_intersection (Gsk::Path_Ref path2, Gsk::PathIntersectionFunc func) noexcept
{
  typedef gboolean (*call_wrap_t) (::GskPath* path1, ::GskPath* path2, Gsk::PathIntersectionFunc::cfunction_type func, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gsk_path_foreach_intersection;
  auto func_wrap_ = func ? unwrap (std::move (func), gi::scope_call) : nullptr;
  std::unique_ptr<std::remove_pointer<decltype(func_wrap_)>::type> func_wrap__sp (func_wrap_);
  auto path2_to_c = gi::unwrap (path2, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GskPath*) (gobj_()), (::GskPath*) (path2_to_c), (Gsk::PathIntersectionFunc::cfunction_type) (func_wrap_ ? &func_wrap_->wrapper : nullptr), (void*) (func_wrap_));
  return _temp_ret;
}
bool base::PathBase::foreach_intersection (Gsk::PathIntersectionFunc func) noexcept
{
  typedef gboolean (*call_wrap_t) (::GskPath* path1, ::GskPath* path2, Gsk::PathIntersectionFunc::cfunction_type func, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gsk_path_foreach_intersection;
  auto func_wrap_ = func ? unwrap (std::move (func), gi::scope_call) : nullptr;
  std::unique_ptr<std::remove_pointer<decltype(func_wrap_)>::type> func_wrap__sp (func_wrap_);
  auto path2_to_c = nullptr;
  auto _temp_ret = call_wrap_v ((::GskPath*) (gobj_()), (::GskPath*) (path2_to_c), (Gsk::PathIntersectionFunc::cfunction_type) (func_wrap_ ? &func_wrap_->wrapper : nullptr), (void*) (func_wrap_));
  return _temp_ret;
}

// gboolean gsk_path_get_bounds (GskPath* self /*none*/, graphene_rect_t* bounds /*none,out,ca*/);
// gboolean gsk_path_get_bounds (::GskPath* self /*none*/, ::graphene_rect_t* bounds /*none,out,ca*/);
bool base::PathBase::get_bounds (Graphene::Rect & bounds) noexcept
{
  typedef gboolean (*call_wrap_t) (::GskPath* self, ::graphene_rect_t* bounds);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gsk_path_get_bounds;
  detail::allocate(bounds);
  static_assert(sizeof(::graphene_rect_t) == sizeof(*(bounds).gobj_()), "");
  auto _temp_ret = call_wrap_v ((::GskPath*) (gobj_()), (::graphene_rect_t*) ((::graphene_rect_t*) (bounds).gobj_()));
  return _temp_ret;
}
std::tuple<bool, Graphene::Rect> base::PathBase::get_bounds () noexcept
{
  typedef gboolean (*call_wrap_t) (::GskPath* self, ::graphene_rect_t* bounds);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gsk_path_get_bounds;
  Graphene::Rect bounds_c;
  auto bounds = &bounds_c;
  detail::allocate(*bounds);
  static_assert(sizeof(::graphene_rect_t) == sizeof(*(*bounds).gobj_()), "");
  auto _temp_ret = call_wrap_v ((::GskPath*) (gobj_()), (::graphene_rect_t*) (bounds ? (::graphene_rect_t*) (*bounds).gobj_() : nullptr));
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = bounds_c;
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}

// gboolean gsk_path_get_closest_point (GskPath* self /*none*/, const graphene_point_t* point /*none*/, float threshold, GskPathPoint* result /*none,out,ca*/, float* distance);
// gboolean gsk_path_get_closest_point (::GskPath* self /*none*/, const ::graphene_point_t* point /*none*/, gfloat threshold, ::GskPathPoint* result /*none,out,ca*/, gfloat* distance);
bool base::PathBase::get_closest_point (const Graphene::Point_Ref point, gfloat threshold, Gsk::PathPoint & result, gfloat * distance) noexcept
{
  typedef gboolean (*call_wrap_t) (::GskPath* self, const ::graphene_point_t* point, gfloat threshold, ::GskPathPoint* result, gfloat* distance);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gsk_path_get_closest_point;
  gfloat distance_o {};
  detail::allocate(result);
  static_assert(sizeof(::GskPathPoint) == sizeof(*(result).gobj_()), "");
  auto threshold_to_c = threshold;
  auto point_to_c = gi::unwrap (point, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GskPath*) (gobj_()), (const ::graphene_point_t*) (point_to_c), (gfloat) (threshold_to_c), (::GskPathPoint*) ((::GskPathPoint*) (result).gobj_()), (gfloat*) (distance ? &distance_o : nullptr));
  if (distance) *distance = distance_o;
  return _temp_ret;
}
std::tuple<bool, Gsk::PathPoint, gfloat> base::PathBase::get_closest_point (const Graphene::Point_Ref point, gfloat threshold) noexcept
{
  typedef gboolean (*call_wrap_t) (::GskPath* self, const ::graphene_point_t* point, gfloat threshold, ::GskPathPoint* result, gfloat* distance);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gsk_path_get_closest_point;
  gfloat distance_o {};
  Gsk::PathPoint result_c;
  auto result = &result_c;
  detail::allocate(*result);
  static_assert(sizeof(::GskPathPoint) == sizeof(*(*result).gobj_()), "");
  auto threshold_to_c = threshold;
  auto point_to_c = gi::unwrap (point, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GskPath*) (gobj_()), (const ::graphene_point_t*) (point_to_c), (gfloat) (threshold_to_c), (::GskPathPoint*) (result ? (::GskPathPoint*) (*result).gobj_() : nullptr), (gfloat*) (&distance_o));
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = result_c;
  auto &&tmp_return_3 = distance_o;
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2),std::move(tmp_return_3));
}

// gboolean gsk_path_get_end_point (GskPath* self /*none*/, GskPathPoint* result /*none,out,ca*/);
// gboolean gsk_path_get_end_point (::GskPath* self /*none*/, ::GskPathPoint* result /*none,out,ca*/);
bool base::PathBase::get_end_point (Gsk::PathPoint & result) noexcept
{
  typedef gboolean (*call_wrap_t) (::GskPath* self, ::GskPathPoint* result);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gsk_path_get_end_point;
  detail::allocate(result);
  static_assert(sizeof(::GskPathPoint) == sizeof(*(result).gobj_()), "");
  auto _temp_ret = call_wrap_v ((::GskPath*) (gobj_()), (::GskPathPoint*) ((::GskPathPoint*) (result).gobj_()));
  return _temp_ret;
}
std::tuple<bool, Gsk::PathPoint> base::PathBase::get_end_point () noexcept
{
  typedef gboolean (*call_wrap_t) (::GskPath* self, ::GskPathPoint* result);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gsk_path_get_end_point;
  Gsk::PathPoint result_c;
  auto result = &result_c;
  detail::allocate(*result);
  static_assert(sizeof(::GskPathPoint) == sizeof(*(*result).gobj_()), "");
  auto _temp_ret = call_wrap_v ((::GskPath*) (gobj_()), (::GskPathPoint*) (result ? (::GskPathPoint*) (*result).gobj_() : nullptr));
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = result_c;
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}

// gboolean gsk_path_get_next (GskPath* self /*none*/, GskPathPoint* point /*full,inout*/);
// gboolean gsk_path_get_next (::GskPath* self /*none*/, ::GskPathPoint** point /*full,inout*/);
// SKIP; inconsistent point inout pointer depth (1 vs 2)

// gboolean gsk_path_get_previous (GskPath* self /*none*/, GskPathPoint* point /*full,inout*/);
// gboolean gsk_path_get_previous (::GskPath* self /*none*/, ::GskPathPoint** point /*full,inout*/);
// SKIP; inconsistent point inout pointer depth (1 vs 2)

// gboolean gsk_path_get_start_point (GskPath* self /*none*/, GskPathPoint* result /*none,out,ca*/);
// gboolean gsk_path_get_start_point (::GskPath* self /*none*/, ::GskPathPoint* result /*none,out,ca*/);
bool base::PathBase::get_start_point (Gsk::PathPoint & result) noexcept
{
  typedef gboolean (*call_wrap_t) (::GskPath* self, ::GskPathPoint* result);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gsk_path_get_start_point;
  detail::allocate(result);
  static_assert(sizeof(::GskPathPoint) == sizeof(*(result).gobj_()), "");
  auto _temp_ret = call_wrap_v ((::GskPath*) (gobj_()), (::GskPathPoint*) ((::GskPathPoint*) (result).gobj_()));
  return _temp_ret;
}
std::tuple<bool, Gsk::PathPoint> base::PathBase::get_start_point () noexcept
{
  typedef gboolean (*call_wrap_t) (::GskPath* self, ::GskPathPoint* result);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gsk_path_get_start_point;
  Gsk::PathPoint result_c;
  auto result = &result_c;
  detail::allocate(*result);
  static_assert(sizeof(::GskPathPoint) == sizeof(*(*result).gobj_()), "");
  auto _temp_ret = call_wrap_v ((::GskPath*) (gobj_()), (::GskPathPoint*) (result ? (::GskPathPoint*) (*result).gobj_() : nullptr));
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = result_c;
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}

// gboolean gsk_path_get_stroke_bounds (GskPath* self /*none*/, const GskStroke* stroke /*none*/, graphene_rect_t* bounds /*none,out,ca*/);
// gboolean gsk_path_get_stroke_bounds (::GskPath* self /*none*/, const ::GskStroke* stroke /*none*/, ::graphene_rect_t* bounds /*none,out,ca*/);
bool base::PathBase::get_stroke_bounds (const Gsk::Stroke_Ref stroke, Graphene::Rect & bounds) noexcept
{
  typedef gboolean (*call_wrap_t) (::GskPath* self, const ::GskStroke* stroke, ::graphene_rect_t* bounds);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gsk_path_get_stroke_bounds;
  detail::allocate(bounds);
  static_assert(sizeof(::graphene_rect_t) == sizeof(*(bounds).gobj_()), "");
  auto stroke_to_c = gi::unwrap (stroke, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GskPath*) (gobj_()), (const ::GskStroke*) (stroke_to_c), (::graphene_rect_t*) ((::graphene_rect_t*) (bounds).gobj_()));
  return _temp_ret;
}
std::tuple<bool, Graphene::Rect> base::PathBase::get_stroke_bounds (const Gsk::Stroke_Ref stroke) noexcept
{
  typedef gboolean (*call_wrap_t) (::GskPath* self, const ::GskStroke* stroke, ::graphene_rect_t* bounds);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gsk_path_get_stroke_bounds;
  Graphene::Rect bounds_c;
  auto bounds = &bounds_c;
  detail::allocate(*bounds);
  static_assert(sizeof(::graphene_rect_t) == sizeof(*(*bounds).gobj_()), "");
  auto stroke_to_c = gi::unwrap (stroke, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GskPath*) (gobj_()), (const ::GskStroke*) (stroke_to_c), (::graphene_rect_t*) (bounds ? (::graphene_rect_t*) (*bounds).gobj_() : nullptr));
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = bounds_c;
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}

// gboolean gsk_path_get_tight_bounds (GskPath* self /*none*/, graphene_rect_t* bounds /*none,out,ca*/);
// gboolean gsk_path_get_tight_bounds (::GskPath* self /*none*/, ::graphene_rect_t* bounds /*none,out,ca*/);
bool base::PathBase::get_tight_bounds (Graphene::Rect & bounds) noexcept
{
  typedef gboolean (*call_wrap_t) (::GskPath* self, ::graphene_rect_t* bounds);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gsk_path_get_tight_bounds;
  detail::allocate(bounds);
  static_assert(sizeof(::graphene_rect_t) == sizeof(*(bounds).gobj_()), "");
  auto _temp_ret = call_wrap_v ((::GskPath*) (gobj_()), (::graphene_rect_t*) ((::graphene_rect_t*) (bounds).gobj_()));
  return _temp_ret;
}
std::tuple<bool, Graphene::Rect> base::PathBase::get_tight_bounds () noexcept
{
  typedef gboolean (*call_wrap_t) (::GskPath* self, ::graphene_rect_t* bounds);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gsk_path_get_tight_bounds;
  Graphene::Rect bounds_c;
  auto bounds = &bounds_c;
  detail::allocate(*bounds);
  static_assert(sizeof(::graphene_rect_t) == sizeof(*(*bounds).gobj_()), "");
  auto _temp_ret = call_wrap_v ((::GskPath*) (gobj_()), (::graphene_rect_t*) (bounds ? (::graphene_rect_t*) (*bounds).gobj_() : nullptr));
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = bounds_c;
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}

// gboolean gsk_path_in_fill (GskPath* self /*none*/, const graphene_point_t* point /*none*/, GskFillRule fill_rule);
// gboolean gsk_path_in_fill (::GskPath* self /*none*/, const ::graphene_point_t* point /*none*/, ::GskFillRule fill_rule);
bool base::PathBase::in_fill (const Graphene::Point_Ref point, Gsk::FillRule fill_rule) noexcept
{
  typedef gboolean (*call_wrap_t) (::GskPath* self, const ::graphene_point_t* point, ::GskFillRule fill_rule);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gsk_path_in_fill;
  auto fill_rule_to_c = gi::unwrap (fill_rule);
  auto point_to_c = gi::unwrap (point, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GskPath*) (gobj_()), (const ::graphene_point_t*) (point_to_c), (::GskFillRule) (fill_rule_to_c));
  return _temp_ret;
}

// gboolean gsk_path_is_closed (GskPath* self /*none*/);
// gboolean gsk_path_is_closed (::GskPath* self /*none*/);
bool base::PathBase::is_closed () noexcept
{
  typedef gboolean (*call_wrap_t) (::GskPath* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gsk_path_is_closed;
  auto _temp_ret = call_wrap_v ((::GskPath*) (gobj_()));
  return _temp_ret;
}

// gboolean gsk_path_is_empty (GskPath* self /*none*/);
// gboolean gsk_path_is_empty (::GskPath* self /*none*/);
bool base::PathBase::is_empty () noexcept
{
  typedef gboolean (*call_wrap_t) (::GskPath* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gsk_path_is_empty;
  auto _temp_ret = call_wrap_v ((::GskPath*) (gobj_()));
  return _temp_ret;
}

// void gsk_path_print (GskPath* self /*none*/, GString* string /*none*/);
// void gsk_path_print (::GskPath* self /*none*/, ::GString* string /*none*/);
void base::PathBase::print (GLib::String_Ref string) noexcept
{
  typedef void (*call_wrap_t) (::GskPath* self, ::GString* string);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gsk_path_print;
  auto string_to_c = gi::unwrap (string, gi::transfer_none);
  call_wrap_v ((::GskPath*) (gobj_()), (::GString*) (string_to_c));
}

// GskPath* /*full*/ gsk_path_ref (GskPath* self /*none*/);
// ::GskPath* /*full*/ gsk_path_ref (::GskPath* self /*none*/);
// IGNORE; marked ignore

// void gsk_path_to_cairo (GskPath* self /*none*/, cairo_t* cr /*none*/);
// void gsk_path_to_cairo (::GskPath* self /*none*/, ::cairo_t* cr /*none*/);
void base::PathBase::to_cairo (cairo::Context_Ref cr) noexcept
{
  typedef void (*call_wrap_t) (::GskPath* self, ::cairo_t* cr);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gsk_path_to_cairo;
  auto cr_to_c = gi::unwrap (cr, gi::transfer_none);
  call_wrap_v ((::GskPath*) (gobj_()), (::cairo_t*) (cr_to_c));
}

// char* /*full*/ gsk_path_to_string (GskPath* self /*none*/);
// char* /*full*/ gsk_path_to_string (::GskPath* self /*none*/);
gi::cstring base::PathBase::to_string () noexcept
{
  typedef char* (*call_wrap_t) (::GskPath* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gsk_path_to_string;
  auto _temp_ret = call_wrap_v ((::GskPath*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// void gsk_path_unref (GskPath* self /*none*/);
// void gsk_path_unref (::GskPath* self /*none*/);
// IGNORE; marked ignore

// GskPath* /*full,nullable*/ gsk_path_parse (const char* string /*none*/);
// ::GskPath* /*full,nullable*/ gsk_path_parse (const char* string /*none*/);
Gsk::Path base::PathBase::parse (const gi::cstring_v string) noexcept
{
  typedef ::GskPath* (*call_wrap_t) (const char* string);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gsk_path_parse;
  auto string_to_c = gi::unwrap (string, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const char*) (string_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}


} // namespace base

} // namespace Gsk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gsk/path_extra_def_impl.hpp>)
#include <gsk/path_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gsk/path_extra_impl.hpp>)
#include <gsk/path_extra_impl.hpp>
#endif
#endif

#endif
