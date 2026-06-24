// AUTO-GENERATED

#ifndef _GI_GTK_PRINTDIALOG_HPP_
#define _GI_GTK_PRINTDIALOG_HPP_


namespace gi {

namespace repository {

namespace Gtk {

class PageSetup;
class PrintSettings;
class PrintSetup;
class PrintSetup_Ref;
class Window;

class PrintDialog;

namespace base {


#define GI_GTK_PRINTDIALOG_BASE base::PrintDialogBase
class PrintDialogBase : public GObject::Object
{
typedef GObject::Object super_type;
public:
typedef ::GtkPrintDialog BaseObjectType;

PrintDialogBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_print_dialog_get_type(); } 

// GtkPrintDialog* /*full*/ gtk_print_dialog_new ();
// ::GtkPrintDialog* /*full*/ gtk_print_dialog_new ();
static GI_INLINE_DECL Gtk::PrintDialog new_ () noexcept;

// const char* /*none*/ gtk_print_dialog_get_accept_label (GtkPrintDialog* self /*none*/);
// const char* /*none*/ gtk_print_dialog_get_accept_label (::GtkPrintDialog* self /*none*/);
GI_INLINE_DECL gi::cstring_v get_accept_label () noexcept;

// gboolean gtk_print_dialog_get_modal (GtkPrintDialog* self /*none*/);
// gboolean gtk_print_dialog_get_modal (::GtkPrintDialog* self /*none*/);
GI_INLINE_DECL bool get_modal () noexcept;

// GtkPageSetup* /*none,nullable*/ gtk_print_dialog_get_page_setup (GtkPrintDialog* self /*none*/);
// ::GtkPageSetup* /*none,nullable*/ gtk_print_dialog_get_page_setup (::GtkPrintDialog* self /*none*/);
GI_INLINE_DECL Gtk::PageSetup get_page_setup () noexcept;

// GtkPrintSettings* /*none,nullable*/ gtk_print_dialog_get_print_settings (GtkPrintDialog* self /*none*/);
// ::GtkPrintSettings* /*none,nullable*/ gtk_print_dialog_get_print_settings (::GtkPrintDialog* self /*none*/);
GI_INLINE_DECL Gtk::PrintSettings get_print_settings () noexcept;

// const char* /*none*/ gtk_print_dialog_get_title (GtkPrintDialog* self /*none*/);
// const char* /*none*/ gtk_print_dialog_get_title (::GtkPrintDialog* self /*none*/);
GI_INLINE_DECL gi::cstring_v get_title () noexcept;

// void gtk_print_dialog_print (GtkPrintDialog* self /*none*/, GtkWindow* parent /*none,nullable*/, GtkPrintSetup* setup /*none,nullable*/, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void gtk_print_dialog_print (::GtkPrintDialog* self /*none*/, ::GtkWindow* parent /*none,nullable*/, ::GtkPrintSetup* setup /*none,nullable*/, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
GI_INLINE_DECL void print (Gtk::Window parent, Gtk::PrintSetup_Ref setup, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept;
GI_INLINE_DECL void print (Gio::AsyncReadyCallback callback) noexcept;

// void gtk_print_dialog_print_file (GtkPrintDialog* self /*none*/, GtkWindow* parent /*none,nullable*/, GtkPrintSetup* setup /*none,nullable*/, GFile* file /*none*/, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void gtk_print_dialog_print_file (::GtkPrintDialog* self /*none*/, ::GtkWindow* parent /*none,nullable*/, ::GtkPrintSetup* setup /*none,nullable*/, ::GFile* file /*none*/, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
GI_INLINE_DECL void print_file (Gtk::Window parent, Gtk::PrintSetup_Ref setup, Gio::File file, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept;
GI_INLINE_DECL void print_file (Gio::File file, Gio::AsyncReadyCallback callback) noexcept;

// gboolean gtk_print_dialog_print_file_finish (GtkPrintDialog* self /*none*/, GAsyncResult* result /*none*/, GError ** error);
// gboolean gtk_print_dialog_print_file_finish (::GtkPrintDialog* self /*none*/, ::GAsyncResult* result /*none*/, GError ** error);
GI_INLINE_DECL bool print_file_finish (Gio::AsyncResult result);
GI_INLINE_DECL bool print_file_finish (Gio::AsyncResult result, GLib::Error * _error) noexcept;

// GOutputStream* /*full*/ gtk_print_dialog_print_finish (GtkPrintDialog* self /*none*/, GAsyncResult* result /*none*/, GError ** error);
// ::GOutputStream* /*full*/ gtk_print_dialog_print_finish (::GtkPrintDialog* self /*none*/, ::GAsyncResult* result /*none*/, GError ** error);
GI_INLINE_DECL Gio::OutputStream print_finish (Gio::AsyncResult result);
GI_INLINE_DECL Gio::OutputStream print_finish (Gio::AsyncResult result, GLib::Error * _error) noexcept;

// void gtk_print_dialog_set_accept_label (GtkPrintDialog* self /*none*/, const char* accept_label /*none*/);
// void gtk_print_dialog_set_accept_label (::GtkPrintDialog* self /*none*/, const char* accept_label /*none*/);
GI_INLINE_DECL void set_accept_label (const gi::cstring_v accept_label) noexcept;

// void gtk_print_dialog_set_modal (GtkPrintDialog* self /*none*/, gboolean modal);
// void gtk_print_dialog_set_modal (::GtkPrintDialog* self /*none*/, gboolean modal);
GI_INLINE_DECL void set_modal (gboolean modal) noexcept;

// void gtk_print_dialog_set_page_setup (GtkPrintDialog* self /*none*/, GtkPageSetup* page_setup /*none*/);
// void gtk_print_dialog_set_page_setup (::GtkPrintDialog* self /*none*/, ::GtkPageSetup* page_setup /*none*/);
GI_INLINE_DECL void set_page_setup (Gtk::PageSetup page_setup) noexcept;

// void gtk_print_dialog_set_print_settings (GtkPrintDialog* self /*none*/, GtkPrintSettings* print_settings /*none*/);
// void gtk_print_dialog_set_print_settings (::GtkPrintDialog* self /*none*/, ::GtkPrintSettings* print_settings /*none*/);
GI_INLINE_DECL void set_print_settings (Gtk::PrintSettings print_settings) noexcept;

// void gtk_print_dialog_set_title (GtkPrintDialog* self /*none*/, const char* title /*none*/);
// void gtk_print_dialog_set_title (::GtkPrintDialog* self /*none*/, const char* title /*none*/);
GI_INLINE_DECL void set_title (const gi::cstring_v title) noexcept;

// void gtk_print_dialog_setup (GtkPrintDialog* self /*none*/, GtkWindow* parent /*none,nullable*/, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void gtk_print_dialog_setup (::GtkPrintDialog* self /*none*/, ::GtkWindow* parent /*none,nullable*/, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
GI_INLINE_DECL void setup (Gtk::Window parent, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept;
GI_INLINE_DECL void setup (Gio::AsyncReadyCallback callback) noexcept;

// GtkPrintSetup* /*full*/ gtk_print_dialog_setup_finish (GtkPrintDialog* self /*none*/, GAsyncResult* result /*none*/, GError ** error);
// ::GtkPrintSetup* /*full*/ gtk_print_dialog_setup_finish (::GtkPrintDialog* self /*none*/, ::GAsyncResult* result /*none*/, GError ** error);
GI_INLINE_DECL Gtk::PrintSetup setup_finish (Gio::AsyncResult result);
GI_INLINE_DECL Gtk::PrintSetup setup_finish (Gio::AsyncResult result, GLib::Error * _error) noexcept;

gi::property_proxy<gi::cstring, base::PrintDialogBase> property_accept_label()
{ return gi::property_proxy<gi::cstring, base::PrintDialogBase> (*this, "accept-label"); }
const gi::property_proxy<gi::cstring, base::PrintDialogBase> property_accept_label() const
{ return gi::property_proxy<gi::cstring, base::PrintDialogBase> (*this, "accept-label"); }

gi::property_proxy<bool, base::PrintDialogBase> property_modal()
{ return gi::property_proxy<bool, base::PrintDialogBase> (*this, "modal"); }
const gi::property_proxy<bool, base::PrintDialogBase> property_modal() const
{ return gi::property_proxy<bool, base::PrintDialogBase> (*this, "modal"); }

gi::property_proxy<Gtk::PageSetup, base::PrintDialogBase> property_page_setup()
{ return gi::property_proxy<Gtk::PageSetup, base::PrintDialogBase> (*this, "page-setup"); }
const gi::property_proxy<Gtk::PageSetup, base::PrintDialogBase> property_page_setup() const
{ return gi::property_proxy<Gtk::PageSetup, base::PrintDialogBase> (*this, "page-setup"); }

gi::property_proxy<Gtk::PrintSettings, base::PrintDialogBase> property_print_settings()
{ return gi::property_proxy<Gtk::PrintSettings, base::PrintDialogBase> (*this, "print-settings"); }
const gi::property_proxy<Gtk::PrintSettings, base::PrintDialogBase> property_print_settings() const
{ return gi::property_proxy<Gtk::PrintSettings, base::PrintDialogBase> (*this, "print-settings"); }

gi::property_proxy<gi::cstring, base::PrintDialogBase> property_title()
{ return gi::property_proxy<gi::cstring, base::PrintDialogBase> (*this, "title"); }
const gi::property_proxy<gi::cstring, base::PrintDialogBase> property_title() const
{ return gi::property_proxy<gi::cstring, base::PrintDialogBase> (*this, "title"); }

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/printdialog_extra_def.hpp>)
#include <gtk/printdialog_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/printdialog_extra.hpp>)
#include <gtk/printdialog_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class PrintDialog : public GI_GTK_PRINTDIALOG_BASE
{ typedef GI_GTK_PRINTDIALOG_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkPrintDialog>
{ typedef Gtk::PrintDialog type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {


class PrintDialogClassDef
{
typedef PrintDialogClassDef self;
public:
typedef Gtk::PrintDialog instance_type;
typedef ::GtkPrintDialogClass class_type;


struct TypeInitData;

protected:
GI_INLINE_DECL ~PrintDialogClassDef() = default;
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );


};

GI_CLASS_IMPL_BEGIN


class PrintDialogClass: public detail::ClassTemplate<Gtk::impl::internal::PrintDialogClassDef, GObject::impl::internal::ObjectClass>
{
friend class internal::PrintDialogClassDef;
typedef PrintDialogClass self;
typedef detail::ClassTemplate<Gtk::impl::internal::PrintDialogClassDef, GObject::impl::internal::ObjectClass> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types



};


struct PrintDialogClassDef::TypeInitData
{

template<typename SubClass>
constexpr static TypeInitData factory()
{
  // using DefData = detail::DefinitionData<SubClass, TypeInitData>;
  return {

  };
}
};
} // namespace internal

GI_CLASS_IMPL_END

using PrintDialogImpl = detail::ObjectImpl<PrintDialog, internal::PrintDialogClass>;

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
