// AUTO-GENERATED

#ifndef _GI_ADW_OVERLAYSPLITVIEW_HPP_
#define _GI_ADW_OVERLAYSPLITVIEW_HPP_


namespace gi {

namespace repository {

namespace Adw {

class Swipeable;

class OverlaySplitView;

namespace base {


#define GI_ADW_OVERLAYSPLITVIEW_BASE base::OverlaySplitViewBase
class OverlaySplitViewBase : public Gtk::Widget
{
typedef Gtk::Widget super_type;
public:
typedef ::AdwOverlaySplitView BaseObjectType;

OverlaySplitViewBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return adw_overlay_split_view_get_type(); } 

GI_INLINE_DECL Adw::Swipeable interface_ (gi::interface_tag<Adw::Swipeable>);

GI_INLINE_DECL operator Adw::Swipeable ();

// GtkWidget* /*none*/ adw_overlay_split_view_new ();
// ::AdwOverlaySplitView* /*none*/ adw_overlay_split_view_new ();
static GI_INLINE_DECL Adw::OverlaySplitView new_ () noexcept;

// gboolean adw_overlay_split_view_get_collapsed (AdwOverlaySplitView* self /*none*/);
// gboolean adw_overlay_split_view_get_collapsed (::AdwOverlaySplitView* self /*none*/);
GI_INLINE_DECL bool get_collapsed () noexcept;

// GtkWidget* /*none,nullable*/ adw_overlay_split_view_get_content (AdwOverlaySplitView* self /*none*/);
// ::GtkWidget* /*none,nullable*/ adw_overlay_split_view_get_content (::AdwOverlaySplitView* self /*none*/);
GI_INLINE_DECL Gtk::Widget get_content () noexcept;

// gboolean adw_overlay_split_view_get_enable_hide_gesture (AdwOverlaySplitView* self /*none*/);
// gboolean adw_overlay_split_view_get_enable_hide_gesture (::AdwOverlaySplitView* self /*none*/);
GI_INLINE_DECL bool get_enable_hide_gesture () noexcept;

// gboolean adw_overlay_split_view_get_enable_show_gesture (AdwOverlaySplitView* self /*none*/);
// gboolean adw_overlay_split_view_get_enable_show_gesture (::AdwOverlaySplitView* self /*none*/);
GI_INLINE_DECL bool get_enable_show_gesture () noexcept;

// double adw_overlay_split_view_get_max_sidebar_width (AdwOverlaySplitView* self /*none*/);
// gdouble adw_overlay_split_view_get_max_sidebar_width (::AdwOverlaySplitView* self /*none*/);
GI_INLINE_DECL gdouble get_max_sidebar_width () noexcept;

// double adw_overlay_split_view_get_min_sidebar_width (AdwOverlaySplitView* self /*none*/);
// gdouble adw_overlay_split_view_get_min_sidebar_width (::AdwOverlaySplitView* self /*none*/);
GI_INLINE_DECL gdouble get_min_sidebar_width () noexcept;

// gboolean adw_overlay_split_view_get_pin_sidebar (AdwOverlaySplitView* self /*none*/);
// gboolean adw_overlay_split_view_get_pin_sidebar (::AdwOverlaySplitView* self /*none*/);
GI_INLINE_DECL bool get_pin_sidebar () noexcept;

// gboolean adw_overlay_split_view_get_show_sidebar (AdwOverlaySplitView* self /*none*/);
// gboolean adw_overlay_split_view_get_show_sidebar (::AdwOverlaySplitView* self /*none*/);
GI_INLINE_DECL bool get_show_sidebar () noexcept;

// GtkWidget* /*none,nullable*/ adw_overlay_split_view_get_sidebar (AdwOverlaySplitView* self /*none*/);
// ::GtkWidget* /*none,nullable*/ adw_overlay_split_view_get_sidebar (::AdwOverlaySplitView* self /*none*/);
GI_INLINE_DECL Gtk::Widget get_sidebar () noexcept;

// GtkPackType adw_overlay_split_view_get_sidebar_position (AdwOverlaySplitView* self /*none*/);
// ::GtkPackType adw_overlay_split_view_get_sidebar_position (::AdwOverlaySplitView* self /*none*/);
GI_INLINE_DECL Gtk::PackType get_sidebar_position () noexcept;

// double adw_overlay_split_view_get_sidebar_width_fraction (AdwOverlaySplitView* self /*none*/);
// gdouble adw_overlay_split_view_get_sidebar_width_fraction (::AdwOverlaySplitView* self /*none*/);
GI_INLINE_DECL gdouble get_sidebar_width_fraction () noexcept;

// AdwLengthUnit adw_overlay_split_view_get_sidebar_width_unit (AdwOverlaySplitView* self /*none*/);
// ::AdwLengthUnit adw_overlay_split_view_get_sidebar_width_unit (::AdwOverlaySplitView* self /*none*/);
GI_INLINE_DECL Adw::LengthUnit get_sidebar_width_unit () noexcept;

// void adw_overlay_split_view_set_collapsed (AdwOverlaySplitView* self /*none*/, gboolean collapsed);
// void adw_overlay_split_view_set_collapsed (::AdwOverlaySplitView* self /*none*/, gboolean collapsed);
GI_INLINE_DECL void set_collapsed (gboolean collapsed) noexcept;

// void adw_overlay_split_view_set_content (AdwOverlaySplitView* self /*none*/, GtkWidget* content /*none,nullable*/);
// void adw_overlay_split_view_set_content (::AdwOverlaySplitView* self /*none*/, ::GtkWidget* content /*none,nullable*/);
GI_INLINE_DECL void set_content (Gtk::Widget content) noexcept;
GI_INLINE_DECL void set_content () noexcept;

// void adw_overlay_split_view_set_enable_hide_gesture (AdwOverlaySplitView* self /*none*/, gboolean enable_hide_gesture);
// void adw_overlay_split_view_set_enable_hide_gesture (::AdwOverlaySplitView* self /*none*/, gboolean enable_hide_gesture);
GI_INLINE_DECL void set_enable_hide_gesture (gboolean enable_hide_gesture) noexcept;

// void adw_overlay_split_view_set_enable_show_gesture (AdwOverlaySplitView* self /*none*/, gboolean enable_show_gesture);
// void adw_overlay_split_view_set_enable_show_gesture (::AdwOverlaySplitView* self /*none*/, gboolean enable_show_gesture);
GI_INLINE_DECL void set_enable_show_gesture (gboolean enable_show_gesture) noexcept;

// void adw_overlay_split_view_set_max_sidebar_width (AdwOverlaySplitView* self /*none*/, double width);
// void adw_overlay_split_view_set_max_sidebar_width (::AdwOverlaySplitView* self /*none*/, gdouble width);
GI_INLINE_DECL void set_max_sidebar_width (gdouble width) noexcept;

// void adw_overlay_split_view_set_min_sidebar_width (AdwOverlaySplitView* self /*none*/, double width);
// void adw_overlay_split_view_set_min_sidebar_width (::AdwOverlaySplitView* self /*none*/, gdouble width);
GI_INLINE_DECL void set_min_sidebar_width (gdouble width) noexcept;

// void adw_overlay_split_view_set_pin_sidebar (AdwOverlaySplitView* self /*none*/, gboolean pin_sidebar);
// void adw_overlay_split_view_set_pin_sidebar (::AdwOverlaySplitView* self /*none*/, gboolean pin_sidebar);
GI_INLINE_DECL void set_pin_sidebar (gboolean pin_sidebar) noexcept;

// void adw_overlay_split_view_set_show_sidebar (AdwOverlaySplitView* self /*none*/, gboolean show_sidebar);
// void adw_overlay_split_view_set_show_sidebar (::AdwOverlaySplitView* self /*none*/, gboolean show_sidebar);
GI_INLINE_DECL void set_show_sidebar (gboolean show_sidebar) noexcept;

// void adw_overlay_split_view_set_sidebar (AdwOverlaySplitView* self /*none*/, GtkWidget* sidebar /*none,nullable*/);
// void adw_overlay_split_view_set_sidebar (::AdwOverlaySplitView* self /*none*/, ::GtkWidget* sidebar /*none,nullable*/);
GI_INLINE_DECL void set_sidebar (Gtk::Widget sidebar) noexcept;
GI_INLINE_DECL void set_sidebar () noexcept;

// void adw_overlay_split_view_set_sidebar_position (AdwOverlaySplitView* self /*none*/, GtkPackType position);
// void adw_overlay_split_view_set_sidebar_position (::AdwOverlaySplitView* self /*none*/, ::GtkPackType position);
GI_INLINE_DECL void set_sidebar_position (Gtk::PackType position) noexcept;

// void adw_overlay_split_view_set_sidebar_width_fraction (AdwOverlaySplitView* self /*none*/, double fraction);
// void adw_overlay_split_view_set_sidebar_width_fraction (::AdwOverlaySplitView* self /*none*/, gdouble fraction);
GI_INLINE_DECL void set_sidebar_width_fraction (gdouble fraction) noexcept;

// void adw_overlay_split_view_set_sidebar_width_unit (AdwOverlaySplitView* self /*none*/, AdwLengthUnit unit);
// void adw_overlay_split_view_set_sidebar_width_unit (::AdwOverlaySplitView* self /*none*/, ::AdwLengthUnit unit);
GI_INLINE_DECL void set_sidebar_width_unit (Adw::LengthUnit unit) noexcept;

gi::property_proxy<bool, base::OverlaySplitViewBase> property_collapsed()
{ return gi::property_proxy<bool, base::OverlaySplitViewBase> (*this, "collapsed"); }
const gi::property_proxy<bool, base::OverlaySplitViewBase> property_collapsed() const
{ return gi::property_proxy<bool, base::OverlaySplitViewBase> (*this, "collapsed"); }

gi::property_proxy<Gtk::Widget, base::OverlaySplitViewBase> property_content()
{ return gi::property_proxy<Gtk::Widget, base::OverlaySplitViewBase> (*this, "content"); }
const gi::property_proxy<Gtk::Widget, base::OverlaySplitViewBase> property_content() const
{ return gi::property_proxy<Gtk::Widget, base::OverlaySplitViewBase> (*this, "content"); }

gi::property_proxy<bool, base::OverlaySplitViewBase> property_enable_hide_gesture()
{ return gi::property_proxy<bool, base::OverlaySplitViewBase> (*this, "enable-hide-gesture"); }
const gi::property_proxy<bool, base::OverlaySplitViewBase> property_enable_hide_gesture() const
{ return gi::property_proxy<bool, base::OverlaySplitViewBase> (*this, "enable-hide-gesture"); }

gi::property_proxy<bool, base::OverlaySplitViewBase> property_enable_show_gesture()
{ return gi::property_proxy<bool, base::OverlaySplitViewBase> (*this, "enable-show-gesture"); }
const gi::property_proxy<bool, base::OverlaySplitViewBase> property_enable_show_gesture() const
{ return gi::property_proxy<bool, base::OverlaySplitViewBase> (*this, "enable-show-gesture"); }

gi::property_proxy<gdouble, base::OverlaySplitViewBase> property_max_sidebar_width()
{ return gi::property_proxy<gdouble, base::OverlaySplitViewBase> (*this, "max-sidebar-width"); }
const gi::property_proxy<gdouble, base::OverlaySplitViewBase> property_max_sidebar_width() const
{ return gi::property_proxy<gdouble, base::OverlaySplitViewBase> (*this, "max-sidebar-width"); }

gi::property_proxy<gdouble, base::OverlaySplitViewBase> property_min_sidebar_width()
{ return gi::property_proxy<gdouble, base::OverlaySplitViewBase> (*this, "min-sidebar-width"); }
const gi::property_proxy<gdouble, base::OverlaySplitViewBase> property_min_sidebar_width() const
{ return gi::property_proxy<gdouble, base::OverlaySplitViewBase> (*this, "min-sidebar-width"); }

gi::property_proxy<bool, base::OverlaySplitViewBase> property_pin_sidebar()
{ return gi::property_proxy<bool, base::OverlaySplitViewBase> (*this, "pin-sidebar"); }
const gi::property_proxy<bool, base::OverlaySplitViewBase> property_pin_sidebar() const
{ return gi::property_proxy<bool, base::OverlaySplitViewBase> (*this, "pin-sidebar"); }

gi::property_proxy<bool, base::OverlaySplitViewBase> property_show_sidebar()
{ return gi::property_proxy<bool, base::OverlaySplitViewBase> (*this, "show-sidebar"); }
const gi::property_proxy<bool, base::OverlaySplitViewBase> property_show_sidebar() const
{ return gi::property_proxy<bool, base::OverlaySplitViewBase> (*this, "show-sidebar"); }

gi::property_proxy<Gtk::Widget, base::OverlaySplitViewBase> property_sidebar()
{ return gi::property_proxy<Gtk::Widget, base::OverlaySplitViewBase> (*this, "sidebar"); }
const gi::property_proxy<Gtk::Widget, base::OverlaySplitViewBase> property_sidebar() const
{ return gi::property_proxy<Gtk::Widget, base::OverlaySplitViewBase> (*this, "sidebar"); }

gi::property_proxy<Gtk::PackType, base::OverlaySplitViewBase> property_sidebar_position()
{ return gi::property_proxy<Gtk::PackType, base::OverlaySplitViewBase> (*this, "sidebar-position"); }
const gi::property_proxy<Gtk::PackType, base::OverlaySplitViewBase> property_sidebar_position() const
{ return gi::property_proxy<Gtk::PackType, base::OverlaySplitViewBase> (*this, "sidebar-position"); }

gi::property_proxy<gdouble, base::OverlaySplitViewBase> property_sidebar_width_fraction()
{ return gi::property_proxy<gdouble, base::OverlaySplitViewBase> (*this, "sidebar-width-fraction"); }
const gi::property_proxy<gdouble, base::OverlaySplitViewBase> property_sidebar_width_fraction() const
{ return gi::property_proxy<gdouble, base::OverlaySplitViewBase> (*this, "sidebar-width-fraction"); }

gi::property_proxy<Adw::LengthUnit, base::OverlaySplitViewBase> property_sidebar_width_unit()
{ return gi::property_proxy<Adw::LengthUnit, base::OverlaySplitViewBase> (*this, "sidebar-width-unit"); }
const gi::property_proxy<Adw::LengthUnit, base::OverlaySplitViewBase> property_sidebar_width_unit() const
{ return gi::property_proxy<Adw::LengthUnit, base::OverlaySplitViewBase> (*this, "sidebar-width-unit"); }

}; // class

} // namespace base

} // namespace Adw

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<adw/overlaysplitview_extra_def.hpp>)
#include <adw/overlaysplitview_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<adw/overlaysplitview_extra.hpp>)
#include <adw/overlaysplitview_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Adw {

