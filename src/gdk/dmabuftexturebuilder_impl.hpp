// AUTO-GENERATED

#ifndef _GI_GDK_DMABUFTEXTUREBUILDER_IMPL_HPP_
#define _GI_GDK_DMABUFTEXTUREBUILDER_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gdk {

namespace base {

// GdkDmabufTextureBuilder* /*full*/ gdk_dmabuf_texture_builder_new ();
// ::GdkDmabufTextureBuilder* /*full*/ gdk_dmabuf_texture_builder_new ();
Gdk::DmabufTextureBuilder base::DmabufTextureBuilderBase::new_ () noexcept
{
  typedef ::GdkDmabufTextureBuilder* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_dmabuf_texture_builder_new;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// GdkTexture* /*full,nullable*/ gdk_dmabuf_texture_builder_build (GdkDmabufTextureBuilder* self /*none*/, GDestroyNotify destroy /*none,nullable*/, gpointer data, GError ** error);
// ::GdkTexture* /*full,nullable*/ gdk_dmabuf_texture_builder_build (::GdkDmabufTextureBuilder* self /*none*/, GLib::DestroyNotify::cfunction_type destroy /*none,nullable*/, void* data, GError ** error);
Gdk::Texture base::DmabufTextureBuilderBase::build (GLib::DestroyNotify destroy)
{
  typedef ::GdkTexture* (*call_wrap_t) (::GdkDmabufTextureBuilder* self, GLib::DestroyNotify::cfunction_type destroy, void* data, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_dmabuf_texture_builder_build;
  auto destroy_wrap_ = destroy ? unwrap (std::move (destroy), gi::scope_async) : nullptr;
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GdkDmabufTextureBuilder*) (gobj_()), (GLib::DestroyNotify::cfunction_type) (destroy_wrap_ ? &destroy_wrap_->wrapper : nullptr), (void*) (destroy_wrap_), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full);
}
Gdk::Texture base::DmabufTextureBuilderBase::build (GLib::DestroyNotify destroy, GLib::Error * _error) noexcept
{
  typedef ::GdkTexture* (*call_wrap_t) (::GdkDmabufTextureBuilder* self, GLib::DestroyNotify::cfunction_type destroy, void* data, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_dmabuf_texture_builder_build;
  auto destroy_wrap_ = destroy ? unwrap (std::move (destroy), gi::scope_async) : nullptr;
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GdkDmabufTextureBuilder*) (gobj_()), (GLib::DestroyNotify::cfunction_type) (destroy_wrap_ ? &destroy_wrap_->wrapper : nullptr), (void*) (destroy_wrap_), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// GdkColorState* /*none,nullable*/ gdk_dmabuf_texture_builder_get_color_state (GdkDmabufTextureBuilder* self /*none*/);
// ::GdkColorState* /*none,nullable*/ gdk_dmabuf_texture_builder_get_color_state (::GdkDmabufTextureBuilder* self /*none*/);
Gdk::ColorState_Ref base::DmabufTextureBuilderBase::get_color_state () noexcept
{
  typedef ::GdkColorState* (*call_wrap_t) (::GdkDmabufTextureBuilder* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_dmabuf_texture_builder_get_color_state;
  auto _temp_ret = call_wrap_v ((::GdkDmabufTextureBuilder*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// GdkDisplay* /*none*/ gdk_dmabuf_texture_builder_get_display (GdkDmabufTextureBuilder* self /*none*/);
// ::GdkDisplay* /*none*/ gdk_dmabuf_texture_builder_get_display (::GdkDmabufTextureBuilder* self /*none*/);
Gdk::Display base::DmabufTextureBuilderBase::get_display () noexcept
{
  typedef ::GdkDisplay* (*call_wrap_t) (::GdkDmabufTextureBuilder* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_dmabuf_texture_builder_get_display;
  auto _temp_ret = call_wrap_v ((::GdkDmabufTextureBuilder*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// int gdk_dmabuf_texture_builder_get_fd (GdkDmabufTextureBuilder* self /*none*/, unsigned int plane);
// gint gdk_dmabuf_texture_builder_get_fd (::GdkDmabufTextureBuilder* self /*none*/, guint plane);
gint base::DmabufTextureBuilderBase::get_fd (guint plane) noexcept
{
  typedef gint (*call_wrap_t) (::GdkDmabufTextureBuilder* self, guint plane);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_dmabuf_texture_builder_get_fd;
  auto plane_to_c = plane;
  auto _temp_ret = call_wrap_v ((::GdkDmabufTextureBuilder*) (gobj_()), (guint) (plane_to_c));
  return _temp_ret;
}

// guint32 gdk_dmabuf_texture_builder_get_fourcc (GdkDmabufTextureBuilder* self /*none*/);
// guint32 gdk_dmabuf_texture_builder_get_fourcc (::GdkDmabufTextureBuilder* self /*none*/);
guint32 base::DmabufTextureBuilderBase::get_fourcc () noexcept
{
  typedef guint32 (*call_wrap_t) (::GdkDmabufTextureBuilder* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_dmabuf_texture_builder_get_fourcc;
  auto _temp_ret = call_wrap_v ((::GdkDmabufTextureBuilder*) (gobj_()));
  return _temp_ret;
}

// unsigned int gdk_dmabuf_texture_builder_get_height (GdkDmabufTextureBuilder* self /*none*/);
// guint gdk_dmabuf_texture_builder_get_height (::GdkDmabufTextureBuilder* self /*none*/);
guint base::DmabufTextureBuilderBase::get_height () noexcept
{
  typedef guint (*call_wrap_t) (::GdkDmabufTextureBuilder* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_dmabuf_texture_builder_get_height;
  auto _temp_ret = call_wrap_v ((::GdkDmabufTextureBuilder*) (gobj_()));
  return _temp_ret;
}

// guint64 gdk_dmabuf_texture_builder_get_modifier (GdkDmabufTextureBuilder* self /*none*/);
// guint64 gdk_dmabuf_texture_builder_get_modifier (::GdkDmabufTextureBuilder* self /*none*/);
guint64 base::DmabufTextureBuilderBase::get_modifier () noexcept
{
  typedef guint64 (*call_wrap_t) (::GdkDmabufTextureBuilder* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_dmabuf_texture_builder_get_modifier;
  auto _temp_ret = call_wrap_v ((::GdkDmabufTextureBuilder*) (gobj_()));
  return _temp_ret;
}

// unsigned int gdk_dmabuf_texture_builder_get_n_planes (GdkDmabufTextureBuilder* self /*none*/);
// guint gdk_dmabuf_texture_builder_get_n_planes (::GdkDmabufTextureBuilder* self /*none*/);
guint base::DmabufTextureBuilderBase::get_n_planes () noexcept
{
  typedef guint (*call_wrap_t) (::GdkDmabufTextureBuilder* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_dmabuf_texture_builder_get_n_planes;
  auto _temp_ret = call_wrap_v ((::GdkDmabufTextureBuilder*) (gobj_()));
  return _temp_ret;
}

// unsigned int gdk_dmabuf_texture_builder_get_offset (GdkDmabufTextureBuilder* self /*none*/, unsigned int plane);
// guint gdk_dmabuf_texture_builder_get_offset (::GdkDmabufTextureBuilder* self /*none*/, guint plane);
guint base::DmabufTextureBuilderBase::get_offset (guint plane) noexcept
{
  typedef guint (*call_wrap_t) (::GdkDmabufTextureBuilder* self, guint plane);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_dmabuf_texture_builder_get_offset;
  auto plane_to_c = plane;
  auto _temp_ret = call_wrap_v ((::GdkDmabufTextureBuilder*) (gobj_()), (guint) (plane_to_c));
  return _temp_ret;
}

// gboolean gdk_dmabuf_texture_builder_get_premultiplied (GdkDmabufTextureBuilder* self /*none*/);
// gboolean gdk_dmabuf_texture_builder_get_premultiplied (::GdkDmabufTextureBuilder* self /*none*/);
bool base::DmabufTextureBuilderBase::get_premultiplied () noexcept
{
  typedef gboolean (*call_wrap_t) (::GdkDmabufTextureBuilder* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_dmabuf_texture_builder_get_premultiplied;
  auto _temp_ret = call_wrap_v ((::GdkDmabufTextureBuilder*) (gobj_()));
  return _temp_ret;
}

// unsigned int gdk_dmabuf_texture_builder_get_stride (GdkDmabufTextureBuilder* self /*none*/, unsigned int plane);
// guint gdk_dmabuf_texture_builder_get_stride (::GdkDmabufTextureBuilder* self /*none*/, guint plane);
guint base::DmabufTextureBuilderBase::get_stride (guint plane) noexcept
{
  typedef guint (*call_wrap_t) (::GdkDmabufTextureBuilder* self, guint plane);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_dmabuf_texture_builder_get_stride;
  auto plane_to_c = plane;
  auto _temp_ret = call_wrap_v ((::GdkDmabufTextureBuilder*) (gobj_()), (guint) (plane_to_c));
  return _temp_ret;
}

// cairo_region_t* /*none,nullable*/ gdk_dmabuf_texture_builder_get_update_region (GdkDmabufTextureBuilder* self /*none*/);
// ::cairo_region_t* /*none,nullable*/ gdk_dmabuf_texture_builder_get_update_region (::GdkDmabufTextureBuilder* self /*none*/);
cairo::Region_Ref base::DmabufTextureBuilderBase::get_update_region () noexcept
{
  typedef ::cairo_region_t* (*call_wrap_t) (::GdkDmabufTextureBuilder* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_dmabuf_texture_builder_get_update_region;
  auto _temp_ret = call_wrap_v ((::GdkDmabufTextureBuilder*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// GdkTexture* /*none,nullable*/ gdk_dmabuf_texture_builder_get_update_texture (GdkDmabufTextureBuilder* self /*none*/);
// ::GdkTexture* /*none,nullable*/ gdk_dmabuf_texture_builder_get_update_texture (::GdkDmabufTextureBuilder* self /*none*/);
Gdk::Texture base::DmabufTextureBuilderBase::get_update_texture () noexcept
{
  typedef ::GdkTexture* (*call_wrap_t) (::GdkDmabufTextureBuilder* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_dmabuf_texture_builder_get_update_texture;
  auto _temp_ret = call_wrap_v ((::GdkDmabufTextureBuilder*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// unsigned int gdk_dmabuf_texture_builder_get_width (GdkDmabufTextureBuilder* self /*none*/);
// guint gdk_dmabuf_texture_builder_get_width (::GdkDmabufTextureBuilder* self /*none*/);
guint base::DmabufTextureBuilderBase::get_width () noexcept
{
  typedef guint (*call_wrap_t) (::GdkDmabufTextureBuilder* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_dmabuf_texture_builder_get_width;
  auto _temp_ret = call_wrap_v ((::GdkDmabufTextureBuilder*) (gobj_()));
  return _temp_ret;
}

// void gdk_dmabuf_texture_builder_set_color_state (GdkDmabufTextureBuilder* self /*none*/, GdkColorState* color_state /*none,nullable*/);
// void gdk_dmabuf_texture_builder_set_color_state (::GdkDmabufTextureBuilder* self /*none*/, ::GdkColorState* color_state /*none,nullable*/);
void base::DmabufTextureBuilderBase::set_color_state (Gdk::ColorState_Ref color_state) noexcept
{
  typedef void (*call_wrap_t) (::GdkDmabufTextureBuilder* self, ::GdkColorState* color_state);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_dmabuf_texture_builder_set_color_state;
  auto color_state_to_c = gi::unwrap (color_state, gi::transfer_none);
  call_wrap_v ((::GdkDmabufTextureBuilder*) (gobj_()), (::GdkColorState*) (color_state_to_c));
}
void base::DmabufTextureBuilderBase::set_color_state () noexcept
{
  typedef void (*call_wrap_t) (::GdkDmabufTextureBuilder* self, ::GdkColorState* color_state);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_dmabuf_texture_builder_set_color_state;
  auto color_state_to_c = nullptr;
  call_wrap_v ((::GdkDmabufTextureBuilder*) (gobj_()), (::GdkColorState*) (color_state_to_c));
}

// void gdk_dmabuf_texture_builder_set_display (GdkDmabufTextureBuilder* self /*none*/, GdkDisplay* display /*none*/);
// void gdk_dmabuf_texture_builder_set_display (::GdkDmabufTextureBuilder* self /*none*/, ::GdkDisplay* display /*none*/);
void base::DmabufTextureBuilderBase::set_display (Gdk::Display display) noexcept
{
  typedef void (*call_wrap_t) (::GdkDmabufTextureBuilder* self, ::GdkDisplay* display);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_dmabuf_texture_builder_set_display;
  auto display_to_c = gi::unwrap (display, gi::transfer_none);
  call_wrap_v ((::GdkDmabufTextureBuilder*) (gobj_()), (::GdkDisplay*) (display_to_c));
}

// void gdk_dmabuf_texture_builder_set_fd (GdkDmabufTextureBuilder* self /*none*/, unsigned int plane, int fd);
// void gdk_dmabuf_texture_builder_set_fd (::GdkDmabufTextureBuilder* self /*none*/, guint plane, gint fd);
void base::DmabufTextureBuilderBase::set_fd (guint plane, gint fd) noexcept
{
  typedef void (*call_wrap_t) (::GdkDmabufTextureBuilder* self, guint plane, gint fd);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_dmabuf_texture_builder_set_fd;
  auto fd_to_c = fd;
  auto plane_to_c = plane;
  call_wrap_v ((::GdkDmabufTextureBuilder*) (gobj_()), (guint) (plane_to_c), (gint) (fd_to_c));
}

// void gdk_dmabuf_texture_builder_set_fourcc (GdkDmabufTextureBuilder* self /*none*/, guint32 fourcc);
// void gdk_dmabuf_texture_builder_set_fourcc (::GdkDmabufTextureBuilder* self /*none*/, guint32 fourcc);
void base::DmabufTextureBuilderBase::set_fourcc (guint32 fourcc) noexcept
{
  typedef void (*call_wrap_t) (::GdkDmabufTextureBuilder* self, guint32 fourcc);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_dmabuf_texture_builder_set_fourcc;
  auto fourcc_to_c = fourcc;
  call_wrap_v ((::GdkDmabufTextureBuilder*) (gobj_()), (guint32) (fourcc_to_c));
}

// void gdk_dmabuf_texture_builder_set_height (GdkDmabufTextureBuilder* self /*none*/, unsigned int height);
// void gdk_dmabuf_texture_builder_set_height (::GdkDmabufTextureBuilder* self /*none*/, guint height);
void base::DmabufTextureBuilderBase::set_height (guint height) noexcept
{
  typedef void (*call_wrap_t) (::GdkDmabufTextureBuilder* self, guint height);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_dmabuf_texture_builder_set_height;
  auto height_to_c = height;
  call_wrap_v ((::GdkDmabufTextureBuilder*) (gobj_()), (guint) (height_to_c));
}

// void gdk_dmabuf_texture_builder_set_modifier (GdkDmabufTextureBuilder* self /*none*/, guint64 modifier);
// void gdk_dmabuf_texture_builder_set_modifier (::GdkDmabufTextureBuilder* self /*none*/, guint64 modifier);
void base::DmabufTextureBuilderBase::set_modifier (guint64 modifier) noexcept
{
  typedef void (*call_wrap_t) (::GdkDmabufTextureBuilder* self, guint64 modifier);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_dmabuf_texture_builder_set_modifier;
  auto modifier_to_c = modifier;
  call_wrap_v ((::GdkDmabufTextureBuilder*) (gobj_()), (guint64) (modifier_to_c));
}

// void gdk_dmabuf_texture_builder_set_n_planes (GdkDmabufTextureBuilder* self /*none*/, unsigned int n_planes);
// void gdk_dmabuf_texture_builder_set_n_planes (::GdkDmabufTextureBuilder* self /*none*/, guint n_planes);
void base::DmabufTextureBuilderBase::set_n_planes (guint n_planes) noexcept
{
  typedef void (*call_wrap_t) (::GdkDmabufTextureBuilder* self, guint n_planes);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_dmabuf_texture_builder_set_n_planes;
  auto n_planes_to_c = n_planes;
  call_wrap_v ((::GdkDmabufTextureBuilder*) (gobj_()), (guint) (n_planes_to_c));
}

// void gdk_dmabuf_texture_builder_set_offset (GdkDmabufTextureBuilder* self /*none*/, unsigned int plane, unsigned int offset);
// void gdk_dmabuf_texture_builder_set_offset (::GdkDmabufTextureBuilder* self /*none*/, guint plane, guint offset);
void base::DmabufTextureBuilderBase::set_offset (guint plane, guint offset) noexcept
{
  typedef void (*call_wrap_t) (::GdkDmabufTextureBuilder* self, guint plane, guint offset);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_dmabuf_texture_builder_set_offset;
  auto offset_to_c = offset;
  auto plane_to_c = plane;
  call_wrap_v ((::GdkDmabufTextureBuilder*) (gobj_()), (guint) (plane_to_c), (guint) (offset_to_c));
}

// void gdk_dmabuf_texture_builder_set_premultiplied (GdkDmabufTextureBuilder* self /*none*/, gboolean premultiplied);
// void gdk_dmabuf_texture_builder_set_premultiplied (::GdkDmabufTextureBuilder* self /*none*/, gboolean premultiplied);
void base::DmabufTextureBuilderBase::set_premultiplied (gboolean premultiplied) noexcept
{
  typedef void (*call_wrap_t) (::GdkDmabufTextureBuilder* self, gboolean premultiplied);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_dmabuf_texture_builder_set_premultiplied;
  auto premultiplied_to_c = premultiplied;
  call_wrap_v ((::GdkDmabufTextureBuilder*) (gobj_()), (gboolean) (premultiplied_to_c));
}

// void gdk_dmabuf_texture_builder_set_stride (GdkDmabufTextureBuilder* self /*none*/, unsigned int plane, unsigned int stride);
// void gdk_dmabuf_texture_builder_set_stride (::GdkDmabufTextureBuilder* self /*none*/, guint plane, guint stride);
void base::DmabufTextureBuilderBase::set_stride (guint plane, guint stride) noexcept
{
  typedef void (*call_wrap_t) (::GdkDmabufTextureBuilder* self, guint plane, guint stride);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_dmabuf_texture_builder_set_stride;
  auto stride_to_c = stride;
  auto plane_to_c = plane;
  call_wrap_v ((::GdkDmabufTextureBuilder*) (gobj_()), (guint) (plane_to_c), (guint) (stride_to_c));
}

// void gdk_dmabuf_texture_builder_set_update_region (GdkDmabufTextureBuilder* self /*none*/, cairo_region_t* region /*none,nullable*/);
// void gdk_dmabuf_texture_builder_set_update_region (::GdkDmabufTextureBuilder* self /*none*/, ::cairo_region_t* region /*none,nullable*/);
void base::DmabufTextureBuilderBase::set_update_region (cairo::Region_Ref region) noexcept
{
  typedef void (*call_wrap_t) (::GdkDmabufTextureBuilder* self, ::cairo_region_t* region);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_dmabuf_texture_builder_set_update_region;
  auto region_to_c = gi::unwrap (region, gi::transfer_none);
  call_wrap_v ((::GdkDmabufTextureBuilder*) (gobj_()), (::cairo_region_t*) (region_to_c));
}
void base::DmabufTextureBuilderBase::set_update_region () noexcept
{
  typedef void (*call_wrap_t) (::GdkDmabufTextureBuilder* self, ::cairo_region_t* region);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_dmabuf_texture_builder_set_update_region;
  auto region_to_c = nullptr;
  call_wrap_v ((::GdkDmabufTextureBuilder*) (gobj_()), (::cairo_region_t*) (region_to_c));
}

// void gdk_dmabuf_texture_builder_set_update_texture (GdkDmabufTextureBuilder* self /*none*/, GdkTexture* texture /*none,nullable*/);
// void gdk_dmabuf_texture_builder_set_update_texture (::GdkDmabufTextureBuilder* self /*none*/, ::GdkTexture* texture /*none,nullable*/);
void base::DmabufTextureBuilderBase::set_update_texture (Gdk::Texture texture) noexcept
{
  typedef void (*call_wrap_t) (::GdkDmabufTextureBuilder* self, ::GdkTexture* texture);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_dmabuf_texture_builder_set_update_texture;
  auto texture_to_c = gi::unwrap (texture, gi::transfer_none);
  call_wrap_v ((::GdkDmabufTextureBuilder*) (gobj_()), (::GdkTexture*) (texture_to_c));
}
void base::DmabufTextureBuilderBase::set_update_texture () noexcept
{
  typedef void (*call_wrap_t) (::GdkDmabufTextureBuilder* self, ::GdkTexture* texture);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_dmabuf_texture_builder_set_update_texture;
  auto texture_to_c = nullptr;
  call_wrap_v ((::GdkDmabufTextureBuilder*) (gobj_()), (::GdkTexture*) (texture_to_c));
}

// void gdk_dmabuf_texture_builder_set_width (GdkDmabufTextureBuilder* self /*none*/, unsigned int width);
// void gdk_dmabuf_texture_builder_set_width (::GdkDmabufTextureBuilder* self /*none*/, guint width);
void base::DmabufTextureBuilderBase::set_width (guint width) noexcept
{
  typedef void (*call_wrap_t) (::GdkDmabufTextureBuilder* self, guint width);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_dmabuf_texture_builder_set_width;
  auto width_to_c = width;
  call_wrap_v ((::GdkDmabufTextureBuilder*) (gobj_()), (guint) (width_to_c));
}


} // namespace base

} // namespace Gdk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gdk/dmabuftexturebuilder_extra_def_impl.hpp>)
#include <gdk/dmabuftexturebuilder_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gdk/dmabuftexturebuilder_extra_impl.hpp>)
#include <gdk/dmabuftexturebuilder_extra_impl.hpp>
#endif
#endif

#endif
