// AUTO-GENERATED

#ifndef _GI_ADW_OVERLAYSPLITVIEW_IMPL_HPP_
#define _GI_ADW_OVERLAYSPLITVIEW_IMPL_HPP_

namespace gi {

namespace repository {

namespace Adw {

namespace base {

Adw::Swipeable OverlaySplitViewBase::interface_ (gi::interface_tag<Adw::Swipeable>)
{ return gi::wrap ((Adw::Swipeable::BaseObjectType*) gobj_copy_(), gi::transfer_full); }

OverlaySplitViewBase::operator Adw::Swipeable ()
{ return interface_ (gi::interface_tag<Adw::Swipeable>()); }

// GtkWidget* /*none*/ adw_overlay_split_view_new ();
// ::AdwOverlaySplitView* /*none*/ adw_overlay_split_view_new ();
Adw::OverlaySplitView base::OverlaySplitViewBase::new_ () noexcept
{
  typedef ::AdwOverlaySplitView* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) adw_overlay_split_view_new;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// gboolean adw_overlay_split_view_get_collapsed (AdwOverlaySplitView* self /*none*/);
// gboolean adw_overlay_split_view_get_collapsed (::AdwOverlaySplitView* self /*none*/);
bool base::OverlaySplitViewBase::get_collapsed () noexcept
{
  typedef gboolean (*call_wrap_t) (::AdwOverlaySplitView* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_overlay_split_view_get_collapsed;
  auto _temp_ret = call_wrap_v ((::AdwOverlaySplitView*) (gobj_()));
  return _temp_ret;
}

// GtkWidget* /*none,nullable*/ adw_overlay_split_view_get_content (AdwOverlaySplitView* self /*none*/);
// ::GtkWidget* /*none,nullable*/ adw_overlay_split_view_get_content (::AdwOverlaySplitView* self /*none*/);
Gtk::Widget base::OverlaySplitViewBase::get_content () noexcept
{
  typedef ::GtkWidget* (*call_wrap_t) (::AdwOverlaySplitView* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_overlay_split_view_get_content;
  auto _temp_ret = call_wrap_v ((::AdwOverlaySplitView*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// gboolean adw_overlay_split_view_get_enable_hide_gesture (AdwOverlaySplitView* self /*none*/);
// gboolean adw_overlay_split_view_get_enable_hide_gesture (::AdwOverlaySplitView* self /*none*/);
bool base::OverlaySplitViewBase::get_enable_hide_gesture () noexcept
{
  typedef gboolean (*call_wrap_t) (::AdwOverlaySplitView* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_overlay_split_view_get_enable_hide_gesture;
  auto _temp_ret = call_wrap_v ((::AdwOverlaySplitView*) (gobj_()));
  return _temp_ret;
}

// gboolean adw_overlay_split_view_get_enable_show_gesture (AdwOverlaySplitView* self /*none*/);
// gboolean adw_overlay_split_view_get_enable_show_gesture (::AdwOverlaySplitView* self /*none*/);
bool base::OverlaySplitViewBase::get_enable_show_gesture () noexcept
{
  typedef gboolean (*call_wrap_t) (::AdwOverlaySplitView* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_overlay_split_view_get_enable_show_gesture;
  auto _temp_ret = call_wrap_v ((::AdwOverlaySplitView*) (gobj_()));
  return _temp_ret;
}

// double adw_overlay_split_view_get_max_sidebar_width (AdwOverlaySplitView* self /*none*/);
// gdouble adw_overlay_split_view_get_max_sidebar_width (::AdwOverlaySplitView* self /*none*/);
gdouble base::OverlaySplitViewBase::get_max_sidebar_width () noexcept
{
  typedef gdouble (*call_wrap_t) (::AdwOverlaySplitView* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_overlay_split_view_get_max_sidebar_width;
  auto _temp_ret = call_wrap_v ((::AdwOverlaySplitView*) (gobj_()));
  return _temp_ret;
}

// double adw_overlay_split_view_get_min_sidebar_width (AdwOverlaySplitView* self /*none*/);
// gdouble adw_overlay_split_view_get_min_sidebar_width (::AdwOverlaySplitView* self /*none*/);
gdouble base::OverlaySplitViewBase::get_min_sidebar_width () noexcept
{
  typedef gdouble (*call_wrap_t) (::AdwOverlaySplitView* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_overlay_split_view_get_min_sidebar_width;
  auto _temp_ret = call_wrap_v ((::AdwOverlaySplitView*) (gobj_()));
  return _temp_ret;
}

// gboolean adw_overlay_split_view_get_pin_sidebar (AdwOverlaySplitView* self /*none*/);
// gboolean adw_overlay_split_view_get_pin_sidebar (::AdwOverlaySplitView* self /*none*/);
bool base::OverlaySplitViewBase::get_pin_sidebar () noexcept
{
  typedef gboolean (*call_wrap_t) (::AdwOverlaySplitView* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_overlay_split_view_get_pin_sidebar;
  auto _temp_ret = call_wrap_v ((::AdwOverlaySplitView*) (gobj_()));
  return _temp_ret;
}

// gboolean adw_overlay_split_view_get_show_sidebar (AdwOverlaySplitView* self /*none*/);
// gboolean adw_overlay_split_view_get_show_sidebar (::AdwOverlaySplitView* self /*none*/);
bool base::OverlaySplitViewBase::get_show_sidebar () noexcept
{
  typedef gboolean (*call_wrap_t) (::AdwOverlaySplitView* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_overlay_split_view_get_show_sidebar;
  auto _temp_ret = call_wrap_v ((::AdwOverlaySplitView*) (gobj_()));
  return _temp_ret;
}

// GtkWidget* /*none,nullable*/ adw_overlay_split_view_get_sidebar (AdwOverlaySplitView* self /*none*/);
// ::GtkWidget* /*none,nullable*/ adw_overlay_split_view_get_sidebar (::AdwOverlaySplitView* self /*none*/);
Gtk::Widget base::OverlaySplitViewBase::get_sidebar () noexcept
{
  typedef ::GtkWidget* (*call_wrap_t) (::AdwOverlaySplitView* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_overlay_split_view_get_sidebar;
  auto _temp_ret = call_wrap_v ((::AdwOverlaySplitView*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// GtkPackType adw_overlay_split_view_get_sidebar_position (AdwOverlaySplitView* self /*none*/);
// ::GtkPackType adw_overlay_split_view_get_sidebar_position (::AdwOverlaySplitView* self /*none*/);
Gtk::PackType base::OverlaySplitViewBase::get_sidebar_position () noexcept
{
  typedef ::GtkPackType (*call_wrap_t) (::AdwOverlaySplitView* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_overlay_split_view_get_sidebar_position;
  auto _temp_ret = call_wrap_v ((::AdwOverlaySplitView*) (gobj_()));
  return gi::wrap (_temp_ret);
}

// double adw_overlay_split_view_get_sidebar_width_fraction (AdwOverlaySplitView* self /*none*/);
// gdouble adw_overlay_split_view_get_sidebar_width_fraction (::AdwOverlaySplitView* self /*none*/);
gdouble base::OverlaySplitViewBase::get_sidebar_width_fraction () noexcept
{
  typedef gdouble (*call_wrap_t) (::AdwOverlaySplitView* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_overlay_split_view_get_sidebar_width_fraction;
  auto _temp_ret = call_wrap_v ((::AdwOverlaySplitView*) (gobj_()));
  return _temp_ret;
}

// AdwLengthUnit adw_overlay_split_view_get_sidebar_width_unit (AdwOverlaySplitView* self /*none*/);
// ::AdwLengthUnit adw_overlay_split_view_get_sidebar_width_unit (::AdwOverlaySplitView* self /*none*/);
Adw::LengthUnit base::OverlaySplitViewBase::get_sidebar_width_unit () noexcept
{
  typedef ::AdwLengthUnit (*call_wrap_t) (::AdwOverlaySplitView* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_overlay_split_view_get_sidebar_width_unit;
  auto _temp_ret = call_wrap_v ((::AdwOverlaySplitView*) (gobj_()));
  return gi::wrap (_temp_ret);
}

// void adw_overlay_split_view_set_collapsed (AdwOverlaySplitView* self /*none*/, gboolean collapsed);
// void adw_overlay_split_view_set_collapsed (::AdwOverlaySplitView* self /*none*/, gboolean collapsed);
void base::OverlaySplitViewBase::set_collapsed (gboolean collapsed) noexcept
{
  typedef void (*call_wrap_t) (::AdwOverlaySplitView* self, gboolean collapsed);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_overlay_split_view_set_collapsed;
  auto collapsed_to_c = collapsed;
  call_wrap_v ((::AdwOverlaySplitView*) (gobj_()), (gboolean) (collapsed_to_c));
}

// void adw_overlay_split_view_set_content (AdwOverlaySplitView* self /*none*/, GtkWidget* content /*none,nullable*/);
// void adw_overlay_split_view_set_content (::AdwOverlaySplitView* self /*none*/, ::GtkWidget* content /*none,nullable*/);
void base::OverlaySplitViewBase::set_content (Gtk::Widget content) noexcept
{
  typedef void (*call_wrap_t) (::AdwOverlaySplitView* self, ::GtkWidget* content);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_overlay_split_view_set_content;
  auto content_to_c = gi::unwrap (content, gi::transfer_none);
  call_wrap_v ((::AdwOverlaySplitView*) (gobj_()), (::GtkWidget*) (content_to_c));
}
void base::OverlaySplitViewBase::set_content () noexcept
{
  typedef void (*call_wrap_t) (::AdwOverlaySplitView* self, ::GtkWidget* content);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_overlay_split_view_set_content;
  auto content_to_c = nullptr;
  call_wrap_v ((::AdwOverlaySplitView*) (gobj_()), (::GtkWidget*) (content_to_c));
}

// void adw_overlay_split_view_set_enable_hide_gesture (AdwOverlaySplitView* self /*none*/, gboolean enable_hide_gesture);
// void adw_overlay_split_view_set_enable_hide_gesture (::AdwOverlaySplitView* self /*none*/, gboolean enable_hide_gesture);
void base::OverlaySplitViewBase::set_enable_hide_gesture (gboolean enable_hide_gesture) noexcept
{
  typedef void (*call_wrap_t) (::AdwOverlaySplitView* self, gboolean enable_hide_gesture);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_overlay_split_view_set_enable_hide_gesture;
  auto enable_hide_gesture_to_c = enable_hide_gesture;
  call_wrap_v ((::AdwOverlaySplitView*) (gobj_()), (gboolean) (enable_hide_gesture_to_c));
}

// void adw_overlay_split_view_set_enable_show_gesture (AdwOverlaySplitView* self /*none*/, gboolean enable_show_gesture);
// void adw_overlay_split_view_set_enable_show_gesture (::AdwOverlaySplitView* self /*none*/, gboolean enable_show_gesture);
void base::OverlaySplitViewBase::set_enable_show_gesture (gboolean enable_show_gesture) noexcept
{
  typedef void (*call_wrap_t) (::AdwOverlaySplitView* self, gboolean enable_show_gesture);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_overlay_split_view_set_enable_show_gesture;
  auto enable_show_gesture_to_c = enable_show_gesture;
  call_wrap_v ((::AdwOverlaySplitView*) (gobj_()), (gboolean) (enable_show_gesture_to_c));
}

// void adw_overlay_split_view_set_max_sidebar_width (AdwOverlaySplitView* self /*none*/, double width);
// void adw_overlay_split_view_set_max_sidebar_width (::AdwOverlaySplitView* self /*none*/, gdouble width);
void base::OverlaySplitViewBase::set_max_sidebar_width (gdouble width) noexcept
{
  typedef void (*call_wrap_t) (::AdwOverlaySplitView* self, gdouble width);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_overlay_split_view_set_max_sidebar_width;
  auto width_to_c = width;
  call_wrap_v ((::AdwOverlaySplitView*) (gobj_()), (gdouble) (width_to_c));
}

// void adw_overlay_split_view_set_min_sidebar_width (AdwOverlaySplitView* self /*none*/, double width);
// void adw_overlay_split_view_set_min_sidebar_width (::AdwOverlaySplitView* self /*none*/, gdouble width);
void base::OverlaySplitViewBase::set_min_sidebar_width (gdouble width) noexcept
{
  typedef void (*call_wrap_t) (::AdwOverlaySplitView* self, gdouble width);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_overlay_split_view_set_min_sidebar_width;
  auto width_to_c = width;
  call_wrap_v ((::AdwOverlaySplitView*) (gobj_()), (gdouble) (width_to_c));
}

// void adw_overlay_split_view_set_pin_sidebar (AdwOverlaySplitView* self /*none*/, gboolean pin_sidebar);
// void adw_overlay_split_view_set_pin_sidebar (::AdwOverlaySplitView* self /*none*/, gboolean pin_sidebar);
void base::OverlaySplitViewBase::set_pin_sidebar (gboolean pin_sidebar) noexcept
{
  typedef void (*call_wrap_t) (::AdwOverlaySplitView* self, gboolean pin_sidebar);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_overlay_split_view_set_pin_sidebar;
  auto pin_sidebar_to_c = pin_sidebar;
  call_wrap_v ((::AdwOverlaySplitView*) (gobj_()), (gboolean) (pin_sidebar_to_c));
}

// void adw_overlay_split_view_set_show_sidebar (AdwOverlaySplitView* self /*none*/, gboolean show_sidebar);
// void adw_overlay_split_view_set_show_sidebar (::AdwOverlaySplitView* self /*none*/, gboolean show_sidebar);
void base::OverlaySplitViewBase::set_show_sidebar (gboolean show_sidebar) noexcept
{
  typedef void (*call_wrap_t) (::AdwOverlaySplitView* self, gboolean show_sidebar);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_overlay_split_view_set_show_sidebar;
  auto show_sidebar_to_c = show_sidebar;
  call_wrap_v ((::AdwOverlaySplitView*) (gobj_()), (gboolean) (show_sidebar_to_c));
}

// void adw_overlay_split_view_set_sidebar (AdwOverlaySplitView* self /*none*/, GtkWidget* sidebar /*none,nullable*/);
// void adw_overlay_split_view_set_sidebar (::AdwOverlaySplitView* self /*none*/, ::GtkWidget* sidebar /*none,nullable*/);
void base::OverlaySplitViewBase::set_sidebar (Gtk::Widget sidebar) noexcept
{
  typedef void (*call_wrap_t) (::AdwOverlaySplitView* self, ::GtkWidget* sidebar);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_overlay_split_view_set_sidebar;
  auto sidebar_to_c = gi::unwrap (sidebar, gi::transfer_none);
  call_wrap_v ((::AdwOverlaySplitView*) (gobj_()), (::GtkWidget*) (sidebar_to_c));
}
void base::OverlaySplitViewBase::set_sidebar () noexcept
{
  typedef void (*call_wrap_t) (::AdwOverlaySplitView* self, ::GtkWidget* sidebar);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_overlay_split_view_set_sidebar;
  auto sidebar_to_c = nullptr;
  call_wrap_v ((::AdwOverlaySplitView*) (gobj_()), (::GtkWidget*) (sidebar_to_c));
}

// void adw_overlay_split_view_set_sidebar_position (AdwOverlaySplitView* self /*none*/, GtkPackType position);
// void adw_overlay_split_view_set_sidebar_position (::AdwOverlaySplitView* self /*none*/, ::GtkPackType position);
void base::OverlaySplitViewBase::set_sidebar_position (Gtk::PackType position) noexcept
{
  typedef void (*call_wrap_t) (::AdwOverlaySplitView* self, ::GtkPackType position);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_overlay_split_view_set_sidebar_position;
  auto position_to_c = gi::unwrap (position);
  call_wrap_v ((::AdwOverlaySplitView*) (gobj_()), (::GtkPackType) (position_to_c));
}

// void adw_overlay_split_view_set_sidebar_width_fraction (AdwOverlaySplitView* self /*none*/, double fraction);
// void adw_overlay_split_view_set_sidebar_width_fraction (::AdwOverlaySplitView* self /*none*/, gdouble fraction);
void base::OverlaySplitViewBase::set_sidebar_width_fraction (gdouble fraction) noexcept
{
  typedef void (*call_wrap_t) (::AdwOverlaySplitView* self, gdouble fraction);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_overlay_split_view_set_sidebar_width_fraction;
  auto fraction_to_c = fraction;
  call_wrap_v ((::AdwOverlaySplitView*) (gobj_()), (gdouble) (fraction_to_c));
}

// void adw_overlay_split_view_set_sidebar_width_unit (AdwOverlaySplitView* self /*none*/, AdwLengthUnit unit);
// void adw_overlay_split_view_set_sidebar_width_unit (::AdwOverlaySplitView* self /*none*/, ::AdwLengthUnit unit);
void base::OverlaySplitViewBase::set_sidebar_width_unit (Adw::LengthUnit unit) noexcept
{
  typedef void (*call_wrap_t) (::AdwOverlaySplitView* self, ::AdwLengthUnit unit);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_overlay_split_view_set_sidebar_width_unit;
  auto unit_to_c = gi::unwrap (unit);
  call_wrap_v ((::AdwOverlaySplitView*) (gobj_()), (::AdwLengthUnit) (unit_to_c));
}


} // namespace base

} // namespace Adw

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<adw/overlaysplitview_extra_def_impl.hpp>)
#include <adw/overlaysplitview_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<adw/overlaysplitview_extra_impl.hpp>)
#include <adw/overlaysplitview_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Adw {

namespace impl {

namespace internal {

void OverlaySplitViewClassDef::class_init (gpointer class_struct, gpointer factory)
{
  ::AdwOverlaySplitViewClass *methods = (::AdwOverlaySplitViewClass *) class_struct;
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
