// AUTO-GENERATED

#ifndef _GI_GDK_DMABUFFORMATS_IMPL_HPP_
#define _GI_GDK_DMABUFFORMATS_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gdk {

namespace base {

// gboolean gdk_dmabuf_formats_contains (GdkDmabufFormats* formats /*none*/, guint32 fourcc, guint64 modifier);
// gboolean gdk_dmabuf_formats_contains (::GdkDmabufFormats* formats /*none*/, guint32 fourcc, guint64 modifier);
bool base::DmabufFormatsBase::contains (guint32 fourcc, guint64 modifier) noexcept
{
  typedef gboolean (*call_wrap_t) (::GdkDmabufFormats* formats, guint32 fourcc, guint64 modifier);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_dmabuf_formats_contains;
  auto modifier_to_c = modifier;
  auto fourcc_to_c = fourcc;
  auto _temp_ret = call_wrap_v ((::GdkDmabufFormats*) (gobj_()), (guint32) (fourcc_to_c), (guint64) (modifier_to_c));
  return _temp_ret;
}

// gboolean gdk_dmabuf_formats_equal (const GdkDmabufFormats* formats1 /*none,nullable*/, const GdkDmabufFormats* formats2 /*none,nullable*/);
// gboolean gdk_dmabuf_formats_equal (const ::GdkDmabufFormats* formats1 /*none,nullable*/, const ::GdkDmabufFormats* formats2 /*none,nullable*/);
bool base::DmabufFormatsBase::equal (const Gdk::DmabufFormats_Ref formats2) const noexcept
{
  typedef gboolean (*call_wrap_t) (const ::GdkDmabufFormats* formats1, const ::GdkDmabufFormats* formats2);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_dmabuf_formats_equal;
  auto formats2_to_c = gi::unwrap (formats2, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const ::GdkDmabufFormats*) (gobj_()), (const ::GdkDmabufFormats*) (formats2_to_c));
  return _temp_ret;
}
bool base::DmabufFormatsBase::equal () const noexcept
{
  typedef gboolean (*call_wrap_t) (const ::GdkDmabufFormats* formats1, const ::GdkDmabufFormats* formats2);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_dmabuf_formats_equal;
  auto formats2_to_c = nullptr;
  auto _temp_ret = call_wrap_v ((const ::GdkDmabufFormats*) (gobj_()), (const ::GdkDmabufFormats*) (formats2_to_c));
  return _temp_ret;
}

// void gdk_dmabuf_formats_get_format (GdkDmabufFormats* formats /*none*/, gsize idx, guint32* fourcc, guint64* modifier);
// void gdk_dmabuf_formats_get_format (::GdkDmabufFormats* formats /*none*/, gsize idx, guint32* fourcc, guint64* modifier);
void base::DmabufFormatsBase::get_format (gsize idx, guint32 & fourcc, guint64 & modifier) noexcept
{
  typedef void (*call_wrap_t) (::GdkDmabufFormats* formats, gsize idx, guint32* fourcc, guint64* modifier);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_dmabuf_formats_get_format;
  guint64 modifier_o {};
  guint32 fourcc_o {};
  auto idx_to_c = idx;
  call_wrap_v ((::GdkDmabufFormats*) (gobj_()), (gsize) (idx_to_c), (guint32*) (&fourcc_o), (guint64*) (&modifier_o));
  modifier = modifier_o;
  fourcc = fourcc_o;
}
std::tuple<guint32, guint64> base::DmabufFormatsBase::get_format (gsize idx) noexcept
{
  typedef void (*call_wrap_t) (::GdkDmabufFormats* formats, gsize idx, guint32* fourcc, guint64* modifier);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_dmabuf_formats_get_format;
  guint64 modifier_o {};
  guint32 fourcc_o {};
  auto idx_to_c = idx;
  call_wrap_v ((::GdkDmabufFormats*) (gobj_()), (gsize) (idx_to_c), (guint32*) (&fourcc_o), (guint64*) (&modifier_o));
  auto &&tmp_return_1 = fourcc_o;
  auto &&tmp_return_2 = modifier_o;
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}

// gsize gdk_dmabuf_formats_get_n_formats (GdkDmabufFormats* formats /*none*/);
// gsize gdk_dmabuf_formats_get_n_formats (::GdkDmabufFormats* formats /*none*/);
gsize base::DmabufFormatsBase::get_n_formats () noexcept
{
  typedef gsize (*call_wrap_t) (::GdkDmabufFormats* formats);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_dmabuf_formats_get_n_formats;
  auto _temp_ret = call_wrap_v ((::GdkDmabufFormats*) (gobj_()));
  return _temp_ret;
}

// GdkDmabufFormats* /*full*/ gdk_dmabuf_formats_ref (GdkDmabufFormats* formats /*none*/);
// ::GdkDmabufFormats* /*full*/ gdk_dmabuf_formats_ref (::GdkDmabufFormats* formats /*none*/);
// IGNORE; marked ignore

// void gdk_dmabuf_formats_unref (GdkDmabufFormats* formats /*none*/);
// void gdk_dmabuf_formats_unref (::GdkDmabufFormats* formats /*none*/);
// IGNORE; marked ignore


} // namespace base

} // namespace Gdk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gdk/dmabufformats_extra_def_impl.hpp>)
#include <gdk/dmabufformats_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gdk/dmabufformats_extra_impl.hpp>)
#include <gdk/dmabufformats_extra_impl.hpp>
#endif
#endif

#endif
