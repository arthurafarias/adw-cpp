// AUTO-GENERATED

#ifndef _GI_ADW_SIDEBARSECTION_HPP_
#define _GI_ADW_SIDEBARSECTION_HPP_


namespace gi {

namespace repository {

namespace Adw {

class Sidebar;
class SidebarItem;

class SidebarSection;

namespace base {


#define GI_ADW_SIDEBARSECTION_BASE base::SidebarSectionBase
class SidebarSectionBase : public GObject::Object
{
typedef GObject::Object super_type;
public:
typedef ::AdwSidebarSection BaseObjectType;

SidebarSectionBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return adw_sidebar_section_get_type(); } 

GI_INLINE_DECL Gtk::Buildable interface_ (gi::interface_tag<Gtk::Buildable>);

GI_INLINE_DECL operator Gtk::Buildable ();

// AdwSidebarSection* /*full*/ adw_sidebar_section_new ();
// ::AdwSidebarSection* /*full*/ adw_sidebar_section_new ();
static GI_INLINE_DECL Adw::SidebarSection new_ () noexcept;

// void adw_sidebar_section_append (AdwSidebarSection* self /*none*/, AdwSidebarItem* item /*full*/);
// void adw_sidebar_section_append (::AdwSidebarSection* self /*none*/, ::AdwSidebarItem* item /*full*/);
GI_INLINE_DECL void append (Adw::SidebarItem item) noexcept;

// void adw_sidebar_section_bind_model (AdwSidebarSection* self /*none*/, GListModel* model /*none,nullable*/, AdwSidebarSectionCreateItemFunc create_item_func /*none,nullable*/, gpointer user_data, GDestroyNotify user_data_free_func /*none*/);
// void adw_sidebar_section_bind_model (::AdwSidebarSection* self /*none*/, ::GListModel* model /*none,nullable*/, Adw::SidebarSectionCreateItemFunc::cfunction_type create_item_func /*none,nullable*/, void* user_data, GLib::DestroyNotify::cfunction_type user_data_free_func /*none*/);
GI_INLINE_DECL void bind_model (Gio::ListModel model, Adw::SidebarSectionCreateItemFunc create_item_func) noexcept;
GI_INLINE_DECL void bind_model (Adw::SidebarSectionCreateItemFunc create_item_func) noexcept;

// AdwSidebarItem* /*none,nullable*/ adw_sidebar_section_get_item (AdwSidebarSection* self /*none*/, guint index);
// ::AdwSidebarItem* /*none,nullable*/ adw_sidebar_section_get_item (::AdwSidebarSection* self /*none*/, guint index);
GI_INLINE_DECL Adw::SidebarItem get_item (guint index) noexcept;

// GListModel* /*full*/ adw_sidebar_section_get_items (AdwSidebarSection* self /*none*/);
// ::GListModel* /*full*/ adw_sidebar_section_get_items (::AdwSidebarSection* self /*none*/);
GI_INLINE_DECL Gio::ListModel get_items () noexcept;

// GMenuModel* /*none,nullable*/ adw_sidebar_section_get_menu_model (AdwSidebarSection* self /*none*/);
// ::GMenuModel* /*none,nullable*/ adw_sidebar_section_get_menu_model (::AdwSidebarSection* self /*none*/);
GI_INLINE_DECL Gio::MenuModel get_menu_model () noexcept;

// AdwSidebar* /*none,nullable*/ adw_sidebar_section_get_sidebar (AdwSidebarSection* self /*none*/);
// ::AdwSidebar* /*none,nullable*/ adw_sidebar_section_get_sidebar (::AdwSidebarSection* self /*none*/);
GI_INLINE_DECL Adw::Sidebar get_sidebar () noexcept;

// const char* /*none,nullable*/ adw_sidebar_section_get_title (AdwSidebarSection* self /*none*/);
// const char* /*none,nullable*/ adw_sidebar_section_get_title (::AdwSidebarSection* self /*none*/);
GI_INLINE_DECL gi::cstring_v get_title () noexcept;

// void adw_sidebar_section_insert (AdwSidebarSection* self /*none*/, AdwSidebarItem* item /*full*/, int position);
// void adw_sidebar_section_insert (::AdwSidebarSection* self /*none*/, ::AdwSidebarItem* item /*full*/, gint position);
GI_INLINE_DECL void insert (Adw::SidebarItem item, gint position) noexcept;

// void adw_sidebar_section_prepend (AdwSidebarSection* self /*none*/, AdwSidebarItem* item /*full*/);
// void adw_sidebar_section_prepend (::AdwSidebarSection* self /*none*/, ::AdwSidebarItem* item /*full*/);
GI_INLINE_DECL void prepend (Adw::SidebarItem item) noexcept;

// void adw_sidebar_section_remove (AdwSidebarSection* self /*none*/, AdwSidebarItem* item /*none*/);
// void adw_sidebar_section_remove (::AdwSidebarSection* self /*none*/, ::AdwSidebarItem* item /*none*/);
GI_INLINE_DECL void remove (Adw::SidebarItem item) noexcept;

// void adw_sidebar_section_remove_all (AdwSidebarSection* self /*none*/);
// void adw_sidebar_section_remove_all (::AdwSidebarSection* self /*none*/);
GI_INLINE_DECL void remove_all () noexcept;

// void adw_sidebar_section_set_menu_model (AdwSidebarSection* self /*none*/, GMenuModel* menu_model /*none,nullable*/);
// void adw_sidebar_section_set_menu_model (::AdwSidebarSection* self /*none*/, ::GMenuModel* menu_model /*none,nullable*/);
GI_INLINE_DECL void set_menu_model (Gio::MenuModel menu_model) noexcept;
GI_INLINE_DECL void set_menu_model () noexcept;

// void adw_sidebar_section_set_title (AdwSidebarSection* self /*none*/, const char* title /*none,nullable*/);
// void adw_sidebar_section_set_title (::AdwSidebarSection* self /*none*/, const char* title /*none,nullable*/);
GI_INLINE_DECL void set_title (const gi::cstring_v title) noexcept;
GI_INLINE_DECL void set_title () noexcept;

gi::property_proxy<Gio::ListModel, base::SidebarSectionBase> property_items()
{ return gi::property_proxy<Gio::ListModel, base::SidebarSectionBase> (*this, "items"); }
const gi::property_proxy<Gio::ListModel, base::SidebarSectionBase> property_items() const
{ return gi::property_proxy<Gio::ListModel, base::SidebarSectionBase> (*this, "items"); }

gi::property_proxy<Gio::MenuModel, base::SidebarSectionBase> property_menu_model()
{ return gi::property_proxy<Gio::MenuModel, base::SidebarSectionBase> (*this, "menu-model"); }
const gi::property_proxy<Gio::MenuModel, base::SidebarSectionBase> property_menu_model() const
{ return gi::property_proxy<Gio::MenuModel, base::SidebarSectionBase> (*this, "menu-model"); }

gi::property_proxy<Adw::Sidebar, base::SidebarSectionBase> property_sidebar()
{ return gi::property_proxy<Adw::Sidebar, base::SidebarSectionBase> (*this, "sidebar"); }
const gi::property_proxy<Adw::Sidebar, base::SidebarSectionBase> property_sidebar() const
{ return gi::property_proxy<Adw::Sidebar, base::SidebarSectionBase> (*this, "sidebar"); }

gi::property_proxy<gi::cstring, base::SidebarSectionBase> property_title()
{ return gi::property_proxy<gi::cstring, base::SidebarSectionBase> (*this, "title"); }
const gi::property_proxy<gi::cstring, base::SidebarSectionBase> property_title() const
{ return gi::property_proxy<gi::cstring, base::SidebarSectionBase> (*this, "title"); }

}; // class

} // namespace base

} // namespace Adw

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<adw/sidebarsection_extra_def.hpp>)
#include <adw/sidebarsection_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<adw/sidebarsection_extra.hpp>)
#include <adw/sidebarsection_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Adw {

