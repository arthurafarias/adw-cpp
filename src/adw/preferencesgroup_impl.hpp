// AUTO-GENERATED

#ifndef _GI_ADW_PREFERENCESGROUP_IMPL_HPP_
#define _GI_ADW_PREFERENCESGROUP_IMPL_HPP_

namespace gi {

namespace repository {

namespace Adw {

namespace base {

// GtkWidget* /*none*/ adw_preferences_group_new ();
// ::AdwPreferencesGroup* /*none*/ adw_preferences_group_new ();
Adw::PreferencesGroup base::PreferencesGroupBase::new_ () noexcept
{
  typedef ::AdwPreferencesGroup* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) adw_preferences_group_new;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// void adw_preferences_group_add (AdwPreferencesGroup* self /*none*/, GtkWidget* child /*none*/);
// void adw_preferences_group_add (::AdwPreferencesGroup* self /*none*/, ::GtkWidget* child /*none*/);
void base::PreferencesGroupBase::add (Gtk::Widget child) noexcept
{
  typedef void (*call_wrap_t) (::AdwPreferencesGroup* self, ::GtkWidget* child);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_preferences_group_add;
  auto child_to_c = gi::unwrap (child, gi::transfer_none);
  call_wrap_v ((::AdwPreferencesGroup*) (gobj_()), (::GtkWidget*) (child_to_c));
}

// void adw_preferences_group_bind_model (AdwPreferencesGroup* self /*none*/, GListModel* model /*none,nullable*/, GtkListBoxCreateWidgetFunc create_row_func /*none,nullable*/, gpointer user_data, GDestroyNotify user_data_free_func /*none*/);
// void adw_preferences_group_bind_model (::AdwPreferencesGroup* self /*none*/, ::GListModel* model /*none,nullable*/, Gtk::ListBoxCreateWidgetFunc::cfunction_type create_row_func /*none,nullable*/, void* user_data, GLib::DestroyNotify::cfunction_type user_data_free_func /*none*/);
void base::PreferencesGroupBase::bind_model (Gio::ListModel model, Gtk::ListBoxCreateWidgetFunc create_row_func) noexcept
{
  typedef void (*call_wrap_t) (::AdwPreferencesGroup* self, ::GListModel* model, Gtk::ListBoxCreateWidgetFunc::cfunction_type create_row_func, void* user_data, GLib::DestroyNotify::cfunction_type user_data_free_func);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_preferences_group_bind_model;
  auto create_row_func_wrap_ = create_row_func ? unwrap (std::move (create_row_func), gi::scope_notified) : nullptr;
  auto model_to_c = gi::unwrap (model, gi::transfer_none);
  call_wrap_v ((::AdwPreferencesGroup*) (gobj_()), (::GListModel*) (model_to_c), (Gtk::ListBoxCreateWidgetFunc::cfunction_type) (create_row_func_wrap_ ? &create_row_func_wrap_->wrapper : nullptr), (void*) (create_row_func_wrap_), (GLib::DestroyNotify::cfunction_type) (create_row_func_wrap_ ? &create_row_func_wrap_->destroy : nullptr));
}
void base::PreferencesGroupBase::bind_model (Gtk::ListBoxCreateWidgetFunc create_row_func) noexcept
{
  typedef void (*call_wrap_t) (::AdwPreferencesGroup* self, ::GListModel* model, Gtk::ListBoxCreateWidgetFunc::cfunction_type create_row_func, void* user_data, GLib::DestroyNotify::cfunction_type user_data_free_func);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_preferences_group_bind_model;
  auto create_row_func_wrap_ = create_row_func ? unwrap (std::move (create_row_func), gi::scope_notified) : nullptr;
  auto model_to_c = nullptr;
  call_wrap_v ((::AdwPreferencesGroup*) (gobj_()), (::GListModel*) (model_to_c), (Gtk::ListBoxCreateWidgetFunc::cfunction_type) (create_row_func_wrap_ ? &create_row_func_wrap_->wrapper : nullptr), (void*) (create_row_func_wrap_), (GLib::DestroyNotify::cfunction_type) (create_row_func_wrap_ ? &create_row_func_wrap_->destroy : nullptr));
}

// const char* /*none,nullable*/ adw_preferences_group_get_description (AdwPreferencesGroup* self /*none*/);
// const char* /*none,nullable*/ adw_preferences_group_get_description (::AdwPreferencesGroup* self /*none*/);
gi::cstring_v base::PreferencesGroupBase::get_description () noexcept
{
  typedef const char* (*call_wrap_t) (::AdwPreferencesGroup* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_preferences_group_get_description;
  auto _temp_ret = call_wrap_v ((::AdwPreferencesGroup*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// GtkWidget* /*none,nullable*/ adw_preferences_group_get_header_suffix (AdwPreferencesGroup* self /*none*/);
// ::GtkWidget* /*none,nullable*/ adw_preferences_group_get_header_suffix (::AdwPreferencesGroup* self /*none*/);
Gtk::Widget base::PreferencesGroupBase::get_header_suffix () noexcept
{
  typedef ::GtkWidget* (*call_wrap_t) (::AdwPreferencesGroup* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_preferences_group_get_header_suffix;
  auto _temp_ret = call_wrap_v ((::AdwPreferencesGroup*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// GtkWidget* /*none,nullable*/ adw_preferences_group_get_row (AdwPreferencesGroup* self /*none*/, guint index);
// ::GtkWidget* /*none,nullable*/ adw_preferences_group_get_row (::AdwPreferencesGroup* self /*none*/, guint index);
Gtk::Widget base::PreferencesGroupBase::get_row (guint index) noexcept
{
  typedef ::GtkWidget* (*call_wrap_t) (::AdwPreferencesGroup* self, guint index);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_preferences_group_get_row;
  auto index_to_c = index;
  auto _temp_ret = call_wrap_v ((::AdwPreferencesGroup*) (gobj_()), (guint) (index_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// gboolean adw_preferences_group_get_separate_rows (AdwPreferencesGroup* self /*none*/);
// gboolean adw_preferences_group_get_separate_rows (::AdwPreferencesGroup* self /*none*/);
bool base::PreferencesGroupBase::get_separate_rows () noexcept
{
  typedef gboolean (*call_wrap_t) (::AdwPreferencesGroup* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_preferences_group_get_separate_rows;
  auto _temp_ret = call_wrap_v ((::AdwPreferencesGroup*) (gobj_()));
  return _temp_ret;
}

// const char* /*none*/ adw_preferences_group_get_title (AdwPreferencesGroup* self /*none*/);
// const char* /*none*/ adw_preferences_group_get_title (::AdwPreferencesGroup* self /*none*/);
gi::cstring_v base::PreferencesGroupBase::get_title () noexcept
{
  typedef const char* (*call_wrap_t) (::AdwPreferencesGroup* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_preferences_group_get_title;
  auto _temp_ret = call_wrap_v ((::AdwPreferencesGroup*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// void adw_preferences_group_remove (AdwPreferencesGroup* self /*none*/, GtkWidget* child /*none*/);
// void adw_preferences_group_remove (::AdwPreferencesGroup* self /*none*/, ::GtkWidget* child /*none*/);
void base::PreferencesGroupBase::remove (Gtk::Widget child) noexcept
{
  typedef void (*call_wrap_t) (::AdwPreferencesGroup* self, ::GtkWidget* child);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_preferences_group_remove;
  auto child_to_c = gi::unwrap (child, gi::transfer_none);
  call_wrap_v ((::AdwPreferencesGroup*) (gobj_()), (::GtkWidget*) (child_to_c));
}

// void adw_preferences_group_set_description (AdwPreferencesGroup* self /*none*/, const char* description /*none,nullable*/);
// void adw_preferences_group_set_description (::AdwPreferencesGroup* self /*none*/, const char* description /*none,nullable*/);
void base::PreferencesGroupBase::set_description (const gi::cstring_v description) noexcept
{
  typedef void (*call_wrap_t) (::AdwPreferencesGroup* self, const char* description);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_preferences_group_set_description;
  auto description_to_c = gi::unwrap (description, gi::transfer_none);
  call_wrap_v ((::AdwPreferencesGroup*) (gobj_()), (const char*) (description_to_c));
}
void base::PreferencesGroupBase::set_description () noexcept
{
  typedef void (*call_wrap_t) (::AdwPreferencesGroup* self, const char* description);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_preferences_group_set_description;
  auto description_to_c = nullptr;
  call_wrap_v ((::AdwPreferencesGroup*) (gobj_()), (const char*) (description_to_c));
}

// void adw_preferences_group_set_header_suffix (AdwPreferencesGroup* self /*none*/, GtkWidget* suffix /*none,nullable*/);
// void adw_preferences_group_set_header_suffix (::AdwPreferencesGroup* self /*none*/, ::GtkWidget* suffix /*none,nullable*/);
void base::PreferencesGroupBase::set_header_suffix (Gtk::Widget suffix) noexcept
{
  typedef void (*call_wrap_t) (::AdwPreferencesGroup* self, ::GtkWidget* suffix);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_preferences_group_set_header_suffix;
  auto suffix_to_c = gi::unwrap (suffix, gi::transfer_none);
  call_wrap_v ((::AdwPreferencesGroup*) (gobj_()), (::GtkWidget*) (suffix_to_c));
}
void base::PreferencesGroupBase::set_header_suffix () noexcept
{
  typedef void (*call_wrap_t) (::AdwPreferencesGroup* self, ::GtkWidget* suffix);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_preferences_group_set_header_suffix;
  auto suffix_to_c = nullptr;
  call_wrap_v ((::AdwPreferencesGroup*) (gobj_()), (::GtkWidget*) (suffix_to_c));
}

// void adw_preferences_group_set_separate_rows (AdwPreferencesGroup* self /*none*/, gboolean separate_rows);
// void adw_preferences_group_set_separate_rows (::AdwPreferencesGroup* self /*none*/, gboolean separate_rows);
void base::PreferencesGroupBase::set_separate_rows (gboolean separate_rows) noexcept
{
  typedef void (*call_wrap_t) (::AdwPreferencesGroup* self, gboolean separate_rows);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_preferences_group_set_separate_rows;
  auto separate_rows_to_c = separate_rows;
  call_wrap_v ((::AdwPreferencesGroup*) (gobj_()), (gboolean) (separate_rows_to_c));
}

// void adw_preferences_group_set_title (AdwPreferencesGroup* self /*none*/, const char* title /*none*/);
// void adw_preferences_group_set_title (::AdwPreferencesGroup* self /*none*/, const char* title /*none*/);
void base::PreferencesGroupBase::set_title (const gi::cstring_v title) noexcept
{
  typedef void (*call_wrap_t) (::AdwPreferencesGroup* self, const char* title);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_preferences_group_set_title;
  auto title_to_c = gi::unwrap (title, gi::transfer_none);
  call_wrap_v ((::AdwPreferencesGroup*) (gobj_()), (const char*) (title_to_c));
}


} // namespace base

} // namespace Adw

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<adw/preferencesgroup_extra_def_impl.hpp>)
#include <adw/preferencesgroup_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<adw/preferencesgroup_extra_impl.hpp>)
#include <adw/preferencesgroup_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Adw {

namespace impl {

namespace internal {

void PreferencesGroupClassDef::class_init (gpointer class_struct, gpointer factory)
{
  ::AdwPreferencesGroupClass *methods = (::AdwPreferencesGroupClass *) class_struct;
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
