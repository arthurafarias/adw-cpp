// AUTO-GENERATED

#ifndef _GI_ADW_ANIMATION_HPP_
#define _GI_ADW_ANIMATION_HPP_


namespace gi {

namespace repository {

namespace Adw {

class AnimationTarget;

class Animation;

namespace base {


#define GI_ADW_ANIMATION_BASE base::AnimationBase
class AnimationBase : public GObject::Object
{
typedef GObject::Object super_type;
public:
typedef ::AdwAnimation BaseObjectType;

AnimationBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return adw_animation_get_type(); } 

// gboolean adw_animation_get_follow_enable_animations_setting (AdwAnimation* self /*none*/);
// gboolean adw_animation_get_follow_enable_animations_setting (::AdwAnimation* self /*none*/);
GI_INLINE_DECL bool get_follow_enable_animations_setting () noexcept;

// AdwAnimationState adw_animation_get_state (AdwAnimation* self /*none*/);
// ::AdwAnimationState adw_animation_get_state (::AdwAnimation* self /*none*/);
GI_INLINE_DECL Adw::AnimationState get_state () noexcept;

// AdwAnimationTarget* /*none*/ adw_animation_get_target (AdwAnimation* self /*none*/);
// ::AdwAnimationTarget* /*none*/ adw_animation_get_target (::AdwAnimation* self /*none*/);
GI_INLINE_DECL Adw::AnimationTarget get_target () noexcept;

// double adw_animation_get_value (AdwAnimation* self /*none*/);
// gdouble adw_animation_get_value (::AdwAnimation* self /*none*/);
GI_INLINE_DECL gdouble get_value () noexcept;

// GtkWidget* /*none*/ adw_animation_get_widget (AdwAnimation* self /*none*/);
// ::GtkWidget* /*none*/ adw_animation_get_widget (::AdwAnimation* self /*none*/);
GI_INLINE_DECL Gtk::Widget get_widget () noexcept;

// void adw_animation_pause (AdwAnimation* self /*none*/);
// void adw_animation_pause (::AdwAnimation* self /*none*/);
GI_INLINE_DECL void pause () noexcept;

// void adw_animation_play (AdwAnimation* self /*none*/);
// void adw_animation_play (::AdwAnimation* self /*none*/);
GI_INLINE_DECL void play () noexcept;

// void adw_animation_reset (AdwAnimation* self /*none*/);
// void adw_animation_reset (::AdwAnimation* self /*none*/);
GI_INLINE_DECL void reset () noexcept;

// void adw_animation_resume (AdwAnimation* self /*none*/);
// void adw_animation_resume (::AdwAnimation* self /*none*/);
GI_INLINE_DECL void resume () noexcept;

// void adw_animation_set_follow_enable_animations_setting (AdwAnimation* self /*none*/, gboolean setting);
// void adw_animation_set_follow_enable_animations_setting (::AdwAnimation* self /*none*/, gboolean setting);
GI_INLINE_DECL void set_follow_enable_animations_setting (gboolean setting) noexcept;

// void adw_animation_set_target (AdwAnimation* self /*none*/, AdwAnimationTarget* target /*none*/);
// void adw_animation_set_target (::AdwAnimation* self /*none*/, ::AdwAnimationTarget* target /*none*/);
GI_INLINE_DECL void set_target (Adw::AnimationTarget target) noexcept;

// void adw_animation_skip (AdwAnimation* self /*none*/);
// void adw_animation_skip (::AdwAnimation* self /*none*/);
GI_INLINE_DECL void skip () noexcept;

gi::property_proxy<bool, base::AnimationBase> property_follow_enable_animations_setting()
{ return gi::property_proxy<bool, base::AnimationBase> (*this, "follow-enable-animations-setting"); }
const gi::property_proxy<bool, base::AnimationBase> property_follow_enable_animations_setting() const
{ return gi::property_proxy<bool, base::AnimationBase> (*this, "follow-enable-animations-setting"); }

gi::property_proxy<Adw::AnimationState, base::AnimationBase> property_state()
{ return gi::property_proxy<Adw::AnimationState, base::AnimationBase> (*this, "state"); }
const gi::property_proxy<Adw::AnimationState, base::AnimationBase> property_state() const
{ return gi::property_proxy<Adw::AnimationState, base::AnimationBase> (*this, "state"); }

gi::property_proxy<Adw::AnimationTarget, base::AnimationBase> property_target()
{ return gi::property_proxy<Adw::AnimationTarget, base::AnimationBase> (*this, "target"); }
const gi::property_proxy<Adw::AnimationTarget, base::AnimationBase> property_target() const
{ return gi::property_proxy<Adw::AnimationTarget, base::AnimationBase> (*this, "target"); }

gi::property_proxy<gdouble, base::AnimationBase> property_value()
{ return gi::property_proxy<gdouble, base::AnimationBase> (*this, "value"); }
const gi::property_proxy<gdouble, base::AnimationBase> property_value() const
{ return gi::property_proxy<gdouble, base::AnimationBase> (*this, "value"); }

gi::property_proxy<Gtk::Widget, base::AnimationBase> property_widget()
{ return gi::property_proxy<Gtk::Widget, base::AnimationBase> (*this, "widget"); }
const gi::property_proxy<Gtk::Widget, base::AnimationBase> property_widget() const
{ return gi::property_proxy<Gtk::Widget, base::AnimationBase> (*this, "widget"); }

// (signal) void done ();
// (signal) void done ();
gi::signal_proxy<void(Adw::Animation)> signal_done()
{ return gi::signal_proxy<void(Adw::Animation)> (*this, "done"); }

}; // class

} // namespace base

} // namespace Adw

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<adw/animation_extra_def.hpp>)
#include <adw/animation_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<adw/animation_extra.hpp>)
#include <adw/animation_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Adw {

class Animation : public GI_ADW_ANIMATION_BASE
{ typedef GI_ADW_ANIMATION_BASE super_type; using super_type::super_type; };

} // namespace Adw

template<> struct declare_cpptype_of<::AdwAnimation>
{ typedef Adw::Animation type; }; 

} // namespace repository

} // namespace gi

#endif
