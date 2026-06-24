// AUTO-GENERATED

#ifndef _GI_ADW_LAYOUT_HPP_
#define _GI_ADW_LAYOUT_HPP_


namespace gi {

namespace repository {

namespace Adw {


class Layout;

namespace base {


#define GI_ADW_LAYOUT_BASE base::LayoutBase
class LayoutBase : public GObject::Object
{
typedef GObject::Object super_type;
public:
typedef ::AdwLayout BaseObjectType;

LayoutBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return adw_layout_get_type(); } 

GI_INLINE_DECL Gtk::Buildable interface_ (gi::interface_tag<Gtk::Buildable>);

GI_INLINE_DECL operator Gtk::Buildable ();

// AdwLayout* /*full*/ adw_layout_new (GtkWidget* content /*none*/);
// ::AdwLayout* /*full*/ adw_layout_new (::GtkWidget* content /*none*/);
static GI_INLINE_DECL Adw::Layout new_ (Gtk::Widget content) noexcept;

// GtkWidget* /*none*/ adw_layout_get_content (AdwLayout* self /*none*/);
// ::GtkWidget* /*none*/ adw_layout_get_content (::AdwLayout* self /*none*/);
GI_INLINE_DECL Gtk::Widget get_content () noexcept;

// const char* /*none,nullable*/ adw_layout_get_name (AdwLayout* self /*none*/);
// const char* /*none,nullable*/ adw_layout_get_name (::AdwLayout* self /*none*/);
GI_INLINE_DECL gi::cstring_v get_name () noexcept;

// void adw_layout_set_name (AdwLayout* self /*none*/, const char* name /*none,nullable*/);
// void adw_layout_set_name (::AdwLayout* self /*none*/, const char* name /*none,nullable*/);
GI_INLINE_DECL void set_name (const gi::cstring_v name) noexcept;
GI_INLINE_DECL void set_name () noexcept;

gi::property_proxy<Gtk::Widget, base::LayoutBase> property_content()
{ return gi::property_proxy<Gtk::Widget, base::LayoutBase> (*this, "content"); }
const gi::property_proxy<Gtk::Widget, base::LayoutBase> property_content() const
{ return gi::property_proxy<Gtk::Widget, base::LayoutBase> (*this, "content"); }

gi::property_proxy<gi::cstring, base::LayoutBase> property_name()
{ return gi::property_proxy<gi::cstring, base::LayoutBase> (*this, "name"); }
const gi::property_proxy<gi::cstring, base::LayoutBase> property_name() const
{ return gi::property_proxy<gi::cstring, base::LayoutBase> (*this, "name"); }

}; // class

} // namespace base

} // namespace Adw

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<adw/layout_extra_def.hpp>)
#include <adw/layout_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<adw/layout_extra.hpp>)
#include <adw/layout_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Adw {

class Layout : public GI_ADW_LAYOUT_BASE
{ typedef GI_ADW_LAYOUT_BASE super_type; using super_type::super_type; };

} // namespace Adw

template<> struct declare_cpptype_of<::AdwLayout>
{ typedef Adw::Layout type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Adw {

namespace impl {

namespace internal {


class LayoutClassDef
{
typedef LayoutClassDef self;
public:
typedef Adw::Layout instance_type;
typedef ::AdwLayoutClass class_type;


struct TypeInitData;

protected:
GI_INLINE_DECL ~LayoutClassDef() = default;
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );


};

GI_CLASS_IMPL_BEGIN


class LayoutClass: public detail::ClassTemplate<Adw::impl::internal::LayoutClassDef, GObject::impl::internal::ObjectClass, Gtk::impl::internal::BuildableIfaceClassImpl>
{
friend class internal::LayoutClassDef;
typedef LayoutClass self;
typedef detail::ClassTemplate<Adw::impl::internal::LayoutClassDef, GObject::impl::internal::ObjectClass, Gtk::impl::internal::BuildableIfaceClassImpl> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types
typedef Gtk::impl::internal::BuildableIfaceClassImpl GtkBuildableIface_type;



};


struct LayoutClassDef::TypeInitData
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

using LayoutImpl = detail::ObjectImpl<Layout, internal::LayoutClass>;

} // namespace impl

} // namespace Adw

} // namespace repository

} // namespace gi

#endif
