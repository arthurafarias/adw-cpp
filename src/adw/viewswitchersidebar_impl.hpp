// AUTO-GENERATED

#ifndef _GI_ADW_VIEWSWITCHERSIDEBAR_IMPL_HPP_
#define _GI_ADW_VIEWSWITCHERSIDEBAR_IMPL_HPP_

namespace gi {

namespace repository {

namespace Adw {

namespace base {

// GtkWidget* /*none*/ adw_view_switcher_sidebar_new ();
// ::AdwViewSwitcherSidebar* /*none*/ adw_view_switcher_sidebar_new ();
Adw::ViewSwitcherSidebar base::ViewSwitcherSidebarBase::new_ () noexcept
{
  typedef ::AdwViewSwitcherSidebar* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) adw_view_switcher_sidebar_new;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// GtkFilter* /*none,nullable*/ adw_view_switcher_sidebar_get_filter (AdwViewSwitcherSidebar* self /*none*/);
// ::GtkFilter* /*none,nullable*/ adw_view_switcher_sidebar_get_filter (::AdwViewSwitcherSidebar* self /*none*/);
Gtk::Filter base::ViewSwitcherSidebarBase::get_filter () noexcept
{
  typedef ::GtkFilter* (*call_wrap_t) (::AdwViewSwitcherSidebar* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_view_switcher_sidebar_get_filter;
  auto _temp_ret = call_wrap_v ((::AdwViewSwitcherSidebar*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// AdwSidebarMode adw_view_switcher_sidebar_get_mode (AdwViewSwitcherSidebar* self /*none*/);
// ::AdwSidebarMode adw_view_switcher_sidebar_get_mode (::AdwViewSwitcherSidebar* self /*none*/);
Adw::SidebarMode base::ViewSwitcherSidebarBase::get_mode () noexcept
{
  typedef ::AdwSidebarMode (*call_wrap_t) (::AdwViewSwitcherSidebar* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_view_switcher_sidebar_get_mode;
  auto _temp_ret = call_wrap_v ((::AdwViewSwitcherSidebar*) (gobj_()));
  return gi::wrap (_temp_ret);
}

// GtkWidget* /*none,nullable*/ adw_view_switcher_sidebar_get_placeholder (AdwViewSwitcherSidebar* self /*none*/);
// ::GtkWidget* /*none,nullable*/ adw_view_switcher_sidebar_get_placeholder (::AdwViewSwitcherSidebar* self /*none*/);
Gtk::Widget base::ViewSwitcherSidebarBase::get_placeholder () noexcept
{
  typedef ::GtkWidget* (*call_wrap_t) (::AdwViewSwitcherSidebar* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_view_switcher_sidebar_get_placeholder;
  auto _temp_ret = call_wrap_v ((::AdwViewSwitcherSidebar*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// AdwViewStack* /*none,nullable*/ adw_view_switcher_sidebar_get_stack (AdwViewSwitcherSidebar* self /*none*/);
// ::AdwViewStack* /*none,nullable*/ adw_view_switcher_sidebar_get_stack (::AdwViewSwitcherSidebar* self /*none*/);
Adw::ViewStack base::ViewSwitcherSidebarBase::get_stack () noexcept
{
  typedef ::AdwViewStack* (*call_wrap_t) (::AdwViewSwitcherSidebar* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_view_switcher_sidebar_get_stack;
  auto _temp_ret = call_wrap_v ((::AdwViewSwitcherSidebar*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// void adw_view_switcher_sidebar_set_filter (AdwViewSwitcherSidebar* self /*none*/, GtkFilter* filter /*none,nullable*/);
// void adw_view_switcher_sidebar_set_filter (::AdwViewSwitcherSidebar* self /*none*/, ::GtkFilter* filter /*none,nullable*/);
void base::ViewSwitcherSidebarBase::set_filter (Gtk::Filter filter) noexcept
{
  typedef void (*call_wrap_t) (::AdwViewSwitcherSidebar* self, ::GtkFilter* filter);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_view_switcher_sidebar_set_filter;
  auto filter_to_c = gi::unwrap (filter, gi::transfer_none);
  call_wrap_v ((::AdwViewSwitcherSidebar*) (gobj_()), (::GtkFilter*) (filter_to_c));
}
void base::ViewSwitcherSidebarBase::set_filter () noexcept
{
  typedef void (*call_wrap_t) (::AdwViewSwitcherSidebar* self, ::GtkFilter* filter);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_view_switcher_sidebar_set_filter;
  auto filter_to_c = nullptr;
  call_wrap_v ((::AdwViewSwitcherSidebar*) (gobj_()), (::GtkFilter*) (filter_to_c));
}

// void adw_view_switcher_sidebar_set_mode (AdwViewSwitcherSidebar* self /*none*/, AdwSidebarMode mode);
// void adw_view_switcher_sidebar_set_mode (::AdwViewSwitcherSidebar* self /*none*/, ::AdwSidebarMode mode);
void base::ViewSwitcherSidebarBase::set_mode (Adw::SidebarMode mode) noexcept
{
  typedef void (*call_wrap_t) (::AdwViewSwitcherSidebar* self, ::AdwSidebarMode mode);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_view_switcher_sidebar_set_mode;
  auto mode_to_c = gi::unwrap (mode);
  call_wrap_v ((::AdwViewSwitcherSidebar*) (gobj_()), (::AdwSidebarMode) (mode_to_c));
}

// void adw_view_switcher_sidebar_set_placeholder (AdwViewSwitcherSidebar* self /*none*/, GtkWidget* placeholder /*none,nullable*/);
// void adw_view_switcher_sidebar_set_placeholder (::AdwViewSwitcherSidebar* self /*none*/, ::GtkWidget* placeholder /*none,nullable*/);
void base::ViewSwitcherSidebarBase::set_placeholder (Gtk::Widget placeholder) noexcept
{
  typedef void (*call_wrap_t) (::AdwViewSwitcherSidebar* self, ::GtkWidget* placeholder);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_view_switcher_sidebar_set_placeholder;
  auto placeholder_to_c = gi::unwrap (placeholder, gi::transfer_none);
  call_wrap_v ((::AdwViewSwitcherSidebar*) (gobj_()), (::GtkWidget*) (placeholder_to_c));
}
void base::ViewSwitcherSidebarBase::set_placeholder () noexcept
{
  typedef void (*call_wrap_t) (::AdwViewSwitcherSidebar* self, ::GtkWidget* placeholder);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_view_switcher_sidebar_set_placeholder;
  auto placeholder_to_c = nullptr;
  call_wrap_v ((::AdwViewSwitcherSidebar*) (gobj_()), (::GtkWidget*) (placeholder_to_c));
}

// void adw_view_switcher_sidebar_set_stack (AdwViewSwitcherSidebar* self /*none*/, AdwViewStack* stack /*none,nullable*/);
// void adw_view_switcher_sidebar_set_stack (::AdwViewSwitcherSidebar* self /*none*/, ::AdwViewStack* stack /*none,nullable*/);
void base::ViewSwitcherSidebarBase::set_stack (Adw::ViewStack stack) noexcept
{
  typedef void (*call_wrap_t) (::AdwViewSwitcherSidebar* self, ::AdwViewStack* stack);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_view_switcher_sidebar_set_stack;
  auto stack_to_c = gi::unwrap (stack, gi::transfer_none);
  call_wrap_v ((::AdwViewSwitcherSidebar*) (gobj_()), (::AdwViewStack*) (stack_to_c));
}
void base::ViewSwitcherSidebarBase::set_stack () noexcept
{
  typedef void (*call_wrap_t) (::AdwViewSwitcherSidebar* self, ::AdwViewStack* stack);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_view_switcher_sidebar_set_stack;
  auto stack_to_c = nullptr;
  call_wrap_v ((::AdwViewSwitcherSidebar*) (gobj_()), (::AdwViewStack*) (stack_to_c));
}



} // namespace base

} // namespace Adw

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<adw/viewswitchersidebar_extra_def_impl.hpp>)
#include <adw/viewswitchersidebar_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<adw/viewswitchersidebar_extra_impl.hpp>)
#include <adw/viewswitchersidebar_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Adw {

namespace impl {

namespace internal {

void ViewSwitcherSidebarClassDef::class_init (gpointer class_struct, gpointer factory)
{
  ::AdwViewSwitcherSidebarClass *methods = (::AdwViewSwitcherSidebarClass *) class_struct;
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
