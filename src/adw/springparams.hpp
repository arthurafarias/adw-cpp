// AUTO-GENERATED

#ifndef _GI_ADW_SPRINGPARAMS_HPP_
#define _GI_ADW_SPRINGPARAMS_HPP_


namespace gi {

namespace repository {

namespace Adw {

class SpringParams_Ref;

class SpringParams;

namespace base {


#define GI_ADW_SPRINGPARAMS_BASE base::SpringParamsBase
class SpringParamsBase : public gi::detail::GBoxedWrapperBase<SpringParamsBase, ::AdwSpringParams>
{
typedef gi::detail::GBoxedWrapperBase<SpringParamsBase, ::AdwSpringParams> super_type;
public:

SpringParamsBase (std::nullptr_t = nullptr) : super_type() {}

static GType get_type_ () G_GNUC_CONST { return adw_spring_params_get_type(); } 

// AdwSpringParams* /*full*/ adw_spring_params_new (double damping_ratio, double mass, double stiffness);
// ::AdwSpringParams* /*full*/ adw_spring_params_new (gdouble damping_ratio, gdouble mass, gdouble stiffness);
static GI_INLINE_DECL Adw::SpringParams new_ (gdouble damping_ratio, gdouble mass, gdouble stiffness) noexcept;

// AdwSpringParams* /*full*/ adw_spring_params_new_full (double damping, double mass, double stiffness);
// ::AdwSpringParams* /*full*/ adw_spring_params_new_full (gdouble damping, gdouble mass, gdouble stiffness);
static GI_INLINE_DECL Adw::SpringParams new_full (gdouble damping, gdouble mass, gdouble stiffness) noexcept;

// double adw_spring_params_get_damping (AdwSpringParams* self /*none*/);
// gdouble adw_spring_params_get_damping (::AdwSpringParams* self /*none*/);
GI_INLINE_DECL gdouble get_damping () noexcept;

// double adw_spring_params_get_damping_ratio (AdwSpringParams* self /*none*/);
// gdouble adw_spring_params_get_damping_ratio (::AdwSpringParams* self /*none*/);
GI_INLINE_DECL gdouble get_damping_ratio () noexcept;

// double adw_spring_params_get_mass (AdwSpringParams* self /*none*/);
// gdouble adw_spring_params_get_mass (::AdwSpringParams* self /*none*/);
GI_INLINE_DECL gdouble get_mass () noexcept;

// double adw_spring_params_get_stiffness (AdwSpringParams* self /*none*/);
// gdouble adw_spring_params_get_stiffness (::AdwSpringParams* self /*none*/);
GI_INLINE_DECL gdouble get_stiffness () noexcept;

// AdwSpringParams* /*full*/ adw_spring_params_ref (AdwSpringParams* self /*none*/);
// ::AdwSpringParams* /*full*/ adw_spring_params_ref (::AdwSpringParams* self /*none*/);
// IGNORE; marked ignore

// void adw_spring_params_unref (AdwSpringParams* self /*none*/);
// void adw_spring_params_unref (::AdwSpringParams* self /*none*/);
// IGNORE; marked ignore

}; // class

} // namespace base

} // namespace Adw

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<adw/springparams_extra_def.hpp>)
#include <adw/springparams_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<adw/springparams_extra.hpp>)
#include <adw/springparams_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Adw {

class SpringParams_Ref;

class SpringParams : public gi::detail::GBoxedWrapper<SpringParams, ::AdwSpringParams, GI_ADW_SPRINGPARAMS_BASE, SpringParams_Ref>
{ typedef gi::detail::GBoxedWrapper<SpringParams, ::AdwSpringParams, GI_ADW_SPRINGPARAMS_BASE, SpringParams_Ref> super_type; using super_type::super_type; };


class SpringParams_Ref : public gi::detail::GBoxedRefWrapper<SpringParams, ::AdwSpringParams, GI_ADW_SPRINGPARAMS_BASE>
{ typedef gi::detail::GBoxedRefWrapper<SpringParams, ::AdwSpringParams, GI_ADW_SPRINGPARAMS_BASE> super_type; using super_type::super_type; };

} // namespace Adw

template<> struct declare_cpptype_of<::AdwSpringParams>
{ typedef Adw::SpringParams type; }; 

} // namespace repository

} // namespace gi

#endif
