// AUTO-GENERATED

#ifndef _GI_ADW_SWIPETRACKER_IMPL_HPP_
#define _GI_ADW_SWIPETRACKER_IMPL_HPP_

namespace gi {

namespace repository {

namespace Adw {

namespace base {

Gtk::Orientable SwipeTrackerBase::interface_ (gi::interface_tag<Gtk::Orientable>)
{ return gi::wrap ((Gtk::Orientable::BaseObjectType*) gobj_copy_(), gi::transfer_full); }

SwipeTrackerBase::operator Gtk::Orientable ()
{ return interface_ (gi::interface_tag<Gtk::Orientable>()); }

// AdwSwipeTracker* /*full*/ adw_swipe_tracker_new (AdwSwipeable* swipeable /*none*/);
// ::AdwSwipeTracker* /*full*/ adw_swipe_tracker_new (::AdwSwipeable* swipeable /*none*/);
Adw::SwipeTracker base::SwipeTrackerBase::new_ (Adw::Swipeable swipeable) noexcept
{
  typedef ::AdwSwipeTracker* (*call_wrap_t) (::AdwSwipeable* swipeable);
  call_wrap_t call_wrap_v = (call_wrap_t) adw_swipe_tracker_new;
  auto swipeable_to_c = gi::unwrap (swipeable, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::AdwSwipeable*) (swipeable_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// gboolean adw_swipe_tracker_get_allow_long_swipes (AdwSwipeTracker* self /*none*/);
// gboolean adw_swipe_tracker_get_allow_long_swipes (::AdwSwipeTracker* self /*none*/);
bool base::SwipeTrackerBase::get_allow_long_swipes () noexcept
{
  typedef gboolean (*call_wrap_t) (::AdwSwipeTracker* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_swipe_tracker_get_allow_long_swipes;
  auto _temp_ret = call_wrap_v ((::AdwSwipeTracker*) (gobj_()));
  return _temp_ret;
}

// gboolean adw_swipe_tracker_get_allow_mouse_drag (AdwSwipeTracker* self /*none*/);
// gboolean adw_swipe_tracker_get_allow_mouse_drag (::AdwSwipeTracker* self /*none*/);
bool base::SwipeTrackerBase::get_allow_mouse_drag () noexcept
{
  typedef gboolean (*call_wrap_t) (::AdwSwipeTracker* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_swipe_tracker_get_allow_mouse_drag;
  auto _temp_ret = call_wrap_v ((::AdwSwipeTracker*) (gobj_()));
  return _temp_ret;
}

// gboolean adw_swipe_tracker_get_allow_window_handle (AdwSwipeTracker* self /*none*/);
// gboolean adw_swipe_tracker_get_allow_window_handle (::AdwSwipeTracker* self /*none*/);
bool base::SwipeTrackerBase::get_allow_window_handle () noexcept
{
  typedef gboolean (*call_wrap_t) (::AdwSwipeTracker* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_swipe_tracker_get_allow_window_handle;
  auto _temp_ret = call_wrap_v ((::AdwSwipeTracker*) (gobj_()));
  return _temp_ret;
}

// gboolean adw_swipe_tracker_get_enabled (AdwSwipeTracker* self /*none*/);
// gboolean adw_swipe_tracker_get_enabled (::AdwSwipeTracker* self /*none*/);
bool base::SwipeTrackerBase::get_enabled () noexcept
{
  typedef gboolean (*call_wrap_t) (::AdwSwipeTracker* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_swipe_tracker_get_enabled;
  auto _temp_ret = call_wrap_v ((::AdwSwipeTracker*) (gobj_()));
  return _temp_ret;
}

// gboolean adw_swipe_tracker_get_lower_overshoot (AdwSwipeTracker* self /*none*/);
// gboolean adw_swipe_tracker_get_lower_overshoot (::AdwSwipeTracker* self /*none*/);
bool base::SwipeTrackerBase::get_lower_overshoot () noexcept
{
  typedef gboolean (*call_wrap_t) (::AdwSwipeTracker* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_swipe_tracker_get_lower_overshoot;
  auto _temp_ret = call_wrap_v ((::AdwSwipeTracker*) (gobj_()));
  return _temp_ret;
}

// gboolean adw_swipe_tracker_get_reversed (AdwSwipeTracker* self /*none*/);
// gboolean adw_swipe_tracker_get_reversed (::AdwSwipeTracker* self /*none*/);
bool base::SwipeTrackerBase::get_reversed () noexcept
{
  typedef gboolean (*call_wrap_t) (::AdwSwipeTracker* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_swipe_tracker_get_reversed;
  auto _temp_ret = call_wrap_v ((::AdwSwipeTracker*) (gobj_()));
  return _temp_ret;
}

// AdwSwipeable* /*none*/ adw_swipe_tracker_get_swipeable (AdwSwipeTracker* self /*none*/);
// ::AdwSwipeable* /*none*/ adw_swipe_tracker_get_swipeable (::AdwSwipeTracker* self /*none*/);
Adw::Swipeable base::SwipeTrackerBase::get_swipeable () noexcept
{
  typedef ::AdwSwipeable* (*call_wrap_t) (::AdwSwipeTracker* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_swipe_tracker_get_swipeable;
  auto _temp_ret = call_wrap_v ((::AdwSwipeTracker*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// gboolean adw_swipe_tracker_get_upper_overshoot (AdwSwipeTracker* self /*none*/);
// gboolean adw_swipe_tracker_get_upper_overshoot (::AdwSwipeTracker* self /*none*/);
bool base::SwipeTrackerBase::get_upper_overshoot () noexcept
{
  typedef gboolean (*call_wrap_t) (::AdwSwipeTracker* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_swipe_tracker_get_upper_overshoot;
  auto _temp_ret = call_wrap_v ((::AdwSwipeTracker*) (gobj_()));
  return _temp_ret;
}

// void adw_swipe_tracker_set_allow_long_swipes (AdwSwipeTracker* self /*none*/, gboolean allow_long_swipes);
// void adw_swipe_tracker_set_allow_long_swipes (::AdwSwipeTracker* self /*none*/, gboolean allow_long_swipes);
void base::SwipeTrackerBase::set_allow_long_swipes (gboolean allow_long_swipes) noexcept
{
  typedef void (*call_wrap_t) (::AdwSwipeTracker* self, gboolean allow_long_swipes);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_swipe_tracker_set_allow_long_swipes;
  auto allow_long_swipes_to_c = allow_long_swipes;
  call_wrap_v ((::AdwSwipeTracker*) (gobj_()), (gboolean) (allow_long_swipes_to_c));
}

// void adw_swipe_tracker_set_allow_mouse_drag (AdwSwipeTracker* self /*none*/, gboolean allow_mouse_drag);
// void adw_swipe_tracker_set_allow_mouse_drag (::AdwSwipeTracker* self /*none*/, gboolean allow_mouse_drag);
void base::SwipeTrackerBase::set_allow_mouse_drag (gboolean allow_mouse_drag) noexcept
{
  typedef void (*call_wrap_t) (::AdwSwipeTracker* self, gboolean allow_mouse_drag);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_swipe_tracker_set_allow_mouse_drag;
  auto allow_mouse_drag_to_c = allow_mouse_drag;
  call_wrap_v ((::AdwSwipeTracker*) (gobj_()), (gboolean) (allow_mouse_drag_to_c));
}

// void adw_swipe_tracker_set_allow_window_handle (AdwSwipeTracker* self /*none*/, gboolean allow_window_handle);
// void adw_swipe_tracker_set_allow_window_handle (::AdwSwipeTracker* self /*none*/, gboolean allow_window_handle);
void base::SwipeTrackerBase::set_allow_window_handle (gboolean allow_window_handle) noexcept
{
  typedef void (*call_wrap_t) (::AdwSwipeTracker* self, gboolean allow_window_handle);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_swipe_tracker_set_allow_window_handle;
  auto allow_window_handle_to_c = allow_window_handle;
  call_wrap_v ((::AdwSwipeTracker*) (gobj_()), (gboolean) (allow_window_handle_to_c));
}

// void adw_swipe_tracker_set_enabled (AdwSwipeTracker* self /*none*/, gboolean enabled);
// void adw_swipe_tracker_set_enabled (::AdwSwipeTracker* self /*none*/, gboolean enabled);
void base::SwipeTrackerBase::set_enabled (gboolean enabled) noexcept
{
  typedef void (*call_wrap_t) (::AdwSwipeTracker* self, gboolean enabled);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_swipe_tracker_set_enabled;
  auto enabled_to_c = enabled;
  call_wrap_v ((::AdwSwipeTracker*) (gobj_()), (gboolean) (enabled_to_c));
}

// void adw_swipe_tracker_set_lower_overshoot (AdwSwipeTracker* self /*none*/, gboolean overshoot);
// void adw_swipe_tracker_set_lower_overshoot (::AdwSwipeTracker* self /*none*/, gboolean overshoot);
void base::SwipeTrackerBase::set_lower_overshoot (gboolean overshoot) noexcept
{
  typedef void (*call_wrap_t) (::AdwSwipeTracker* self, gboolean overshoot);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_swipe_tracker_set_lower_overshoot;
  auto overshoot_to_c = overshoot;
  call_wrap_v ((::AdwSwipeTracker*) (gobj_()), (gboolean) (overshoot_to_c));
}

// void adw_swipe_tracker_set_reversed (AdwSwipeTracker* self /*none*/, gboolean reversed);
// void adw_swipe_tracker_set_reversed (::AdwSwipeTracker* self /*none*/, gboolean reversed);
void base::SwipeTrackerBase::set_reversed (gboolean reversed) noexcept
{
  typedef void (*call_wrap_t) (::AdwSwipeTracker* self, gboolean reversed);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_swipe_tracker_set_reversed;
  auto reversed_to_c = reversed;
  call_wrap_v ((::AdwSwipeTracker*) (gobj_()), (gboolean) (reversed_to_c));
}

// void adw_swipe_tracker_set_upper_overshoot (AdwSwipeTracker* self /*none*/, gboolean overshoot);
// void adw_swipe_tracker_set_upper_overshoot (::AdwSwipeTracker* self /*none*/, gboolean overshoot);
void base::SwipeTrackerBase::set_upper_overshoot (gboolean overshoot) noexcept
{
  typedef void (*call_wrap_t) (::AdwSwipeTracker* self, gboolean overshoot);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_swipe_tracker_set_upper_overshoot;
  auto overshoot_to_c = overshoot;
  call_wrap_v ((::AdwSwipeTracker*) (gobj_()), (gboolean) (overshoot_to_c));
}

// void adw_swipe_tracker_shift_position (AdwSwipeTracker* self /*none*/, double delta);
// void adw_swipe_tracker_shift_position (::AdwSwipeTracker* self /*none*/, gdouble delta);
void base::SwipeTrackerBase::shift_position (gdouble delta) noexcept
{
  typedef void (*call_wrap_t) (::AdwSwipeTracker* self, gdouble delta);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_swipe_tracker_shift_position;
  auto delta_to_c = delta;
  call_wrap_v ((::AdwSwipeTracker*) (gobj_()), (gdouble) (delta_to_c));
}






} // namespace base

} // namespace Adw

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<adw/swipetracker_extra_def_impl.hpp>)
#include <adw/swipetracker_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<adw/swipetracker_extra_impl.hpp>)
#include <adw/swipetracker_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Adw {

namespace impl {

namespace internal {

void SwipeTrackerClassDef::class_init (gpointer class_struct, gpointer factory)
{
  ::AdwSwipeTrackerClass *methods = (::AdwSwipeTrackerClass *) class_struct;
  (void) methods;

  auto init_data = GI_MEMBER_INIT_DATA(TypeInitData, factory);
  (void) init_data;

}

} // namespace internal

} // namespace impl

} // namespace Adw

} // namespace repository

} // namespace gi

#endif
