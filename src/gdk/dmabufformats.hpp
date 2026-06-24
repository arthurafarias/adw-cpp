// AUTO-GENERATED

#ifndef _GI_GDK_DMABUFFORMATS_HPP_
#define _GI_GDK_DMABUFFORMATS_HPP_


namespace gi {

namespace repository {

namespace Gdk {

class DmabufFormats_Ref;

class DmabufFormats;

namespace base {


#define GI_GDK_DMABUFFORMATS_BASE base::DmabufFormatsBase
class DmabufFormatsBase : public gi::detail::GBoxedWrapperBase<DmabufFormatsBase, ::GdkDmabufFormats>
{
typedef gi::detail::GBoxedWrapperBase<DmabufFormatsBase, ::GdkDmabufFormats> super_type;
public:

DmabufFormatsBase (std::nullptr_t = nullptr) : super_type() {}

static GType get_type_ () G_GNUC_CONST { return gdk_dmabuf_formats_get_type(); } 

// gboolean gdk_dmabuf_formats_contains (GdkDmabufFormats* formats /*none*/, guint32 fourcc, guint64 modifier);
// gboolean gdk_dmabuf_formats_contains (::GdkDmabufFormats* formats /*none*/, guint32 fourcc, guint64 modifier);
GI_INLINE_DECL bool contains (guint32 fourcc, guint64 modifier) noexcept;

// gboolean gdk_dmabuf_formats_equal (const GdkDmabufFormats* formats1 /*none,nullable*/, const GdkDmabufFormats* formats2 /*none,nullable*/);
// gboolean gdk_dmabuf_formats_equal (const ::GdkDmabufFormats* formats1 /*none,nullable*/, const ::GdkDmabufFormats* formats2 /*none,nullable*/);
GI_INLINE_DECL bool equal (const Gdk::DmabufFormats_Ref formats2) const noexcept;
GI_INLINE_DECL bool equal () const noexcept;

// void gdk_dmabuf_formats_get_format (GdkDmabufFormats* formats /*none*/, gsize idx, guint32* fourcc, guint64* modifier);
// void gdk_dmabuf_formats_get_format (::GdkDmabufFormats* formats /*none*/, gsize idx, guint32* fourcc, guint64* modifier);
GI_INLINE_DECL void get_format (gsize idx, guint32 & fourcc, guint64 & modifier) noexcept;
GI_INLINE_DECL std::tuple<guint32, guint64> get_format (gsize idx) noexcept;

// gsize gdk_dmabuf_formats_get_n_formats (GdkDmabufFormats* formats /*none*/);
// gsize gdk_dmabuf_formats_get_n_formats (::GdkDmabufFormats* formats /*none*/);
GI_INLINE_DECL gsize get_n_formats () noexcept;

// GdkDmabufFormats* /*full*/ gdk_dmabuf_formats_ref (GdkDmabufFormats* formats /*none*/);
// ::GdkDmabufFormats* /*full*/ gdk_dmabuf_formats_ref (::GdkDmabufFormats* formats /*none*/);
// IGNORE; marked ignore

// void gdk_dmabuf_formats_unref (GdkDmabufFormats* formats /*none*/);
// void gdk_dmabuf_formats_unref (::GdkDmabufFormats* formats /*none*/);
// IGNORE; marked ignore

}; // class

} // namespace base

} // namespace Gdk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gdk/dmabufformats_extra_def.hpp>)
#include <gdk/dmabufformats_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gdk/dmabufformats_extra.hpp>)
#include <gdk/dmabufformats_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gdk {

class DmabufFormats_Ref;

class DmabufFormats : public gi::detail::GBoxedWrapper<DmabufFormats, ::GdkDmabufFormats, GI_GDK_DMABUFFORMATS_BASE, DmabufFormats_Ref>
{ typedef gi::detail::GBoxedWrapper<DmabufFormats, ::GdkDmabufFormats, GI_GDK_DMABUFFORMATS_BASE, DmabufFormats_Ref> super_type; using super_type::super_type; };


class DmabufFormats_Ref : public gi::detail::GBoxedRefWrapper<DmabufFormats, ::GdkDmabufFormats, GI_GDK_DMABUFFORMATS_BASE>
{ typedef gi::detail::GBoxedRefWrapper<DmabufFormats, ::GdkDmabufFormats, GI_GDK_DMABUFFORMATS_BASE> super_type; using super_type::super_type; };

} // namespace Gdk

template<> struct declare_cpptype_of<::GdkDmabufFormats>
{ typedef Gdk::DmabufFormats type; }; 

} // namespace repository

} // namespace gi

#endif
