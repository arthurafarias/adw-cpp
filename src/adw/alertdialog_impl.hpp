// AUTO-GENERATED

#ifndef _GI_ADW_ALERTDIALOG_IMPL_HPP_
#define _GI_ADW_ALERTDIALOG_IMPL_HPP_

namespace gi {

namespace repository {

namespace Adw {

namespace base {

// AdwDialog* /*none*/ adw_alert_dialog_new (const char* heading /*none,nullable*/, const char* body /*none,nullable*/);
// ::AdwAlertDialog* /*none*/ adw_alert_dialog_new (const char* heading /*none,nullable*/, const char* body /*none,nullable*/);
Adw::AlertDialog base::AlertDialogBase::new_ (const gi::cstring_v heading, const gi::cstring_v body) noexcept
{
  typedef ::AdwAlertDialog* (*call_wrap_t) (const char* heading, const char* body);
  call_wrap_t call_wrap_v = (call_wrap_t) adw_alert_dialog_new;
  auto body_to_c = gi::unwrap (body, gi::transfer_none);
  auto heading_to_c = gi::unwrap (heading, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const char*) (heading_to_c), (const char*) (body_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none);
}
Adw::AlertDialog base::AlertDialogBase::new_ () noexcept
{
  typedef ::AdwAlertDialog* (*call_wrap_t) (const char* heading, const char* body);
  call_wrap_t call_wrap_v = (call_wrap_t) adw_alert_dialog_new;
  auto body_to_c = nullptr;
  auto heading_to_c = nullptr;
  auto _temp_ret = call_wrap_v ((const char*) (heading_to_c), (const char*) (body_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// void adw_alert_dialog_add_response (AdwAlertDialog* self /*none*/, const char* id /*none*/, const char* label /*none*/);
// void adw_alert_dialog_add_response (::AdwAlertDialog* self /*none*/, const char* id /*none*/, const char* label /*none*/);
void base::AlertDialogBase::add_response (const gi::cstring_v id, const gi::cstring_v label) noexcept
{
  typedef void (*call_wrap_t) (::AdwAlertDialog* self, const char* id, const char* label);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_alert_dialog_add_response;
  auto label_to_c = gi::unwrap (label, gi::transfer_none);
  auto id_to_c = gi::unwrap (id, gi::transfer_none);
  call_wrap_v ((::AdwAlertDialog*) (gobj_()), (const char*) (id_to_c), (const char*) (label_to_c));
}

// void adw_alert_dialog_add_responses (AdwAlertDialog* self /*none*/, const char* first_id /*none*/,  ..._ /*none*/);
// void adw_alert_dialog_add_responses (::AdwAlertDialog* self /*none*/, const char* first_id /*none*/,  ..._ /*none*/);
// IGNORE; not introspectable, varargs not supported

// void adw_alert_dialog_choose (AdwAlertDialog* self /*none*/, GtkWidget* parent /*none,nullable*/, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void adw_alert_dialog_choose (::AdwAlertDialog* self /*none*/, ::GtkWidget* parent /*none,nullable*/, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
void base::AlertDialogBase::choose (Gtk::Widget parent, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::AdwAlertDialog* self, ::GtkWidget* parent, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_alert_dialog_choose;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto parent_to_c = gi::unwrap (parent, gi::transfer_none);
  call_wrap_v ((::AdwAlertDialog*) (gobj_()), (::GtkWidget*) (parent_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}
void base::AlertDialogBase::choose (Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::AdwAlertDialog* self, ::GtkWidget* parent, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_alert_dialog_choose;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = nullptr;
  auto parent_to_c = nullptr;
  call_wrap_v ((::AdwAlertDialog*) (gobj_()), (::GtkWidget*) (parent_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}

// const char* /*none*/ adw_alert_dialog_choose_finish (AdwAlertDialog* self /*none*/, GAsyncResult* result /*none*/);
// const char* /*none*/ adw_alert_dialog_choose_finish (::AdwAlertDialog* self /*none*/, ::GAsyncResult* result /*none*/);
gi::cstring_v base::AlertDialogBase::choose_finish (Gio::AsyncResult result) noexcept
{
  typedef const char* (*call_wrap_t) (::AdwAlertDialog* self, ::GAsyncResult* result);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_alert_dialog_choose_finish;
  auto result_to_c = gi::unwrap (result, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::AdwAlertDialog*) (gobj_()), (::GAsyncResult*) (result_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// void adw_alert_dialog_format_body (AdwAlertDialog* self /*none*/, const char* format /*none*/,  ..._ /*none*/);
// void adw_alert_dialog_format_body (::AdwAlertDialog* self /*none*/, const char* format /*none*/,  ..._ /*none*/);
// IGNORE; not introspectable, varargs not supported

// void adw_alert_dialog_format_body_markup (AdwAlertDialog* self /*none*/, const char* format /*none*/,  ..._ /*none*/);
// void adw_alert_dialog_format_body_markup (::AdwAlertDialog* self /*none*/, const char* format /*none*/,  ..._ /*none*/);
// IGNORE; not introspectable, varargs not supported

// void adw_alert_dialog_format_heading (AdwAlertDialog* self /*none*/, const char* format /*none*/,  ..._ /*none*/);
// void adw_alert_dialog_format_heading (::AdwAlertDialog* self /*none*/, const char* format /*none*/,  ..._ /*none*/);
// IGNORE; not introspectable, varargs not supported

// void adw_alert_dialog_format_heading_markup (AdwAlertDialog* self /*none*/, const char* format /*none*/,  ..._ /*none*/);
// void adw_alert_dialog_format_heading_markup (::AdwAlertDialog* self /*none*/, const char* format /*none*/,  ..._ /*none*/);
// IGNORE; not introspectable, varargs not supported

// const char* /*none*/ adw_alert_dialog_get_body (AdwAlertDialog* self /*none*/);
// const char* /*none*/ adw_alert_dialog_get_body (::AdwAlertDialog* self /*none*/);
gi::cstring_v base::AlertDialogBase::get_body () noexcept
{
  typedef const char* (*call_wrap_t) (::AdwAlertDialog* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_alert_dialog_get_body;
  auto _temp_ret = call_wrap_v ((::AdwAlertDialog*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// gboolean adw_alert_dialog_get_body_use_markup (AdwAlertDialog* self /*none*/);
// gboolean adw_alert_dialog_get_body_use_markup (::AdwAlertDialog* self /*none*/);
bool base::AlertDialogBase::get_body_use_markup () noexcept
{
  typedef gboolean (*call_wrap_t) (::AdwAlertDialog* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_alert_dialog_get_body_use_markup;
  auto _temp_ret = call_wrap_v ((::AdwAlertDialog*) (gobj_()));
  return _temp_ret;
}

// const char* /*none*/ adw_alert_dialog_get_close_response (AdwAlertDialog* self /*none*/);
// const char* /*none*/ adw_alert_dialog_get_close_response (::AdwAlertDialog* self /*none*/);
gi::cstring_v base::AlertDialogBase::get_close_response () noexcept
{
  typedef const char* (*call_wrap_t) (::AdwAlertDialog* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_alert_dialog_get_close_response;
  auto _temp_ret = call_wrap_v ((::AdwAlertDialog*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// const char* /*none,nullable*/ adw_alert_dialog_get_default_response (AdwAlertDialog* self /*none*/);
// const char* /*none,nullable*/ adw_alert_dialog_get_default_response (::AdwAlertDialog* self /*none*/);
gi::cstring_v base::AlertDialogBase::get_default_response () noexcept
{
  typedef const char* (*call_wrap_t) (::AdwAlertDialog* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_alert_dialog_get_default_response;
  auto _temp_ret = call_wrap_v ((::AdwAlertDialog*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// GtkWidget* /*none,nullable*/ adw_alert_dialog_get_extra_child (AdwAlertDialog* self /*none*/);
// ::GtkWidget* /*none,nullable*/ adw_alert_dialog_get_extra_child (::AdwAlertDialog* self /*none*/);
Gtk::Widget base::AlertDialogBase::get_extra_child () noexcept
{
  typedef ::GtkWidget* (*call_wrap_t) (::AdwAlertDialog* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_alert_dialog_get_extra_child;
  auto _temp_ret = call_wrap_v ((::AdwAlertDialog*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// const char* /*none,nullable*/ adw_alert_dialog_get_heading (AdwAlertDialog* self /*none*/);
// const char* /*none,nullable*/ adw_alert_dialog_get_heading (::AdwAlertDialog* self /*none*/);
gi::cstring_v base::AlertDialogBase::get_heading () noexcept
{
  typedef const char* (*call_wrap_t) (::AdwAlertDialog* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_alert_dialog_get_heading;
  auto _temp_ret = call_wrap_v ((::AdwAlertDialog*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// gboolean adw_alert_dialog_get_heading_use_markup (AdwAlertDialog* self /*none*/);
// gboolean adw_alert_dialog_get_heading_use_markup (::AdwAlertDialog* self /*none*/);
bool base::AlertDialogBase::get_heading_use_markup () noexcept
{
  typedef gboolean (*call_wrap_t) (::AdwAlertDialog* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_alert_dialog_get_heading_use_markup;
  auto _temp_ret = call_wrap_v ((::AdwAlertDialog*) (gobj_()));
  return _temp_ret;
}

// gboolean adw_alert_dialog_get_prefer_wide_layout (AdwAlertDialog* self /*none*/);
// gboolean adw_alert_dialog_get_prefer_wide_layout (::AdwAlertDialog* self /*none*/);
bool base::AlertDialogBase::get_prefer_wide_layout () noexcept
{
  typedef gboolean (*call_wrap_t) (::AdwAlertDialog* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_alert_dialog_get_prefer_wide_layout;
  auto _temp_ret = call_wrap_v ((::AdwAlertDialog*) (gobj_()));
  return _temp_ret;
}

// AdwResponseAppearance adw_alert_dialog_get_response_appearance (AdwAlertDialog* self /*none*/, const char* response /*none*/);
// ::AdwResponseAppearance adw_alert_dialog_get_response_appearance (::AdwAlertDialog* self /*none*/, const char* response /*none*/);
Adw::ResponseAppearance base::AlertDialogBase::get_response_appearance (const gi::cstring_v response) noexcept
{
  typedef ::AdwResponseAppearance (*call_wrap_t) (::AdwAlertDialog* self, const char* response);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_alert_dialog_get_response_appearance;
  auto response_to_c = gi::unwrap (response, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::AdwAlertDialog*) (gobj_()), (const char*) (response_to_c));
  return gi::wrap (_temp_ret);
}

// gboolean adw_alert_dialog_get_response_enabled (AdwAlertDialog* self /*none*/, const char* response /*none*/);
// gboolean adw_alert_dialog_get_response_enabled (::AdwAlertDialog* self /*none*/, const char* response /*none*/);
bool base::AlertDialogBase::get_response_enabled (const gi::cstring_v response) noexcept
{
  typedef gboolean (*call_wrap_t) (::AdwAlertDialog* self, const char* response);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_alert_dialog_get_response_enabled;
  auto response_to_c = gi::unwrap (response, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::AdwAlertDialog*) (gobj_()), (const char*) (response_to_c));
  return _temp_ret;
}

// const char* /*none*/ adw_alert_dialog_get_response_label (AdwAlertDialog* self /*none*/, const char* response /*none*/);
// const char* /*none*/ adw_alert_dialog_get_response_label (::AdwAlertDialog* self /*none*/, const char* response /*none*/);
gi::cstring_v base::AlertDialogBase::get_response_label (const gi::cstring_v response) noexcept
{
  typedef const char* (*call_wrap_t) (::AdwAlertDialog* self, const char* response);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_alert_dialog_get_response_label;
  auto response_to_c = gi::unwrap (response, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::AdwAlertDialog*) (gobj_()), (const char*) (response_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// gboolean adw_alert_dialog_has_response (AdwAlertDialog* self /*none*/, const char* response /*none*/);
// gboolean adw_alert_dialog_has_response (::AdwAlertDialog* self /*none*/, const char* response /*none*/);
bool base::AlertDialogBase::has_response (const gi::cstring_v response) noexcept
{
  typedef gboolean (*call_wrap_t) (::AdwAlertDialog* self, const char* response);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_alert_dialog_has_response;
  auto response_to_c = gi::unwrap (response, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::AdwAlertDialog*) (gobj_()), (const char*) (response_to_c));
  return _temp_ret;
}

// void adw_alert_dialog_remove_response (AdwAlertDialog* self /*none*/, const char* id /*none*/);
// void adw_alert_dialog_remove_response (::AdwAlertDialog* self /*none*/, const char* id /*none*/);
void base::AlertDialogBase::remove_response (const gi::cstring_v id) noexcept
{
  typedef void (*call_wrap_t) (::AdwAlertDialog* self, const char* id);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_alert_dialog_remove_response;
  auto id_to_c = gi::unwrap (id, gi::transfer_none);
  call_wrap_v ((::AdwAlertDialog*) (gobj_()), (const char*) (id_to_c));
}

// void adw_alert_dialog_set_body (AdwAlertDialog* self /*none*/, const char* body /*none*/);
// void adw_alert_dialog_set_body (::AdwAlertDialog* self /*none*/, const char* body /*none*/);
void base::AlertDialogBase::set_body (const gi::cstring_v body) noexcept
{
  typedef void (*call_wrap_t) (::AdwAlertDialog* self, const char* body);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_alert_dialog_set_body;
  auto body_to_c = gi::unwrap (body, gi::transfer_none);
  call_wrap_v ((::AdwAlertDialog*) (gobj_()), (const char*) (body_to_c));
}

// void adw_alert_dialog_set_body_use_markup (AdwAlertDialog* self /*none*/, gboolean use_markup);
// void adw_alert_dialog_set_body_use_markup (::AdwAlertDialog* self /*none*/, gboolean use_markup);
void base::AlertDialogBase::set_body_use_markup (gboolean use_markup) noexcept
{
  typedef void (*call_wrap_t) (::AdwAlertDialog* self, gboolean use_markup);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_alert_dialog_set_body_use_markup;
  auto use_markup_to_c = use_markup;
  call_wrap_v ((::AdwAlertDialog*) (gobj_()), (gboolean) (use_markup_to_c));
}

// void adw_alert_dialog_set_close_response (AdwAlertDialog* self /*none*/, const char* response /*none*/);
// void adw_alert_dialog_set_close_response (::AdwAlertDialog* self /*none*/, const char* response /*none*/);
void base::AlertDialogBase::set_close_response (const gi::cstring_v response) noexcept
{
  typedef void (*call_wrap_t) (::AdwAlertDialog* self, const char* response);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_alert_dialog_set_close_response;
  auto response_to_c = gi::unwrap (response, gi::transfer_none);
  call_wrap_v ((::AdwAlertDialog*) (gobj_()), (const char*) (response_to_c));
}

// void adw_alert_dialog_set_default_response (AdwAlertDialog* self /*none*/, const char* response /*none,nullable*/);
// void adw_alert_dialog_set_default_response (::AdwAlertDialog* self /*none*/, const char* response /*none,nullable*/);
void base::AlertDialogBase::set_default_response (const gi::cstring_v response) noexcept
{
  typedef void (*call_wrap_t) (::AdwAlertDialog* self, const char* response);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_alert_dialog_set_default_response;
  auto response_to_c = gi::unwrap (response, gi::transfer_none);
  call_wrap_v ((::AdwAlertDialog*) (gobj_()), (const char*) (response_to_c));
}
void base::AlertDialogBase::set_default_response () noexcept
{
  typedef void (*call_wrap_t) (::AdwAlertDialog* self, const char* response);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_alert_dialog_set_default_response;
  auto response_to_c = nullptr;
  call_wrap_v ((::AdwAlertDialog*) (gobj_()), (const char*) (response_to_c));
}

// void adw_alert_dialog_set_extra_child (AdwAlertDialog* self /*none*/, GtkWidget* child /*none,nullable*/);
// void adw_alert_dialog_set_extra_child (::AdwAlertDialog* self /*none*/, ::GtkWidget* child /*none,nullable*/);
void base::AlertDialogBase::set_extra_child (Gtk::Widget child) noexcept
{
  typedef void (*call_wrap_t) (::AdwAlertDialog* self, ::GtkWidget* child);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_alert_dialog_set_extra_child;
  auto child_to_c = gi::unwrap (child, gi::transfer_none);
  call_wrap_v ((::AdwAlertDialog*) (gobj_()), (::GtkWidget*) (child_to_c));
}
void base::AlertDialogBase::set_extra_child () noexcept
{
  typedef void (*call_wrap_t) (::AdwAlertDialog* self, ::GtkWidget* child);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_alert_dialog_set_extra_child;
  auto child_to_c = nullptr;
  call_wrap_v ((::AdwAlertDialog*) (gobj_()), (::GtkWidget*) (child_to_c));
}

// void adw_alert_dialog_set_heading (AdwAlertDialog* self /*none*/, const char* heading /*none,nullable*/);
// void adw_alert_dialog_set_heading (::AdwAlertDialog* self /*none*/, const char* heading /*none,nullable*/);
void base::AlertDialogBase::set_heading (const gi::cstring_v heading) noexcept
{
  typedef void (*call_wrap_t) (::AdwAlertDialog* self, const char* heading);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_alert_dialog_set_heading;
  auto heading_to_c = gi::unwrap (heading, gi::transfer_none);
  call_wrap_v ((::AdwAlertDialog*) (gobj_()), (const char*) (heading_to_c));
}
void base::AlertDialogBase::set_heading () noexcept
{
  typedef void (*call_wrap_t) (::AdwAlertDialog* self, const char* heading);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_alert_dialog_set_heading;
  auto heading_to_c = nullptr;
  call_wrap_v ((::AdwAlertDialog*) (gobj_()), (const char*) (heading_to_c));
}

// void adw_alert_dialog_set_heading_use_markup (AdwAlertDialog* self /*none*/, gboolean use_markup);
// void adw_alert_dialog_set_heading_use_markup (::AdwAlertDialog* self /*none*/, gboolean use_markup);
void base::AlertDialogBase::set_heading_use_markup (gboolean use_markup) noexcept
{
  typedef void (*call_wrap_t) (::AdwAlertDialog* self, gboolean use_markup);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_alert_dialog_set_heading_use_markup;
  auto use_markup_to_c = use_markup;
  call_wrap_v ((::AdwAlertDialog*) (gobj_()), (gboolean) (use_markup_to_c));
}

// void adw_alert_dialog_set_prefer_wide_layout (AdwAlertDialog* self /*none*/, gboolean prefer_wide_layout);
// void adw_alert_dialog_set_prefer_wide_layout (::AdwAlertDialog* self /*none*/, gboolean prefer_wide_layout);
void base::AlertDialogBase::set_prefer_wide_layout (gboolean prefer_wide_layout) noexcept
{
  typedef void (*call_wrap_t) (::AdwAlertDialog* self, gboolean prefer_wide_layout);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_alert_dialog_set_prefer_wide_layout;
  auto prefer_wide_layout_to_c = prefer_wide_layout;
  call_wrap_v ((::AdwAlertDialog*) (gobj_()), (gboolean) (prefer_wide_layout_to_c));
}

// void adw_alert_dialog_set_response_appearance (AdwAlertDialog* self /*none*/, const char* response /*none*/, AdwResponseAppearance appearance);
// void adw_alert_dialog_set_response_appearance (::AdwAlertDialog* self /*none*/, const char* response /*none*/, ::AdwResponseAppearance appearance);
void base::AlertDialogBase::set_response_appearance (const gi::cstring_v response, Adw::ResponseAppearance appearance) noexcept
{
  typedef void (*call_wrap_t) (::AdwAlertDialog* self, const char* response, ::AdwResponseAppearance appearance);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_alert_dialog_set_response_appearance;
  auto appearance_to_c = gi::unwrap (appearance);
  auto response_to_c = gi::unwrap (response, gi::transfer_none);
  call_wrap_v ((::AdwAlertDialog*) (gobj_()), (const char*) (response_to_c), (::AdwResponseAppearance) (appearance_to_c));
}

// void adw_alert_dialog_set_response_enabled (AdwAlertDialog* self /*none*/, const char* response /*none*/, gboolean enabled);
// void adw_alert_dialog_set_response_enabled (::AdwAlertDialog* self /*none*/, const char* response /*none*/, gboolean enabled);
void base::AlertDialogBase::set_response_enabled (const gi::cstring_v response, gboolean enabled) noexcept
{
  typedef void (*call_wrap_t) (::AdwAlertDialog* self, const char* response, gboolean enabled);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_alert_dialog_set_response_enabled;
  auto enabled_to_c = enabled;
  auto response_to_c = gi::unwrap (response, gi::transfer_none);
  call_wrap_v ((::AdwAlertDialog*) (gobj_()), (const char*) (response_to_c), (gboolean) (enabled_to_c));
}

// void adw_alert_dialog_set_response_label (AdwAlertDialog* self /*none*/, const char* response /*none*/, const char* label /*none*/);
// void adw_alert_dialog_set_response_label (::AdwAlertDialog* self /*none*/, const char* response /*none*/, const char* label /*none*/);
void base::AlertDialogBase::set_response_label (const gi::cstring_v response, const gi::cstring_v label) noexcept
{
  typedef void (*call_wrap_t) (::AdwAlertDialog* self, const char* response, const char* label);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_alert_dialog_set_response_label;
  auto label_to_c = gi::unwrap (label, gi::transfer_none);
  auto response_to_c = gi::unwrap (response, gi::transfer_none);
  call_wrap_v ((::AdwAlertDialog*) (gobj_()), (const char*) (response_to_c), (const char*) (label_to_c));
}



} // namespace base

} // namespace Adw

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<adw/alertdialog_extra_def_impl.hpp>)
#include <adw/alertdialog_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<adw/alertdialog_extra_impl.hpp>)
#include <adw/alertdialog_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Adw {

namespace impl {

namespace internal {

void AlertDialogClassDef::class_init (gpointer class_struct, gpointer factory)
{
  ::AdwAlertDialogClass *methods = (::AdwAlertDialogClass *) class_struct;
  (void) methods;

  auto init_data = GI_MEMBER_INIT_DATA(TypeInitData, factory);
  (void) init_data;

  if (init_data.response) methods->response = (decltype (methods->response)) gi::detail::method_wrapper<self, void (*) (const gi::cstring_v response), gi::transfer_full_t, std::tuple<gi::transfer_none_t>>::wrapper<&self::response_>;
}

// void AlertDialog::response (AdwAlertDialog* self /*none*/, const char* response /*none*/);
// void AlertDialog::response (::AdwAlertDialog* self /*none*/, const char* response /*none*/);
void AlertDialogClass::response_ (const gi::cstring_v response) noexcept
{
  if (!get_struct_()->response) { g_critical ("no method in class struct"); return ; }
  typedef void (*call_wrap_t) (::AdwAlertDialog* self, const char* response);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->response;
  auto response_to_c = gi::unwrap (response, gi::transfer_none);
  call_wrap_v ((::AdwAlertDialog*) (gobj_()), (const char*) (response_to_c));
}

} // namespace internal

} // namespace impl

} // namespace Adw

} // namespace repository

} // namespace gi

#endif
