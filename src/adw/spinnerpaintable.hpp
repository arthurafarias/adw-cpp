// AUTO-GENERATED

#ifndef _GI_ADW_SPINNERPAINTABLE_HPP_
#define _GI_ADW_SPINNERPAINTABLE_HPP_


namespace gi {

namespace repository {

namespace Adw {


class SpinnerPaintable;

namespace base {


#define GI_ADW_SPINNERPAINTABLE_BASE base::SpinnerPaintableBase
class SpinnerPaintableBase : public GObject::Object
{
typedef GObject::Object super_type;
public:
typedef ::AdwSpinnerPaintable BaseObjectType;

SpinnerPaintableBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return adw_spinner_paintable_get_type(); } 

GI_INLINE_DECL Gdk::Paintable interface_ (gi::interface_tag<Gdk::Paintable>);

GI_INLINE_DECL operator Gdk::Paintable ();

GI_INLINE_DECL Gtk::SymbolicPaintable interface_ (gi::interface_tag<Gtk::SymbolicPaintable>);

GI_INLINE_DECL operator Gtk::SymbolicPaintable ();

// AdwSpinnerPaintable* /*full*/ adw_spinner_paintable_new (GtkWidget* widget /*none,nullable*/);
// ::AdwSpinnerPaintable* /*full*/ adw_spinner_paintable_new (::GtkWidget* widget /*none,nullable*/);
static GI_INLINE_DECL Adw::SpinnerPaintable new_ (Gtk::Widget widget) noexcept;
static GI_INLINE_DECL Adw::SpinnerPaintable new_ () noexcept;

// GtkWidget* /*none,nullable*/ adw_spinner_paintable_get_widget (AdwSpinnerPaintable* self /*none*/);
// ::GtkWidget* /*none,nullable*/ adw_spinner_paintable_get_widget (::AdwSpinnerPaintable* self /*none*/);
GI_INLINE_DECL Gtk::Widget get_widget () noexcept;

// void adw_spinner_paintable_set_widget (AdwSpinnerPaintable* self /*none*/, GtkWidget* widget /*none,nullable*/);
// void adw_spinner_paintable_set_widget (::AdwSpinnerPaintable* self /*none*/, ::GtkWidget* widget /*none,nullable*/);
GI_INLINE_DECL void set_widget (Gtk::Widget widget) noexcept;
GI_INLINE_DECL void set_widget () noexcept;

gi::property_proxy<Gtk::Widget, base::SpinnerPaintableBase> property_widget()
{ return gi::property_proxy<Gtk::Widget, base::SpinnerPaintableBase> (*this, "widget"); }
const gi::property_proxy<Gtk::Widget, base::SpinnerPaintableBase> property_widget() const
{ return gi::property_proxy<Gtk::Widget, base::SpinnerPaintableBase> (*this, "widget"); }

}; // class

} // namespace base

} // namespace Adw

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<adw/spinnerpaintable_extra_def.hpp>)
#include <adw/spinnerpaintable_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<adw/spinnerpaintable_extra.hpp>)
#include <adw/spinnerpaintable_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Adw {

class SpinnerPaintable : public GI_ADW_SPINNERPAINTABLE_BASE
{ typedef GI_ADW_SPINNERPAINTABLE_BASE super_type; using super_type::super_type; };

} // namespace Adw

template<> struct declare_cpptype_of<::AdwSpinnerPaintable>
{ typedef Adw::SpinnerPaintable type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Adw {

namespace impl {

namespace internal {


class SpinnerPaintableClassDef
{
typedef SpinnerPaintableClassDef self;
public:
typedef Adw::SpinnerPaintable instance_type;
typedef ::AdwSpinnerPaintableClass class_type;


struct TypeInitData;

protected:
GI_INLINE_DECL ~SpinnerPaintableClassDef() = default;
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );


};

GI_CLASS_IMPL_BEGIN


class SpinnerPaintableClass: public detail::ClassTemplate<Adw::impl::internal::SpinnerPaintableClassDef, GObject::impl::internal::ObjectClass, Gdk::impl::internal::PaintableInterfaceClassImpl, Gtk::impl::internal::SymbolicPaintableInterfaceClassImpl>
{
friend class internal::SpinnerPaintableClassDef;
typedef SpinnerPaintableClass self;
typedef detail::ClassTemplate<Adw::impl::internal::SpinnerPaintableClassDef, GObject::impl::internal::ObjectClass, Gdk::impl::internal::PaintableInterfaceClassImpl, Gtk::impl::internal::SymbolicPaintableInterfaceClassImpl> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types
typedef Gdk::impl::internal::PaintableInterfaceClassImpl GdkPaintableInterface_type;
typedef Gtk::impl::internal::SymbolicPaintableInterfaceClassImpl GtkSymbolicPaintableInterface_type;



};


struct SpinnerPaintableClassDef::TypeInitData
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

using SpinnerPaintableImpl = detail::ObjectImpl<SpinnerPaintable, internal::SpinnerPaintableClass>;

} // namespace impl

} // namespace Adw

} // namespace repository

} // namespace gi

#endif
