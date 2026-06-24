// AUTO-GENERATED

#ifndef _GI_ADW_PROPERTYANIMATIONTARGET_HPP_
#define _GI_ADW_PROPERTYANIMATIONTARGET_HPP_

#include "animationtarget.hpp"

namespace gi {

namespace repository {

namespace Adw {


class PropertyAnimationTarget;

namespace base {


#define GI_ADW_PROPERTYANIMATIONTARGET_BASE base::PropertyAnimationTargetBase
class PropertyAnimationTargetBase : public Adw::AnimationTarget
{
typedef Adw::AnimationTarget super_type;
public:
typedef ::AdwPropertyAnimationTarget BaseObjectType;

PropertyAnimationTargetBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return adw_property_animation_target_get_type(); } 

// AdwAnimationTarget* /*full*/ adw_property_animation_target_new (GObject* object /*none*/, const char* property_name /*none*/);
// ::AdwPropertyAnimationTarget* /*full*/ adw_property_animation_target_new (::GObject* object /*none*/, const char* property_name /*none*/);
static GI_INLINE_DECL Adw::PropertyAnimationTarget new_ (GObject::Object object, const gi::cstring_v property_name) noexcept;

// AdwAnimationTarget* /*full*/ adw_property_animation_target_new_for_pspec (GObject* object /*none*/, GParamSpec* pspec /*none*/);
// ::AdwPropertyAnimationTarget* /*full*/ adw_property_animation_target_new_for_pspec (::GObject* object /*none*/, ::GParamSpec* pspec /*none*/);
static GI_INLINE_DECL Adw::PropertyAnimationTarget new_for_pspec (GObject::Object object, GObject::ParamSpec pspec) noexcept;

// GObject* /*none*/ adw_property_animation_target_get_object (AdwPropertyAnimationTarget* self /*none*/);
// ::GObject* /*none*/ adw_property_animation_target_get_object (::AdwPropertyAnimationTarget* self /*none*/);
GI_INLINE_DECL GObject::Object get_object () noexcept;

// GParamSpec* /*none*/ adw_property_animation_target_get_pspec (AdwPropertyAnimationTarget* self /*none*/);
// ::GParamSpec* /*none*/ adw_property_animation_target_get_pspec (::AdwPropertyAnimationTarget* self /*none*/);
GI_INLINE_DECL GObject::ParamSpec get_pspec () noexcept;

gi::property_proxy<GObject::Object, base::PropertyAnimationTargetBase> property_object()
{ return gi::property_proxy<GObject::Object, base::PropertyAnimationTargetBase> (*this, "object"); }
const gi::property_proxy<GObject::Object, base::PropertyAnimationTargetBase> property_object() const
{ return gi::property_proxy<GObject::Object, base::PropertyAnimationTargetBase> (*this, "object"); }

gi::property_proxy<GObject::ParamSpec, base::PropertyAnimationTargetBase> property_pspec()
{ return gi::property_proxy<GObject::ParamSpec, base::PropertyAnimationTargetBase> (*this, "pspec"); }
const gi::property_proxy<GObject::ParamSpec, base::PropertyAnimationTargetBase> property_pspec() const
{ return gi::property_proxy<GObject::ParamSpec, base::PropertyAnimationTargetBase> (*this, "pspec"); }

}; // class

} // namespace base

} // namespace Adw

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<adw/propertyanimationtarget_extra_def.hpp>)
#include <adw/propertyanimationtarget_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<adw/propertyanimationtarget_extra.hpp>)
#include <adw/propertyanimationtarget_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Adw {

class PropertyAnimationTarget : public GI_ADW_PROPERTYANIMATIONTARGET_BASE
{ typedef GI_ADW_PROPERTYANIMATIONTARGET_BASE super_type; using super_type::super_type; };

} // namespace Adw

template<> struct declare_cpptype_of<::AdwPropertyAnimationTarget>
{ typedef Adw::PropertyAnimationTarget type; }; 

} // namespace repository

} // namespace gi

#endif
