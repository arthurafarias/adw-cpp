// AUTO-GENERATED

#ifndef _GI_ADW_TIMEDANIMATION_HPP_
#define _GI_ADW_TIMEDANIMATION_HPP_

#include "animation.hpp"

namespace gi {

namespace repository {

namespace Adw {

class AnimationTarget;

class TimedAnimation;

namespace base {


#define GI_ADW_TIMEDANIMATION_BASE base::TimedAnimationBase
class TimedAnimationBase : public Adw::Animation
{
typedef Adw::Animation super_type;
public:
typedef ::AdwTimedAnimation BaseObjectType;

TimedAnimationBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return adw_timed_animation_get_type(); } 

// AdwAnimation* /*none*/ adw_timed_animation_new (GtkWidget* widget /*none*/, double from, double to, guint duration, AdwAnimationTarget* target /*full*/);
// ::AdwTimedAnimation* /*none*/ adw_timed_animation_new (::GtkWidget* widget /*none*/, gdouble from, gdouble to, guint duration, ::AdwAnimationTarget* target /*full*/);
static GI_INLINE_DECL Adw::TimedAnimation new_ (Gtk::Widget widget, gdouble from, gdouble to, guint duration, Adw::AnimationTarget target) noexcept;

// gboolean adw_timed_animation_get_alternate (AdwTimedAnimation* self /*none*/);
// gboolean adw_timed_animation_get_alternate (::AdwTimedAnimation* self /*none*/);
GI_INLINE_DECL bool get_alternate () noexcept;

// guint adw_timed_animation_get_duration (AdwTimedAnimation* self /*none*/);
// guint adw_timed_animation_get_duration (::AdwTimedAnimation* self /*none*/);
GI_INLINE_DECL guint get_duration () noexcept;

// AdwEasing adw_timed_animation_get_easing (AdwTimedAnimation* self /*none*/);
// ::AdwEasing adw_timed_animation_get_easing (::AdwTimedAnimation* self /*none*/);
GI_INLINE_DECL Adw::Easing get_easing () noexcept;

// guint adw_timed_animation_get_repeat_count (AdwTimedAnimation* self /*none*/);
// guint adw_timed_animation_get_repeat_count (::AdwTimedAnimation* self /*none*/);
GI_INLINE_DECL guint get_repeat_count () noexcept;

// gboolean adw_timed_animation_get_reverse (AdwTimedAnimation* self /*none*/);
// gboolean adw_timed_animation_get_reverse (::AdwTimedAnimation* self /*none*/);
GI_INLINE_DECL bool get_reverse () noexcept;

// double adw_timed_animation_get_value_from (AdwTimedAnimation* self /*none*/);
// gdouble adw_timed_animation_get_value_from (::AdwTimedAnimation* self /*none*/);
GI_INLINE_DECL gdouble get_value_from () noexcept;

// double adw_timed_animation_get_value_to (AdwTimedAnimation* self /*none*/);
// gdouble adw_timed_animation_get_value_to (::AdwTimedAnimation* self /*none*/);
GI_INLINE_DECL gdouble get_value_to () noexcept;

// void adw_timed_animation_set_alternate (AdwTimedAnimation* self /*none*/, gboolean alternate);
// void adw_timed_animation_set_alternate (::AdwTimedAnimation* self /*none*/, gboolean alternate);
GI_INLINE_DECL void set_alternate (gboolean alternate) noexcept;

// void adw_timed_animation_set_duration (AdwTimedAnimation* self /*none*/, guint duration);
// void adw_timed_animation_set_duration (::AdwTimedAnimation* self /*none*/, guint duration);
GI_INLINE_DECL void set_duration (guint duration) noexcept;

// void adw_timed_animation_set_easing (AdwTimedAnimation* self /*none*/, AdwEasing easing);
// void adw_timed_animation_set_easing (::AdwTimedAnimation* self /*none*/, ::AdwEasing easing);
GI_INLINE_DECL void set_easing (Adw::Easing easing) noexcept;

// void adw_timed_animation_set_repeat_count (AdwTimedAnimation* self /*none*/, guint repeat_count);
// void adw_timed_animation_set_repeat_count (::AdwTimedAnimation* self /*none*/, guint repeat_count);
GI_INLINE_DECL void set_repeat_count (guint repeat_count) noexcept;

// void adw_timed_animation_set_reverse (AdwTimedAnimation* self /*none*/, gboolean reverse);
// void adw_timed_animation_set_reverse (::AdwTimedAnimation* self /*none*/, gboolean reverse);
GI_INLINE_DECL void set_reverse (gboolean reverse) noexcept;

// void adw_timed_animation_set_value_from (AdwTimedAnimation* self /*none*/, double value);
// void adw_timed_animation_set_value_from (::AdwTimedAnimation* self /*none*/, gdouble value);
GI_INLINE_DECL void set_value_from (gdouble value) noexcept;

// void adw_timed_animation_set_value_to (AdwTimedAnimation* self /*none*/, double value);
// void adw_timed_animation_set_value_to (::AdwTimedAnimation* self /*none*/, gdouble value);
GI_INLINE_DECL void set_value_to (gdouble value) noexcept;

gi::property_proxy<bool, base::TimedAnimationBase> property_alternate()
{ return gi::property_proxy<bool, base::TimedAnimationBase> (*this, "alternate"); }
const gi::property_proxy<bool, base::TimedAnimationBase> property_alternate() const
{ return gi::property_proxy<bool, base::TimedAnimationBase> (*this, "alternate"); }

gi::property_proxy<guint, base::TimedAnimationBase> property_duration()
{ return gi::property_proxy<guint, base::TimedAnimationBase> (*this, "duration"); }
const gi::property_proxy<guint, base::TimedAnimationBase> property_duration() const
{ return gi::property_proxy<guint, base::TimedAnimationBase> (*this, "duration"); }

gi::property_proxy<Adw::Easing, base::TimedAnimationBase> property_easing()
{ return gi::property_proxy<Adw::Easing, base::TimedAnimationBase> (*this, "easing"); }
const gi::property_proxy<Adw::Easing, base::TimedAnimationBase> property_easing() const
{ return gi::property_proxy<Adw::Easing, base::TimedAnimationBase> (*this, "easing"); }

gi::property_proxy<guint, base::TimedAnimationBase> property_repeat_count()
{ return gi::property_proxy<guint, base::TimedAnimationBase> (*this, "repeat-count"); }
const gi::property_proxy<guint, base::TimedAnimationBase> property_repeat_count() const
{ return gi::property_proxy<guint, base::TimedAnimationBase> (*this, "repeat-count"); }

gi::property_proxy<bool, base::TimedAnimationBase> property_reverse()
{ return gi::property_proxy<bool, base::TimedAnimationBase> (*this, "reverse"); }
const gi::property_proxy<bool, base::TimedAnimationBase> property_reverse() const
{ return gi::property_proxy<bool, base::TimedAnimationBase> (*this, "reverse"); }

gi::property_proxy<gdouble, base::TimedAnimationBase> property_value_from()
{ return gi::property_proxy<gdouble, base::TimedAnimationBase> (*this, "value-from"); }
const gi::property_proxy<gdouble, base::TimedAnimationBase> property_value_from() const
{ return gi::property_proxy<gdouble, base::TimedAnimationBase> (*this, "value-from"); }

gi::property_proxy<gdouble, base::TimedAnimationBase> property_value_to()
{ return gi::property_proxy<gdouble, base::TimedAnimationBase> (*this, "value-to"); }
const gi::property_proxy<gdouble, base::TimedAnimationBase> property_value_to() const
{ return gi::property_proxy<gdouble, base::TimedAnimationBase> (*this, "value-to"); }

}; // class

} // namespace base

} // namespace Adw

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<adw/timedanimation_extra_def.hpp>)
#include <adw/timedanimation_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<adw/timedanimation_extra.hpp>)
#include <adw/timedanimation_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Adw {

class TimedAnimation : public GI_ADW_TIMEDANIMATION_BASE
{ typedef GI_ADW_TIMEDANIMATION_BASE super_type; using super_type::super_type; };

} // namespace Adw

template<> struct declare_cpptype_of<::AdwTimedAnimation>
{ typedef Adw::TimedAnimation type; }; 

} // namespace repository

} // namespace gi

#endif
