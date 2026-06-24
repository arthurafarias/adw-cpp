// AUTO-GENERATED

#ifndef _GI_ADW_TOOLBARVIEW_IMPL_HPP_
#define _GI_ADW_TOOLBARVIEW_IMPL_HPP_

namespace gi {

namespace repository {

namespace Adw {

namespace base {

// GtkWidget* /*none*/ adw_toolbar_view_new ();
// ::AdwToolbarView* /*none*/ adw_toolbar_view_new ();
Adw::ToolbarView base::ToolbarViewBase::new_ () noexcept
{
  typedef ::AdwToolbarView* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) adw_toolbar_view_new;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// void adw_toolbar_view_add_bottom_bar (AdwToolbarView* self /*none*/, GtkWidget* widget /*none*/);
// void adw_toolbar_view_add_bottom_bar (::AdwToolbarView* self /*none*/, ::GtkWidget* widget /*none*/);
void base::ToolbarViewBase::add_bottom_bar (Gtk::Widget widget) noexcept
{
  typedef void (*call_wrap_t) (::AdwToolbarView* self, ::GtkWidget* widget);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_toolbar_view_add_bottom_bar;
  auto widget_to_c = gi::unwrap (widget, gi::transfer_none);
  call_wrap_v ((::AdwToolbarView*) (gobj_()), (::GtkWidget*) (widget_to_c));
}

// void adw_toolbar_view_add_top_bar (AdwToolbarView* self /*none*/, GtkWidget* widget /*none*/);
// void adw_toolbar_view_add_top_bar (::AdwToolbarView* self /*none*/, ::GtkWidget* widget /*none*/);
void base::ToolbarViewBase::add_top_bar (Gtk::Widget widget) noexcept
{
  typedef void (*call_wrap_t) (::AdwToolbarView* self, ::GtkWidget* widget);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_toolbar_view_add_top_bar;
  auto widget_to_c = gi::unwrap (widget, gi::transfer_none);
  call_wrap_v ((::AdwToolbarView*) (gobj_()), (::GtkWidget*) (widget_to_c));
}

// int adw_toolbar_view_get_bottom_bar_height (AdwToolbarView* self /*none*/);
// gint adw_toolbar_view_get_bottom_bar_height (::AdwToolbarView* self /*none*/);
gint base::ToolbarViewBase::get_bottom_bar_height () noexcept
{
  typedef gint (*call_wrap_t) (::AdwToolbarView* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_toolbar_view_get_bottom_bar_height;
  auto _temp_ret = call_wrap_v ((::AdwToolbarView*) (gobj_()));
  return _temp_ret;
}

// AdwToolbarStyle adw_toolbar_view_get_bottom_bar_style (AdwToolbarView* self /*none*/);
// ::AdwToolbarStyle adw_toolbar_view_get_bottom_bar_style (::AdwToolbarView* self /*none*/);
Adw::ToolbarStyle base::ToolbarViewBase::get_bottom_bar_style () noexcept
{
  typedef ::AdwToolbarStyle (*call_wrap_t) (::AdwToolbarView* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_toolbar_view_get_bottom_bar_style;
  auto _temp_ret = call_wrap_v ((::AdwToolbarView*) (gobj_()));
  return gi::wrap (_temp_ret);
}

// GtkWidget* /*none,nullable*/ adw_toolbar_view_get_content (AdwToolbarView* self /*none*/);
// ::GtkWidget* /*none,nullable*/ adw_toolbar_view_get_content (::AdwToolbarView* self /*none*/);
Gtk::Widget base::ToolbarViewBase::get_content () noexcept
{
  typedef ::GtkWidget* (*call_wrap_t) (::AdwToolbarView* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_toolbar_view_get_content;
  auto _temp_ret = call_wrap_v ((::AdwToolbarView*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// gboolean adw_toolbar_view_get_extend_content_to_bottom_edge (AdwToolbarView* self /*none*/);
// gboolean adw_toolbar_view_get_extend_content_to_bottom_edge (::AdwToolbarView* self /*none*/);
bool base::ToolbarViewBase::get_extend_content_to_bottom_edge () noexcept
{
  typedef gboolean (*call_wrap_t) (::AdwToolbarView* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_toolbar_view_get_extend_content_to_bottom_edge;
  auto _temp_ret = call_wrap_v ((::AdwToolbarView*) (gobj_()));
  return _temp_ret;
}

// gboolean adw_toolbar_view_get_extend_content_to_top_edge (AdwToolbarView* self /*none*/);
// gboolean adw_toolbar_view_get_extend_content_to_top_edge (::AdwToolbarView* self /*none*/);
bool base::ToolbarViewBase::get_extend_content_to_top_edge () noexcept
{
  typedef gboolean (*call_wrap_t) (::AdwToolbarView* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_toolbar_view_get_extend_content_to_top_edge;
  auto _temp_ret = call_wrap_v ((::AdwToolbarView*) (gobj_()));
  return _temp_ret;
}

// gboolean adw_toolbar_view_get_reveal_bottom_bars (AdwToolbarView* self /*none*/);
// gboolean adw_toolbar_view_get_reveal_bottom_bars (::AdwToolbarView* self /*none*/);
bool base::ToolbarViewBase::get_reveal_bottom_bars () noexcept
{
  typedef gboolean (*call_wrap_t) (::AdwToolbarView* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_toolbar_view_get_reveal_bottom_bars;
  auto _temp_ret = call_wrap_v ((::AdwToolbarView*) (gobj_()));
  return _temp_ret;
}

// gboolean adw_toolbar_view_get_reveal_top_bars (AdwToolbarView* self /*none*/);
// gboolean adw_toolbar_view_get_reveal_top_bars (::AdwToolbarView* self /*none*/);
bool base::ToolbarViewBase::get_reveal_top_bars () noexcept
{
  typedef gboolean (*call_wrap_t) (::AdwToolbarView* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_toolbar_view_get_reveal_top_bars;
  auto _temp_ret = call_wrap_v ((::AdwToolbarView*) (gobj_()));
  return _temp_ret;
}

// int adw_toolbar_view_get_top_bar_height (AdwToolbarView* self /*none*/);
// gint adw_toolbar_view_get_top_bar_height (::AdwToolbarView* self /*none*/);
gint base::ToolbarViewBase::get_top_bar_height () noexcept
{
  typedef gint (*call_wrap_t) (::AdwToolbarView* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_toolbar_view_get_top_bar_height;
  auto _temp_ret = call_wrap_v ((::AdwToolbarView*) (gobj_()));
  return _temp_ret;
}

// AdwToolbarStyle adw_toolbar_view_get_top_bar_style (AdwToolbarView* self /*none*/);
// ::AdwToolbarStyle adw_toolbar_view_get_top_bar_style (::AdwToolbarView* self /*none*/);
Adw::ToolbarStyle base::ToolbarViewBase::get_top_bar_style () noexcept
{
  typedef ::AdwToolbarStyle (*call_wrap_t) (::AdwToolbarView* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_toolbar_view_get_top_bar_style;
  auto _temp_ret = call_wrap_v ((::AdwToolbarView*) (gobj_()));
  return gi::wrap (_temp_ret);
}

// void adw_toolbar_view_remove (AdwToolbarView* self /*none*/, GtkWidget* widget /*none*/);
// void adw_toolbar_view_remove (::AdwToolbarView* self /*none*/, ::GtkWidget* widget /*none*/);
void base::ToolbarViewBase::remove (Gtk::Widget widget) noexcept
{
  typedef void (*call_wrap_t) (::AdwToolbarView* self, ::GtkWidget* widget);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_toolbar_view_remove;
  auto widget_to_c = gi::unwrap (widget, gi::transfer_none);
  call_wrap_v ((::AdwToolbarView*) (gobj_()), (::GtkWidget*) (widget_to_c));
}

// void adw_toolbar_view_set_bottom_bar_style (AdwToolbarView* self /*none*/, AdwToolbarStyle style);
// void adw_toolbar_view_set_bottom_bar_style (::AdwToolbarView* self /*none*/, ::AdwToolbarStyle style);
void base::ToolbarViewBase::set_bottom_bar_style (Adw::ToolbarStyle style) noexcept
{
  typedef void (*call_wrap_t) (::AdwToolbarView* self, ::AdwToolbarStyle style);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_toolbar_view_set_bottom_bar_style;
  auto style_to_c = gi::unwrap (style);
  call_wrap_v ((::AdwToolbarView*) (gobj_()), (::AdwToolbarStyle) (style_to_c));
}

// void adw_toolbar_view_set_content (AdwToolbarView* self /*none*/, GtkWidget* content /*none,nullable*/);
// void adw_toolbar_view_set_content (::AdwToolbarView* self /*none*/, ::GtkWidget* content /*none,nullable*/);
void base::ToolbarViewBase::set_content (Gtk::Widget content) noexcept
{
  typedef void (*call_wrap_t) (::AdwToolbarView* self, ::GtkWidget* content);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_toolbar_view_set_content;
  auto content_to_c = gi::unwrap (content, gi::transfer_none);
  call_wrap_v ((::AdwToolbarView*) (gobj_()), (::GtkWidget*) (content_to_c));
}
void base::ToolbarViewBase::set_content () noexcept
{
  typedef void (*call_wrap_t) (::AdwToolbarView* self, ::GtkWidget* content);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_toolbar_view_set_content;
  auto content_to_c = nullptr;
  call_wrap_v ((::AdwToolbarView*) (gobj_()), (::GtkWidget*) (content_to_c));
}

// void adw_toolbar_view_set_extend_content_to_bottom_edge (AdwToolbarView* self /*none*/, gboolean extend);
// void adw_toolbar_view_set_extend_content_to_bottom_edge (::AdwToolbarView* self /*none*/, gboolean extend);
void base::ToolbarViewBase::set_extend_content_to_bottom_edge (gboolean extend) noexcept
{
  typedef void (*call_wrap_t) (::AdwToolbarView* self, gboolean extend);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_toolbar_view_set_extend_content_to_bottom_edge;
  auto extend_to_c = extend;
  call_wrap_v ((::AdwToolbarView*) (gobj_()), (gboolean) (extend_to_c));
}

// void adw_toolbar_view_set_extend_content_to_top_edge (AdwToolbarView* self /*none*/, gboolean extend);
// void adw_toolbar_view_set_extend_content_to_top_edge (::AdwToolbarView* self /*none*/, gboolean extend);
void base::ToolbarViewBase::set_extend_content_to_top_edge (gboolean extend) noexcept
{
  typedef void (*call_wrap_t) (::AdwToolbarView* self, gboolean extend);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_toolbar_view_set_extend_content_to_top_edge;
  auto extend_to_c = extend;
  call_wrap_v ((::AdwToolbarView*) (gobj_()), (gboolean) (extend_to_c));
}

// void adw_toolbar_view_set_reveal_bottom_bars (AdwToolbarView* self /*none*/, gboolean reveal);
// void adw_toolbar_view_set_reveal_bottom_bars (::AdwToolbarView* self /*none*/, gboolean reveal);
void base::ToolbarViewBase::set_reveal_bottom_bars (gboolean reveal) noexcept
{
  typedef void (*call_wrap_t) (::AdwToolbarView* self, gboolean reveal);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_toolbar_view_set_reveal_bottom_bars;
  auto reveal_to_c = reveal;
  call_wrap_v ((::AdwToolbarView*) (gobj_()), (gboolean) (reveal_to_c));
}

// void adw_toolbar_view_set_reveal_top_bars (AdwToolbarView* self /*none*/, gboolean reveal);
// void adw_toolbar_view_set_reveal_top_bars (::AdwToolbarView* self /*none*/, gboolean reveal);
void base::ToolbarViewBase::set_reveal_top_bars (gboolean reveal) noexcept
{
  typedef void (*call_wrap_t) (::AdwToolbarView* self, gboolean reveal);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_toolbar_view_set_reveal_top_bars;
  auto reveal_to_c = reveal;
  call_wrap_v ((::AdwToolbarView*) (gobj_()), (gboolean) (reveal_to_c));
}

// void adw_toolbar_view_set_top_bar_style (AdwToolbarView* self /*none*/, AdwToolbarStyle style);
// void adw_toolbar_view_set_top_bar_style (::AdwToolbarView* self /*none*/, ::AdwToolbarStyle style);
void base::ToolbarViewBase::set_top_bar_style (Adw::ToolbarStyle style) noexcept
{
  typedef void (*call_wrap_t) (::AdwToolbarView* self, ::AdwToolbarStyle style);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_toolbar_view_set_top_bar_style;
  auto style_to_c = gi::unwrap (style);
  call_wrap_v ((::AdwToolbarView*) (gobj_()), (::AdwToolbarStyle) (style_to_c));
}


} // namespace base

} // namespace Adw

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<adw/toolbarview_extra_def_impl.hpp>)
#include <adw/toolbarview_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<adw/toolbarview_extra_impl.hpp>)
#include <adw/toolbarview_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Adw {

namespace impl {

namespace internal {

void ToolbarViewClassDef::class_init (gpointer class_struct, gpointer factory)
{
  ::AdwToolbarViewClass *methods = (::AdwToolbarViewClass *) class_struct;
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
