// AUTO-GENERATED

#ifndef _GI_ADW_SPLITBUTTON_HPP_
#define _GI_ADW_SPLITBUTTON_HPP_


namespace gi {

namespace repository {

namespace Adw {


class SplitButton;

namespace base {


#define GI_ADW_SPLITBUTTON_BASE base::SplitButtonBase
class SplitButtonBase : public Gtk::Widget
{
typedef Gtk::Widget super_type;
public:
typedef ::AdwSplitButton BaseObjectType;

SplitButtonBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return adw_split_button_get_type(); } 

GI_INLINE_DECL Gtk::Actionable interface_ (gi::interface_tag<Gtk::Actionable>);

GI_INLINE_DECL operator Gtk::Actionable ();

// GtkWidget* /*none*/ adw_split_button_new ();
// ::AdwSplitButton* /*none*/ adw_split_button_new ();
static GI_INLINE_DECL Adw::SplitButton new_ () noexcept;

// gboolean adw_split_button_get_can_shrink (AdwSplitButton* self /*none*/);
// gboolean adw_split_button_get_can_shrink (::AdwSplitButton* self /*none*/);
GI_INLINE_DECL bool get_can_shrink () noexcept;

// GtkWidget* /*none,nullable*/ adw_split_button_get_child (AdwSplitButton* self /*none*/);
// ::GtkWidget* /*none,nullable*/ adw_split_button_get_child (::AdwSplitButton* self /*none*/);
GI_INLINE_DECL Gtk::Widget get_child () noexcept;

// GtkArrowType adw_split_button_get_direction (AdwSplitButton* self /*none*/);
// ::GtkArrowType adw_split_button_get_direction (::AdwSplitButton* self /*none*/);
GI_INLINE_DECL Gtk::ArrowType get_direction () noexcept;

// const char* /*none*/ adw_split_button_get_dropdown_tooltip (AdwSplitButton* self /*none*/);
// const char* /*none*/ adw_split_button_get_dropdown_tooltip (::AdwSplitButton* self /*none*/);
GI_INLINE_DECL gi::cstring_v get_dropdown_tooltip () noexcept;

// const char* /*none,nullable*/ adw_split_button_get_icon_name (AdwSplitButton* self /*none*/);
// const char* /*none,nullable*/ adw_split_button_get_icon_name (::AdwSplitButton* self /*none*/);
GI_INLINE_DECL gi::cstring_v get_icon_name () noexcept;

// const char* /*none,nullable*/ adw_split_button_get_label (AdwSplitButton* self /*none*/);
// const char* /*none,nullable*/ adw_split_button_get_label (::AdwSplitButton* self /*none*/);
GI_INLINE_DECL gi::cstring_v get_label () noexcept;

// GMenuModel* /*none,nullable*/ adw_split_button_get_menu_model (AdwSplitButton* self /*none*/);
// ::GMenuModel* /*none,nullable*/ adw_split_button_get_menu_model (::AdwSplitButton* self /*none*/);
GI_INLINE_DECL Gio::MenuModel get_menu_model () noexcept;

// GtkPopover* /*none,nullable*/ adw_split_button_get_popover (AdwSplitButton* self /*none*/);
// ::GtkPopover* /*none,nullable*/ adw_split_button_get_popover (::AdwSplitButton* self /*none*/);
GI_INLINE_DECL Gtk::Popover get_popover () noexcept;

// gboolean adw_split_button_get_use_underline (AdwSplitButton* self /*none*/);
// gboolean adw_split_button_get_use_underline (::AdwSplitButton* self /*none*/);
GI_INLINE_DECL bool get_use_underline () noexcept;

// void adw_split_button_popdown (AdwSplitButton* self /*none*/);
// void adw_split_button_popdown (::AdwSplitButton* self /*none*/);
GI_INLINE_DECL void popdown () noexcept;

// void adw_split_button_popup (AdwSplitButton* self /*none*/);
// void adw_split_button_popup (::AdwSplitButton* self /*none*/);
GI_INLINE_DECL void popup () noexcept;

// void adw_split_button_set_can_shrink (AdwSplitButton* self /*none*/, gboolean can_shrink);
// void adw_split_button_set_can_shrink (::AdwSplitButton* self /*none*/, gboolean can_shrink);
GI_INLINE_DECL void set_can_shrink (gboolean can_shrink) noexcept;

// void adw_split_button_set_child (AdwSplitButton* self /*none*/, GtkWidget* child /*none,nullable*/);
// void adw_split_button_set_child (::AdwSplitButton* self /*none*/, ::GtkWidget* child /*none,nullable*/);
GI_INLINE_DECL void set_child (Gtk::Widget child) noexcept;
GI_INLINE_DECL void set_child () noexcept;

// void adw_split_button_set_direction (AdwSplitButton* self /*none*/, GtkArrowType direction);
// void adw_split_button_set_direction (::AdwSplitButton* self /*none*/, ::GtkArrowType direction);
GI_INLINE_DECL void set_direction (Gtk::ArrowType direction) noexcept;

// void adw_split_button_set_dropdown_tooltip (AdwSplitButton* self /*none*/, const char* tooltip /*none*/);
// void adw_split_button_set_dropdown_tooltip (::AdwSplitButton* self /*none*/, const char* tooltip /*none*/);
GI_INLINE_DECL void set_dropdown_tooltip (const gi::cstring_v tooltip) noexcept;

// void adw_split_button_set_icon_name (AdwSplitButton* self /*none*/, const char* icon_name /*none*/);
// void adw_split_button_set_icon_name (::AdwSplitButton* self /*none*/, const char* icon_name /*none*/);
GI_INLINE_DECL void set_icon_name (const gi::cstring_v icon_name) noexcept;

// void adw_split_button_set_label (AdwSplitButton* self /*none*/, const char* label /*none*/);
// void adw_split_button_set_label (::AdwSplitButton* self /*none*/, const char* label /*none*/);
GI_INLINE_DECL void set_label (const gi::cstring_v label) noexcept;

// void adw_split_button_set_menu_model (AdwSplitButton* self /*none*/, GMenuModel* menu_model /*none,nullable*/);
// void adw_split_button_set_menu_model (::AdwSplitButton* self /*none*/, ::GMenuModel* menu_model /*none,nullable*/);
GI_INLINE_DECL void set_menu_model (Gio::MenuModel menu_model) noexcept;
GI_INLINE_DECL void set_menu_model () noexcept;

// void adw_split_button_set_popover (AdwSplitButton* self /*none*/, GtkPopover* popover /*none,nullable*/);
// void adw_split_button_set_popover (::AdwSplitButton* self /*none*/, ::GtkPopover* popover /*none,nullable*/);
GI_INLINE_DECL void set_popover (Gtk::Popover popover) noexcept;
GI_INLINE_DECL void set_popover () noexcept;

// void adw_split_button_set_use_underline (AdwSplitButton* self /*none*/, gboolean use_underline);
// void adw_split_button_set_use_underline (::AdwSplitButton* self /*none*/, gboolean use_underline);
GI_INLINE_DECL void set_use_underline (gboolean use_underline) noexcept;

gi::property_proxy<bool, base::SplitButtonBase> property_can_shrink()
{ return gi::property_proxy<bool, base::SplitButtonBase> (*this, "can-shrink"); }
const gi::property_proxy<bool, base::SplitButtonBase> property_can_shrink() const
{ return gi::property_proxy<bool, base::SplitButtonBase> (*this, "can-shrink"); }

gi::property_proxy<Gtk::Widget, base::SplitButtonBase> property_child()
{ return gi::property_proxy<Gtk::Widget, base::SplitButtonBase> (*this, "child"); }
const gi::property_proxy<Gtk::Widget, base::SplitButtonBase> property_child() const
{ return gi::property_proxy<Gtk::Widget, base::SplitButtonBase> (*this, "child"); }

gi::property_proxy<Gtk::ArrowType, base::SplitButtonBase> property_direction()
{ return gi::property_proxy<Gtk::ArrowType, base::SplitButtonBase> (*this, "direction"); }
const gi::property_proxy<Gtk::ArrowType, base::SplitButtonBase> property_direction() const
{ return gi::property_proxy<Gtk::ArrowType, base::SplitButtonBase> (*this, "direction"); }

gi::property_proxy<gi::cstring, base::SplitButtonBase> property_dropdown_tooltip()
{ return gi::property_proxy<gi::cstring, base::SplitButtonBase> (*this, "dropdown-tooltip"); }
const gi::property_proxy<gi::cstring, base::SplitButtonBase> property_dropdown_tooltip() const
{ return gi::property_proxy<gi::cstring, base::SplitButtonBase> (*this, "dropdown-tooltip"); }

gi::property_proxy<gi::cstring, base::SplitButtonBase> property_icon_name()
{ return gi::property_proxy<gi::cstring, base::SplitButtonBase> (*this, "icon-name"); }
const gi::property_proxy<gi::cstring, base::SplitButtonBase> property_icon_name() const
{ return gi::property_proxy<gi::cstring, base::SplitButtonBase> (*this, "icon-name"); }

gi::property_proxy<gi::cstring, base::SplitButtonBase> property_label()
{ return gi::property_proxy<gi::cstring, base::SplitButtonBase> (*this, "label"); }
const gi::property_proxy<gi::cstring, base::SplitButtonBase> property_label() const
{ return gi::property_proxy<gi::cstring, base::SplitButtonBase> (*this, "label"); }

gi::property_proxy<Gio::MenuModel, base::SplitButtonBase> property_menu_model()
{ return gi::property_proxy<Gio::MenuModel, base::SplitButtonBase> (*this, "menu-model"); }
const gi::property_proxy<Gio::MenuModel, base::SplitButtonBase> property_menu_model() const
{ return gi::property_proxy<Gio::MenuModel, base::SplitButtonBase> (*this, "menu-model"); }

gi::property_proxy<Gtk::Popover, base::SplitButtonBase> property_popover()
{ return gi::property_proxy<Gtk::Popover, base::SplitButtonBase> (*this, "popover"); }
const gi::property_proxy<Gtk::Popover, base::SplitButtonBase> property_popover() const
{ return gi::property_proxy<Gtk::Popover, base::SplitButtonBase> (*this, "popover"); }

gi::property_proxy<bool, base::SplitButtonBase> property_use_underline()
{ return gi::property_proxy<bool, base::SplitButtonBase> (*this, "use-underline"); }
const gi::property_proxy<bool, base::SplitButtonBase> property_use_underline() const
{ return gi::property_proxy<bool, base::SplitButtonBase> (*this, "use-underline"); }

// (signal) void activate ();
// (signal) void activate ();
gi::signal_proxy<void(Adw::SplitButton)> signal_activate()
{ return gi::signal_proxy<void(Adw::SplitButton)> (*this, "activate"); }

// (signal) void clicked ();
// (signal) void clicked ();
gi::signal_proxy<void(Adw::SplitButton)> signal_clicked()
{ return gi::signal_proxy<void(Adw::SplitButton)> (*this, "clicked"); }

}; // class

} // namespace base

} // namespace Adw

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<adw/splitbutton_extra_def.hpp>)
#include <adw/splitbutton_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<adw/splitbutton_extra.hpp>)
#include <adw/splitbutton_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Adw {

