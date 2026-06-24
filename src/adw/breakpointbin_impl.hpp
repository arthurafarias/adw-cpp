// AUTO-GENERATED

#ifndef _GI_ADW_BREAKPOINTBIN_IMPL_HPP_
#define _GI_ADW_BREAKPOINTBIN_IMPL_HPP_

namespace gi {

namespace repository {

namespace Adw {

namespace base {

// GtkWidget* /*none*/ adw_breakpoint_bin_new ();
// ::AdwBreakpointBin* /*none*/ adw_breakpoint_bin_new ();
Adw::BreakpointBin base::BreakpointBinBase::new_ () noexcept
{
  typedef ::AdwBreakpointBin* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) adw_breakpoint_bin_new;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// void adw_breakpoint_bin_add_breakpoint (AdwBreakpointBin* self /*none*/, AdwBreakpoint* breakpoint /*full*/);
// void adw_breakpoint_bin_add_breakpoint (::AdwBreakpointBin* self /*none*/, ::AdwBreakpoint* breakpoint /*full*/);
void base::BreakpointBinBase::add_breakpoint (Adw::Breakpoint breakpoint) noexcept
{
  typedef void (*call_wrap_t) (::AdwBreakpointBin* self, ::AdwBreakpoint* breakpoint);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_breakpoint_bin_add_breakpoint;
  auto breakpoint_to_c = gi::unwrap (breakpoint, gi::transfer_full);
  call_wrap_v ((::AdwBreakpointBin*) (gobj_()), (::AdwBreakpoint*) (breakpoint_to_c));
}

// GtkWidget* /*none,nullable*/ adw_breakpoint_bin_get_child (AdwBreakpointBin* self /*none*/);
// ::GtkWidget* /*none,nullable*/ adw_breakpoint_bin_get_child (::AdwBreakpointBin* self /*none*/);
Gtk::Widget base::BreakpointBinBase::get_child () noexcept
{
  typedef ::GtkWidget* (*call_wrap_t) (::AdwBreakpointBin* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_breakpoint_bin_get_child;
  auto _temp_ret = call_wrap_v ((::AdwBreakpointBin*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// AdwBreakpoint* /*none,nullable*/ adw_breakpoint_bin_get_current_breakpoint (AdwBreakpointBin* self /*none*/);
// ::AdwBreakpoint* /*none,nullable*/ adw_breakpoint_bin_get_current_breakpoint (::AdwBreakpointBin* self /*none*/);
Adw::Breakpoint base::BreakpointBinBase::get_current_breakpoint () noexcept
{
  typedef ::AdwBreakpoint* (*call_wrap_t) (::AdwBreakpointBin* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_breakpoint_bin_get_current_breakpoint;
  auto _temp_ret = call_wrap_v ((::AdwBreakpointBin*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// void adw_breakpoint_bin_remove_breakpoint (AdwBreakpointBin* self /*none*/, AdwBreakpoint* breakpoint /*none*/);
// void adw_breakpoint_bin_remove_breakpoint (::AdwBreakpointBin* self /*none*/, ::AdwBreakpoint* breakpoint /*none*/);
void base::BreakpointBinBase::remove_breakpoint (Adw::Breakpoint breakpoint) noexcept
{
  typedef void (*call_wrap_t) (::AdwBreakpointBin* self, ::AdwBreakpoint* breakpoint);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_breakpoint_bin_remove_breakpoint;
  auto breakpoint_to_c = gi::unwrap (breakpoint, gi::transfer_none);
  call_wrap_v ((::AdwBreakpointBin*) (gobj_()), (::AdwBreakpoint*) (breakpoint_to_c));
}

// void adw_breakpoint_bin_set_child (AdwBreakpointBin* self /*none*/, GtkWidget* child /*none,nullable*/);
// void adw_breakpoint_bin_set_child (::AdwBreakpointBin* self /*none*/, ::GtkWidget* child /*none,nullable*/);
void base::BreakpointBinBase::set_child (Gtk::Widget child) noexcept
{
  typedef void (*call_wrap_t) (::AdwBreakpointBin* self, ::GtkWidget* child);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_breakpoint_bin_set_child;
  auto child_to_c = gi::unwrap (child, gi::transfer_none);
  call_wrap_v ((::AdwBreakpointBin*) (gobj_()), (::GtkWidget*) (child_to_c));
}
void base::BreakpointBinBase::set_child () noexcept
{
  typedef void (*call_wrap_t) (::AdwBreakpointBin* self, ::GtkWidget* child);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_breakpoint_bin_set_child;
  auto child_to_c = nullptr;
  call_wrap_v ((::AdwBreakpointBin*) (gobj_()), (::GtkWidget*) (child_to_c));
}


} // namespace base

} // namespace Adw

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<adw/breakpointbin_extra_def_impl.hpp>)
#include <adw/breakpointbin_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<adw/breakpointbin_extra_impl.hpp>)
#include <adw/breakpointbin_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Adw {

namespace impl {

namespace internal {

void BreakpointBinClassDef::class_init (gpointer class_struct, gpointer factory)
{
  ::AdwBreakpointBinClass *methods = (::AdwBreakpointBinClass *) class_struct;
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
