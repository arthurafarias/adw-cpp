// AUTO-GENERATED

#ifndef _GI_ADW_VIEWSWITCHER_HPP_
#define _GI_ADW_VIEWSWITCHER_HPP_


namespace gi {

namespace repository {

namespace Adw {

class ViewStack;

class ViewSwitcher;

namespace base {


#define GI_ADW_VIEWSWITCHER_BASE base::ViewSwitcherBase
class ViewSwitcherBase : public Gtk::Widget
{
typedef Gtk::Widget super_type;
public:
typedef ::AdwViewSwitcher BaseObjectType;

ViewSwitcherBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return adw_view_switcher_get_type(); } 

// GtkWidget* /*none*/ adw_view_switcher_new ();
// ::AdwViewSwitcher* /*none*/ adw_view_switcher_new ();
static GI_INLINE_DECL Adw::ViewSwitcher new_ () noexcept;

// AdwViewSwitcherPolicy adw_view_switcher_get_policy (AdwViewSwitcher* self /*none*/);
// ::AdwViewSwitcherPolicy adw_view_switcher_get_policy (::AdwViewSwitcher* self /*none*/);
GI_INLINE_DECL Adw::ViewSwitcherPolicy get_policy () noexcept;

// AdwViewStack* /*none,nullable*/ adw_view_switcher_get_stack (AdwViewSwitcher* self /*none*/);
// ::AdwViewStack* /*none,nullable*/ adw_view_switcher_get_stack (::AdwViewSwitcher* self /*none*/);
GI_INLINE_DECL Adw::ViewStack get_stack () noexcept;

// void adw_view_switcher_set_policy (AdwViewSwitcher* self /*none*/, AdwViewSwitcherPolicy policy);
// void adw_view_switcher_set_policy (::AdwViewSwitcher* self /*none*/, ::AdwViewSwitcherPolicy policy);
GI_INLINE_DECL void set_policy (Adw::ViewSwitcherPolicy policy) noexcept;

// void adw_view_switcher_set_stack (AdwViewSwitcher* self /*none*/, AdwViewStack* stack /*none,nullable*/);
// void adw_view_switcher_set_stack (::AdwViewSwitcher* self /*none*/, ::AdwViewStack* stack /*none,nullable*/);
GI_INLINE_DECL void set_stack (Adw::ViewStack stack) noexcept;
GI_INLINE_DECL void set_stack () noexcept;

gi::property_proxy<Adw::ViewSwitcherPolicy, base::ViewSwitcherBase> property_policy()
{ return gi::property_proxy<Adw::ViewSwitcherPolicy, base::ViewSwitcherBase> (*this, "policy"); }
const gi::property_proxy<Adw::ViewSwitcherPolicy, base::ViewSwitcherBase> property_policy() const
{ return gi::property_proxy<Adw::ViewSwitcherPolicy, base::ViewSwitcherBase> (*this, "policy"); }

gi::property_proxy<Adw::ViewStack, base::ViewSwitcherBase> property_stack()
{ return gi::property_proxy<Adw::ViewStack, base::ViewSwitcherBase> (*this, "stack"); }
const gi::property_proxy<Adw::ViewStack, base::ViewSwitcherBase> property_stack() const
{ return gi::property_proxy<Adw::ViewStack, base::ViewSwitcherBase> (*this, "stack"); }

}; // class

} // namespace base

} // namespace Adw

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<adw/viewswitcher_extra_def.hpp>)
#include <adw/viewswitcher_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<adw/viewswitcher_extra.hpp>)
#include <adw/viewswitcher_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Adw {

class ViewSwitcher : public GI_ADW_VIEWSWITCHER_BASE
{ typedef GI_ADW_VIEWSWITCHER_BASE super_type; using super_type::super_type; };

} // namespace Adw

template<> struct declare_cpptype_of<::AdwViewSwitcher>
{ typedef Adw::ViewSwitcher type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Adw {

namespace impl {

namespace internal {


class ViewSwitcherClassDef
{
typedef ViewSwitcherClassDef self;
public:
typedef Adw::ViewSwitcher instance_type;
typedef ::AdwViewSwitcherClass class_type;


struct TypeInitData;

protected:
GI_INLINE_DECL ~ViewSwitcherClassDef() = default;
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );


};

GI_CLASS_IMPL_BEGIN


class ViewSwitcherClass: public detail::ClassTemplate<Adw::impl::internal::ViewSwitcherClassDef, Gtk::impl::internal::WidgetClass>
{
friend class internal::ViewSwitcherClassDef;
typedef ViewSwitcherClass self;
typedef detail::ClassTemplate<Adw::impl::internal::ViewSwitcherClassDef, Gtk::impl::internal::WidgetClass> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types



};


struct ViewSwitcherClassDef::TypeInitData
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

using ViewSwitcherImpl = detail::ObjectImpl<ViewSwitcher, internal::ViewSwitcherClass>;

} // namespace impl

} // namespace Adw

} // namespace repository

} // namespace gi

#endif
