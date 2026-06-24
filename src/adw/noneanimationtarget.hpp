// AUTO-GENERATED

#ifndef _GI_ADW_NONEANIMATIONTARGET_HPP_
#define _GI_ADW_NONEANIMATIONTARGET_HPP_

#include "animationtarget.hpp"

namespace gi {

namespace repository {

namespace Adw {


class NoneAnimationTarget;

namespace base {


#define GI_ADW_NONEANIMATIONTARGET_BASE base::NoneAnimationTargetBase
class NoneAnimationTargetBase : public Adw::AnimationTarget
{
typedef Adw::AnimationTarget super_type;
public:
typedef ::AdwNoneAnimationTarget BaseObjectType;

NoneAnimationTargetBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return adw_none_animation_target_get_type(); } 

// AdwAnimationTarget* /*full*/ adw_none_animation_target_new ();
// ::AdwNoneAnimationTarget* /*full*/ adw_none_animation_target_new ();
static GI_INLINE_DECL Adw::NoneAnimationTarget new_ () noexcept;

}; // class

} // namespace base

} // namespace Adw

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<adw/noneanimationtarget_extra_def.hpp>)
#include <adw/noneanimationtarget_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<adw/noneanimationtarget_extra.hpp>)
#include <adw/noneanimationtarget_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Adw {

class NoneAnimationTarget : public GI_ADW_NONEANIMATIONTARGET_BASE
{ typedef GI_ADW_NONEANIMATIONTARGET_BASE super_type; using super_type::super_type; };

} // namespace Adw

template<> struct declare_cpptype_of<::AdwNoneAnimationTarget>
{ typedef Adw::NoneAnimationTarget type; }; 

} // namespace repository

} // namespace gi

#endif
