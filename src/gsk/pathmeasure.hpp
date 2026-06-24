// AUTO-GENERATED

#ifndef _GI_GSK_PATHMEASURE_HPP_
#define _GI_GSK_PATHMEASURE_HPP_


namespace gi {

namespace repository {

namespace Gsk {

class Path;
class PathMeasure_Ref;
class PathPoint;
class PathPoint_Ref;
class Path_Ref;

class PathMeasure;

namespace base {


#define GI_GSK_PATHMEASURE_BASE base::PathMeasureBase
class PathMeasureBase : public gi::detail::GBoxedWrapperBase<PathMeasureBase, ::GskPathMeasure>
{
typedef gi::detail::GBoxedWrapperBase<PathMeasureBase, ::GskPathMeasure> super_type;
public:

PathMeasureBase (std::nullptr_t = nullptr) : super_type() {}

static GType get_type_ () G_GNUC_CONST { return gsk_path_measure_get_type(); } 

// GskPathMeasure* /*full*/ gsk_path_measure_new (GskPath* path /*none*/);
// ::GskPathMeasure* /*full*/ gsk_path_measure_new (::GskPath* path /*none*/);
static GI_INLINE_DECL Gsk::PathMeasure new_ (Gsk::Path_Ref path) noexcept;

// GskPathMeasure* /*full*/ gsk_path_measure_new_with_tolerance (GskPath* path /*none*/, float tolerance);
// ::GskPathMeasure* /*full*/ gsk_path_measure_new_with_tolerance (::GskPath* path /*none*/, gfloat tolerance);
static GI_INLINE_DECL Gsk::PathMeasure new_with_tolerance (Gsk::Path_Ref path, gfloat tolerance) noexcept;

// float gsk_path_measure_get_length (GskPathMeasure* self /*none*/);
// gfloat gsk_path_measure_get_length (::GskPathMeasure* self /*none*/);
GI_INLINE_DECL gfloat get_length () noexcept;

// GskPath* /*none*/ gsk_path_measure_get_path (GskPathMeasure* self /*none*/);
// ::GskPath* /*none*/ gsk_path_measure_get_path (::GskPathMeasure* self /*none*/);
GI_INLINE_DECL Gsk::Path_Ref get_path () noexcept;

// gboolean gsk_path_measure_get_point (GskPathMeasure* self /*none*/, float distance, GskPathPoint* result /*none,out,ca*/);
// gboolean gsk_path_measure_get_point (::GskPathMeasure* self /*none*/, gfloat distance, ::GskPathPoint* result /*none,out,ca*/);
GI_INLINE_DECL bool get_point (gfloat distance, Gsk::PathPoint & result) noexcept;
GI_INLINE_DECL std::tuple<bool, Gsk::PathPoint> get_point (gfloat distance) noexcept;

// float gsk_path_measure_get_tolerance (GskPathMeasure* self /*none*/);
// gfloat gsk_path_measure_get_tolerance (::GskPathMeasure* self /*none*/);
GI_INLINE_DECL gfloat get_tolerance () noexcept;

// GskPathMeasure* /*full*/ gsk_path_measure_ref (GskPathMeasure* self /*none*/);
// ::GskPathMeasure* /*full*/ gsk_path_measure_ref (::GskPathMeasure* self /*none*/);
// IGNORE; marked ignore

// void gsk_path_measure_unref (GskPathMeasure* self /*none*/);
// void gsk_path_measure_unref (::GskPathMeasure* self /*none*/);
// IGNORE; marked ignore

}; // class

} // namespace base

} // namespace Gsk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gsk/pathmeasure_extra_def.hpp>)
#include <gsk/pathmeasure_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gsk/pathmeasure_extra.hpp>)
#include <gsk/pathmeasure_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gsk {

class PathMeasure_Ref;

class PathMeasure : public gi::detail::GBoxedWrapper<PathMeasure, ::GskPathMeasure, GI_GSK_PATHMEASURE_BASE, PathMeasure_Ref>
{ typedef gi::detail::GBoxedWrapper<PathMeasure, ::GskPathMeasure, GI_GSK_PATHMEASURE_BASE, PathMeasure_Ref> super_type; using super_type::super_type; };


class PathMeasure_Ref : public gi::detail::GBoxedRefWrapper<PathMeasure, ::GskPathMeasure, GI_GSK_PATHMEASURE_BASE>
{ typedef gi::detail::GBoxedRefWrapper<PathMeasure, ::GskPathMeasure, GI_GSK_PATHMEASURE_BASE> super_type; using super_type::super_type; };

} // namespace Gsk

template<> struct declare_cpptype_of<::GskPathMeasure>
{ typedef Gsk::PathMeasure type; }; 

} // namespace repository

} // namespace gi

#endif
