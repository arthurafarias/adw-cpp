// AUTO-GENERATED

#ifndef _GI_ADW_ACTIONROW_IMPL_HPP_
#define _GI_ADW_ACTIONROW_IMPL_HPP_

namespace gi {

namespace repository {

namespace Adw {

namespace base {

// GtkWidget* /*none*/ adw_action_row_new ();
// ::AdwActionRow* /*none*/ adw_action_row_new ();
Adw::ActionRow base::ActionRowBase::new_ () noexcept
{
  typedef ::AdwActionRow* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) adw_action_row_new;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// void adw_action_row_activate (AdwActionRow* self /*none*/);
// void adw_action_row_activate (::AdwActionRow* self /*none*/);
void base::ActionRowBase::activate () noexcept
{
  typedef void (*call_wrap_t) (::AdwActionRow* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_action_row_activate;
  call_wrap_v ((::AdwActionRow*) (gobj_()));
}

// void adw_action_row_add_prefix (AdwActionRow* self /*none*/, GtkWidget* widget /*none*/);
// void adw_action_row_add_prefix (::AdwActionRow* self /*none*/, ::GtkWidget* widget /*none*/);
void base::ActionRowBase::add_prefix (Gtk::Widget widget) noexcept
{
  typedef void (*call_wrap_t) (::AdwActionRow* self, ::GtkWidget* widget);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_action_row_add_prefix;
  auto widget_to_c = gi::unwrap (widget, gi::transfer_none);
  call_wrap_v ((::AdwActionRow*) (gobj_()), (::GtkWidget*) (widget_to_c));
}

// void adw_action_row_add_suffix (AdwActionRow* self /*none*/, GtkWidget* widget /*none*/);
// void adw_action_row_add_suffix (::AdwActionRow* self /*none*/, ::GtkWidget* widget /*none*/);
void base::ActionRowBase::add_suffix (Gtk::Widget widget) noexcept
{
  typedef void (*call_wrap_t) (::AdwActionRow* self, ::GtkWidget* widget);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_action_row_add_suffix;
  auto widget_to_c = gi::unwrap (widget, gi::transfer_none);
  call_wrap_v ((::AdwActionRow*) (gobj_()), (::GtkWidget*) (widget_to_c));
}

// GtkWidget* /*none,nullable*/ adw_action_row_get_activatable_widget (AdwActionRow* self /*none*/);
// ::GtkWidget* /*none,nullable*/ adw_action_row_get_activatable_widget (::AdwActionRow* self /*none*/);
Gtk::Widget base::ActionRowBase::get_activatable_widget () noexcept
{
  typedef ::GtkWidget* (*call_wrap_t) (::AdwActionRow* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_action_row_get_activatable_widget;
  auto _temp_ret = call_wrap_v ((::AdwActionRow*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// const char* /*none,nullable*/ adw_action_row_get_icon_name (AdwActionRow* self /*none*/);
// const char* /*none,nullable*/ adw_action_row_get_icon_name (::AdwActionRow* self /*none*/);
// IGNORE; deprecated

// const char* /*none,nullable*/ adw_action_row_get_subtitle (AdwActionRow* self /*none*/);
// const char* /*none,nullable*/ adw_action_row_get_subtitle (::AdwActionRow* self /*none*/);
gi::cstring_v base::ActionRowBase::get_subtitle () noexcept
{
  typedef const char* (*call_wrap_t) (::AdwActionRow* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_action_row_get_subtitle;
  auto _temp_ret = call_wrap_v ((::AdwActionRow*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// int adw_action_row_get_subtitle_lines (AdwActionRow* self /*none*/);
// gint adw_action_row_get_subtitle_lines (::AdwActionRow* self /*none*/);
gint base::ActionRowBase::get_subtitle_lines () noexcept
{
  typedef gint (*call_wrap_t) (::AdwActionRow* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_action_row_get_subtitle_lines;
  auto _temp_ret = call_wrap_v ((::AdwActionRow*) (gobj_()));
  return _temp_ret;
}

// gboolean adw_action_row_get_subtitle_selectable (AdwActionRow* self /*none*/);
// gboolean adw_action_row_get_subtitle_selectable (::AdwActionRow* self /*none*/);
bool base::ActionRowBase::get_subtitle_selectable () noexcept
{
  typedef gboolean (*call_wrap_t) (::AdwActionRow* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_action_row_get_subtitle_selectable;
  auto _temp_ret = call_wrap_v ((::AdwActionRow*) (gobj_()));
  return _temp_ret;
}

// int adw_action_row_get_title_lines (AdwActionRow* self /*none*/);
// gint adw_action_row_get_title_lines (::AdwActionRow* self /*none*/);
gint base::ActionRowBase::get_title_lines () noexcept
{
  typedef gint (*call_wrap_t) (::AdwActionRow* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_action_row_get_title_lines;
  auto _temp_ret = call_wrap_v ((::AdwActionRow*) (gobj_()));
  return _temp_ret;
}

// void adw_action_row_remove (AdwActionRow* self /*none*/, GtkWidget* widget /*none*/);
// void adw_action_row_remove (::AdwActionRow* self /*none*/, ::GtkWidget* widget /*none*/);
void base::ActionRowBase::remove (Gtk::Widget widget) noexcept
{
  typedef void (*call_wrap_t) (::AdwActionRow* self, ::GtkWidget* widget);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_action_row_remove;
  auto widget_to_c = gi::unwrap (widget, gi::transfer_none);
  call_wrap_v ((::AdwActionRow*) (gobj_()), (::GtkWidget*) (widget_to_c));
}

// void adw_action_row_set_activatable_widget (AdwActionRow* self /*none*/, GtkWidget* widget /*none,nullable*/);
// void adw_action_row_set_activatable_widget (::AdwActionRow* self /*none*/, ::GtkWidget* widget /*none,nullable*/);
void base::ActionRowBase::set_activatable_widget (Gtk::Widget widget) noexcept
{
  typedef void (*call_wrap_t) (::AdwActionRow* self, ::GtkWidget* widget);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_action_row_set_activatable_widget;
  auto widget_to_c = gi::unwrap (widget, gi::transfer_none);
  call_wrap_v ((::AdwActionRow*) (gobj_()), (::GtkWidget*) (widget_to_c));
}
void base::ActionRowBase::set_activatable_widget () noexcept
{
  typedef void (*call_wrap_t) (::AdwActionRow* self, ::GtkWidget* widget);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_action_row_set_activatable_widget;
  auto widget_to_c = nullptr;
  call_wrap_v ((::AdwActionRow*) (gobj_()), (::GtkWidget*) (widget_to_c));
}

// void adw_action_row_set_icon_name (AdwActionRow* self /*none*/, const char* icon_name /*none,nullable*/);
// void adw_action_row_set_icon_name (::AdwActionRow* self /*none*/, const char* icon_name /*none,nullable*/);
// IGNORE; deprecated

// void adw_action_row_set_subtitle (AdwActionRow* self /*none*/, const char* subtitle /*none*/);
// void adw_action_row_set_subtitle (::AdwActionRow* self /*none*/, const char* subtitle /*none*/);
void base::ActionRowBase::set_subtitle (const gi::cstring_v subtitle) noexcept
{
  typedef void (*call_wrap_t) (::AdwActionRow* self, const char* subtitle);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_action_row_set_subtitle;
  auto subtitle_to_c = gi::unwrap (subtitle, gi::transfer_none);
  call_wrap_v ((::AdwActionRow*) (gobj_()), (const char*) (subtitle_to_c));
}

// void adw_action_row_set_subtitle_lines (AdwActionRow* self /*none*/, int subtitle_lines);
// void adw_action_row_set_subtitle_lines (::AdwActionRow* self /*none*/, gint subtitle_lines);
void base::ActionRowBase::set_subtitle_lines (gint subtitle_lines) noexcept
{
  typedef void (*call_wrap_t) (::AdwActionRow* self, gint subtitle_lines);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_action_row_set_subtitle_lines;
  auto subtitle_lines_to_c = subtitle_lines;
  call_wrap_v ((::AdwActionRow*) (gobj_()), (gint) (subtitle_lines_to_c));
}

// void adw_action_row_set_subtitle_selectable (AdwActionRow* self /*none*/, gboolean subtitle_selectable);
// void adw_action_row_set_subtitle_selectable (::AdwActionRow* self /*none*/, gboolean subtitle_selectable);
void base::ActionRowBase::set_subtitle_selectable (gboolean subtitle_selectable) noexcept
{
  typedef void (*call_wrap_t) (::AdwActionRow* self, gboolean subtitle_selectable);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_action_row_set_subtitle_selectable;
  auto subtitle_selectable_to_c = subtitle_selectable;
  call_wrap_v ((::AdwActionRow*) (gobj_()), (gboolean) (subtitle_selectable_to_c));
}

// void adw_action_row_set_title_lines (AdwActionRow* self /*none*/, int title_lines);
// void adw_action_row_set_title_lines (::AdwActionRow* self /*none*/, gint title_lines);
void base::ActionRowBase::set_title_lines (gint title_lines) noexcept
{
  typedef void (*call_wrap_t) (::AdwActionRow* self, gint title_lines);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_action_row_set_title_lines;
  auto title_lines_to_c = title_lines;
  call_wrap_v ((::AdwActionRow*) (gobj_()), (gint) (title_lines_to_c));
}



} // namespace base

} // namespace Adw

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<adw/actionrow_extra_def_impl.hpp>)
#include <adw/actionrow_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<adw/actionrow_extra_impl.hpp>)
#include <adw/actionrow_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Adw {

namespace impl {

namespace internal {

void ActionRowClassDef::class_init (gpointer class_struct, gpointer factory)
{
  ::AdwActionRowClass *methods = (::AdwActionRowClass *) class_struct;
  (void) methods;

  auto init_data = GI_MEMBER_INIT_DATA(TypeInitData, factory);
  (void) init_data;

  if (init_data.activate) methods->activate = (decltype (methods->activate)) gi::detail::method_wrapper<self, void (*) (), gi::transfer_full_t, std::tuple<>>::wrapper<&self::activate_>;
}

// void ActionRow::activate (AdwActionRow* self /*none*/);
// void ActionRow::activate (::AdwActionRow* self /*none*/);
void ActionRowClass::activate_ () noexcept
{
  if (!get_struct_()->activate) { g_critical ("no method in class struct"); return ; }
  typedef void (*call_wrap_t) (::AdwActionRow* self);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->activate;
  call_wrap_v ((::AdwActionRow*) (gobj_()));
}

} // namespace internal

} // namespace impl

} // namespace Adw

} // namespace repository

} // namespace gi

#endif
