// AUTO-GENERATED

#ifndef _GI_ADW_SWIPETRACKER_HPP_
#define _GI_ADW_SWIPETRACKER_HPP_


namespace gi {

namespace repository {

namespace Adw {

class Swipeable;

class SwipeTracker;

namespace base {


#define GI_ADW_SWIPETRACKER_BASE base::SwipeTrackerBase
class SwipeTrackerBase : public GObject::Object
{
typedef GObject::Object super_type;
public:
typedef ::AdwSwipeTracker BaseObjectType;

SwipeTrackerBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return adw_swipe_tracker_get_type(); } 

GI_INLINE_DECL Gtk::Orientable interface_ (gi::interface_tag<Gtk::Orientable>);

GI_INLINE_DECL operator Gtk::Orientable ();

// AdwSwipeTracker* /*full*/ adw_swipe_tracker_new (AdwSwipeable* swipeable /*none*/);
// ::AdwSwipeTracker* /*full*/ adw_swipe_tracker_new (::AdwSwipeable* swipeable /*none*/);
static GI_INLINE_DECL Adw::SwipeTracker new_ (Adw::Swipeable swipeable) noexcept;

// gboolean adw_swipe_tracker_get_allow_long_swipes (AdwSwipeTracker* self /*none*/);
// gboolean adw_swipe_tracker_get_allow_long_swipes (::AdwSwipeTracker* self /*none*/);
GI_INLINE_DECL bool get_allow_long_swipes () noexcept;

// gboolean adw_swipe_tracker_get_allow_mouse_drag (AdwSwipeTracker* self /*none*/);
// gboolean adw_swipe_tracker_get_allow_mouse_drag (::AdwSwipeTracker* self /*none*/);
GI_INLINE_DECL bool get_allow_mouse_drag () noexcept;

// gboolean adw_swipe_tracker_get_allow_window_handle (AdwSwipeTracker* self /*none*/);
// gboolean adw_swipe_tracker_get_allow_window_handle (::AdwSwipeTracker* self /*none*/);
GI_INLINE_DECL bool get_allow_window_handle () noexcept;

// gboolean adw_swipe_tracker_get_enabled (AdwSwipeTracker* self /*none*/);
// gboolean adw_swipe_tracker_get_enabled (::AdwSwipeTracker* self /*none*/);
GI_INLINE_DECL bool get_enabled () noexcept;

// gboolean adw_swipe_tracker_get_lower_overshoot (AdwSwipeTracker* self /*none*/);
// gboolean adw_swipe_tracker_get_lower_overshoot (::AdwSwipeTracker* self /*none*/);
GI_INLINE_DECL bool get_lower_overshoot () noexcept;

// gboolean adw_swipe_tracker_get_reversed (AdwSwipeTracker* self /*none*/);
// gboolean adw_swipe_tracker_get_reversed (::AdwSwipeTracker* self /*none*/);
GI_INLINE_DECL bool get_reversed () noexcept;

// AdwSwipeable* /*none*/ adw_swipe_tracker_get_swipeable (AdwSwipeTracker* self /*none*/);
// ::AdwSwipeable* /*none*/ adw_swipe_tracker_get_swipeable (::AdwSwipeTracker* self /*none*/);
GI_INLINE_DECL Adw::Swipeable get_swipeable () noexcept;

// gboolean adw_swipe_tracker_get_upper_overshoot (AdwSwipeTracker* self /*none*/);
// gboolean adw_swipe_tracker_get_upper_overshoot (::AdwSwipeTracker* self /*none*/);
GI_INLINE_DECL bool get_upper_overshoot () noexcept;

// void adw_swipe_tracker_set_allow_long_swipes (AdwSwipeTracker* self /*none*/, gboolean allow_long_swipes);
// void adw_swipe_tracker_set_allow_long_swipes (::AdwSwipeTracker* self /*none*/, gboolean allow_long_swipes);
GI_INLINE_DECL void set_allow_long_swipes (gboolean allow_long_swipes) noexcept;

// void adw_swipe_tracker_set_allow_mouse_drag (AdwSwipeTracker* self /*none*/, gboolean allow_mouse_drag);
// void adw_swipe_tracker_set_allow_mouse_drag (::AdwSwipeTracker* self /*none*/, gboolean allow_mouse_drag);
GI_INLINE_DECL void set_allow_mouse_drag (gboolean allow_mouse_drag) noexcept;

// void adw_swipe_tracker_set_allow_window_handle (AdwSwipeTracker* self /*none*/, gboolean allow_window_handle);
// void adw_swipe_tracker_set_allow_window_handle (::AdwSwipeTracker* self /*none*/, gboolean allow_window_handle);
GI_INLINE_DECL void set_allow_window_handle (gboolean allow_window_handle) noexcept;

// void adw_swipe_tracker_set_enabled (AdwSwipeTracker* self /*none*/, gboolean enabled);
// void adw_swipe_tracker_set_enabled (::AdwSwipeTracker* self /*none*/, gboolean enabled);
GI_INLINE_DECL void set_enabled (gboolean enabled) noexcept;

// void adw_swipe_tracker_set_lower_overshoot (AdwSwipeTracker* self /*none*/, gboolean overshoot);
// void adw_swipe_tracker_set_lower_overshoot (::AdwSwipeTracker* self /*none*/, gboolean overshoot);
GI_INLINE_DECL void set_lower_overshoot (gboolean overshoot) noexcept;

// void adw_swipe_tracker_set_reversed (AdwSwipeTracker* self /*none*/, gboolean reversed);
// void adw_swipe_tracker_set_reversed (::AdwSwipeTracker* self /*none*/, gboolean reversed);
GI_INLINE_DECL void set_reversed (gboolean reversed) noexcept;

// void adw_swipe_tracker_set_upper_overshoot (AdwSwipeTracker* self /*none*/, gboolean overshoot);
// void adw_swipe_tracker_set_upper_overshoot (::AdwSwipeTracker* self /*none*/, gboolean overshoot);
GI_INLINE_DECL void set_upper_overshoot (gboolean overshoot) noexcept;

// void adw_swipe_tracker_shift_position (AdwSwipeTracker* self /*none*/, double delta);
// void adw_swipe_tracker_shift_position (::AdwSwipeTracker* self /*none*/, gdouble delta);
GI_INLINE_DECL void shift_position (gdouble delta) noexcept;

gi::property_proxy<bool, base::SwipeTrackerBase> property_allow_long_swipes()
{ return gi::property_proxy<bool, base::SwipeTrackerBase> (*this, "allow-long-swipes"); }
const gi::property_proxy<bool, base::SwipeTrackerBase> property_allow_long_swipes() const
{ return gi::property_proxy<bool, base::SwipeTrackerBase> (*this, "allow-long-swipes"); }

gi::property_proxy<bool, base::SwipeTrackerBase> property_allow_mouse_drag()
{ return gi::property_proxy<bool, base::SwipeTrackerBase> (*this, "allow-mouse-drag"); }
const gi::property_proxy<bool, base::SwipeTrackerBase> property_allow_mouse_drag() const
{ return gi::property_proxy<bool, base::SwipeTrackerBase> (*this, "allow-mouse-drag"); }

gi::property_proxy<bool, base::SwipeTrackerBase> property_allow_window_handle()
{ return gi::property_proxy<bool, base::SwipeTrackerBase> (*this, "allow-window-handle"); }
const gi::property_proxy<bool, base::SwipeTrackerBase> property_allow_window_handle() const
{ return gi::property_proxy<bool, base::SwipeTrackerBase> (*this, "allow-window-handle"); }

gi::property_proxy<bool, base::SwipeTrackerBase> property_enabled()
{ return gi::property_proxy<bool, base::SwipeTrackerBase> (*this, "enabled"); }
const gi::property_proxy<bool, base::SwipeTrackerBase> property_enabled() const
{ return gi::property_proxy<bool, base::SwipeTrackerBase> (*this, "enabled"); }

gi::property_proxy<bool, base::SwipeTrackerBase> property_lower_overshoot()
{ return gi::property_proxy<bool, base::SwipeTrackerBase> (*this, "lower-overshoot"); }
const gi::property_proxy<bool, base::SwipeTrackerBase> property_lower_overshoot() const
{ return gi::property_proxy<bool, base::SwipeTrackerBase> (*this, "lower-overshoot"); }

gi::property_proxy<bool, base::SwipeTrackerBase> property_reversed()
{ return gi::property_proxy<bool, base::SwipeTrackerBase> (*this, "reversed"); }
const gi::property_proxy<bool, base::SwipeTrackerBase> property_reversed() const
{ return gi::property_proxy<bool, base::SwipeTrackerBase> (*this, "reversed"); }

gi::property_proxy<Adw::Swipeable, base::SwipeTrackerBase> property_swipeable()
{ return gi::property_proxy<Adw::Swipeable, base::SwipeTrackerBase> (*this, "swipeable"); }
const gi::property_proxy<Adw::Swipeable, base::SwipeTrackerBase> property_swipeable() const
{ return gi::property_proxy<Adw::Swipeable, base::SwipeTrackerBase> (*this, "swipeable"); }

gi::property_proxy<bool, base::SwipeTrackerBase> property_upper_overshoot()
{ return gi::property_proxy<bool, base::SwipeTrackerBase> (*this, "upper-overshoot"); }
const gi::property_proxy<bool, base::SwipeTrackerBase> property_upper_overshoot() const
{ return gi::property_proxy<bool, base::SwipeTrackerBase> (*this, "upper-overshoot"); }

// (signal) void begin-swipe ();
// (signal) void begin-swipe ();
gi::signal_proxy<void(Adw::SwipeTracker)> signal_begin_swipe()
{ return gi::signal_proxy<void(Adw::SwipeTracker)> (*this, "begin-swipe"); }

// (signal) void end-swipe (gdouble velocity, gdouble to);
// (signal) void end-swipe (gdouble velocity, gdouble to);
gi::signal_proxy<void(Adw::SwipeTracker, gdouble velocity, gdouble to)> signal_end_swipe()
{ return gi::signal_proxy<void(Adw::SwipeTracker, gdouble velocity, gdouble to)> (*this, "end-swipe"); }

// (signal) void prepare ( direction);
// (signal) void prepare (::AdwNavigationDirection direction);
gi::signal_proxy<void(Adw::SwipeTracker, Adw::NavigationDirection direction)> signal_prepare()
{ return gi::signal_proxy<void(Adw::SwipeTracker, Adw::NavigationDirection direction)> (*this, "prepare"); }

// (signal) void update-swipe (gdouble progress);
// (signal) void update-swipe (gdouble progress);
gi::signal_proxy<void(Adw::SwipeTracker, gdouble progress)> signal_update_swipe()
{ return gi::signal_proxy<void(Adw::SwipeTracker, gdouble progress)> (*this, "update-swipe"); }

}; // class

} // namespace base

} // namespace Adw

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<adw/swipetracker_extra_def.hpp>)
#include <adw/swipetracker_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<adw/swipetracker_extra.hpp>)
#include <adw/swipetracker_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Adw {

