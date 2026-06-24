// AUTO-GENERATED

#ifndef _GI_ADW_TABOVERVIEW_IMPL_HPP_
#define _GI_ADW_TABOVERVIEW_IMPL_HPP_

namespace gi {

namespace repository {

namespace Adw {

namespace base {

// GtkWidget* /*none*/ adw_tab_overview_new ();
// ::AdwTabOverview* /*none*/ adw_tab_overview_new ();
Adw::TabOverview base::TabOverviewBase::new_ () noexcept
{
  typedef ::AdwTabOverview* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) adw_tab_overview_new;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// GtkWidget* /*none,nullable*/ adw_tab_overview_get_child (AdwTabOverview* self /*none*/);
// ::GtkWidget* /*none,nullable*/ adw_tab_overview_get_child (::AdwTabOverview* self /*none*/);
Gtk::Widget base::TabOverviewBase::get_child () noexcept
{
  typedef ::GtkWidget* (*call_wrap_t) (::AdwTabOverview* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_tab_overview_get_child;
  auto _temp_ret = call_wrap_v ((::AdwTabOverview*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// gboolean adw_tab_overview_get_enable_new_tab (AdwTabOverview* self /*none*/);
// gboolean adw_tab_overview_get_enable_new_tab (::AdwTabOverview* self /*none*/);
bool base::TabOverviewBase::get_enable_new_tab () noexcept
{
  typedef gboolean (*call_wrap_t) (::AdwTabOverview* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_tab_overview_get_enable_new_tab;
  auto _temp_ret = call_wrap_v ((::AdwTabOverview*) (gobj_()));
  return _temp_ret;
}

// gboolean adw_tab_overview_get_enable_search (AdwTabOverview* self /*none*/);
// gboolean adw_tab_overview_get_enable_search (::AdwTabOverview* self /*none*/);
bool base::TabOverviewBase::get_enable_search () noexcept
{
  typedef gboolean (*call_wrap_t) (::AdwTabOverview* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_tab_overview_get_enable_search;
  auto _temp_ret = call_wrap_v ((::AdwTabOverview*) (gobj_()));
  return _temp_ret;
}

// GdkDragAction adw_tab_overview_get_extra_drag_preferred_action (AdwTabOverview* self /*none*/);
// ::GdkDragAction adw_tab_overview_get_extra_drag_preferred_action (::AdwTabOverview* self /*none*/);
Gdk::DragAction base::TabOverviewBase::get_extra_drag_preferred_action () noexcept
{
  typedef ::GdkDragAction (*call_wrap_t) (::AdwTabOverview* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_tab_overview_get_extra_drag_preferred_action;
  auto _temp_ret = call_wrap_v ((::AdwTabOverview*) (gobj_()));
  return gi::wrap (_temp_ret);
}

// gboolean adw_tab_overview_get_extra_drag_preload (AdwTabOverview* self /*none*/);
// gboolean adw_tab_overview_get_extra_drag_preload (::AdwTabOverview* self /*none*/);
bool base::TabOverviewBase::get_extra_drag_preload () noexcept
{
  typedef gboolean (*call_wrap_t) (::AdwTabOverview* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_tab_overview_get_extra_drag_preload;
  auto _temp_ret = call_wrap_v ((::AdwTabOverview*) (gobj_()));
  return _temp_ret;
}

// gboolean adw_tab_overview_get_inverted (AdwTabOverview* self /*none*/);
// gboolean adw_tab_overview_get_inverted (::AdwTabOverview* self /*none*/);
bool base::TabOverviewBase::get_inverted () noexcept
{
  typedef gboolean (*call_wrap_t) (::AdwTabOverview* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_tab_overview_get_inverted;
  auto _temp_ret = call_wrap_v ((::AdwTabOverview*) (gobj_()));
  return _temp_ret;
}

// gboolean adw_tab_overview_get_open (AdwTabOverview* self /*none*/);
// gboolean adw_tab_overview_get_open (::AdwTabOverview* self /*none*/);
bool base::TabOverviewBase::get_open () noexcept
{
  typedef gboolean (*call_wrap_t) (::AdwTabOverview* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_tab_overview_get_open;
  auto _temp_ret = call_wrap_v ((::AdwTabOverview*) (gobj_()));
  return _temp_ret;
}

// gboolean adw_tab_overview_get_search_active (AdwTabOverview* self /*none*/);
// gboolean adw_tab_overview_get_search_active (::AdwTabOverview* self /*none*/);
bool base::TabOverviewBase::get_search_active () noexcept
{
  typedef gboolean (*call_wrap_t) (::AdwTabOverview* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_tab_overview_get_search_active;
  auto _temp_ret = call_wrap_v ((::AdwTabOverview*) (gobj_()));
  return _temp_ret;
}

// GMenuModel* /*none,nullable*/ adw_tab_overview_get_secondary_menu (AdwTabOverview* self /*none*/);
// ::GMenuModel* /*none,nullable*/ adw_tab_overview_get_secondary_menu (::AdwTabOverview* self /*none*/);
Gio::MenuModel base::TabOverviewBase::get_secondary_menu () noexcept
{
  typedef ::GMenuModel* (*call_wrap_t) (::AdwTabOverview* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_tab_overview_get_secondary_menu;
  auto _temp_ret = call_wrap_v ((::AdwTabOverview*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// gboolean adw_tab_overview_get_show_end_title_buttons (AdwTabOverview* self /*none*/);
// gboolean adw_tab_overview_get_show_end_title_buttons (::AdwTabOverview* self /*none*/);
bool base::TabOverviewBase::get_show_end_title_buttons () noexcept
{
  typedef gboolean (*call_wrap_t) (::AdwTabOverview* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_tab_overview_get_show_end_title_buttons;
  auto _temp_ret = call_wrap_v ((::AdwTabOverview*) (gobj_()));
  return _temp_ret;
}

// gboolean adw_tab_overview_get_show_start_title_buttons (AdwTabOverview* self /*none*/);
// gboolean adw_tab_overview_get_show_start_title_buttons (::AdwTabOverview* self /*none*/);
bool base::TabOverviewBase::get_show_start_title_buttons () noexcept
{
  typedef gboolean (*call_wrap_t) (::AdwTabOverview* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_tab_overview_get_show_start_title_buttons;
  auto _temp_ret = call_wrap_v ((::AdwTabOverview*) (gobj_()));
  return _temp_ret;
}

// AdwTabView* /*none,nullable*/ adw_tab_overview_get_view (AdwTabOverview* self /*none*/);
// ::AdwTabView* /*none,nullable*/ adw_tab_overview_get_view (::AdwTabOverview* self /*none*/);
Adw::TabView base::TabOverviewBase::get_view () noexcept
{
  typedef ::AdwTabView* (*call_wrap_t) (::AdwTabOverview* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_tab_overview_get_view;
  auto _temp_ret = call_wrap_v ((::AdwTabOverview*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// void adw_tab_overview_set_child (AdwTabOverview* self /*none*/, GtkWidget* child /*none,nullable*/);
// void adw_tab_overview_set_child (::AdwTabOverview* self /*none*/, ::GtkWidget* child /*none,nullable*/);
void base::TabOverviewBase::set_child (Gtk::Widget child) noexcept
{
  typedef void (*call_wrap_t) (::AdwTabOverview* self, ::GtkWidget* child);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_tab_overview_set_child;
  auto child_to_c = gi::unwrap (child, gi::transfer_none);
  call_wrap_v ((::AdwTabOverview*) (gobj_()), (::GtkWidget*) (child_to_c));
}
void base::TabOverviewBase::set_child () noexcept
{
  typedef void (*call_wrap_t) (::AdwTabOverview* self, ::GtkWidget* child);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_tab_overview_set_child;
  auto child_to_c = nullptr;
  call_wrap_v ((::AdwTabOverview*) (gobj_()), (::GtkWidget*) (child_to_c));
}

// void adw_tab_overview_set_enable_new_tab (AdwTabOverview* self /*none*/, gboolean enable_new_tab);
// void adw_tab_overview_set_enable_new_tab (::AdwTabOverview* self /*none*/, gboolean enable_new_tab);
void base::TabOverviewBase::set_enable_new_tab (gboolean enable_new_tab) noexcept
{
  typedef void (*call_wrap_t) (::AdwTabOverview* self, gboolean enable_new_tab);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_tab_overview_set_enable_new_tab;
  auto enable_new_tab_to_c = enable_new_tab;
  call_wrap_v ((::AdwTabOverview*) (gobj_()), (gboolean) (enable_new_tab_to_c));
}

// void adw_tab_overview_set_enable_search (AdwTabOverview* self /*none*/, gboolean enable_search);
// void adw_tab_overview_set_enable_search (::AdwTabOverview* self /*none*/, gboolean enable_search);
void base::TabOverviewBase::set_enable_search (gboolean enable_search) noexcept
{
  typedef void (*call_wrap_t) (::AdwTabOverview* self, gboolean enable_search);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_tab_overview_set_enable_search;
  auto enable_search_to_c = enable_search;
  call_wrap_v ((::AdwTabOverview*) (gobj_()), (gboolean) (enable_search_to_c));
}

// void adw_tab_overview_set_extra_drag_preload (AdwTabOverview* self /*none*/, gboolean preload);
// void adw_tab_overview_set_extra_drag_preload (::AdwTabOverview* self /*none*/, gboolean preload);
void base::TabOverviewBase::set_extra_drag_preload (gboolean preload) noexcept
{
  typedef void (*call_wrap_t) (::AdwTabOverview* self, gboolean preload);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_tab_overview_set_extra_drag_preload;
  auto preload_to_c = preload;
  call_wrap_v ((::AdwTabOverview*) (gobj_()), (gboolean) (preload_to_c));
}

// void adw_tab_overview_set_inverted (AdwTabOverview* self /*none*/, gboolean inverted);
// void adw_tab_overview_set_inverted (::AdwTabOverview* self /*none*/, gboolean inverted);
void base::TabOverviewBase::set_inverted (gboolean inverted) noexcept
{
  typedef void (*call_wrap_t) (::AdwTabOverview* self, gboolean inverted);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_tab_overview_set_inverted;
  auto inverted_to_c = inverted;
  call_wrap_v ((::AdwTabOverview*) (gobj_()), (gboolean) (inverted_to_c));
}

// void adw_tab_overview_set_open (AdwTabOverview* self /*none*/, gboolean open);
// void adw_tab_overview_set_open (::AdwTabOverview* self /*none*/, gboolean open);
void base::TabOverviewBase::set_open (gboolean open) noexcept
{
  typedef void (*call_wrap_t) (::AdwTabOverview* self, gboolean open);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_tab_overview_set_open;
  auto open_to_c = open;
  call_wrap_v ((::AdwTabOverview*) (gobj_()), (gboolean) (open_to_c));
}

// void adw_tab_overview_set_secondary_menu (AdwTabOverview* self /*none*/, GMenuModel* secondary_menu /*none,nullable*/);
// void adw_tab_overview_set_secondary_menu (::AdwTabOverview* self /*none*/, ::GMenuModel* secondary_menu /*none,nullable*/);
void base::TabOverviewBase::set_secondary_menu (Gio::MenuModel secondary_menu) noexcept
{
  typedef void (*call_wrap_t) (::AdwTabOverview* self, ::GMenuModel* secondary_menu);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_tab_overview_set_secondary_menu;
  auto secondary_menu_to_c = gi::unwrap (secondary_menu, gi::transfer_none);
  call_wrap_v ((::AdwTabOverview*) (gobj_()), (::GMenuModel*) (secondary_menu_to_c));
}
void base::TabOverviewBase::set_secondary_menu () noexcept
{
  typedef void (*call_wrap_t) (::AdwTabOverview* self, ::GMenuModel* secondary_menu);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_tab_overview_set_secondary_menu;
  auto secondary_menu_to_c = nullptr;
  call_wrap_v ((::AdwTabOverview*) (gobj_()), (::GMenuModel*) (secondary_menu_to_c));
}

// void adw_tab_overview_set_show_end_title_buttons (AdwTabOverview* self /*none*/, gboolean show_end_title_buttons);
// void adw_tab_overview_set_show_end_title_buttons (::AdwTabOverview* self /*none*/, gboolean show_end_title_buttons);
void base::TabOverviewBase::set_show_end_title_buttons (gboolean show_end_title_buttons) noexcept
{
  typedef void (*call_wrap_t) (::AdwTabOverview* self, gboolean show_end_title_buttons);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_tab_overview_set_show_end_title_buttons;
  auto show_end_title_buttons_to_c = show_end_title_buttons;
  call_wrap_v ((::AdwTabOverview*) (gobj_()), (gboolean) (show_end_title_buttons_to_c));
}

// void adw_tab_overview_set_show_start_title_buttons (AdwTabOverview* self /*none*/, gboolean show_start_title_buttons);
// void adw_tab_overview_set_show_start_title_buttons (::AdwTabOverview* self /*none*/, gboolean show_start_title_buttons);
void base::TabOverviewBase::set_show_start_title_buttons (gboolean show_start_title_buttons) noexcept
{
  typedef void (*call_wrap_t) (::AdwTabOverview* self, gboolean show_start_title_buttons);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_tab_overview_set_show_start_title_buttons;
  auto show_start_title_buttons_to_c = show_start_title_buttons;
  call_wrap_v ((::AdwTabOverview*) (gobj_()), (gboolean) (show_start_title_buttons_to_c));
}

// void adw_tab_overview_set_view (AdwTabOverview* self /*none*/, AdwTabView* view /*none,nullable*/);
// void adw_tab_overview_set_view (::AdwTabOverview* self /*none*/, ::AdwTabView* view /*none,nullable*/);
void base::TabOverviewBase::set_view (Adw::TabView view) noexcept
{
  typedef void (*call_wrap_t) (::AdwTabOverview* self, ::AdwTabView* view);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_tab_overview_set_view;
  auto view_to_c = gi::unwrap (view, gi::transfer_none);
  call_wrap_v ((::AdwTabOverview*) (gobj_()), (::AdwTabView*) (view_to_c));
}
void base::TabOverviewBase::set_view () noexcept
{
  typedef void (*call_wrap_t) (::AdwTabOverview* self, ::AdwTabView* view);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_tab_overview_set_view;
  auto view_to_c = nullptr;
  call_wrap_v ((::AdwTabOverview*) (gobj_()), (::AdwTabView*) (view_to_c));
}

// void adw_tab_overview_setup_extra_drop_target (AdwTabOverview* self /*none*/, GdkDragAction actions, GType* types /*none,nullable*/, gsize n_types);
// void adw_tab_overview_setup_extra_drop_target (::AdwTabOverview* self /*none*/, ::GdkDragAction actions, GType* types /*none,nullable*/, gsize n_types);
void base::TabOverviewBase::setup_extra_drop_target (Gdk::DragAction actions, const GType * types, gsize n_types) noexcept
{
  typedef void (*call_wrap_t) (::AdwTabOverview* self, ::GdkDragAction actions, GType* types, gsize n_types);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_tab_overview_setup_extra_drop_target;
  auto types_to_c = types;
  auto actions_to_c = gi::unwrap (actions);
  call_wrap_v ((::AdwTabOverview*) (gobj_()), (::GdkDragAction) (actions_to_c), (GType*) (types_to_c), (gsize) (n_types));
}





} // namespace base

} // namespace Adw

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<adw/taboverview_extra_def_impl.hpp>)
#include <adw/taboverview_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<adw/taboverview_extra_impl.hpp>)
#include <adw/taboverview_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Adw {

namespace impl {

namespace internal {

void TabOverviewClassDef::class_init (gpointer class_struct, gpointer factory)
{
  ::AdwTabOverviewClass *methods = (::AdwTabOverviewClass *) class_struct;
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
