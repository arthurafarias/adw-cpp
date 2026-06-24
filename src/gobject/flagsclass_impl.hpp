// AUTO-GENERATED

#ifndef _GI_GOBJECT_FLAGSCLASS_IMPL_HPP_
#define _GI_GOBJECT_FLAGSCLASS_IMPL_HPP_

namespace gi {

namespace repository {

namespace GObject {

namespace base {

GI_MODULE_STATIC_OR_INLINE guint _field_mask_get (const ::GFlagsClass* obj) { return (guint) obj->mask; }
// guint FlagsClass::mask (const ::GFlagsClass* obj /*none*/);
// guint FlagsClass::mask (const ::GFlagsClass* obj /*none*/);
guint base::FlagsClassBase::mask_ () const noexcept
{
  typedef guint (*call_wrap_t) (const ::GFlagsClass* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_mask_get;
  auto _temp_ret = call_wrap_v ((const ::GFlagsClass*) (gobj_()));
  return _temp_ret;
}

GI_MODULE_STATIC_OR_INLINE void _field_mask_set (::GFlagsClass* obj, guint _value) { obj->mask = (decltype(obj->mask)) _value; }
//  FlagsClass::mask (::GFlagsClass* obj /*none*/, guint _value);
// void FlagsClass::mask (::GFlagsClass* obj /*none*/, guint _value);
void base::FlagsClassBase::mask_ (guint _value) noexcept
{
  typedef void (*call_wrap_t) (::GFlagsClass* obj, guint _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_mask_set;
  auto _value_to_c = _value;
  call_wrap_v ((::GFlagsClass*) (gobj_()), (guint) (_value_to_c));
}

GI_MODULE_STATIC_OR_INLINE guint _field_n_values_get (const ::GFlagsClass* obj) { return (guint) obj->n_values; }
// guint FlagsClass::n_values (const ::GFlagsClass* obj /*none*/);
// guint FlagsClass::n_values (const ::GFlagsClass* obj /*none*/);
guint base::FlagsClassBase::n_values_ () const noexcept
{
  typedef guint (*call_wrap_t) (const ::GFlagsClass* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_n_values_get;
  auto _temp_ret = call_wrap_v ((const ::GFlagsClass*) (gobj_()));
  return _temp_ret;
}

GI_MODULE_STATIC_OR_INLINE void _field_n_values_set (::GFlagsClass* obj, guint _value) { obj->n_values = (decltype(obj->n_values)) _value; }
//  FlagsClass::n_values (::GFlagsClass* obj /*none*/, guint _value);
// void FlagsClass::n_values (::GFlagsClass* obj /*none*/, guint _value);
void base::FlagsClassBase::n_values_ (guint _value) noexcept
{
  typedef void (*call_wrap_t) (::GFlagsClass* obj, guint _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_n_values_set;
  auto _value_to_c = _value;
  call_wrap_v ((::GFlagsClass*) (gobj_()), (guint) (_value_to_c));
}


} // namespace base

} // namespace GObject

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gobject/flagsclass_extra_def_impl.hpp>)
#include <gobject/flagsclass_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gobject/flagsclass_extra_impl.hpp>)
#include <gobject/flagsclass_extra_impl.hpp>
#endif
#endif

#endif
