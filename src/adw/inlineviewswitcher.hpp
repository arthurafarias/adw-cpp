// AUTO-GENERATED

#ifndef _GI_ADW_INLINEVIEWSWITCHER_HPP_
#define _GI_ADW_INLINEVIEWSWITCHER_HPP_


namespace gi {

namespace repository {

namespace Adw {

class ViewStack;

class InlineViewSwitcher;

namespace base {


#define GI_ADW_INLINEVIEWSWITCHER_BASE base::InlineViewSwitcherBase
class InlineViewSwitcherBase : public Gtk::Widget
{
typedef Gtk::Widget super_type;
public:
typedef ::AdwInlineViewSwitcher BaseObjectType;

InlineViewSwitcherBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return adw_inline_view_switcher_get_type(); } 

GI_INLINE_DECL Gtk::Orientable interface_ (gi::interface_tag<Gtk::Orientable>);

GI_INLINE_DECL operator Gtk::Orientable ();

// GtkWidget* /*none*/ adw_inline_view_switcher_new ();
// ::AdwInlineViewSwitcher* /*none*/ adw_inline_view_switcher_new ();
static GI_INLINE_DECL Adw::InlineViewSwitcher new_ () noexcept;

// gboolean adw_inline_view_switcher_get_can_shrink (AdwInlineViewSwitcher* self /*none*/);
// gboolean adw_inline_view_switcher_get_can_shrink (::AdwInlineViewSwitcher* self /*none*/);
GI_INLINE_DECL bool get_can_shrink () noexcept;

// AdwInlineViewSwitcherDisplayMode adw_inline_view_switcher_get_display_mode (AdwInlineViewSwitcher* self /*none*/);
// ::AdwInlineViewSwitcherDisplayMode adw_inline_view_switcher_get_display_mode (::AdwInlineViewSwitcher* self /*none*/);
GI_INLINE_DECL Adw::InlineViewSwitcherDisplayMode get_display_mode () noexcept;

// gboolean adw_inline_view_switcher_get_homogeneous (AdwInlineViewSwitcher* self /*none*/);
// gboolean adw_inline_view_switcher_get_homogeneous (::AdwInlineViewSwitcher* self /*none*/);
GI_INLINE_DECL bool get_homogeneous () noexcept;

// AdwViewStack* /*none,nullable*/ adw_inline_view_switcher_get_stack (AdwInlineViewSwitcher* self /*none*/);
// ::AdwViewStack* /*none,nullable*/ adw_inline_view_switcher_get_stack (::AdwInlineViewSwitcher* self /*none*/);
GI_INLINE_DECL Adw::ViewStack get_stack () noexcept;

// void adw_inline_view_switcher_set_can_shrink (AdwInlineViewSwitcher* self /*none*/, gboolean can_shrink);
// void adw_inline_view_switcher_set_can_shrink (::AdwInlineViewSwitcher* self /*none*/, gboolean can_shrink);
GI_INLINE_DECL void set_can_shrink (gboolean can_shrink) noexcept;

// void adw_inline_view_switcher_set_display_mode (AdwInlineViewSwitcher* self /*none*/, AdwInlineViewSwitcherDisplayMode mode);
// void adw_inline_view_switcher_set_display_mode (::AdwInlineViewSwitcher* self /*none*/, ::AdwInlineViewSwitcherDisplayMode mode);
GI_INLINE_DECL void set_display_mode (Adw::InlineViewSwitcherDisplayMode mode) noexcept;

// void adw_inline_view_switcher_set_homogeneous (AdwInlineViewSwitcher* self /*none*/, gboolean homogeneous);
// void adw_inline_view_switcher_set_homogeneous (::AdwInlineViewSwitcher* self /*none*/, gboolean homogeneous);
GI_INLINE_DECL void set_homogeneous (gboolean homogeneous) noexcept;

// void adw_inline_view_switcher_set_stack (AdwInlineViewSwitcher* self /*none*/, AdwViewStack* stack /*none,nullable*/);
// void adw_inline_view_switcher_set_stack (::AdwInlineViewSwitcher* self /*none*/, ::AdwViewStack* stack /*none,nullable*/);
GI_INLINE_DECL void set_stack (Adw::ViewStack stack) noexcept;
GI_INLINE_DECL void set_stack () noexcept;

gi::property_proxy<bool, base::InlineViewSwitcherBase> property_can_shrink()
{ return gi::property_proxy<bool, base::InlineViewSwitcherBase> (*this, "can-shrink"); }
const gi::property_proxy<bool, base::InlineViewSwitcherBase> property_can_shrink() const
{ return gi::property_proxy<bool, base::InlineViewSwitcherBase> (*this, "can-shrink"); }

gi::property_proxy<Adw::InlineViewSwitcherDisplayMode, base::InlineViewSwitcherBase> property_display_mode()
{ return gi::property_proxy<Adw::InlineViewSwitcherDisplayMode, base::InlineViewSwitcherBase> (*this, "display-mode"); }
const gi::property_proxy<Adw::InlineViewSwitcherDisplayMode, base::InlineViewSwitcherBase> property_display_mode() const
{ return gi::property_proxy<Adw::InlineViewSwitcherDisplayMode, base::InlineViewSwitcherBase> (*this, "display-mode"); }

gi::property_proxy<bool, base::InlineViewSwitcherBase> property_homogeneous()
{ return gi::property_proxy<bool, base::InlineViewSwitcherBase> (*this, "homogeneous"); }
const gi::property_proxy<bool, base::InlineViewSwitcherBase> property_homogeneous() const
{ return gi::property_proxy<bool, base::InlineViewSwitcherBase> (*this, "homogeneous"); }

gi::property_proxy<Adw::ViewStack, base::InlineViewSwitcherBase> property_stack()
{ return gi::property_proxy<Adw::ViewStack, base::InlineViewSwitcherBase> (*this, "stack"); }
const gi::property_proxy<Adw::ViewStack, base::InlineViewSwitcherBase> property_stack() const
{ return gi::property_proxy<Adw::ViewStack, base::InlineViewSwitcherBase> (*this, "stack"); }

}; // class

} // namespace base

} // namespace Adw

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<adw/inlineviewswitcher_extra_def.hpp>)
#include <adw/inlineviewswitcher_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<adw/inlineviewswitcher_extra.hpp>)
#include <adw/inlineviewswitcher_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Adw {

