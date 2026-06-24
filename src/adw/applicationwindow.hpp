// AUTO-GENERATED

#ifndef _GI_ADW_APPLICATIONWINDOW_HPP_
#define _GI_ADW_APPLICATIONWINDOW_HPP_


namespace gi {

namespace repository {

namespace Adw {

class Breakpoint;
class Dialog;

class ApplicationWindow;

namespace base {


#define GI_ADW_APPLICATIONWINDOW_BASE base::ApplicationWindowBase
class ApplicationWindowBase : public Gtk::ApplicationWindow
{
typedef Gtk::ApplicationWindow super_type;
public:
typedef ::AdwApplicationWindow BaseObjectType;

ApplicationWindowBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return adw_application_window_get_type(); } 

// GtkWidget* /*none*/ adw_application_window_new (GtkApplication* app /*none*/);
// ::AdwApplicationWindow* /*none*/ adw_application_window_new (::GtkApplication* app /*none*/);
static GI_INLINE_DECL Adw::ApplicationWindow new_ (Gtk::Application app) noexcept;

// void adw_application_window_add_breakpoint (AdwApplicationWindow* self /*none*/, AdwBreakpoint* breakpoint /*full*/);
// void adw_application_window_add_breakpoint (::AdwApplicationWindow* self /*none*/, ::AdwBreakpoint* breakpoint /*full*/);
GI_INLINE_DECL void add_breakpoint (Adw::Breakpoint breakpoint) noexcept;

// gboolean adw_application_window_get_adaptive_preview (AdwApplicationWindow* self /*none*/);
// gboolean adw_application_window_get_adaptive_preview (::AdwApplicationWindow* self /*none*/);
GI_INLINE_DECL bool get_adaptive_preview () noexcept;

// GtkWidget* /*none,nullable*/ adw_application_window_get_content (AdwApplicationWindow* self /*none*/);
// ::GtkWidget* /*none,nullable*/ adw_application_window_get_content (::AdwApplicationWindow* self /*none*/);
GI_INLINE_DECL Gtk::Widget get_content () noexcept;

// AdwBreakpoint* /*none,nullable*/ adw_application_window_get_current_breakpoint (AdwApplicationWindow* self /*none*/);
// ::AdwBreakpoint* /*none,nullable*/ adw_application_window_get_current_breakpoint (::AdwApplicationWindow* self /*none*/);
GI_INLINE_DECL Adw::Breakpoint get_current_breakpoint () noexcept;

// GListModel* /*full*/ adw_application_window_get_dialogs (AdwApplicationWindow* self /*none*/);
// ::GListModel* /*full*/ adw_application_window_get_dialogs (::AdwApplicationWindow* self /*none*/);
GI_INLINE_DECL Gio::ListModel get_dialogs () noexcept;

// AdwDialog* /*none,nullable*/ adw_application_window_get_visible_dialog (AdwApplicationWindow* self /*none*/);
// ::AdwDialog* /*none,nullable*/ adw_application_window_get_visible_dialog (::AdwApplicationWindow* self /*none*/);
GI_INLINE_DECL Adw::Dialog get_visible_dialog () noexcept;

// void adw_application_window_set_adaptive_preview (AdwApplicationWindow* self /*none*/, gboolean adaptive_preview);
// void adw_application_window_set_adaptive_preview (::AdwApplicationWindow* self /*none*/, gboolean adaptive_preview);
GI_INLINE_DECL void set_adaptive_preview (gboolean adaptive_preview) noexcept;

// void adw_application_window_set_content (AdwApplicationWindow* self /*none*/, GtkWidget* content /*none,nullable*/);
// void adw_application_window_set_content (::AdwApplicationWindow* self /*none*/, ::GtkWidget* content /*none,nullable*/);
GI_INLINE_DECL void set_content (Gtk::Widget content) noexcept;
GI_INLINE_DECL void set_content () noexcept;

gi::property_proxy<bool, base::ApplicationWindowBase> property_adaptive_preview()
{ return gi::property_proxy<bool, base::ApplicationWindowBase> (*this, "adaptive-preview"); }
const gi::property_proxy<bool, base::ApplicationWindowBase> property_adaptive_preview() const
{ return gi::property_proxy<bool, base::ApplicationWindowBase> (*this, "adaptive-preview"); }

gi::property_proxy<Gtk::Widget, base::ApplicationWindowBase> property_content()
{ return gi::property_proxy<Gtk::Widget, base::ApplicationWindowBase> (*this, "content"); }
const gi::property_proxy<Gtk::Widget, base::ApplicationWindowBase> property_content() const
{ return gi::property_proxy<Gtk::Widget, base::ApplicationWindowBase> (*this, "content"); }

gi::property_proxy<Adw::Breakpoint, base::ApplicationWindowBase> property_current_breakpoint()
{ return gi::property_proxy<Adw::Breakpoint, base::ApplicationWindowBase> (*this, "current-breakpoint"); }
const gi::property_proxy<Adw::Breakpoint, base::ApplicationWindowBase> property_current_breakpoint() const
{ return gi::property_proxy<Adw::Breakpoint, base::ApplicationWindowBase> (*this, "current-breakpoint"); }

gi::property_proxy<Gio::ListModel, base::ApplicationWindowBase> property_dialogs()
{ return gi::property_proxy<Gio::ListModel, base::ApplicationWindowBase> (*this, "dialogs"); }
const gi::property_proxy<Gio::ListModel, base::ApplicationWindowBase> property_dialogs() const
{ return gi::property_proxy<Gio::ListModel, base::ApplicationWindowBase> (*this, "dialogs"); }

gi::property_proxy<Adw::Dialog, base::ApplicationWindowBase> property_visible_dialog()
{ return gi::property_proxy<Adw::Dialog, base::ApplicationWindowBase> (*this, "visible-dialog"); }
const gi::property_proxy<Adw::Dialog, base::ApplicationWindowBase> property_visible_dialog() const
{ return gi::property_proxy<Adw::Dialog, base::ApplicationWindowBase> (*this, "visible-dialog"); }

}; // class

} // namespace base

} // namespace Adw

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<adw/applicationwindow_extra_def.hpp>)
#include <adw/applicationwindow_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<adw/applicationwindow_extra.hpp>)
#include <adw/applicationwindow_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Adw {

