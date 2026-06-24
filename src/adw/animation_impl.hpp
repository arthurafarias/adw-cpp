// AUTO-GENERATED

#ifndef _GI_ADW_ANIMATION_IMPL_HPP_
#define _GI_ADW_ANIMATION_IMPL_HPP_

namespace gi {

namespace repository {

namespace Adw {

namespace base {

// gboolean adw_animation_get_follow_enable_animations_setting (AdwAnimation* self /*none*/);
// gboolean adw_animation_get_follow_enable_animations_setting (::AdwAnimation* self /*none*/);
bool base::AnimationBase::get_follow_enable_animations_setting () noexcept
{
  typedef gboolean (*call_wrap_t) (::AdwAnimation* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_animation_get_follow_enable_animations_setting;
  auto _temp_ret = call_wrap_v ((::AdwAnimation*) (gobj_()));
  return _temp_ret;
}

// AdwAnimationState adw_animation_get_state (AdwAnimation* self /*none*/);
// ::AdwAnimationState adw_animation_get_state (::AdwAnimation* self /*none*/);
Adw::AnimationState base::AnimationBase::get_state () noexcept
{
  typedef ::AdwAnimationState (*call_wrap_t) (::AdwAnimation* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_animation_get_state;
  auto _temp_ret = call_wrap_v ((::AdwAnimation*) (gobj_()));
  return gi::wrap (_temp_ret);
}

// AdwAnimationTarget* /*none*/ adw_animation_get_target (AdwAnimation* self /*none*/);
// ::AdwAnimationTarget* /*none*/ adw_animation_get_target (::AdwAnimation* self /*none*/);
Adw::AnimationTarget base::AnimationBase::get_target () noexcept
{
  typedef ::AdwAnimationTarget* (*call_wrap_t) (::AdwAnimation* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_animation_get_target;
  auto _temp_ret = call_wrap_v ((::AdwAnimation*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// double adw_animation_get_value (AdwAnimation* self /*none*/);
// gdouble adw_animation_get_value (::AdwAnimation* self /*none*/);
gdouble base::AnimationBase::get_value () noexcept
{
  typedef gdouble (*call_wrap_t) (::AdwAnimation* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_animation_get_value;
  auto _temp_ret = call_wrap_v ((::AdwAnimation*) (gobj_()));
  return _temp_ret;
}

// GtkWidget* /*none*/ adw_animation_get_widget (AdwAnimation* self /*none*/);
// ::GtkWidget* /*none*/ adw_animation_get_widget (::AdwAnimation* self /*none*/);
Gtk::Widget base::AnimationBase::get_widget () noexcept
{
  typedef ::GtkWidget* (*call_wrap_t) (::AdwAnimation* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_animation_get_widget;
  auto _temp_ret = call_wrap_v ((::AdwAnimation*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// void adw_animation_pause (AdwAnimation* self /*none*/);
// void adw_animation_pause (::AdwAnimation* self /*none*/);
void base::AnimationBase::pause () noexcept
{
  typedef void (*call_wrap_t) (::AdwAnimation* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_animation_pause;
  call_wrap_v ((::AdwAnimation*) (gobj_()));
}

// void adw_animation_play (AdwAnimation* self /*none*/);
// void adw_animation_play (::AdwAnimation* self /*none*/);
void base::AnimationBase::play () noexcept
{
  typedef void (*call_wrap_t) (::AdwAnimation* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_animation_play;
  call_wrap_v ((::AdwAnimation*) (gobj_()));
}

// void adw_animation_reset (AdwAnimation* self /*none*/);
// void adw_animation_reset (::AdwAnimation* self /*none*/);
void base::AnimationBase::reset () noexcept
{
  typedef void (*call_wrap_t) (::AdwAnimation* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_animation_reset;
  call_wrap_v ((::AdwAnimation*) (gobj_()));
}

// void adw_animation_resume (AdwAnimation* self /*none*/);
// void adw_animation_resume (::AdwAnimation* self /*none*/);
void base::AnimationBase::resume () noexcept
{
  typedef void (*call_wrap_t) (::AdwAnimation* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_animation_resume;
  call_wrap_v ((::AdwAnimation*) (gobj_()));
}

// void adw_animation_set_follow_enable_animations_setting (AdwAnimation* self /*none*/, gboolean setting);
// void adw_animation_set_follow_enable_animations_setting (::AdwAnimation* self /*none*/, gboolean setting);
void base::AnimationBase::set_follow_enable_animations_setting (gboolean setting) noexcept
{
  typedef void (*call_wrap_t) (::AdwAnimation* self, gboolean setting);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_animation_set_follow_enable_animations_setting;
  auto setting_to_c = setting;
  call_wrap_v ((::AdwAnimation*) (gobj_()), (gboolean) (setting_to_c));
}

// void adw_animation_set_target (AdwAnimation* self /*none*/, AdwAnimationTarget* target /*none*/);
// void adw_animation_set_target (::AdwAnimation* self /*none*/, ::AdwAnimationTarget* target /*none*/);
void base::AnimationBase::set_target (Adw::AnimationTarget target) noexcept
{
  typedef void (*call_wrap_t) (::AdwAnimation* self, ::AdwAnimationTarget* target);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_animation_set_target;
  auto target_to_c = gi::unwrap (target, gi::transfer_none);
  call_wrap_v ((::AdwAnimation*) (gobj_()), (::AdwAnimationTarget*) (target_to_c));
}

// void adw_animation_skip (AdwAnimation* self /*none*/);
// void adw_animation_skip (::AdwAnimation* self /*none*/);
void base::AnimationBase::skip () noexcept
{
  typedef void (*call_wrap_t) (::AdwAnimation* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_animation_skip;
  call_wrap_v ((::AdwAnimation*) (gobj_()));
}



} // namespace base

} // namespace Adw

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<adw/animation_extra_def_impl.hpp>)
#include <adw/animation_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<adw/animation_extra_impl.hpp>)
#include <adw/animation_extra_impl.hpp>
#endif
#endif

#endif
