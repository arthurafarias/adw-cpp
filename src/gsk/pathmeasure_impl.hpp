// AUTO-GENERATED

#ifndef _GI_GSK_PATHMEASURE_IMPL_HPP_
#define _GI_GSK_PATHMEASURE_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gsk {

namespace base {

// GskPathMeasure* /*full*/ gsk_path_measure_new (GskPath* path /*none*/);
// ::GskPathMeasure* /*full*/ gsk_path_measure_new (::GskPath* path /*none*/);
Gsk::PathMeasure base::PathMeasureBase::new_ (Gsk::Path_Ref path) noexcept
{
  typedef ::GskPathMeasure* (*call_wrap_t) (::GskPath* path);
  call_wrap_t call_wrap_v = (call_wrap_t) gsk_path_measure_new;
  auto path_to_c = gi::unwrap (path, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GskPath*) (path_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// GskPathMeasure* /*full*/ gsk_path_measure_new_with_tolerance (GskPath* path /*none*/, float tolerance);
// ::GskPathMeasure* /*full*/ gsk_path_measure_new_with_tolerance (::GskPath* path /*none*/, gfloat tolerance);
Gsk::PathMeasure base::PathMeasureBase::new_with_tolerance (Gsk::Path_Ref path, gfloat tolerance) noexcept
{
  typedef ::GskPathMeasure* (*call_wrap_t) (::GskPath* path, gfloat tolerance);
  call_wrap_t call_wrap_v = (call_wrap_t) gsk_path_measure_new_with_tolerance;
  auto tolerance_to_c = tolerance;
  auto path_to_c = gi::unwrap (path, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GskPath*) (path_to_c), (gfloat) (tolerance_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// float gsk_path_measure_get_length (GskPathMeasure* self /*none*/);
// gfloat gsk_path_measure_get_length (::GskPathMeasure* self /*none*/);
gfloat base::PathMeasureBase::get_length () noexcept
{
  typedef gfloat (*call_wrap_t) (::GskPathMeasure* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gsk_path_measure_get_length;
  auto _temp_ret = call_wrap_v ((::GskPathMeasure*) (gobj_()));
  return _temp_ret;
}

// GskPath* /*none*/ gsk_path_measure_get_path (GskPathMeasure* self /*none*/);
// ::GskPath* /*none*/ gsk_path_measure_get_path (::GskPathMeasure* self /*none*/);
Gsk::Path_Ref base::PathMeasureBase::get_path () noexcept
{
  typedef ::GskPath* (*call_wrap_t) (::GskPathMeasure* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gsk_path_measure_get_path;
  auto _temp_ret = call_wrap_v ((::GskPathMeasure*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// gboolean gsk_path_measure_get_point (GskPathMeasure* self /*none*/, float distance, GskPathPoint* result /*none,out,ca*/);
// gboolean gsk_path_measure_get_point (::GskPathMeasure* self /*none*/, gfloat distance, ::GskPathPoint* result /*none,out,ca*/);
bool base::PathMeasureBase::get_point (gfloat distance, Gsk::PathPoint & result) noexcept
{
  typedef gboolean (*call_wrap_t) (::GskPathMeasure* self, gfloat distance, ::GskPathPoint* result);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gsk_path_measure_get_point;
  detail::allocate(result);
  static_assert(sizeof(::GskPathPoint) == sizeof(*(result).gobj_()), "");
  auto distance_to_c = distance;
  auto _temp_ret = call_wrap_v ((::GskPathMeasure*) (gobj_()), (gfloat) (distance_to_c), (::GskPathPoint*) ((::GskPathPoint*) (result).gobj_()));
  return _temp_ret;
}
std::tuple<bool, Gsk::PathPoint> base::PathMeasureBase::get_point (gfloat distance) noexcept
{
  typedef gboolean (*call_wrap_t) (::GskPathMeasure* self, gfloat distance, ::GskPathPoint* result);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gsk_path_measure_get_point;
  Gsk::PathPoint result_c;
  auto result = &result_c;
  detail::allocate(*result);
  static_assert(sizeof(::GskPathPoint) == sizeof(*(*result).gobj_()), "");
  auto distance_to_c = distance;
  auto _temp_ret = call_wrap_v ((::GskPathMeasure*) (gobj_()), (gfloat) (distance_to_c), (::GskPathPoint*) (result ? (::GskPathPoint*) (*result).gobj_() : nullptr));
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = result_c;
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}

// float gsk_path_measure_get_tolerance (GskPathMeasure* self /*none*/);
// gfloat gsk_path_measure_get_tolerance (::GskPathMeasure* self /*none*/);
gfloat base::PathMeasureBase::get_tolerance () noexcept
{
  typedef gfloat (*call_wrap_t) (::GskPathMeasure* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gsk_path_measure_get_tolerance;
  auto _temp_ret = call_wrap_v ((::GskPathMeasure*) (gobj_()));
  return _temp_ret;
}

// GskPathMeasure* /*full*/ gsk_path_measure_ref (GskPathMeasure* self /*none*/);
// ::GskPathMeasure* /*full*/ gsk_path_measure_ref (::GskPathMeasure* self /*none*/);
// IGNORE; marked ignore

// void gsk_path_measure_unref (GskPathMeasure* self /*none*/);
// void gsk_path_measure_unref (::GskPathMeasure* self /*none*/);
// IGNORE; marked ignore


} // namespace base

} // namespace Gsk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gsk/pathmeasure_extra_def_impl.hpp>)
#include <gsk/pathmeasure_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gsk/pathmeasure_extra_impl.hpp>)
#include <gsk/pathmeasure_extra_impl.hpp>
#endif
#endif

#endif
