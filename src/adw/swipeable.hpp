// AUTO-GENERATED

#ifndef _GI_ADW_SWIPEABLE_HPP_
#define _GI_ADW_SWIPEABLE_HPP_


namespace gi {

namespace repository {

namespace Adw {


class Swipeable;

namespace base {


#define GI_ADW_SWIPEABLE_BASE base::SwipeableBase
class SwipeableBase : public gi::InterfaceBase
{
typedef gi::InterfaceBase super_type;
public:
typedef ::AdwSwipeable BaseObjectType;

SwipeableBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return adw_swipeable_get_type(); } 

// double adw_swipeable_get_cancel_progress (AdwSwipeable* self /*none*/);
// gdouble adw_swipeable_get_cancel_progress (::AdwSwipeable* self /*none*/);
GI_INLINE_DECL gdouble get_cancel_progress () noexcept;

// double adw_swipeable_get_distance (AdwSwipeable* self /*none*/);
// gdouble adw_swipeable_get_distance (::AdwSwipeable* self /*none*/);
GI_INLINE_DECL gdouble get_distance () noexcept;

// double adw_swipeable_get_progress (AdwSwipeable* self /*none*/);
// gdouble adw_swipeable_get_progress (::AdwSwipeable* self /*none*/);
GI_INLINE_DECL gdouble get_progress () noexcept;

// double* /*full*/ adw_swipeable_get_snap_points (AdwSwipeable* self /*none*/, int* n_snap_points);
// gdouble* /*full*/ adw_swipeable_get_snap_points (::AdwSwipeable* self /*none*/, gint* n_snap_points);
GI_INLINE_DECL gi::Collection<gi::DSpan, gdouble, gi::transfer_full_t> get_snap_points () noexcept;

// void adw_swipeable_get_swipe_area (AdwSwipeable* self /*none*/, AdwNavigationDirection navigation_direction, gboolean is_drag, GdkRectangle* rect /*none,out,ca*/);
// void adw_swipeable_get_swipe_area (::AdwSwipeable* self /*none*/, ::AdwNavigationDirection navigation_direction, gboolean is_drag, ::GdkRectangle* rect /*none,out,ca*/);
GI_INLINE_DECL void get_swipe_area (Adw::NavigationDirection navigation_direction, gboolean is_drag, Gdk::Rectangle & rect) noexcept;
GI_INLINE_DECL Gdk::Rectangle get_swipe_area (Adw::NavigationDirection navigation_direction, gboolean is_drag) noexcept;

}; // class

} // namespace base

} // namespace Adw

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<adw/swipeable_extra_def.hpp>)
#include <adw/swipeable_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<adw/swipeable_extra.hpp>)
#include <adw/swipeable_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Adw {

class Swipeable : public GI_ADW_SWIPEABLE_BASE
{ typedef GI_ADW_SWIPEABLE_BASE super_type; using super_type::super_type; };

} // namespace Adw

