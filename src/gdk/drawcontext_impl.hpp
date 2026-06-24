// AUTO-GENERATED

#ifndef _GI_GDK_DRAWCONTEXT_IMPL_HPP_
#define _GI_GDK_DRAWCONTEXT_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gdk {

namespace base {

// void gdk_draw_context_begin_frame (GdkDrawContext* context /*none*/, const cairo_region_t* region /*none*/);
// void gdk_draw_context_begin_frame (::GdkDrawContext* context /*none*/, const ::cairo_region_t* region /*none*/);
// IGNORE; deprecated

// void gdk_draw_context_end_frame (GdkDrawContext* context /*none*/);
// void gdk_draw_context_end_frame (::GdkDrawContext* context /*none*/);
// IGNORE; deprecated

// GdkDisplay* /*none,nullable*/ gdk_draw_context_get_display (GdkDrawContext* context /*none*/);
// ::GdkDisplay* /*none,nullable*/ gdk_draw_context_get_display (::GdkDrawContext* context /*none*/);
Gdk::Display base::DrawContextBase::get_display () noexcept
{
  typedef ::GdkDisplay* (*call_wrap_t) (::GdkDrawContext* context);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_draw_context_get_display;
  auto _temp_ret = call_wrap_v ((::GdkDrawContext*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// const cairo_region_t* /*none,nullable*/ gdk_draw_context_get_frame_region (GdkDrawContext* context /*none*/);
// const ::cairo_region_t* /*none,nullable*/ gdk_draw_context_get_frame_region (::GdkDrawContext* context /*none*/);
// IGNORE; deprecated

// GdkSurface* /*none,nullable*/ gdk_draw_context_get_surface (GdkDrawContext* context /*none*/);
// ::GdkSurface* /*none,nullable*/ gdk_draw_context_get_surface (::GdkDrawContext* context /*none*/);
Gdk::Surface base::DrawContextBase::get_surface () noexcept
{
  typedef ::GdkSurface* (*call_wrap_t) (::GdkDrawContext* context);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_draw_context_get_surface;
  auto _temp_ret = call_wrap_v ((::GdkDrawContext*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// gboolean gdk_draw_context_is_in_frame (GdkDrawContext* context /*none*/);
// gboolean gdk_draw_context_is_in_frame (::GdkDrawContext* context /*none*/);
// IGNORE; deprecated


} // namespace base

} // namespace Gdk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gdk/drawcontext_extra_def_impl.hpp>)
#include <gdk/drawcontext_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gdk/drawcontext_extra_impl.hpp>)
#include <gdk/drawcontext_extra_impl.hpp>
#endif
#endif

#endif