class InlineViewSwitcher : public GI_ADW_INLINEVIEWSWITCHER_BASE
{ typedef GI_ADW_INLINEVIEWSWITCHER_BASE super_type; using super_type::super_type; };

} // namespace Adw

template<> struct declare_cpptype_of<::AdwInlineViewSwitcher>
{ typedef Adw::InlineViewSwitcher type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Adw {

namespace impl {

namespace internal {


class InlineViewSwitcherClassDef
{
typedef InlineViewSwitcherClassDef self;
public:
typedef Adw::InlineViewSwitcher instance_type;
typedef ::AdwInlineViewSwitcherClass class_type;


struct TypeInitData;

protected:
GI_INLINE_DECL ~InlineViewSwitcherClassDef() = default;
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );


};

GI_CLASS_IMPL_BEGIN


class InlineViewSwitcherClass: public detail::ClassTemplate<Adw::impl::internal::InlineViewSwitcherClassDef, Gtk::impl::internal::WidgetClass, Gtk::impl::internal::OrientableIfaceClassImpl>
{
friend class internal::InlineViewSwitcherClassDef;
typedef InlineViewSwitcherClass self;
typedef detail::ClassTemplate<Adw::impl::internal::InlineViewSwitcherClassDef, Gtk::impl::internal::WidgetClass, Gtk::impl::internal::OrientableIfaceClassImpl> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types
typedef Gtk::impl::internal::OrientableIfaceClassImpl GtkOrientableIface_type;



};


struct InlineViewSwitcherClassDef::TypeInitData
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

using InlineViewSwitcherImpl = detail::ObjectImpl<InlineViewSwitcher, internal::InlineViewSwitcherClass>;

} // namespace impl

} // namespace Adw

} // namespace repository

} // namespace gi

#endif
