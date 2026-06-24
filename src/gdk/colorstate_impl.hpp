// AUTO-GENERATED

#ifndef _GI_GDK_COLORSTATE_IMPL_HPP_
#define _GI_GDK_COLORSTATE_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gdk {

namespace base {

// GdkCicpParams* /*full,nullable*/ gdk_color_state_create_cicp_params (GdkColorState* self /*none*/);
// ::GdkCicpParams* /*full,nullable*/ gdk_color_state_create_cicp_params (::GdkColorState* self /*none*/);
Gdk::CicpParams base::ColorStateBase::create_cicp_params () noexcept
{
  typedef ::GdkCicpParams* (*call_wrap_t) (::GdkColorState* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_color_state_create_cicp_params;
  auto _temp_ret = call_wrap_v ((::GdkColorState*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// gboolean gdk_color_state_equal (GdkColorState* self /*none*/, GdkColorState* other /*none*/);
// gboolean gdk_color_state_equal (::GdkColorState* self /*none*/, ::GdkColorState* other /*none*/);
bool base::ColorStateBase::equal (Gdk::ColorState_Ref other) noexcept
{
  typedef gboolean (*call_wrap_t) (::GdkColorState* self, ::GdkColorState* other);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_color_state_equal;
  auto other_to_c = gi::unwrap (other, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GdkColorState*) (gobj_()), (::GdkColorState*) (other_to_c));
  return _temp_ret;
}

// gboolean gdk_color_state_equivalent (GdkColorState* self /*none*/, GdkColorState* other /*none*/);
// gboolean gdk_color_state_equivalent (::GdkColorState* self /*none*/, ::GdkColorState* other /*none*/);
bool base::ColorStateBase::equivalent (Gdk::ColorState_Ref other) noexcept
{
  typedef gboolean (*call_wrap_t) (::GdkColorState* self, ::GdkColorState* other);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_color_state_equivalent;
  auto other_to_c = gi::unwrap (other, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GdkColorState*) (gobj_()), (::GdkColorState*) (other_to_c));
  return _temp_ret;
}

// GdkColorState* /*full*/ gdk_color_state_ref (GdkColorState* self /*none*/);
// ::GdkColorState* /*full*/ gdk_color_state_ref (::GdkColorState* self /*none*/);
// IGNORE; marked ignore

// void gdk_color_state_unref (GdkColorState* self /*none*/);
// void gdk_color_state_unref (::GdkColorState* self /*none*/);
// IGNORE; marked ignore

// GdkColorState* /*full*/ gdk_color_state_get_oklab ();
// ::GdkColorState* /*full*/ gdk_color_state_get_oklab ();
Gdk::ColorState base::ColorStateBase::get_oklab () noexcept
{
  typedef ::GdkColorState* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_color_state_get_oklab;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// GdkColorState* /*full*/ gdk_color_state_get_oklch ();
// ::GdkColorState* /*full*/ gdk_color_state_get_oklch ();
Gdk::ColorState base::ColorStateBase::get_oklch () noexcept
{
  typedef ::GdkColorState* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_color_state_get_oklch;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// GdkColorState* /*full*/ gdk_color_state_get_rec2100_linear ();
// ::GdkColorState* /*full*/ gdk_color_state_get_rec2100_linear ();
Gdk::ColorState base::ColorStateBase::get_rec2100_linear () noexcept
{
  typedef ::GdkColorState* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_color_state_get_rec2100_linear;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// GdkColorState* /*full*/ gdk_color_state_get_rec2100_pq ();
// ::GdkColorState* /*full*/ gdk_color_state_get_rec2100_pq ();
Gdk::ColorState base::ColorStateBase::get_rec2100_pq () noexcept
{
  typedef ::GdkColorState* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_color_state_get_rec2100_pq;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// GdkColorState* /*full*/ gdk_color_state_get_srgb ();
// ::GdkColorState* /*full*/ gdk_color_state_get_srgb ();
Gdk::ColorState base::ColorStateBase::get_srgb () noexcept
{
  typedef ::GdkColorState* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_color_state_get_srgb;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// GdkColorState* /*full*/ gdk_color_state_get_srgb_linear ();
// ::GdkColorState* /*full*/ gdk_color_state_get_srgb_linear ();
Gdk::ColorState base::ColorStateBase::get_srgb_linear () noexcept
{
  typedef ::GdkColorState* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_color_state_get_srgb_linear;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_full);
}


} // namespace base

} // namespace Gdk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gdk/colorstate_extra_def_impl.hpp>)
#include <gdk/colorstate_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gdk/colorstate_extra_impl.hpp>)
#include <gdk/colorstate_extra_impl.hpp>
#endif
#endif

#endif
