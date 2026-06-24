// AUTO-GENERATED

#ifndef _GI_GSK__CALLBACKS_HPP_
#define _GI_GSK__CALLBACKS_HPP_

namespace gi {

namespace repository {

namespace Gsk {

class ParseLocation;
class ParseLocation_Ref;
class Path;
class PathPoint;
class PathPoint_Ref;
class Path_Ref;

// typedef void (*GskParseErrorFunc) (const GskParseLocation* start /*none*/, const GskParseLocation* end /*none*/, const GError* error /*none*/, gpointer user_data);
// typedef void (*GskParseErrorFunc) (const ::GskParseLocation* start /*none*/, const ::GskParseLocation* end /*none*/, const ::GError* error /*none*/, void* user_data);
namespace internal {

typedef void (*ParseErrorFunc_CF_CType) (const ::GskParseLocation* start, const ::GskParseLocation* end, const ::GError* error, void* user_data);
GI_INLINE_DECL void ParseErrorFunc_CF (const Gsk::ParseLocation_Ref start, const Gsk::ParseLocation_Ref end, const GLib::Error_Ref error, ParseErrorFunc_CF_CType _call, gpointer user_data) noexcept;
GI_CB_ARG_CALLBACK_CUSTOM(ParseErrorFunc_CB_Trait, ParseErrorFunc_CF_CType, ParseErrorFunc_CF);
} // namespace internal

typedef gi::detail::callback<void(const Gsk::ParseLocation_Ref start, const Gsk::ParseLocation_Ref end, const GLib::Error_Ref error), gi::transfer_full_t, std::tuple<gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t>> ParseErrorFunc;

// typedef gboolean (*GskPathForeachFunc) (GskPathOperation op, const graphene_point_t* pts /*none*/, gsize n_pts, float weight, gpointer user_data);
// typedef gboolean (*GskPathForeachFunc) (::GskPathOperation op, const ::graphene_point_t** pts /*none*/, gsize n_pts, gfloat weight, void* user_data);
// SKIP; pts in boxed array not supported (depth 1)

// typedef gboolean (*GskPathIntersectionFunc) (GskPath* path1 /*none*/, const GskPathPoint* point1 /*none*/, GskPath* path2 /*none*/, const GskPathPoint* point2 /*none*/, GskPathIntersection kind, gpointer user_data);
// typedef gboolean (*GskPathIntersectionFunc) (::GskPath* path1 /*none*/, const ::GskPathPoint* point1 /*none*/, ::GskPath* path2 /*none*/, const ::GskPathPoint* point2 /*none*/, ::GskPathIntersection kind, void* user_data);
namespace internal {

typedef gboolean (*PathIntersectionFunc_CF_CType) (::GskPath* path1, const ::GskPathPoint* point1, ::GskPath* path2, const ::GskPathPoint* point2, ::GskPathIntersection kind, void* user_data);
GI_INLINE_DECL bool PathIntersectionFunc_CF (Gsk::Path_Ref path1, const Gsk::PathPoint_Ref point1, Gsk::Path_Ref path2, const Gsk::PathPoint_Ref point2, Gsk::PathIntersection kind, PathIntersectionFunc_CF_CType _call, gpointer user_data) noexcept;
GI_CB_ARG_CALLBACK_CUSTOM(PathIntersectionFunc_CB_Trait, PathIntersectionFunc_CF_CType, PathIntersectionFunc_CF);
} // namespace internal

typedef gi::detail::callback<bool(Gsk::Path_Ref path1, const Gsk::PathPoint_Ref point1, Gsk::Path_Ref path2, const Gsk::PathPoint_Ref point2, Gsk::PathIntersection kind), gi::transfer_none_t, std::tuple<gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t>> PathIntersectionFunc;

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
