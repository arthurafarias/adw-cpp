// AUTO-GENERATED

#ifndef _GI_ADW_NONEANIMATIONTARGET_IMPL_HPP_
#define _GI_ADW_NONEANIMATIONTARGET_IMPL_HPP_

namespace gi {

namespace repository {

namespace Adw {

namespace base {

// AdwAnimationTarget* /*full*/ adw_none_animation_target_new ();
// ::AdwNoneAnimationTarget* /*full*/ adw_none_animation_target_new ();
Adw::NoneAnimationTarget base::NoneAnimationTargetBase::new_ () noexcept
{
  typedef ::AdwNoneAnimationTarget* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) adw_none_animation_target_new;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_full);
}


} // namespace base

} // namespace Adw

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<adw/noneanimationtarget_extra_def_impl.hpp>)
#include <adw/noneanimationtarget_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<adw/noneanimationtarget_extra_impl.hpp>)
#include <adw/noneanimationtarget_extra_impl.hpp>
#endif
#endif

#endif
