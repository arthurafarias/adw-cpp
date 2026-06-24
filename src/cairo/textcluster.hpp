// AUTO-GENERATED

#ifndef _GI_CAIRO_TEXTCLUSTER_HPP_
#define _GI_CAIRO_TEXTCLUSTER_HPP_


namespace gi {

namespace repository {

namespace cairo {

class TextCluster_Ref;

class TextCluster;

namespace base {


#define GI_CAIRO_TEXTCLUSTER_BASE base::TextClusterBase
class TextClusterBase : public gi::detail::GBoxedWrapperBase<TextClusterBase, ::cairo_text_cluster_t>
{
typedef gi::detail::GBoxedWrapperBase<TextClusterBase, ::cairo_text_cluster_t> super_type;
public:

TextClusterBase (std::nullptr_t = nullptr) : super_type() {}

static GType get_type_ () G_GNUC_CONST { return cairo_gobject_text_cluster_get_type(); } 

// gint TextCluster::num_bytes (const ::cairo_text_cluster_t* obj /*none*/);
// gint TextCluster::num_bytes (const ::cairo_text_cluster_t* obj /*none*/);
GI_INLINE_DECL gint num_bytes_ () const noexcept;

//  TextCluster::num_bytes (::cairo_text_cluster_t* obj /*none*/, gint _value);
// void TextCluster::num_bytes (::cairo_text_cluster_t* obj /*none*/, gint _value);
GI_INLINE_DECL void num_bytes_ (gint _value) noexcept;

// gint TextCluster::num_glyphs (const ::cairo_text_cluster_t* obj /*none*/);
// gint TextCluster::num_glyphs (const ::cairo_text_cluster_t* obj /*none*/);
GI_INLINE_DECL gint num_glyphs_ () const noexcept;

//  TextCluster::num_glyphs (::cairo_text_cluster_t* obj /*none*/, gint _value);
// void TextCluster::num_glyphs (::cairo_text_cluster_t* obj /*none*/, gint _value);
GI_INLINE_DECL void num_glyphs_ (gint _value) noexcept;

}; // class

} // namespace base

} // namespace cairo

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<cairo/textcluster_extra_def.hpp>)
#include <cairo/textcluster_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<cairo/textcluster_extra.hpp>)
#include <cairo/textcluster_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace cairo {

class TextCluster_Ref;

class TextCluster : public gi::detail::GBoxedWrapper<TextCluster, ::cairo_text_cluster_t, GI_CAIRO_TEXTCLUSTER_BASE, TextCluster_Ref>
{ typedef gi::detail::GBoxedWrapper<TextCluster, ::cairo_text_cluster_t, GI_CAIRO_TEXTCLUSTER_BASE, TextCluster_Ref> super_type; using super_type::super_type; };


class TextCluster_Ref : public gi::detail::GBoxedRefWrapper<TextCluster, ::cairo_text_cluster_t, GI_CAIRO_TEXTCLUSTER_BASE>
{ typedef gi::detail::GBoxedRefWrapper<TextCluster, ::cairo_text_cluster_t, GI_CAIRO_TEXTCLUSTER_BASE> super_type; using super_type::super_type; };

} // namespace cairo

template<> struct declare_cpptype_of<::cairo_text_cluster_t>
{ typedef cairo::TextCluster type; }; 

} // namespace repository

} // namespace gi

#endif
