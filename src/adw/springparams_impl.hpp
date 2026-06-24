// AUTO-GENERATED

#ifndef _GI_ADW_SPRINGPARAMS_IMPL_HPP_
#define _GI_ADW_SPRINGPARAMS_IMPL_HPP_

namespace gi {

namespace repository {

namespace Adw {

namespace base {

// AdwSpringParams* /*full*/ adw_spring_params_new (double damping_ratio, double mass, double stiffness);
// ::AdwSpringParams* /*full*/ adw_spring_params_new (gdouble damping_ratio, gdouble mass, gdouble stiffness);
Adw::SpringParams base::SpringParamsBase::new_ (gdouble damping_ratio, gdouble mass, gdouble stiffness) noexcept
{
  typedef ::AdwSpringParams* (*call_wrap_t) (gdouble damping_ratio, gdouble mass, gdouble stiffness);
  call_wrap_t call_wrap_v = (call_wrap_t) adw_spring_params_new;
  auto stiffness_to_c = stiffness;
  auto mass_to_c = mass;
  auto damping_ratio_to_c = damping_ratio;
  auto _temp_ret = call_wrap_v ((gdouble) (damping_ratio_to_c), (gdouble) (mass_to_c), (gdouble) (stiffness_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// AdwSpringParams* /*full*/ adw_spring_params_new_full (double damping, double mass, double stiffness);
// ::AdwSpringParams* /*full*/ adw_spring_params_new_full (gdouble damping, gdouble mass, gdouble stiffness);
Adw::SpringParams base::SpringParamsBase::new_full (gdouble damping, gdouble mass, gdouble stiffness) noexcept
{
  typedef ::AdwSpringParams* (*call_wrap_t) (gdouble damping, gdouble mass, gdouble stiffness);
  call_wrap_t call_wrap_v = (call_wrap_t) adw_spring_params_new_full;
  auto stiffness_to_c = stiffness;
  auto mass_to_c = mass;
  auto damping_to_c = damping;
  auto _temp_ret = call_wrap_v ((gdouble) (damping_to_c), (gdouble) (mass_to_c), (gdouble) (stiffness_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// double adw_spring_params_get_damping (AdwSpringParams* self /*none*/);
// gdouble adw_spring_params_get_damping (::AdwSpringParams* self /*none*/);
gdouble base::SpringParamsBase::get_damping () noexcept
{
  typedef gdouble (*call_wrap_t) (::AdwSpringParams* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_spring_params_get_damping;
  auto _temp_ret = call_wrap_v ((::AdwSpringParams*) (gobj_()));
  return _temp_ret;
}

// double adw_spring_params_get_damping_ratio (AdwSpringParams* self /*none*/);
// gdouble adw_spring_params_get_damping_ratio (::AdwSpringParams* self /*none*/);
gdouble base::SpringParamsBase::get_damping_ratio () noexcept
{
  typedef gdouble (*call_wrap_t) (::AdwSpringParams* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_spring_params_get_damping_ratio;
  auto _temp_ret = call_wrap_v ((::AdwSpringParams*) (gobj_()));
  return _temp_ret;
}

// double adw_spring_params_get_mass (AdwSpringParams* self /*none*/);
// gdouble adw_spring_params_get_mass (::AdwSpringParams* self /*none*/);
gdouble base::SpringParamsBase::get_mass () noexcept
{
  typedef gdouble (*call_wrap_t) (::AdwSpringParams* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_spring_params_get_mass;
  auto _temp_ret = call_wrap_v ((::AdwSpringParams*) (gobj_()));
  return _temp_ret;
}

// double adw_spring_params_get_stiffness (AdwSpringParams* self /*none*/);
// gdouble adw_spring_params_get_stiffness (::AdwSpringParams* self /*none*/);
gdouble base::SpringParamsBase::get_stiffness () noexcept
{
  typedef gdouble (*call_wrap_t) (::AdwSpringParams* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_spring_params_get_stiffness;
  auto _temp_ret = call_wrap_v ((::AdwSpringParams*) (gobj_()));
  return _temp_ret;
}

// AdwSpringParams* /*full*/ adw_spring_params_ref (AdwSpringParams* self /*none*/);
// ::AdwSpringParams* /*full*/ adw_spring_params_ref (::AdwSpringParams* self /*none*/);
// IGNORE; marked ignore

// void adw_spring_params_unref (AdwSpringParams* self /*none*/);
// void adw_spring_params_unref (::AdwSpringParams* self /*none*/);
// IGNORE; marked ignore


} // namespace base

} // namespace Adw

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<adw/springparams_extra_def_impl.hpp>)
#include <adw/springparams_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<adw/springparams_extra_impl.hpp>)
#include <adw/springparams_extra_impl.hpp>
#endif
#endif

#endif
