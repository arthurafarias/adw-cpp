// AUTO-GENERATED

#ifndef _GI_ADW_WINDOW_HPP_
#define _GI_ADW_WINDOW_HPP_


namespace gi {

namespace repository {

namespace Adw {

class Breakpoint;
class Dialog;

class Window;

namespace base {


#define GI_ADW_WINDOW_BASE base::WindowBase
class WindowBase : public Gtk::Window
{
typedef Gtk::Window super_type;
public:
typedef ::AdwWindow BaseObjectType;

WindowBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return adw_window_get_type(); } 

// GtkWidget* /*none*/ adw_window_new ();
// ::AdwWindow* /*none*/ adw_window_new ();
static GI_INLINE_DECL Adw::Window new_ () noexcept;

// void adw_window_add_breakpoint (AdwWindow* self /*none*/, AdwBreakpoint* breakpoint /*full*/);
// void adw_window_add_breakpoint (::AdwWindow* self /*none*/, ::AdwBreakpoint* breakpoint /*full*/);
GI_INLINE_DECL void add_breakpoint (Adw::Breakpoint breakpoint) noexcept;

// gboolean adw_window_get_adaptive_preview (AdwWindow* self /*none*/);
// gboolean adw_window_get_adaptive_preview (::AdwWindow* self /*none*/);
GI_INLINE_DECL bool get_adaptive_preview () noexcept;

// GtkWidget* /*none,nullable*/ adw_window_get_content (AdwWindow* self /*none*/);
// ::GtkWidget* /*none,nullable*/ adw_window_get_content (::AdwWindow* self /*none*/);
GI_INLINE_DECL Gtk::Widget get_content () noexcept;

// AdwBreakpoint* /*none,nullable*/ adw_window_get_current_breakpoint (AdwWindow* self /*none*/);
// ::AdwBreakpoint* /*none,nullable*/ adw_window_get_current_breakpoint (::AdwWindow* self /*none*/);
GI_INLINE_DECL Adw::Breakpoint get_current_breakpoint () noexcept;

// GListModel* /*full*/ adw_window_get_dialogs (AdwWindow* self /*none*/);
// ::GListModel* /*full*/ adw_window_get_dialogs (::AdwWindow* self /*none*/);
GI_INLINE_DECL Gio::ListModel get_dialogs () noexcept;

// AdwDialog* /*none,nullable*/ adw_window_get_visible_dialog (AdwWindow* self /*none*/);
// ::AdwDialog* /*none,nullable*/ adw_window_get_visible_dialog (::AdwWindow* self /*none*/);
GI_INLINE_DECL Adw::Dialog get_visible_dialog () noexcept;

// void adw_window_set_adaptive_preview (AdwWindow* self /*none*/, gboolean adaptive_preview);
// void adw_window_set_adaptive_preview (::AdwWindow* self /*none*/, gboolean adaptive_preview);
GI_INLINE_DECL void set_adaptive_preview (gboolean adaptive_preview) noexcept;

// void adw_window_set_content (AdwWindow* self /*none*/, GtkWidget* content /*none,nullable*/);
// void adw_window_set_content (::AdwWindow* self /*none*/, ::GtkWidget* content /*none,nullable*/);
GI_INLINE_DECL void set_content (Gtk::Widget content) noexcept;
GI_INLINE_DECL void set_content () noexcept;

gi::property_proxy<bool, base::WindowBase> property_adaptive_preview()
{ return gi::property_proxy<bool, base::WindowBase> (*this, "adaptive-preview"); }
const gi::property_proxy<bool, base::WindowBase> property_adaptive_preview() const
{ return gi::property_proxy<bool, base::WindowBase> (*this, "adaptive-preview"); }

gi::property_proxy<Gtk::Widget, base::WindowBase> property_content()
{ return gi::property_proxy<Gtk::Widget, base::WindowBase> (*this, "content"); }
const gi::property_proxy<Gtk::Widget, base::WindowBase> property_content() const
{ return gi::property_proxy<Gtk::Widget, base::WindowBase> (*this, "content"); }

gi::property_proxy<Adw::Breakpoint, base::WindowBase> property_current_breakpoint()
{ return gi::property_proxy<Adw::Breakpoint, base::WindowBase> (*this, "current-breakpoint"); }
const gi::property_proxy<Adw::Breakpoint, base::WindowBase> property_current_breakpoint() const
{ return gi::property_proxy<Adw::Breakpoint, base::WindowBase> (*this, "current-breakpoint"); }

gi::property_proxy<Gio::ListModel, base::WindowBase> property_dialogs()
{ return gi::property_proxy<Gio::ListModel, base::WindowBase> (*this, "dialogs"); }
const gi::property_proxy<Gio::ListModel, base::WindowBase> property_dialogs() const
{ return gi::property_proxy<Gio::ListModel, base::WindowBase> (*this, "dialogs"); }

gi::property_proxy<Adw::Dialog, base::WindowBase> property_visible_dialog()
{ return gi::property_proxy<Adw::Dialog, base::WindowBase> (*this, "visible-dialog"); }
const gi::property_proxy<Adw::Dialog, base::WindowBase> property_visible_dialog() const
{ return gi::property_proxy<Adw::Dialog, base::WindowBase> (*this, "visible-dialog"); }

}; // class

} // namespace base

} // namespace Adw

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<adw/window_extra_def.hpp>)
#include <adw/window_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<adw/window_extra.hpp>)
#include <adw/window_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Adw {

class Window : public GI_ADW_WINDOW_BASE
{ typedef GI_ADW_WINDOW_BASE super_type; using super_type::super_type; };

} // namespace Adw

template<> struct declare_cpptype_of<::AdwWindow>
{ typedef Adw::Window type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Adw {

namespace impl {

namespace internal {


class WindowClassDef
{
typedef WindowClassDef self;
public:
typedef Adw::Window instance_type;
typedef ::AdwWindowClass class_type;


struct TypeInitData;

protected:
GI_INLINE_DECL ~WindowClassDef() = default;
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );


};

GI_CLASS_IMPL_BEGIN


class WindowClass: public detail::ClassTemplate<Adw::impl::internal::WindowClassDef, Gtk::impl::internal::WindowClass>
{
friend class internal::WindowClassDef;
typedef WindowClass self;
typedef detail::ClassTemplate<Adw::impl::internal::WindowClassDef, Gtk::impl::internal::WindowClass> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types



};


struct WindowClassDef::TypeInitData
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

using WindowImpl = detail::ObjectImpl<Window, internal::WindowClass>;

} // namespace impl

} // namespace Adw

} // namespace repository

} // namespace gi

#endif
