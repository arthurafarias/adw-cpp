// AUTO-GENERATED

#ifndef _GI_ADW_VIEWSTACKPAGES_HPP_
#define _GI_ADW_VIEWSTACKPAGES_HPP_


namespace gi {

namespace repository {

namespace Adw {

class ViewStackPage;

class ViewStackPages;

namespace base {


#define GI_ADW_VIEWSTACKPAGES_BASE base::ViewStackPagesBase
class ViewStackPagesBase : public GObject::Object
{
typedef GObject::Object super_type;
public:
typedef ::AdwViewStackPages BaseObjectType;

ViewStackPagesBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return adw_view_stack_pages_get_type(); } 

GI_INLINE_DECL Gio::ListModel interface_ (gi::interface_tag<Gio::ListModel>);

GI_INLINE_DECL operator Gio::ListModel ();

GI_INLINE_DECL Gtk::SectionModel interface_ (gi::interface_tag<Gtk::SectionModel>);

GI_INLINE_DECL operator Gtk::SectionModel ();

GI_INLINE_DECL Gtk::SelectionModel interface_ (gi::interface_tag<Gtk::SelectionModel>);

GI_INLINE_DECL operator Gtk::SelectionModel ();

// AdwViewStackPage* /*none,nullable*/ adw_view_stack_pages_get_selected_page (AdwViewStackPages* self /*none*/);
// ::AdwViewStackPage* /*none,nullable*/ adw_view_stack_pages_get_selected_page (::AdwViewStackPages* self /*none*/);
GI_INLINE_DECL Adw::ViewStackPage get_selected_page () noexcept;

// void adw_view_stack_pages_set_selected_page (AdwViewStackPages* self /*none*/, AdwViewStackPage* page /*none*/);
// void adw_view_stack_pages_set_selected_page (::AdwViewStackPages* self /*none*/, ::AdwViewStackPage* page /*none*/);
GI_INLINE_DECL void set_selected_page (Adw::ViewStackPage page) noexcept;

gi::property_proxy<GType, base::ViewStackPagesBase> property_item_type()
{ return gi::property_proxy<GType, base::ViewStackPagesBase> (*this, "item-type"); }
const gi::property_proxy<GType, base::ViewStackPagesBase> property_item_type() const
{ return gi::property_proxy<GType, base::ViewStackPagesBase> (*this, "item-type"); }

gi::property_proxy<guint, base::ViewStackPagesBase> property_n_items()
{ return gi::property_proxy<guint, base::ViewStackPagesBase> (*this, "n-items"); }
const gi::property_proxy<guint, base::ViewStackPagesBase> property_n_items() const
{ return gi::property_proxy<guint, base::ViewStackPagesBase> (*this, "n-items"); }

gi::property_proxy<Adw::ViewStackPage, base::ViewStackPagesBase> property_selected_page()
{ return gi::property_proxy<Adw::ViewStackPage, base::ViewStackPagesBase> (*this, "selected-page"); }
const gi::property_proxy<Adw::ViewStackPage, base::ViewStackPagesBase> property_selected_page() const
{ return gi::property_proxy<Adw::ViewStackPage, base::ViewStackPagesBase> (*this, "selected-page"); }

}; // class

} // namespace base

} // namespace Adw

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<adw/viewstackpages_extra_def.hpp>)
#include <adw/viewstackpages_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<adw/viewstackpages_extra.hpp>)
#include <adw/viewstackpages_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Adw {

class ViewStackPages : public GI_ADW_VIEWSTACKPAGES_BASE
{ typedef GI_ADW_VIEWSTACKPAGES_BASE super_type; using super_type::super_type; };

} // namespace Adw

template<> struct declare_cpptype_of<::AdwViewStackPages>
{ typedef Adw::ViewStackPages type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Adw {

namespace impl {

namespace internal {


class ViewStackPagesClassDef
{
typedef ViewStackPagesClassDef self;
public:
typedef Adw::ViewStackPages instance_type;
typedef ::AdwViewStackPagesClass class_type;


struct TypeInitData;

protected:
GI_INLINE_DECL ~ViewStackPagesClassDef() = default;
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );


};

GI_CLASS_IMPL_BEGIN


class ViewStackPagesClass: public detail::ClassTemplate<Adw::impl::internal::ViewStackPagesClassDef, GObject::impl::internal::ObjectClass, Gio::impl::internal::ListModelInterfaceClassImpl, Gtk::impl::internal::SectionModelInterfaceClassImpl, Gtk::impl::internal::SelectionModelInterfaceClassImpl>
{
friend class internal::ViewStackPagesClassDef;
typedef ViewStackPagesClass self;
typedef detail::ClassTemplate<Adw::impl::internal::ViewStackPagesClassDef, GObject::impl::internal::ObjectClass, Gio::impl::internal::ListModelInterfaceClassImpl, Gtk::impl::internal::SectionModelInterfaceClassImpl, Gtk::impl::internal::SelectionModelInterfaceClassImpl> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types
typedef Gio::impl::internal::ListModelInterfaceClassImpl GListModelInterface_type;
typedef Gtk::impl::internal::SectionModelInterfaceClassImpl GtkSectionModelInterface_type;
typedef Gtk::impl::internal::SelectionModelInterfaceClassImpl GtkSelectionModelInterface_type;



};


struct ViewStackPagesClassDef::TypeInitData
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

using ViewStackPagesImpl = detail::ObjectImpl<ViewStackPages, internal::ViewStackPagesClass>;

} // namespace impl

} // namespace Adw

} // namespace repository

} // namespace gi

#endif
