// AUTO-GENERATED

#ifndef _GI_GTK_POPOVERBIN_HPP_
#define _GI_GTK_POPOVERBIN_HPP_

#include "widget.hpp"

namespace gi {

namespace repository {

namespace Gtk {

class Popover;
class Widget;

class PopoverBin;

namespace base {


#define GI_GTK_POPOVERBIN_BASE base::PopoverBinBase
class PopoverBinBase : public Gtk::Widget
{
typedef Gtk::Widget super_type;
public:
typedef ::GtkPopoverBin BaseObjectType;

PopoverBinBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_popover_bin_get_type(); } 

// GtkWidget* /*none*/ gtk_popover_bin_new ();
// ::GtkPopoverBin* /*none*/ gtk_popover_bin_new ();
static GI_INLINE_DECL Gtk::PopoverBin new_ () noexcept;

// GtkWidget* /*none,nullable*/ gtk_popover_bin_get_child (GtkPopoverBin* self /*none*/);
// ::GtkWidget* /*none,nullable*/ gtk_popover_bin_get_child (::GtkPopoverBin* self /*none*/);
GI_INLINE_DECL Gtk::Widget get_child () noexcept;

// gboolean gtk_popover_bin_get_handle_input (GtkPopoverBin* self /*none*/);
// gboolean gtk_popover_bin_get_handle_input (::GtkPopoverBin* self /*none*/);
GI_INLINE_DECL bool get_handle_input () noexcept;

// GMenuModel* /*none,nullable*/ gtk_popover_bin_get_menu_model (GtkPopoverBin* self /*none*/);
// ::GMenuModel* /*none,nullable*/ gtk_popover_bin_get_menu_model (::GtkPopoverBin* self /*none*/);
GI_INLINE_DECL Gio::MenuModel get_menu_model () noexcept;

// GtkWidget* /*none,nullable*/ gtk_popover_bin_get_popover (GtkPopoverBin* self /*none*/);
// ::GtkPopover* /*none,nullable*/ gtk_popover_bin_get_popover (::GtkPopoverBin* self /*none*/);
GI_INLINE_DECL Gtk::Popover get_popover () noexcept;

// void gtk_popover_bin_popdown (GtkPopoverBin* self /*none*/);
// void gtk_popover_bin_popdown (::GtkPopoverBin* self /*none*/);
GI_INLINE_DECL void popdown () noexcept;

// void gtk_popover_bin_popup (GtkPopoverBin* self /*none*/);
// void gtk_popover_bin_popup (::GtkPopoverBin* self /*none*/);
GI_INLINE_DECL void popup () noexcept;

// void gtk_popover_bin_set_child (GtkPopoverBin* self /*none*/, GtkWidget* child /*none,nullable*/);
// void gtk_popover_bin_set_child (::GtkPopoverBin* self /*none*/, ::GtkWidget* child /*none,nullable*/);
GI_INLINE_DECL void set_child (Gtk::Widget child) noexcept;
GI_INLINE_DECL void set_child () noexcept;

// void gtk_popover_bin_set_handle_input (GtkPopoverBin* self /*none*/, gboolean handle_input);
// void gtk_popover_bin_set_handle_input (::GtkPopoverBin* self /*none*/, gboolean handle_input);
GI_INLINE_DECL void set_handle_input (gboolean handle_input) noexcept;

// void gtk_popover_bin_set_menu_model (GtkPopoverBin* self /*none*/, GMenuModel* model /*none,nullable*/);
// void gtk_popover_bin_set_menu_model (::GtkPopoverBin* self /*none*/, ::GMenuModel* model /*none,nullable*/);
GI_INLINE_DECL void set_menu_model (Gio::MenuModel model) noexcept;
GI_INLINE_DECL void set_menu_model () noexcept;

// void gtk_popover_bin_set_popover (GtkPopoverBin* self /*none*/, GtkWidget* popover /*none,nullable*/);
// void gtk_popover_bin_set_popover (::GtkPopoverBin* self /*none*/, ::GtkPopover* popover /*none,nullable*/);
GI_INLINE_DECL void set_popover (Gtk::Popover popover) noexcept;
GI_INLINE_DECL void set_popover () noexcept;

gi::property_proxy<Gtk::Widget, base::PopoverBinBase> property_child()
{ return gi::property_proxy<Gtk::Widget, base::PopoverBinBase> (*this, "child"); }
const gi::property_proxy<Gtk::Widget, base::PopoverBinBase> property_child() const
{ return gi::property_proxy<Gtk::Widget, base::PopoverBinBase> (*this, "child"); }

gi::property_proxy<bool, base::PopoverBinBase> property_handle_input()
{ return gi::property_proxy<bool, base::PopoverBinBase> (*this, "handle-input"); }
const gi::property_proxy<bool, base::PopoverBinBase> property_handle_input() const
{ return gi::property_proxy<bool, base::PopoverBinBase> (*this, "handle-input"); }

gi::property_proxy<Gio::MenuModel, base::PopoverBinBase> property_menu_model()
{ return gi::property_proxy<Gio::MenuModel, base::PopoverBinBase> (*this, "menu-model"); }
const gi::property_proxy<Gio::MenuModel, base::PopoverBinBase> property_menu_model() const
{ return gi::property_proxy<Gio::MenuModel, base::PopoverBinBase> (*this, "menu-model"); }

gi::property_proxy<Gtk::Popover, base::PopoverBinBase> property_popover()
{ return gi::property_proxy<Gtk::Popover, base::PopoverBinBase> (*this, "popover"); }
const gi::property_proxy<Gtk::Popover, base::PopoverBinBase> property_popover() const
{ return gi::property_proxy<Gtk::Popover, base::PopoverBinBase> (*this, "popover"); }

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/popoverbin_extra_def.hpp>)
#include <gtk/popoverbin_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/popoverbin_extra.hpp>)
#include <gtk/popoverbin_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class PopoverBin : public GI_GTK_POPOVERBIN_BASE
{ typedef GI_GTK_POPOVERBIN_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkPopoverBin>
{ typedef Gtk::PopoverBin type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {


class PopoverBinClassDef
{
typedef PopoverBinClassDef self;
public:
typedef Gtk::PopoverBin instance_type;
typedef ::GtkPopoverBinClass class_type;


struct TypeInitData;

protected:
GI_INLINE_DECL ~PopoverBinClassDef() = default;
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );


};

GI_CLASS_IMPL_BEGIN


class PopoverBinClass: public detail::ClassTemplate<Gtk::impl::internal::PopoverBinClassDef, Gtk::impl::internal::WidgetClass>
{
friend class internal::PopoverBinClassDef;
typedef PopoverBinClass self;
typedef detail::ClassTemplate<Gtk::impl::internal::PopoverBinClassDef, Gtk::impl::internal::WidgetClass> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types



};


struct PopoverBinClassDef::TypeInitData
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

using PopoverBinImpl = detail::ObjectImpl<PopoverBin, internal::PopoverBinClass>;

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
