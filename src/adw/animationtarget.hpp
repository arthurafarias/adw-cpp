// AUTO-GENERATED

#ifndef _GI_ADW_ANIMATIONTARGET_HPP_
#define _GI_ADW_ANIMATIONTARGET_HPP_


namespace gi {

namespace repository {

namespace Adw {


class AnimationTarget;

namespace base {


#define GI_ADW_ANIMATIONTARGET_BASE base::AnimationTargetBase
class AnimationTargetBase : public GObject::Object
{
typedef GObject::Object super_type;
public:
typedef ::AdwAnimationTarget BaseObjectType;

AnimationTargetBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return adw_animation_target_get_type(); } 

}; // class

} // namespace base

} // namespace Adw

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<adw/animationtarget_extra_def.hpp>)
#include <adw/animationtarget_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<adw/animationtarget_extra.hpp>)
#include <adw/animationtarget_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Adw {

class AnimationTarget : public GI_ADW_ANIMATIONTARGET_BASE
{ typedef GI_ADW_ANIMATIONTARGET_BASE super_type; using super_type::super_type; };

} // namespace Adw

template<> struct declare_cpptype_of<::AdwAnimationTarget>
{ typedef Adw::AnimationTarget type; }; 

} // namespace repository

} // namespace gi

#endif
