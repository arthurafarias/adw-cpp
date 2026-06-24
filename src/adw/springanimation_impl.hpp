// AUTO-GENERATED

#ifndef _GI_ADW_SPRINGANIMATION_IMPL_HPP_
#define _GI_ADW_SPRINGANIMATION_IMPL_HPP_

namespace gi {

namespace repository {

namespace Adw {

namespace base {

// AdwAnimation* /*none*/ adw_spring_animation_new (GtkWidget* widget /*none*/, double from, double to, AdwSpringParams* spring_params /*full*/, AdwAnimationTarget* target /*full*/);
// ::AdwSpringAnimation* /*none*/ adw_spring_animation_new (::GtkWidget* widget /*none*/, gdouble from, gdouble to, ::AdwSpringParams* spring_params /*full*/, ::AdwAnimationTarget* target /*full*/);
Adw::SpringAnimation base::SpringAnimationBase::new_ (Gtk::Widget widget, gdouble from, gdouble to, Adw::SpringParams spring_params, Adw::AnimationTarget target) noexcept
{
  typedef ::AdwSpringAnimation* (*call_wrap_t) (::GtkWidget* widget, gdouble from, gdouble to, ::AdwSpringParams* spring_params, ::AdwAnimationTarget* target);
  call_wrap_t call_wrap_v = (call_wrap_t) adw_spring_animation_new;
  auto target_to_c = gi::unwrap (target, gi::transfer_full);
  auto spring_params_to_c = gi::unwrap (std::move(spring_params), gi::transfer_full);
  auto to_to_c = to;
  auto from_to_c = from;
  auto widget_to_c = gi::unwrap (widget, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GtkWidget*) (widget_to_c), (gdouble) (from_to_c), (gdouble) (to_to_c), (::AdwSpringParams*) (spring_params_to_c), (::AdwAnimationTarget*) (target_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// double adw_spring_animation_calculate_value (AdwSpringAnimation* self /*none*/, guint time);
// gdouble adw_spring_animation_calculate_value (::AdwSpringAnimation* self /*none*/, guint time);
gdouble base::SpringAnimationBase::calculate_value (guint time) noexcept
{
  typedef gdouble (*call_wrap_t) (::AdwSpringAnimation* self, guint time);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_spring_animation_calculate_value;
  auto time_to_c = time;
  auto _temp_ret = call_wrap_v ((::AdwSpringAnimation*) (gobj_()), (guint) (time_to_c));
  return _temp_ret;
}

// double adw_spring_animation_calculate_velocity (AdwSpringAnimation* self /*none*/, guint time);
// gdouble adw_spring_animation_calculate_velocity (::AdwSpringAnimation* self /*none*/, guint time);
gdouble base::SpringAnimationBase::calculate_velocity (guint time) noexcept
{
  typedef gdouble (*call_wrap_t) (::AdwSpringAnimation* self, guint time);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_spring_animation_calculate_velocity;
  auto time_to_c = time;
  auto _temp_ret = call_wrap_v ((::AdwSpringAnimation*) (gobj_()), (guint) (time_to_c));
  return _temp_ret;
}

// gboolean adw_spring_animation_get_clamp (AdwSpringAnimation* self /*none*/);
// gboolean adw_spring_animation_get_clamp (::AdwSpringAnimation* self /*none*/);
bool base::SpringAnimationBase::get_clamp () noexcept
{
  typedef gboolean (*call_wrap_t) (::AdwSpringAnimation* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_spring_animation_get_clamp;
  auto _temp_ret = call_wrap_v ((::AdwSpringAnimation*) (gobj_()));
  return _temp_ret;
}

// double adw_spring_animation_get_epsilon (AdwSpringAnimation* self /*none*/);
// gdouble adw_spring_animation_get_epsilon (::AdwSpringAnimation* self /*none*/);
gdouble base::SpringAnimationBase::get_epsilon () noexcept
{
  typedef gdouble (*call_wrap_t) (::AdwSpringAnimation* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_spring_animation_get_epsilon;
  auto _temp_ret = call_wrap_v ((::AdwSpringAnimation*) (gobj_()));
  return _temp_ret;
}

// guint adw_spring_animation_get_estimated_duration (AdwSpringAnimation* self /*none*/);
// guint adw_spring_animation_get_estimated_duration (::AdwSpringAnimation* self /*none*/);
guint base::SpringAnimationBase::get_estimated_duration () noexcept
{
  typedef guint (*call_wrap_t) (::AdwSpringAnimation* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_spring_animation_get_estimated_duration;
  auto _temp_ret = call_wrap_v ((::AdwSpringAnimation*) (gobj_()));
  return _temp_ret;
}

// double adw_spring_animation_get_initial_velocity (AdwSpringAnimation* self /*none*/);
// gdouble adw_spring_animation_get_initial_velocity (::AdwSpringAnimation* self /*none*/);
gdouble base::SpringAnimationBase::get_initial_velocity () noexcept
{
  typedef gdouble (*call_wrap_t) (::AdwSpringAnimation* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_spring_animation_get_initial_velocity;
  auto _temp_ret = call_wrap_v ((::AdwSpringAnimation*) (gobj_()));
  return _temp_ret;
}

// AdwSpringParams* /*none*/ adw_spring_animation_get_spring_params (AdwSpringAnimation* self /*none*/);
// ::AdwSpringParams* /*none*/ adw_spring_animation_get_spring_params (::AdwSpringAnimation* self /*none*/);
Adw::SpringParams_Ref base::SpringAnimationBase::get_spring_params () noexcept
{
  typedef ::AdwSpringParams* (*call_wrap_t) (::AdwSpringAnimation* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_spring_animation_get_spring_params;
  auto _temp_ret = call_wrap_v ((::AdwSpringAnimation*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// double adw_spring_animation_get_value_from (AdwSpringAnimation* self /*none*/);
// gdouble adw_spring_animation_get_value_from (::AdwSpringAnimation* self /*none*/);
gdouble base::SpringAnimationBase::get_value_from () noexcept
{
  typedef gdouble (*call_wrap_t) (::AdwSpringAnimation* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_spring_animation_get_value_from;
  auto _temp_ret = call_wrap_v ((::AdwSpringAnimation*) (gobj_()));
  return _temp_ret;
}

// double adw_spring_animation_get_value_to (AdwSpringAnimation* self /*none*/);
// gdouble adw_spring_animation_get_value_to (::AdwSpringAnimation* self /*none*/);
gdouble base::SpringAnimationBase::get_value_to () noexcept
{
  typedef gdouble (*call_wrap_t) (::AdwSpringAnimation* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_spring_animation_get_value_to;
  auto _temp_ret = call_wrap_v ((::AdwSpringAnimation*) (gobj_()));
  return _temp_ret;
}

// double adw_spring_animation_get_velocity (AdwSpringAnimation* self /*none*/);
// gdouble adw_spring_animation_get_velocity (::AdwSpringAnimation* self /*none*/);
gdouble base::SpringAnimationBase::get_velocity () noexcept
{
  typedef gdouble (*call_wrap_t) (::AdwSpringAnimation* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_spring_animation_get_velocity;
  auto _temp_ret = call_wrap_v ((::AdwSpringAnimation*) (gobj_()));
  return _temp_ret;
}

// void adw_spring_animation_set_clamp (AdwSpringAnimation* self /*none*/, gboolean clamp);
// void adw_spring_animation_set_clamp (::AdwSpringAnimation* self /*none*/, gboolean clamp);
void base::SpringAnimationBase::set_clamp (gboolean clamp) noexcept
{
  typedef void (*call_wrap_t) (::AdwSpringAnimation* self, gboolean clamp);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_spring_animation_set_clamp;
  auto clamp_to_c = clamp;
  call_wrap_v ((::AdwSpringAnimation*) (gobj_()), (gboolean) (clamp_to_c));
}

// void adw_spring_animation_set_epsilon (AdwSpringAnimation* self /*none*/, double epsilon);
// void adw_spring_animation_set_epsilon (::AdwSpringAnimation* self /*none*/, gdouble epsilon);
void base::SpringAnimationBase::set_epsilon (gdouble epsilon) noexcept
{
  typedef void (*call_wrap_t) (::AdwSpringAnimation* self, gdouble epsilon);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_spring_animation_set_epsilon;
  auto epsilon_to_c = epsilon;
  call_wrap_v ((::AdwSpringAnimation*) (gobj_()), (gdouble) (epsilon_to_c));
}

// void adw_spring_animation_set_initial_velocity (AdwSpringAnimation* self /*none*/, double velocity);
// void adw_spring_animation_set_initial_velocity (::AdwSpringAnimation* self /*none*/, gdouble velocity);
void base::SpringAnimationBase::set_initial_velocity (gdouble velocity) noexcept
{
  typedef void (*call_wrap_t) (::AdwSpringAnimation* self, gdouble velocity);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_spring_animation_set_initial_velocity;
  auto velocity_to_c = velocity;
  call_wrap_v ((::AdwSpringAnimation*) (gobj_()), (gdouble) (velocity_to_c));
}

// void adw_spring_animation_set_spring_params (AdwSpringAnimation* self /*none*/, AdwSpringParams* spring_params /*none*/);
// void adw_spring_animation_set_spring_params (::AdwSpringAnimation* self /*none*/, ::AdwSpringParams* spring_params /*none*/);
void base::SpringAnimationBase::set_spring_params (Adw::SpringParams_Ref spring_params) noexcept
{
  typedef void (*call_wrap_t) (::AdwSpringAnimation* self, ::AdwSpringParams* spring_params);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_spring_animation_set_spring_params;
  auto spring_params_to_c = gi::unwrap (spring_params, gi::transfer_none);
  call_wrap_v ((::AdwSpringAnimation*) (gobj_()), (::AdwSpringParams*) (spring_params_to_c));
}

// void adw_spring_animation_set_value_from (AdwSpringAnimation* self /*none*/, double value);
// void adw_spring_animation_set_value_from (::AdwSpringAnimation* self /*none*/, gdouble value);
void base::SpringAnimationBase::set_value_from (gdouble value) noexcept
{
  typedef void (*call_wrap_t) (::AdwSpringAnimation* self, gdouble value);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_spring_animation_set_value_from;
  auto value_to_c = value;
  call_wrap_v ((::AdwSpringAnimation*) (gobj_()), (gdouble) (value_to_c));
}

// void adw_spring_animation_set_value_to (AdwSpringAnimation* self /*none*/, double value);
// void adw_spring_animation_set_value_to (::AdwSpringAnimation* self /*none*/, gdouble value);
void base::SpringAnimationBase::set_value_to (gdouble value) noexcept
{
  typedef void (*call_wrap_t) (::AdwSpringAnimation* self, gdouble value);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_spring_animation_set_value_to;
  auto value_to_c = value;
  call_wrap_v ((::AdwSpringAnimation*) (gobj_()), (gdouble) (value_to_c));
}


} // namespace base

} // namespace Adw

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<adw/springanimation_extra_def_impl.hpp>)
#include <adw/springanimation_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<adw/springanimation_extra_impl.hpp>)
#include <adw/springanimation_extra_impl.hpp>
#endif
#endif

#endif
