// AUTO-GENERATED

#ifndef _GI_ADW_SIDEBAR_IMPL_HPP_
#define _GI_ADW_SIDEBAR_IMPL_HPP_

namespace gi {

namespace repository {

namespace Adw {

namespace base {

// GtkWidget* /*none*/ adw_sidebar_new ();
// ::AdwSidebar* /*none*/ adw_sidebar_new ();
Adw::Sidebar base::SidebarBase::new_ () noexcept
{
  typedef ::AdwSidebar* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) adw_sidebar_new;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// void adw_sidebar_append (AdwSidebar* self /*none*/, AdwSidebarSection* section /*full*/);
// void adw_sidebar_append (::AdwSidebar* self /*none*/, ::AdwSidebarSection* section /*full*/);
void base::SidebarBase::append (Adw::SidebarSection section) noexcept
{
  typedef void (*call_wrap_t) (::AdwSidebar* self, ::AdwSidebarSection* section);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_sidebar_append;
  auto section_to_c = gi::unwrap (section, gi::transfer_full);
  call_wrap_v ((::AdwSidebar*) (gobj_()), (::AdwSidebarSection*) (section_to_c));
}

// gboolean adw_sidebar_get_drop_preload (AdwSidebar* self /*none*/);
// gboolean adw_sidebar_get_drop_preload (::AdwSidebar* self /*none*/);
bool base::SidebarBase::get_drop_preload () noexcept
{
  typedef gboolean (*call_wrap_t) (::AdwSidebar* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_sidebar_get_drop_preload;
  auto _temp_ret = call_wrap_v ((::AdwSidebar*) (gobj_()));
  return _temp_ret;
}

// GtkFilter* /*none,nullable*/ adw_sidebar_get_filter (AdwSidebar* self /*none*/);
// ::GtkFilter* /*none,nullable*/ adw_sidebar_get_filter (::AdwSidebar* self /*none*/);
Gtk::Filter base::SidebarBase::get_filter () noexcept
{
  typedef ::GtkFilter* (*call_wrap_t) (::AdwSidebar* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_sidebar_get_filter;
  auto _temp_ret = call_wrap_v ((::AdwSidebar*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// AdwSidebarItem* /*none,nullable*/ adw_sidebar_get_item (AdwSidebar* self /*none*/, guint index);
// ::AdwSidebarItem* /*none,nullable*/ adw_sidebar_get_item (::AdwSidebar* self /*none*/, guint index);
Adw::SidebarItem base::SidebarBase::get_item (guint index) noexcept
{
  typedef ::AdwSidebarItem* (*call_wrap_t) (::AdwSidebar* self, guint index);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_sidebar_get_item;
  auto index_to_c = index;
  auto _temp_ret = call_wrap_v ((::AdwSidebar*) (gobj_()), (guint) (index_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// GtkSelectionModel* /*full*/ adw_sidebar_get_items (AdwSidebar* self /*none*/);
// ::GtkSelectionModel* /*full*/ adw_sidebar_get_items (::AdwSidebar* self /*none*/);
Gtk::SelectionModel base::SidebarBase::get_items () noexcept
{
  typedef ::GtkSelectionModel* (*call_wrap_t) (::AdwSidebar* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_sidebar_get_items;
  auto _temp_ret = call_wrap_v ((::AdwSidebar*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// GMenuModel* /*none,nullable*/ adw_sidebar_get_menu_model (AdwSidebar* self /*none*/);
// ::GMenuModel* /*none,nullable*/ adw_sidebar_get_menu_model (::AdwSidebar* self /*none*/);
Gio::MenuModel base::SidebarBase::get_menu_model () noexcept
{
  typedef ::GMenuModel* (*call_wrap_t) (::AdwSidebar* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_sidebar_get_menu_model;
  auto _temp_ret = call_wrap_v ((::AdwSidebar*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// AdwSidebarMode adw_sidebar_get_mode (AdwSidebar* self /*none*/);
// ::AdwSidebarMode adw_sidebar_get_mode (::AdwSidebar* self /*none*/);
Adw::SidebarMode base::SidebarBase::get_mode () noexcept
{
  typedef ::AdwSidebarMode (*call_wrap_t) (::AdwSidebar* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_sidebar_get_mode;
  auto _temp_ret = call_wrap_v ((::AdwSidebar*) (gobj_()));
  return gi::wrap (_temp_ret);
}

// GtkWidget* /*none,nullable*/ adw_sidebar_get_placeholder (AdwSidebar* self /*none*/);
// ::GtkWidget* /*none,nullable*/ adw_sidebar_get_placeholder (::AdwSidebar* self /*none*/);
Gtk::Widget base::SidebarBase::get_placeholder () noexcept
{
  typedef ::GtkWidget* (*call_wrap_t) (::AdwSidebar* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_sidebar_get_placeholder;
  auto _temp_ret = call_wrap_v ((::AdwSidebar*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// AdwSidebarSection* /*none,nullable*/ adw_sidebar_get_section (AdwSidebar* self /*none*/, guint index);
// ::AdwSidebarSection* /*none,nullable*/ adw_sidebar_get_section (::AdwSidebar* self /*none*/, guint index);
Adw::SidebarSection base::SidebarBase::get_section (guint index) noexcept
{
  typedef ::AdwSidebarSection* (*call_wrap_t) (::AdwSidebar* self, guint index);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_sidebar_get_section;
  auto index_to_c = index;
  auto _temp_ret = call_wrap_v ((::AdwSidebar*) (gobj_()), (guint) (index_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// GListModel* /*full*/ adw_sidebar_get_sections (AdwSidebar* self /*none*/);
// ::GListModel* /*full*/ adw_sidebar_get_sections (::AdwSidebar* self /*none*/);
Gio::ListModel base::SidebarBase::get_sections () noexcept
{
  typedef ::GListModel* (*call_wrap_t) (::AdwSidebar* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_sidebar_get_sections;
  auto _temp_ret = call_wrap_v ((::AdwSidebar*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// guint adw_sidebar_get_selected (AdwSidebar* self /*none*/);
// guint adw_sidebar_get_selected (::AdwSidebar* self /*none*/);
guint base::SidebarBase::get_selected () noexcept
{
  typedef guint (*call_wrap_t) (::AdwSidebar* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_sidebar_get_selected;
  auto _temp_ret = call_wrap_v ((::AdwSidebar*) (gobj_()));
  return _temp_ret;
}

// AdwSidebarItem* /*none,nullable*/ adw_sidebar_get_selected_item (AdwSidebar* self /*none*/);
// ::AdwSidebarItem* /*none,nullable*/ adw_sidebar_get_selected_item (::AdwSidebar* self /*none*/);
Adw::SidebarItem base::SidebarBase::get_selected_item () noexcept
{
  typedef ::AdwSidebarItem* (*call_wrap_t) (::AdwSidebar* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_sidebar_get_selected_item;
  auto _temp_ret = call_wrap_v ((::AdwSidebar*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// void adw_sidebar_insert (AdwSidebar* self /*none*/, AdwSidebarSection* section /*full*/, int position);
// void adw_sidebar_insert (::AdwSidebar* self /*none*/, ::AdwSidebarSection* section /*full*/, gint position);
void base::SidebarBase::insert (Adw::SidebarSection section, gint position) noexcept
{
  typedef void (*call_wrap_t) (::AdwSidebar* self, ::AdwSidebarSection* section, gint position);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_sidebar_insert;
  auto position_to_c = position;
  auto section_to_c = gi::unwrap (section, gi::transfer_full);
  call_wrap_v ((::AdwSidebar*) (gobj_()), (::AdwSidebarSection*) (section_to_c), (gint) (position_to_c));
}

// void adw_sidebar_prepend (AdwSidebar* self /*none*/, AdwSidebarSection* section /*full*/);
// void adw_sidebar_prepend (::AdwSidebar* self /*none*/, ::AdwSidebarSection* section /*full*/);
void base::SidebarBase::prepend (Adw::SidebarSection section) noexcept
{
  typedef void (*call_wrap_t) (::AdwSidebar* self, ::AdwSidebarSection* section);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_sidebar_prepend;
  auto section_to_c = gi::unwrap (section, gi::transfer_full);
  call_wrap_v ((::AdwSidebar*) (gobj_()), (::AdwSidebarSection*) (section_to_c));
}

// void adw_sidebar_remove (AdwSidebar* self /*none*/, AdwSidebarSection* section /*none*/);
// void adw_sidebar_remove (::AdwSidebar* self /*none*/, ::AdwSidebarSection* section /*none*/);
void base::SidebarBase::remove (Adw::SidebarSection section) noexcept
{
  typedef void (*call_wrap_t) (::AdwSidebar* self, ::AdwSidebarSection* section);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_sidebar_remove;
  auto section_to_c = gi::unwrap (section, gi::transfer_none);
  call_wrap_v ((::AdwSidebar*) (gobj_()), (::AdwSidebarSection*) (section_to_c));
}

// void adw_sidebar_remove_all (AdwSidebar* self /*none*/);
// void adw_sidebar_remove_all (::AdwSidebar* self /*none*/);
void base::SidebarBase::remove_all () noexcept
{
  typedef void (*call_wrap_t) (::AdwSidebar* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_sidebar_remove_all;
  call_wrap_v ((::AdwSidebar*) (gobj_()));
}

// void adw_sidebar_set_drop_preload (AdwSidebar* self /*none*/, gboolean preload);
// void adw_sidebar_set_drop_preload (::AdwSidebar* self /*none*/, gboolean preload);
void base::SidebarBase::set_drop_preload (gboolean preload) noexcept
{
  typedef void (*call_wrap_t) (::AdwSidebar* self, gboolean preload);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_sidebar_set_drop_preload;
  auto preload_to_c = preload;
  call_wrap_v ((::AdwSidebar*) (gobj_()), (gboolean) (preload_to_c));
}

// void adw_sidebar_set_filter (AdwSidebar* self /*none*/, GtkFilter* filter /*none,nullable*/);
// void adw_sidebar_set_filter (::AdwSidebar* self /*none*/, ::GtkFilter* filter /*none,nullable*/);
void base::SidebarBase::set_filter (Gtk::Filter filter) noexcept
{
  typedef void (*call_wrap_t) (::AdwSidebar* self, ::GtkFilter* filter);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_sidebar_set_filter;
  auto filter_to_c = gi::unwrap (filter, gi::transfer_none);
  call_wrap_v ((::AdwSidebar*) (gobj_()), (::GtkFilter*) (filter_to_c));
}
void base::SidebarBase::set_filter () noexcept
{
  typedef void (*call_wrap_t) (::AdwSidebar* self, ::GtkFilter* filter);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_sidebar_set_filter;
  auto filter_to_c = nullptr;
  call_wrap_v ((::AdwSidebar*) (gobj_()), (::GtkFilter*) (filter_to_c));
}

// void adw_sidebar_set_menu_model (AdwSidebar* self /*none*/, GMenuModel* menu_model /*none,nullable*/);
// void adw_sidebar_set_menu_model (::AdwSidebar* self /*none*/, ::GMenuModel* menu_model /*none,nullable*/);
void base::SidebarBase::set_menu_model (Gio::MenuModel menu_model) noexcept
{
  typedef void (*call_wrap_t) (::AdwSidebar* self, ::GMenuModel* menu_model);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_sidebar_set_menu_model;
  auto menu_model_to_c = gi::unwrap (menu_model, gi::transfer_none);
  call_wrap_v ((::AdwSidebar*) (gobj_()), (::GMenuModel*) (menu_model_to_c));
}
void base::SidebarBase::set_menu_model () noexcept
{
  typedef void (*call_wrap_t) (::AdwSidebar* self, ::GMenuModel* menu_model);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_sidebar_set_menu_model;
  auto menu_model_to_c = nullptr;
  call_wrap_v ((::AdwSidebar*) (gobj_()), (::GMenuModel*) (menu_model_to_c));
}

// void adw_sidebar_set_mode (AdwSidebar* self /*none*/, AdwSidebarMode mode);
// void adw_sidebar_set_mode (::AdwSidebar* self /*none*/, ::AdwSidebarMode mode);
void base::SidebarBase::set_mode (Adw::SidebarMode mode) noexcept
{
  typedef void (*call_wrap_t) (::AdwSidebar* self, ::AdwSidebarMode mode);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_sidebar_set_mode;
  auto mode_to_c = gi::unwrap (mode);
  call_wrap_v ((::AdwSidebar*) (gobj_()), (::AdwSidebarMode) (mode_to_c));
}

// void adw_sidebar_set_placeholder (AdwSidebar* self /*none*/, GtkWidget* placeholder /*none,nullable*/);
// void adw_sidebar_set_placeholder (::AdwSidebar* self /*none*/, ::GtkWidget* placeholder /*none,nullable*/);
void base::SidebarBase::set_placeholder (Gtk::Widget placeholder) noexcept
{
  typedef void (*call_wrap_t) (::AdwSidebar* self, ::GtkWidget* placeholder);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_sidebar_set_placeholder;
  auto placeholder_to_c = gi::unwrap (placeholder, gi::transfer_none);
  call_wrap_v ((::AdwSidebar*) (gobj_()), (::GtkWidget*) (placeholder_to_c));
}
void base::SidebarBase::set_placeholder () noexcept
{
  typedef void (*call_wrap_t) (::AdwSidebar* self, ::GtkWidget* placeholder);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_sidebar_set_placeholder;
  auto placeholder_to_c = nullptr;
  call_wrap_v ((::AdwSidebar*) (gobj_()), (::GtkWidget*) (placeholder_to_c));
}

// void adw_sidebar_set_selected (AdwSidebar* self /*none*/, guint selected);
// void adw_sidebar_set_selected (::AdwSidebar* self /*none*/, guint selected);
void base::SidebarBase::set_selected (guint selected) noexcept
{
  typedef void (*call_wrap_t) (::AdwSidebar* self, guint selected);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_sidebar_set_selected;
  auto selected_to_c = selected;
  call_wrap_v ((::AdwSidebar*) (gobj_()), (guint) (selected_to_c));
}

// void adw_sidebar_setup_drop_target (AdwSidebar* self /*none*/, GdkDragAction actions, GType* types /*none,nullable*/, gsize n_types);
// void adw_sidebar_setup_drop_target (::AdwSidebar* self /*none*/, ::GdkDragAction actions, GType* types /*none,nullable*/, gsize n_types);
void base::SidebarBase::setup_drop_target (Gdk::DragAction actions, const GType * types, gsize n_types) noexcept
{
  typedef void (*call_wrap_t) (::AdwSidebar* self, ::GdkDragAction actions, GType* types, gsize n_types);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_sidebar_setup_drop_target;
  auto types_to_c = types;
  auto actions_to_c = gi::unwrap (actions);
  call_wrap_v ((::AdwSidebar*) (gobj_()), (::GdkDragAction) (actions_to_c), (GType*) (types_to_c), (gsize) (n_types));
}







} // namespace base

} // namespace Adw

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<adw/sidebar_extra_def_impl.hpp>)
#include <adw/sidebar_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<adw/sidebar_extra_impl.hpp>)
#include <adw/sidebar_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Adw {

namespace impl {

namespace internal {

void SidebarClassDef::class_init (gpointer class_struct, gpointer factory)
{
  ::AdwSidebarClass *methods = (::AdwSidebarClass *) class_struct;
  (void) methods;

  auto init_data = GI_MEMBER_INIT_DATA(TypeInitData, factory);
  (void) init_data;

}

} // namespace internal

} // namespace impl

} // namespace Adw

} // namespace repository

} // namespace gi

#endif
