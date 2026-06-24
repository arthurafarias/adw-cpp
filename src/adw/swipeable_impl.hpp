// AUTO-GENERATED

#ifndef _GI_ADW_SWIPEABLE_IMPL_HPP_
#define _GI_ADW_SWIPEABLE_IMPL_HPP_

namespace gi {

namespace repository {

namespace Adw {

namespace base {

// double adw_swipeable_get_cancel_progress (AdwSwipeable* self /*none*/);
// gdouble adw_swipeable_get_cancel_progress (::AdwSwipeable* self /*none*/);
gdouble base::SwipeableBase::get_cancel_progress () noexcept
{
  typedef gdouble (*call_wrap_t) (::AdwSwipeable* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_swipeable_get_cancel_progress;
  auto _temp_ret = call_wrap_v ((::AdwSwipeable*) (gobj_()));
  return _temp_ret;
}

// double adw_swipeable_get_distance (AdwSwipeable* self /*none*/);
// gdouble adw_swipeable_get_distance (::AdwSwipeable* self /*none*/);
gdouble base::SwipeableBase::get_distance () noexcept
{
  typedef gdouble (*call_wrap_t) (::AdwSwipeable* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_swipeable_get_distance;
  auto _temp_ret = call_wrap_v ((::AdwSwipeable*) (gobj_()));
  return _temp_ret;
}

// double adw_swipeable_get_progress (AdwSwipeable* self /*none*/);
// gdouble adw_swipeable_get_progress (::AdwSwipeable* self /*none*/);
gdouble base::SwipeableBase::get_progress () noexcept
{
  typedef gdouble (*call_wrap_t) (::AdwSwipeable* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_swipeable_get_progress;
  auto _temp_ret = call_wrap_v ((::AdwSwipeable*) (gobj_()));
  return _temp_ret;
}

// double* /*full*/ adw_swipeable_get_snap_points (AdwSwipeable* self /*none*/, int* n_snap_points);
// gdouble* /*full*/ adw_swipeable_get_snap_points (::AdwSwipeable* self /*none*/, gint* n_snap_points);
gi::Collection<gi::DSpan, gdouble, gi::transfer_full_t> base::SwipeableBase::get_snap_points () noexcept
{
  typedef gdouble* (*call_wrap_t) (::AdwSwipeable* self, gint* n_snap_points);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_swipeable_get_snap_points;
  gint n_snap_points;
  auto _ret_o = call_wrap_v ((::AdwSwipeable*) (gobj_()), (gint*) (&n_snap_points));
  gi::Collection<gi::DSpan, gdouble, gi::transfer_full_t> _temp_ret;
  _temp_ret = gi::wrap_to<gi::Collection<gi::DSpan, gdouble, gi::transfer_full_t>>(_ret_o, n_snap_points, gi::transfer_full);
  return _temp_ret;
}

// void adw_swipeable_get_swipe_area (AdwSwipeable* self /*none*/, AdwNavigationDirection navigation_direction, gboolean is_drag, GdkRectangle* rect /*none,out,ca*/);
// void adw_swipeable_get_swipe_area (::AdwSwipeable* self /*none*/, ::AdwNavigationDirection navigation_direction, gboolean is_drag, ::GdkRectangle* rect /*none,out,ca*/);
void base::SwipeableBase::get_swipe_area (Adw::NavigationDirection navigation_direction, gboolean is_drag, Gdk::Rectangle & rect) noexcept
{
  typedef void (*call_wrap_t) (::AdwSwipeable* self, ::AdwNavigationDirection navigation_direction, gboolean is_drag, ::GdkRectangle* rect);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_swipeable_get_swipe_area;
  detail::allocate(rect);
  static_assert(sizeof(::GdkRectangle) == sizeof(*(rect).gobj_()), "");
  auto is_drag_to_c = is_drag;
  auto navigation_direction_to_c = gi::unwrap (navigation_direction);
  call_wrap_v ((::AdwSwipeable*) (gobj_()), (::AdwNavigationDirection) (navigation_direction_to_c), (gboolean) (is_drag_to_c), (::GdkRectangle*) ((::GdkRectangle*) (rect).gobj_()));
}
Gdk::Rectangle base::SwipeableBase::get_swipe_area (Adw::NavigationDirection navigation_direction, gboolean is_drag) noexcept
{
  typedef void (*call_wrap_t) (::AdwSwipeable* self, ::AdwNavigationDirection navigation_direction, gboolean is_drag, ::GdkRectangle* rect);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_swipeable_get_swipe_area;
  Gdk::Rectangle rect_c;
  auto rect = &rect_c;
  detail::allocate(*rect);
  static_assert(sizeof(::GdkRectangle) == sizeof(*(*rect).gobj_()), "");
  auto is_drag_to_c = is_drag;
  auto navigation_direction_to_c = gi::unwrap (navigation_direction);
  call_wrap_v ((::AdwSwipeable*) (gobj_()), (::AdwNavigationDirection) (navigation_direction_to_c), (gboolean) (is_drag_to_c), (::GdkRectangle*) (rect ? (::GdkRectangle*) (*rect).gobj_() : nullptr));
  return rect_c;
}


} // namespace base

} // namespace Adw

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<adw/swipeable_extra_def_impl.hpp>)
#include <adw/swipeable_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<adw/swipeable_extra_impl.hpp>)
#include <adw/swipeable_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Adw {

namespace impl {

namespace internal {

void SwipeableInterfaceDef::interface_init (gpointer interface_struct, gpointer factory)
{
  ::AdwSwipeableInterface *methods = (::AdwSwipeableInterface *) interface_struct;
  (void) methods;

  auto init_data = GI_MEMBER_INIT_DATA(TypeInitData, factory);
  (void) init_data;

  if (init_data.get_cancel_progress) methods->get_cancel_progress = (decltype (methods->get_cancel_progress)) gi::detail::method_wrapper<self, gdouble (*) (), gi::transfer_none_t, std::tuple<>>::wrapper<&self::get_cancel_progress_>;
  if (init_data.get_distance) methods->get_distance = (decltype (methods->get_distance)) gi::detail::method_wrapper<self, gdouble (*) (), gi::transfer_none_t, std::tuple<>>::wrapper<&self::get_distance_>;
  if (init_data.get_progress) methods->get_progress = (decltype (methods->get_progress)) gi::detail::method_wrapper<self, gdouble (*) (), gi::transfer_none_t, std::tuple<>>::wrapper<&self::get_progress_>;
  if (init_data.get_swipe_area) methods->get_swipe_area = (decltype (methods->get_swipe_area)) gi::detail::method_wrapper<self, void (*) (Adw::NavigationDirection navigation_direction, gboolean is_drag, Gdk::Rectangle_Ref rect), gi::transfer_full_t, std::tuple<gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t>>::wrapper<&self::get_swipe_area_>;
}

// double Swipeable::get_cancel_progress (AdwSwipeable* self /*none*/);
// gdouble Swipeable::get_cancel_progress (::AdwSwipeable* self /*none*/);
gdouble SwipeableInterfaceClassImpl::get_cancel_progress_ () noexcept
{
  if (!get_struct_()->get_cancel_progress) { g_critical ("no method in class struct"); return {}; }
  typedef gdouble (*call_wrap_t) (::AdwSwipeable* self);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->get_cancel_progress;
  auto _temp_ret = call_wrap_v ((::AdwSwipeable*) (gobj_()));
  return _temp_ret;
}

// double Swipeable::get_distance (AdwSwipeable* self /*none*/);
// gdouble Swipeable::get_distance (::AdwSwipeable* self /*none*/);
gdouble SwipeableInterfaceClassImpl::get_distance_ () noexcept
{
  if (!get_struct_()->get_distance) { g_critical ("no method in class struct"); return {}; }
  typedef gdouble (*call_wrap_t) (::AdwSwipeable* self);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->get_distance;
  auto _temp_ret = call_wrap_v ((::AdwSwipeable*) (gobj_()));
  return _temp_ret;
}

// double Swipeable::get_progress (AdwSwipeable* self /*none*/);
// gdouble Swipeable::get_progress (::AdwSwipeable* self /*none*/);
gdouble SwipeableInterfaceClassImpl::get_progress_ () noexcept
{
  if (!get_struct_()->get_progress) { g_critical ("no method in class struct"); return {}; }
  typedef gdouble (*call_wrap_t) (::AdwSwipeable* self);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->get_progress;
  auto _temp_ret = call_wrap_v ((::AdwSwipeable*) (gobj_()));
  return _temp_ret;
}

// double* /*full*/ Swipeable::get_snap_points (AdwSwipeable* self /*none*/, int* n_snap_points);
// gdouble* /*full*/ Swipeable::get_snap_points (::AdwSwipeable* self /*none*/, gint* n_snap_points);
// SKIP; virtual-method return array not supported

// void Swipeable::get_swipe_area (AdwSwipeable* self /*none*/, AdwNavigationDirection navigation_direction, gboolean is_drag, GdkRectangle* rect /*none,out,ca*/);
// void Swipeable::get_swipe_area (::AdwSwipeable* self /*none*/, ::AdwNavigationDirection navigation_direction, gboolean is_drag, ::GdkRectangle* rect /*none,out,ca*/);
void SwipeableInterfaceClassImpl::get_swipe_area_ (Adw::NavigationDirection navigation_direction, gboolean is_drag, Gdk::Rectangle_Ref rect) noexcept
{
  if (!get_struct_()->get_swipe_area) { g_critical ("no method in class struct"); return ; }
  typedef void (*call_wrap_t) (::AdwSwipeable* self, ::AdwNavigationDirection navigation_direction, gboolean is_drag, ::GdkRectangle* rect);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->get_swipe_area;
  auto rect_to_c = gi::unwrap (rect, gi::transfer_none);
  auto is_drag_to_c = is_drag;
  auto navigation_direction_to_c = gi::unwrap (navigation_direction);
  call_wrap_v ((::AdwSwipeable*) (gobj_()), (::AdwNavigationDirection) (navigation_direction_to_c), (gboolean) (is_drag_to_c), (::GdkRectangle*) (rect_to_c));
}

} // namespace internal

} // namespace impl

} // namespace Adw

} // namespace repository

} // namespace gi

#endif
