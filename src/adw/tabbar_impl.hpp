// AUTO-GENERATED

#ifndef _GI_ADW_TABBAR_IMPL_HPP_
#define _GI_ADW_TABBAR_IMPL_HPP_

namespace gi {

namespace repository {

namespace Adw {

namespace base {

// AdwTabBar* /*none*/ adw_tab_bar_new ();
// ::AdwTabBar* /*none*/ adw_tab_bar_new ();
Adw::TabBar base::TabBarBase::new_ () noexcept
{
  typedef ::AdwTabBar* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) adw_tab_bar_new;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// gboolean adw_tab_bar_get_autohide (AdwTabBar* self /*none*/);
// gboolean adw_tab_bar_get_autohide (::AdwTabBar* self /*none*/);
bool base::TabBarBase::get_autohide () noexcept
{
  typedef gboolean (*call_wrap_t) (::AdwTabBar* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_tab_bar_get_autohide;
  auto _temp_ret = call_wrap_v ((::AdwTabBar*) (gobj_()));
  return _temp_ret;
}

// GtkWidget* /*none,nullable*/ adw_tab_bar_get_end_action_widget (AdwTabBar* self /*none*/);
// ::GtkWidget* /*none,nullable*/ adw_tab_bar_get_end_action_widget (::AdwTabBar* self /*none*/);
Gtk::Widget base::TabBarBase::get_end_action_widget () noexcept
{
  typedef ::GtkWidget* (*call_wrap_t) (::AdwTabBar* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_tab_bar_get_end_action_widget;
  auto _temp_ret = call_wrap_v ((::AdwTabBar*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// gboolean adw_tab_bar_get_expand_tabs (AdwTabBar* self /*none*/);
// gboolean adw_tab_bar_get_expand_tabs (::AdwTabBar* self /*none*/);
bool base::TabBarBase::get_expand_tabs () noexcept
{
  typedef gboolean (*call_wrap_t) (::AdwTabBar* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_tab_bar_get_expand_tabs;
  auto _temp_ret = call_wrap_v ((::AdwTabBar*) (gobj_()));
  return _temp_ret;
}

// GdkDragAction adw_tab_bar_get_extra_drag_preferred_action (AdwTabBar* self /*none*/);
// ::GdkDragAction adw_tab_bar_get_extra_drag_preferred_action (::AdwTabBar* self /*none*/);
Gdk::DragAction base::TabBarBase::get_extra_drag_preferred_action () noexcept
{
  typedef ::GdkDragAction (*call_wrap_t) (::AdwTabBar* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_tab_bar_get_extra_drag_preferred_action;
  auto _temp_ret = call_wrap_v ((::AdwTabBar*) (gobj_()));
  return gi::wrap (_temp_ret);
}

// gboolean adw_tab_bar_get_extra_drag_preload (AdwTabBar* self /*none*/);
// gboolean adw_tab_bar_get_extra_drag_preload (::AdwTabBar* self /*none*/);
bool base::TabBarBase::get_extra_drag_preload () noexcept
{
  typedef gboolean (*call_wrap_t) (::AdwTabBar* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_tab_bar_get_extra_drag_preload;
  auto _temp_ret = call_wrap_v ((::AdwTabBar*) (gobj_()));
  return _temp_ret;
}

// gboolean adw_tab_bar_get_inverted (AdwTabBar* self /*none*/);
// gboolean adw_tab_bar_get_inverted (::AdwTabBar* self /*none*/);
bool base::TabBarBase::get_inverted () noexcept
{
  typedef gboolean (*call_wrap_t) (::AdwTabBar* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_tab_bar_get_inverted;
  auto _temp_ret = call_wrap_v ((::AdwTabBar*) (gobj_()));
  return _temp_ret;
}

// gboolean adw_tab_bar_get_is_overflowing (AdwTabBar* self /*none*/);
// gboolean adw_tab_bar_get_is_overflowing (::AdwTabBar* self /*none*/);
bool base::TabBarBase::get_is_overflowing () noexcept
{
  typedef gboolean (*call_wrap_t) (::AdwTabBar* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_tab_bar_get_is_overflowing;
  auto _temp_ret = call_wrap_v ((::AdwTabBar*) (gobj_()));
  return _temp_ret;
}

// GtkWidget* /*none,nullable*/ adw_tab_bar_get_start_action_widget (AdwTabBar* self /*none*/);
// ::GtkWidget* /*none,nullable*/ adw_tab_bar_get_start_action_widget (::AdwTabBar* self /*none*/);
Gtk::Widget base::TabBarBase::get_start_action_widget () noexcept
{
  typedef ::GtkWidget* (*call_wrap_t) (::AdwTabBar* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_tab_bar_get_start_action_widget;
  auto _temp_ret = call_wrap_v ((::AdwTabBar*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// gboolean adw_tab_bar_get_tabs_revealed (AdwTabBar* self /*none*/);
// gboolean adw_tab_bar_get_tabs_revealed (::AdwTabBar* self /*none*/);
bool base::TabBarBase::get_tabs_revealed () noexcept
{
  typedef gboolean (*call_wrap_t) (::AdwTabBar* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_tab_bar_get_tabs_revealed;
  auto _temp_ret = call_wrap_v ((::AdwTabBar*) (gobj_()));
  return _temp_ret;
}

// AdwTabView* /*none,nullable*/ adw_tab_bar_get_view (AdwTabBar* self /*none*/);
// ::AdwTabView* /*none,nullable*/ adw_tab_bar_get_view (::AdwTabBar* self /*none*/);
Adw::TabView base::TabBarBase::get_view () noexcept
{
  typedef ::AdwTabView* (*call_wrap_t) (::AdwTabBar* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_tab_bar_get_view;
  auto _temp_ret = call_wrap_v ((::AdwTabBar*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// void adw_tab_bar_set_autohide (AdwTabBar* self /*none*/, gboolean autohide);
// void adw_tab_bar_set_autohide (::AdwTabBar* self /*none*/, gboolean autohide);
void base::TabBarBase::set_autohide (gboolean autohide) noexcept
{
  typedef void (*call_wrap_t) (::AdwTabBar* self, gboolean autohide);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_tab_bar_set_autohide;
  auto autohide_to_c = autohide;
  call_wrap_v ((::AdwTabBar*) (gobj_()), (gboolean) (autohide_to_c));
}

// void adw_tab_bar_set_end_action_widget (AdwTabBar* self /*none*/, GtkWidget* widget /*none,nullable*/);
// void adw_tab_bar_set_end_action_widget (::AdwTabBar* self /*none*/, ::GtkWidget* widget /*none,nullable*/);
void base::TabBarBase::set_end_action_widget (Gtk::Widget widget) noexcept
{
  typedef void (*call_wrap_t) (::AdwTabBar* self, ::GtkWidget* widget);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_tab_bar_set_end_action_widget;
  auto widget_to_c = gi::unwrap (widget, gi::transfer_none);
  call_wrap_v ((::AdwTabBar*) (gobj_()), (::GtkWidget*) (widget_to_c));
}
void base::TabBarBase::set_end_action_widget () noexcept
{
  typedef void (*call_wrap_t) (::AdwTabBar* self, ::GtkWidget* widget);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_tab_bar_set_end_action_widget;
  auto widget_to_c = nullptr;
  call_wrap_v ((::AdwTabBar*) (gobj_()), (::GtkWidget*) (widget_to_c));
}

// void adw_tab_bar_set_expand_tabs (AdwTabBar* self /*none*/, gboolean expand_tabs);
// void adw_tab_bar_set_expand_tabs (::AdwTabBar* self /*none*/, gboolean expand_tabs);
void base::TabBarBase::set_expand_tabs (gboolean expand_tabs) noexcept
{
  typedef void (*call_wrap_t) (::AdwTabBar* self, gboolean expand_tabs);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_tab_bar_set_expand_tabs;
  auto expand_tabs_to_c = expand_tabs;
  call_wrap_v ((::AdwTabBar*) (gobj_()), (gboolean) (expand_tabs_to_c));
}

// void adw_tab_bar_set_extra_drag_preload (AdwTabBar* self /*none*/, gboolean preload);
// void adw_tab_bar_set_extra_drag_preload (::AdwTabBar* self /*none*/, gboolean preload);
void base::TabBarBase::set_extra_drag_preload (gboolean preload) noexcept
{
  typedef void (*call_wrap_t) (::AdwTabBar* self, gboolean preload);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_tab_bar_set_extra_drag_preload;
  auto preload_to_c = preload;
  call_wrap_v ((::AdwTabBar*) (gobj_()), (gboolean) (preload_to_c));
}

// void adw_tab_bar_set_inverted (AdwTabBar* self /*none*/, gboolean inverted);
// void adw_tab_bar_set_inverted (::AdwTabBar* self /*none*/, gboolean inverted);
void base::TabBarBase::set_inverted (gboolean inverted) noexcept
{
  typedef void (*call_wrap_t) (::AdwTabBar* self, gboolean inverted);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_tab_bar_set_inverted;
  auto inverted_to_c = inverted;
  call_wrap_v ((::AdwTabBar*) (gobj_()), (gboolean) (inverted_to_c));
}

// void adw_tab_bar_set_start_action_widget (AdwTabBar* self /*none*/, GtkWidget* widget /*none,nullable*/);
// void adw_tab_bar_set_start_action_widget (::AdwTabBar* self /*none*/, ::GtkWidget* widget /*none,nullable*/);
void base::TabBarBase::set_start_action_widget (Gtk::Widget widget) noexcept
{
  typedef void (*call_wrap_t) (::AdwTabBar* self, ::GtkWidget* widget);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_tab_bar_set_start_action_widget;
  auto widget_to_c = gi::unwrap (widget, gi::transfer_none);
  call_wrap_v ((::AdwTabBar*) (gobj_()), (::GtkWidget*) (widget_to_c));
}
void base::TabBarBase::set_start_action_widget () noexcept
{
  typedef void (*call_wrap_t) (::AdwTabBar* self, ::GtkWidget* widget);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_tab_bar_set_start_action_widget;
  auto widget_to_c = nullptr;
  call_wrap_v ((::AdwTabBar*) (gobj_()), (::GtkWidget*) (widget_to_c));
}

// void adw_tab_bar_set_view (AdwTabBar* self /*none*/, AdwTabView* view /*none,nullable*/);
// void adw_tab_bar_set_view (::AdwTabBar* self /*none*/, ::AdwTabView* view /*none,nullable*/);
void base::TabBarBase::set_view (Adw::TabView view) noexcept
{
  typedef void (*call_wrap_t) (::AdwTabBar* self, ::AdwTabView* view);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_tab_bar_set_view;
  auto view_to_c = gi::unwrap (view, gi::transfer_none);
  call_wrap_v ((::AdwTabBar*) (gobj_()), (::AdwTabView*) (view_to_c));
}
void base::TabBarBase::set_view () noexcept
{
  typedef void (*call_wrap_t) (::AdwTabBar* self, ::AdwTabView* view);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_tab_bar_set_view;
  auto view_to_c = nullptr;
  call_wrap_v ((::AdwTabBar*) (gobj_()), (::AdwTabView*) (view_to_c));
}

// void adw_tab_bar_setup_extra_drop_target (AdwTabBar* self /*none*/, GdkDragAction actions, GType* types /*none,nullable*/, gsize n_types);
// void adw_tab_bar_setup_extra_drop_target (::AdwTabBar* self /*none*/, ::GdkDragAction actions, GType* types /*none,nullable*/, gsize n_types);
void base::TabBarBase::setup_extra_drop_target (Gdk::DragAction actions, const GType * types, gsize n_types) noexcept
{
  typedef void (*call_wrap_t) (::AdwTabBar* self, ::GdkDragAction actions, GType* types, gsize n_types);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_tab_bar_setup_extra_drop_target;
  auto types_to_c = types;
  auto actions_to_c = gi::unwrap (actions);
  call_wrap_v ((::AdwTabBar*) (gobj_()), (::GdkDragAction) (actions_to_c), (GType*) (types_to_c), (gsize) (n_types));
}




} // namespace base

} // namespace Adw

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<adw/tabbar_extra_def_impl.hpp>)
#include <adw/tabbar_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<adw/tabbar_extra_impl.hpp>)
#include <adw/tabbar_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Adw {

namespace impl {

namespace internal {

void TabBarClassDef::class_init (gpointer class_struct, gpointer factory)
{
  ::AdwTabBarClass *methods = (::AdwTabBarClass *) class_struct;
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