class SwipeTracker : public GI_ADW_SWIPETRACKER_BASE
{ typedef GI_ADW_SWIPETRACKER_BASE super_type; using super_type::super_type; };

} // namespace Adw

template<> struct declare_cpptype_of<::AdwSwipeTracker>
{ typedef Adw::SwipeTracker type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Adw {

namespace impl {

namespace internal {


class SwipeTrackerClassDef
{
typedef SwipeTrackerClassDef self;
public:
typedef Adw::SwipeTracker instance_type;
typedef ::AdwSwipeTrackerClass class_type;


struct TypeInitData;

protected:
GI_INLINE_DECL ~SwipeTrackerClassDef() = default;
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );


};

GI_CLASS_IMPL_BEGIN


class SwipeTrackerClass: public detail::ClassTemplate<Adw::impl::internal::SwipeTrackerClassDef, GObject::impl::internal::ObjectClass, Gtk::impl::internal::OrientableIfaceClassImpl>
{
friend class internal::SwipeTrackerClassDef;
typedef SwipeTrackerClass self;
typedef detail::ClassTemplate<Adw::impl::internal::SwipeTrackerClassDef, GObject::impl::internal::ObjectClass, Gtk::impl::internal::OrientableIfaceClassImpl> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types
typedef Gtk::impl::internal::OrientableIfaceClassImpl GtkOrientableIface_type;



};


struct SwipeTrackerClassDef::TypeInitData
{

template<typename SubClass>
constexpr static TypeInitData factory()
{
  // using DefData = detail::DefinitionData<SubClass, TypeInitData>;
  return {

  };
}
};
} // namespace internal

GI_CLASS_IMPL_END

using SwipeTrackerImpl = detail::ObjectImpl<SwipeTracker, internal::SwipeTrackerClass>;

} // namespace impl

} // namespace Adw

} // namespace repository

} // namespace gi

#endif
