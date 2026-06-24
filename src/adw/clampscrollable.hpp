// AUTO-GENERATED

#ifndef _GI_ADW_CLAMPSCROLLABLE_HPP_
#define _GI_ADW_CLAMPSCROLLABLE_HPP_


namespace gi {

namespace repository {

namespace Adw {


class ClampScrollable;

namespace base {


#define GI_ADW_CLAMPSCROLLABLE_BASE base::ClampScrollableBase
class ClampScrollableBase : public Gtk::Widget
{
typedef Gtk::Widget super_type;
public:
typedef ::AdwClampScrollable BaseObjectType;

ClampScrollableBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return adw_clamp_scrollable_get_type(); } 

GI_INLINE_DECL Gtk::Orientable interface_ (gi::interface_tag<Gtk::Orientable>);

GI_INLINE_DECL operator Gtk::Orientable ();

GI_INLINE_DECL Gtk::Scrollable interface_ (gi::interface_tag<Gtk::Scrollable>);

GI_INLINE_DECL operator Gtk::Scrollable ();

// GtkWidget* /*none*/ adw_clamp_scrollable_new ();
// ::AdwClampScrollable* /*none*/ adw_clamp_scrollable_new ();
static GI_INLINE_DECL Adw::ClampScrollable new_ () noexcept;

// GtkWidget* /*none,nullable*/ adw_clamp_scrollable_get_child (AdwClampScrollable* self /*none*/);
// ::GtkWidget* /*none,nullable*/ adw_clamp_scrollable_get_child (::AdwClampScrollable* self /*none*/);
GI_INLINE_DECL Gtk::Widget get_child () noexcept;

// int adw_clamp_scrollable_get_maximum_size (AdwClampScrollable* self /*none*/);
// gint adw_clamp_scrollable_get_maximum_size (::AdwClampScrollable* self /*none*/);
GI_INLINE_DECL gint get_maximum_size () noexcept;

// int adw_clamp_scrollable_get_tightening_threshold (AdwClampScrollable* self /*none*/);
// gint adw_clamp_scrollable_get_tightening_threshold (::AdwClampScrollable* self /*none*/);
GI_INLINE_DECL gint get_tightening_threshold () noexcept;

// AdwLengthUnit adw_clamp_scrollable_get_unit (AdwClampScrollable* self /*none*/);
// ::AdwLengthUnit adw_clamp_scrollable_get_unit (::AdwClampScrollable* self /*none*/);
GI_INLINE_DECL Adw::LengthUnit get_unit () noexcept;

// void adw_clamp_scrollable_set_child (AdwClampScrollable* self /*none*/, GtkWidget* child /*none,nullable*/);
// void adw_clamp_scrollable_set_child (::AdwClampScrollable* self /*none*/, ::GtkWidget* child /*none,nullable*/);
GI_INLINE_DECL void set_child (Gtk::Widget child) noexcept;
GI_INLINE_DECL void set_child () noexcept;

// void adw_clamp_scrollable_set_maximum_size (AdwClampScrollable* self /*none*/, int maximum_size);
// void adw_clamp_scrollable_set_maximum_size (::AdwClampScrollable* self /*none*/, gint maximum_size);
GI_INLINE_DECL void set_maximum_size (gint maximum_size) noexcept;

// void adw_clamp_scrollable_set_tightening_threshold (AdwClampScrollable* self /*none*/, int tightening_threshold);
// void adw_clamp_scrollable_set_tightening_threshold (::AdwClampScrollable* self /*none*/, gint tightening_threshold);
GI_INLINE_DECL void set_tightening_threshold (gint tightening_threshold) noexcept;

// void adw_clamp_scrollable_set_unit (AdwClampScrollable* self /*none*/, AdwLengthUnit unit);
// void adw_clamp_scrollable_set_unit (::AdwClampScrollable* self /*none*/, ::AdwLengthUnit unit);
GI_INLINE_DECL void set_unit (Adw::LengthUnit unit) noexcept;

gi::property_proxy<Gtk::Widget, base::ClampScrollableBase> property_child()
{ return gi::property_proxy<Gtk::Widget, base::ClampScrollableBase> (*this, "child"); }
const gi::property_proxy<Gtk::Widget, base::ClampScrollableBase> property_child() const
{ return gi::property_proxy<Gtk::Widget, base::ClampScrollableBase> (*this, "child"); }

gi::property_proxy<gint, base::ClampScrollableBase> property_maximum_size()
{ return gi::property_proxy<gint, base::ClampScrollableBase> (*this, "maximum-size"); }
const gi::property_proxy<gint, base::ClampScrollableBase> property_maximum_size() const
{ return gi::property_proxy<gint, base::ClampScrollableBase> (*this, "maximum-size"); }

gi::property_proxy<gint, base::ClampScrollableBase> property_tightening_threshold()
{ return gi::property_proxy<gint, base::ClampScrollableBase> (*this, "tightening-threshold"); }
const gi::property_proxy<gint, base::ClampScrollableBase> property_tightening_threshold() const
{ return gi::property_proxy<gint, base::ClampScrollableBase> (*this, "tightening-threshold"); }

gi::property_proxy<Adw::LengthUnit, base::ClampScrollableBase> property_unit()
{ return gi::property_proxy<Adw::LengthUnit, base::ClampScrollableBase> (*this, "unit"); }
const gi::property_proxy<Adw::LengthUnit, base::ClampScrollableBase> property_unit() const
{ return gi::property_proxy<Adw::LengthUnit, base::ClampScrollableBase> (*this, "unit"); }

}; // class

} // namespace base

} // namespace Adw

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<adw/clampscrollable_extra_def.hpp>)
#include <adw/clampscrollable_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<adw/clampscrollable_extra.hpp>)
#include <adw/clampscrollable_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Adw {

class ClampScrollable : public GI_ADW_CLAMPSCROLLABLE_BASE
{ typedef GI_ADW_CLAMPSCROLLABLE_BASE super_type; using super_type::super_type; };

} // namespace Adw

template<> struct declare_cpptype_of<::AdwClampScrollable>
{ typedef Adw::ClampScrollable type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Adw {

namespace impl {

namespace internal {


class ClampScrollableClassDef
{
typedef ClampScrollableClassDef self;
public:
typedef Adw::ClampScrollable instance_type;
typedef ::AdwClampScrollableClass class_type;


struct TypeInitData;

protected:
GI_INLINE_DECL ~ClampScrollableClassDef() = default;
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );


};

GI_CLASS_IMPL_BEGIN


class ClampScrollableClass: public detail::ClassTemplate<Adw::impl::internal::ClampScrollableClassDef, Gtk::impl::internal::WidgetClass, Gtk::impl::internal::OrientableIfaceClassImpl, Gtk::impl::internal::ScrollableInterfaceClassImpl>
{
friend class internal::ClampScrollableClassDef;
typedef ClampScrollableClass self;
typedef detail::ClassTemplate<Adw::impl::internal::ClampScrollableClassDef, Gtk::impl::internal::WidgetClass, Gtk::impl::internal::OrientableIfaceClassImpl, Gtk::impl::internal::ScrollableInterfaceClassImpl> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types
typedef Gtk::impl::internal::OrientableIfaceClassImpl GtkOrientableIface_type;
typedef Gtk::impl::internal::ScrollableInterfaceClassImpl GtkScrollableInterface_type;



};


struct ClampScrollableClassDef::TypeInitData
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

using ClampScrollableImpl = detail::ObjectImpl<ClampScrollable, internal::ClampScrollableClass>;

} // namespace impl

} // namespace Adw

} // namespace repository

} // namespace gi

#endif
