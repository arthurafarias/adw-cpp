// AUTO-GENERATED

#ifndef _GI_ADW_VIEWSWITCHERSIDEBAR_HPP_
#define _GI_ADW_VIEWSWITCHERSIDEBAR_HPP_


namespace gi {

namespace repository {

namespace Adw {

class ViewStack;

class ViewSwitcherSidebar;

namespace base {


#define GI_ADW_VIEWSWITCHERSIDEBAR_BASE base::ViewSwitcherSidebarBase
class ViewSwitcherSidebarBase : public Gtk::Widget
{
typedef Gtk::Widget super_type;
public:
typedef ::AdwViewSwitcherSidebar BaseObjectType;

ViewSwitcherSidebarBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return adw_view_switcher_sidebar_get_type(); } 

// GtkWidget* /*none*/ adw_view_switcher_sidebar_new ();
// ::AdwViewSwitcherSidebar* /*none*/ adw_view_switcher_sidebar_new ();
static GI_INLINE_DECL Adw::ViewSwitcherSidebar new_ () noexcept;

// GtkFilter* /*none,nullable*/ adw_view_switcher_sidebar_get_filter (AdwViewSwitcherSidebar* self /*none*/);
// ::GtkFilter* /*none,nullable*/ adw_view_switcher_sidebar_get_filter (::AdwViewSwitcherSidebar* self /*none*/);
GI_INLINE_DECL Gtk::Filter get_filter () noexcept;

// AdwSidebarMode adw_view_switcher_sidebar_get_mode (AdwViewSwitcherSidebar* self /*none*/);
// ::AdwSidebarMode adw_view_switcher_sidebar_get_mode (::AdwViewSwitcherSidebar* self /*none*/);
GI_INLINE_DECL Adw::SidebarMode get_mode () noexcept;

// GtkWidget* /*none,nullable*/ adw_view_switcher_sidebar_get_placeholder (AdwViewSwitcherSidebar* self /*none*/);
// ::GtkWidget* /*none,nullable*/ adw_view_switcher_sidebar_get_placeholder (::AdwViewSwitcherSidebar* self /*none*/);
GI_INLINE_DECL Gtk::Widget get_placeholder () noexcept;

// AdwViewStack* /*none,nullable*/ adw_view_switcher_sidebar_get_stack (AdwViewSwitcherSidebar* self /*none*/);
// ::AdwViewStack* /*none,nullable*/ adw_view_switcher_sidebar_get_stack (::AdwViewSwitcherSidebar* self /*none*/);
GI_INLINE_DECL Adw::ViewStack get_stack () noexcept;

// void adw_view_switcher_sidebar_set_filter (AdwViewSwitcherSidebar* self /*none*/, GtkFilter* filter /*none,nullable*/);
// void adw_view_switcher_sidebar_set_filter (::AdwViewSwitcherSidebar* self /*none*/, ::GtkFilter* filter /*none,nullable*/);
GI_INLINE_DECL void set_filter (Gtk::Filter filter) noexcept;
GI_INLINE_DECL void set_filter () noexcept;

// void adw_view_switcher_sidebar_set_mode (AdwViewSwitcherSidebar* self /*none*/, AdwSidebarMode mode);
// void adw_view_switcher_sidebar_set_mode (::AdwViewSwitcherSidebar* self /*none*/, ::AdwSidebarMode mode);
GI_INLINE_DECL void set_mode (Adw::SidebarMode mode) noexcept;

// void adw_view_switcher_sidebar_set_placeholder (AdwViewSwitcherSidebar* self /*none*/, GtkWidget* placeholder /*none,nullable*/);
// void adw_view_switcher_sidebar_set_placeholder (::AdwViewSwitcherSidebar* self /*none*/, ::GtkWidget* placeholder /*none,nullable*/);
GI_INLINE_DECL void set_placeholder (Gtk::Widget placeholder) noexcept;
GI_INLINE_DECL void set_placeholder () noexcept;

// void adw_view_switcher_sidebar_set_stack (AdwViewSwitcherSidebar* self /*none*/, AdwViewStack* stack /*none,nullable*/);
// void adw_view_switcher_sidebar_set_stack (::AdwViewSwitcherSidebar* self /*none*/, ::AdwViewStack* stack /*none,nullable*/);
GI_INLINE_DECL void set_stack (Adw::ViewStack stack) noexcept;
GI_INLINE_DECL void set_stack () noexcept;

gi::property_proxy<Gtk::Filter, base::ViewSwitcherSidebarBase> property_filter()
{ return gi::property_proxy<Gtk::Filter, base::ViewSwitcherSidebarBase> (*this, "filter"); }
const gi::property_proxy<Gtk::Filter, base::ViewSwitcherSidebarBase> property_filter() const
{ return gi::property_proxy<Gtk::Filter, base::ViewSwitcherSidebarBase> (*this, "filter"); }

gi::property_proxy<Adw::SidebarMode, base::ViewSwitcherSidebarBase> property_mode()
{ return gi::property_proxy<Adw::SidebarMode, base::ViewSwitcherSidebarBase> (*this, "mode"); }
const gi::property_proxy<Adw::SidebarMode, base::ViewSwitcherSidebarBase> property_mode() const
{ return gi::property_proxy<Adw::SidebarMode, base::ViewSwitcherSidebarBase> (*this, "mode"); }

gi::property_proxy<Gtk::Widget, base::ViewSwitcherSidebarBase> property_placeholder()
{ return gi::property_proxy<Gtk::Widget, base::ViewSwitcherSidebarBase> (*this, "placeholder"); }
const gi::property_proxy<Gtk::Widget, base::ViewSwitcherSidebarBase> property_placeholder() const
{ return gi::property_proxy<Gtk::Widget, base::ViewSwitcherSidebarBase> (*this, "placeholder"); }

gi::property_proxy<Adw::ViewStack, base::ViewSwitcherSidebarBase> property_stack()
{ return gi::property_proxy<Adw::ViewStack, base::ViewSwitcherSidebarBase> (*this, "stack"); }
const gi::property_proxy<Adw::ViewStack, base::ViewSwitcherSidebarBase> property_stack() const
{ return gi::property_proxy<Adw::ViewStack, base::ViewSwitcherSidebarBase> (*this, "stack"); }

// (signal) void activated ();
// (signal) void activated ();
gi::signal_proxy<void(Adw::ViewSwitcherSidebar)> signal_activated()
{ return gi::signal_proxy<void(Adw::ViewSwitcherSidebar)> (*this, "activated"); }

}; // class

} // namespace base

} // namespace Adw

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<adw/viewswitchersidebar_extra_def.hpp>)
#include <adw/viewswitchersidebar_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<adw/viewswitchersidebar_extra.hpp>)
#include <adw/viewswitchersidebar_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Adw {

