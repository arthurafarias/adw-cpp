// AUTO-GENERATED

#ifndef _GI_GDK__CALLBACKS_HPP_
#define _GI_GDK__CALLBACKS_HPP_

namespace gi {

namespace repository {

namespace Gdk {

class ContentDeserializer;
class ContentSerializer;
class Cursor;
class Texture;

// typedef void (*GdkContentDeserializeFunc) (GdkContentDeserializer* deserializer /*none*/);
// typedef void (*GdkContentDeserializeFunc) (::GdkContentDeserializer* deserializer /*none*/);
// SKIP; not a callback since no user_data

// typedef void (*GdkContentSerializeFunc) (GdkContentSerializer* serializer /*none*/);
// typedef void (*GdkContentSerializeFunc) (::GdkContentSerializer* serializer /*none*/);
// SKIP; not a callback since no user_data

// typedef GdkTexture* /*full,nullable*/ (*GdkCursorGetTextureCallback) (GdkCursor* cursor /*none*/, int cursor_size, double scale, int* width, int* height, int* hotspot_x, int* hotspot_y, gpointer data);
// typedef ::GdkTexture* /*full,nullable*/ (*GdkCursorGetTextureCallback) (::GdkCursor* cursor /*none*/, gint cursor_size, gdouble scale, gint* width, gint* height, gint* hotspot_x, gint* hotspot_y, void* data);
namespace internal {

typedef ::GdkTexture* (*CursorGetTextureCallback_CF_CType) (::GdkCursor* cursor, gint cursor_size, gdouble scale, gint* width, gint* height, gint* hotspot_x, gint* hotspot_y, void* data);
GI_INLINE_DECL Gdk::Texture CursorGetTextureCallback_CF (Gdk::Cursor cursor, gint cursor_size, gdouble scale, gint & width, gint & height, gint & hotspot_x, gint & hotspot_y, CursorGetTextureCallback_CF_CType _call, gpointer data) noexcept;
GI_CB_ARG_CALLBACK_CUSTOM(CursorGetTextureCallback_CB_Trait, CursorGetTextureCallback_CF_CType, CursorGetTextureCallback_CF);
} // namespace internal

typedef gi::detail::callback<Gdk::Texture(Gdk::Cursor cursor, gint cursor_size, gdouble scale, gint & width, gint & height, gint & hotspot_x, gint & hotspot_y), gi::transfer_full_t, std::tuple<gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t, gi::transfer_full_t, gi::transfer_full_t, gi::transfer_full_t, gi::transfer_full_t>> CursorGetTextureCallback;

} // namespace Gdk

} // namespace repository

} // namespace gi

#endif
