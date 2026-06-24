// AUTO-GENERATED

#ifndef _GI_ADW_CALLBACKANIMATIONTARGET_HPP_
#define _GI_ADW_CALLBACKANIMATIONTARGET_HPP_

#include "animationtarget.hpp"

namespace gi {

namespace repository {

namespace Adw {


class CallbackAnimationTarget;

namespace base {


#define GI_ADW_CALLBACKANIMATIONTARGET_BASE base::CallbackAnimationTargetBase
class CallbackAnimationTargetBase : public Adw::AnimationTarget
{
typedef Adw::AnimationTarget super_type;
public:
typedef ::AdwCallbackAnimationTarget BaseObjectType;

CallbackAnimationTargetBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return adw_callback_animation_target_get_type(); } 

// AdwAnimationTarget* /*full*/ adw_callback_animation_target_new (AdwAnimationTargetFunc callback /*none*/, gpointer user_data, GDestroyNotify destroy /*none*/);
// ::AdwCallbackAnimationTarget* /*full*/ adw_callback_animation_target_new (Adw::AnimationTargetFunc::cfunction_type callback /*none*/, void* user_data, GLib::DestroyNotify::cfunction_type destroy /*none*/);
static GI_INLINE_DECL Adw::CallbackAnimationTarget new_ (Adw::AnimationTargetFunc callback) noexcept;

}; // class

} // namespace base

} // namespace Adw

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<adw/callbackanimationtarget_extra_def.hpp>)
#include <adw/callbackanimationtarget_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<adw/callbackanimationtarget_extra.hpp>)
#include <adw/callbackanimationtarget_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Adw {

class CallbackAnimationTarget : public GI_ADW_CALLBACKANIMATIONTARGET_BASE
{ typedef GI_ADW_CALLBACKANIMATIONTARGET_BASE super_type; using super_type::super_type; };

} // namespace Adw

template<> struct declare_cpptype_of<::AdwCallbackAnimationTarget>
{ typedef Adw::CallbackAnimationTarget type; }; 

} // namespace repository

} // namespace gi

#endif
