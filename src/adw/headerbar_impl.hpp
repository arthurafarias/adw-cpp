// AUTO-GENERATED

#ifndef _GI_ADW_HEADERBAR_IMPL_HPP_
#define _GI_ADW_HEADERBAR_IMPL_HPP_

namespace gi {

namespace repository {

namespace Adw {

namespace base {

// GtkWidget* /*none*/ adw_header_bar_new ();
// ::AdwHeaderBar* /*none*/ adw_header_bar_new ();
Adw::HeaderBar base::HeaderBarBase::new_ () noexcept
{
  typedef ::AdwHeaderBar* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) adw_header_bar_new;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// AdwCenteringPolicy adw_header_bar_get_centering_policy (AdwHeaderBar* self /*none*/);
// ::AdwCenteringPolicy adw_header_bar_get_centering_policy (::AdwHeaderBar* self /*none*/);
Adw::CenteringPolicy base::HeaderBarBase::get_centering_policy () noexcept
{
  typedef ::AdwCenteringPolicy (*call_wrap_t) (::AdwHeaderBar* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_header_bar_get_centering_policy;
  auto _temp_ret = call_wrap_v ((::AdwHeaderBar*) (gobj_()));
  return gi::wrap (_temp_ret);
}

// const char* /*none,nullable*/ adw_header_bar_get_decoration_layout (AdwHeaderBar* self /*none*/);
// const char* /*none,nullable*/ adw_header_bar_get_decoration_layout (::AdwHeaderBar* self /*none*/);
gi::cstring_v base::HeaderBarBase::get_decoration_layout () noexcept
{
  typedef const char* (*call_wrap_t) (::AdwHeaderBar* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_header_bar_get_decoration_layout;
  auto _temp_ret = call_wrap_v ((::AdwHeaderBar*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// gboolean adw_header_bar_get_show_back_button (AdwHeaderBar* self /*none*/);
// gboolean adw_header_bar_get_show_back_button (::AdwHeaderBar* self /*none*/);
bool base::HeaderBarBase::get_show_back_button () noexcept
{
  typedef gboolean (*call_wrap_t) (::AdwHeaderBar* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_header_bar_get_show_back_button;
  auto _temp_ret = call_wrap_v ((::AdwHeaderBar*) (gobj_()));
  return _temp_ret;
}

// gboolean adw_header_bar_get_show_end_title_buttons (AdwHeaderBar* self /*none*/);
// gboolean adw_header_bar_get_show_end_title_buttons (::AdwHeaderBar* self /*none*/);
bool base::HeaderBarBase::get_show_end_title_buttons () noexcept
{
  typedef gboolean (*call_wrap_t) (::AdwHeaderBar* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_header_bar_get_show_end_title_buttons;
  auto _temp_ret = call_wrap_v ((::AdwHeaderBar*) (gobj_()));
  return _temp_ret;
}

// gboolean adw_header_bar_get_show_start_title_buttons (AdwHeaderBar* self /*none*/);
// gboolean adw_header_bar_get_show_start_title_buttons (::AdwHeaderBar* self /*none*/);
bool base::HeaderBarBase::get_show_start_title_buttons () noexcept
{
  typedef gboolean (*call_wrap_t) (::AdwHeaderBar* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_header_bar_get_show_start_title_buttons;
  auto _temp_ret = call_wrap_v ((::AdwHeaderBar*) (gobj_()));
  return _temp_ret;
}

// gboolean adw_header_bar_get_show_title (AdwHeaderBar* self /*none*/);
// gboolean adw_header_bar_get_show_title (::AdwHeaderBar* self /*none*/);
bool base::HeaderBarBase::get_show_title () noexcept
{
  typedef gboolean (*call_wrap_t) (::AdwHeaderBar* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_header_bar_get_show_title;
  auto _temp_ret = call_wrap_v ((::AdwHeaderBar*) (gobj_()));
  return _temp_ret;
}

// GtkWidget* /*none,nullable*/ adw_header_bar_get_title_widget (AdwHeaderBar* self /*none*/);
// ::GtkWidget* /*none,nullable*/ adw_header_bar_get_title_widget (::AdwHeaderBar* self /*none*/);
Gtk::Widget base::HeaderBarBase::get_title_widget () noexcept
{
  typedef ::GtkWidget* (*call_wrap_t) (::AdwHeaderBar* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_header_bar_get_title_widget;
  auto _temp_ret = call_wrap_v ((::AdwHeaderBar*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// void adw_header_bar_pack_end (AdwHeaderBar* self /*none*/, GtkWidget* child /*none*/);
// void adw_header_bar_pack_end (::AdwHeaderBar* self /*none*/, ::GtkWidget* child /*none*/);
void base::HeaderBarBase::pack_end (Gtk::Widget child) noexcept
{
  typedef void (*call_wrap_t) (::AdwHeaderBar* self, ::GtkWidget* child);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_header_bar_pack_end;
  auto child_to_c = gi::unwrap (child, gi::transfer_none);
  call_wrap_v ((::AdwHeaderBar*) (gobj_()), (::GtkWidget*) (child_to_c));
}

// void adw_header_bar_pack_start (AdwHeaderBar* self /*none*/, GtkWidget* child /*none*/);
// void adw_header_bar_pack_start (::AdwHeaderBar* self /*none*/, ::GtkWidget* child /*none*/);
void base::HeaderBarBase::pack_start (Gtk::Widget child) noexcept
{
  typedef void (*call_wrap_t) (::AdwHeaderBar* self, ::GtkWidget* child);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_header_bar_pack_start;
  auto child_to_c = gi::unwrap (child, gi::transfer_none);
  call_wrap_v ((::AdwHeaderBar*) (gobj_()), (::GtkWidget*) (child_to_c));
}

// void adw_header_bar_remove (AdwHeaderBar* self /*none*/, GtkWidget* child /*none*/);
// void adw_header_bar_remove (::AdwHeaderBar* self /*none*/, ::GtkWidget* child /*none*/);
void base::HeaderBarBase::remove (Gtk::Widget child) noexcept
{
  typedef void (*call_wrap_t) (::AdwHeaderBar* self, ::GtkWidget* child);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_header_bar_remove;
  auto child_to_c = gi::unwrap (child, gi::transfer_none);
  call_wrap_v ((::AdwHeaderBar*) (gobj_()), (::GtkWidget*) (child_to_c));
}

// void adw_header_bar_set_centering_policy (AdwHeaderBar* self /*none*/, AdwCenteringPolicy centering_policy);
// void adw_header_bar_set_centering_policy (::AdwHeaderBar* self /*none*/, ::AdwCenteringPolicy centering_policy);
void base::HeaderBarBase::set_centering_policy (Adw::CenteringPolicy centering_policy) noexcept
{
  typedef void (*call_wrap_t) (::AdwHeaderBar* self, ::AdwCenteringPolicy centering_policy);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_header_bar_set_centering_policy;
  auto centering_policy_to_c = gi::unwrap (centering_policy);
  call_wrap_v ((::AdwHeaderBar*) (gobj_()), (::AdwCenteringPolicy) (centering_policy_to_c));
}

// void adw_header_bar_set_decoration_layout (AdwHeaderBar* self /*none*/, const char* layout /*none,nullable*/);
// void adw_header_bar_set_decoration_layout (::AdwHeaderBar* self /*none*/, const char* layout /*none,nullable*/);
void base::HeaderBarBase::set_decoration_layout (const gi::cstring_v layout) noexcept
{
  typedef void (*call_wrap_t) (::AdwHeaderBar* self, const char* layout);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_header_bar_set_decoration_layout;
  auto layout_to_c = gi::unwrap (layout, gi::transfer_none);
  call_wrap_v ((::AdwHeaderBar*) (gobj_()), (const char*) (layout_to_c));
}
void base::HeaderBarBase::set_decoration_layout () noexcept
{
  typedef void (*call_wrap_t) (::AdwHeaderBar* self, const char* layout);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_header_bar_set_decoration_layout;
  auto layout_to_c = nullptr;
  call_wrap_v ((::AdwHeaderBar*) (gobj_()), (const char*) (layout_to_c));
}

// void adw_header_bar_set_show_back_button (AdwHeaderBar* self /*none*/, gboolean show_back_button);
// void adw_header_bar_set_show_back_button (::AdwHeaderBar* self /*none*/, gboolean show_back_button);
void base::HeaderBarBase::set_show_back_button (gboolean show_back_button) noexcept
{
  typedef void (*call_wrap_t) (::AdwHeaderBar* self, gboolean show_back_button);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_header_bar_set_show_back_button;
  auto show_back_button_to_c = show_back_button;
  call_wrap_v ((::AdwHeaderBar*) (gobj_()), (gboolean) (show_back_button_to_c));
}

// void adw_header_bar_set_show_end_title_buttons (AdwHeaderBar* self /*none*/, gboolean setting);
// void adw_header_bar_set_show_end_title_buttons (::AdwHeaderBar* self /*none*/, gboolean setting);
void base::HeaderBarBase::set_show_end_title_buttons (gboolean setting) noexcept
{
  typedef void (*call_wrap_t) (::AdwHeaderBar* self, gboolean setting);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_header_bar_set_show_end_title_buttons;
  auto setting_to_c = setting;
  call_wrap_v ((::AdwHeaderBar*) (gobj_()), (gboolean) (setting_to_c));
}

// void adw_header_bar_set_show_start_title_buttons (AdwHeaderBar* self /*none*/, gboolean setting);
// void adw_header_bar_set_show_start_title_buttons (::AdwHeaderBar* self /*none*/, gboolean setting);
void base::HeaderBarBase::set_show_start_title_buttons (gboolean setting) noexcept
{
  typedef void (*call_wrap_t) (::AdwHeaderBar* self, gboolean setting);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_header_bar_set_show_start_title_buttons;
  auto setting_to_c = setting;
  call_wrap_v ((::AdwHeaderBar*) (gobj_()), (gboolean) (setting_to_c));
}

// void adw_header_bar_set_show_title (AdwHeaderBar* self /*none*/, gboolean show_title);
// void adw_header_bar_set_show_title (::AdwHeaderBar* self /*none*/, gboolean show_title);
void base::HeaderBarBase::set_show_title (gboolean show_title) noexcept
{
  typedef void (*call_wrap_t) (::AdwHeaderBar* self, gboolean show_title);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_header_bar_set_show_title;
  auto show_title_to_c = show_title;
  call_wrap_v ((::AdwHeaderBar*) (gobj_()), (gboolean) (show_title_to_c));
}

// void adw_header_bar_set_title_widget (AdwHeaderBar* self /*none*/, GtkWidget* title_widget /*none,nullable*/);
// void adw_header_bar_set_title_widget (::AdwHeaderBar* self /*none*/, ::GtkWidget* title_widget /*none,nullable*/);
void base::HeaderBarBase::set_title_widget (Gtk::Widget title_widget) noexcept
{
  typedef void (*call_wrap_t) (::AdwHeaderBar* self, ::GtkWidget* title_widget);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_header_bar_set_title_widget;
  auto title_widget_to_c = gi::unwrap (title_widget, gi::transfer_none);
  call_wrap_v ((::AdwHeaderBar*) (gobj_()), (::GtkWidget*) (title_widget_to_c));
}
void base::HeaderBarBase::set_title_widget () noexcept
{
  typedef void (*call_wrap_t) (::AdwHeaderBar* self, ::GtkWidget* title_widget);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_header_bar_set_title_widget;
  auto title_widget_to_c = nullptr;
  call_wrap_v ((::AdwHeaderBar*) (gobj_()), (::GtkWidget*) (title_widget_to_c));
}


} // namespace base

} // namespace Adw

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<adw/headerbar_extra_def_impl.hpp>)
#include <adw/headerbar_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<adw/headerbar_extra_impl.hpp>)
#include <adw/headerbar_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Adw {

namespace impl {

namespace internal {

void HeaderBarClassDef::class_init (gpointer class_struct, gpointer factory)
{
  ::AdwHeaderBarClass *methods = (::AdwHeaderBarClass *) class_struct;
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
