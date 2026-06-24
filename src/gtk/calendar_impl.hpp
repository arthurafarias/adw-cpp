// AUTO-GENERATED

#ifndef _GI_GTK_CALENDAR_IMPL_HPP_
#define _GI_GTK_CALENDAR_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

// GtkWidget* /*none*/ gtk_calendar_new ();
// ::GtkCalendar* /*none*/ gtk_calendar_new ();
Gtk::Calendar base::CalendarBase::new_ () noexcept
{
  typedef ::GtkCalendar* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_calendar_new;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// void gtk_calendar_clear_marks (GtkCalendar* calendar /*none*/);
// void gtk_calendar_clear_marks (::GtkCalendar* calendar /*none*/);
void base::CalendarBase::clear_marks () noexcept
{
  typedef void (*call_wrap_t) (::GtkCalendar* calendar);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_calendar_clear_marks;
  call_wrap_v ((::GtkCalendar*) (gobj_()));
}

// GDateTime* /*full*/ gtk_calendar_get_date (GtkCalendar* self /*none*/);
// ::GDateTime* /*full*/ gtk_calendar_get_date (::GtkCalendar* self /*none*/);
GLib::DateTime base::CalendarBase::get_date () noexcept
{
  typedef ::GDateTime* (*call_wrap_t) (::GtkCalendar* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_calendar_get_date;
  auto _temp_ret = call_wrap_v ((::GtkCalendar*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// int gtk_calendar_get_day (GtkCalendar* self /*none*/);
// gint gtk_calendar_get_day (::GtkCalendar* self /*none*/);
gint base::CalendarBase::get_day () noexcept
{
  typedef gint (*call_wrap_t) (::GtkCalendar* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_calendar_get_day;
  auto _temp_ret = call_wrap_v ((::GtkCalendar*) (gobj_()));
  return _temp_ret;
}

// gboolean gtk_calendar_get_day_is_marked (GtkCalendar* calendar /*none*/, guint day);
// gboolean gtk_calendar_get_day_is_marked (::GtkCalendar* calendar /*none*/, guint day);
bool base::CalendarBase::get_day_is_marked (guint day) noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkCalendar* calendar, guint day);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_calendar_get_day_is_marked;
  auto day_to_c = day;
  auto _temp_ret = call_wrap_v ((::GtkCalendar*) (gobj_()), (guint) (day_to_c));
  return _temp_ret;
}

// int gtk_calendar_get_month (GtkCalendar* self /*none*/);
// gint gtk_calendar_get_month (::GtkCalendar* self /*none*/);
gint base::CalendarBase::get_month () noexcept
{
  typedef gint (*call_wrap_t) (::GtkCalendar* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_calendar_get_month;
  auto _temp_ret = call_wrap_v ((::GtkCalendar*) (gobj_()));
  return _temp_ret;
}

// gboolean gtk_calendar_get_show_day_names (GtkCalendar* self /*none*/);
// gboolean gtk_calendar_get_show_day_names (::GtkCalendar* self /*none*/);
bool base::CalendarBase::get_show_day_names () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkCalendar* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_calendar_get_show_day_names;
  auto _temp_ret = call_wrap_v ((::GtkCalendar*) (gobj_()));
  return _temp_ret;
}

// gboolean gtk_calendar_get_show_heading (GtkCalendar* self /*none*/);
// gboolean gtk_calendar_get_show_heading (::GtkCalendar* self /*none*/);
bool base::CalendarBase::get_show_heading () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkCalendar* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_calendar_get_show_heading;
  auto _temp_ret = call_wrap_v ((::GtkCalendar*) (gobj_()));
  return _temp_ret;
}

// gboolean gtk_calendar_get_show_week_numbers (GtkCalendar* self /*none*/);
// gboolean gtk_calendar_get_show_week_numbers (::GtkCalendar* self /*none*/);
bool base::CalendarBase::get_show_week_numbers () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkCalendar* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_calendar_get_show_week_numbers;
  auto _temp_ret = call_wrap_v ((::GtkCalendar*) (gobj_()));
  return _temp_ret;
}

// int gtk_calendar_get_year (GtkCalendar* self /*none*/);
// gint gtk_calendar_get_year (::GtkCalendar* self /*none*/);
gint base::CalendarBase::get_year () noexcept
{
  typedef gint (*call_wrap_t) (::GtkCalendar* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_calendar_get_year;
  auto _temp_ret = call_wrap_v ((::GtkCalendar*) (gobj_()));
  return _temp_ret;
}

// void gtk_calendar_mark_day (GtkCalendar* calendar /*none*/, guint day);
// void gtk_calendar_mark_day (::GtkCalendar* calendar /*none*/, guint day);
void base::CalendarBase::mark_day (guint day) noexcept
{
  typedef void (*call_wrap_t) (::GtkCalendar* calendar, guint day);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_calendar_mark_day;
  auto day_to_c = day;
  call_wrap_v ((::GtkCalendar*) (gobj_()), (guint) (day_to_c));
}

// void gtk_calendar_select_day (GtkCalendar* self /*none*/, GDateTime* date /*none*/);
// void gtk_calendar_select_day (::GtkCalendar* self /*none*/, ::GDateTime* date /*none*/);
void base::CalendarBase::select_day (GLib::DateTime_Ref date) noexcept
{
  typedef void (*call_wrap_t) (::GtkCalendar* self, ::GDateTime* date);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_calendar_select_day;
  auto date_to_c = gi::unwrap (date, gi::transfer_none);
  call_wrap_v ((::GtkCalendar*) (gobj_()), (::GDateTime*) (date_to_c));
}

// void gtk_calendar_set_date (GtkCalendar* self /*none*/, GDateTime* date /*none*/);
// void gtk_calendar_set_date (::GtkCalendar* self /*none*/, ::GDateTime* date /*none*/);
void base::CalendarBase::set_date (GLib::DateTime_Ref date) noexcept
{
  typedef void (*call_wrap_t) (::GtkCalendar* self, ::GDateTime* date);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_calendar_set_date;
  auto date_to_c = gi::unwrap (date, gi::transfer_none);
  call_wrap_v ((::GtkCalendar*) (gobj_()), (::GDateTime*) (date_to_c));
}

// void gtk_calendar_set_day (GtkCalendar* self /*none*/, int day);
// void gtk_calendar_set_day (::GtkCalendar* self /*none*/, gint day);
void base::CalendarBase::set_day (gint day) noexcept
{
  typedef void (*call_wrap_t) (::GtkCalendar* self, gint day);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_calendar_set_day;
  auto day_to_c = day;
  call_wrap_v ((::GtkCalendar*) (gobj_()), (gint) (day_to_c));
}

// void gtk_calendar_set_month (GtkCalendar* self /*none*/, int month);
// void gtk_calendar_set_month (::GtkCalendar* self /*none*/, gint month);
void base::CalendarBase::set_month (gint month) noexcept
{
  typedef void (*call_wrap_t) (::GtkCalendar* self, gint month);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_calendar_set_month;
  auto month_to_c = month;
  call_wrap_v ((::GtkCalendar*) (gobj_()), (gint) (month_to_c));
}

// void gtk_calendar_set_show_day_names (GtkCalendar* self /*none*/, gboolean value);
// void gtk_calendar_set_show_day_names (::GtkCalendar* self /*none*/, gboolean value);
void base::CalendarBase::set_show_day_names (gboolean value) noexcept
{
  typedef void (*call_wrap_t) (::GtkCalendar* self, gboolean value);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_calendar_set_show_day_names;
  auto value_to_c = value;
  call_wrap_v ((::GtkCalendar*) (gobj_()), (gboolean) (value_to_c));
}

// void gtk_calendar_set_show_heading (GtkCalendar* self /*none*/, gboolean value);
// void gtk_calendar_set_show_heading (::GtkCalendar* self /*none*/, gboolean value);
void base::CalendarBase::set_show_heading (gboolean value) noexcept
{
  typedef void (*call_wrap_t) (::GtkCalendar* self, gboolean value);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_calendar_set_show_heading;
  auto value_to_c = value;
  call_wrap_v ((::GtkCalendar*) (gobj_()), (gboolean) (value_to_c));
}

// void gtk_calendar_set_show_week_numbers (GtkCalendar* self /*none*/, gboolean value);
// void gtk_calendar_set_show_week_numbers (::GtkCalendar* self /*none*/, gboolean value);
void base::CalendarBase::set_show_week_numbers (gboolean value) noexcept
{
  typedef void (*call_wrap_t) (::GtkCalendar* self, gboolean value);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_calendar_set_show_week_numbers;
  auto value_to_c = value;
  call_wrap_v ((::GtkCalendar*) (gobj_()), (gboolean) (value_to_c));
}

// void gtk_calendar_set_year (GtkCalendar* self /*none*/, int year);
// void gtk_calendar_set_year (::GtkCalendar* self /*none*/, gint year);
void base::CalendarBase::set_year (gint year) noexcept
{
  typedef void (*call_wrap_t) (::GtkCalendar* self, gint year);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_calendar_set_year;
  auto year_to_c = year;
  call_wrap_v ((::GtkCalendar*) (gobj_()), (gint) (year_to_c));
}

// void gtk_calendar_unmark_day (GtkCalendar* calendar /*none*/, guint day);
// void gtk_calendar_unmark_day (::GtkCalendar* calendar /*none*/, guint day);
void base::CalendarBase::unmark_day (guint day) noexcept
{
  typedef void (*call_wrap_t) (::GtkCalendar* calendar, guint day);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_calendar_unmark_day;
  auto day_to_c = day;
  call_wrap_v ((::GtkCalendar*) (gobj_()), (guint) (day_to_c));
}







} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/calendar_extra_def_impl.hpp>)
#include <gtk/calendar_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/calendar_extra_impl.hpp>)
#include <gtk/calendar_extra_impl.hpp>
#endif
#endif

#endif
