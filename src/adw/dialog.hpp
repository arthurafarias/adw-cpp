// AUTO-GENERATED

#ifndef _GI_ADW_DIALOG_HPP_
#define _GI_ADW_DIALOG_HPP_


namespace gi {

namespace repository {

namespace Adw {

class Breakpoint;

class Dialog;

namespace base {


#define GI_ADW_DIALOG_BASE base::DialogBase
class DialogBase : public Gtk::Widget
{
typedef Gtk::Widget super_type;
public:
typedef ::AdwDialog BaseObjectType;

DialogBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return adw_dialog_get_type(); } 

GI_INLINE_DECL Gtk::ShortcutManager interface_ (gi::interface_tag<Gtk::ShortcutManager>);

GI_INLINE_DECL operator Gtk::ShortcutManager ();

// AdwDialog* /*none*/ adw_dialog_new ();
// ::AdwDialog* /*none*/ adw_dialog_new ();
static GI_INLINE_DECL Adw::Dialog new_ () noexcept;

// void adw_dialog_add_breakpoint (AdwDialog* self /*none*/, AdwBreakpoint* breakpoint /*full*/);
// void adw_dialog_add_breakpoint (::AdwDialog* self /*none*/, ::AdwBreakpoint* breakpoint /*full*/);
GI_INLINE_DECL void add_breakpoint (Adw::Breakpoint breakpoint) noexcept;

// gboolean adw_dialog_close (AdwDialog* self /*none*/);
// gboolean adw_dialog_close (::AdwDialog* self /*none*/);
GI_INLINE_DECL bool close () noexcept;

// void adw_dialog_force_close (AdwDialog* self /*none*/);
// void adw_dialog_force_close (::AdwDialog* self /*none*/);
GI_INLINE_DECL void force_close () noexcept;

// gboolean adw_dialog_get_can_close (AdwDialog* self /*none*/);
// gboolean adw_dialog_get_can_close (::AdwDialog* self /*none*/);
GI_INLINE_DECL bool get_can_close () noexcept;

// GtkWidget* /*none,nullable*/ adw_dialog_get_child (AdwDialog* self /*none*/);
// ::GtkWidget* /*none,nullable*/ adw_dialog_get_child (::AdwDialog* self /*none*/);
GI_INLINE_DECL Gtk::Widget get_child () noexcept;

// int adw_dialog_get_content_height (AdwDialog* self /*none*/);
// gint adw_dialog_get_content_height (::AdwDialog* self /*none*/);
GI_INLINE_DECL gint get_content_height () noexcept;

// int adw_dialog_get_content_width (AdwDialog* self /*none*/);
// gint adw_dialog_get_content_width (::AdwDialog* self /*none*/);
GI_INLINE_DECL gint get_content_width () noexcept;

// AdwBreakpoint* /*none,nullable*/ adw_dialog_get_current_breakpoint (AdwDialog* self /*none*/);
// ::AdwBreakpoint* /*none,nullable*/ adw_dialog_get_current_breakpoint (::AdwDialog* self /*none*/);
GI_INLINE_DECL Adw::Breakpoint get_current_breakpoint () noexcept;

// GtkWidget* /*none,nullable*/ adw_dialog_get_default_widget (AdwDialog* self /*none*/);
// ::GtkWidget* /*none,nullable*/ adw_dialog_get_default_widget (::AdwDialog* self /*none*/);
GI_INLINE_DECL Gtk::Widget get_default_widget () noexcept;

// GtkWidget* /*none,nullable*/ adw_dialog_get_focus (AdwDialog* self /*none*/);
// ::GtkWidget* /*none,nullable*/ adw_dialog_get_focus (::AdwDialog* self /*none*/);
GI_INLINE_DECL Gtk::Widget get_focus () noexcept;

// gboolean adw_dialog_get_follows_content_size (AdwDialog* self /*none*/);
// gboolean adw_dialog_get_follows_content_size (::AdwDialog* self /*none*/);
GI_INLINE_DECL bool get_follows_content_size () noexcept;

// AdwDialogPresentationMode adw_dialog_get_presentation_mode (AdwDialog* self /*none*/);
// ::AdwDialogPresentationMode adw_dialog_get_presentation_mode (::AdwDialog* self /*none*/);
GI_INLINE_DECL Adw::DialogPresentationMode get_presentation_mode () noexcept;

// const char* /*none*/ adw_dialog_get_title (AdwDialog* self /*none*/);
// const char* /*none*/ adw_dialog_get_title (::AdwDialog* self /*none*/);
GI_INLINE_DECL gi::cstring_v get_title () noexcept;

// void adw_dialog_present (AdwDialog* self /*none*/, GtkWidget* parent /*none,nullable*/);
// void adw_dialog_present (::AdwDialog* self /*none*/, ::GtkWidget* parent /*none,nullable*/);
GI_INLINE_DECL void present (Gtk::Widget parent) noexcept;
GI_INLINE_DECL void present () noexcept;

// void adw_dialog_set_can_close (AdwDialog* self /*none*/, gboolean can_close);
// void adw_dialog_set_can_close (::AdwDialog* self /*none*/, gboolean can_close);
GI_INLINE_DECL void set_can_close (gboolean can_close) noexcept;

// void adw_dialog_set_child (AdwDialog* self /*none*/, GtkWidget* child /*none,nullable*/);
// void adw_dialog_set_child (::AdwDialog* self /*none*/, ::GtkWidget* child /*none,nullable*/);
GI_INLINE_DECL void set_child (Gtk::Widget child) noexcept;
GI_INLINE_DECL void set_child () noexcept;

// void adw_dialog_set_content_height (AdwDialog* self /*none*/, int content_height);
// void adw_dialog_set_content_height (::AdwDialog* self /*none*/, gint content_height);
GI_INLINE_DECL void set_content_height (gint content_height) noexcept;

// void adw_dialog_set_content_width (AdwDialog* self /*none*/, int content_width);
// void adw_dialog_set_content_width (::AdwDialog* self /*none*/, gint content_width);
GI_INLINE_DECL void set_content_width (gint content_width) noexcept;

// void adw_dialog_set_default_widget (AdwDialog* self /*none*/, GtkWidget* default_widget /*none,nullable*/);
// void adw_dialog_set_default_widget (::AdwDialog* self /*none*/, ::GtkWidget* default_widget /*none,nullable*/);
GI_INLINE_DECL void set_default_widget (Gtk::Widget default_widget) noexcept;
GI_INLINE_DECL void set_default_widget () noexcept;

// void adw_dialog_set_focus (AdwDialog* self /*none*/, GtkWidget* focus /*none,nullable*/);
// void adw_dialog_set_focus (::AdwDialog* self /*none*/, ::GtkWidget* focus /*none,nullable*/);
GI_INLINE_DECL void set_focus (Gtk::Widget focus) noexcept;
GI_INLINE_DECL void set_focus () noexcept;

// void adw_dialog_set_follows_content_size (AdwDialog* self /*none*/, gboolean follows_content_size);
// void adw_dialog_set_follows_content_size (::AdwDialog* self /*none*/, gboolean follows_content_size);
GI_INLINE_DECL void set_follows_content_size (gboolean follows_content_size) noexcept;

// void adw_dialog_set_presentation_mode (AdwDialog* self /*none*/, AdwDialogPresentationMode presentation_mode);
// void adw_dialog_set_presentation_mode (::AdwDialog* self /*none*/, ::AdwDialogPresentationMode presentation_mode);
GI_INLINE_DECL void set_presentation_mode (Adw::DialogPresentationMode presentation_mode) noexcept;

// void adw_dialog_set_title (AdwDialog* self /*none*/, const char* title /*none*/);
// void adw_dialog_set_title (::AdwDialog* self /*none*/, const char* title /*none*/);
GI_INLINE_DECL void set_title (const gi::cstring_v title) noexcept;

gi::property_proxy<bool, base::DialogBase> property_can_close()
{ return gi::property_proxy<bool, base::DialogBase> (*this, "can-close"); }
const gi::property_proxy<bool, base::DialogBase> property_can_close() const
{ return gi::property_proxy<bool, base::DialogBase> (*this, "can-close"); }

gi::property_proxy<Gtk::Widget, base::DialogBase> property_child()
{ return gi::property_proxy<Gtk::Widget, base::DialogBase> (*this, "child"); }
const gi::property_proxy<Gtk::Widget, base::DialogBase> property_child() const
{ return gi::property_proxy<Gtk::Widget, base::DialogBase> (*this, "child"); }

gi::property_proxy<gint, base::DialogBase> property_content_height()
{ return gi::property_proxy<gint, base::DialogBase> (*this, "content-height"); }
const gi::property_proxy<gint, base::DialogBase> property_content_height() const
{ return gi::property_proxy<gint, base::DialogBase> (*this, "content-height"); }

gi::property_proxy<gint, base::DialogBase> property_content_width()
{ return gi::property_proxy<gint, base::DialogBase> (*this, "content-width"); }
const gi::property_proxy<gint, base::DialogBase> property_content_width() const
{ return gi::property_proxy<gint, base::DialogBase> (*this, "content-width"); }

gi::property_proxy<Adw::Breakpoint, base::DialogBase> property_current_breakpoint()
{ return gi::property_proxy<Adw::Breakpoint, base::DialogBase> (*this, "current-breakpoint"); }
const gi::property_proxy<Adw::Breakpoint, base::DialogBase> property_current_breakpoint() const
{ return gi::property_proxy<Adw::Breakpoint, base::DialogBase> (*this, "current-breakpoint"); }

gi::property_proxy<Gtk::Widget, base::DialogBase> property_default_widget()
{ return gi::property_proxy<Gtk::Widget, base::DialogBase> (*this, "default-widget"); }
const gi::property_proxy<Gtk::Widget, base::DialogBase> property_default_widget() const
{ return gi::property_proxy<Gtk::Widget, base::DialogBase> (*this, "default-widget"); }

gi::property_proxy<Gtk::Widget, base::DialogBase> property_focus_widget()
{ return gi::property_proxy<Gtk::Widget, base::DialogBase> (*this, "focus-widget"); }
const gi::property_proxy<Gtk::Widget, base::DialogBase> property_focus_widget() const
{ return gi::property_proxy<Gtk::Widget, base::DialogBase> (*this, "focus-widget"); }

gi::property_proxy<bool, base::DialogBase> property_follows_content_size()
{ return gi::property_proxy<bool, base::DialogBase> (*this, "follows-content-size"); }
const gi::property_proxy<bool, base::DialogBase> property_follows_content_size() const
{ return gi::property_proxy<bool, base::DialogBase> (*this, "follows-content-size"); }

gi::property_proxy<Adw::DialogPresentationMode, base::DialogBase> property_presentation_mode()
{ return gi::property_proxy<Adw::DialogPresentationMode, base::DialogBase> (*this, "presentation-mode"); }
const gi::property_proxy<Adw::DialogPresentationMode, base::DialogBase> property_presentation_mode() const
{ return gi::property_proxy<Adw::DialogPresentationMode, base::DialogBase> (*this, "presentation-mode"); }

gi::property_proxy<gi::cstring, base::DialogBase> property_title()
{ return gi::property_proxy<gi::cstring, base::DialogBase> (*this, "title"); }
const gi::property_proxy<gi::cstring, base::DialogBase> property_title() const
{ return gi::property_proxy<gi::cstring, base::DialogBase> (*this, "title"); }

// (signal) void close-attempt ();
// (signal) void close-attempt ();
gi::signal_proxy<void(Adw::Dialog)> signal_close_attempt()
{ return gi::signal_proxy<void(Adw::Dialog)> (*this, "close-attempt"); }

// (signal) void closed ();
// (signal) void closed ();
gi::signal_proxy<void(Adw::Dialog)> signal_closed()
{ return gi::signal_proxy<void(Adw::Dialog)> (*this, "closed"); }

}; // class

} // namespace base

} // namespace Adw

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<adw/dialog_extra_def.hpp>)
#include <adw/dialog_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<adw/dialog_extra.hpp>)
#include <adw/dialog_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Adw {

