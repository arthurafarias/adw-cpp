// AUTO-GENERATED

#ifndef _GI_ADW_VIEWSWITCHERBAR_HPP_
#define _GI_ADW_VIEWSWITCHERBAR_HPP_


namespace gi {

namespace repository {

namespace Adw {

class ViewStack;

class ViewSwitcherBar;

namespace base {


#define GI_ADW_VIEWSWITCHERBAR_BASE base::ViewSwitcherBarBase
class ViewSwitcherBarBase : public Gtk::Widget
{
typedef Gtk::Widget super_type;
public:
typedef ::AdwViewSwitcherBar BaseObjectType;

ViewSwitcherBarBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return adw_view_switcher_bar_get_type(); } 

// GtkWidget* /*none*/ adw_view_switcher_bar_new ();
// ::AdwViewSwitcherBar* /*none*/ adw_view_switcher_bar_new ();
static GI_INLINE_DECL Adw::ViewSwitcherBar new_ () noexcept;

// gboolean adw_view_switcher_bar_get_reveal (AdwViewSwitcherBar* self /*none*/);
// gboolean adw_view_switcher_bar_get_reveal (::AdwViewSwitcherBar* self /*none*/);
GI_INLINE_DECL bool get_reveal () noexcept;

// AdwViewStack* /*none,nullable*/ adw_view_switcher_bar_get_stack (AdwViewSwitcherBar* self /*none*/);
// ::AdwViewStack* /*none,nullable*/ adw_view_switcher_bar_get_stack (::AdwViewSwitcherBar* self /*none*/);
GI_INLINE_DECL Adw::ViewStack get_stack () noexcept;

// void adw_view_switcher_bar_set_reveal (AdwViewSwitcherBar* self /*none*/, gboolean reveal);
// void adw_view_switcher_bar_set_reveal (::AdwViewSwitcherBar* self /*none*/, gboolean reveal);
GI_INLINE_DECL void set_reveal (gboolean reveal) noexcept;

// void adw_view_switcher_bar_set_stack (AdwViewSwitcherBar* self /*none*/, AdwViewStack* stack /*none,nullable*/);
// void adw_view_switcher_bar_set_stack (::AdwViewSwitcherBar* self /*none*/, ::AdwViewStack* stack /*none,nullable*/);
GI_INLINE_DECL void set_stack (Adw::ViewStack stack) noexcept;
GI_INLINE_DECL void set_stack () noexcept;

gi::property_proxy<bool, base::ViewSwitcherBarBase> property_reveal()
{ return gi::property_proxy<bool, base::ViewSwitcherBarBase> (*this, "reveal"); }
const gi::property_proxy<bool, base::ViewSwitcherBarBase> property_reveal() const
{ return gi::property_proxy<bool, base::ViewSwitcherBarBase> (*this, "reveal"); }

gi::property_proxy<Adw::ViewStack, base::ViewSwitcherBarBase> property_stack()
{ return gi::property_proxy<Adw::ViewStack, base::ViewSwitcherBarBase> (*this, "stack"); }
const gi::property_proxy<Adw::ViewStack, base::ViewSwitcherBarBase> property_stack() const
{ return gi::property_proxy<Adw::ViewStack, base::ViewSwitcherBarBase> (*this, "stack"); }

}; // class

} // namespace base

} // namespace Adw

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<adw/viewswitcherbar_extra_def.hpp>)
#include <adw/viewswitcherbar_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<adw/viewswitcherbar_extra.hpp>)
#include <adw/viewswitcherbar_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Adw {

class ViewSwitcherBar : public GI_ADW_VIEWSWITCHERBAR_BASE
{ typedef GI_ADW_VIEWSWITCHERBAR_BASE super_type; using super_type::super_type; };

} // namespace Adw

template<> struct declare_cpptype_of<::AdwViewSwitcherBar>
{ typedef Adw::ViewSwitcherBar type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Adw {

namespace impl {

namespace internal {


class ViewSwitcherBarClassDef
{
typedef ViewSwitcherBarClassDef self;
public:
typedef Adw::ViewSwitcherBar instance_type;
typedef ::AdwViewSwitcherBarClass class_type;


struct TypeInitData;

protected:
GI_INLINE_DECL ~ViewSwitcherBarClassDef() = default;
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );


};

GI_CLASS_IMPL_BEGIN


class ViewSwitcherBarClass: public detail::ClassTemplate<Adw::impl::internal::ViewSwitcherBarClassDef, Gtk::impl::internal::WidgetClass>
{
friend class internal::ViewSwitcherBarClassDef;
typedef ViewSwitcherBarClass self;
typedef detail::ClassTemplate<Adw::impl::internal::ViewSwitcherBarClassDef, Gtk::impl::internal::WidgetClass> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types



};


struct ViewSwitcherBarClassDef::TypeInitData
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

using ViewSwitcherBarImpl = detail::ObjectImpl<ViewSwitcherBar, internal::ViewSwitcherBarClass>;

} // namespace impl

} // namespace Adw

} // namespace repository

} // namespace gi

#endif
