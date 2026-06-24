// AUTO-GENERATED

#ifndef _GI_GTK_SVGLOCATION_HPP_
#define _GI_GTK_SVGLOCATION_HPP_


namespace gi {

namespace repository {

namespace Gtk {

class SvgLocation_Ref;

class SvgLocation;

namespace base {


#define GI_GTK_SVGLOCATION_BASE base::SvgLocationBase
class SvgLocationBase : public gi::detail::CBoxedWrapperBase<SvgLocationBase, ::GtkSvgLocation>
{
typedef gi::detail::CBoxedWrapperBase<SvgLocationBase, ::GtkSvgLocation> super_type;
public:

SvgLocationBase (std::nullptr_t = nullptr) : super_type() {}

// gsize SvgLocation::bytes (const ::GtkSvgLocation* obj /*none*/);
// gsize SvgLocation::bytes (const ::GtkSvgLocation* obj /*none*/);
GI_INLINE_DECL gsize bytes_ () const noexcept;

//  SvgLocation::bytes (::GtkSvgLocation* obj /*none*/, gsize _value);
// void SvgLocation::bytes (::GtkSvgLocation* obj /*none*/, gsize _value);
GI_INLINE_DECL void bytes_ (gsize _value) noexcept;

// gsize SvgLocation::lines (const ::GtkSvgLocation* obj /*none*/);
// gsize SvgLocation::lines (const ::GtkSvgLocation* obj /*none*/);
GI_INLINE_DECL gsize lines_ () const noexcept;

//  SvgLocation::lines (::GtkSvgLocation* obj /*none*/, gsize _value);
// void SvgLocation::lines (::GtkSvgLocation* obj /*none*/, gsize _value);
GI_INLINE_DECL void lines_ (gsize _value) noexcept;

// gsize SvgLocation::line_chars (const ::GtkSvgLocation* obj /*none*/);
// gsize SvgLocation::line_chars (const ::GtkSvgLocation* obj /*none*/);
GI_INLINE_DECL gsize line_chars_ () const noexcept;

//  SvgLocation::line_chars (::GtkSvgLocation* obj /*none*/, gsize _value);
// void SvgLocation::line_chars (::GtkSvgLocation* obj /*none*/, gsize _value);
GI_INLINE_DECL void line_chars_ (gsize _value) noexcept;

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/svglocation_extra_def.hpp>)
#include <gtk/svglocation_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/svglocation_extra.hpp>)
#include <gtk/svglocation_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class SvgLocation_Ref;

class SvgLocation : public gi::detail::CBoxedWrapper<SvgLocation, ::GtkSvgLocation, GI_GTK_SVGLOCATION_BASE, SvgLocation_Ref>
{ typedef gi::detail::CBoxedWrapper<SvgLocation, ::GtkSvgLocation, GI_GTK_SVGLOCATION_BASE, SvgLocation_Ref> super_type; using super_type::super_type; };


class SvgLocation_Ref : public gi::detail::CBoxedRefWrapper<SvgLocation, ::GtkSvgLocation, GI_GTK_SVGLOCATION_BASE>
{ typedef gi::detail::CBoxedRefWrapper<SvgLocation, ::GtkSvgLocation, GI_GTK_SVGLOCATION_BASE> super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkSvgLocation>
{ typedef Gtk::SvgLocation type; }; 

} // namespace repository

} // namespace gi

#endif
