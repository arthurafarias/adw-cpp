// AUTO-GENERATED

#ifndef _GI_GDK_CICPPARAMS_IMPL_HPP_
#define _GI_GDK_CICPPARAMS_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gdk {

namespace base {

// GdkCicpParams* /*full*/ gdk_cicp_params_new ();
// ::GdkCicpParams* /*full*/ gdk_cicp_params_new ();
Gdk::CicpParams base::CicpParamsBase::new_ () noexcept
{
  typedef ::GdkCicpParams* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_cicp_params_new;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// GdkColorState* /*full*/ gdk_cicp_params_build_color_state (GdkCicpParams* self /*none*/, GError ** error);
// ::GdkColorState* /*full*/ gdk_cicp_params_build_color_state (::GdkCicpParams* self /*none*/, GError ** error);
Gdk::ColorState base::CicpParamsBase::build_color_state ()
{
  typedef ::GdkColorState* (*call_wrap_t) (::GdkCicpParams* self, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_cicp_params_build_color_state;
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GdkCicpParams*) (gobj_()), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full);
}
Gdk::ColorState base::CicpParamsBase::build_color_state (GLib::Error * _error) noexcept
{
  typedef ::GdkColorState* (*call_wrap_t) (::GdkCicpParams* self, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_cicp_params_build_color_state;
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GdkCicpParams*) (gobj_()), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// guint gdk_cicp_params_get_color_primaries (GdkCicpParams* self /*none*/);
// guint gdk_cicp_params_get_color_primaries (::GdkCicpParams* self /*none*/);
guint base::CicpParamsBase::get_color_primaries () noexcept
{
  typedef guint (*call_wrap_t) (::GdkCicpParams* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_cicp_params_get_color_primaries;
  auto _temp_ret = call_wrap_v ((::GdkCicpParams*) (gobj_()));
  return _temp_ret;
}

// guint gdk_cicp_params_get_matrix_coefficients (GdkCicpParams* self /*none*/);
// guint gdk_cicp_params_get_matrix_coefficients (::GdkCicpParams* self /*none*/);
guint base::CicpParamsBase::get_matrix_coefficients () noexcept
{
  typedef guint (*call_wrap_t) (::GdkCicpParams* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_cicp_params_get_matrix_coefficients;
  auto _temp_ret = call_wrap_v ((::GdkCicpParams*) (gobj_()));
  return _temp_ret;
}

// GdkCicpRange gdk_cicp_params_get_range (GdkCicpParams* self /*none*/);
// ::GdkCicpRange gdk_cicp_params_get_range (::GdkCicpParams* self /*none*/);
Gdk::CicpRange base::CicpParamsBase::get_range () noexcept
{
  typedef ::GdkCicpRange (*call_wrap_t) (::GdkCicpParams* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_cicp_params_get_range;
  auto _temp_ret = call_wrap_v ((::GdkCicpParams*) (gobj_()));
  return gi::wrap (_temp_ret);
}

// guint gdk_cicp_params_get_transfer_function (GdkCicpParams* self /*none*/);
// guint gdk_cicp_params_get_transfer_function (::GdkCicpParams* self /*none*/);
guint base::CicpParamsBase::get_transfer_function () noexcept
{
  typedef guint (*call_wrap_t) (::GdkCicpParams* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_cicp_params_get_transfer_function;
  auto _temp_ret = call_wrap_v ((::GdkCicpParams*) (gobj_()));
  return _temp_ret;
}

// void gdk_cicp_params_set_color_primaries (GdkCicpParams* self /*none*/, guint color_primaries);
// void gdk_cicp_params_set_color_primaries (::GdkCicpParams* self /*none*/, guint color_primaries);
void base::CicpParamsBase::set_color_primaries (guint color_primaries) noexcept
{
  typedef void (*call_wrap_t) (::GdkCicpParams* self, guint color_primaries);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_cicp_params_set_color_primaries;
  auto color_primaries_to_c = color_primaries;
  call_wrap_v ((::GdkCicpParams*) (gobj_()), (guint) (color_primaries_to_c));
}

// void gdk_cicp_params_set_matrix_coefficients (GdkCicpParams* self /*none*/, guint matrix_coefficients);
// void gdk_cicp_params_set_matrix_coefficients (::GdkCicpParams* self /*none*/, guint matrix_coefficients);
void base::CicpParamsBase::set_matrix_coefficients (guint matrix_coefficients) noexcept
{
  typedef void (*call_wrap_t) (::GdkCicpParams* self, guint matrix_coefficients);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_cicp_params_set_matrix_coefficients;
  auto matrix_coefficients_to_c = matrix_coefficients;
  call_wrap_v ((::GdkCicpParams*) (gobj_()), (guint) (matrix_coefficients_to_c));
}

// void gdk_cicp_params_set_range (GdkCicpParams* self /*none*/, GdkCicpRange range);
// void gdk_cicp_params_set_range (::GdkCicpParams* self /*none*/, ::GdkCicpRange range);
void base::CicpParamsBase::set_range (Gdk::CicpRange range) noexcept
{
  typedef void (*call_wrap_t) (::GdkCicpParams* self, ::GdkCicpRange range);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_cicp_params_set_range;
  auto range_to_c = gi::unwrap (range);
  call_wrap_v ((::GdkCicpParams*) (gobj_()), (::GdkCicpRange) (range_to_c));
}

// void gdk_cicp_params_set_transfer_function (GdkCicpParams* self /*none*/, guint transfer_function);
// void gdk_cicp_params_set_transfer_function (::GdkCicpParams* self /*none*/, guint transfer_function);
void base::CicpParamsBase::set_transfer_function (guint transfer_function) noexcept
{
  typedef void (*call_wrap_t) (::GdkCicpParams* self, guint transfer_function);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_cicp_params_set_transfer_function;
  auto transfer_function_to_c = transfer_function;
  call_wrap_v ((::GdkCicpParams*) (gobj_()), (guint) (transfer_function_to_c));
}


} // namespace base

} // namespace Gdk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gdk/cicpparams_extra_def_impl.hpp>)
#include <gdk/cicpparams_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gdk/cicpparams_extra_impl.hpp>)
#include <gdk/cicpparams_extra_impl.hpp>
#endif
#endif

#endif