class ViewSwitcherSidebar : public GI_ADW_VIEWSWITCHERSIDEBAR_BASE
{ typedef GI_ADW_VIEWSWITCHERSIDEBAR_BASE super_type; using super_type::super_type; };

} // namespace Adw

template<> struct declare_cpptype_of<::AdwViewSwitcherSidebar>
{ typedef Adw::ViewSwitcherSidebar type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Adw {

namespace impl {

namespace internal {


class ViewSwitcherSidebarClassDef
{
typedef ViewSwitcherSidebarClassDef self;
public:
typedef Adw::ViewSwitcherSidebar instance_type;
typedef ::AdwViewSwitcherSidebarClass class_type;


struct TypeInitData;

protected:
GI_INLINE_DECL ~ViewSwitcherSidebarClassDef() = default;
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );


};

GI_CLASS_IMPL_BEGIN


class ViewSwitcherSidebarClass: public detail::ClassTemplate<Adw::impl::internal::ViewSwitcherSidebarClassDef, Gtk::impl::internal::WidgetClass>
{
friend class internal::ViewSwitcherSidebarClassDef;
typedef ViewSwitcherSidebarClass self;
typedef detail::ClassTemplate<Adw::impl::internal::ViewSwitcherSidebarClassDef, Gtk::impl::internal::WidgetClass> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types



};


struct ViewSwitcherSidebarClassDef::TypeInitData
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

using ViewSwitcherSidebarImpl = detail::ObjectImpl<ViewSwitcherSidebar, internal::ViewSwitcherSidebarClass>;

} // namespace impl

} // namespace Adw

} // namespace repository

} // namespace gi

#endif
