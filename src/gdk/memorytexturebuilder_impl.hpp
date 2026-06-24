// AUTO-GENERATED

#ifndef _GI_GDK_MEMORYTEXTUREBUILDER_IMPL_HPP_
#define _GI_GDK_MEMORYTEXTUREBUILDER_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gdk {

namespace base {

// GdkMemoryTextureBuilder* /*full*/ gdk_memory_texture_builder_new ();
// ::GdkMemoryTextureBuilder* /*full*/ gdk_memory_texture_builder_new ();
Gdk::MemoryTextureBuilder base::MemoryTextureBuilderBase::new_ () noexcept
{
  typedef ::GdkMemoryTextureBuilder* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_memory_texture_builder_new;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// GdkTexture* /*full*/ gdk_memory_texture_builder_build (GdkMemoryTextureBuilder* self /*none*/);
// ::GdkTexture* /*full*/ gdk_memory_texture_builder_build (::GdkMemoryTextureBuilder* self /*none*/);
Gdk::Texture base::MemoryTextureBuilderBase::build () noexcept
{
  typedef ::GdkTexture* (*call_wrap_t) (::GdkMemoryTextureBuilder* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_memory_texture_builder_build;
  auto _temp_ret = call_wrap_v ((::GdkMemoryTextureBuilder*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// GBytes* /*none,nullable*/ gdk_memory_texture_builder_get_bytes (GdkMemoryTextureBuilder* self /*none*/);
// ::GBytes* /*none,nullable*/ gdk_memory_texture_builder_get_bytes (::GdkMemoryTextureBuilder* self /*none*/);
GLib::Bytes_Ref base::MemoryTextureBuilderBase::get_bytes () noexcept
{
  typedef ::GBytes* (*call_wrap_t) (::GdkMemoryTextureBuilder* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_memory_texture_builder_get_bytes;
  auto _temp_ret = call_wrap_v ((::GdkMemoryTextureBuilder*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// GdkColorState* /*none*/ gdk_memory_texture_builder_get_color_state (GdkMemoryTextureBuilder* self /*none*/);
// ::GdkColorState* /*none*/ gdk_memory_texture_builder_get_color_state (::GdkMemoryTextureBuilder* self /*none*/);
Gdk::ColorState_Ref base::MemoryTextureBuilderBase::get_color_state () noexcept
{
  typedef ::GdkColorState* (*call_wrap_t) (::GdkMemoryTextureBuilder* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_memory_texture_builder_get_color_state;
  auto _temp_ret = call_wrap_v ((::GdkMemoryTextureBuilder*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// GdkMemoryFormat gdk_memory_texture_builder_get_format (GdkMemoryTextureBuilder* self /*none*/);
// ::GdkMemoryFormat gdk_memory_texture_builder_get_format (::GdkMemoryTextureBuilder* self /*none*/);
Gdk::MemoryFormat base::MemoryTextureBuilderBase::get_format () noexcept
{
  typedef ::GdkMemoryFormat (*call_wrap_t) (::GdkMemoryTextureBuilder* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_memory_texture_builder_get_format;
  auto _temp_ret = call_wrap_v ((::GdkMemoryTextureBuilder*) (gobj_()));
  return gi::wrap (_temp_ret);
}

// int gdk_memory_texture_builder_get_height (GdkMemoryTextureBuilder* self /*none*/);
// gint gdk_memory_texture_builder_get_height (::GdkMemoryTextureBuilder* self /*none*/);
gint base::MemoryTextureBuilderBase::get_height () noexcept
{
  typedef gint (*call_wrap_t) (::GdkMemoryTextureBuilder* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_memory_texture_builder_get_height;
  auto _temp_ret = call_wrap_v ((::GdkMemoryTextureBuilder*) (gobj_()));
  return _temp_ret;
}

// gsize gdk_memory_texture_builder_get_offset (GdkMemoryTextureBuilder* self /*none*/, unsigned int plane);
// gsize gdk_memory_texture_builder_get_offset (::GdkMemoryTextureBuilder* self /*none*/, guint plane);
gsize base::MemoryTextureBuilderBase::get_offset (guint plane) noexcept
{
  typedef gsize (*call_wrap_t) (::GdkMemoryTextureBuilder* self, guint plane);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_memory_texture_builder_get_offset;
  auto plane_to_c = plane;
  auto _temp_ret = call_wrap_v ((::GdkMemoryTextureBuilder*) (gobj_()), (guint) (plane_to_c));
  return _temp_ret;
}

// gsize gdk_memory_texture_builder_get_stride (GdkMemoryTextureBuilder* self /*none*/);
// gsize gdk_memory_texture_builder_get_stride (::GdkMemoryTextureBuilder* self /*none*/);
gsize base::MemoryTextureBuilderBase::get_stride () noexcept
{
  typedef gsize (*call_wrap_t) (::GdkMemoryTextureBuilder* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_memory_texture_builder_get_stride;
  auto _temp_ret = call_wrap_v ((::GdkMemoryTextureBuilder*) (gobj_()));
  return _temp_ret;
}

// gsize gdk_memory_texture_builder_get_stride_for_plane (GdkMemoryTextureBuilder* self /*none*/, unsigned int plane);
// gsize gdk_memory_texture_builder_get_stride_for_plane (::GdkMemoryTextureBuilder* self /*none*/, guint plane);
gsize base::MemoryTextureBuilderBase::get_stride_for_plane (guint plane) noexcept
{
  typedef gsize (*call_wrap_t) (::GdkMemoryTextureBuilder* self, guint plane);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_memory_texture_builder_get_stride_for_plane;
  auto plane_to_c = plane;
  auto _temp_ret = call_wrap_v ((::GdkMemoryTextureBuilder*) (gobj_()), (guint) (plane_to_c));
  return _temp_ret;
}

// cairo_region_t* /*none,nullable*/ gdk_memory_texture_builder_get_update_region (GdkMemoryTextureBuilder* self /*none*/);
// ::cairo_region_t* /*none,nullable*/ gdk_memory_texture_builder_get_update_region (::GdkMemoryTextureBuilder* self /*none*/);
cairo::Region_Ref base::MemoryTextureBuilderBase::get_update_region () noexcept
{
  typedef ::cairo_region_t* (*call_wrap_t) (::GdkMemoryTextureBuilder* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_memory_texture_builder_get_update_region;
  auto _temp_ret = call_wrap_v ((::GdkMemoryTextureBuilder*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// GdkTexture* /*none,nullable*/ gdk_memory_texture_builder_get_update_texture (GdkMemoryTextureBuilder* self /*none*/);
// ::GdkTexture* /*none,nullable*/ gdk_memory_texture_builder_get_update_texture (::GdkMemoryTextureBuilder* self /*none*/);
Gdk::Texture base::MemoryTextureBuilderBase::get_update_texture () noexcept
{
  typedef ::GdkTexture* (*call_wrap_t) (::GdkMemoryTextureBuilder* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_memory_texture_builder_get_update_texture;
  auto _temp_ret = call_wrap_v ((::GdkMemoryTextureBuilder*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// int gdk_memory_texture_builder_get_width (GdkMemoryTextureBuilder* self /*none*/);
// gint gdk_memory_texture_builder_get_width (::GdkMemoryTextureBuilder* self /*none*/);
gint base::MemoryTextureBuilderBase::get_width () noexcept
{
  typedef gint (*call_wrap_t) (::GdkMemoryTextureBuilder* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_memory_texture_builder_get_width;
  auto _temp_ret = call_wrap_v ((::GdkMemoryTextureBuilder*) (gobj_()));
  return _temp_ret;
}

// void gdk_memory_texture_builder_set_bytes (GdkMemoryTextureBuilder* self /*none*/, GBytes* bytes /*none,nullable*/);
// void gdk_memory_texture_builder_set_bytes (::GdkMemoryTextureBuilder* self /*none*/, ::GBytes* bytes /*none,nullable*/);
void base::MemoryTextureBuilderBase::set_bytes (GLib::Bytes_Ref bytes) noexcept
{
  typedef void (*call_wrap_t) (::GdkMemoryTextureBuilder* self, ::GBytes* bytes);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_memory_texture_builder_set_bytes;
  auto bytes_to_c = gi::unwrap (bytes, gi::transfer_none);
  call_wrap_v ((::GdkMemoryTextureBuilder*) (gobj_()), (::GBytes*) (bytes_to_c));
}
void base::MemoryTextureBuilderBase::set_bytes () noexcept
{
  typedef void (*call_wrap_t) (::GdkMemoryTextureBuilder* self, ::GBytes* bytes);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_memory_texture_builder_set_bytes;
  auto bytes_to_c = nullptr;
  call_wrap_v ((::GdkMemoryTextureBuilder*) (gobj_()), (::GBytes*) (bytes_to_c));
}

// void gdk_memory_texture_builder_set_color_state (GdkMemoryTextureBuilder* self /*none*/, GdkColorState* color_state /*none*/);
// void gdk_memory_texture_builder_set_color_state (::GdkMemoryTextureBuilder* self /*none*/, ::GdkColorState* color_state /*none*/);
void base::MemoryTextureBuilderBase::set_color_state (Gdk::ColorState_Ref color_state) noexcept
{
  typedef void (*call_wrap_t) (::GdkMemoryTextureBuilder* self, ::GdkColorState* color_state);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_memory_texture_builder_set_color_state;
  auto color_state_to_c = gi::unwrap (color_state, gi::transfer_none);
  call_wrap_v ((::GdkMemoryTextureBuilder*) (gobj_()), (::GdkColorState*) (color_state_to_c));
}

// void gdk_memory_texture_builder_set_format (GdkMemoryTextureBuilder* self /*none*/, GdkMemoryFormat format);
// void gdk_memory_texture_builder_set_format (::GdkMemoryTextureBuilder* self /*none*/, ::GdkMemoryFormat format);
void base::MemoryTextureBuilderBase::set_format (Gdk::MemoryFormat format) noexcept
{
  typedef void (*call_wrap_t) (::GdkMemoryTextureBuilder* self, ::GdkMemoryFormat format);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_memory_texture_builder_set_format;
  auto format_to_c = gi::unwrap (format);
  call_wrap_v ((::GdkMemoryTextureBuilder*) (gobj_()), (::GdkMemoryFormat) (format_to_c));
}

// void gdk_memory_texture_builder_set_height (GdkMemoryTextureBuilder* self /*none*/, int height);
// void gdk_memory_texture_builder_set_height (::GdkMemoryTextureBuilder* self /*none*/, gint height);
void base::MemoryTextureBuilderBase::set_height (gint height) noexcept
{
  typedef void (*call_wrap_t) (::GdkMemoryTextureBuilder* self, gint height);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_memory_texture_builder_set_height;
  auto height_to_c = height;
  call_wrap_v ((::GdkMemoryTextureBuilder*) (gobj_()), (gint) (height_to_c));
}

// void gdk_memory_texture_builder_set_offset (GdkMemoryTextureBuilder* self /*none*/, unsigned int plane, gsize offset);
// void gdk_memory_texture_builder_set_offset (::GdkMemoryTextureBuilder* self /*none*/, guint plane, gsize offset);
void base::MemoryTextureBuilderBase::set_offset (guint plane, gsize offset) noexcept
{
  typedef void (*call_wrap_t) (::GdkMemoryTextureBuilder* self, guint plane, gsize offset);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_memory_texture_builder_set_offset;
  auto offset_to_c = offset;
  auto plane_to_c = plane;
  call_wrap_v ((::GdkMemoryTextureBuilder*) (gobj_()), (guint) (plane_to_c), (gsize) (offset_to_c));
}

// void gdk_memory_texture_builder_set_stride (GdkMemoryTextureBuilder* self /*none*/, gsize stride);
// void gdk_memory_texture_builder_set_stride (::GdkMemoryTextureBuilder* self /*none*/, gsize stride);
void base::MemoryTextureBuilderBase::set_stride (gsize stride) noexcept
{
  typedef void (*call_wrap_t) (::GdkMemoryTextureBuilder* self, gsize stride);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_memory_texture_builder_set_stride;
  auto stride_to_c = stride;
  call_wrap_v ((::GdkMemoryTextureBuilder*) (gobj_()), (gsize) (stride_to_c));
}

// void gdk_memory_texture_builder_set_stride_for_plane (GdkMemoryTextureBuilder* self /*none*/, unsigned int plane, gsize stride);
// void gdk_memory_texture_builder_set_stride_for_plane (::GdkMemoryTextureBuilder* self /*none*/, guint plane, gsize stride);
void base::MemoryTextureBuilderBase::set_stride_for_plane (guint plane, gsize stride) noexcept
{
  typedef void (*call_wrap_t) (::GdkMemoryTextureBuilder* self, guint plane, gsize stride);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_memory_texture_builder_set_stride_for_plane;
  auto stride_to_c = stride;
  auto plane_to_c = plane;
  call_wrap_v ((::GdkMemoryTextureBuilder*) (gobj_()), (guint) (plane_to_c), (gsize) (stride_to_c));
}

// void gdk_memory_texture_builder_set_update_region (GdkMemoryTextureBuilder* self /*none*/, cairo_region_t* region /*none,nullable*/);
// void gdk_memory_texture_builder_set_update_region (::GdkMemoryTextureBuilder* self /*none*/, ::cairo_region_t* region /*none,nullable*/);
void base::MemoryTextureBuilderBase::set_update_region (cairo::Region_Ref region) noexcept
{
  typedef void (*call_wrap_t) (::GdkMemoryTextureBuilder* self, ::cairo_region_t* region);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_memory_texture_builder_set_update_region;
  auto region_to_c = gi::unwrap (region, gi::transfer_none);
  call_wrap_v ((::GdkMemoryTextureBuilder*) (gobj_()), (::cairo_region_t*) (region_to_c));
}
void base::MemoryTextureBuilderBase::set_update_region () noexcept
{
  typedef void (*call_wrap_t) (::GdkMemoryTextureBuilder* self, ::cairo_region_t* region);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_memory_texture_builder_set_update_region;
  auto region_to_c = nullptr;
  call_wrap_v ((::GdkMemoryTextureBuilder*) (gobj_()), (::cairo_region_t*) (region_to_c));
}

// void gdk_memory_texture_builder_set_update_texture (GdkMemoryTextureBuilder* self /*none*/, GdkTexture* texture /*none,nullable*/);
// void gdk_memory_texture_builder_set_update_texture (::GdkMemoryTextureBuilder* self /*none*/, ::GdkTexture* texture /*none,nullable*/);
void base::MemoryTextureBuilderBase::set_update_texture (Gdk::Texture texture) noexcept
{
  typedef void (*call_wrap_t) (::GdkMemoryTextureBuilder* self, ::GdkTexture* texture);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_memory_texture_builder_set_update_texture;
  auto texture_to_c = gi::unwrap (texture, gi::transfer_none);
  call_wrap_v ((::GdkMemoryTextureBuilder*) (gobj_()), (::GdkTexture*) (texture_to_c));
}
void base::MemoryTextureBuilderBase::set_update_texture () noexcept
{
  typedef void (*call_wrap_t) (::GdkMemoryTextureBuilder* self, ::GdkTexture* texture);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_memory_texture_builder_set_update_texture;
  auto texture_to_c = nullptr;
  call_wrap_v ((::GdkMemoryTextureBuilder*) (gobj_()), (::GdkTexture*) (texture_to_c));
}

// void gdk_memory_texture_builder_set_width (GdkMemoryTextureBuilder* self /*none*/, int width);
// void gdk_memory_texture_builder_set_width (::GdkMemoryTextureBuilder* self /*none*/, gint width);
void base::MemoryTextureBuilderBase::set_width (gint width) noexcept
{
  typedef void (*call_wrap_t) (::GdkMemoryTextureBuilder* self, gint width);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_memory_texture_builder_set_width;
  auto width_to_c = width;
  call_wrap_v ((::GdkMemoryTextureBuilder*) (gobj_()), (gint) (width_to_c));
}


} // namespace base

} // namespace Gdk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gdk/memorytexturebuilder_extra_def_impl.hpp>)
#include <gdk/memorytexturebuilder_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gdk/memorytexturebuilder_extra_impl.hpp>)
#include <gdk/memorytexturebuilder_extra_impl.hpp>
#endif
#endif

#endif
