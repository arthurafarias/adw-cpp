// AUTO-GENERATED

#ifndef _GI_GTK_PRINTDIALOG_IMPL_HPP_
#define _GI_GTK_PRINTDIALOG_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

// GtkPrintDialog* /*full*/ gtk_print_dialog_new ();
// ::GtkPrintDialog* /*full*/ gtk_print_dialog_new ();
Gtk::PrintDialog base::PrintDialogBase::new_ () noexcept
{
  typedef ::GtkPrintDialog* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_print_dialog_new;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// const char* /*none*/ gtk_print_dialog_get_accept_label (GtkPrintDialog* self /*none*/);
// const char* /*none*/ gtk_print_dialog_get_accept_label (::GtkPrintDialog* self /*none*/);
gi::cstring_v base::PrintDialogBase::get_accept_label () noexcept
{
  typedef const char* (*call_wrap_t) (::GtkPrintDialog* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_print_dialog_get_accept_label;
  auto _temp_ret = call_wrap_v ((::GtkPrintDialog*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// gboolean gtk_print_dialog_get_modal (GtkPrintDialog* self /*none*/);
// gboolean gtk_print_dialog_get_modal (::GtkPrintDialog* self /*none*/);
bool base::PrintDialogBase::get_modal () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkPrintDialog* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_print_dialog_get_modal;
  auto _temp_ret = call_wrap_v ((::GtkPrintDialog*) (gobj_()));
  return _temp_ret;
}

// GtkPageSetup* /*none,nullable*/ gtk_print_dialog_get_page_setup (GtkPrintDialog* self /*none*/);
// ::GtkPageSetup* /*none,nullable*/ gtk_print_dialog_get_page_setup (::GtkPrintDialog* self /*none*/);
Gtk::PageSetup base::PrintDialogBase::get_page_setup () noexcept
{
  typedef ::GtkPageSetup* (*call_wrap_t) (::GtkPrintDialog* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_print_dialog_get_page_setup;
  auto _temp_ret = call_wrap_v ((::GtkPrintDialog*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// GtkPrintSettings* /*none,nullable*/ gtk_print_dialog_get_print_settings (GtkPrintDialog* self /*none*/);
// ::GtkPrintSettings* /*none,nullable*/ gtk_print_dialog_get_print_settings (::GtkPrintDialog* self /*none*/);
Gtk::PrintSettings base::PrintDialogBase::get_print_settings () noexcept
{
  typedef ::GtkPrintSettings* (*call_wrap_t) (::GtkPrintDialog* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_print_dialog_get_print_settings;
  auto _temp_ret = call_wrap_v ((::GtkPrintDialog*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// const char* /*none*/ gtk_print_dialog_get_title (GtkPrintDialog* self /*none*/);
// const char* /*none*/ gtk_print_dialog_get_title (::GtkPrintDialog* self /*none*/);
gi::cstring_v base::PrintDialogBase::get_title () noexcept
{
  typedef const char* (*call_wrap_t) (::GtkPrintDialog* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_print_dialog_get_title;
  auto _temp_ret = call_wrap_v ((::GtkPrintDialog*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// void gtk_print_dialog_print (GtkPrintDialog* self /*none*/, GtkWindow* parent /*none,nullable*/, GtkPrintSetup* setup /*none,nullable*/, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void gtk_print_dialog_print (::GtkPrintDialog* self /*none*/, ::GtkWindow* parent /*none,nullable*/, ::GtkPrintSetup* setup /*none,nullable*/, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
void base::PrintDialogBase::print (Gtk::Window parent, Gtk::PrintSetup_Ref setup, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GtkPrintDialog* self, ::GtkWindow* parent, ::GtkPrintSetup* setup, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_print_dialog_print;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto setup_to_c = gi::unwrap (setup, gi::transfer_none);
  auto parent_to_c = gi::unwrap (parent, gi::transfer_none);
  call_wrap_v ((::GtkPrintDialog*) (gobj_()), (::GtkWindow*) (parent_to_c), (::GtkPrintSetup*) (setup_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}
void base::PrintDialogBase::print (Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GtkPrintDialog* self, ::GtkWindow* parent, ::GtkPrintSetup* setup, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_print_dialog_print;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = nullptr;
  auto setup_to_c = nullptr;
  auto parent_to_c = nullptr;
  call_wrap_v ((::GtkPrintDialog*) (gobj_()), (::GtkWindow*) (parent_to_c), (::GtkPrintSetup*) (setup_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}

// void gtk_print_dialog_print_file (GtkPrintDialog* self /*none*/, GtkWindow* parent /*none,nullable*/, GtkPrintSetup* setup /*none,nullable*/, GFile* file /*none*/, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void gtk_print_dialog_print_file (::GtkPrintDialog* self /*none*/, ::GtkWindow* parent /*none,nullable*/, ::GtkPrintSetup* setup /*none,nullable*/, ::GFile* file /*none*/, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
void base::PrintDialogBase::print_file (Gtk::Window parent, Gtk::PrintSetup_Ref setup, Gio::File file, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GtkPrintDialog* self, ::GtkWindow* parent, ::GtkPrintSetup* setup, ::GFile* file, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_print_dialog_print_file;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto file_to_c = gi::unwrap (file, gi::transfer_none);
  auto setup_to_c = gi::unwrap (setup, gi::transfer_none);
  auto parent_to_c = gi::unwrap (parent, gi::transfer_none);
  call_wrap_v ((::GtkPrintDialog*) (gobj_()), (::GtkWindow*) (parent_to_c), (::GtkPrintSetup*) (setup_to_c), (::GFile*) (file_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}
void base::PrintDialogBase::print_file (Gio::File file, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GtkPrintDialog* self, ::GtkWindow* parent, ::GtkPrintSetup* setup, ::GFile* file, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_print_dialog_print_file;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = nullptr;
  auto file_to_c = gi::unwrap (file, gi::transfer_none);
  auto setup_to_c = nullptr;
  auto parent_to_c = nullptr;
  call_wrap_v ((::GtkPrintDialog*) (gobj_()), (::GtkWindow*) (parent_to_c), (::GtkPrintSetup*) (setup_to_c), (::GFile*) (file_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}

// gboolean gtk_print_dialog_print_file_finish (GtkPrintDialog* self /*none*/, GAsyncResult* result /*none*/, GError ** error);
// gboolean gtk_print_dialog_print_file_finish (::GtkPrintDialog* self /*none*/, ::GAsyncResult* result /*none*/, GError ** error);
bool base::PrintDialogBase::print_file_finish (Gio::AsyncResult result)
{
  typedef gboolean (*call_wrap_t) (::GtkPrintDialog* self, ::GAsyncResult* result, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_print_dialog_print_file_finish;
  auto result_to_c = gi::unwrap (result, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GtkPrintDialog*) (gobj_()), (::GAsyncResult*) (result_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
bool base::PrintDialogBase::print_file_finish (Gio::AsyncResult result, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkPrintDialog* self, ::GAsyncResult* result, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_print_dialog_print_file_finish;
  auto result_to_c = gi::unwrap (result, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GtkPrintDialog*) (gobj_()), (::GAsyncResult*) (result_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}

// GOutputStream* /*full*/ gtk_print_dialog_print_finish (GtkPrintDialog* self /*none*/, GAsyncResult* result /*none*/, GError ** error);
// ::GOutputStream* /*full*/ gtk_print_dialog_print_finish (::GtkPrintDialog* self /*none*/, ::GAsyncResult* result /*none*/, GError ** error);
Gio::OutputStream base::PrintDialogBase::print_finish (Gio::AsyncResult result)
{
  typedef ::GOutputStream* (*call_wrap_t) (::GtkPrintDialog* self, ::GAsyncResult* result, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_print_dialog_print_finish;
  auto result_to_c = gi::unwrap (result, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GtkPrintDialog*) (gobj_()), (::GAsyncResult*) (result_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full);
}
Gio::OutputStream base::PrintDialogBase::print_finish (Gio::AsyncResult result, GLib::Error * _error) noexcept
{
  typedef ::GOutputStream* (*call_wrap_t) (::GtkPrintDialog* self, ::GAsyncResult* result, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_print_dialog_print_finish;
  auto result_to_c = gi::unwrap (result, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GtkPrintDialog*) (gobj_()), (::GAsyncResult*) (result_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// void gtk_print_dialog_set_accept_label (GtkPrintDialog* self /*none*/, const char* accept_label /*none*/);
// void gtk_print_dialog_set_accept_label (::GtkPrintDialog* self /*none*/, const char* accept_label /*none*/);
void base::PrintDialogBase::set_accept_label (const gi::cstring_v accept_label) noexcept
{
  typedef void (*call_wrap_t) (::GtkPrintDialog* self, const char* accept_label);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_print_dialog_set_accept_label;
  auto accept_label_to_c = gi::unwrap (accept_label, gi::transfer_none);
  call_wrap_v ((::GtkPrintDialog*) (gobj_()), (const char*) (accept_label_to_c));
}

// void gtk_print_dialog_set_modal (GtkPrintDialog* self /*none*/, gboolean modal);
// void gtk_print_dialog_set_modal (::GtkPrintDialog* self /*none*/, gboolean modal);
void base::PrintDialogBase::set_modal (gboolean modal) noexcept
{
  typedef void (*call_wrap_t) (::GtkPrintDialog* self, gboolean modal);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_print_dialog_set_modal;
  auto modal_to_c = modal;
  call_wrap_v ((::GtkPrintDialog*) (gobj_()), (gboolean) (modal_to_c));
}

// void gtk_print_dialog_set_page_setup (GtkPrintDialog* self /*none*/, GtkPageSetup* page_setup /*none*/);
// void gtk_print_dialog_set_page_setup (::GtkPrintDialog* self /*none*/, ::GtkPageSetup* page_setup /*none*/);
void base::PrintDialogBase::set_page_setup (Gtk::PageSetup page_setup) noexcept
{
  typedef void (*call_wrap_t) (::GtkPrintDialog* self, ::GtkPageSetup* page_setup);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_print_dialog_set_page_setup;
  auto page_setup_to_c = gi::unwrap (page_setup, gi::transfer_none);
  call_wrap_v ((::GtkPrintDialog*) (gobj_()), (::GtkPageSetup*) (page_setup_to_c));
}

// void gtk_print_dialog_set_print_settings (GtkPrintDialog* self /*none*/, GtkPrintSettings* print_settings /*none*/);
// void gtk_print_dialog_set_print_settings (::GtkPrintDialog* self /*none*/, ::GtkPrintSettings* print_settings /*none*/);
void base::PrintDialogBase::set_print_settings (Gtk::PrintSettings print_settings) noexcept
{
  typedef void (*call_wrap_t) (::GtkPrintDialog* self, ::GtkPrintSettings* print_settings);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_print_dialog_set_print_settings;
  auto print_settings_to_c = gi::unwrap (print_settings, gi::transfer_none);
  call_wrap_v ((::GtkPrintDialog*) (gobj_()), (::GtkPrintSettings*) (print_settings_to_c));
}

// void gtk_print_dialog_set_title (GtkPrintDialog* self /*none*/, const char* title /*none*/);
// void gtk_print_dialog_set_title (::GtkPrintDialog* self /*none*/, const char* title /*none*/);
void base::PrintDialogBase::set_title (const gi::cstring_v title) noexcept
{
  typedef void (*call_wrap_t) (::GtkPrintDialog* self, const char* title);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_print_dialog_set_title;
  auto title_to_c = gi::unwrap (title, gi::transfer_none);
  call_wrap_v ((::GtkPrintDialog*) (gobj_()), (const char*) (title_to_c));
}

// void gtk_print_dialog_setup (GtkPrintDialog* self /*none*/, GtkWindow* parent /*none,nullable*/, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void gtk_print_dialog_setup (::GtkPrintDialog* self /*none*/, ::GtkWindow* parent /*none,nullable*/, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
void base::PrintDialogBase::setup (Gtk::Window parent, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GtkPrintDialog* self, ::GtkWindow* parent, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_print_dialog_setup;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto parent_to_c = gi::unwrap (parent, gi::transfer_none);
  call_wrap_v ((::GtkPrintDialog*) (gobj_()), (::GtkWindow*) (parent_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}
void base::PrintDialogBase::setup (Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GtkPrintDialog* self, ::GtkWindow* parent, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_print_dialog_setup;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = nullptr;
  auto parent_to_c = nullptr;
  call_wrap_v ((::GtkPrintDialog*) (gobj_()), (::GtkWindow*) (parent_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}

// GtkPrintSetup* /*full*/ gtk_print_dialog_setup_finish (GtkPrintDialog* self /*none*/, GAsyncResult* result /*none*/, GError ** error);
// ::GtkPrintSetup* /*full*/ gtk_print_dialog_setup_finish (::GtkPrintDialog* self /*none*/, ::GAsyncResult* result /*none*/, GError ** error);
Gtk::PrintSetup base::PrintDialogBase::setup_finish (Gio::AsyncResult result)
{
  typedef ::GtkPrintSetup* (*call_wrap_t) (::GtkPrintDialog* self, ::GAsyncResult* result, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_print_dialog_setup_finish;
  auto result_to_c = gi::unwrap (result, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GtkPrintDialog*) (gobj_()), (::GAsyncResult*) (result_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full);
}
Gtk::PrintSetup base::PrintDialogBase::setup_finish (Gio::AsyncResult result, GLib::Error * _error) noexcept
{
  typedef ::GtkPrintSetup* (*call_wrap_t) (::GtkPrintDialog* self, ::GAsyncResult* result, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_print_dialog_setup_finish;
  auto result_to_c = gi::unwrap (result, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GtkPrintDialog*) (gobj_()), (::GAsyncResult*) (result_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return gi::wrap (_temp_ret, gi::transfer_full);
}


} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/printdialog_extra_def_impl.hpp>)
#include <gtk/printdialog_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/printdialog_extra_impl.hpp>)
#include <gtk/printdialog_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {

void PrintDialogClassDef::class_init (gpointer class_struct, gpointer factory)
{
  ::GtkPrintDialogClass *methods = (::GtkPrintDialogClass *) class_struct;
  (void) methods;

  auto init_data = GI_MEMBER_INIT_DATA(TypeInitData, factory);
  (void) init_data;

}

} // namespace internal

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
