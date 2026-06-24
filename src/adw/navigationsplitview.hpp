// AUTO-GENERATED

#ifndef _GI_ADW_NAVIGATIONSPLITVIEW_HPP_
#define _GI_ADW_NAVIGATIONSPLITVIEW_HPP_


namespace gi {

namespace repository {

namespace Adw {

class NavigationPage;

class NavigationSplitView;

namespace base {


#define GI_ADW_NAVIGATIONSPLITVIEW_BASE base::NavigationSplitViewBase
class NavigationSplitViewBase : public Gtk::Widget
{
typedef Gtk::Widget super_type;
public:
typedef ::AdwNavigationSplitView BaseObjectType;

NavigationSplitViewBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return adw_navigation_split_view_get_type(); } 

// GtkWidget* /*none*/ adw_navigation_split_view_new ();
// ::AdwNavigationSplitView* /*none*/ adw_navigation_split_view_new ();
static GI_INLINE_DECL Adw::NavigationSplitView new_ () noexcept;

// gboolean adw_navigation_split_view_get_collapsed (AdwNavigationSplitView* self /*none*/);
// gboolean adw_navigation_split_view_get_collapsed (::AdwNavigationSplitView* self /*none*/);
GI_INLINE_DECL bool get_collapsed () noexcept;

// AdwNavigationPage* /*none,nullable*/ adw_navigation_split_view_get_content (AdwNavigationSplitView* self /*none*/);
// ::AdwNavigationPage* /*none,nullable*/ adw_navigation_split_view_get_content (::AdwNavigationSplitView* self /*none*/);
GI_INLINE_DECL Adw::NavigationPage get_content () noexcept;

// double adw_navigation_split_view_get_max_sidebar_width (AdwNavigationSplitView* self /*none*/);
// gdouble adw_navigation_split_view_get_max_sidebar_width (::AdwNavigationSplitView* self /*none*/);
GI_INLINE_DECL gdouble get_max_sidebar_width () noexcept;

// double adw_navigation_split_view_get_min_sidebar_width (AdwNavigationSplitView* self /*none*/);
// gdouble adw_navigation_split_view_get_min_sidebar_width (::AdwNavigationSplitView* self /*none*/);
GI_INLINE_DECL gdouble get_min_sidebar_width () noexcept;

// gboolean adw_navigation_split_view_get_show_content (AdwNavigationSplitView* self /*none*/);
// gboolean adw_navigation_split_view_get_show_content (::AdwNavigationSplitView* self /*none*/);
GI_INLINE_DECL bool get_show_content () noexcept;

// AdwNavigationPage* /*none,nullable*/ adw_navigation_split_view_get_sidebar (AdwNavigationSplitView* self /*none*/);
// ::AdwNavigationPage* /*none,nullable*/ adw_navigation_split_view_get_sidebar (::AdwNavigationSplitView* self /*none*/);
GI_INLINE_DECL Adw::NavigationPage get_sidebar () noexcept;

// GtkPackType adw_navigation_split_view_get_sidebar_position (AdwNavigationSplitView* self /*none*/);
// ::GtkPackType adw_navigation_split_view_get_sidebar_position (::AdwNavigationSplitView* self /*none*/);
GI_INLINE_DECL Gtk::PackType get_sidebar_position () noexcept;

// double adw_navigation_split_view_get_sidebar_width_fraction (AdwNavigationSplitView* self /*none*/);
// gdouble adw_navigation_split_view_get_sidebar_width_fraction (::AdwNavigationSplitView* self /*none*/);
GI_INLINE_DECL gdouble get_sidebar_width_fraction () noexcept;

// AdwLengthUnit adw_navigation_split_view_get_sidebar_width_unit (AdwNavigationSplitView* self /*none*/);
// ::AdwLengthUnit adw_navigation_split_view_get_sidebar_width_unit (::AdwNavigationSplitView* self /*none*/);
GI_INLINE_DECL Adw::LengthUnit get_sidebar_width_unit () noexcept;

// void adw_navigation_split_view_set_collapsed (AdwNavigationSplitView* self /*none*/, gboolean collapsed);
// void adw_navigation_split_view_set_collapsed (::AdwNavigationSplitView* self /*none*/, gboolean collapsed);
GI_INLINE_DECL void set_collapsed (gboolean collapsed) noexcept;

// void adw_navigation_split_view_set_content (AdwNavigationSplitView* self /*none*/, AdwNavigationPage* content /*none,nullable*/);
// void adw_navigation_split_view_set_content (::AdwNavigationSplitView* self /*none*/, ::AdwNavigationPage* content /*none,nullable*/);
GI_INLINE_DECL void set_content (Adw::NavigationPage content) noexcept;
GI_INLINE_DECL void set_content () noexcept;

// void adw_navigation_split_view_set_max_sidebar_width (AdwNavigationSplitView* self /*none*/, double width);
// void adw_navigation_split_view_set_max_sidebar_width (::AdwNavigationSplitView* self /*none*/, gdouble width);
GI_INLINE_DECL void set_max_sidebar_width (gdouble width) noexcept;

// void adw_navigation_split_view_set_min_sidebar_width (AdwNavigationSplitView* self /*none*/, double width);
// void adw_navigation_split_view_set_min_sidebar_width (::AdwNavigationSplitView* self /*none*/, gdouble width);
GI_INLINE_DECL void set_min_sidebar_width (gdouble width) noexcept;

// void adw_navigation_split_view_set_show_content (AdwNavigationSplitView* self /*none*/, gboolean show_content);
// void adw_navigation_split_view_set_show_content (::AdwNavigationSplitView* self /*none*/, gboolean show_content);
GI_INLINE_DECL void set_show_content (gboolean show_content) noexcept;

// void adw_navigation_split_view_set_sidebar (AdwNavigationSplitView* self /*none*/, AdwNavigationPage* sidebar /*none,nullable*/);
// void adw_navigation_split_view_set_sidebar (::AdwNavigationSplitView* self /*none*/, ::AdwNavigationPage* sidebar /*none,nullable*/);
GI_INLINE_DECL void set_sidebar (Adw::NavigationPage sidebar) noexcept;
GI_INLINE_DECL void set_sidebar () noexcept;

// void adw_navigation_split_view_set_sidebar_position (AdwNavigationSplitView* self /*none*/, GtkPackType position);
// void adw_navigation_split_view_set_sidebar_position (::AdwNavigationSplitView* self /*none*/, ::GtkPackType position);
GI_INLINE_DECL void set_sidebar_position (Gtk::PackType position) noexcept;

// void adw_navigation_split_view_set_sidebar_width_fraction (AdwNavigationSplitView* self /*none*/, double fraction);
// void adw_navigation_split_view_set_sidebar_width_fraction (::AdwNavigationSplitView* self /*none*/, gdouble fraction);
GI_INLINE_DECL void set_sidebar_width_fraction (gdouble fraction) noexcept;

// void adw_navigation_split_view_set_sidebar_width_unit (AdwNavigationSplitView* self /*none*/, AdwLengthUnit unit);
// void adw_navigation_split_view_set_sidebar_width_unit (::AdwNavigationSplitView* self /*none*/, ::AdwLengthUnit unit);
GI_INLINE_DECL void set_sidebar_width_unit (Adw::LengthUnit unit) noexcept;

gi::property_proxy<bool, base::NavigationSplitViewBase> property_collapsed()
{ return gi::property_proxy<bool, base::NavigationSplitViewBase> (*this, "collapsed"); }
const gi::property_proxy<bool, base::NavigationSplitViewBase> property_collapsed() const
{ return gi::property_proxy<bool, base::NavigationSplitViewBase> (*this, "collapsed"); }

gi::property_proxy<Adw::NavigationPage, base::NavigationSplitViewBase> property_content()
{ return gi::property_proxy<Adw::NavigationPage, base::NavigationSplitViewBase> (*this, "content"); }
const gi::property_proxy<Adw::NavigationPage, base::NavigationSplitViewBase> property_content() const
{ return gi::property_proxy<Adw::NavigationPage, base::NavigationSplitViewBase> (*this, "content"); }

gi::property_proxy<gdouble, base::NavigationSplitViewBase> property_max_sidebar_width()
{ return gi::property_proxy<gdouble, base::NavigationSplitViewBase> (*this, "max-sidebar-width"); }
const gi::property_proxy<gdouble, base::NavigationSplitViewBase> property_max_sidebar_width() const
{ return gi::property_proxy<gdouble, base::NavigationSplitViewBase> (*this, "max-sidebar-width"); }

gi::property_proxy<gdouble, base::NavigationSplitViewBase> property_min_sidebar_width()
{ return gi::property_proxy<gdouble, base::NavigationSplitViewBase> (*this, "min-sidebar-width"); }
const gi::property_proxy<gdouble, base::NavigationSplitViewBase> property_min_sidebar_width() const
{ return gi::property_proxy<gdouble, base::NavigationSplitViewBase> (*this, "min-sidebar-width"); }

gi::property_proxy<bool, base::NavigationSplitViewBase> property_show_content()
{ return gi::property_proxy<bool, base::NavigationSplitViewBase> (*this, "show-content"); }
const gi::property_proxy<bool, base::NavigationSplitViewBase> property_show_content() const
{ return gi::property_proxy<bool, base::NavigationSplitViewBase> (*this, "show-content"); }

gi::property_proxy<Adw::NavigationPage, base::NavigationSplitViewBase> property_sidebar()
{ return gi::property_proxy<Adw::NavigationPage, base::NavigationSplitViewBase> (*this, "sidebar"); }
const gi::property_proxy<Adw::NavigationPage, base::NavigationSplitViewBase> property_sidebar() const
{ return gi::property_proxy<Adw::NavigationPage, base::NavigationSplitViewBase> (*this, "sidebar"); }

gi::property_proxy<Gtk::PackType, base::NavigationSplitViewBase> property_sidebar_position()
{ return gi::property_proxy<Gtk::PackType, base::NavigationSplitViewBase> (*this, "sidebar-position"); }
const gi::property_proxy<Gtk::PackType, base::NavigationSplitViewBase> property_sidebar_position() const
{ return gi::property_proxy<Gtk::PackType, base::NavigationSplitViewBase> (*this, "sidebar-position"); }

gi::property_proxy<gdouble, base::NavigationSplitViewBase> property_sidebar_width_fraction()
{ return gi::property_proxy<gdouble, base::NavigationSplitViewBase> (*this, "sidebar-width-fraction"); }
const gi::property_proxy<gdouble, base::NavigationSplitViewBase> property_sidebar_width_fraction() const
{ return gi::property_proxy<gdouble, base::NavigationSplitViewBase> (*this, "sidebar-width-fraction"); }

gi::property_proxy<Adw::LengthUnit, base::NavigationSplitViewBase> property_sidebar_width_unit()
{ return gi::property_proxy<Adw::LengthUnit, base::NavigationSplitViewBase> (*this, "sidebar-width-unit"); }
const gi::property_proxy<Adw::LengthUnit, base::NavigationSplitViewBase> property_sidebar_width_unit() const
{ return gi::property_proxy<Adw::LengthUnit, base::NavigationSplitViewBase> (*this, "sidebar-width-unit"); }

}; // class

} // namespace base

} // namespace Adw

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<adw/navigationsplitview_extra_def.hpp>)
#include <adw/navigationsplitview_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<adw/navigationsplitview_extra.hpp>)
#include <adw/navigationsplitview_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Adw {

