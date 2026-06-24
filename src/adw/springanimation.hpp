// AUTO-GENERATED

#ifndef _GI_ADW_SPRINGANIMATION_HPP_
#define _GI_ADW_SPRINGANIMATION_HPP_

#include "animation.hpp"

namespace gi {

namespace repository {

namespace Adw {

class AnimationTarget;
class SpringParams;
class SpringParams_Ref;

class SpringAnimation;

namespace base {


#define GI_ADW_SPRINGANIMATION_BASE base::SpringAnimationBase
class SpringAnimationBase : public Adw::Animation
{
typedef Adw::Animation super_type;
public:
typedef ::AdwSpringAnimation BaseObjectType;

SpringAnimationBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return adw_spring_animation_get_type(); } 

// AdwAnimation* /*none*/ adw_spring_animation_new (GtkWidget* widget /*none*/, double from, double to, AdwSpringParams* spring_params /*full*/, AdwAnimationTarget* target /*full*/);
// ::AdwSpringAnimation* /*none*/ adw_spring_animation_new (::GtkWidget* widget /*none*/, gdouble from, gdouble to, ::AdwSpringParams* spring_params /*full*/, ::AdwAnimationTarget* target /*full*/);
static GI_INLINE_DECL Adw::SpringAnimation new_ (Gtk::Widget widget, gdouble from, gdouble to, Adw::SpringParams spring_params, Adw::AnimationTarget target) noexcept;

// double adw_spring_animation_calculate_value (AdwSpringAnimation* self /*none*/, guint time);
// gdouble adw_spring_animation_calculate_value (::AdwSpringAnimation* self /*none*/, guint time);
GI_INLINE_DECL gdouble calculate_value (guint time) noexcept;

// double adw_spring_animation_calculate_velocity (AdwSpringAnimation* self /*none*/, guint time);
// gdouble adw_spring_animation_calculate_velocity (::AdwSpringAnimation* self /*none*/, guint time);
GI_INLINE_DECL gdouble calculate_velocity (guint time) noexcept;

// gboolean adw_spring_animation_get_clamp (AdwSpringAnimation* self /*none*/);
// gboolean adw_spring_animation_get_clamp (::AdwSpringAnimation* self /*none*/);
GI_INLINE_DECL bool get_clamp () noexcept;

// double adw_spring_animation_get_epsilon (AdwSpringAnimation* self /*none*/);
// gdouble adw_spring_animation_get_epsilon (::AdwSpringAnimation* self /*none*/);
GI_INLINE_DECL gdouble get_epsilon () noexcept;

// guint adw_spring_animation_get_estimated_duration (AdwSpringAnimation* self /*none*/);
// guint adw_spring_animation_get_estimated_duration (::AdwSpringAnimation* self /*none*/);
GI_INLINE_DECL guint get_estimated_duration () noexcept;

// double adw_spring_animation_get_initial_velocity (AdwSpringAnimation* self /*none*/);
// gdouble adw_spring_animation_get_initial_velocity (::AdwSpringAnimation* self /*none*/);
GI_INLINE_DECL gdouble get_initial_velocity () noexcept;

// AdwSpringParams* /*none*/ adw_spring_animation_get_spring_params (AdwSpringAnimation* self /*none*/);
// ::AdwSpringParams* /*none*/ adw_spring_animation_get_spring_params (::AdwSpringAnimation* self /*none*/);
GI_INLINE_DECL Adw::SpringParams_Ref get_spring_params () noexcept;

// double adw_spring_animation_get_value_from (AdwSpringAnimation* self /*none*/);
// gdouble adw_spring_animation_get_value_from (::AdwSpringAnimation* self /*none*/);
GI_INLINE_DECL gdouble get_value_from () noexcept;

// double adw_spring_animation_get_value_to (AdwSpringAnimation* self /*none*/);
// gdouble adw_spring_animation_get_value_to (::AdwSpringAnimation* self /*none*/);
GI_INLINE_DECL gdouble get_value_to () noexcept;

// double adw_spring_animation_get_velocity (AdwSpringAnimation* self /*none*/);
// gdouble adw_spring_animation_get_velocity (::AdwSpringAnimation* self /*none*/);
GI_INLINE_DECL gdouble get_velocity () noexcept;

// void adw_spring_animation_set_clamp (AdwSpringAnimation* self /*none*/, gboolean clamp);
// void adw_spring_animation_set_clamp (::AdwSpringAnimation* self /*none*/, gboolean clamp);
GI_INLINE_DECL void set_clamp (gboolean clamp) noexcept;

// void adw_spring_animation_set_epsilon (AdwSpringAnimation* self /*none*/, double epsilon);
// void adw_spring_animation_set_epsilon (::AdwSpringAnimation* self /*none*/, gdouble epsilon);
GI_INLINE_DECL void set_epsilon (gdouble epsilon) noexcept;

// void adw_spring_animation_set_initial_velocity (AdwSpringAnimation* self /*none*/, double velocity);
// void adw_spring_animation_set_initial_velocity (::AdwSpringAnimation* self /*none*/, gdouble velocity);
GI_INLINE_DECL void set_initial_velocity (gdouble velocity) noexcept;

// void adw_spring_animation_set_spring_params (AdwSpringAnimation* self /*none*/, AdwSpringParams* spring_params /*none*/);
// void adw_spring_animation_set_spring_params (::AdwSpringAnimation* self /*none*/, ::AdwSpringParams* spring_params /*none*/);
GI_INLINE_DECL void set_spring_params (Adw::SpringParams_Ref spring_params) noexcept;

// void adw_spring_animation_set_value_from (AdwSpringAnimation* self /*none*/, double value);
// void adw_spring_animation_set_value_from (::AdwSpringAnimation* self /*none*/, gdouble value);
GI_INLINE_DECL void set_value_from (gdouble value) noexcept;

// void adw_spring_animation_set_value_to (AdwSpringAnimation* self /*none*/, double value);
// void adw_spring_animation_set_value_to (::AdwSpringAnimation* self /*none*/, gdouble value);
GI_INLINE_DECL void set_value_to (gdouble value) noexcept;

gi::property_proxy<bool, base::SpringAnimationBase> property_clamp()
{ return gi::property_proxy<bool, base::SpringAnimationBase> (*this, "clamp"); }
const gi::property_proxy<bool, base::SpringAnimationBase> property_clamp() const
{ return gi::property_proxy<bool, base::SpringAnimationBase> (*this, "clamp"); }

gi::property_proxy<gdouble, base::SpringAnimationBase> property_epsilon()
{ return gi::property_proxy<gdouble, base::SpringAnimationBase> (*this, "epsilon"); }
const gi::property_proxy<gdouble, base::SpringAnimationBase> property_epsilon() const
{ return gi::property_proxy<gdouble, base::SpringAnimationBase> (*this, "epsilon"); }

gi::property_proxy<guint, base::SpringAnimationBase> property_estimated_duration()
{ return gi::property_proxy<guint, base::SpringAnimationBase> (*this, "estimated-duration"); }
const gi::property_proxy<guint, base::SpringAnimationBase> property_estimated_duration() const
{ return gi::property_proxy<guint, base::SpringAnimationBase> (*this, "estimated-duration"); }

gi::property_proxy<gdouble, base::SpringAnimationBase> property_initial_velocity()
{ return gi::property_proxy<gdouble, base::SpringAnimationBase> (*this, "initial-velocity"); }
const gi::property_proxy<gdouble, base::SpringAnimationBase> property_initial_velocity() const
{ return gi::property_proxy<gdouble, base::SpringAnimationBase> (*this, "initial-velocity"); }

gi::property_proxy<Adw::SpringParams, base::SpringAnimationBase> property_spring_params()
{ return gi::property_proxy<Adw::SpringParams, base::SpringAnimationBase> (*this, "spring-params"); }
const gi::property_proxy<Adw::SpringParams, base::SpringAnimationBase> property_spring_params() const
{ return gi::property_proxy<Adw::SpringParams, base::SpringAnimationBase> (*this, "spring-params"); }

gi::property_proxy<gdouble, base::SpringAnimationBase> property_value_from()
{ return gi::property_proxy<gdouble, base::SpringAnimationBase> (*this, "value-from"); }
const gi::property_proxy<gdouble, base::SpringAnimationBase> property_value_from() const
{ return gi::property_proxy<gdouble, base::SpringAnimationBase> (*this, "value-from"); }

gi::property_proxy<gdouble, base::SpringAnimationBase> property_value_to()
{ return gi::property_proxy<gdouble, base::SpringAnimationBase> (*this, "value-to"); }
const gi::property_proxy<gdouble, base::SpringAnimationBase> property_value_to() const
{ return gi::property_proxy<gdouble, base::SpringAnimationBase> (*this, "value-to"); }

gi::property_proxy<gdouble, base::SpringAnimationBase> property_velocity()
{ return gi::property_proxy<gdouble, base::SpringAnimationBase> (*this, "velocity"); }
const gi::property_proxy<gdouble, base::SpringAnimationBase> property_velocity() const
{ return gi::property_proxy<gdouble, base::SpringAnimationBase> (*this, "velocity"); }

}; // class

} // namespace base

} // namespace Adw

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<adw/springanimation_extra_def.hpp>)
#include <adw/springanimation_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<adw/springanimation_extra.hpp>)
#include <adw/springanimation_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Adw {

class SpringAnimation : public GI_ADW_SPRINGANIMATION_BASE
{ typedef GI_ADW_SPRINGANIMATION_BASE super_type; using super_type::super_type; };

} // namespace Adw

template<> struct declare_cpptype_of<::AdwSpringAnimation>
{ typedef Adw::SpringAnimation type; }; 

} // namespace repository

} // namespace gi

#endif
