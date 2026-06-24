// AUTO-GENERATED

#ifndef _GI_CAIRO_TEXTCLUSTER_IMPL_HPP_
#define _GI_CAIRO_TEXTCLUSTER_IMPL_HPP_

namespace gi {

namespace repository {

namespace cairo {

namespace base {

GI_MODULE_STATIC_OR_INLINE gint _field_num_bytes_get (const ::cairo_text_cluster_t* obj) { return (gint) obj->num_bytes; }
// gint TextCluster::num_bytes (const ::cairo_text_cluster_t* obj /*none*/);
// gint TextCluster::num_bytes (const ::cairo_text_cluster_t* obj /*none*/);
gint base::TextClusterBase::num_bytes_ () const noexcept
{
  typedef gint (*call_wrap_t) (const ::cairo_text_cluster_t* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_num_bytes_get;
  auto _temp_ret = call_wrap_v ((const ::cairo_text_cluster_t*) (gobj_()));
  return _temp_ret;
}

GI_MODULE_STATIC_OR_INLINE void _field_num_bytes_set (::cairo_text_cluster_t* obj, gint _value) { obj->num_bytes = (decltype(obj->num_bytes)) _value; }
//  TextCluster::num_bytes (::cairo_text_cluster_t* obj /*none*/, gint _value);
// void TextCluster::num_bytes (::cairo_text_cluster_t* obj /*none*/, gint _value);
void base::TextClusterBase::num_bytes_ (gint _value) noexcept
{
  typedef void (*call_wrap_t) (::cairo_text_cluster_t* obj, gint _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_num_bytes_set;
  auto _value_to_c = _value;
  call_wrap_v ((::cairo_text_cluster_t*) (gobj_()), (gint) (_value_to_c));
}

GI_MODULE_STATIC_OR_INLINE gint _field_num_glyphs_get (const ::cairo_text_cluster_t* obj) { return (gint) obj->num_glyphs; }
// gint TextCluster::num_glyphs (const ::cairo_text_cluster_t* obj /*none*/);
// gint TextCluster::num_glyphs (const ::cairo_text_cluster_t* obj /*none*/);
gint base::TextClusterBase::num_glyphs_ () const noexcept
{
  typedef gint (*call_wrap_t) (const ::cairo_text_cluster_t* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_num_glyphs_get;
  auto _temp_ret = call_wrap_v ((const ::cairo_text_cluster_t*) (gobj_()));
  return _temp_ret;
}

GI_MODULE_STATIC_OR_INLINE void _field_num_glyphs_set (::cairo_text_cluster_t* obj, gint _value) { obj->num_glyphs = (decltype(obj->num_glyphs)) _value; }
//  TextCluster::num_glyphs (::cairo_text_cluster_t* obj /*none*/, gint _value);
// void TextCluster::num_glyphs (::cairo_text_cluster_t* obj /*none*/, gint _value);
void base::TextClusterBase::num_glyphs_ (gint _value) noexcept
{
  typedef void (*call_wrap_t) (::cairo_text_cluster_t* obj, gint _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_num_glyphs_set;
  auto _value_to_c = _value;
  call_wrap_v ((::cairo_text_cluster_t*) (gobj_()), (gint) (_value_to_c));
}


} // namespace base

} // namespace cairo

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<cairo/textcluster_extra_def_impl.hpp>)
#include <cairo/textcluster_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<cairo/textcluster_extra_impl.hpp>)
#include <cairo/textcluster_extra_impl.hpp>
#endif
#endif

#endif
