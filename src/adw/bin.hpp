// AUTO-GENERATED

#ifndef _GI_ADW_BIN_HPP_
#define _GI_ADW_BIN_HPP_


namespace gi {

namespace repository {

namespace Adw {


class Bin;

namespace base {


#define GI_ADW_BIN_BASE base::BinBase
class BinBase : public Gtk::Widget
{
typedef Gtk::Widget super_type;
public:
typedef ::AdwBin BaseObjectType;

BinBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return adw_bin_get_type(); } 

// GtkWidget* /*none*/ adw_bin_new ();
// ::AdwBin* /*none*/ adw_bin_new ();
static GI_INLINE_DECL Adw::Bin new_ () noexcept;

// GtkWidget* /*none,nullable*/ adw_bin_get_child (AdwBin* self /*none*/);
// ::GtkWidget* /*none,nullable*/ adw_bin_get_child (::AdwBin* self /*none*/);
GI_INLINE_DECL Gtk::Widget get_child () noexcept;

// void adw_bin_set_child (AdwBin* self /*none*/, GtkWidget* child /*none,nullable*/);
// void adw_bin_set_child (::AdwBin* self /*none*/, ::GtkWidget* child /*none,nullable*/);
GI_INLINE_DECL void set_child (Gtk::Widget child) noexcept;
GI_INLINE_DECL void set_child () noexcept;

gi::property_proxy<Gtk::Widget, base::BinBase> property_child()
{ return gi::property_proxy<Gtk::Widget, base::BinBase> (*this, "child"); }
const gi::property_proxy<Gtk::Widget, base::BinBase> property_child() const
{ return gi::property_proxy<Gtk::Widget, base::BinBase> (*this, "child"); }

}; // class

} // namespace base

} // namespace Adw

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<adw/bin_extra_def.hpp>)
#include <adw/bin_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<adw/bin_extra.hpp>)
#include <adw/bin_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Adw {

class Bin : public GI_ADW_BIN_BASE
{ typedef GI_ADW_BIN_BASE super_type; using super_type::super_type; };

} // namespace Adw

template<> struct declare_cpptype_of<::AdwBin>
{ typedef Adw::Bin type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Adw {

namespace impl {

namespace internal {


class BinClassDef
{
typedef BinClassDef self;
public:
typedef Adw::Bin instance_type;
typedef ::AdwBinClass class_type;


struct TypeInitData;

protected:
GI_INLINE_DECL ~BinClassDef() = default;
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );


};

GI_CLASS_IMPL_BEGIN


class BinClass: public detail::ClassTemplate<Adw::impl::internal::BinClassDef, Gtk::impl::internal::WidgetClass>
{
friend class internal::BinClassDef;
typedef BinClass self;
typedef detail::ClassTemplate<Adw::impl::internal::BinClassDef, Gtk::impl::internal::WidgetClass> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types



};


struct BinClassDef::TypeInitData
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

using BinImpl = detail::ObjectImpl<Bin, internal::BinClass>;

} // namespace impl

} // namespace Adw

} // namespace repository

} // namespace gi

#endif
