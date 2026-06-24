// AUTO-GENERATED

#ifndef _GI_GTK_ACCESSIBLETEXTRANGE_HPP_
#define _GI_GTK_ACCESSIBLETEXTRANGE_HPP_


namespace gi {

namespace repository {

namespace Gtk {

class AccessibleTextRange_Ref;

class AccessibleTextRange;

namespace base {


#define GI_GTK_ACCESSIBLETEXTRANGE_BASE base::AccessibleTextRangeBase
class AccessibleTextRangeBase : public gi::detail::CBoxedWrapperBase<AccessibleTextRangeBase, ::GtkAccessibleTextRange>
{
typedef gi::detail::CBoxedWrapperBase<AccessibleTextRangeBase, ::GtkAccessibleTextRange> super_type;
public:

AccessibleTextRangeBase (std::nullptr_t = nullptr) : super_type() {}

// gsize AccessibleTextRange::start (const ::GtkAccessibleTextRange* obj /*none*/);
// gsize AccessibleTextRange::start (const ::GtkAccessibleTextRange* obj /*none*/);
GI_INLINE_DECL gsize start_ () const noexcept;

//  AccessibleTextRange::start (::GtkAccessibleTextRange* obj /*none*/, gsize _value);
// void AccessibleTextRange::start (::GtkAccessibleTextRange* obj /*none*/, gsize _value);
GI_INLINE_DECL void start_ (gsize _value) noexcept;

// gsize AccessibleTextRange::length (const ::GtkAccessibleTextRange* obj /*none*/);
// gsize AccessibleTextRange::length (const ::GtkAccessibleTextRange* obj /*none*/);
GI_INLINE_DECL gsize length_ () const noexcept;

//  AccessibleTextRange::length (::GtkAccessibleTextRange* obj /*none*/, gsize _value);
// void AccessibleTextRange::length (::GtkAccessibleTextRange* obj /*none*/, gsize _value);
GI_INLINE_DECL void length_ (gsize _value) noexcept;

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/accessibletextrange_extra_def.hpp>)
#include <gtk/accessibletextrange_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/accessibletextrange_extra.hpp>)
#include <gtk/accessibletextrange_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class AccessibleTextRange_Ref;

class AccessibleTextRange : public gi::detail::CBoxedWrapper<AccessibleTextRange, ::GtkAccessibleTextRange, GI_GTK_ACCESSIBLETEXTRANGE_BASE, AccessibleTextRange_Ref>
{ typedef gi::detail::CBoxedWrapper<AccessibleTextRange, ::GtkAccessibleTextRange, GI_GTK_ACCESSIBLETEXTRANGE_BASE, AccessibleTextRange_Ref> super_type; using super_type::super_type; };


class AccessibleTextRange_Ref : public gi::detail::CBoxedRefWrapper<AccessibleTextRange, ::GtkAccessibleTextRange, GI_GTK_ACCESSIBLETEXTRANGE_BASE>
{ typedef gi::detail::CBoxedRefWrapper<AccessibleTextRange, ::GtkAccessibleTextRange, GI_GTK_ACCESSIBLETEXTRANGE_BASE> super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkAccessibleTextRange>
{ typedef Gtk::AccessibleTextRange type; }; 

} // namespace repository

} // namespace gi

#endif
