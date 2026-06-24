// AUTO-GENERATED

#ifndef _GI_GTK_PRINTSETUP_IMPL_HPP_
#define _GI_GTK_PRINTSETUP_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

// GtkPageSetup* /*none*/ gtk_print_setup_get_page_setup (GtkPrintSetup* setup /*none*/);
// ::GtkPageSetup* /*none*/ gtk_print_setup_get_page_setup (::GtkPrintSetup* setup /*none*/);
Gtk::PageSetup base::PrintSetupBase::get_page_setup () noexcept
{
  typedef ::GtkPageSetup* (*call_wrap_t) (::GtkPrintSetup* setup);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_print_setup_get_page_setup;
  auto _temp_ret = call_wrap_v ((::GtkPrintSetup*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// GtkPrintSettings* /*none*/ gtk_print_setup_get_print_settings (GtkPrintSetup* setup /*none*/);
// ::GtkPrintSettings* /*none*/ gtk_print_setup_get_print_settings (::GtkPrintSetup* setup /*none*/);
Gtk::PrintSettings base::PrintSetupBase::get_print_settings () noexcept
{
  typedef ::GtkPrintSettings* (*call_wrap_t) (::GtkPrintSetup* setup);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_print_setup_get_print_settings;
  auto _temp_ret = call_wrap_v ((::GtkPrintSetup*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// GtkPrintSetup* /*full*/ gtk_print_setup_ref (GtkPrintSetup* setup /*none*/);
// ::GtkPrintSetup* /*full*/ gtk_print_setup_ref (::GtkPrintSetup* setup /*none*/);
// IGNORE; marked ignore

// void gtk_print_setup_unref (GtkPrintSetup* setup /*none*/);
// void gtk_print_setup_unref (::GtkPrintSetup* setup /*none*/);
// IGNORE; marked ignore


} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/printsetup_extra_def_impl.hpp>)
#include <gtk/printsetup_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/printsetup_extra_impl.hpp>)
#include <gtk/printsetup_extra_impl.hpp>
#endif
#endif

#endif
