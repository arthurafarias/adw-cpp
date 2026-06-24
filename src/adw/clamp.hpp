// AUTO-GENERATED

#ifndef _GI_ADW_CLAMP_HPP_
#define _GI_ADW_CLAMP_HPP_


namespace gi {

namespace repository {

namespace Adw {


class Clamp;

namespace base {


#define GI_ADW_CLAMP_BASE base::ClampBase
class ClampBase : public Gtk::Widget
{
typedef Gtk::Widget super_type;
public:
typedef ::AdwClamp BaseObjectType;

ClampBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return adw_clamp_get_type(); } 

GI_INLINE_DECL Gtk::Orientable interface_ (gi::interface_tag<Gtk::Orientable>);

GI_INLINE_DECL operator Gtk::Orientable ();

// GtkWidget* /*none*/ adw_clamp_new ();
// ::AdwClamp* /*none*/ adw_clamp_new ();
static GI_INLINE_DECL Adw::Clamp new_ () noexcept;

// GtkWidget* /*none,nullable*/ adw_clamp_get_child (AdwClamp* self /*none*/);
// ::GtkWidget* /*none,nullable*/ adw_clamp_get_child (::AdwClamp* self /*none*/);
GI_INLINE_DECL Gtk::Widget get_child () noexcept;

// int adw_clamp_get_maximum_size (AdwClamp* self /*none*/);
// gint adw_clamp_get_maximum_size (::AdwClamp* self /*none*/);
GI_INLINE_DECL gint get_maximum_size () noexcept;

// int adw_clamp_get_tightening_threshold (AdwClamp* self /*none*/);
// gint adw_clamp_get_tightening_threshold (::AdwClamp* self /*none*/);
GI_INLINE_DECL gint get_tightening_threshold () noexcept;

// AdwLengthUnit adw_clamp_get_unit (AdwClamp* self /*none*/);
// ::AdwLengthUnit adw_clamp_get_unit (::AdwClamp* self /*none*/);
GI_INLINE_DECL Adw::LengthUnit get_unit () noexcept;

// void adw_clamp_set_child (AdwClamp* self /*none*/, GtkWidget* child /*none,nullable*/);
// void adw_clamp_set_child (::AdwClamp* self /*none*/, ::GtkWidget* child /*none,nullable*/);
GI_INLINE_DECL void set_child (Gtk::Widget child) noexcept;
GI_INLINE_DECL void set_child () noexcept;

// void adw_clamp_set_maximum_size (AdwClamp* self /*none*/, int maximum_size);
// void adw_clamp_set_maximum_size (::AdwClamp* self /*none*/, gint maximum_size);
GI_INLINE_DECL void set_maximum_size (gint maximum_size) noexcept;

// void adw_clamp_set_tightening_threshold (AdwClamp* self /*none*/, int tightening_threshold);
// void adw_clamp_set_tightening_threshold (::AdwClamp* self /*none*/, gint tightening_threshold);
GI_INLINE_DECL void set_tightening_threshold (gint tightening_threshold) noexcept;

// void adw_clamp_set_unit (AdwClamp* self /*none*/, AdwLengthUnit unit);
// void adw_clamp_set_unit (::AdwClamp* self /*none*/, ::AdwLengthUnit unit);
GI_INLINE_DECL void set_unit (Adw::LengthUnit unit) noexcept;

gi::property_proxy<Gtk::Widget, base::ClampBase> property_child()
{ return gi::property_proxy<Gtk::Widget, base::ClampBase> (*this, "child"); }
const gi::property_proxy<Gtk::Widget, base::ClampBase> property_child() const
{ return gi::property_proxy<Gtk::Widget, base::ClampBase> (*this, "child"); }

gi::property_proxy<gint, base::ClampBase> property_maximum_size()
{ return gi::property_proxy<gint, base::ClampBase> (*this, "maximum-size"); }
const gi::property_proxy<gint, base::ClampBase> property_maximum_size() const
{ return gi::property_proxy<gint, base::ClampBase> (*this, "maximum-size"); }

gi::property_proxy<gint, base::ClampBase> property_tightening_threshold()
{ return gi::property_proxy<gint, base::ClampBase> (*this, "tightening-threshold"); }
const gi::property_proxy<gint, base::ClampBase> property_tightening_threshold() const
{ return gi::property_proxy<gint, base::ClampBase> (*this, "tightening-threshold"); }

gi::property_proxy<Adw::LengthUnit, base::ClampBase> property_unit()
{ return gi::property_proxy<Adw::LengthUnit, base::ClampBase> (*this, "unit"); }
const gi::property_proxy<Adw::LengthUnit, base::ClampBase> property_unit() const
{ return gi::property_proxy<Adw::LengthUnit, base::ClampBase> (*this, "unit"); }

}; // class

} // namespace base

} // namespace Adw

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<adw/clamp_extra_def.hpp>)
#include <adw/clamp_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<adw/clamp_extra.hpp>)
#include <adw/clamp_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Adw {

class Clamp : public GI_ADW_CLAMP_BASE
{ typedef GI_ADW_CLAMP_BASE super_type; using super_type::super_type; };

} // namespace Adw

template<> struct declare_cpptype_of<::AdwClamp>
{ typedef Adw::Clamp type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Adw {

namespace impl {

namespace internal {


class ClampClassDef
{
typedef ClampClassDef self;
public:
typedef Adw::Clamp instance_type;
typedef ::AdwClampClass class_type;


struct TypeInitData;

protected:
GI_INLINE_DECL ~ClampClassDef() = default;
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );


};

GI_CLASS_IMPL_BEGIN


class ClampClass: public detail::ClassTemplate<Adw::impl::internal::ClampClassDef, Gtk::impl::internal::WidgetClass, Gtk::impl::internal::OrientableIfaceClassImpl>
{
friend class internal::ClampClassDef;
typedef ClampClass self;
typedef detail::ClassTemplate<Adw::impl::internal::ClampClassDef, Gtk::impl::internal::WidgetClass, Gtk::impl::internal::OrientableIfaceClassImpl> super;

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


struct ClampClassDef::TypeInitData
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

using ClampImpl = detail::ObjectImpl<Clamp, internal::ClampClass>;

} // namespace impl

} // namespace Adw

} // namespace repository

} // namespace gi

#endif
