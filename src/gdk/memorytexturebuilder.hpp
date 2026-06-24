// AUTO-GENERATED

#ifndef _GI_GDK_MEMORYTEXTUREBUILDER_HPP_
#define _GI_GDK_MEMORYTEXTUREBUILDER_HPP_


namespace gi {

namespace repository {

namespace Gdk {

class ColorState;
class ColorState_Ref;
class Texture;

class MemoryTextureBuilder;

namespace base {


#define GI_GDK_MEMORYTEXTUREBUILDER_BASE base::MemoryTextureBuilderBase
class MemoryTextureBuilderBase : public GObject::Object
{
typedef GObject::Object super_type;
public:
typedef ::GdkMemoryTextureBuilder BaseObjectType;

MemoryTextureBuilderBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gdk_memory_texture_builder_get_type(); } 

// GdkMemoryTextureBuilder* /*full*/ gdk_memory_texture_builder_new ();
// ::GdkMemoryTextureBuilder* /*full*/ gdk_memory_texture_builder_new ();
static GI_INLINE_DECL Gdk::MemoryTextureBuilder new_ () noexcept;

// GdkTexture* /*full*/ gdk_memory_texture_builder_build (GdkMemoryTextureBuilder* self /*none*/);
// ::GdkTexture* /*full*/ gdk_memory_texture_builder_build (::GdkMemoryTextureBuilder* self /*none*/);
GI_INLINE_DECL Gdk::Texture build () noexcept;

// GBytes* /*none,nullable*/ gdk_memory_texture_builder_get_bytes (GdkMemoryTextureBuilder* self /*none*/);
// ::GBytes* /*none,nullable*/ gdk_memory_texture_builder_get_bytes (::GdkMemoryTextureBuilder* self /*none*/);
GI_INLINE_DECL GLib::Bytes_Ref get_bytes () noexcept;

// GdkColorState* /*none*/ gdk_memory_texture_builder_get_color_state (GdkMemoryTextureBuilder* self /*none*/);
// ::GdkColorState* /*none*/ gdk_memory_texture_builder_get_color_state (::GdkMemoryTextureBuilder* self /*none*/);
GI_INLINE_DECL Gdk::ColorState_Ref get_color_state () noexcept;

// GdkMemoryFormat gdk_memory_texture_builder_get_format (GdkMemoryTextureBuilder* self /*none*/);
// ::GdkMemoryFormat gdk_memory_texture_builder_get_format (::GdkMemoryTextureBuilder* self /*none*/);
GI_INLINE_DECL Gdk::MemoryFormat get_format () noexcept;

// int gdk_memory_texture_builder_get_height (GdkMemoryTextureBuilder* self /*none*/);
// gint gdk_memory_texture_builder_get_height (::GdkMemoryTextureBuilder* self /*none*/);
GI_INLINE_DECL gint get_height () noexcept;

// gsize gdk_memory_texture_builder_get_offset (GdkMemoryTextureBuilder* self /*none*/, unsigned int plane);
// gsize gdk_memory_texture_builder_get_offset (::GdkMemoryTextureBuilder* self /*none*/, guint plane);
GI_INLINE_DECL gsize get_offset (guint plane) noexcept;

// gsize gdk_memory_texture_builder_get_stride (GdkMemoryTextureBuilder* self /*none*/);
// gsize gdk_memory_texture_builder_get_stride (::GdkMemoryTextureBuilder* self /*none*/);
GI_INLINE_DECL gsize get_stride () noexcept;

// gsize gdk_memory_texture_builder_get_stride_for_plane (GdkMemoryTextureBuilder* self /*none*/, unsigned int plane);
// gsize gdk_memory_texture_builder_get_stride_for_plane (::GdkMemoryTextureBuilder* self /*none*/, guint plane);
GI_INLINE_DECL gsize get_stride_for_plane (guint plane) noexcept;

// cairo_region_t* /*none,nullable*/ gdk_memory_texture_builder_get_update_region (GdkMemoryTextureBuilder* self /*none*/);
// ::cairo_region_t* /*none,nullable*/ gdk_memory_texture_builder_get_update_region (::GdkMemoryTextureBuilder* self /*none*/);
GI_INLINE_DECL cairo::Region_Ref get_update_region () noexcept;

// GdkTexture* /*none,nullable*/ gdk_memory_texture_builder_get_update_texture (GdkMemoryTextureBuilder* self /*none*/);
// ::GdkTexture* /*none,nullable*/ gdk_memory_texture_builder_get_update_texture (::GdkMemoryTextureBuilder* self /*none*/);
GI_INLINE_DECL Gdk::Texture get_update_texture () noexcept;

// int gdk_memory_texture_builder_get_width (GdkMemoryTextureBuilder* self /*none*/);
// gint gdk_memory_texture_builder_get_width (::GdkMemoryTextureBuilder* self /*none*/);
GI_INLINE_DECL gint get_width () noexcept;

// void gdk_memory_texture_builder_set_bytes (GdkMemoryTextureBuilder* self /*none*/, GBytes* bytes /*none,nullable*/);
// void gdk_memory_texture_builder_set_bytes (::GdkMemoryTextureBuilder* self /*none*/, ::GBytes* bytes /*none,nullable*/);
GI_INLINE_DECL void set_bytes (GLib::Bytes_Ref bytes) noexcept;
GI_INLINE_DECL void set_bytes () noexcept;

// void gdk_memory_texture_builder_set_color_state (GdkMemoryTextureBuilder* self /*none*/, GdkColorState* color_state /*none*/);
// void gdk_memory_texture_builder_set_color_state (::GdkMemoryTextureBuilder* self /*none*/, ::GdkColorState* color_state /*none*/);
GI_INLINE_DECL void set_color_state (Gdk::ColorState_Ref color_state) noexcept;

// void gdk_memory_texture_builder_set_format (GdkMemoryTextureBuilder* self /*none*/, GdkMemoryFormat format);
// void gdk_memory_texture_builder_set_format (::GdkMemoryTextureBuilder* self /*none*/, ::GdkMemoryFormat format);
GI_INLINE_DECL void set_format (Gdk::MemoryFormat format) noexcept;

// void gdk_memory_texture_builder_set_height (GdkMemoryTextureBuilder* self /*none*/, int height);
// void gdk_memory_texture_builder_set_height (::GdkMemoryTextureBuilder* self /*none*/, gint height);
GI_INLINE_DECL void set_height (gint height) noexcept;

// void gdk_memory_texture_builder_set_offset (GdkMemoryTextureBuilder* self /*none*/, unsigned int plane, gsize offset);
// void gdk_memory_texture_builder_set_offset (::GdkMemoryTextureBuilder* self /*none*/, guint plane, gsize offset);
GI_INLINE_DECL void set_offset (guint plane, gsize offset) noexcept;

// void gdk_memory_texture_builder_set_stride (GdkMemoryTextureBuilder* self /*none*/, gsize stride);
// void gdk_memory_texture_builder_set_stride (::GdkMemoryTextureBuilder* self /*none*/, gsize stride);
GI_INLINE_DECL void set_stride (gsize stride) noexcept;

// void gdk_memory_texture_builder_set_stride_for_plane (GdkMemoryTextureBuilder* self /*none*/, unsigned int plane, gsize stride);
// void gdk_memory_texture_builder_set_stride_for_plane (::GdkMemoryTextureBuilder* self /*none*/, guint plane, gsize stride);
GI_INLINE_DECL void set_stride_for_plane (guint plane, gsize stride) noexcept;

// void gdk_memory_texture_builder_set_update_region (GdkMemoryTextureBuilder* self /*none*/, cairo_region_t* region /*none,nullable*/);
// void gdk_memory_texture_builder_set_update_region (::GdkMemoryTextureBuilder* self /*none*/, ::cairo_region_t* region /*none,nullable*/);
GI_INLINE_DECL void set_update_region (cairo::Region_Ref region) noexcept;
GI_INLINE_DECL void set_update_region () noexcept;

// void gdk_memory_texture_builder_set_update_texture (GdkMemoryTextureBuilder* self /*none*/, GdkTexture* texture /*none,nullable*/);
// void gdk_memory_texture_builder_set_update_texture (::GdkMemoryTextureBuilder* self /*none*/, ::GdkTexture* texture /*none,nullable*/);
GI_INLINE_DECL void set_update_texture (Gdk::Texture texture) noexcept;
GI_INLINE_DECL void set_update_texture () noexcept;

// void gdk_memory_texture_builder_set_width (GdkMemoryTextureBuilder* self /*none*/, int width);
// void gdk_memory_texture_builder_set_width (::GdkMemoryTextureBuilder* self /*none*/, gint width);
GI_INLINE_DECL void set_width (gint width) noexcept;

gi::property_proxy<GLib::Bytes, base::MemoryTextureBuilderBase> property_bytes()
{ return gi::property_proxy<GLib::Bytes, base::MemoryTextureBuilderBase> (*this, "bytes"); }
const gi::property_proxy<GLib::Bytes, base::MemoryTextureBuilderBase> property_bytes() const
{ return gi::property_proxy<GLib::Bytes, base::MemoryTextureBuilderBase> (*this, "bytes"); }

gi::property_proxy<Gdk::ColorState, base::MemoryTextureBuilderBase> property_color_state()
{ return gi::property_proxy<Gdk::ColorState, base::MemoryTextureBuilderBase> (*this, "color-state"); }
const gi::property_proxy<Gdk::ColorState, base::MemoryTextureBuilderBase> property_color_state() const
{ return gi::property_proxy<Gdk::ColorState, base::MemoryTextureBuilderBase> (*this, "color-state"); }

gi::property_proxy<Gdk::MemoryFormat, base::MemoryTextureBuilderBase> property_format()
{ return gi::property_proxy<Gdk::MemoryFormat, base::MemoryTextureBuilderBase> (*this, "format"); }
const gi::property_proxy<Gdk::MemoryFormat, base::MemoryTextureBuilderBase> property_format() const
{ return gi::property_proxy<Gdk::MemoryFormat, base::MemoryTextureBuilderBase> (*this, "format"); }

gi::property_proxy<gint, base::MemoryTextureBuilderBase> property_height()
{ return gi::property_proxy<gint, base::MemoryTextureBuilderBase> (*this, "height"); }
const gi::property_proxy<gint, base::MemoryTextureBuilderBase> property_height() const
{ return gi::property_proxy<gint, base::MemoryTextureBuilderBase> (*this, "height"); }

gi::property_proxy<guint64, base::MemoryTextureBuilderBase> property_stride()
{ return gi::property_proxy<guint64, base::MemoryTextureBuilderBase> (*this, "stride"); }
const gi::property_proxy<guint64, base::MemoryTextureBuilderBase> property_stride() const
{ return gi::property_proxy<guint64, base::MemoryTextureBuilderBase> (*this, "stride"); }

gi::property_proxy<cairo::Region, base::MemoryTextureBuilderBase> property_update_region()
{ return gi::property_proxy<cairo::Region, base::MemoryTextureBuilderBase> (*this, "update-region"); }
const gi::property_proxy<cairo::Region, base::MemoryTextureBuilderBase> property_update_region() const
{ return gi::property_proxy<cairo::Region, base::MemoryTextureBuilderBase> (*this, "update-region"); }

gi::property_proxy<Gdk::Texture, base::MemoryTextureBuilderBase> property_update_texture()
{ return gi::property_proxy<Gdk::Texture, base::MemoryTextureBuilderBase> (*this, "update-texture"); }
const gi::property_proxy<Gdk::Texture, base::MemoryTextureBuilderBase> property_update_texture() const
{ return gi::property_proxy<Gdk::Texture, base::MemoryTextureBuilderBase> (*this, "update-texture"); }

gi::property_proxy<gint, base::MemoryTextureBuilderBase> property_width()
{ return gi::property_proxy<gint, base::MemoryTextureBuilderBase> (*this, "width"); }
const gi::property_proxy<gint, base::MemoryTextureBuilderBase> property_width() const
{ return gi::property_proxy<gint, base::MemoryTextureBuilderBase> (*this, "width"); }

}; // class

} // namespace base

} // namespace Gdk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gdk/memorytexturebuilder_extra_def.hpp>)
#include <gdk/memorytexturebuilder_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gdk/memorytexturebuilder_extra.hpp>)
#include <gdk/memorytexturebuilder_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gdk {

class MemoryTextureBuilder : public GI_GDK_MEMORYTEXTUREBUILDER_BASE
{ typedef GI_GDK_MEMORYTEXTUREBUILDER_BASE super_type; using super_type::super_type; };

} // namespace Gdk

template<> struct declare_cpptype_of<::GdkMemoryTextureBuilder>
{ typedef Gdk::MemoryTextureBuilder type; }; 

} // namespace repository

} // namespace gi

#endif
