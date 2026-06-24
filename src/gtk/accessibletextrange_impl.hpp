// AUTO-GENERATED

#ifndef _GI_GTK_ACCESSIBLETEXTRANGE_IMPL_HPP_
#define _GI_GTK_ACCESSIBLETEXTRANGE_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

GI_MODULE_STATIC_OR_INLINE gsize _field_start_get (const ::GtkAccessibleTextRange* obj) { return (gsize) obj->start; }
// gsize AccessibleTextRange::start (const ::GtkAccessibleTextRange* obj /*none*/);
// gsize AccessibleTextRange::start (const ::GtkAccessibleTextRange* obj /*none*/);
gsize base::AccessibleTextRangeBase::start_ () const noexcept
{
  typedef gsize (*call_wrap_t) (const ::GtkAccessibleTextRange* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_start_get;
  auto _temp_ret = call_wrap_v ((const ::GtkAccessibleTextRange*) (gobj_()));
  return _temp_ret;
}

GI_MODULE_STATIC_OR_INLINE void _field_start_set (::GtkAccessibleTextRange* obj, gsize _value) { obj->start = (decltype(obj->start)) _value; }
//  AccessibleTextRange::start (::GtkAccessibleTextRange* obj /*none*/, gsize _value);
// void AccessibleTextRange::start (::GtkAccessibleTextRange* obj /*none*/, gsize _value);
void base::AccessibleTextRangeBase::start_ (gsize _value) noexcept
{
  typedef void (*call_wrap_t) (::GtkAccessibleTextRange* obj, gsize _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_start_set;
  auto _value_to_c = _value;
  call_wrap_v ((::GtkAccessibleTextRange*) (gobj_()), (gsize) (_value_to_c));
}

GI_MODULE_STATIC_OR_INLINE gsize _field_length_get (const ::GtkAccessibleTextRange* obj) { return (gsize) obj->length; }
// gsize AccessibleTextRange::length (const ::GtkAccessibleTextRange* obj /*none*/);
// gsize AccessibleTextRange::length (const ::GtkAccessibleTextRange* obj /*none*/);
gsize base::AccessibleTextRangeBase::length_ () const noexcept
{
  typedef gsize (*call_wrap_t) (const ::GtkAccessibleTextRange* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_length_get;
  auto _temp_ret = call_wrap_v ((const ::GtkAccessibleTextRange*) (gobj_()));
  return _temp_ret;
}

GI_MODULE_STATIC_OR_INLINE void _field_length_set (::GtkAccessibleTextRange* obj, gsize _value) { obj->length = (decltype(obj->length)) _value; }
//  AccessibleTextRange::length (::GtkAccessibleTextRange* obj /*none*/, gsize _value);
// void AccessibleTextRange::length (::GtkAccessibleTextRange* obj /*none*/, gsize _value);
void base::AccessibleTextRangeBase::length_ (gsize _value) noexcept
{
  typedef void (*call_wrap_t) (::GtkAccessibleTextRange* obj, gsize _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_length_set;
  auto _value_to_c = _value;
  call_wrap_v ((::GtkAccessibleTextRange*) (gobj_()), (gsize) (_value_to_c));
}


} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/accessibletextrange_extra_def_impl.hpp>)
#include <gtk/accessibletextrange_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/accessibletextrange_extra_impl.hpp>)
#include <gtk/accessibletextrange_extra_impl.hpp>
#endif
#endif

#endif
