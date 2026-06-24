// AUTO-GENERATED

#ifndef _GI_CAIRO_GLYPH_HPP_
#define _GI_CAIRO_GLYPH_HPP_


namespace gi {

namespace repository {

namespace cairo {

class Glyph_Ref;

class Glyph;

namespace base {


#define GI_CAIRO_GLYPH_BASE base::GlyphBase
class GlyphBase : public gi::detail::GBoxedWrapperBase<GlyphBase, ::cairo_glyph_t>
{
typedef gi::detail::GBoxedWrapperBase<GlyphBase, ::cairo_glyph_t> super_type;
public:

GlyphBase (std::nullptr_t = nullptr) : super_type() {}

static GType get_type_ () G_GNUC_CONST { return cairo_gobject_glyph_get_type(); } 

// gulong Glyph::index (const ::cairo_glyph_t* obj /*none*/);
// gulong Glyph::index (const ::cairo_glyph_t* obj /*none*/);
GI_INLINE_DECL gulong index_ () const noexcept;

//  Glyph::index (::cairo_glyph_t* obj /*none*/, gulong _value);
// void Glyph::index (::cairo_glyph_t* obj /*none*/, gulong _value);
GI_INLINE_DECL void index_ (gulong _value) noexcept;

// gdouble Glyph::x (const ::cairo_glyph_t* obj /*none*/);
// gdouble Glyph::x (const ::cairo_glyph_t* obj /*none*/);
GI_INLINE_DECL gdouble x_ () const noexcept;

//  Glyph::x (::cairo_glyph_t* obj /*none*/, gdouble _value);
// void Glyph::x (::cairo_glyph_t* obj /*none*/, gdouble _value);
GI_INLINE_DECL void x_ (gdouble _value) noexcept;

// gdouble Glyph::y (const ::cairo_glyph_t* obj /*none*/);
// gdouble Glyph::y (const ::cairo_glyph_t* obj /*none*/);
GI_INLINE_DECL gdouble y_ () const noexcept;

//  Glyph::y (::cairo_glyph_t* obj /*none*/, gdouble _value);
// void Glyph::y (::cairo_glyph_t* obj /*none*/, gdouble _value);
GI_INLINE_DECL void y_ (gdouble _value) noexcept;

}; // class

} // namespace base

} // namespace cairo

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<cairo/glyph_extra_def.hpp>)
#include <cairo/glyph_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<cairo/glyph_extra.hpp>)
#include <cairo/glyph_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace cairo {

class Glyph_Ref;

class Glyph : public gi::detail::GBoxedWrapper<Glyph, ::cairo_glyph_t, GI_CAIRO_GLYPH_BASE, Glyph_Ref>
{ typedef gi::detail::GBoxedWrapper<Glyph, ::cairo_glyph_t, GI_CAIRO_GLYPH_BASE, Glyph_Ref> super_type; using super_type::super_type; };


class Glyph_Ref : public gi::detail::GBoxedRefWrapper<Glyph, ::cairo_glyph_t, GI_CAIRO_GLYPH_BASE>
{ typedef gi::detail::GBoxedRefWrapper<Glyph, ::cairo_glyph_t, GI_CAIRO_GLYPH_BASE> super_type; using super_type::super_type; };

} // namespace cairo

template<> struct declare_cpptype_of<::cairo_glyph_t>
{ typedef cairo::Glyph type; }; 

} // namespace repository

} // namespace gi

#endif
