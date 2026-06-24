// AUTO-GENERATED

#ifndef _GI_GDK_DMABUFTEXTUREBUILDER_HPP_
#define _GI_GDK_DMABUFTEXTUREBUILDER_HPP_


namespace gi {

namespace repository {

namespace Gdk {

class ColorState;
class ColorState_Ref;
class Display;
class Texture;

class DmabufTextureBuilder;

namespace base {


#define GI_GDK_DMABUFTEXTUREBUILDER_BASE base::DmabufTextureBuilderBase
class DmabufTextureBuilderBase : public GObject::Object
{
typedef GObject::Object super_type;
public:
typedef ::GdkDmabufTextureBuilder BaseObjectType;

DmabufTextureBuilderBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gdk_dmabuf_texture_builder_get_type(); } 

// GdkDmabufTextureBuilder* /*full*/ gdk_dmabuf_texture_builder_new ();
// ::GdkDmabufTextureBuilder* /*full*/ gdk_dmabuf_texture_builder_new ();
static GI_INLINE_DECL Gdk::DmabufTextureBuilder new_ () noexcept;

// GdkTexture* /*full,nullable*/ gdk_dmabuf_texture_builder_build (GdkDmabufTextureBuilder* self /*none*/, GDestroyNotify destroy /*none,nullable*/, gpointer data, GError ** error);
// ::GdkTexture* /*full,nullable*/ gdk_dmabuf_texture_builder_build (::GdkDmabufTextureBuilder* self /*none*/, GLib::DestroyNotify::cfunction_type destroy /*none,nullable*/, void* data, GError ** error);
GI_INLINE_DECL Gdk::Texture build (GLib::DestroyNotify destroy);
GI_INLINE_DECL Gdk::Texture build (GLib::DestroyNotify destroy, GLib::Error * _error) noexcept;

// GdkColorState* /*none,nullable*/ gdk_dmabuf_texture_builder_get_color_state (GdkDmabufTextureBuilder* self /*none*/);
// ::GdkColorState* /*none,nullable*/ gdk_dmabuf_texture_builder_get_color_state (::GdkDmabufTextureBuilder* self /*none*/);
GI_INLINE_DECL Gdk::ColorState_Ref get_color_state () noexcept;

// GdkDisplay* /*none*/ gdk_dmabuf_texture_builder_get_display (GdkDmabufTextureBuilder* self /*none*/);
// ::GdkDisplay* /*none*/ gdk_dmabuf_texture_builder_get_display (::GdkDmabufTextureBuilder* self /*none*/);
GI_INLINE_DECL Gdk::Display get_display () noexcept;

// int gdk_dmabuf_texture_builder_get_fd (GdkDmabufTextureBuilder* self /*none*/, unsigned int plane);
// gint gdk_dmabuf_texture_builder_get_fd (::GdkDmabufTextureBuilder* self /*none*/, guint plane);
GI_INLINE_DECL gint get_fd (guint plane) noexcept;

// guint32 gdk_dmabuf_texture_builder_get_fourcc (GdkDmabufTextureBuilder* self /*none*/);
// guint32 gdk_dmabuf_texture_builder_get_fourcc (::GdkDmabufTextureBuilder* self /*none*/);
GI_INLINE_DECL guint32 get_fourcc () noexcept;

// unsigned int gdk_dmabuf_texture_builder_get_height (GdkDmabufTextureBuilder* self /*none*/);
// guint gdk_dmabuf_texture_builder_get_height (::GdkDmabufTextureBuilder* self /*none*/);
GI_INLINE_DECL guint get_height () noexcept;

// guint64 gdk_dmabuf_texture_builder_get_modifier (GdkDmabufTextureBuilder* self /*none*/);
// guint64 gdk_dmabuf_texture_builder_get_modifier (::GdkDmabufTextureBuilder* self /*none*/);
GI_INLINE_DECL guint64 get_modifier () noexcept;

// unsigned int gdk_dmabuf_texture_builder_get_n_planes (GdkDmabufTextureBuilder* self /*none*/);
// guint gdk_dmabuf_texture_builder_get_n_planes (::GdkDmabufTextureBuilder* self /*none*/);
GI_INLINE_DECL guint get_n_planes () noexcept;

// unsigned int gdk_dmabuf_texture_builder_get_offset (GdkDmabufTextureBuilder* self /*none*/, unsigned int plane);
// guint gdk_dmabuf_texture_builder_get_offset (::GdkDmabufTextureBuilder* self /*none*/, guint plane);
GI_INLINE_DECL guint get_offset (guint plane) noexcept;

// gboolean gdk_dmabuf_texture_builder_get_premultiplied (GdkDmabufTextureBuilder* self /*none*/);
// gboolean gdk_dmabuf_texture_builder_get_premultiplied (::GdkDmabufTextureBuilder* self /*none*/);
GI_INLINE_DECL bool get_premultiplied () noexcept;

// unsigned int gdk_dmabuf_texture_builder_get_stride (GdkDmabufTextureBuilder* self /*none*/, unsigned int plane);
// guint gdk_dmabuf_texture_builder_get_stride (::GdkDmabufTextureBuilder* self /*none*/, guint plane);
GI_INLINE_DECL guint get_stride (guint plane) noexcept;

// cairo_region_t* /*none,nullable*/ gdk_dmabuf_texture_builder_get_update_region (GdkDmabufTextureBuilder* self /*none*/);
// ::cairo_region_t* /*none,nullable*/ gdk_dmabuf_texture_builder_get_update_region (::GdkDmabufTextureBuilder* self /*none*/);
GI_INLINE_DECL cairo::Region_Ref get_update_region () noexcept;

// GdkTexture* /*none,nullable*/ gdk_dmabuf_texture_builder_get_update_texture (GdkDmabufTextureBuilder* self /*none*/);
// ::GdkTexture* /*none,nullable*/ gdk_dmabuf_texture_builder_get_update_texture (::GdkDmabufTextureBuilder* self /*none*/);
GI_INLINE_DECL Gdk::Texture get_update_texture () noexcept;

// unsigned int gdk_dmabuf_texture_builder_get_width (GdkDmabufTextureBuilder* self /*none*/);
// guint gdk_dmabuf_texture_builder_get_width (::GdkDmabufTextureBuilder* self /*none*/);
GI_INLINE_DECL guint get_width () noexcept;

// void gdk_dmabuf_texture_builder_set_color_state (GdkDmabufTextureBuilder* self /*none*/, GdkColorState* color_state /*none,nullable*/);
// void gdk_dmabuf_texture_builder_set_color_state (::GdkDmabufTextureBuilder* self /*none*/, ::GdkColorState* color_state /*none,nullable*/);
GI_INLINE_DECL void set_color_state (Gdk::ColorState_Ref color_state) noexcept;
GI_INLINE_DECL void set_color_state () noexcept;

// void gdk_dmabuf_texture_builder_set_display (GdkDmabufTextureBuilder* self /*none*/, GdkDisplay* display /*none*/);
// void gdk_dmabuf_texture_builder_set_display (::GdkDmabufTextureBuilder* self /*none*/, ::GdkDisplay* display /*none*/);
GI_INLINE_DECL void set_display (Gdk::Display display) noexcept;

// void gdk_dmabuf_texture_builder_set_fd (GdkDmabufTextureBuilder* self /*none*/, unsigned int plane, int fd);
// void gdk_dmabuf_texture_builder_set_fd (::GdkDmabufTextureBuilder* self /*none*/, guint plane, gint fd);
GI_INLINE_DECL void set_fd (guint plane, gint fd) noexcept;

// void gdk_dmabuf_texture_builder_set_fourcc (GdkDmabufTextureBuilder* self /*none*/, guint32 fourcc);
// void gdk_dmabuf_texture_builder_set_fourcc (::GdkDmabufTextureBuilder* self /*none*/, guint32 fourcc);
GI_INLINE_DECL void set_fourcc (guint32 fourcc) noexcept;

// void gdk_dmabuf_texture_builder_set_height (GdkDmabufTextureBuilder* self /*none*/, unsigned int height);
// void gdk_dmabuf_texture_builder_set_height (::GdkDmabufTextureBuilder* self /*none*/, guint height);
GI_INLINE_DECL void set_height (guint height) noexcept;

// void gdk_dmabuf_texture_builder_set_modifier (GdkDmabufTextureBuilder* self /*none*/, guint64 modifier);
// void gdk_dmabuf_texture_builder_set_modifier (::GdkDmabufTextureBuilder* self /*none*/, guint64 modifier);
GI_INLINE_DECL void set_modifier (guint64 modifier) noexcept;

// void gdk_dmabuf_texture_builder_set_n_planes (GdkDmabufTextureBuilder* self /*none*/, unsigned int n_planes);
// void gdk_dmabuf_texture_builder_set_n_planes (::GdkDmabufTextureBuilder* self /*none*/, guint n_planes);
GI_INLINE_DECL void set_n_planes (guint n_planes) noexcept;

// void gdk_dmabuf_texture_builder_set_offset (GdkDmabufTextureBuilder* self /*none*/, unsigned int plane, unsigned int offset);
// void gdk_dmabuf_texture_builder_set_offset (::GdkDmabufTextureBuilder* self /*none*/, guint plane, guint offset);
GI_INLINE_DECL void set_offset (guint plane, guint offset) noexcept;

// void gdk_dmabuf_texture_builder_set_premultiplied (GdkDmabufTextureBuilder* self /*none*/, gboolean premultiplied);
// void gdk_dmabuf_texture_builder_set_premultiplied (::GdkDmabufTextureBuilder* self /*none*/, gboolean premultiplied);
GI_INLINE_DECL void set_premultiplied (gboolean premultiplied) noexcept;

// void gdk_dmabuf_texture_builder_set_stride (GdkDmabufTextureBuilder* self /*none*/, unsigned int plane, unsigned int stride);
// void gdk_dmabuf_texture_builder_set_stride (::GdkDmabufTextureBuilder* self /*none*/, guint plane, guint stride);
GI_INLINE_DECL void set_stride (guint plane, guint stride) noexcept;

// void gdk_dmabuf_texture_builder_set_update_region (GdkDmabufTextureBuilder* self /*none*/, cairo_region_t* region /*none,nullable*/);
// void gdk_dmabuf_texture_builder_set_update_region (::GdkDmabufTextureBuilder* self /*none*/, ::cairo_region_t* region /*none,nullable*/);
GI_INLINE_DECL void set_update_region (cairo::Region_Ref region) noexcept;
GI_INLINE_DECL void set_update_region () noexcept;

// void gdk_dmabuf_texture_builder_set_update_texture (GdkDmabufTextureBuilder* self /*none*/, GdkTexture* texture /*none,nullable*/);
// void gdk_dmabuf_texture_builder_set_update_texture (::GdkDmabufTextureBuilder* self /*none*/, ::GdkTexture* texture /*none,nullable*/);
GI_INLINE_DECL void set_update_texture (Gdk::Texture texture) noexcept;
GI_INLINE_DECL void set_update_texture () noexcept;

// void gdk_dmabuf_texture_builder_set_width (GdkDmabufTextureBuilder* self /*none*/, unsigned int width);
// void gdk_dmabuf_texture_builder_set_width (::GdkDmabufTextureBuilder* self /*none*/, guint width);
GI_INLINE_DECL void set_width (guint width) noexcept;

gi::property_proxy<Gdk::ColorState, base::DmabufTextureBuilderBase> property_color_state()
{ return gi::property_proxy<Gdk::ColorState, base::DmabufTextureBuilderBase> (*this, "color-state"); }
const gi::property_proxy<Gdk::ColorState, base::DmabufTextureBuilderBase> property_color_state() const
{ return gi::property_proxy<Gdk::ColorState, base::DmabufTextureBuilderBase> (*this, "color-state"); }

gi::property_proxy<Gdk::Display, base::DmabufTextureBuilderBase> property_display()
{ return gi::property_proxy<Gdk::Display, base::DmabufTextureBuilderBase> (*this, "display"); }
const gi::property_proxy<Gdk::Display, base::DmabufTextureBuilderBase> property_display() const
{ return gi::property_proxy<Gdk::Display, base::DmabufTextureBuilderBase> (*this, "display"); }

gi::property_proxy<guint, base::DmabufTextureBuilderBase> property_fourcc()
{ return gi::property_proxy<guint, base::DmabufTextureBuilderBase> (*this, "fourcc"); }
const gi::property_proxy<guint, base::DmabufTextureBuilderBase> property_fourcc() const
{ return gi::property_proxy<guint, base::DmabufTextureBuilderBase> (*this, "fourcc"); }

gi::property_proxy<guint, base::DmabufTextureBuilderBase> property_height()
{ return gi::property_proxy<guint, base::DmabufTextureBuilderBase> (*this, "height"); }
const gi::property_proxy<guint, base::DmabufTextureBuilderBase> property_height() const
{ return gi::property_proxy<guint, base::DmabufTextureBuilderBase> (*this, "height"); }

gi::property_proxy<guint64, base::DmabufTextureBuilderBase> property_modifier()
{ return gi::property_proxy<guint64, base::DmabufTextureBuilderBase> (*this, "modifier"); }
const gi::property_proxy<guint64, base::DmabufTextureBuilderBase> property_modifier() const
{ return gi::property_proxy<guint64, base::DmabufTextureBuilderBase> (*this, "modifier"); }

gi::property_proxy<guint, base::DmabufTextureBuilderBase> property_n_planes()
{ return gi::property_proxy<guint, base::DmabufTextureBuilderBase> (*this, "n-planes"); }
const gi::property_proxy<guint, base::DmabufTextureBuilderBase> property_n_planes() const
{ return gi::property_proxy<guint, base::DmabufTextureBuilderBase> (*this, "n-planes"); }

gi::property_proxy<bool, base::DmabufTextureBuilderBase> property_premultiplied()
{ return gi::property_proxy<bool, base::DmabufTextureBuilderBase> (*this, "premultiplied"); }
const gi::property_proxy<bool, base::DmabufTextureBuilderBase> property_premultiplied() const
{ return gi::property_proxy<bool, base::DmabufTextureBuilderBase> (*this, "premultiplied"); }

gi::property_proxy<cairo::Region, base::DmabufTextureBuilderBase> property_update_region()
{ return gi::property_proxy<cairo::Region, base::DmabufTextureBuilderBase> (*this, "update-region"); }
const gi::property_proxy<cairo::Region, base::DmabufTextureBuilderBase> property_update_region() const
{ return gi::property_proxy<cairo::Region, base::DmabufTextureBuilderBase> (*this, "update-region"); }

gi::property_proxy<Gdk::Texture, base::DmabufTextureBuilderBase> property_update_texture()
{ return gi::property_proxy<Gdk::Texture, base::DmabufTextureBuilderBase> (*this, "update-texture"); }
const gi::property_proxy<Gdk::Texture, base::DmabufTextureBuilderBase> property_update_texture() const
{ return gi::property_proxy<Gdk::Texture, base::DmabufTextureBuilderBase> (*this, "update-texture"); }

gi::property_proxy<guint, base::DmabufTextureBuilderBase> property_width()
{ return gi::property_proxy<guint, base::DmabufTextureBuilderBase> (*this, "width"); }
const gi::property_proxy<guint, base::DmabufTextureBuilderBase> property_width() const
{ return gi::property_proxy<guint, base::DmabufTextureBuilderBase> (*this, "width"); }

}; // class

} // namespace base

} // namespace Gdk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gdk/dmabuftexturebuilder_extra_def.hpp>)
#include <gdk/dmabuftexturebuilder_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gdk/dmabuftexturebuilder_extra.hpp>)
#include <gdk/dmabuftexturebuilder_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gdk {

class DmabufTextureBuilder : public GI_GDK_DMABUFTEXTUREBUILDER_BASE
{ typedef GI_GDK_DMABUFTEXTUREBUILDER_BASE super_type; using super_type::super_type; };

} // namespace Gdk

template<> struct declare_cpptype_of<::GdkDmabufTextureBuilder>
{ typedef Gdk::DmabufTextureBuilder type; }; 

} // namespace repository

} // namespace gi

#endif
