// AUTO-GENERATED

#ifndef _GI_GDK__CALLBACKS_IMPL_HPP_
#define _GI_GDK__CALLBACKS_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gdk {

// typedef void (*GdkContentDeserializeFunc) (GdkContentDeserializer* deserializer /*none*/);
// typedef void (*GdkContentDeserializeFunc) (::GdkContentDeserializer* deserializer /*none*/);
// SKIP; not a callback since no user_data

// typedef void (*GdkContentSerializeFunc) (GdkContentSerializer* serializer /*none*/);
// typedef void (*GdkContentSerializeFunc) (::GdkContentSerializer* serializer /*none*/);
// SKIP; not a callback since no user_data

// typedef GdkTexture* /*full,nullable*/ (*GdkCursorGetTextureCallback) (GdkCursor* cursor /*none*/, int cursor_size, double scale, int* width, int* height, int* hotspot_x, int* hotspot_y, gpointer data);
// typedef ::GdkTexture* /*full,nullable*/ (*GdkCursorGetTextureCallback) (::GdkCursor* cursor /*none*/, gint cursor_size, gdouble scale, gint* width, gint* height, gint* hotspot_x, gint* hotspot_y, void* data);
namespace internal {

Gdk::Texture CursorGetTextureCallback_CF (Gdk::Cursor cursor, gint cursor_size, gdouble scale, gint & width, gint & height, gint & hotspot_x, gint & hotspot_y, CursorGetTextureCallback_CF_CType _call, gpointer data) noexcept
{
  auto data_to_c = data;
  gint hotspot_y_o {};
  gint hotspot_x_o {};
  gint height_o {};
  gint width_o {};
  auto scale_to_c = scale;
  auto cursor_size_to_c = cursor_size;
  auto cursor_to_c = gi::unwrap (cursor, gi::transfer_none);
  auto _temp_ret = _call ((::GdkCursor*) (cursor_to_c), (gint) (cursor_size_to_c), (gdouble) (scale_to_c), (gint*) (&width_o), (gint*) (&height_o), (gint*) (&hotspot_x_o), (gint*) (&hotspot_y_o), (void*) (data_to_c));
  hotspot_y = hotspot_y_o;
  hotspot_x = hotspot_x_o;
  height = height_o;
  width = width_o;
  return gi::wrap (_temp_ret, gi::transfer_full);
}
} // namespace internal


} // namespace Gdk

} // namespace repository

} // namespace gi

#endif