class NavigationSplitView : public GI_ADW_NAVIGATIONSPLITVIEW_BASE
{ typedef GI_ADW_NAVIGATIONSPLITVIEW_BASE super_type; using super_type::super_type; };

} // namespace Adw

template<> struct declare_cpptype_of<::AdwNavigationSplitView>
{ typedef Adw::NavigationSplitView type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Adw {

namespace impl {

namespace internal {


class NavigationSplitViewClassDef
{
typedef NavigationSplitViewClassDef self;
public:
typedef Adw::NavigationSplitView instance_type;
typedef ::AdwNavigationSplitViewClass class_type;


struct TypeInitData;

protected:
GI_INLINE_DECL ~NavigationSplitViewClassDef() = default;
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );


};

GI_CLASS_IMPL_BEGIN


class NavigationSplitViewClass: public detail::ClassTemplate<Adw::impl::internal::NavigationSplitViewClassDef, Gtk::impl::internal::WidgetClass>
{
friend class internal::NavigationSplitViewClassDef;
typedef NavigationSplitViewClass self;
typedef detail::ClassTemplate<Adw::impl::internal::NavigationSplitViewClassDef, Gtk::impl::internal::WidgetClass> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types



};


struct NavigationSplitViewClassDef::TypeInitData
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

using NavigationSplitViewImpl = detail::ObjectImpl<NavigationSplitView, internal::NavigationSplitViewClass>;

} // namespace impl

} // namespace Adw

} // namespace repository

} // namespace gi

#endif
