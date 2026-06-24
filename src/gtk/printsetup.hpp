// AUTO-GENERATED

#ifndef _GI_GTK_PRINTSETUP_HPP_
#define _GI_GTK_PRINTSETUP_HPP_


namespace gi {

namespace repository {

namespace Gtk {

class PageSetup;
class PrintSettings;
class PrintSetup_Ref;

class PrintSetup;

namespace base {


#define GI_GTK_PRINTSETUP_BASE base::PrintSetupBase
class PrintSetupBase : public gi::detail::GBoxedWrapperBase<PrintSetupBase, ::GtkPrintSetup>
{
typedef gi::detail::GBoxedWrapperBase<PrintSetupBase, ::GtkPrintSetup> super_type;
public:

PrintSetupBase (std::nullptr_t = nullptr) : super_type() {}

static GType get_type_ () G_GNUC_CONST { return gtk_print_setup_get_type(); } 

// GtkPageSetup* /*none*/ gtk_print_setup_get_page_setup (GtkPrintSetup* setup /*none*/);
// ::GtkPageSetup* /*none*/ gtk_print_setup_get_page_setup (::GtkPrintSetup* setup /*none*/);
GI_INLINE_DECL Gtk::PageSetup get_page_setup () noexcept;

// GtkPrintSettings* /*none*/ gtk_print_setup_get_print_settings (GtkPrintSetup* setup /*none*/);
// ::GtkPrintSettings* /*none*/ gtk_print_setup_get_print_settings (::GtkPrintSetup* setup /*none*/);
GI_INLINE_DECL Gtk::PrintSettings get_print_settings () noexcept;

// GtkPrintSetup* /*full*/ gtk_print_setup_ref (GtkPrintSetup* setup /*none*/);
// ::GtkPrintSetup* /*full*/ gtk_print_setup_ref (::GtkPrintSetup* setup /*none*/);
// IGNORE; marked ignore

// void gtk_print_setup_unref (GtkPrintSetup* setup /*none*/);
// void gtk_print_setup_unref (::GtkPrintSetup* setup /*none*/);
// IGNORE; marked ignore

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/printsetup_extra_def.hpp>)
#include <gtk/printsetup_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/printsetup_extra.hpp>)
#include <gtk/printsetup_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class PrintSetup_Ref;

class PrintSetup : public gi::detail::GBoxedWrapper<PrintSetup, ::GtkPrintSetup, GI_GTK_PRINTSETUP_BASE, PrintSetup_Ref>
{ typedef gi::detail::GBoxedWrapper<PrintSetup, ::GtkPrintSetup, GI_GTK_PRINTSETUP_BASE, PrintSetup_Ref> super_type; using super_type::super_type; };


class PrintSetup_Ref : public gi::detail::GBoxedRefWrapper<PrintSetup, ::GtkPrintSetup, GI_GTK_PRINTSETUP_BASE>
{ typedef gi::detail::GBoxedRefWrapper<PrintSetup, ::GtkPrintSetup, GI_GTK_PRINTSETUP_BASE> super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkPrintSetup>
{ typedef Gtk::PrintSetup type; }; 

} // namespace repository

} // namespace gi

#endif
