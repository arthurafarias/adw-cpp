// AUTO-GENERATED

#ifndef _GI_GSK__FLAGS_HPP_
#define _GI_GSK__FLAGS_HPP_

namespace gi {

namespace repository {

namespace Gsk {

enum class Isolation : std::underlying_type<GskIsolation>::type {
  NONE_ = GSK_ISOLATION_NONE,
  BACKGROUND_ = GSK_ISOLATION_BACKGROUND,
  COPY_PASTE_ = GSK_ISOLATION_COPY_PASTE,
  ALL_ = GSK_ISOLATION_ALL,
};

GI_FLAG_OPERATORS(Isolation)

} // namespace Gsk

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gsk::Isolation>
{ typedef GskIsolation type; }; 
template<> struct declare_cpptype_of<GskIsolation>
{ typedef Gsk::Isolation type; }; 

template<> struct declare_gtype_of<Gsk::Isolation>
{ static GType get_type() { return gsk_isolation_get_type(); } };

template<> struct is_bitfield<Gsk::Isolation> : public std::true_type
{};


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gsk {

enum class PathForeachFlags : std::underlying_type<GskPathForeachFlags>::type {
  ONLY_LINES_ = GSK_PATH_FOREACH_ALLOW_ONLY_LINES,
  QUAD_ = GSK_PATH_FOREACH_ALLOW_QUAD,
  CUBIC_ = GSK_PATH_FOREACH_ALLOW_CUBIC,
  CONIC_ = GSK_PATH_FOREACH_ALLOW_CONIC,
};

GI_FLAG_OPERATORS(PathForeachFlags)

} // namespace Gsk

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gsk::PathForeachFlags>
{ typedef GskPathForeachFlags type; }; 
template<> struct declare_cpptype_of<GskPathForeachFlags>
{ typedef Gsk::PathForeachFlags type; }; 

template<> struct declare_gtype_of<Gsk::PathForeachFlags>
{ static GType get_type() { return gsk_path_foreach_flags_get_type(); } };

template<> struct is_bitfield<Gsk::PathForeachFlags> : public std::true_type
{};


} // namespace repository

} // namespace gi


#endif
