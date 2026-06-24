// AUTO-GENERATED

#ifndef _GI_ADW_CALLBACKANIMATIONTARGET_IMPL_HPP_
#define _GI_ADW_CALLBACKANIMATIONTARGET_IMPL_HPP_

namespace gi {

namespace repository {

namespace Adw {

namespace base {

// AdwAnimationTarget* /*full*/ adw_callback_animation_target_new (AdwAnimationTargetFunc callback /*none*/, gpointer user_data, GDestroyNotify destroy /*none*/);
// ::AdwCallbackAnimationTarget* /*full*/ adw_callback_animation_target_new (Adw::AnimationTargetFunc::cfunction_type callback /*none*/, void* user_data, GLib::DestroyNotify::cfunction_type destroy /*none*/);
Adw::CallbackAnimationTarget base::CallbackAnimationTargetBase::new_ (Adw::AnimationTargetFunc callback) noexcept
{
  typedef ::AdwCallbackAnimationTarget* (*call_wrap_t) (Adw::AnimationTargetFunc::cfunction_type callback, void* user_data, GLib::DestroyNotify::cfunction_type destroy);
  call_wrap_t call_wrap_v = (call_wrap_t) adw_callback_animation_target_new;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_notified) : nullptr;
  auto _temp_ret = call_wrap_v ((Adw::AnimationTargetFunc::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_), (GLib::DestroyNotify::cfunction_type) (callback_wrap_ ? &callback_wrap_->destroy : nullptr));
  return gi::wrap (_temp_ret, gi::transfer_full);
}


} // namespace base

} // namespace Adw

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<adw/callbackanimationtarget_extra_def_impl.hpp>)
#include <adw/callbackanimationtarget_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<adw/callbackanimationtarget_extra_impl.hpp>)
#include <adw/callbackanimationtarget_extra_impl.hpp>
#endif
#endif

#endif
