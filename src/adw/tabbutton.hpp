// AUTO-GENERATED

#ifndef _GI_ADW_TABBUTTON_HPP_
#define _GI_ADW_TABBUTTON_HPP_


namespace gi {

namespace repository {

namespace Adw {

class TabView;

class TabButton;

namespace base {


#define GI_ADW_TABBUTTON_BASE base::TabButtonBase
class TabButtonBase : public Gtk::Widget
{
typedef Gtk::Widget super_type;
public:
typedef ::AdwTabButton BaseObjectType;

TabButtonBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return adw_tab_button_get_type(); } 

GI_INLINE_DECL Gtk::Actionable interface_ (gi::interface_tag<Gtk::Actionable>);

GI_INLINE_DECL operator Gtk::Actionable ();

// GtkWidget* /*none*/ adw_tab_button_new ();
// ::AdwTabButton* /*none*/ adw_tab_button_new ();
static GI_INLINE_DECL Adw::TabButton new_ () noexcept;

// AdwTabView* /*none,nullable*/ adw_tab_button_get_view (AdwTabButton* self /*none*/);
// ::AdwTabView* /*none,nullable*/ adw_tab_button_get_view (::AdwTabButton* self /*none*/);
GI_INLINE_DECL Adw::TabView get_view () noexcept;

// void adw_tab_button_set_view (AdwTabButton* self /*none*/, AdwTabView* view /*none,nullable*/);
// void adw_tab_button_set_view (::AdwTabButton* self /*none*/, ::AdwTabView* view /*none,nullable*/);
GI_INLINE_DECL void set_view (Adw::TabView view) noexcept;
GI_INLINE_DECL void set_view () noexcept;

gi::property_proxy<Adw::TabView, base::TabButtonBase> property_view()
{ return gi::property_proxy<Adw::TabView, base::TabButtonBase> (*this, "view"); }
const gi::property_proxy<Adw::TabView, base::TabButtonBase> property_view() const
{ return gi::property_proxy<Adw::TabView, base::TabButtonBase> (*this, "view"); }

// (signal) void activate ();
// (signal) void activate ();
gi::signal_proxy<void(Adw::TabButton)> signal_activate()
{ return gi::signal_proxy<void(Adw::TabButton)> (*this, "activate"); }

// (signal) void clicked ();
// (signal) void clicked ();
gi::signal_proxy<void(Adw::TabButton)> signal_clicked()
{ return gi::signal_proxy<void(Adw::TabButton)> (*this, "clicked"); }

}; // class

} // namespace base

} // namespace Adw

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<adw/tabbutton_extra_def.hpp>)
#include <adw/tabbutton_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<adw/tabbutton_extra.hpp>)
#include <adw/tabbutton_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Adw {

class TabButton : public GI_ADW_TABBUTTON_BASE
{ typedef GI_ADW_TABBUTTON_BASE super_type; using super_type::super_type; };

} // namespace Adw

template<> struct declare_cpptype_of<::AdwTabButton>
{ typedef Adw::TabButton type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Adw {

namespace impl {

namespace internal {


class TabButtonClassDef
{
typedef TabButtonClassDef self;
public:
typedef Adw::TabButton instance_type;
typedef ::AdwTabButtonClass class_type;


struct TypeInitData;

protected:
GI_INLINE_DECL ~TabButtonClassDef() = default;
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );


};

GI_CLASS_IMPL_BEGIN


class TabButtonClass: public detail::ClassTemplate<Adw::impl::internal::TabButtonClassDef, Gtk::impl::internal::WidgetClass, Gtk::impl::internal::ActionableInterfaceClassImpl>
{
friend class internal::TabButtonClassDef;
typedef TabButtonClass self;
typedef detail::ClassTemplate<Adw::impl::internal::TabButtonClassDef, Gtk::impl::internal::WidgetClass, Gtk::impl::internal::ActionableInterfaceClassImpl> super;

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


struct TabButtonClassDef::TypeInitData
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

using TabButtonImpl = detail::ObjectImpl<TabButton, internal::TabButtonClass>;

} // namespace impl

} // namespace Adw

} // namespace repository

} // namespace gi

#endif
