// AUTO-GENERATED

#ifndef _GI_ADW_PROPERTYANIMATIONTARGET_IMPL_HPP_
#define _GI_ADW_PROPERTYANIMATIONTARGET_IMPL_HPP_

namespace gi {

namespace repository {

namespace Adw {

namespace base {

// AdwAnimationTarget* /*full*/ adw_property_animation_target_new (GObject* object /*none*/, const char* property_name /*none*/);
// ::AdwPropertyAnimationTarget* /*full*/ adw_property_animation_target_new (::GObject* object /*none*/, const char* property_name /*none*/);
Adw::PropertyAnimationTarget base::PropertyAnimationTargetBase::new_ (GObject::Object object, const gi::cstring_v property_name) noexcept
{
  typedef ::AdwPropertyAnimationTarget* (*call_wrap_t) (::GObject* object, const char* property_name);
  call_wrap_t call_wrap_v = (call_wrap_t) adw_property_animation_target_new;
  auto property_name_to_c = gi::unwrap (property_name, gi::transfer_none);
  auto object_to_c = gi::unwrap (object, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GObject*) (object_to_c), (const char*) (property_name_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// AdwAnimationTarget* /*full*/ adw_property_animation_target_new_for_pspec (GObject* object /*none*/, GParamSpec* pspec /*none*/);
// ::AdwPropertyAnimationTarget* /*full*/ adw_property_animation_target_new_for_pspec (::GObject* object /*none*/, ::GParamSpec* pspec /*none*/);
Adw::PropertyAnimationTarget base::PropertyAnimationTargetBase::new_for_pspec (GObject::Object object, GObject::ParamSpec pspec) noexcept
{
  typedef ::AdwPropertyAnimationTarget* (*call_wrap_t) (::GObject* object, ::GParamSpec* pspec);
  call_wrap_t call_wrap_v = (call_wrap_t) adw_property_animation_target_new_for_pspec;
  auto pspec_to_c = gi::unwrap (pspec, gi::transfer_none);
  auto object_to_c = gi::unwrap (object, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GObject*) (object_to_c), (::GParamSpec*) (pspec_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// GObject* /*none*/ adw_property_animation_target_get_object (AdwPropertyAnimationTarget* self /*none*/);
// ::GObject* /*none*/ adw_property_animation_target_get_object (::AdwPropertyAnimationTarget* self /*none*/);
GObject::Object base::PropertyAnimationTargetBase::get_object () noexcept
{
  typedef ::GObject* (*call_wrap_t) (::AdwPropertyAnimationTarget* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_property_animation_target_get_object;
  auto _temp_ret = call_wrap_v ((::AdwPropertyAnimationTarget*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// GParamSpec* /*none*/ adw_property_animation_target_get_pspec (AdwPropertyAnimationTarget* self /*none*/);
// ::GParamSpec* /*none*/ adw_property_animation_target_get_pspec (::AdwPropertyAnimationTarget* self /*none*/);
GObject::ParamSpec base::PropertyAnimationTargetBase::get_pspec () noexcept
{
  typedef ::GParamSpec* (*call_wrap_t) (::AdwPropertyAnimationTarget* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_property_animation_target_get_pspec;
  auto _temp_ret = call_wrap_v ((::AdwPropertyAnimationTarget*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}


} // namespace base

} // namespace Adw

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<adw/propertyanimationtarget_extra_def_impl.hpp>)
#include <adw/propertyanimationtarget_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<adw/propertyanimationtarget_extra_impl.hpp>)
#include <adw/propertyanimationtarget_extra_impl.hpp>
#endif
#endif

#endif