class SidebarSection : public GI_ADW_SIDEBARSECTION_BASE
{ typedef GI_ADW_SIDEBARSECTION_BASE super_type; using super_type::super_type; };

} // namespace Adw

template<> struct declare_cpptype_of<::AdwSidebarSection>
{ typedef Adw::SidebarSection type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Adw {

namespace impl {

namespace internal {


class SidebarSectionClassDef
{
typedef SidebarSectionClassDef self;
public:
typedef Adw::SidebarSection instance_type;
typedef ::AdwSidebarSectionClass class_type;


struct TypeInitData;

protected:
GI_INLINE_DECL ~SidebarSectionClassDef() = default;
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );


};

GI_CLASS_IMPL_BEGIN


class SidebarSectionClass: public detail::ClassTemplate<Adw::impl::internal::SidebarSectionClassDef, GObject::impl::internal::ObjectClass, Gtk::impl::internal::BuildableIfaceClassImpl>
{
friend class internal::SidebarSectionClassDef;
typedef SidebarSectionClass self;
typedef detail::ClassTemplate<Adw::impl::internal::SidebarSectionClassDef, GObject::impl::internal::ObjectClass, Gtk::impl::internal::BuildableIfaceClassImpl> super;

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


struct SidebarSectionClassDef::TypeInitData
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

using SidebarSectionImpl = detail::ObjectImpl<SidebarSection, internal::SidebarSectionClass>;

} // namespace impl

} // namespace Adw

} // namespace repository

} // namespace gi

#endif
