// AUTO-GENERATED

#ifndef _GI_GSK__CALLBACKS_IMPL_HPP_
#define _GI_GSK__CALLBACKS_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gsk {

// typedef void (*GskParseErrorFunc) (const GskParseLocation* start /*none*/, const GskParseLocation* end /*none*/, const GError* error /*none*/, gpointer user_data);
// typedef void (*GskParseErrorFunc) (const ::GskParseLocation* start /*none*/, const ::GskParseLocation* end /*none*/, const ::GError* error /*none*/, void* user_data);
namespace internal {

void ParseErrorFunc_CF (const Gsk::ParseLocation_Ref start, const Gsk::ParseLocation_Ref end, const GLib::Error_Ref error, ParseErrorFunc_CF_CType _call, gpointer user_data) noexcept
{
  auto user_data_to_c = user_data;
  auto error_to_c = gi::unwrap (error, gi::transfer_none);
  auto end_to_c = gi::unwrap (end, gi::transfer_none);
  auto start_to_c = gi::unwrap (start, gi::transfer_none);
  _call ((const ::GskParseLocation*) (start_to_c), (const ::GskParseLocation*) (end_to_c), (const ::GError*) (error_to_c), (void*) (user_data_to_c));
}
} // namespace internal


// typedef gboolean (*GskPathForeachFunc) (GskPathOperation op, const graphene_point_t* pts /*none*/, gsize n_pts, float weight, gpointer user_data);
// typedef gboolean (*GskPathForeachFunc) (::GskPathOperation op, const ::graphene_point_t** pts /*none*/, gsize n_pts, gfloat weight, void* user_data);
// SKIP; pts in boxed array not supported (depth 1)

// typedef gboolean (*GskPathIntersectionFunc) (GskPath* path1 /*none*/, const GskPathPoint* point1 /*none*/, GskPath* path2 /*none*/, const GskPathPoint* point2 /*none*/, GskPathIntersection kind, gpointer user_data);
// typedef gboolean (*GskPathIntersectionFunc) (::GskPath* path1 /*none*/, const ::GskPathPoint* point1 /*none*/, ::GskPath* path2 /*none*/, const ::GskPathPoint* point2 /*none*/, ::GskPathIntersection kind, void* user_data);
namespace internal {

bool PathIntersectionFunc_CF (Gsk::Path_Ref path1, const Gsk::PathPoint_Ref point1, Gsk::Path_Ref path2, const Gsk::PathPoint_Ref point2, Gsk::PathIntersection kind, PathIntersectionFunc_CF_CType _call, gpointer user_data) noexcept
{
  auto user_data_to_c = user_data;
  auto kind_to_c = gi::unwrap (kind);
  auto point2_to_c = gi::unwrap (point2, gi::transfer_none);
  auto path2_to_c = gi::unwrap (path2, gi::transfer_none);
  auto point1_to_c = gi::unwrap (point1, gi::transfer_none);
  auto path1_to_c = gi::unwrap (path1, gi::transfer_none);
  auto _temp_ret = _call ((::GskPath*) (path1_to_c), (const ::GskPathPoint*) (point1_to_c), (::GskPath*) (path2_to_c), (const ::GskPathPoint*) (point2_to_c), (::GskPathIntersection) (kind_to_c), (void*) (user_data_to_c));
  return _temp_ret;
}
} // namespace internal


// typedef PangoFont* /*full*/ (*GskRenderReplayFontFilter) (GskRenderReplay* replay /*none*/, PangoFont* font /*none*/, gpointer user_data);
// typedef ::PangoFont* /*full*/ (*GskRenderReplayFontFilter) ( replay /*none*/, ::PangoFont* font /*none*/, void* user_data);
// SKIP; replay type  not supported

// typedef GskRenderNode* /*full,nullable*/ (*GskRenderReplayNodeFilter) (GskRenderReplay* replay /*none*/, GskRenderNode* node /*none*/, gpointer user_data);
// typedef  /*full,nullable*/ (*GskRenderReplayNodeFilter) ( replay /*none*/,  node /*none*/, void* user_data);
// SKIP; node type  not supported, replay type  not supported,  type  not supported

// typedef GdkTexture* /*full*/ (*GskRenderReplayTextureFilter) (GskRenderReplay* replay /*none*/, GdkTexture* texture /*none*/, gpointer user_data);
// typedef ::GdkTexture* /*full*/ (*GskRenderReplayTextureFilter) ( replay /*none*/, ::GdkTexture* texture /*none*/, void* user_data);
// SKIP; replay type  not supported

} // namespace Gsk

} // namespace repository

} // namespace gi

#endif