class ApplicationWindow : public GI_ADW_APPLICATIONWINDOW_BASE
{ typedef GI_ADW_APPLICATIONWINDOW_BASE super_type; using super_type::super_type; };

} // namespace Adw

template<> struct declare_cpptype_of<::AdwApplicationWindow>
{ typedef Adw::ApplicationWindow type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Adw {

namespace impl {

namespace internal {


class ApplicationWindowClassDef
{
typedef ApplicationWindowClassDef self;
public:
typedef Adw::ApplicationWindow instance_type;
typedef ::AdwApplicationWindowClass class_type;


struct TypeInitData;

protected:
GI_INLINE_DECL ~ApplicationWindowClassDef() = default;
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );


};

GI_CLASS_IMPL_BEGIN


class ApplicationWindowClass: public detail::ClassTemplate<Adw::impl::internal::ApplicationWindowClassDef, Gtk::impl::internal::ApplicationWindowClass>
{
friend class internal::ApplicationWindowClassDef;
typedef ApplicationWindowClass self;
typedef detail::ClassTemplate<Adw::impl::internal::ApplicationWindowClassDef, Gtk::impl::internal::ApplicationWindowClass> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types



};


struct ApplicationWindowClassDef::TypeInitData
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

using ApplicationWindowImpl = detail::ObjectImpl<ApplicationWindow, internal::ApplicationWindowClass>;

} // namespace impl

} // namespace Adw

} // namespace repository

} // namespace gi

#endif
