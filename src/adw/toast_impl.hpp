// AUTO-GENERATED

#ifndef _GI_ADW_TOAST_IMPL_HPP_
#define _GI_ADW_TOAST_IMPL_HPP_

namespace gi {

namespace repository {

namespace Adw {

namespace base {

// AdwToast* /*full*/ adw_toast_new (const char* title /*none*/);
// ::AdwToast* /*full*/ adw_toast_new (const char* title /*none*/);
Adw::Toast base::ToastBase::new_ (const gi::cstring_v title) noexcept
{
  typedef ::AdwToast* (*call_wrap_t) (const char* title);
  call_wrap_t call_wrap_v = (call_wrap_t) adw_toast_new;
  auto title_to_c = gi::unwrap (title, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const char*) (title_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// AdwToast* /*full*/ adw_toast_new_format (const char* format /*none*/,  ..._ /*none*/);
// ::AdwToast* /*full*/ adw_toast_new_format (const char* format /*none*/,  ..._ /*none*/);
// IGNORE; not introspectable, varargs not supported

// void adw_toast_dismiss (AdwToast* self /*none*/);
// void adw_toast_dismiss (::AdwToast* self /*none*/);
void base::ToastBase::dismiss () noexcept
{
  typedef void (*call_wrap_t) (::AdwToast* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_toast_dismiss;
  call_wrap_v ((::AdwToast*) (gobj_()));
}

// const char* /*none,nullable*/ adw_toast_get_action_name (AdwToast* self /*none*/);
// const char* /*none,nullable*/ adw_toast_get_action_name (::AdwToast* self /*none*/);
gi::cstring_v base::ToastBase::get_action_name () noexcept
{
  typedef const char* (*call_wrap_t) (::AdwToast* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_toast_get_action_name;
  auto _temp_ret = call_wrap_v ((::AdwToast*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// GVariant* /*none,nullable*/ adw_toast_get_action_target_value (AdwToast* self /*none*/);
// ::GVariant* /*none,nullable*/ adw_toast_get_action_target_value (::AdwToast* self /*none*/);
GLib::Variant base::ToastBase::get_action_target_value () noexcept
{
  typedef ::GVariant* (*call_wrap_t) (::AdwToast* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_toast_get_action_target_value;
  auto _temp_ret = call_wrap_v ((::AdwToast*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// const char* /*none,nullable*/ adw_toast_get_button_label (AdwToast* self /*none*/);
// const char* /*none,nullable*/ adw_toast_get_button_label (::AdwToast* self /*none*/);
gi::cstring_v base::ToastBase::get_button_label () noexcept
{
  typedef const char* (*call_wrap_t) (::AdwToast* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_toast_get_button_label;
  auto _temp_ret = call_wrap_v ((::AdwToast*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// GtkWidget* /*none,nullable*/ adw_toast_get_custom_title (AdwToast* self /*none*/);
// ::GtkWidget* /*none,nullable*/ adw_toast_get_custom_title (::AdwToast* self /*none*/);
Gtk::Widget base::ToastBase::get_custom_title () noexcept
{
  typedef ::GtkWidget* (*call_wrap_t) (::AdwToast* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_toast_get_custom_title;
  auto _temp_ret = call_wrap_v ((::AdwToast*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// AdwToastPriority adw_toast_get_priority (AdwToast* self /*none*/);
// ::AdwToastPriority adw_toast_get_priority (::AdwToast* self /*none*/);
Adw::ToastPriority base::ToastBase::get_priority () noexcept
{
  typedef ::AdwToastPriority (*call_wrap_t) (::AdwToast* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_toast_get_priority;
  auto _temp_ret = call_wrap_v ((::AdwToast*) (gobj_()));
  return gi::wrap (_temp_ret);
}

// guint adw_toast_get_timeout (AdwToast* self /*none*/);
// guint adw_toast_get_timeout (::AdwToast* self /*none*/);
guint base::ToastBase::get_timeout () noexcept
{
  typedef guint (*call_wrap_t) (::AdwToast* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_toast_get_timeout;
  auto _temp_ret = call_wrap_v ((::AdwToast*) (gobj_()));
  return _temp_ret;
}

// const char* /*none,nullable*/ adw_toast_get_title (AdwToast* self /*none*/);
// const char* /*none,nullable*/ adw_toast_get_title (::AdwToast* self /*none*/);
gi::cstring_v base::ToastBase::get_title () noexcept
{
  typedef const char* (*call_wrap_t) (::AdwToast* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_toast_get_title;
  auto _temp_ret = call_wrap_v ((::AdwToast*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// gboolean adw_toast_get_use_markup (AdwToast* self /*none*/);
// gboolean adw_toast_get_use_markup (::AdwToast* self /*none*/);
bool base::ToastBase::get_use_markup () noexcept
{
  typedef gboolean (*call_wrap_t) (::AdwToast* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_toast_get_use_markup;
  auto _temp_ret = call_wrap_v ((::AdwToast*) (gobj_()));
  return _temp_ret;
}

// void adw_toast_set_action_name (AdwToast* self /*none*/, const char* action_name /*none,nullable*/);
// void adw_toast_set_action_name (::AdwToast* self /*none*/, const char* action_name /*none,nullable*/);
void base::ToastBase::set_action_name (const gi::cstring_v action_name) noexcept
{
  typedef void (*call_wrap_t) (::AdwToast* self, const char* action_name);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_toast_set_action_name;
  auto action_name_to_c = gi::unwrap (action_name, gi::transfer_none);
  call_wrap_v ((::AdwToast*) (gobj_()), (const char*) (action_name_to_c));
}
void base::ToastBase::set_action_name () noexcept
{
  typedef void (*call_wrap_t) (::AdwToast* self, const char* action_name);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_toast_set_action_name;
  auto action_name_to_c = nullptr;
  call_wrap_v ((::AdwToast*) (gobj_()), (const char*) (action_name_to_c));
}

// void adw_toast_set_action_target (AdwToast* self /*none*/, const char* format_string /*none,nullable*/,  ..._ /*none*/);
// void adw_toast_set_action_target (::AdwToast* self /*none*/, const char* format_string /*none,nullable*/,  ..._ /*none*/);
// IGNORE; not introspectable, varargs not supported

// void adw_toast_set_action_target_value (AdwToast* self /*none*/, GVariant* action_target /*none,nullable*/);
// void adw_toast_set_action_target_value (::AdwToast* self /*none*/, ::GVariant* action_target /*none,nullable*/);
void base::ToastBase::set_action_target_value (GLib::Variant action_target) noexcept
{
  typedef void (*call_wrap_t) (::AdwToast* self, ::GVariant* action_target);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_toast_set_action_target_value;
  auto action_target_to_c = gi::unwrap (action_target, gi::transfer_none);
  call_wrap_v ((::AdwToast*) (gobj_()), (::GVariant*) (action_target_to_c));
}
void base::ToastBase::set_action_target_value () noexcept
{
  typedef void (*call_wrap_t) (::AdwToast* self, ::GVariant* action_target);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_toast_set_action_target_value;
  auto action_target_to_c = nullptr;
  call_wrap_v ((::AdwToast*) (gobj_()), (::GVariant*) (action_target_to_c));
}

// void adw_toast_set_button_label (AdwToast* self /*none*/, const char* button_label /*none,nullable*/);
// void adw_toast_set_button_label (::AdwToast* self /*none*/, const char* button_label /*none,nullable*/);
void base::ToastBase::set_button_label (const gi::cstring_v button_label) noexcept
{
  typedef void (*call_wrap_t) (::AdwToast* self, const char* button_label);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_toast_set_button_label;
  auto button_label_to_c = gi::unwrap (button_label, gi::transfer_none);
  call_wrap_v ((::AdwToast*) (gobj_()), (const char*) (button_label_to_c));
}
void base::ToastBase::set_button_label () noexcept
{
  typedef void (*call_wrap_t) (::AdwToast* self, const char* button_label);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_toast_set_button_label;
  auto button_label_to_c = nullptr;
  call_wrap_v ((::AdwToast*) (gobj_()), (const char*) (button_label_to_c));
}

// void adw_toast_set_custom_title (AdwToast* self /*none*/, GtkWidget* widget /*none,nullable*/);
// void adw_toast_set_custom_title (::AdwToast* self /*none*/, ::GtkWidget* widget /*none,nullable*/);
void base::ToastBase::set_custom_title (Gtk::Widget widget) noexcept
{
  typedef void (*call_wrap_t) (::AdwToast* self, ::GtkWidget* widget);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_toast_set_custom_title;
  auto widget_to_c = gi::unwrap (widget, gi::transfer_none);
  call_wrap_v ((::AdwToast*) (gobj_()), (::GtkWidget*) (widget_to_c));
}
void base::ToastBase::set_custom_title () noexcept
{
  typedef void (*call_wrap_t) (::AdwToast* self, ::GtkWidget* widget);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_toast_set_custom_title;
  auto widget_to_c = nullptr;
  call_wrap_v ((::AdwToast*) (gobj_()), (::GtkWidget*) (widget_to_c));
}

// void adw_toast_set_detailed_action_name (AdwToast* self /*none*/, const char* detailed_action_name /*none,nullable*/);
// void adw_toast_set_detailed_action_name (::AdwToast* self /*none*/, const char* detailed_action_name /*none,nullable*/);
void base::ToastBase::set_detailed_action_name (const gi::cstring_v detailed_action_name) noexcept
{
  typedef void (*call_wrap_t) (::AdwToast* self, const char* detailed_action_name);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_toast_set_detailed_action_name;
  auto detailed_action_name_to_c = gi::unwrap (detailed_action_name, gi::transfer_none);
  call_wrap_v ((::AdwToast*) (gobj_()), (const char*) (detailed_action_name_to_c));
}
void base::ToastBase::set_detailed_action_name () noexcept
{
  typedef void (*call_wrap_t) (::AdwToast* self, const char* detailed_action_name);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_toast_set_detailed_action_name;
  auto detailed_action_name_to_c = nullptr;
  call_wrap_v ((::AdwToast*) (gobj_()), (const char*) (detailed_action_name_to_c));
}

// void adw_toast_set_priority (AdwToast* self /*none*/, AdwToastPriority priority);
// void adw_toast_set_priority (::AdwToast* self /*none*/, ::AdwToastPriority priority);
void base::ToastBase::set_priority (Adw::ToastPriority priority) noexcept
{
  typedef void (*call_wrap_t) (::AdwToast* self, ::AdwToastPriority priority);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_toast_set_priority;
  auto priority_to_c = gi::unwrap (priority);
  call_wrap_v ((::AdwToast*) (gobj_()), (::AdwToastPriority) (priority_to_c));
}

// void adw_toast_set_timeout (AdwToast* self /*none*/, guint timeout);
// void adw_toast_set_timeout (::AdwToast* self /*none*/, guint timeout);
void base::ToastBase::set_timeout (guint timeout) noexcept
{
  typedef void (*call_wrap_t) (::AdwToast* self, guint timeout);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_toast_set_timeout;
  auto timeout_to_c = timeout;
  call_wrap_v ((::AdwToast*) (gobj_()), (guint) (timeout_to_c));
}

// void adw_toast_set_title (AdwToast* self /*none*/, const char* title /*none*/);
// void adw_toast_set_title (::AdwToast* self /*none*/, const char* title /*none*/);
void base::ToastBase::set_title (const gi::cstring_v title) noexcept
{
  typedef void (*call_wrap_t) (::AdwToast* self, const char* title);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_toast_set_title;
  auto title_to_c = gi::unwrap (title, gi::transfer_none);
  call_wrap_v ((::AdwToast*) (gobj_()), (const char*) (title_to_c));
}

// void adw_toast_set_use_markup (AdwToast* self /*none*/, gboolean use_markup);
// void adw_toast_set_use_markup (::AdwToast* self /*none*/, gboolean use_markup);
void base::ToastBase::set_use_markup (gboolean use_markup) noexcept
{
  typedef void (*call_wrap_t) (::AdwToast* self, gboolean use_markup);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_toast_set_use_markup;
  auto use_markup_to_c = use_markup;
  call_wrap_v ((::AdwToast*) (gobj_()), (gboolean) (use_markup_to_c));
}




} // namespace base

} // namespace Adw

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<adw/toast_extra_def_impl.hpp>)
#include <adw/toast_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<adw/toast_extra_impl.hpp>)
#include <adw/toast_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Adw {

namespace impl {

namespace internal {

void ToastClassDef::class_init (gpointer class_struct, gpointer factory)
{
  ::AdwToastClass *methods = (::AdwToastClass *) class_struct;
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