class OverlaySplitView : public GI_ADW_OVERLAYSPLITVIEW_BASE
{ typedef GI_ADW_OVERLAYSPLITVIEW_BASE super_type; using super_type::super_type; };

} // namespace Adw

template<> struct declare_cpptype_of<::AdwOverlaySplitView>
{ typedef Adw::OverlaySplitView type; }; 

} // namespace repository

} // namespace gi

#include "swipeable.hpp"

namespace gi {

namespace repository {

namespace Adw {

namespace impl {

namespace internal {


class OverlaySplitViewClassDef
{
typedef OverlaySplitViewClassDef self;
public:
typedef Adw::OverlaySplitView instance_type;
typedef ::AdwOverlaySplitViewClass class_type;


struct TypeInitData;

protected:
GI_INLINE_DECL ~OverlaySplitViewClassDef() = default;
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );


};

GI_CLASS_IMPL_BEGIN


class OverlaySplitViewClass: public detail::ClassTemplate<Adw::impl::internal::OverlaySplitViewClassDef, Gtk::impl::internal::WidgetClass, Adw::impl::internal::SwipeableInterfaceClassImpl>
{
friend class internal::OverlaySplitViewClassDef;
typedef OverlaySplitViewClass self;
typedef detail::ClassTemplate<Adw::impl::internal::OverlaySplitViewClassDef, Gtk::impl::internal::WidgetClass, Adw::impl::internal::SwipeableInterfaceClassImpl> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types
typedef Adw::impl::internal::SwipeableInterfaceClassImpl AdwSwipeableInterface_type;



};


struct OverlaySplitViewClassDef::TypeInitData
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

using OverlaySplitViewImpl = detail::ObjectImpl<OverlaySplitView, internal::OverlaySplitViewClass>;

} // namespace impl

} // namespace Adw

} // namespace repository

} // namespace gi

#endif
