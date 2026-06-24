// AUTO-GENERATED

#ifndef _GI_ADW_TABVIEW_IMPL_HPP_
#define _GI_ADW_TABVIEW_IMPL_HPP_

namespace gi {

namespace repository {

namespace Adw {

namespace base {

// AdwTabView* /*none*/ adw_tab_view_new ();
// ::AdwTabView* /*none*/ adw_tab_view_new ();
Adw::TabView base::TabViewBase::new_ () noexcept
{
  typedef ::AdwTabView* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) adw_tab_view_new;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// AdwTabPage* /*none*/ adw_tab_view_add_page (AdwTabView* self /*none*/, GtkWidget* child /*none*/, AdwTabPage* parent /*none,nullable*/);
// ::AdwTabPage* /*none*/ adw_tab_view_add_page (::AdwTabView* self /*none*/, ::GtkWidget* child /*none*/, ::AdwTabPage* parent /*none,nullable*/);
Adw::TabPage base::TabViewBase::add_page (Gtk::Widget child, Adw::TabPage parent) noexcept
{
  typedef ::AdwTabPage* (*call_wrap_t) (::AdwTabView* self, ::GtkWidget* child, ::AdwTabPage* parent);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_tab_view_add_page;
  auto parent_to_c = gi::unwrap (parent, gi::transfer_none);
  auto child_to_c = gi::unwrap (child, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::AdwTabView*) (gobj_()), (::GtkWidget*) (child_to_c), (::AdwTabPage*) (parent_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none);
}
Adw::TabPage base::TabViewBase::add_page (Gtk::Widget child) noexcept
{
  typedef ::AdwTabPage* (*call_wrap_t) (::AdwTabView* self, ::GtkWidget* child, ::AdwTabPage* parent);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_tab_view_add_page;
  auto parent_to_c = nullptr;
  auto child_to_c = gi::unwrap (child, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::AdwTabView*) (gobj_()), (::GtkWidget*) (child_to_c), (::AdwTabPage*) (parent_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// void adw_tab_view_add_shortcuts (AdwTabView* self /*none*/, AdwTabViewShortcuts shortcuts);
// void adw_tab_view_add_shortcuts (::AdwTabView* self /*none*/, ::AdwTabViewShortcuts shortcuts);
void base::TabViewBase::add_shortcuts (Adw::TabViewShortcuts shortcuts) noexcept
{
  typedef void (*call_wrap_t) (::AdwTabView* self, ::AdwTabViewShortcuts shortcuts);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_tab_view_add_shortcuts;
  auto shortcuts_to_c = gi::unwrap (shortcuts);
  call_wrap_v ((::AdwTabView*) (gobj_()), (::AdwTabViewShortcuts) (shortcuts_to_c));
}

// AdwTabPage* /*none*/ adw_tab_view_append (AdwTabView* self /*none*/, GtkWidget* child /*none*/);
// ::AdwTabPage* /*none*/ adw_tab_view_append (::AdwTabView* self /*none*/, ::GtkWidget* child /*none*/);
Adw::TabPage base::TabViewBase::append (Gtk::Widget child) noexcept
{
  typedef ::AdwTabPage* (*call_wrap_t) (::AdwTabView* self, ::GtkWidget* child);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_tab_view_append;
  auto child_to_c = gi::unwrap (child, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::AdwTabView*) (gobj_()), (::GtkWidget*) (child_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// AdwTabPage* /*none*/ adw_tab_view_append_pinned (AdwTabView* self /*none*/, GtkWidget* child /*none*/);
// ::AdwTabPage* /*none*/ adw_tab_view_append_pinned (::AdwTabView* self /*none*/, ::GtkWidget* child /*none*/);
Adw::TabPage base::TabViewBase::append_pinned (Gtk::Widget child) noexcept
{
  typedef ::AdwTabPage* (*call_wrap_t) (::AdwTabView* self, ::GtkWidget* child);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_tab_view_append_pinned;
  auto child_to_c = gi::unwrap (child, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::AdwTabView*) (gobj_()), (::GtkWidget*) (child_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// void adw_tab_view_close_other_pages (AdwTabView* self /*none*/, AdwTabPage* page /*none*/);
// void adw_tab_view_close_other_pages (::AdwTabView* self /*none*/, ::AdwTabPage* page /*none*/);
void base::TabViewBase::close_other_pages (Adw::TabPage page) noexcept
{
  typedef void (*call_wrap_t) (::AdwTabView* self, ::AdwTabPage* page);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_tab_view_close_other_pages;
  auto page_to_c = gi::unwrap (page, gi::transfer_none);
  call_wrap_v ((::AdwTabView*) (gobj_()), (::AdwTabPage*) (page_to_c));
}

// void adw_tab_view_close_page (AdwTabView* self /*none*/, AdwTabPage* page /*none*/);
// void adw_tab_view_close_page (::AdwTabView* self /*none*/, ::AdwTabPage* page /*none*/);
void base::TabViewBase::close_page (Adw::TabPage page) noexcept
{
  typedef void (*call_wrap_t) (::AdwTabView* self, ::AdwTabPage* page);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_tab_view_close_page;
  auto page_to_c = gi::unwrap (page, gi::transfer_none);
  call_wrap_v ((::AdwTabView*) (gobj_()), (::AdwTabPage*) (page_to_c));
}

// void adw_tab_view_close_page_finish (AdwTabView* self /*none*/, AdwTabPage* page /*none*/, gboolean confirm);
// void adw_tab_view_close_page_finish (::AdwTabView* self /*none*/, ::AdwTabPage* page /*none*/, gboolean confirm);
void base::TabViewBase::close_page_finish (Adw::TabPage page, gboolean confirm) noexcept
{
  typedef void (*call_wrap_t) (::AdwTabView* self, ::AdwTabPage* page, gboolean confirm);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_tab_view_close_page_finish;
  auto confirm_to_c = confirm;
  auto page_to_c = gi::unwrap (page, gi::transfer_none);
  call_wrap_v ((::AdwTabView*) (gobj_()), (::AdwTabPage*) (page_to_c), (gboolean) (confirm_to_c));
}

// void adw_tab_view_close_pages_after (AdwTabView* self /*none*/, AdwTabPage* page /*none*/);
// void adw_tab_view_close_pages_after (::AdwTabView* self /*none*/, ::AdwTabPage* page /*none*/);
void base::TabViewBase::close_pages_after (Adw::TabPage page) noexcept
{
  typedef void (*call_wrap_t) (::AdwTabView* self, ::AdwTabPage* page);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_tab_view_close_pages_after;
  auto page_to_c = gi::unwrap (page, gi::transfer_none);
  call_wrap_v ((::AdwTabView*) (gobj_()), (::AdwTabPage*) (page_to_c));
}

// void adw_tab_view_close_pages_before (AdwTabView* self /*none*/, AdwTabPage* page /*none*/);
// void adw_tab_view_close_pages_before (::AdwTabView* self /*none*/, ::AdwTabPage* page /*none*/);
void base::TabViewBase::close_pages_before (Adw::TabPage page) noexcept
{
  typedef void (*call_wrap_t) (::AdwTabView* self, ::AdwTabPage* page);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_tab_view_close_pages_before;
  auto page_to_c = gi::unwrap (page, gi::transfer_none);
  call_wrap_v ((::AdwTabView*) (gobj_()), (::AdwTabPage*) (page_to_c));
}

// GIcon* /*none*/ adw_tab_view_get_default_icon (AdwTabView* self /*none*/);
// ::GIcon* /*none*/ adw_tab_view_get_default_icon (::AdwTabView* self /*none*/);
Gio::Icon base::TabViewBase::get_default_icon () noexcept
{
  typedef ::GIcon* (*call_wrap_t) (::AdwTabView* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_tab_view_get_default_icon;
  auto _temp_ret = call_wrap_v ((::AdwTabView*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// gboolean adw_tab_view_get_is_transferring_page (AdwTabView* self /*none*/);
// gboolean adw_tab_view_get_is_transferring_page (::AdwTabView* self /*none*/);
bool base::TabViewBase::get_is_transferring_page () noexcept
{
  typedef gboolean (*call_wrap_t) (::AdwTabView* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_tab_view_get_is_transferring_page;
  auto _temp_ret = call_wrap_v ((::AdwTabView*) (gobj_()));
  return _temp_ret;
}

// GMenuModel* /*none,nullable*/ adw_tab_view_get_menu_model (AdwTabView* self /*none*/);
// ::GMenuModel* /*none,nullable*/ adw_tab_view_get_menu_model (::AdwTabView* self /*none*/);
Gio::MenuModel base::TabViewBase::get_menu_model () noexcept
{
  typedef ::GMenuModel* (*call_wrap_t) (::AdwTabView* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_tab_view_get_menu_model;
  auto _temp_ret = call_wrap_v ((::AdwTabView*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// int adw_tab_view_get_n_pages (AdwTabView* self /*none*/);
// gint adw_tab_view_get_n_pages (::AdwTabView* self /*none*/);
gint base::TabViewBase::get_n_pages () noexcept
{
  typedef gint (*call_wrap_t) (::AdwTabView* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_tab_view_get_n_pages;
  auto _temp_ret = call_wrap_v ((::AdwTabView*) (gobj_()));
  return _temp_ret;
}

// int adw_tab_view_get_n_pinned_pages (AdwTabView* self /*none*/);
// gint adw_tab_view_get_n_pinned_pages (::AdwTabView* self /*none*/);
gint base::TabViewBase::get_n_pinned_pages () noexcept
{
  typedef gint (*call_wrap_t) (::AdwTabView* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_tab_view_get_n_pinned_pages;
  auto _temp_ret = call_wrap_v ((::AdwTabView*) (gobj_()));
  return _temp_ret;
}

// AdwTabPage* /*none*/ adw_tab_view_get_nth_page (AdwTabView* self /*none*/, int position);
// ::AdwTabPage* /*none*/ adw_tab_view_get_nth_page (::AdwTabView* self /*none*/, gint position);
Adw::TabPage base::TabViewBase::get_nth_page (gint position) noexcept
{
  typedef ::AdwTabPage* (*call_wrap_t) (::AdwTabView* self, gint position);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_tab_view_get_nth_page;
  auto position_to_c = position;
  auto _temp_ret = call_wrap_v ((::AdwTabView*) (gobj_()), (gint) (position_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// AdwTabPage* /*none*/ adw_tab_view_get_page (AdwTabView* self /*none*/, GtkWidget* child /*none*/);
// ::AdwTabPage* /*none*/ adw_tab_view_get_page (::AdwTabView* self /*none*/, ::GtkWidget* child /*none*/);
Adw::TabPage base::TabViewBase::get_page (Gtk::Widget child) noexcept
{
  typedef ::AdwTabPage* (*call_wrap_t) (::AdwTabView* self, ::GtkWidget* child);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_tab_view_get_page;
  auto child_to_c = gi::unwrap (child, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::AdwTabView*) (gobj_()), (::GtkWidget*) (child_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// int adw_tab_view_get_page_position (AdwTabView* self /*none*/, AdwTabPage* page /*none*/);
// gint adw_tab_view_get_page_position (::AdwTabView* self /*none*/, ::AdwTabPage* page /*none*/);
gint base::TabViewBase::get_page_position (Adw::TabPage page) noexcept
{
  typedef gint (*call_wrap_t) (::AdwTabView* self, ::AdwTabPage* page);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_tab_view_get_page_position;
  auto page_to_c = gi::unwrap (page, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::AdwTabView*) (gobj_()), (::AdwTabPage*) (page_to_c));
  return _temp_ret;
}

// GtkSelectionModel* /*full*/ adw_tab_view_get_pages (AdwTabView* self /*none*/);
// ::GtkSelectionModel* /*full*/ adw_tab_view_get_pages (::AdwTabView* self /*none*/);
Gtk::SelectionModel base::TabViewBase::get_pages () noexcept
{
  typedef ::GtkSelectionModel* (*call_wrap_t) (::AdwTabView* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_tab_view_get_pages;
  auto _temp_ret = call_wrap_v ((::AdwTabView*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// AdwTabPage* /*none,nullable*/ adw_tab_view_get_selected_page (AdwTabView* self /*none*/);
// ::AdwTabPage* /*none,nullable*/ adw_tab_view_get_selected_page (::AdwTabView* self /*none*/);
Adw::TabPage base::TabViewBase::get_selected_page () noexcept
{
  typedef ::AdwTabPage* (*call_wrap_t) (::AdwTabView* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_tab_view_get_selected_page;
  auto _temp_ret = call_wrap_v ((::AdwTabView*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// AdwTabViewShortcuts adw_tab_view_get_shortcuts (AdwTabView* self /*none*/);
// ::AdwTabViewShortcuts adw_tab_view_get_shortcuts (::AdwTabView* self /*none*/);
Adw::TabViewShortcuts base::TabViewBase::get_shortcuts () noexcept
{
  typedef ::AdwTabViewShortcuts (*call_wrap_t) (::AdwTabView* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_tab_view_get_shortcuts;
  auto _temp_ret = call_wrap_v ((::AdwTabView*) (gobj_()));
  return gi::wrap (_temp_ret);
}

// AdwTabPage* /*none*/ adw_tab_view_insert (AdwTabView* self /*none*/, GtkWidget* child /*none*/, int position);
// ::AdwTabPage* /*none*/ adw_tab_view_insert (::AdwTabView* self /*none*/, ::GtkWidget* child /*none*/, gint position);
Adw::TabPage base::TabViewBase::insert (Gtk::Widget child, gint position) noexcept
{
  typedef ::AdwTabPage* (*call_wrap_t) (::AdwTabView* self, ::GtkWidget* child, gint position);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_tab_view_insert;
  auto position_to_c = position;
  auto child_to_c = gi::unwrap (child, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::AdwTabView*) (gobj_()), (::GtkWidget*) (child_to_c), (gint) (position_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// AdwTabPage* /*none*/ adw_tab_view_insert_pinned (AdwTabView* self /*none*/, GtkWidget* child /*none*/, int position);
// ::AdwTabPage* /*none*/ adw_tab_view_insert_pinned (::AdwTabView* self /*none*/, ::GtkWidget* child /*none*/, gint position);
Adw::TabPage base::TabViewBase::insert_pinned (Gtk::Widget child, gint position) noexcept
{
  typedef ::AdwTabPage* (*call_wrap_t) (::AdwTabView* self, ::GtkWidget* child, gint position);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_tab_view_insert_pinned;
  auto position_to_c = position;
  auto child_to_c = gi::unwrap (child, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::AdwTabView*) (gobj_()), (::GtkWidget*) (child_to_c), (gint) (position_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// void adw_tab_view_invalidate_thumbnails (AdwTabView* self /*none*/);
// void adw_tab_view_invalidate_thumbnails (::AdwTabView* self /*none*/);
void base::TabViewBase::invalidate_thumbnails () noexcept
{
  typedef void (*call_wrap_t) (::AdwTabView* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_tab_view_invalidate_thumbnails;
  call_wrap_v ((::AdwTabView*) (gobj_()));
}

// AdwTabPage* /*none*/ adw_tab_view_prepend (AdwTabView* self /*none*/, GtkWidget* child /*none*/);
// ::AdwTabPage* /*none*/ adw_tab_view_prepend (::AdwTabView* self /*none*/, ::GtkWidget* child /*none*/);
Adw::TabPage base::TabViewBase::prepend (Gtk::Widget child) noexcept
{
  typedef ::AdwTabPage* (*call_wrap_t) (::AdwTabView* self, ::GtkWidget* child);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_tab_view_prepend;
  auto child_to_c = gi::unwrap (child, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::AdwTabView*) (gobj_()), (::GtkWidget*) (child_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// AdwTabPage* /*none*/ adw_tab_view_prepend_pinned (AdwTabView* self /*none*/, GtkWidget* child /*none*/);
// ::AdwTabPage* /*none*/ adw_tab_view_prepend_pinned (::AdwTabView* self /*none*/, ::GtkWidget* child /*none*/);
Adw::TabPage base::TabViewBase::prepend_pinned (Gtk::Widget child) noexcept
{
  typedef ::AdwTabPage* (*call_wrap_t) (::AdwTabView* self, ::GtkWidget* child);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_tab_view_prepend_pinned;
  auto child_to_c = gi::unwrap (child, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::AdwTabView*) (gobj_()), (::GtkWidget*) (child_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// void adw_tab_view_remove_shortcuts (AdwTabView* self /*none*/, AdwTabViewShortcuts shortcuts);
// void adw_tab_view_remove_shortcuts (::AdwTabView* self /*none*/, ::AdwTabViewShortcuts shortcuts);
void base::TabViewBase::remove_shortcuts (Adw::TabViewShortcuts shortcuts) noexcept
{
  typedef void (*call_wrap_t) (::AdwTabView* self, ::AdwTabViewShortcuts shortcuts);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_tab_view_remove_shortcuts;
  auto shortcuts_to_c = gi::unwrap (shortcuts);
  call_wrap_v ((::AdwTabView*) (gobj_()), (::AdwTabViewShortcuts) (shortcuts_to_c));
}

// gboolean adw_tab_view_reorder_backward (AdwTabView* self /*none*/, AdwTabPage* page /*none*/);
// gboolean adw_tab_view_reorder_backward (::AdwTabView* self /*none*/, ::AdwTabPage* page /*none*/);
bool base::TabViewBase::reorder_backward (Adw::TabPage page) noexcept
{
  typedef gboolean (*call_wrap_t) (::AdwTabView* self, ::AdwTabPage* page);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_tab_view_reorder_backward;
  auto page_to_c = gi::unwrap (page, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::AdwTabView*) (gobj_()), (::AdwTabPage*) (page_to_c));
  return _temp_ret;
}

// gboolean adw_tab_view_reorder_first (AdwTabView* self /*none*/, AdwTabPage* page /*none*/);
// gboolean adw_tab_view_reorder_first (::AdwTabView* self /*none*/, ::AdwTabPage* page /*none*/);
bool base::TabViewBase::reorder_first (Adw::TabPage page) noexcept
{
  typedef gboolean (*call_wrap_t) (::AdwTabView* self, ::AdwTabPage* page);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_tab_view_reorder_first;
  auto page_to_c = gi::unwrap (page, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::AdwTabView*) (gobj_()), (::AdwTabPage*) (page_to_c));
  return _temp_ret;
}

// gboolean adw_tab_view_reorder_forward (AdwTabView* self /*none*/, AdwTabPage* page /*none*/);
// gboolean adw_tab_view_reorder_forward (::AdwTabView* self /*none*/, ::AdwTabPage* page /*none*/);
bool base::TabViewBase::reorder_forward (Adw::TabPage page) noexcept
{
  typedef gboolean (*call_wrap_t) (::AdwTabView* self, ::AdwTabPage* page);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_tab_view_reorder_forward;
  auto page_to_c = gi::unwrap (page, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::AdwTabView*) (gobj_()), (::AdwTabPage*) (page_to_c));
  return _temp_ret;
}

// gboolean adw_tab_view_reorder_last (AdwTabView* self /*none*/, AdwTabPage* page /*none*/);
// gboolean adw_tab_view_reorder_last (::AdwTabView* self /*none*/, ::AdwTabPage* page /*none*/);
bool base::TabViewBase::reorder_last (Adw::TabPage page) noexcept
{
  typedef gboolean (*call_wrap_t) (::AdwTabView* self, ::AdwTabPage* page);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_tab_view_reorder_last;
  auto page_to_c = gi::unwrap (page, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::AdwTabView*) (gobj_()), (::AdwTabPage*) (page_to_c));
  return _temp_ret;
}

// gboolean adw_tab_view_reorder_page (AdwTabView* self /*none*/, AdwTabPage* page /*none*/, int position);
// gboolean adw_tab_view_reorder_page (::AdwTabView* self /*none*/, ::AdwTabPage* page /*none*/, gint position);
bool base::TabViewBase::reorder_page (Adw::TabPage page, gint position) noexcept
{
  typedef gboolean (*call_wrap_t) (::AdwTabView* self, ::AdwTabPage* page, gint position);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_tab_view_reorder_page;
  auto position_to_c = position;
  auto page_to_c = gi::unwrap (page, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::AdwTabView*) (gobj_()), (::AdwTabPage*) (page_to_c), (gint) (position_to_c));
  return _temp_ret;
}

// gboolean adw_tab_view_select_next_page (AdwTabView* self /*none*/);
// gboolean adw_tab_view_select_next_page (::AdwTabView* self /*none*/);
bool base::TabViewBase::select_next_page () noexcept
{
  typedef gboolean (*call_wrap_t) (::AdwTabView* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_tab_view_select_next_page;
  auto _temp_ret = call_wrap_v ((::AdwTabView*) (gobj_()));
  return _temp_ret;
}

// gboolean adw_tab_view_select_previous_page (AdwTabView* self /*none*/);
// gboolean adw_tab_view_select_previous_page (::AdwTabView* self /*none*/);
bool base::TabViewBase::select_previous_page () noexcept
{
  typedef gboolean (*call_wrap_t) (::AdwTabView* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_tab_view_select_previous_page;
  auto _temp_ret = call_wrap_v ((::AdwTabView*) (gobj_()));
  return _temp_ret;
}

// void adw_tab_view_set_default_icon (AdwTabView* self /*none*/, GIcon* default_icon /*none*/);
// void adw_tab_view_set_default_icon (::AdwTabView* self /*none*/, ::GIcon* default_icon /*none*/);
void base::TabViewBase::set_default_icon (Gio::Icon default_icon) noexcept
{
  typedef void (*call_wrap_t) (::AdwTabView* self, ::GIcon* default_icon);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_tab_view_set_default_icon;
  auto default_icon_to_c = gi::unwrap (default_icon, gi::transfer_none);
  call_wrap_v ((::AdwTabView*) (gobj_()), (::GIcon*) (default_icon_to_c));
}

// void adw_tab_view_set_menu_model (AdwTabView* self /*none*/, GMenuModel* menu_model /*none,nullable*/);
// void adw_tab_view_set_menu_model (::AdwTabView* self /*none*/, ::GMenuModel* menu_model /*none,nullable*/);
void base::TabViewBase::set_menu_model (Gio::MenuModel menu_model) noexcept
{
  typedef void (*call_wrap_t) (::AdwTabView* self, ::GMenuModel* menu_model);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_tab_view_set_menu_model;
  auto menu_model_to_c = gi::unwrap (menu_model, gi::transfer_none);
  call_wrap_v ((::AdwTabView*) (gobj_()), (::GMenuModel*) (menu_model_to_c));
}
void base::TabViewBase::set_menu_model () noexcept
{
  typedef void (*call_wrap_t) (::AdwTabView* self, ::GMenuModel* menu_model);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_tab_view_set_menu_model;
  auto menu_model_to_c = nullptr;
  call_wrap_v ((::AdwTabView*) (gobj_()), (::GMenuModel*) (menu_model_to_c));
}

// void adw_tab_view_set_page_pinned (AdwTabView* self /*none*/, AdwTabPage* page /*none*/, gboolean pinned);
// void adw_tab_view_set_page_pinned (::AdwTabView* self /*none*/, ::AdwTabPage* page /*none*/, gboolean pinned);
void base::TabViewBase::set_page_pinned (Adw::TabPage page, gboolean pinned) noexcept
{
  typedef void (*call_wrap_t) (::AdwTabView* self, ::AdwTabPage* page, gboolean pinned);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_tab_view_set_page_pinned;
  auto pinned_to_c = pinned;
  auto page_to_c = gi::unwrap (page, gi::transfer_none);
  call_wrap_v ((::AdwTabView*) (gobj_()), (::AdwTabPage*) (page_to_c), (gboolean) (pinned_to_c));
}

// void adw_tab_view_set_selected_page (AdwTabView* self /*none*/, AdwTabPage* selected_page /*none*/);
// void adw_tab_view_set_selected_page (::AdwTabView* self /*none*/, ::AdwTabPage* selected_page /*none*/);
void base::TabViewBase::set_selected_page (Adw::TabPage selected_page) noexcept
{
  typedef void (*call_wrap_t) (::AdwTabView* self, ::AdwTabPage* selected_page);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_tab_view_set_selected_page;
  auto selected_page_to_c = gi::unwrap (selected_page, gi::transfer_none);
  call_wrap_v ((::AdwTabView*) (gobj_()), (::AdwTabPage*) (selected_page_to_c));
}

// void adw_tab_view_set_shortcuts (AdwTabView* self /*none*/, AdwTabViewShortcuts shortcuts);
// void adw_tab_view_set_shortcuts (::AdwTabView* self /*none*/, ::AdwTabViewShortcuts shortcuts);
void base::TabViewBase::set_shortcuts (Adw::TabViewShortcuts shortcuts) noexcept
{
  typedef void (*call_wrap_t) (::AdwTabView* self, ::AdwTabViewShortcuts shortcuts);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_tab_view_set_shortcuts;
  auto shortcuts_to_c = gi::unwrap (shortcuts);
  call_wrap_v ((::AdwTabView*) (gobj_()), (::AdwTabViewShortcuts) (shortcuts_to_c));
}

// void adw_tab_view_transfer_page (AdwTabView* self /*none*/, AdwTabPage* page /*none*/, AdwTabView* other_view /*none*/, int position);
// void adw_tab_view_transfer_page (::AdwTabView* self /*none*/, ::AdwTabPage* page /*none*/, ::AdwTabView* other_view /*none*/, gint position);
void base::TabViewBase::transfer_page (Adw::TabPage page, Adw::TabView other_view, gint position) noexcept
{
  typedef void (*call_wrap_t) (::AdwTabView* self, ::AdwTabPage* page, ::AdwTabView* other_view, gint position);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_tab_view_transfer_page;
  auto position_to_c = position;
  auto other_view_to_c = gi::unwrap (other_view, gi::transfer_none);
  auto page_to_c = gi::unwrap (page, gi::transfer_none);
  call_wrap_v ((::AdwTabView*) (gobj_()), (::AdwTabPage*) (page_to_c), (::AdwTabView*) (other_view_to_c), (gint) (position_to_c));
}









} // namespace base

} // namespace Adw

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<adw/tabview_extra_def_impl.hpp>)
#include <adw/tabview_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<adw/tabview_extra_impl.hpp>)
#include <adw/tabview_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Adw {

namespace impl {

namespace internal {

void TabViewClassDef::class_init (gpointer class_struct, gpointer factory)
{
  ::AdwTabViewClass *methods = (::AdwTabViewClass *) class_struct;
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
