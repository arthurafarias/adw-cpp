// AUTO-GENERATED

#ifndef _GI_ADW_TABOVERVIEW_HPP_
#define _GI_ADW_TABOVERVIEW_HPP_


namespace gi {

namespace repository {

namespace Adw {

class TabPage;
class TabView;

class TabOverview;

namespace base {


#define GI_ADW_TABOVERVIEW_BASE base::TabOverviewBase
class TabOverviewBase : public Gtk::Widget
{
typedef Gtk::Widget super_type;
public:
typedef ::AdwTabOverview BaseObjectType;

TabOverviewBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return adw_tab_overview_get_type(); } 

// GtkWidget* /*none*/ adw_tab_overview_new ();
// ::AdwTabOverview* /*none*/ adw_tab_overview_new ();
static GI_INLINE_DECL Adw::TabOverview new_ () noexcept;

// GtkWidget* /*none,nullable*/ adw_tab_overview_get_child (AdwTabOverview* self /*none*/);
// ::GtkWidget* /*none,nullable*/ adw_tab_overview_get_child (::AdwTabOverview* self /*none*/);
GI_INLINE_DECL Gtk::Widget get_child () noexcept;

// gboolean adw_tab_overview_get_enable_new_tab (AdwTabOverview* self /*none*/);
// gboolean adw_tab_overview_get_enable_new_tab (::AdwTabOverview* self /*none*/);
GI_INLINE_DECL bool get_enable_new_tab () noexcept;

// gboolean adw_tab_overview_get_enable_search (AdwTabOverview* self /*none*/);
// gboolean adw_tab_overview_get_enable_search (::AdwTabOverview* self /*none*/);
GI_INLINE_DECL bool get_enable_search () noexcept;

// GdkDragAction adw_tab_overview_get_extra_drag_preferred_action (AdwTabOverview* self /*none*/);
// ::GdkDragAction adw_tab_overview_get_extra_drag_preferred_action (::AdwTabOverview* self /*none*/);
GI_INLINE_DECL Gdk::DragAction get_extra_drag_preferred_action () noexcept;

// gboolean adw_tab_overview_get_extra_drag_preload (AdwTabOverview* self /*none*/);
// gboolean adw_tab_overview_get_extra_drag_preload (::AdwTabOverview* self /*none*/);
GI_INLINE_DECL bool get_extra_drag_preload () noexcept;

// gboolean adw_tab_overview_get_inverted (AdwTabOverview* self /*none*/);
// gboolean adw_tab_overview_get_inverted (::AdwTabOverview* self /*none*/);
GI_INLINE_DECL bool get_inverted () noexcept;

// gboolean adw_tab_overview_get_open (AdwTabOverview* self /*none*/);
// gboolean adw_tab_overview_get_open (::AdwTabOverview* self /*none*/);
GI_INLINE_DECL bool get_open () noexcept;

// gboolean adw_tab_overview_get_search_active (AdwTabOverview* self /*none*/);
// gboolean adw_tab_overview_get_search_active (::AdwTabOverview* self /*none*/);
GI_INLINE_DECL bool get_search_active () noexcept;

// GMenuModel* /*none,nullable*/ adw_tab_overview_get_secondary_menu (AdwTabOverview* self /*none*/);
// ::GMenuModel* /*none,nullable*/ adw_tab_overview_get_secondary_menu (::AdwTabOverview* self /*none*/);
GI_INLINE_DECL Gio::MenuModel get_secondary_menu () noexcept;

// gboolean adw_tab_overview_get_show_end_title_buttons (AdwTabOverview* self /*none*/);
// gboolean adw_tab_overview_get_show_end_title_buttons (::AdwTabOverview* self /*none*/);
GI_INLINE_DECL bool get_show_end_title_buttons () noexcept;

// gboolean adw_tab_overview_get_show_start_title_buttons (AdwTabOverview* self /*none*/);
// gboolean adw_tab_overview_get_show_start_title_buttons (::AdwTabOverview* self /*none*/);
GI_INLINE_DECL bool get_show_start_title_buttons () noexcept;

// AdwTabView* /*none,nullable*/ adw_tab_overview_get_view (AdwTabOverview* self /*none*/);
// ::AdwTabView* /*none,nullable*/ adw_tab_overview_get_view (::AdwTabOverview* self /*none*/);
GI_INLINE_DECL Adw::TabView get_view () noexcept;

// void adw_tab_overview_set_child (AdwTabOverview* self /*none*/, GtkWidget* child /*none,nullable*/);
// void adw_tab_overview_set_child (::AdwTabOverview* self /*none*/, ::GtkWidget* child /*none,nullable*/);
GI_INLINE_DECL void set_child (Gtk::Widget child) noexcept;
GI_INLINE_DECL void set_child () noexcept;

// void adw_tab_overview_set_enable_new_tab (AdwTabOverview* self /*none*/, gboolean enable_new_tab);
// void adw_tab_overview_set_enable_new_tab (::AdwTabOverview* self /*none*/, gboolean enable_new_tab);
GI_INLINE_DECL void set_enable_new_tab (gboolean enable_new_tab) noexcept;

// void adw_tab_overview_set_enable_search (AdwTabOverview* self /*none*/, gboolean enable_search);
// void adw_tab_overview_set_enable_search (::AdwTabOverview* self /*none*/, gboolean enable_search);
GI_INLINE_DECL void set_enable_search (gboolean enable_search) noexcept;

// void adw_tab_overview_set_extra_drag_preload (AdwTabOverview* self /*none*/, gboolean preload);
// void adw_tab_overview_set_extra_drag_preload (::AdwTabOverview* self /*none*/, gboolean preload);
GI_INLINE_DECL void set_extra_drag_preload (gboolean preload) noexcept;

// void adw_tab_overview_set_inverted (AdwTabOverview* self /*none*/, gboolean inverted);
// void adw_tab_overview_set_inverted (::AdwTabOverview* self /*none*/, gboolean inverted);
GI_INLINE_DECL void set_inverted (gboolean inverted) noexcept;

// void adw_tab_overview_set_open (AdwTabOverview* self /*none*/, gboolean open);
// void adw_tab_overview_set_open (::AdwTabOverview* self /*none*/, gboolean open);
GI_INLINE_DECL void set_open (gboolean open) noexcept;

// void adw_tab_overview_set_secondary_menu (AdwTabOverview* self /*none*/, GMenuModel* secondary_menu /*none,nullable*/);
// void adw_tab_overview_set_secondary_menu (::AdwTabOverview* self /*none*/, ::GMenuModel* secondary_menu /*none,nullable*/);
GI_INLINE_DECL void set_secondary_menu (Gio::MenuModel secondary_menu) noexcept;
GI_INLINE_DECL void set_secondary_menu () noexcept;

// void adw_tab_overview_set_show_end_title_buttons (AdwTabOverview* self /*none*/, gboolean show_end_title_buttons);
// void adw_tab_overview_set_show_end_title_buttons (::AdwTabOverview* self /*none*/, gboolean show_end_title_buttons);
GI_INLINE_DECL void set_show_end_title_buttons (gboolean show_end_title_buttons) noexcept;

// void adw_tab_overview_set_show_start_title_buttons (AdwTabOverview* self /*none*/, gboolean show_start_title_buttons);
// void adw_tab_overview_set_show_start_title_buttons (::AdwTabOverview* self /*none*/, gboolean show_start_title_buttons);
GI_INLINE_DECL void set_show_start_title_buttons (gboolean show_start_title_buttons) noexcept;

// void adw_tab_overview_set_view (AdwTabOverview* self /*none*/, AdwTabView* view /*none,nullable*/);
// void adw_tab_overview_set_view (::AdwTabOverview* self /*none*/, ::AdwTabView* view /*none,nullable*/);
GI_INLINE_DECL void set_view (Adw::TabView view) noexcept;
GI_INLINE_DECL void set_view () noexcept;

// void adw_tab_overview_setup_extra_drop_target (AdwTabOverview* self /*none*/, GdkDragAction actions, GType* types /*none,nullable*/, gsize n_types);
// void adw_tab_overview_setup_extra_drop_target (::AdwTabOverview* self /*none*/, ::GdkDragAction actions, GType* types /*none,nullable*/, gsize n_types);
GI_INLINE_DECL void setup_extra_drop_target (Gdk::DragAction actions, const GType * types, gsize n_types) noexcept;

gi::property_proxy<Gtk::Widget, base::TabOverviewBase> property_child()
{ return gi::property_proxy<Gtk::Widget, base::TabOverviewBase> (*this, "child"); }
const gi::property_proxy<Gtk::Widget, base::TabOverviewBase> property_child() const
{ return gi::property_proxy<Gtk::Widget, base::TabOverviewBase> (*this, "child"); }

gi::property_proxy<bool, base::TabOverviewBase> property_enable_new_tab()
{ return gi::property_proxy<bool, base::TabOverviewBase> (*this, "enable-new-tab"); }
const gi::property_proxy<bool, base::TabOverviewBase> property_enable_new_tab() const
{ return gi::property_proxy<bool, base::TabOverviewBase> (*this, "enable-new-tab"); }

gi::property_proxy<bool, base::TabOverviewBase> property_enable_search()
{ return gi::property_proxy<bool, base::TabOverviewBase> (*this, "enable-search"); }
const gi::property_proxy<bool, base::TabOverviewBase> property_enable_search() const
{ return gi::property_proxy<bool, base::TabOverviewBase> (*this, "enable-search"); }

gi::property_proxy<Gdk::DragAction, base::TabOverviewBase> property_extra_drag_preferred_action()
{ return gi::property_proxy<Gdk::DragAction, base::TabOverviewBase> (*this, "extra-drag-preferred-action"); }
const gi::property_proxy<Gdk::DragAction, base::TabOverviewBase> property_extra_drag_preferred_action() const
{ return gi::property_proxy<Gdk::DragAction, base::TabOverviewBase> (*this, "extra-drag-preferred-action"); }

gi::property_proxy<bool, base::TabOverviewBase> property_extra_drag_preload()
{ return gi::property_proxy<bool, base::TabOverviewBase> (*this, "extra-drag-preload"); }
const gi::property_proxy<bool, base::TabOverviewBase> property_extra_drag_preload() const
{ return gi::property_proxy<bool, base::TabOverviewBase> (*this, "extra-drag-preload"); }

gi::property_proxy<bool, base::TabOverviewBase> property_inverted()
{ return gi::property_proxy<bool, base::TabOverviewBase> (*this, "inverted"); }
const gi::property_proxy<bool, base::TabOverviewBase> property_inverted() const
{ return gi::property_proxy<bool, base::TabOverviewBase> (*this, "inverted"); }

gi::property_proxy<bool, base::TabOverviewBase> property_open()
{ return gi::property_proxy<bool, base::TabOverviewBase> (*this, "open"); }
const gi::property_proxy<bool, base::TabOverviewBase> property_open() const
{ return gi::property_proxy<bool, base::TabOverviewBase> (*this, "open"); }

gi::property_proxy<bool, base::TabOverviewBase> property_search_active()
{ return gi::property_proxy<bool, base::TabOverviewBase> (*this, "search-active"); }
const gi::property_proxy<bool, base::TabOverviewBase> property_search_active() const
{ return gi::property_proxy<bool, base::TabOverviewBase> (*this, "search-active"); }

gi::property_proxy<Gio::MenuModel, base::TabOverviewBase> property_secondary_menu()
{ return gi::property_proxy<Gio::MenuModel, base::TabOverviewBase> (*this, "secondary-menu"); }
const gi::property_proxy<Gio::MenuModel, base::TabOverviewBase> property_secondary_menu() const
{ return gi::property_proxy<Gio::MenuModel, base::TabOverviewBase> (*this, "secondary-menu"); }

gi::property_proxy<bool, base::TabOverviewBase> property_show_end_title_buttons()
{ return gi::property_proxy<bool, base::TabOverviewBase> (*this, "show-end-title-buttons"); }
const gi::property_proxy<bool, base::TabOverviewBase> property_show_end_title_buttons() const
{ return gi::property_proxy<bool, base::TabOverviewBase> (*this, "show-end-title-buttons"); }

gi::property_proxy<bool, base::TabOverviewBase> property_show_start_title_buttons()
{ return gi::property_proxy<bool, base::TabOverviewBase> (*this, "show-start-title-buttons"); }
const gi::property_proxy<bool, base::TabOverviewBase> property_show_start_title_buttons() const
{ return gi::property_proxy<bool, base::TabOverviewBase> (*this, "show-start-title-buttons"); }

gi::property_proxy<Adw::TabView, base::TabOverviewBase> property_view()
{ return gi::property_proxy<Adw::TabView, base::TabOverviewBase> (*this, "view"); }
const gi::property_proxy<Adw::TabView, base::TabOverviewBase> property_view() const
{ return gi::property_proxy<Adw::TabView, base::TabOverviewBase> (*this, "view"); }

// (signal)  /*none*/ create-tab ();
// (signal) ::AdwTabPage* /*none*/ create-tab ();
gi::signal_proxy<Adw::TabPage(Adw::TabOverview)> signal_create_tab()
{ return gi::signal_proxy<Adw::TabPage(Adw::TabOverview)> (*this, "create-tab"); }

// (signal) gboolean extra-drag-drop ( page /*none*/,  value /*none*/);
// (signal) gboolean extra-drag-drop (::AdwTabPage* page /*none*/, ::GValue* value /*none*/);
gi::signal_proxy<bool(Adw::TabOverview, Adw::TabPage page, GObject::Value_Ref value)> signal_extra_drag_drop()
{ return gi::signal_proxy<bool(Adw::TabOverview, Adw::TabPage page, GObject::Value_Ref value)> (*this, "extra-drag-drop"); }

// (signal)  extra-drag-value ( page /*none*/,  value /*none,nullable*/);
// (signal) ::GdkDragAction extra-drag-value (::AdwTabPage* page /*none*/, ::GValue* value /*none,nullable*/);
gi::signal_proxy<Gdk::DragAction(Adw::TabOverview, Adw::TabPage page, GObject::Value_Ref value)> signal_extra_drag_value()
{ return gi::signal_proxy<Gdk::DragAction(Adw::TabOverview, Adw::TabPage page, GObject::Value_Ref value)> (*this, "extra-drag-value"); }

}; // class

} // namespace base

} // namespace Adw

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<adw/taboverview_extra_def.hpp>)
#include <adw/taboverview_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<adw/taboverview_extra.hpp>)
#include <adw/taboverview_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Adw {

