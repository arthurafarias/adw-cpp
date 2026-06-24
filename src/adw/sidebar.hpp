// AUTO-GENERATED

#ifndef _GI_ADW_SIDEBAR_HPP_
#define _GI_ADW_SIDEBAR_HPP_


namespace gi {

namespace repository {

namespace Adw {

class SidebarItem;
class SidebarSection;

class Sidebar;

namespace base {


#define GI_ADW_SIDEBAR_BASE base::SidebarBase
class SidebarBase : public Gtk::Widget
{
typedef Gtk::Widget super_type;
public:
typedef ::AdwSidebar BaseObjectType;

SidebarBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return adw_sidebar_get_type(); } 

// GtkWidget* /*none*/ adw_sidebar_new ();
// ::AdwSidebar* /*none*/ adw_sidebar_new ();
static GI_INLINE_DECL Adw::Sidebar new_ () noexcept;

// void adw_sidebar_append (AdwSidebar* self /*none*/, AdwSidebarSection* section /*full*/);
// void adw_sidebar_append (::AdwSidebar* self /*none*/, ::AdwSidebarSection* section /*full*/);
GI_INLINE_DECL void append (Adw::SidebarSection section) noexcept;

// gboolean adw_sidebar_get_drop_preload (AdwSidebar* self /*none*/);
// gboolean adw_sidebar_get_drop_preload (::AdwSidebar* self /*none*/);
GI_INLINE_DECL bool get_drop_preload () noexcept;

// GtkFilter* /*none,nullable*/ adw_sidebar_get_filter (AdwSidebar* self /*none*/);
// ::GtkFilter* /*none,nullable*/ adw_sidebar_get_filter (::AdwSidebar* self /*none*/);
GI_INLINE_DECL Gtk::Filter get_filter () noexcept;

// AdwSidebarItem* /*none,nullable*/ adw_sidebar_get_item (AdwSidebar* self /*none*/, guint index);
// ::AdwSidebarItem* /*none,nullable*/ adw_sidebar_get_item (::AdwSidebar* self /*none*/, guint index);
GI_INLINE_DECL Adw::SidebarItem get_item (guint index) noexcept;

// GtkSelectionModel* /*full*/ adw_sidebar_get_items (AdwSidebar* self /*none*/);
// ::GtkSelectionModel* /*full*/ adw_sidebar_get_items (::AdwSidebar* self /*none*/);
GI_INLINE_DECL Gtk::SelectionModel get_items () noexcept;

// GMenuModel* /*none,nullable*/ adw_sidebar_get_menu_model (AdwSidebar* self /*none*/);
// ::GMenuModel* /*none,nullable*/ adw_sidebar_get_menu_model (::AdwSidebar* self /*none*/);
GI_INLINE_DECL Gio::MenuModel get_menu_model () noexcept;

// AdwSidebarMode adw_sidebar_get_mode (AdwSidebar* self /*none*/);
// ::AdwSidebarMode adw_sidebar_get_mode (::AdwSidebar* self /*none*/);
GI_INLINE_DECL Adw::SidebarMode get_mode () noexcept;

// GtkWidget* /*none,nullable*/ adw_sidebar_get_placeholder (AdwSidebar* self /*none*/);
// ::GtkWidget* /*none,nullable*/ adw_sidebar_get_placeholder (::AdwSidebar* self /*none*/);
GI_INLINE_DECL Gtk::Widget get_placeholder () noexcept;

// AdwSidebarSection* /*none,nullable*/ adw_sidebar_get_section (AdwSidebar* self /*none*/, guint index);
// ::AdwSidebarSection* /*none,nullable*/ adw_sidebar_get_section (::AdwSidebar* self /*none*/, guint index);
GI_INLINE_DECL Adw::SidebarSection get_section (guint index) noexcept;

// GListModel* /*full*/ adw_sidebar_get_sections (AdwSidebar* self /*none*/);
// ::GListModel* /*full*/ adw_sidebar_get_sections (::AdwSidebar* self /*none*/);
GI_INLINE_DECL Gio::ListModel get_sections () noexcept;

// guint adw_sidebar_get_selected (AdwSidebar* self /*none*/);
// guint adw_sidebar_get_selected (::AdwSidebar* self /*none*/);
GI_INLINE_DECL guint get_selected () noexcept;

// AdwSidebarItem* /*none,nullable*/ adw_sidebar_get_selected_item (AdwSidebar* self /*none*/);
// ::AdwSidebarItem* /*none,nullable*/ adw_sidebar_get_selected_item (::AdwSidebar* self /*none*/);
GI_INLINE_DECL Adw::SidebarItem get_selected_item () noexcept;

// void adw_sidebar_insert (AdwSidebar* self /*none*/, AdwSidebarSection* section /*full*/, int position);
// void adw_sidebar_insert (::AdwSidebar* self /*none*/, ::AdwSidebarSection* section /*full*/, gint position);
GI_INLINE_DECL void insert (Adw::SidebarSection section, gint position) noexcept;

// void adw_sidebar_prepend (AdwSidebar* self /*none*/, AdwSidebarSection* section /*full*/);
// void adw_sidebar_prepend (::AdwSidebar* self /*none*/, ::AdwSidebarSection* section /*full*/);
GI_INLINE_DECL void prepend (Adw::SidebarSection section) noexcept;

// void adw_sidebar_remove (AdwSidebar* self /*none*/, AdwSidebarSection* section /*none*/);
// void adw_sidebar_remove (::AdwSidebar* self /*none*/, ::AdwSidebarSection* section /*none*/);
GI_INLINE_DECL void remove (Adw::SidebarSection section) noexcept;

// void adw_sidebar_remove_all (AdwSidebar* self /*none*/);
// void adw_sidebar_remove_all (::AdwSidebar* self /*none*/);
GI_INLINE_DECL void remove_all () noexcept;

// void adw_sidebar_set_drop_preload (AdwSidebar* self /*none*/, gboolean preload);
// void adw_sidebar_set_drop_preload (::AdwSidebar* self /*none*/, gboolean preload);
GI_INLINE_DECL void set_drop_preload (gboolean preload) noexcept;

// void adw_sidebar_set_filter (AdwSidebar* self /*none*/, GtkFilter* filter /*none,nullable*/);
// void adw_sidebar_set_filter (::AdwSidebar* self /*none*/, ::GtkFilter* filter /*none,nullable*/);
GI_INLINE_DECL void set_filter (Gtk::Filter filter) noexcept;
GI_INLINE_DECL void set_filter () noexcept;

// void adw_sidebar_set_menu_model (AdwSidebar* self /*none*/, GMenuModel* menu_model /*none,nullable*/);
// void adw_sidebar_set_menu_model (::AdwSidebar* self /*none*/, ::GMenuModel* menu_model /*none,nullable*/);
GI_INLINE_DECL void set_menu_model (Gio::MenuModel menu_model) noexcept;
GI_INLINE_DECL void set_menu_model () noexcept;

// void adw_sidebar_set_mode (AdwSidebar* self /*none*/, AdwSidebarMode mode);
// void adw_sidebar_set_mode (::AdwSidebar* self /*none*/, ::AdwSidebarMode mode);
GI_INLINE_DECL void set_mode (Adw::SidebarMode mode) noexcept;

// void adw_sidebar_set_placeholder (AdwSidebar* self /*none*/, GtkWidget* placeholder /*none,nullable*/);
// void adw_sidebar_set_placeholder (::AdwSidebar* self /*none*/, ::GtkWidget* placeholder /*none,nullable*/);
GI_INLINE_DECL void set_placeholder (Gtk::Widget placeholder) noexcept;
GI_INLINE_DECL void set_placeholder () noexcept;

// void adw_sidebar_set_selected (AdwSidebar* self /*none*/, guint selected);
// void adw_sidebar_set_selected (::AdwSidebar* self /*none*/, guint selected);
GI_INLINE_DECL void set_selected (guint selected) noexcept;

// void adw_sidebar_setup_drop_target (AdwSidebar* self /*none*/, GdkDragAction actions, GType* types /*none,nullable*/, gsize n_types);
// void adw_sidebar_setup_drop_target (::AdwSidebar* self /*none*/, ::GdkDragAction actions, GType* types /*none,nullable*/, gsize n_types);
GI_INLINE_DECL void setup_drop_target (Gdk::DragAction actions, const GType * types, gsize n_types) noexcept;

gi::property_proxy<bool, base::SidebarBase> property_drop_preload()
{ return gi::property_proxy<bool, base::SidebarBase> (*this, "drop-preload"); }
const gi::property_proxy<bool, base::SidebarBase> property_drop_preload() const
{ return gi::property_proxy<bool, base::SidebarBase> (*this, "drop-preload"); }

gi::property_proxy<Gtk::Filter, base::SidebarBase> property_filter()
{ return gi::property_proxy<Gtk::Filter, base::SidebarBase> (*this, "filter"); }
const gi::property_proxy<Gtk::Filter, base::SidebarBase> property_filter() const
{ return gi::property_proxy<Gtk::Filter, base::SidebarBase> (*this, "filter"); }

gi::property_proxy<Gtk::SelectionModel, base::SidebarBase> property_items()
{ return gi::property_proxy<Gtk::SelectionModel, base::SidebarBase> (*this, "items"); }
const gi::property_proxy<Gtk::SelectionModel, base::SidebarBase> property_items() const
{ return gi::property_proxy<Gtk::SelectionModel, base::SidebarBase> (*this, "items"); }

gi::property_proxy<Gio::MenuModel, base::SidebarBase> property_menu_model()
{ return gi::property_proxy<Gio::MenuModel, base::SidebarBase> (*this, "menu-model"); }
const gi::property_proxy<Gio::MenuModel, base::SidebarBase> property_menu_model() const
{ return gi::property_proxy<Gio::MenuModel, base::SidebarBase> (*this, "menu-model"); }

gi::property_proxy<Adw::SidebarMode, base::SidebarBase> property_mode()
{ return gi::property_proxy<Adw::SidebarMode, base::SidebarBase> (*this, "mode"); }
const gi::property_proxy<Adw::SidebarMode, base::SidebarBase> property_mode() const
{ return gi::property_proxy<Adw::SidebarMode, base::SidebarBase> (*this, "mode"); }

gi::property_proxy<Gtk::Widget, base::SidebarBase> property_placeholder()
{ return gi::property_proxy<Gtk::Widget, base::SidebarBase> (*this, "placeholder"); }
const gi::property_proxy<Gtk::Widget, base::SidebarBase> property_placeholder() const
{ return gi::property_proxy<Gtk::Widget, base::SidebarBase> (*this, "placeholder"); }

gi::property_proxy<Gio::ListModel, base::SidebarBase> property_sections()
{ return gi::property_proxy<Gio::ListModel, base::SidebarBase> (*this, "sections"); }
const gi::property_proxy<Gio::ListModel, base::SidebarBase> property_sections() const
{ return gi::property_proxy<Gio::ListModel, base::SidebarBase> (*this, "sections"); }

gi::property_proxy<guint, base::SidebarBase> property_selected()
{ return gi::property_proxy<guint, base::SidebarBase> (*this, "selected"); }
const gi::property_proxy<guint, base::SidebarBase> property_selected() const
{ return gi::property_proxy<guint, base::SidebarBase> (*this, "selected"); }

gi::property_proxy<Adw::SidebarItem, base::SidebarBase> property_selected_item()
{ return gi::property_proxy<Adw::SidebarItem, base::SidebarBase> (*this, "selected-item"); }
const gi::property_proxy<Adw::SidebarItem, base::SidebarBase> property_selected_item() const
{ return gi::property_proxy<Adw::SidebarItem, base::SidebarBase> (*this, "selected-item"); }

// (signal) void activated (guint index);
// (signal) void activated (guint index);
gi::signal_proxy<void(Adw::Sidebar, guint index)> signal_activated()
{ return gi::signal_proxy<void(Adw::Sidebar, guint index)> (*this, "activated"); }

// (signal) gboolean drop (guint index,  value /*none*/,  preferred_action);
// (signal) gboolean drop (guint index, ::GValue* value /*none*/, ::GdkDragAction preferred_action);
gi::signal_proxy<bool(Adw::Sidebar, guint index, GObject::Value_Ref value, Gdk::DragAction preferred_action)> signal_drop()
{ return gi::signal_proxy<bool(Adw::Sidebar, guint index, GObject::Value_Ref value, Gdk::DragAction preferred_action)> (*this, "drop"); }

// (signal)  drop-enter (guint index);
// (signal) ::GdkDragAction drop-enter (guint index);
gi::signal_proxy<Gdk::DragAction(Adw::Sidebar, guint index)> signal_drop_enter()
{ return gi::signal_proxy<Gdk::DragAction(Adw::Sidebar, guint index)> (*this, "drop-enter"); }

// (signal)  drop-value-loaded (guint index,  value /*none*/);
// (signal) ::GdkDragAction drop-value-loaded (guint index, ::GValue* value /*none*/);
gi::signal_proxy<Gdk::DragAction(Adw::Sidebar, guint index, GObject::Value_Ref value)> signal_drop_value_loaded()
{ return gi::signal_proxy<Gdk::DragAction(Adw::Sidebar, guint index, GObject::Value_Ref value)> (*this, "drop-value-loaded"); }

// (signal) void setup-menu ( item /*none,nullable*/);
// (signal) void setup-menu (::AdwSidebarItem* item /*none,nullable*/);
gi::signal_proxy<void(Adw::Sidebar, Adw::SidebarItem item)> signal_setup_menu()
{ return gi::signal_proxy<void(Adw::Sidebar, Adw::SidebarItem item)> (*this, "setup-menu"); }

}; // class

} // namespace base

} // namespace Adw

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<adw/sidebar_extra_def.hpp>)
#include <adw/sidebar_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<adw/sidebar_extra.hpp>)
#include <adw/sidebar_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Adw {

class Sidebar : public GI_ADW_SIDEBAR_BASE
{ typedef GI_ADW_SIDEBAR_BASE super_type; using super_type::super_type; };

} // namespace Adw

template<> struct declare_cpptype_of<::AdwSidebar>
{ typedef Adw::Sidebar type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Adw {

namespace impl {

namespace internal {


class SidebarClassDef
{
typedef SidebarClassDef self;
public:
typedef Adw::Sidebar instance_type;
typedef ::AdwSidebarClass class_type;


struct TypeInitData;

protected:
GI_INLINE_DECL ~SidebarClassDef() = default;
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );


};

GI_CLASS_IMPL_BEGIN


class SidebarClass: public detail::ClassTemplate<Adw::impl::internal::SidebarClassDef, Gtk::impl::internal::WidgetClass>
{
friend class internal::SidebarClassDef;
typedef SidebarClass self;
typedef detail::ClassTemplate<Adw::impl::internal::SidebarClassDef, Gtk::impl::internal::WidgetClass> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types



};


struct SidebarClassDef::TypeInitData
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

using SidebarImpl = detail::ObjectImpl<Sidebar, internal::SidebarClass>;

} // namespace impl

} // namespace Adw

} // namespace repository

} // namespace gi

#endif