class SplitButton : public GI_ADW_SPLITBUTTON_BASE
{ typedef GI_ADW_SPLITBUTTON_BASE super_type; using super_type::super_type; };

} // namespace Adw

template<> struct declare_cpptype_of<::AdwSplitButton>
{ typedef Adw::SplitButton type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Adw {

namespace impl {

namespace internal {


class SplitButtonClassDef
{
typedef SplitButtonClassDef self;
public:
typedef Adw::SplitButton instance_type;
typedef ::AdwSplitButtonClass class_type;


struct TypeInitData;

protected:
GI_INLINE_DECL ~SplitButtonClassDef() = default;
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );


};

GI_CLASS_IMPL_BEGIN


class SplitButtonClass: public detail::ClassTemplate<Adw::impl::internal::SplitButtonClassDef, Gtk::impl::internal::WidgetClass, Gtk::impl::internal::ActionableInterfaceClassImpl>
{
friend class internal::SplitButtonClassDef;
typedef SplitButtonClass self;
typedef detail::ClassTemplate<Adw::impl::internal::SplitButtonClassDef, Gtk::impl::internal::WidgetClass, Gtk::impl::internal::ActionableInterfaceClassImpl> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types
typedef Gtk::impl::internal::ActionableInterfaceClassImpl GtkActionableInterface_type;



};


struct SplitButtonClassDef::TypeInitData
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

using SplitButtonImpl = detail::ObjectImpl<SplitButton, internal::SplitButtonClass>;

} // namespace impl

} // namespace Adw

} // namespace repository

} // namespace gi

#endif
