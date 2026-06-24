// AUTO-GENERATED

#ifndef _GI_ADW_TIMEDANIMATION_IMPL_HPP_
#define _GI_ADW_TIMEDANIMATION_IMPL_HPP_

namespace gi {

namespace repository {

namespace Adw {

namespace base {

// AdwAnimation* /*none*/ adw_timed_animation_new (GtkWidget* widget /*none*/, double from, double to, guint duration, AdwAnimationTarget* target /*full*/);
// ::AdwTimedAnimation* /*none*/ adw_timed_animation_new (::GtkWidget* widget /*none*/, gdouble from, gdouble to, guint duration, ::AdwAnimationTarget* target /*full*/);
Adw::TimedAnimation base::TimedAnimationBase::new_ (Gtk::Widget widget, gdouble from, gdouble to, guint duration, Adw::AnimationTarget target) noexcept
{
  typedef ::AdwTimedAnimation* (*call_wrap_t) (::GtkWidget* widget, gdouble from, gdouble to, guint duration, ::AdwAnimationTarget* target);
  call_wrap_t call_wrap_v = (call_wrap_t) adw_timed_animation_new;
  auto target_to_c = gi::unwrap (target, gi::transfer_full);
  auto duration_to_c = duration;
  auto to_to_c = to;
  auto from_to_c = from;
  auto widget_to_c = gi::unwrap (widget, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GtkWidget*) (widget_to_c), (gdouble) (from_to_c), (gdouble) (to_to_c), (guint) (duration_to_c), (::AdwAnimationTarget*) (target_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// gboolean adw_timed_animation_get_alternate (AdwTimedAnimation* self /*none*/);
// gboolean adw_timed_animation_get_alternate (::AdwTimedAnimation* self /*none*/);
bool base::TimedAnimationBase::get_alternate () noexcept
{
  typedef gboolean (*call_wrap_t) (::AdwTimedAnimation* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_timed_animation_get_alternate;
  auto _temp_ret = call_wrap_v ((::AdwTimedAnimation*) (gobj_()));
  return _temp_ret;
}

// guint adw_timed_animation_get_duration (AdwTimedAnimation* self /*none*/);
// guint adw_timed_animation_get_duration (::AdwTimedAnimation* self /*none*/);
guint base::TimedAnimationBase::get_duration () noexcept
{
  typedef guint (*call_wrap_t) (::AdwTimedAnimation* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_timed_animation_get_duration;
  auto _temp_ret = call_wrap_v ((::AdwTimedAnimation*) (gobj_()));
  return _temp_ret;
}

// AdwEasing adw_timed_animation_get_easing (AdwTimedAnimation* self /*none*/);
// ::AdwEasing adw_timed_animation_get_easing (::AdwTimedAnimation* self /*none*/);
Adw::Easing base::TimedAnimationBase::get_easing () noexcept
{
  typedef ::AdwEasing (*call_wrap_t) (::AdwTimedAnimation* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_timed_animation_get_easing;
  auto _temp_ret = call_wrap_v ((::AdwTimedAnimation*) (gobj_()));
  return gi::wrap (_temp_ret);
}

// guint adw_timed_animation_get_repeat_count (AdwTimedAnimation* self /*none*/);
// guint adw_timed_animation_get_repeat_count (::AdwTimedAnimation* self /*none*/);
guint base::TimedAnimationBase::get_repeat_count () noexcept
{
  typedef guint (*call_wrap_t) (::AdwTimedAnimation* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_timed_animation_get_repeat_count;
  auto _temp_ret = call_wrap_v ((::AdwTimedAnimation*) (gobj_()));
  return _temp_ret;
}

// gboolean adw_timed_animation_get_reverse (AdwTimedAnimation* self /*none*/);
// gboolean adw_timed_animation_get_reverse (::AdwTimedAnimation* self /*none*/);
bool base::TimedAnimationBase::get_reverse () noexcept
{
  typedef gboolean (*call_wrap_t) (::AdwTimedAnimation* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_timed_animation_get_reverse;
  auto _temp_ret = call_wrap_v ((::AdwTimedAnimation*) (gobj_()));
  return _temp_ret;
}

// double adw_timed_animation_get_value_from (AdwTimedAnimation* self /*none*/);
// gdouble adw_timed_animation_get_value_from (::AdwTimedAnimation* self /*none*/);
gdouble base::TimedAnimationBase::get_value_from () noexcept
{
  typedef gdouble (*call_wrap_t) (::AdwTimedAnimation* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_timed_animation_get_value_from;
  auto _temp_ret = call_wrap_v ((::AdwTimedAnimation*) (gobj_()));
  return _temp_ret;
}

// double adw_timed_animation_get_value_to (AdwTimedAnimation* self /*none*/);
// gdouble adw_timed_animation_get_value_to (::AdwTimedAnimation* self /*none*/);
gdouble base::TimedAnimationBase::get_value_to () noexcept
{
  typedef gdouble (*call_wrap_t) (::AdwTimedAnimation* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_timed_animation_get_value_to;
  auto _temp_ret = call_wrap_v ((::AdwTimedAnimation*) (gobj_()));
  return _temp_ret;
}

// void adw_timed_animation_set_alternate (AdwTimedAnimation* self /*none*/, gboolean alternate);
// void adw_timed_animation_set_alternate (::AdwTimedAnimation* self /*none*/, gboolean alternate);
void base::TimedAnimationBase::set_alternate (gboolean alternate) noexcept
{
  typedef void (*call_wrap_t) (::AdwTimedAnimation* self, gboolean alternate);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_timed_animation_set_alternate;
  auto alternate_to_c = alternate;
  call_wrap_v ((::AdwTimedAnimation*) (gobj_()), (gboolean) (alternate_to_c));
}

// void adw_timed_animation_set_duration (AdwTimedAnimation* self /*none*/, guint duration);
// void adw_timed_animation_set_duration (::AdwTimedAnimation* self /*none*/, guint duration);
void base::TimedAnimationBase::set_duration (guint duration) noexcept
{
  typedef void (*call_wrap_t) (::AdwTimedAnimation* self, guint duration);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_timed_animation_set_duration;
  auto duration_to_c = duration;
  call_wrap_v ((::AdwTimedAnimation*) (gobj_()), (guint) (duration_to_c));
}

// void adw_timed_animation_set_easing (AdwTimedAnimation* self /*none*/, AdwEasing easing);
// void adw_timed_animation_set_easing (::AdwTimedAnimation* self /*none*/, ::AdwEasing easing);
void base::TimedAnimationBase::set_easing (Adw::Easing easing) noexcept
{
  typedef void (*call_wrap_t) (::AdwTimedAnimation* self, ::AdwEasing easing);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_timed_animation_set_easing;
  auto easing_to_c = gi::unwrap (easing);
  call_wrap_v ((::AdwTimedAnimation*) (gobj_()), (::AdwEasing) (easing_to_c));
}

// void adw_timed_animation_set_repeat_count (AdwTimedAnimation* self /*none*/, guint repeat_count);
// void adw_timed_animation_set_repeat_count (::AdwTimedAnimation* self /*none*/, guint repeat_count);
void base::TimedAnimationBase::set_repeat_count (guint repeat_count) noexcept
{
  typedef void (*call_wrap_t) (::AdwTimedAnimation* self, guint repeat_count);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_timed_animation_set_repeat_count;
  auto repeat_count_to_c = repeat_count;
  call_wrap_v ((::AdwTimedAnimation*) (gobj_()), (guint) (repeat_count_to_c));
}

// void adw_timed_animation_set_reverse (AdwTimedAnimation* self /*none*/, gboolean reverse);
// void adw_timed_animation_set_reverse (::AdwTimedAnimation* self /*none*/, gboolean reverse);
void base::TimedAnimationBase::set_reverse (gboolean reverse) noexcept
{
  typedef void (*call_wrap_t) (::AdwTimedAnimation* self, gboolean reverse);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_timed_animation_set_reverse;
  auto reverse_to_c = reverse;
  call_wrap_v ((::AdwTimedAnimation*) (gobj_()), (gboolean) (reverse_to_c));
}

// void adw_timed_animation_set_value_from (AdwTimedAnimation* self /*none*/, double value);
// void adw_timed_animation_set_value_from (::AdwTimedAnimation* self /*none*/, gdouble value);
void base::TimedAnimationBase::set_value_from (gdouble value) noexcept
{
  typedef void (*call_wrap_t) (::AdwTimedAnimation* self, gdouble value);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_timed_animation_set_value_from;
  auto value_to_c = value;
  call_wrap_v ((::AdwTimedAnimation*) (gobj_()), (gdouble) (value_to_c));
}

// void adw_timed_animation_set_value_to (AdwTimedAnimation* self /*none*/, double value);
// void adw_timed_animation_set_value_to (::AdwTimedAnimation* self /*none*/, gdouble value);
void base::TimedAnimationBase::set_value_to (gdouble value) noexcept
{
  typedef void (*call_wrap_t) (::AdwTimedAnimation* self, gdouble value);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_timed_animation_set_value_to;
  auto value_to_c = value;
  call_wrap_v ((::AdwTimedAnimation*) (gobj_()), (gdouble) (value_to_c));
}


} // namespace base

} // namespace Adw

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<adw/timedanimation_extra_def_impl.hpp>)
#include <adw/timedanimation_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<adw/timedanimation_extra_impl.hpp>)
#include <adw/timedanimation_extra_impl.hpp>
#endif
#endif

#endif
