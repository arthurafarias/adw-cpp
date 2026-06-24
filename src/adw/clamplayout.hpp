// AUTO-GENERATED

#ifndef _GI_ADW_CLAMPLAYOUT_HPP_
#define _GI_ADW_CLAMPLAYOUT_HPP_


namespace gi {

namespace repository {

namespace Adw {


class ClampLayout;

namespace base {


#define GI_ADW_CLAMPLAYOUT_BASE base::ClampLayoutBase
class ClampLayoutBase : public Gtk::LayoutManager
{
typedef Gtk::LayoutManager super_type;
public:
typedef ::AdwClampLayout BaseObjectType;

ClampLayoutBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return adw_clamp_layout_get_type(); } 

GI_INLINE_DECL Gtk::Orientable interface_ (gi::interface_tag<Gtk::Orientable>);

GI_INLINE_DECL operator Gtk::Orientable ();

// GtkLayoutManager* /*full*/ adw_clamp_layout_new ();
// ::AdwClampLayout* /*full*/ adw_clamp_layout_new ();
static GI_INLINE_DECL Adw::ClampLayout new_ () noexcept;

// int adw_clamp_layout_get_maximum_size (AdwClampLayout* self /*none*/);
// gint adw_clamp_layout_get_maximum_size (::AdwClampLayout* self /*none*/);
GI_INLINE_DECL gint get_maximum_size () noexcept;

// int adw_clamp_layout_get_tightening_threshold (AdwClampLayout* self /*none*/);
// gint adw_clamp_layout_get_tightening_threshold (::AdwClampLayout* self /*none*/);
GI_INLINE_DECL gint get_tightening_threshold () noexcept;

// AdwLengthUnit adw_clamp_layout_get_unit (AdwClampLayout* self /*none*/);
// ::AdwLengthUnit adw_clamp_layout_get_unit (::AdwClampLayout* self /*none*/);
GI_INLINE_DECL Adw::LengthUnit get_unit () noexcept;

// void adw_clamp_layout_set_maximum_size (AdwClampLayout* self /*none*/, int maximum_size);
// void adw_clamp_layout_set_maximum_size (::AdwClampLayout* self /*none*/, gint maximum_size);
GI_INLINE_DECL void set_maximum_size (gint maximum_size) noexcept;

// void adw_clamp_layout_set_tightening_threshold (AdwClampLayout* self /*none*/, int tightening_threshold);
// void adw_clamp_layout_set_tightening_threshold (::AdwClampLayout* self /*none*/, gint tightening_threshold);
GI_INLINE_DECL void set_tightening_threshold (gint tightening_threshold) noexcept;

// void adw_clamp_layout_set_unit (AdwClampLayout* self /*none*/, AdwLengthUnit unit);
// void adw_clamp_layout_set_unit (::AdwClampLayout* self /*none*/, ::AdwLengthUnit unit);
GI_INLINE_DECL void set_unit (Adw::LengthUnit unit) noexcept;

gi::property_proxy<gint, base::ClampLayoutBase> property_maximum_size()
{ return gi::property_proxy<gint, base::ClampLayoutBase> (*this, "maximum-size"); }
const gi::property_proxy<gint, base::ClampLayoutBase> property_maximum_size() const
{ return gi::property_proxy<gint, base::ClampLayoutBase> (*this, "maximum-size"); }

gi::property_proxy<gint, base::ClampLayoutBase> property_tightening_threshold()
{ return gi::property_proxy<gint, base::ClampLayoutBase> (*this, "tightening-threshold"); }
const gi::property_proxy<gint, base::ClampLayoutBase> property_tightening_threshold() const
{ return gi::property_proxy<gint, base::ClampLayoutBase> (*this, "tightening-threshold"); }

gi::property_proxy<Adw::LengthUnit, base::ClampLayoutBase> property_unit()
{ return gi::property_proxy<Adw::LengthUnit, base::ClampLayoutBase> (*this, "unit"); }
const gi::property_proxy<Adw::LengthUnit, base::ClampLayoutBase> property_unit() const
{ return gi::property_proxy<Adw::LengthUnit, base::ClampLayoutBase> (*this, "unit"); }

}; // class

} // namespace base

} // namespace Adw

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<adw/clamplayout_extra_def.hpp>)
#include <adw/clamplayout_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<adw/clamplayout_extra.hpp>)
#include <adw/clamplayout_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Adw {

class ClampLayout : public GI_ADW_CLAMPLAYOUT_BASE
{ typedef GI_ADW_CLAMPLAYOUT_BASE super_type; using super_type::super_type; };

} // namespace Adw

template<> struct declare_cpptype_of<::AdwClampLayout>
{ typedef Adw::ClampLayout type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Adw {

namespace impl {

namespace internal {


class ClampLayoutClassDef
{
typedef ClampLayoutClassDef self;
public:
typedef Adw::ClampLayout instance_type;
typedef ::AdwClampLayoutClass class_type;


struct TypeInitData;

protected:
GI_INLINE_DECL ~ClampLayoutClassDef() = default;
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );


};

GI_CLASS_IMPL_BEGIN


class ClampLayoutClass: public detail::ClassTemplate<Adw::impl::internal::ClampLayoutClassDef, Gtk::impl::internal::LayoutManagerClass, Gtk::impl::internal::OrientableIfaceClassImpl>
{
friend class internal::ClampLayoutClassDef;
typedef ClampLayoutClass self;
typedef detail::ClassTemplate<Adw::impl::internal::ClampLayoutClassDef, Gtk::impl::internal::LayoutManagerClass, Gtk::impl::internal::OrientableIfaceClassImpl> super;

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


struct ClampLayoutClassDef::TypeInitData
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

using ClampLayoutImpl = detail::ObjectImpl<ClampLayout, internal::ClampLayoutClass>;

} // namespace impl

} // namespace Adw

} // namespace repository

} // namespace gi

#endif
