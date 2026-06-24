// AUTO-GENERATED

#ifndef _GI_ADW_TABVIEW_HPP_
#define _GI_ADW_TABVIEW_HPP_


namespace gi {

namespace repository {

namespace Adw {

class TabPage;

class TabView;

namespace base {


#define GI_ADW_TABVIEW_BASE base::TabViewBase
class TabViewBase : public Gtk::Widget
{
typedef Gtk::Widget super_type;
public:
typedef ::AdwTabView BaseObjectType;

TabViewBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return adw_tab_view_get_type(); } 

// AdwTabView* /*none*/ adw_tab_view_new ();
// ::AdwTabView* /*none*/ adw_tab_view_new ();
static GI_INLINE_DECL Adw::TabView new_ () noexcept;

// AdwTabPage* /*none*/ adw_tab_view_add_page (AdwTabView* self /*none*/, GtkWidget* child /*none*/, AdwTabPage* parent /*none,nullable*/);
// ::AdwTabPage* /*none*/ adw_tab_view_add_page (::AdwTabView* self /*none*/, ::GtkWidget* child /*none*/, ::AdwTabPage* parent /*none,nullable*/);
GI_INLINE_DECL Adw::TabPage add_page (Gtk::Widget child, Adw::TabPage parent) noexcept;
GI_INLINE_DECL Adw::TabPage add_page (Gtk::Widget child) noexcept;

// void adw_tab_view_add_shortcuts (AdwTabView* self /*none*/, AdwTabViewShortcuts shortcuts);
// void adw_tab_view_add_shortcuts (::AdwTabView* self /*none*/, ::AdwTabViewShortcuts shortcuts);
GI_INLINE_DECL void add_shortcuts (Adw::TabViewShortcuts shortcuts) noexcept;

// AdwTabPage* /*none*/ adw_tab_view_append (AdwTabView* self /*none*/, GtkWidget* child /*none*/);
// ::AdwTabPage* /*none*/ adw_tab_view_append (::AdwTabView* self /*none*/, ::GtkWidget* child /*none*/);
GI_INLINE_DECL Adw::TabPage append (Gtk::Widget child) noexcept;

// AdwTabPage* /*none*/ adw_tab_view_append_pinned (AdwTabView* self /*none*/, GtkWidget* child /*none*/);
// ::AdwTabPage* /*none*/ adw_tab_view_append_pinned (::AdwTabView* self /*none*/, ::GtkWidget* child /*none*/);
GI_INLINE_DECL Adw::TabPage append_pinned (Gtk::Widget child) noexcept;

// void adw_tab_view_close_other_pages (AdwTabView* self /*none*/, AdwTabPage* page /*none*/);
// void adw_tab_view_close_other_pages (::AdwTabView* self /*none*/, ::AdwTabPage* page /*none*/);
GI_INLINE_DECL void close_other_pages (Adw::TabPage page) noexcept;

// void adw_tab_view_close_page (AdwTabView* self /*none*/, AdwTabPage* page /*none*/);
// void adw_tab_view_close_page (::AdwTabView* self /*none*/, ::AdwTabPage* page /*none*/);
GI_INLINE_DECL void close_page (Adw::TabPage page) noexcept;

// void adw_tab_view_close_page_finish (AdwTabView* self /*none*/, AdwTabPage* page /*none*/, gboolean confirm);
// void adw_tab_view_close_page_finish (::AdwTabView* self /*none*/, ::AdwTabPage* page /*none*/, gboolean confirm);
GI_INLINE_DECL void close_page_finish (Adw::TabPage page, gboolean confirm) noexcept;

// void adw_tab_view_close_pages_after (AdwTabView* self /*none*/, AdwTabPage* page /*none*/);
// void adw_tab_view_close_pages_after (::AdwTabView* self /*none*/, ::AdwTabPage* page /*none*/);
GI_INLINE_DECL void close_pages_after (Adw::TabPage page) noexcept;

// void adw_tab_view_close_pages_before (AdwTabView* self /*none*/, AdwTabPage* page /*none*/);
// void adw_tab_view_close_pages_before (::AdwTabView* self /*none*/, ::AdwTabPage* page /*none*/);
GI_INLINE_DECL void close_pages_before (Adw::TabPage page) noexcept;

// GIcon* /*none*/ adw_tab_view_get_default_icon (AdwTabView* self /*none*/);
// ::GIcon* /*none*/ adw_tab_view_get_default_icon (::AdwTabView* self /*none*/);
GI_INLINE_DECL Gio::Icon get_default_icon () noexcept;

// gboolean adw_tab_view_get_is_transferring_page (AdwTabView* self /*none*/);
// gboolean adw_tab_view_get_is_transferring_page (::AdwTabView* self /*none*/);
GI_INLINE_DECL bool get_is_transferring_page () noexcept;

// GMenuModel* /*none,nullable*/ adw_tab_view_get_menu_model (AdwTabView* self /*none*/);
// ::GMenuModel* /*none,nullable*/ adw_tab_view_get_menu_model (::AdwTabView* self /*none*/);
GI_INLINE_DECL Gio::MenuModel get_menu_model () noexcept;

// int adw_tab_view_get_n_pages (AdwTabView* self /*none*/);
// gint adw_tab_view_get_n_pages (::AdwTabView* self /*none*/);
GI_INLINE_DECL gint get_n_pages () noexcept;

// int adw_tab_view_get_n_pinned_pages (AdwTabView* self /*none*/);
// gint adw_tab_view_get_n_pinned_pages (::AdwTabView* self /*none*/);
GI_INLINE_DECL gint get_n_pinned_pages () noexcept;

// AdwTabPage* /*none*/ adw_tab_view_get_nth_page (AdwTabView* self /*none*/, int position);
// ::AdwTabPage* /*none*/ adw_tab_view_get_nth_page (::AdwTabView* self /*none*/, gint position);
GI_INLINE_DECL Adw::TabPage get_nth_page (gint position) noexcept;

// AdwTabPage* /*none*/ adw_tab_view_get_page (AdwTabView* self /*none*/, GtkWidget* child /*none*/);
// ::AdwTabPage* /*none*/ adw_tab_view_get_page (::AdwTabView* self /*none*/, ::GtkWidget* child /*none*/);
GI_INLINE_DECL Adw::TabPage get_page (Gtk::Widget child) noexcept;

// int adw_tab_view_get_page_position (AdwTabView* self /*none*/, AdwTabPage* page /*none*/);
// gint adw_tab_view_get_page_position (::AdwTabView* self /*none*/, ::AdwTabPage* page /*none*/);
GI_INLINE_DECL gint get_page_position (Adw::TabPage page) noexcept;

// GtkSelectionModel* /*full*/ adw_tab_view_get_pages (AdwTabView* self /*none*/);
// ::GtkSelectionModel* /*full*/ adw_tab_view_get_pages (::AdwTabView* self /*none*/);
GI_INLINE_DECL Gtk::SelectionModel get_pages () noexcept;

// AdwTabPage* /*none,nullable*/ adw_tab_view_get_selected_page (AdwTabView* self /*none*/);
// ::AdwTabPage* /*none,nullable*/ adw_tab_view_get_selected_page (::AdwTabView* self /*none*/);
GI_INLINE_DECL Adw::TabPage get_selected_page () noexcept;

// AdwTabViewShortcuts adw_tab_view_get_shortcuts (AdwTabView* self /*none*/);
// ::AdwTabViewShortcuts adw_tab_view_get_shortcuts (::AdwTabView* self /*none*/);
GI_INLINE_DECL Adw::TabViewShortcuts get_shortcuts () noexcept;

// AdwTabPage* /*none*/ adw_tab_view_insert (AdwTabView* self /*none*/, GtkWidget* child /*none*/, int position);
// ::AdwTabPage* /*none*/ adw_tab_view_insert (::AdwTabView* self /*none*/, ::GtkWidget* child /*none*/, gint position);
GI_INLINE_DECL Adw::TabPage insert (Gtk::Widget child, gint position) noexcept;

// AdwTabPage* /*none*/ adw_tab_view_insert_pinned (AdwTabView* self /*none*/, GtkWidget* child /*none*/, int position);
// ::AdwTabPage* /*none*/ adw_tab_view_insert_pinned (::AdwTabView* self /*none*/, ::GtkWidget* child /*none*/, gint position);
GI_INLINE_DECL Adw::TabPage insert_pinned (Gtk::Widget child, gint position) noexcept;

// void adw_tab_view_invalidate_thumbnails (AdwTabView* self /*none*/);
// void adw_tab_view_invalidate_thumbnails (::AdwTabView* self /*none*/);
GI_INLINE_DECL void invalidate_thumbnails () noexcept;

// AdwTabPage* /*none*/ adw_tab_view_prepend (AdwTabView* self /*none*/, GtkWidget* child /*none*/);
// ::AdwTabPage* /*none*/ adw_tab_view_prepend (::AdwTabView* self /*none*/, ::GtkWidget* child /*none*/);
GI_INLINE_DECL Adw::TabPage prepend (Gtk::Widget child) noexcept;

// AdwTabPage* /*none*/ adw_tab_view_prepend_pinned (AdwTabView* self /*none*/, GtkWidget* child /*none*/);
// ::AdwTabPage* /*none*/ adw_tab_view_prepend_pinned (::AdwTabView* self /*none*/, ::GtkWidget* child /*none*/);
GI_INLINE_DECL Adw::TabPage prepend_pinned (Gtk::Widget child) noexcept;

// void adw_tab_view_remove_shortcuts (AdwTabView* self /*none*/, AdwTabViewShortcuts shortcuts);
// void adw_tab_view_remove_shortcuts (::AdwTabView* self /*none*/, ::AdwTabViewShortcuts shortcuts);
GI_INLINE_DECL void remove_shortcuts (Adw::TabViewShortcuts shortcuts) noexcept;

// gboolean adw_tab_view_reorder_backward (AdwTabView* self /*none*/, AdwTabPage* page /*none*/);
// gboolean adw_tab_view_reorder_backward (::AdwTabView* self /*none*/, ::AdwTabPage* page /*none*/);
GI_INLINE_DECL bool reorder_backward (Adw::TabPage page) noexcept;

// gboolean adw_tab_view_reorder_first (AdwTabView* self /*none*/, AdwTabPage* page /*none*/);
// gboolean adw_tab_view_reorder_first (::AdwTabView* self /*none*/, ::AdwTabPage* page /*none*/);
GI_INLINE_DECL bool reorder_first (Adw::TabPage page) noexcept;

// gboolean adw_tab_view_reorder_forward (AdwTabView* self /*none*/, AdwTabPage* page /*none*/);
// gboolean adw_tab_view_reorder_forward (::AdwTabView* self /*none*/, ::AdwTabPage* page /*none*/);
GI_INLINE_DECL bool reorder_forward (Adw::TabPage page) noexcept;

// gboolean adw_tab_view_reorder_last (AdwTabView* self /*none*/, AdwTabPage* page /*none*/);
// gboolean adw_tab_view_reorder_last (::AdwTabView* self /*none*/, ::AdwTabPage* page /*none*/);
GI_INLINE_DECL bool reorder_last (Adw::TabPage page) noexcept;

// gboolean adw_tab_view_reorder_page (AdwTabView* self /*none*/, AdwTabPage* page /*none*/, int position);
// gboolean adw_tab_view_reorder_page (::AdwTabView* self /*none*/, ::AdwTabPage* page /*none*/, gint position);
GI_INLINE_DECL bool reorder_page (Adw::TabPage page, gint position) noexcept;

// gboolean adw_tab_view_select_next_page (AdwTabView* self /*none*/);
// gboolean adw_tab_view_select_next_page (::AdwTabView* self /*none*/);
GI_INLINE_DECL bool select_next_page () noexcept;

// gboolean adw_tab_view_select_previous_page (AdwTabView* self /*none*/);
// gboolean adw_tab_view_select_previous_page (::AdwTabView* self /*none*/);
GI_INLINE_DECL bool select_previous_page () noexcept;

// void adw_tab_view_set_default_icon (AdwTabView* self /*none*/, GIcon* default_icon /*none*/);
// void adw_tab_view_set_default_icon (::AdwTabView* self /*none*/, ::GIcon* default_icon /*none*/);
GI_INLINE_DECL void set_default_icon (Gio::Icon default_icon) noexcept;

// void adw_tab_view_set_menu_model (AdwTabView* self /*none*/, GMenuModel* menu_model /*none,nullable*/);
// void adw_tab_view_set_menu_model (::AdwTabView* self /*none*/, ::GMenuModel* menu_model /*none,nullable*/);
GI_INLINE_DECL void set_menu_model (Gio::MenuModel menu_model) noexcept;
GI_INLINE_DECL void set_menu_model () noexcept;

// void adw_tab_view_set_page_pinned (AdwTabView* self /*none*/, AdwTabPage* page /*none*/, gboolean pinned);
// void adw_tab_view_set_page_pinned (::AdwTabView* self /*none*/, ::AdwTabPage* page /*none*/, gboolean pinned);
GI_INLINE_DECL void set_page_pinned (Adw::TabPage page, gboolean pinned) noexcept;

// void adw_tab_view_set_selected_page (AdwTabView* self /*none*/, AdwTabPage* selected_page /*none*/);
// void adw_tab_view_set_selected_page (::AdwTabView* self /*none*/, ::AdwTabPage* selected_page /*none*/);
GI_INLINE_DECL void set_selected_page (Adw::TabPage selected_page) noexcept;

// void adw_tab_view_set_shortcuts (AdwTabView* self /*none*/, AdwTabViewShortcuts shortcuts);
// void adw_tab_view_set_shortcuts (::AdwTabView* self /*none*/, ::AdwTabViewShortcuts shortcuts);
GI_INLINE_DECL void set_shortcuts (Adw::TabViewShortcuts shortcuts) noexcept;

// void adw_tab_view_transfer_page (AdwTabView* self /*none*/, AdwTabPage* page /*none*/, AdwTabView* other_view /*none*/, int position);
// void adw_tab_view_transfer_page (::AdwTabView* self /*none*/, ::AdwTabPage* page /*none*/, ::AdwTabView* other_view /*none*/, gint position);
GI_INLINE_DECL void transfer_page (Adw::TabPage page, Adw::TabView other_view, gint position) noexcept;

gi::property_proxy<Gio::Icon, base::TabViewBase> property_default_icon()
{ return gi::property_proxy<Gio::Icon, base::TabViewBase> (*this, "default-icon"); }
const gi::property_proxy<Gio::Icon, base::TabViewBase> property_default_icon() const
{ return gi::property_proxy<Gio::Icon, base::TabViewBase> (*this, "default-icon"); }

gi::property_proxy<bool, base::TabViewBase> property_is_transferring_page()
{ return gi::property_proxy<bool, base::TabViewBase> (*this, "is-transferring-page"); }
const gi::property_proxy<bool, base::TabViewBase> property_is_transferring_page() const
{ return gi::property_proxy<bool, base::TabViewBase> (*this, "is-transferring-page"); }

gi::property_proxy<Gio::MenuModel, base::TabViewBase> property_menu_model()
{ return gi::property_proxy<Gio::MenuModel, base::TabViewBase> (*this, "menu-model"); }
const gi::property_proxy<Gio::MenuModel, base::TabViewBase> property_menu_model() const
{ return gi::property_proxy<Gio::MenuModel, base::TabViewBase> (*this, "menu-model"); }

gi::property_proxy<gint, base::TabViewBase> property_n_pages()
{ return gi::property_proxy<gint, base::TabViewBase> (*this, "n-pages"); }
const gi::property_proxy<gint, base::TabViewBase> property_n_pages() const
{ return gi::property_proxy<gint, base::TabViewBase> (*this, "n-pages"); }

gi::property_proxy<gint, base::TabViewBase> property_n_pinned_pages()
{ return gi::property_proxy<gint, base::TabViewBase> (*this, "n-pinned-pages"); }
const gi::property_proxy<gint, base::TabViewBase> property_n_pinned_pages() const
{ return gi::property_proxy<gint, base::TabViewBase> (*this, "n-pinned-pages"); }

gi::property_proxy<Gtk::SelectionModel, base::TabViewBase> property_pages()
{ return gi::property_proxy<Gtk::SelectionModel, base::TabViewBase> (*this, "pages"); }
const gi::property_proxy<Gtk::SelectionModel, base::TabViewBase> property_pages() const
{ return gi::property_proxy<Gtk::SelectionModel, base::TabViewBase> (*this, "pages"); }

gi::property_proxy<Adw::TabPage, base::TabViewBase> property_selected_page()
{ return gi::property_proxy<Adw::TabPage, base::TabViewBase> (*this, "selected-page"); }
const gi::property_proxy<Adw::TabPage, base::TabViewBase> property_selected_page() const
{ return gi::property_proxy<Adw::TabPage, base::TabViewBase> (*this, "selected-page"); }

gi::property_proxy<Adw::TabViewShortcuts, base::TabViewBase> property_shortcuts()
{ return gi::property_proxy<Adw::TabViewShortcuts, base::TabViewBase> (*this, "shortcuts"); }
const gi::property_proxy<Adw::TabViewShortcuts, base::TabViewBase> property_shortcuts() const
{ return gi::property_proxy<Adw::TabViewShortcuts, base::TabViewBase> (*this, "shortcuts"); }

// (signal) gboolean close-page ( page /*none*/);
// (signal) gboolean close-page (::AdwTabPage* page /*none*/);
gi::signal_proxy<bool(Adw::TabView, Adw::TabPage page)> signal_close_page()
{ return gi::signal_proxy<bool(Adw::TabView, Adw::TabPage page)> (*this, "close-page"); }

// (signal)  /*none,nullable*/ create-window ();
// (signal) ::AdwTabView* /*none,nullable*/ create-window ();
gi::signal_proxy<Adw::TabView(Adw::TabView)> signal_create_window()
{ return gi::signal_proxy<Adw::TabView(Adw::TabView)> (*this, "create-window"); }

// (signal) void indicator-activated ( page /*none*/);
// (signal) void indicator-activated (::AdwTabPage* page /*none*/);
gi::signal_proxy<void(Adw::TabView, Adw::TabPage page)> signal_indicator_activated()
{ return gi::signal_proxy<void(Adw::TabView, Adw::TabPage page)> (*this, "indicator-activated"); }

// (signal) void page-attached ( page /*none*/, gint position);
// (signal) void page-attached (::AdwTabPage* page /*none*/, gint position);
gi::signal_proxy<void(Adw::TabView, Adw::TabPage page, gint position)> signal_page_attached()
{ return gi::signal_proxy<void(Adw::TabView, Adw::TabPage page, gint position)> (*this, "page-attached"); }

// (signal) void page-detached ( page /*none*/, gint position);
// (signal) void page-detached (::AdwTabPage* page /*none*/, gint position);
gi::signal_proxy<void(Adw::TabView, Adw::TabPage page, gint position)> signal_page_detached()
{ return gi::signal_proxy<void(Adw::TabView, Adw::TabPage page, gint position)> (*this, "page-detached"); }

// (signal) void page-reordered ( page /*none*/, gint position);
// (signal) void page-reordered (::AdwTabPage* page /*none*/, gint position);
gi::signal_proxy<void(Adw::TabView, Adw::TabPage page, gint position)> signal_page_reordered()
{ return gi::signal_proxy<void(Adw::TabView, Adw::TabPage page, gint position)> (*this, "page-reordered"); }

// (signal) void setup-menu ( page /*none,nullable*/);
// (signal) void setup-menu (::AdwTabPage* page /*none,nullable*/);
gi::signal_proxy<void(Adw::TabView, Adw::TabPage page)> signal_setup_menu()
{ return gi::signal_proxy<void(Adw::TabView, Adw::TabPage page)> (*this, "setup-menu"); }

}; // class

} // namespace base

} // namespace Adw

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<adw/tabview_extra_def.hpp>)
#include <adw/tabview_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<adw/tabview_extra.hpp>)
#include <adw/tabview_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Adw {

class TabView : public GI_ADW_TABVIEW_BASE
{ typedef GI_ADW_TABVIEW_BASE super_type; using super_type::super_type; };

} // namespace Adw

template<> struct declare_cpptype_of<::AdwTabView>
{ typedef Adw::TabView type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Adw {

namespace impl {

namespace internal {


class TabViewClassDef
{
typedef TabViewClassDef self;
public:
typedef Adw::TabView instance_type;
typedef ::AdwTabViewClass class_type;


struct TypeInitData;

protected:
GI_INLINE_DECL ~TabViewClassDef() = default;
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );


};

GI_CLASS_IMPL_BEGIN


class TabViewClass: public detail::ClassTemplate<Adw::impl::internal::TabViewClassDef, Gtk::impl::internal::WidgetClass>
{
friend class internal::TabViewClassDef;
typedef TabViewClass self;
typedef detail::ClassTemplate<Adw::impl::internal::TabViewClassDef, Gtk::impl::internal::WidgetClass> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types



};


struct TabViewClassDef::TypeInitData
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

using TabViewImpl = detail::ObjectImpl<TabView, internal::TabViewClass>;

} // namespace impl

} // namespace Adw

} // namespace repository

} // namespace gi

#endif
