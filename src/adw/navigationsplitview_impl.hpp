// AUTO-GENERATED

#ifndef _GI_ADW_NAVIGATIONSPLITVIEW_IMPL_HPP_
#define _GI_ADW_NAVIGATIONSPLITVIEW_IMPL_HPP_

namespace gi {

namespace repository {

namespace Adw {

namespace base {

// GtkWidget* /*none*/ adw_navigation_split_view_new ();
// ::AdwNavigationSplitView* /*none*/ adw_navigation_split_view_new ();
Adw::NavigationSplitView base::NavigationSplitViewBase::new_ () noexcept
{
  typedef ::AdwNavigationSplitView* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) adw_navigation_split_view_new;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// gboolean adw_navigation_split_view_get_collapsed (AdwNavigationSplitView* self /*none*/);
// gboolean adw_navigation_split_view_get_collapsed (::AdwNavigationSplitView* self /*none*/);
bool base::NavigationSplitViewBase::get_collapsed () noexcept
{
  typedef gboolean (*call_wrap_t) (::AdwNavigationSplitView* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_navigation_split_view_get_collapsed;
  auto _temp_ret = call_wrap_v ((::AdwNavigationSplitView*) (gobj_()));
  return _temp_ret;
}

// AdwNavigationPage* /*none,nullable*/ adw_navigation_split_view_get_content (AdwNavigationSplitView* self /*none*/);
// ::AdwNavigationPage* /*none,nullable*/ adw_navigation_split_view_get_content (::AdwNavigationSplitView* self /*none*/);
Adw::NavigationPage base::NavigationSplitViewBase::get_content () noexcept
{
  typedef ::AdwNavigationPage* (*call_wrap_t) (::AdwNavigationSplitView* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_navigation_split_view_get_content;
  auto _temp_ret = call_wrap_v ((::AdwNavigationSplitView*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// double adw_navigation_split_view_get_max_sidebar_width (AdwNavigationSplitView* self /*none*/);
// gdouble adw_navigation_split_view_get_max_sidebar_width (::AdwNavigationSplitView* self /*none*/);
gdouble base::NavigationSplitViewBase::get_max_sidebar_width () noexcept
{
  typedef gdouble (*call_wrap_t) (::AdwNavigationSplitView* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_navigation_split_view_get_max_sidebar_width;
  auto _temp_ret = call_wrap_v ((::AdwNavigationSplitView*) (gobj_()));
  return _temp_ret;
}

// double adw_navigation_split_view_get_min_sidebar_width (AdwNavigationSplitView* self /*none*/);
// gdouble adw_navigation_split_view_get_min_sidebar_width (::AdwNavigationSplitView* self /*none*/);
gdouble base::NavigationSplitViewBase::get_min_sidebar_width () noexcept
{
  typedef gdouble (*call_wrap_t) (::AdwNavigationSplitView* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_navigation_split_view_get_min_sidebar_width;
  auto _temp_ret = call_wrap_v ((::AdwNavigationSplitView*) (gobj_()));
  return _temp_ret;
}

// gboolean adw_navigation_split_view_get_show_content (AdwNavigationSplitView* self /*none*/);
// gboolean adw_navigation_split_view_get_show_content (::AdwNavigationSplitView* self /*none*/);
bool base::NavigationSplitViewBase::get_show_content () noexcept
{
  typedef gboolean (*call_wrap_t) (::AdwNavigationSplitView* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_navigation_split_view_get_show_content;
  auto _temp_ret = call_wrap_v ((::AdwNavigationSplitView*) (gobj_()));
  return _temp_ret;
}

// AdwNavigationPage* /*none,nullable*/ adw_navigation_split_view_get_sidebar (AdwNavigationSplitView* self /*none*/);
// ::AdwNavigationPage* /*none,nullable*/ adw_navigation_split_view_get_sidebar (::AdwNavigationSplitView* self /*none*/);
Adw::NavigationPage base::NavigationSplitViewBase::get_sidebar () noexcept
{
  typedef ::AdwNavigationPage* (*call_wrap_t) (::AdwNavigationSplitView* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_navigation_split_view_get_sidebar;
  auto _temp_ret = call_wrap_v ((::AdwNavigationSplitView*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// GtkPackType adw_navigation_split_view_get_sidebar_position (AdwNavigationSplitView* self /*none*/);
// ::GtkPackType adw_navigation_split_view_get_sidebar_position (::AdwNavigationSplitView* self /*none*/);
Gtk::PackType base::NavigationSplitViewBase::get_sidebar_position () noexcept
{
  typedef ::GtkPackType (*call_wrap_t) (::AdwNavigationSplitView* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_navigation_split_view_get_sidebar_position;
  auto _temp_ret = call_wrap_v ((::AdwNavigationSplitView*) (gobj_()));
  return gi::wrap (_temp_ret);
}

// double adw_navigation_split_view_get_sidebar_width_fraction (AdwNavigationSplitView* self /*none*/);
// gdouble adw_navigation_split_view_get_sidebar_width_fraction (::AdwNavigationSplitView* self /*none*/);
gdouble base::NavigationSplitViewBase::get_sidebar_width_fraction () noexcept
{
  typedef gdouble (*call_wrap_t) (::AdwNavigationSplitView* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_navigation_split_view_get_sidebar_width_fraction;
  auto _temp_ret = call_wrap_v ((::AdwNavigationSplitView*) (gobj_()));
  return _temp_ret;
}

// AdwLengthUnit adw_navigation_split_view_get_sidebar_width_unit (AdwNavigationSplitView* self /*none*/);
// ::AdwLengthUnit adw_navigation_split_view_get_sidebar_width_unit (::AdwNavigationSplitView* self /*none*/);
Adw::LengthUnit base::NavigationSplitViewBase::get_sidebar_width_unit () noexcept
{
  typedef ::AdwLengthUnit (*call_wrap_t) (::AdwNavigationSplitView* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_navigation_split_view_get_sidebar_width_unit;
  auto _temp_ret = call_wrap_v ((::AdwNavigationSplitView*) (gobj_()));
  return gi::wrap (_temp_ret);
}

// void adw_navigation_split_view_set_collapsed (AdwNavigationSplitView* self /*none*/, gboolean collapsed);
// void adw_navigation_split_view_set_collapsed (::AdwNavigationSplitView* self /*none*/, gboolean collapsed);
void base::NavigationSplitViewBase::set_collapsed (gboolean collapsed) noexcept
{
  typedef void (*call_wrap_t) (::AdwNavigationSplitView* self, gboolean collapsed);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_navigation_split_view_set_collapsed;
  auto collapsed_to_c = collapsed;
  call_wrap_v ((::AdwNavigationSplitView*) (gobj_()), (gboolean) (collapsed_to_c));
}

// void adw_navigation_split_view_set_content (AdwNavigationSplitView* self /*none*/, AdwNavigationPage* content /*none,nullable*/);
// void adw_navigation_split_view_set_content (::AdwNavigationSplitView* self /*none*/, ::AdwNavigationPage* content /*none,nullable*/);
void base::NavigationSplitViewBase::set_content (Adw::NavigationPage content) noexcept
{
  typedef void (*call_wrap_t) (::AdwNavigationSplitView* self, ::AdwNavigationPage* content);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_navigation_split_view_set_content;
  auto content_to_c = gi::unwrap (content, gi::transfer_none);
  call_wrap_v ((::AdwNavigationSplitView*) (gobj_()), (::AdwNavigationPage*) (content_to_c));
}
void base::NavigationSplitViewBase::set_content () noexcept
{
  typedef void (*call_wrap_t) (::AdwNavigationSplitView* self, ::AdwNavigationPage* content);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_navigation_split_view_set_content;
  auto content_to_c = nullptr;
  call_wrap_v ((::AdwNavigationSplitView*) (gobj_()), (::AdwNavigationPage*) (content_to_c));
}

// void adw_navigation_split_view_set_max_sidebar_width (AdwNavigationSplitView* self /*none*/, double width);
// void adw_navigation_split_view_set_max_sidebar_width (::AdwNavigationSplitView* self /*none*/, gdouble width);
void base::NavigationSplitViewBase::set_max_sidebar_width (gdouble width) noexcept
{
  typedef void (*call_wrap_t) (::AdwNavigationSplitView* self, gdouble width);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_navigation_split_view_set_max_sidebar_width;
  auto width_to_c = width;
  call_wrap_v ((::AdwNavigationSplitView*) (gobj_()), (gdouble) (width_to_c));
}

// void adw_navigation_split_view_set_min_sidebar_width (AdwNavigationSplitView* self /*none*/, double width);
// void adw_navigation_split_view_set_min_sidebar_width (::AdwNavigationSplitView* self /*none*/, gdouble width);
void base::NavigationSplitViewBase::set_min_sidebar_width (gdouble width) noexcept
{
  typedef void (*call_wrap_t) (::AdwNavigationSplitView* self, gdouble width);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_navigation_split_view_set_min_sidebar_width;
  auto width_to_c = width;
  call_wrap_v ((::AdwNavigationSplitView*) (gobj_()), (gdouble) (width_to_c));
}

// void adw_navigation_split_view_set_show_content (AdwNavigationSplitView* self /*none*/, gboolean show_content);
// void adw_navigation_split_view_set_show_content (::AdwNavigationSplitView* self /*none*/, gboolean show_content);
void base::NavigationSplitViewBase::set_show_content (gboolean show_content) noexcept
{
  typedef void (*call_wrap_t) (::AdwNavigationSplitView* self, gboolean show_content);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_navigation_split_view_set_show_content;
  auto show_content_to_c = show_content;
  call_wrap_v ((::AdwNavigationSplitView*) (gobj_()), (gboolean) (show_content_to_c));
}

// void adw_navigation_split_view_set_sidebar (AdwNavigationSplitView* self /*none*/, AdwNavigationPage* sidebar /*none,nullable*/);
// void adw_navigation_split_view_set_sidebar (::AdwNavigationSplitView* self /*none*/, ::AdwNavigationPage* sidebar /*none,nullable*/);
void base::NavigationSplitViewBase::set_sidebar (Adw::NavigationPage sidebar) noexcept
{
  typedef void (*call_wrap_t) (::AdwNavigationSplitView* self, ::AdwNavigationPage* sidebar);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_navigation_split_view_set_sidebar;
  auto sidebar_to_c = gi::unwrap (sidebar, gi::transfer_none);
  call_wrap_v ((::AdwNavigationSplitView*) (gobj_()), (::AdwNavigationPage*) (sidebar_to_c));
}
void base::NavigationSplitViewBase::set_sidebar () noexcept
{
  typedef void (*call_wrap_t) (::AdwNavigationSplitView* self, ::AdwNavigationPage* sidebar);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_navigation_split_view_set_sidebar;
  auto sidebar_to_c = nullptr;
  call_wrap_v ((::AdwNavigationSplitView*) (gobj_()), (::AdwNavigationPage*) (sidebar_to_c));
}

// void adw_navigation_split_view_set_sidebar_position (AdwNavigationSplitView* self /*none*/, GtkPackType position);
// void adw_navigation_split_view_set_sidebar_position (::AdwNavigationSplitView* self /*none*/, ::GtkPackType position);
void base::NavigationSplitViewBase::set_sidebar_position (Gtk::PackType position) noexcept
{
  typedef void (*call_wrap_t) (::AdwNavigationSplitView* self, ::GtkPackType position);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_navigation_split_view_set_sidebar_position;
  auto position_to_c = gi::unwrap (position);
  call_wrap_v ((::AdwNavigationSplitView*) (gobj_()), (::GtkPackType) (position_to_c));
}

// void adw_navigation_split_view_set_sidebar_width_fraction (AdwNavigationSplitView* self /*none*/, double fraction);
// void adw_navigation_split_view_set_sidebar_width_fraction (::AdwNavigationSplitView* self /*none*/, gdouble fraction);
void base::NavigationSplitViewBase::set_sidebar_width_fraction (gdouble fraction) noexcept
{
  typedef void (*call_wrap_t) (::AdwNavigationSplitView* self, gdouble fraction);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_navigation_split_view_set_sidebar_width_fraction;
  auto fraction_to_c = fraction;
  call_wrap_v ((::AdwNavigationSplitView*) (gobj_()), (gdouble) (fraction_to_c));
}

// void adw_navigation_split_view_set_sidebar_width_unit (AdwNavigationSplitView* self /*none*/, AdwLengthUnit unit);
// void adw_navigation_split_view_set_sidebar_width_unit (::AdwNavigationSplitView* self /*none*/, ::AdwLengthUnit unit);
void base::NavigationSplitViewBase::set_sidebar_width_unit (Adw::LengthUnit unit) noexcept
{
  typedef void (*call_wrap_t) (::AdwNavigationSplitView* self, ::AdwLengthUnit unit);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_navigation_split_view_set_sidebar_width_unit;
  auto unit_to_c = gi::unwrap (unit);
  call_wrap_v ((::AdwNavigationSplitView*) (gobj_()), (::AdwLengthUnit) (unit_to_c));
}


} // namespace base

} // namespace Adw

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<adw/navigationsplitview_extra_def_impl.hpp>)
#include <adw/navigationsplitview_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<adw/navigationsplitview_extra_impl.hpp>)
#include <adw/navigationsplitview_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Adw {

namespace impl {

namespace internal {

void NavigationSplitViewClassDef::class_init (gpointer class_struct, gpointer factory)
{
  ::AdwNavigationSplitViewClass *methods = (::AdwNavigationSplitViewClass *) class_struct;
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