class TabOverview : public GI_ADW_TABOVERVIEW_BASE
{ typedef GI_ADW_TABOVERVIEW_BASE super_type; using super_type::super_type; };

} // namespace Adw

template<> struct declare_cpptype_of<::AdwTabOverview>
{ typedef Adw::TabOverview type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Adw {

namespace impl {

namespace internal {


class TabOverviewClassDef
{
typedef TabOverviewClassDef self;
public:
typedef Adw::TabOverview instance_type;
typedef ::AdwTabOverviewClass class_type;


struct TypeInitData;

protected:
GI_INLINE_DECL ~TabOverviewClassDef() = default;
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );


};

GI_CLASS_IMPL_BEGIN


class TabOverviewClass: public detail::ClassTemplate<Adw::impl::internal::TabOverviewClassDef, Gtk::impl::internal::WidgetClass>
{
friend class internal::TabOverviewClassDef;
typedef TabOverviewClass self;
typedef detail::ClassTemplate<Adw::impl::internal::TabOverviewClassDef, Gtk::impl::internal::WidgetClass> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types



};


struct TabOverviewClassDef::TypeInitData
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

using TabOverviewImpl = detail::ObjectImpl<TabOverview, internal::TabOverviewClass>;

} // namespace impl

} // namespace Adw

} // namespace repository

} // namespace gi

#endif