template<> struct declare_cpptype_of<::AdwSwipeable>
{ typedef Adw::Swipeable type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Adw {

namespace impl {

namespace internal {


class SwipeableInterfaceDef
{
typedef SwipeableInterfaceDef self;
public:
typedef Adw::Swipeable instance_type;
typedef ::AdwSwipeableInterface interface_type;

using GI_MEMBER_CHECK_CONFLICT(get_cancel_progress) = self;
using GI_MEMBER_CHECK_CONFLICT(get_distance) = self;
using GI_MEMBER_CHECK_CONFLICT(get_progress) = self;
using GI_MEMBER_CHECK_CONFLICT(get_swipe_area) = self;

struct TypeInitData;

protected:
GI_INLINE_DECL ~SwipeableInterfaceDef() = default;
static GI_INLINE_DECL void interface_init (gpointer interface_struct, gpointer );

// double Swipeable::get_cancel_progress (AdwSwipeable* self /*none*/);
// gdouble Swipeable::get_cancel_progress (::AdwSwipeable* self /*none*/);
virtual gdouble get_cancel_progress_ () noexcept = 0;

// double Swipeable::get_distance (AdwSwipeable* self /*none*/);
// gdouble Swipeable::get_distance (::AdwSwipeable* self /*none*/);
virtual gdouble get_distance_ () noexcept = 0;

// double Swipeable::get_progress (AdwSwipeable* self /*none*/);
// gdouble Swipeable::get_progress (::AdwSwipeable* self /*none*/);
virtual gdouble get_progress_ () noexcept = 0;

// double* /*full*/ Swipeable::get_snap_points (AdwSwipeable* self /*none*/, int* n_snap_points);
// gdouble* /*full*/ Swipeable::get_snap_points (::AdwSwipeable* self /*none*/, gint* n_snap_points);
// SKIP; virtual-method return array not supported

// void Swipeable::get_swipe_area (AdwSwipeable* self /*none*/, AdwNavigationDirection navigation_direction, gboolean is_drag, GdkRectangle* rect /*none,out,ca*/);
// void Swipeable::get_swipe_area (::AdwSwipeable* self /*none*/, ::AdwNavigationDirection navigation_direction, gboolean is_drag, ::GdkRectangle* rect /*none,out,ca*/);
virtual void get_swipe_area_ (Adw::NavigationDirection navigation_direction, gboolean is_drag, Gdk::Rectangle_Ref rect) noexcept = 0;


};

using SwipeableImpl = detail::InterfaceImpl<SwipeableInterfaceDef>;

class SwipeableInterfaceClassImpl: public detail::InterfaceClassImpl<SwipeableImpl>
{
friend class internal::SwipeableInterfaceDef;
typedef SwipeableInterfaceClassImpl self;
typedef detail::InterfaceClassImpl<SwipeableImpl> super;

protected:
using super::super;

// double Swipeable::get_cancel_progress (AdwSwipeable* self /*none*/);
// gdouble Swipeable::get_cancel_progress (::AdwSwipeable* self /*none*/);
GI_INLINE_DECL gdouble get_cancel_progress_ () noexcept override;

// double Swipeable::get_distance (AdwSwipeable* self /*none*/);
// gdouble Swipeable::get_distance (::AdwSwipeable* self /*none*/);
GI_INLINE_DECL gdouble get_distance_ () noexcept override;

// double Swipeable::get_progress (AdwSwipeable* self /*none*/);
// gdouble Swipeable::get_progress (::AdwSwipeable* self /*none*/);
GI_INLINE_DECL gdouble get_progress_ () noexcept override;

// double* /*full*/ Swipeable::get_snap_points (AdwSwipeable* self /*none*/, int* n_snap_points);
// gdouble* /*full*/ Swipeable::get_snap_points (::AdwSwipeable* self /*none*/, gint* n_snap_points);
// SKIP; virtual-method return array not supported

// void Swipeable::get_swipe_area (AdwSwipeable* self /*none*/, AdwNavigationDirection navigation_direction, gboolean is_drag, GdkRectangle* rect /*none,out,ca*/);
// void Swipeable::get_swipe_area (::AdwSwipeable* self /*none*/, ::AdwNavigationDirection navigation_direction, gboolean is_drag, ::GdkRectangle* rect /*none,out,ca*/);
GI_INLINE_DECL void get_swipe_area_ (Adw::NavigationDirection navigation_direction, gboolean is_drag, Gdk::Rectangle_Ref rect) noexcept override;


};


struct SwipeableInterfaceDef::TypeInitData
{
  GI_MEMBER_DEFINE(SwipeableInterfaceClassImpl, get_cancel_progress)
  GI_MEMBER_DEFINE(SwipeableInterfaceClassImpl, get_distance)
  GI_MEMBER_DEFINE(SwipeableInterfaceClassImpl, get_progress)
  GI_MEMBER_DEFINE(SwipeableInterfaceClassImpl, get_swipe_area)

template<typename SubClass>
constexpr static TypeInitData factory()
{
  using DefData = detail::DefinitionData<SubClass, TypeInitData>;
  return {
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, get_cancel_progress),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, get_distance),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, get_progress),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, get_swipe_area)
  };
}
};
} // namespace internal

} // namespace impl

} // namespace Adw

} // namespace repository

} // namespace gi

#endif