class Dialog : public GI_ADW_DIALOG_BASE
{ typedef GI_ADW_DIALOG_BASE super_type; using super_type::super_type; };

} // namespace Adw

template<> struct declare_cpptype_of<::AdwDialog>
{ typedef Adw::Dialog type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Adw {

namespace impl {

namespace internal {


class DialogClassDef
{
typedef DialogClassDef self;
public:
typedef Adw::Dialog instance_type;
typedef ::AdwDialogClass class_type;

using GI_MEMBER_CHECK_CONFLICT(close_attempt) = self;
using GI_MEMBER_CHECK_CONFLICT(closed) = self;

struct TypeInitData;

protected:
GI_INLINE_DECL ~DialogClassDef() = default;
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );

// void Dialog::close_attempt (AdwDialog* dialog /*none*/);
// void Dialog::close_attempt (::AdwDialog* dialog /*none*/);
virtual void close_attempt_ () noexcept = 0;

// void Dialog::closed (AdwDialog* dialog /*none*/);
// void Dialog::closed (::AdwDialog* dialog /*none*/);
virtual void closed_ () noexcept = 0;


};

GI_CLASS_IMPL_BEGIN


class DialogClass: public detail::ClassTemplate<Adw::impl::internal::DialogClassDef, Gtk::impl::internal::WidgetClass, Gtk::impl::internal::ShortcutManagerInterfaceClassImpl>
{
friend class internal::DialogClassDef;
typedef DialogClass self;
typedef detail::ClassTemplate<Adw::impl::internal::DialogClassDef, Gtk::impl::internal::WidgetClass, Gtk::impl::internal::ShortcutManagerInterfaceClassImpl> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types
typedef Gtk::impl::internal::ShortcutManagerInterfaceClassImpl GtkShortcutManagerInterface_type;


// void Dialog::close_attempt (AdwDialog* dialog /*none*/);
// void Dialog::close_attempt (::AdwDialog* dialog /*none*/);
GI_INLINE_DECL void close_attempt_ () noexcept override;

// void Dialog::closed (AdwDialog* dialog /*none*/);
// void Dialog::closed (::AdwDialog* dialog /*none*/);
GI_INLINE_DECL void closed_ () noexcept override;


};


struct DialogClassDef::TypeInitData
{
  GI_MEMBER_DEFINE(DialogClass, close_attempt)
  GI_MEMBER_DEFINE(DialogClass, closed)

template<typename SubClass>
constexpr static TypeInitData factory()
{
  using DefData = detail::DefinitionData<SubClass, TypeInitData>;
  return {
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, close_attempt),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, closed)
  };
}
};
} // namespace internal

GI_CLASS_IMPL_END

using DialogImpl = detail::ObjectImpl<Dialog, internal::DialogClass>;

} // namespace impl

} // namespace Adw

} // namespace repository

} // namespace gi

#endif
