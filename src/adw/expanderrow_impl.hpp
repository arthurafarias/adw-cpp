// AUTO-GENERATED

#ifndef _GI_ADW_EXPANDERROW_IMPL_HPP_
#define _GI_ADW_EXPANDERROW_IMPL_HPP_

namespace gi {

namespace repository {

namespace Adw {

namespace base {

// GtkWidget* /*none*/ adw_expander_row_new ();
// ::AdwExpanderRow* /*none*/ adw_expander_row_new ();
Adw::ExpanderRow base::ExpanderRowBase::new_ () noexcept
{
  typedef ::AdwExpanderRow* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) adw_expander_row_new;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// void adw_expander_row_add_action (AdwExpanderRow* self /*none*/, GtkWidget* widget /*none*/);
// void adw_expander_row_add_action (::AdwExpanderRow* self /*none*/, ::GtkWidget* widget /*none*/);
// IGNORE; deprecated

// void adw_expander_row_add_prefix (AdwExpanderRow* self /*none*/, GtkWidget* widget /*none*/);
// void adw_expander_row_add_prefix (::AdwExpanderRow* self /*none*/, ::GtkWidget* widget /*none*/);
void base::ExpanderRowBase::add_prefix (Gtk::Widget widget) noexcept
{
  typedef void (*call_wrap_t) (::AdwExpanderRow* self, ::GtkWidget* widget);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_expander_row_add_prefix;
  auto widget_to_c = gi::unwrap (widget, gi::transfer_none);
  call_wrap_v ((::AdwExpanderRow*) (gobj_()), (::GtkWidget*) (widget_to_c));
}

// void adw_expander_row_add_row (AdwExpanderRow* self /*none*/, GtkWidget* child /*none*/);
// void adw_expander_row_add_row (::AdwExpanderRow* self /*none*/, ::GtkWidget* child /*none*/);
void base::ExpanderRowBase::add_row (Gtk::Widget child) noexcept
{
  typedef void (*call_wrap_t) (::AdwExpanderRow* self, ::GtkWidget* child);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_expander_row_add_row;
  auto child_to_c = gi::unwrap (child, gi::transfer_none);
  call_wrap_v ((::AdwExpanderRow*) (gobj_()), (::GtkWidget*) (child_to_c));
}

// void adw_expander_row_add_suffix (AdwExpanderRow* self /*none*/, GtkWidget* widget /*none*/);
// void adw_expander_row_add_suffix (::AdwExpanderRow* self /*none*/, ::GtkWidget* widget /*none*/);
void base::ExpanderRowBase::add_suffix (Gtk::Widget widget) noexcept
{
  typedef void (*call_wrap_t) (::AdwExpanderRow* self, ::GtkWidget* widget);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_expander_row_add_suffix;
  auto widget_to_c = gi::unwrap (widget, gi::transfer_none);
  call_wrap_v ((::AdwExpanderRow*) (gobj_()), (::GtkWidget*) (widget_to_c));
}

// gboolean adw_expander_row_get_enable_expansion (AdwExpanderRow* self /*none*/);
// gboolean adw_expander_row_get_enable_expansion (::AdwExpanderRow* self /*none*/);
bool base::ExpanderRowBase::get_enable_expansion () noexcept
{
  typedef gboolean (*call_wrap_t) (::AdwExpanderRow* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_expander_row_get_enable_expansion;
  auto _temp_ret = call_wrap_v ((::AdwExpanderRow*) (gobj_()));
  return _temp_ret;
}

// gboolean adw_expander_row_get_expanded (AdwExpanderRow* self /*none*/);
// gboolean adw_expander_row_get_expanded (::AdwExpanderRow* self /*none*/);
bool base::ExpanderRowBase::get_expanded () noexcept
{
  typedef gboolean (*call_wrap_t) (::AdwExpanderRow* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_expander_row_get_expanded;
  auto _temp_ret = call_wrap_v ((::AdwExpanderRow*) (gobj_()));
  return _temp_ret;
}

// const char* /*none,nullable*/ adw_expander_row_get_icon_name (AdwExpanderRow* self /*none*/);
// const char* /*none,nullable*/ adw_expander_row_get_icon_name (::AdwExpanderRow* self /*none*/);
// IGNORE; deprecated

// gboolean adw_expander_row_get_show_enable_switch (AdwExpanderRow* self /*none*/);
// gboolean adw_expander_row_get_show_enable_switch (::AdwExpanderRow* self /*none*/);
bool base::ExpanderRowBase::get_show_enable_switch () noexcept
{
  typedef gboolean (*call_wrap_t) (::AdwExpanderRow* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_expander_row_get_show_enable_switch;
  auto _temp_ret = call_wrap_v ((::AdwExpanderRow*) (gobj_()));
  return _temp_ret;
}

// const char* /*none*/ adw_expander_row_get_subtitle (AdwExpanderRow* self /*none*/);
// const char* /*none*/ adw_expander_row_get_subtitle (::AdwExpanderRow* self /*none*/);
gi::cstring_v base::ExpanderRowBase::get_subtitle () noexcept
{
  typedef const char* (*call_wrap_t) (::AdwExpanderRow* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_expander_row_get_subtitle;
  auto _temp_ret = call_wrap_v ((::AdwExpanderRow*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// int adw_expander_row_get_subtitle_lines (AdwExpanderRow* self /*none*/);
// gint adw_expander_row_get_subtitle_lines (::AdwExpanderRow* self /*none*/);
gint base::ExpanderRowBase::get_subtitle_lines () noexcept
{
  typedef gint (*call_wrap_t) (::AdwExpanderRow* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_expander_row_get_subtitle_lines;
  auto _temp_ret = call_wrap_v ((::AdwExpanderRow*) (gobj_()));
  return _temp_ret;
}

// int adw_expander_row_get_title_lines (AdwExpanderRow* self /*none*/);
// gint adw_expander_row_get_title_lines (::AdwExpanderRow* self /*none*/);
gint base::ExpanderRowBase::get_title_lines () noexcept
{
  typedef gint (*call_wrap_t) (::AdwExpanderRow* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_expander_row_get_title_lines;
  auto _temp_ret = call_wrap_v ((::AdwExpanderRow*) (gobj_()));
  return _temp_ret;
}

// void adw_expander_row_remove (AdwExpanderRow* self /*none*/, GtkWidget* child /*none*/);
// void adw_expander_row_remove (::AdwExpanderRow* self /*none*/, ::GtkWidget* child /*none*/);
void base::ExpanderRowBase::remove (Gtk::Widget child) noexcept
{
  typedef void (*call_wrap_t) (::AdwExpanderRow* self, ::GtkWidget* child);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_expander_row_remove;
  auto child_to_c = gi::unwrap (child, gi::transfer_none);
  call_wrap_v ((::AdwExpanderRow*) (gobj_()), (::GtkWidget*) (child_to_c));
}

// void adw_expander_row_set_enable_expansion (AdwExpanderRow* self /*none*/, gboolean enable_expansion);
// void adw_expander_row_set_enable_expansion (::AdwExpanderRow* self /*none*/, gboolean enable_expansion);
void base::ExpanderRowBase::set_enable_expansion (gboolean enable_expansion) noexcept
{
  typedef void (*call_wrap_t) (::AdwExpanderRow* self, gboolean enable_expansion);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_expander_row_set_enable_expansion;
  auto enable_expansion_to_c = enable_expansion;
  call_wrap_v ((::AdwExpanderRow*) (gobj_()), (gboolean) (enable_expansion_to_c));
}

// void adw_expander_row_set_expanded (AdwExpanderRow* self /*none*/, gboolean expanded);
// void adw_expander_row_set_expanded (::AdwExpanderRow* self /*none*/, gboolean expanded);
void base::ExpanderRowBase::set_expanded (gboolean expanded) noexcept
{
  typedef void (*call_wrap_t) (::AdwExpanderRow* self, gboolean expanded);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_expander_row_set_expanded;
  auto expanded_to_c = expanded;
  call_wrap_v ((::AdwExpanderRow*) (gobj_()), (gboolean) (expanded_to_c));
}

// void adw_expander_row_set_icon_name (AdwExpanderRow* self /*none*/, const char* icon_name /*none,nullable*/);
// void adw_expander_row_set_icon_name (::AdwExpanderRow* self /*none*/, const char* icon_name /*none,nullable*/);
// IGNORE; deprecated

// void adw_expander_row_set_show_enable_switch (AdwExpanderRow* self /*none*/, gboolean show_enable_switch);
// void adw_expander_row_set_show_enable_switch (::AdwExpanderRow* self /*none*/, gboolean show_enable_switch);
void base::ExpanderRowBase::set_show_enable_switch (gboolean show_enable_switch) noexcept
{
  typedef void (*call_wrap_t) (::AdwExpanderRow* self, gboolean show_enable_switch);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_expander_row_set_show_enable_switch;
  auto show_enable_switch_to_c = show_enable_switch;
  call_wrap_v ((::AdwExpanderRow*) (gobj_()), (gboolean) (show_enable_switch_to_c));
}

// void adw_expander_row_set_subtitle (AdwExpanderRow* self /*none*/, const char* subtitle /*none*/);
// void adw_expander_row_set_subtitle (::AdwExpanderRow* self /*none*/, const char* subtitle /*none*/);
void base::ExpanderRowBase::set_subtitle (const gi::cstring_v subtitle) noexcept
{
  typedef void (*call_wrap_t) (::AdwExpanderRow* self, const char* subtitle);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_expander_row_set_subtitle;
  auto subtitle_to_c = gi::unwrap (subtitle, gi::transfer_none);
  call_wrap_v ((::AdwExpanderRow*) (gobj_()), (const char*) (subtitle_to_c));
}

// void adw_expander_row_set_subtitle_lines (AdwExpanderRow* self /*none*/, int subtitle_lines);
// void adw_expander_row_set_subtitle_lines (::AdwExpanderRow* self /*none*/, gint subtitle_lines);
void base::ExpanderRowBase::set_subtitle_lines (gint subtitle_lines) noexcept
{
  typedef void (*call_wrap_t) (::AdwExpanderRow* self, gint subtitle_lines);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_expander_row_set_subtitle_lines;
  auto subtitle_lines_to_c = subtitle_lines;
  call_wrap_v ((::AdwExpanderRow*) (gobj_()), (gint) (subtitle_lines_to_c));
}

// void adw_expander_row_set_title_lines (AdwExpanderRow* self /*none*/, int title_lines);
// void adw_expander_row_set_title_lines (::AdwExpanderRow* self /*none*/, gint title_lines);
void base::ExpanderRowBase::set_title_lines (gint title_lines) noexcept
{
  typedef void (*call_wrap_t) (::AdwExpanderRow* self, gint title_lines);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_expander_row_set_title_lines;
  auto title_lines_to_c = title_lines;
  call_wrap_v ((::AdwExpanderRow*) (gobj_()), (gint) (title_lines_to_c));
}


} // namespace base

} // namespace Adw

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<adw/expanderrow_extra_def_impl.hpp>)
#include <adw/expanderrow_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<adw/expanderrow_extra_impl.hpp>)
#include <adw/expanderrow_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Adw {

namespace impl {

namespace internal {

void ExpanderRowClassDef::class_init (gpointer class_struct, gpointer factory)
{
  ::AdwExpanderRowClass *methods = (::AdwExpanderRowClass *) class_struct;
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
