// AUTO-GENERATED

#ifndef _GI_ADW_TOGGLE_IMPL_HPP_
#define _GI_ADW_TOGGLE_IMPL_HPP_

namespace gi {

namespace repository {

namespace Adw {

namespace base {

// AdwToggle* /*full*/ adw_toggle_new ();
// ::AdwToggle* /*full*/ adw_toggle_new ();
Adw::Toggle base::ToggleBase::new_ () noexcept
{
  typedef ::AdwToggle* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) adw_toggle_new;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// GtkWidget* /*none,nullable*/ adw_toggle_get_child (AdwToggle* self /*none*/);
// ::GtkWidget* /*none,nullable*/ adw_toggle_get_child (::AdwToggle* self /*none*/);
Gtk::Widget base::ToggleBase::get_child () noexcept
{
  typedef ::GtkWidget* (*call_wrap_t) (::AdwToggle* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_toggle_get_child;
  auto _temp_ret = call_wrap_v ((::AdwToggle*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// const char* /*none*/ adw_toggle_get_description (AdwToggle* self /*none*/);
// const char* /*none*/ adw_toggle_get_description (::AdwToggle* self /*none*/);
gi::cstring_v base::ToggleBase::get_description () noexcept
{
  typedef const char* (*call_wrap_t) (::AdwToggle* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_toggle_get_description;
  auto _temp_ret = call_wrap_v ((::AdwToggle*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// gboolean adw_toggle_get_enabled (AdwToggle* self /*none*/);
// gboolean adw_toggle_get_enabled (::AdwToggle* self /*none*/);
bool base::ToggleBase::get_enabled () noexcept
{
  typedef gboolean (*call_wrap_t) (::AdwToggle* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_toggle_get_enabled;
  auto _temp_ret = call_wrap_v ((::AdwToggle*) (gobj_()));
  return _temp_ret;
}

// const char* /*none,nullable*/ adw_toggle_get_icon_name (AdwToggle* self /*none*/);
// const char* /*none,nullable*/ adw_toggle_get_icon_name (::AdwToggle* self /*none*/);
gi::cstring_v base::ToggleBase::get_icon_name () noexcept
{
  typedef const char* (*call_wrap_t) (::AdwToggle* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_toggle_get_icon_name;
  auto _temp_ret = call_wrap_v ((::AdwToggle*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// guint adw_toggle_get_index (AdwToggle* self /*none*/);
// guint adw_toggle_get_index (::AdwToggle* self /*none*/);
guint base::ToggleBase::get_index () noexcept
{
  typedef guint (*call_wrap_t) (::AdwToggle* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_toggle_get_index;
  auto _temp_ret = call_wrap_v ((::AdwToggle*) (gobj_()));
  return _temp_ret;
}

// const char* /*none,nullable*/ adw_toggle_get_label (AdwToggle* self /*none*/);
// const char* /*none,nullable*/ adw_toggle_get_label (::AdwToggle* self /*none*/);
gi::cstring_v base::ToggleBase::get_label () noexcept
{
  typedef const char* (*call_wrap_t) (::AdwToggle* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_toggle_get_label;
  auto _temp_ret = call_wrap_v ((::AdwToggle*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// const char* /*none*/ adw_toggle_get_name (AdwToggle* self /*none*/);
// const char* /*none*/ adw_toggle_get_name (::AdwToggle* self /*none*/);
gi::cstring_v base::ToggleBase::get_name () noexcept
{
  typedef const char* (*call_wrap_t) (::AdwToggle* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_toggle_get_name;
  auto _temp_ret = call_wrap_v ((::AdwToggle*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// const char* /*none*/ adw_toggle_get_tooltip (AdwToggle* self /*none*/);
// const char* /*none*/ adw_toggle_get_tooltip (::AdwToggle* self /*none*/);
gi::cstring_v base::ToggleBase::get_tooltip () noexcept
{
  typedef const char* (*call_wrap_t) (::AdwToggle* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_toggle_get_tooltip;
  auto _temp_ret = call_wrap_v ((::AdwToggle*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// gboolean adw_toggle_get_use_underline (AdwToggle* self /*none*/);
// gboolean adw_toggle_get_use_underline (::AdwToggle* self /*none*/);
bool base::ToggleBase::get_use_underline () noexcept
{
  typedef gboolean (*call_wrap_t) (::AdwToggle* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_toggle_get_use_underline;
  auto _temp_ret = call_wrap_v ((::AdwToggle*) (gobj_()));
  return _temp_ret;
}

// void adw_toggle_set_child (AdwToggle* self /*none*/, GtkWidget* child /*none,nullable*/);
// void adw_toggle_set_child (::AdwToggle* self /*none*/, ::GtkWidget* child /*none,nullable*/);
void base::ToggleBase::set_child (Gtk::Widget child) noexcept
{
  typedef void (*call_wrap_t) (::AdwToggle* self, ::GtkWidget* child);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_toggle_set_child;
  auto child_to_c = gi::unwrap (child, gi::transfer_none);
  call_wrap_v ((::AdwToggle*) (gobj_()), (::GtkWidget*) (child_to_c));
}
void base::ToggleBase::set_child () noexcept
{
  typedef void (*call_wrap_t) (::AdwToggle* self, ::GtkWidget* child);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_toggle_set_child;
  auto child_to_c = nullptr;
  call_wrap_v ((::AdwToggle*) (gobj_()), (::GtkWidget*) (child_to_c));
}

// void adw_toggle_set_description (AdwToggle* self /*none*/, const char* description /*none*/);
// void adw_toggle_set_description (::AdwToggle* self /*none*/, const char* description /*none*/);
void base::ToggleBase::set_description (const gi::cstring_v description) noexcept
{
  typedef void (*call_wrap_t) (::AdwToggle* self, const char* description);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_toggle_set_description;
  auto description_to_c = gi::unwrap (description, gi::transfer_none);
  call_wrap_v ((::AdwToggle*) (gobj_()), (const char*) (description_to_c));
}

// void adw_toggle_set_enabled (AdwToggle* self /*none*/, gboolean enabled);
// void adw_toggle_set_enabled (::AdwToggle* self /*none*/, gboolean enabled);
void base::ToggleBase::set_enabled (gboolean enabled) noexcept
{
  typedef void (*call_wrap_t) (::AdwToggle* self, gboolean enabled);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_toggle_set_enabled;
  auto enabled_to_c = enabled;
  call_wrap_v ((::AdwToggle*) (gobj_()), (gboolean) (enabled_to_c));
}

// void adw_toggle_set_icon_name (AdwToggle* self /*none*/, const char* icon_name /*none,nullable*/);
// void adw_toggle_set_icon_name (::AdwToggle* self /*none*/, const char* icon_name /*none,nullable*/);
void base::ToggleBase::set_icon_name (const gi::cstring_v icon_name) noexcept
{
  typedef void (*call_wrap_t) (::AdwToggle* self, const char* icon_name);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_toggle_set_icon_name;
  auto icon_name_to_c = gi::unwrap (icon_name, gi::transfer_none);
  call_wrap_v ((::AdwToggle*) (gobj_()), (const char*) (icon_name_to_c));
}
void base::ToggleBase::set_icon_name () noexcept
{
  typedef void (*call_wrap_t) (::AdwToggle* self, const char* icon_name);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_toggle_set_icon_name;
  auto icon_name_to_c = nullptr;
  call_wrap_v ((::AdwToggle*) (gobj_()), (const char*) (icon_name_to_c));
}

// void adw_toggle_set_label (AdwToggle* self /*none*/, const char* label /*none,nullable*/);
// void adw_toggle_set_label (::AdwToggle* self /*none*/, const char* label /*none,nullable*/);
void base::ToggleBase::set_label (const gi::cstring_v label) noexcept
{
  typedef void (*call_wrap_t) (::AdwToggle* self, const char* label);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_toggle_set_label;
  auto label_to_c = gi::unwrap (label, gi::transfer_none);
  call_wrap_v ((::AdwToggle*) (gobj_()), (const char*) (label_to_c));
}
void base::ToggleBase::set_label () noexcept
{
  typedef void (*call_wrap_t) (::AdwToggle* self, const char* label);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_toggle_set_label;
  auto label_to_c = nullptr;
  call_wrap_v ((::AdwToggle*) (gobj_()), (const char*) (label_to_c));
}

// void adw_toggle_set_name (AdwToggle* self /*none*/, const char* name /*none,nullable*/);
// void adw_toggle_set_name (::AdwToggle* self /*none*/, const char* name /*none,nullable*/);
void base::ToggleBase::set_name (const gi::cstring_v name) noexcept
{
  typedef void (*call_wrap_t) (::AdwToggle* self, const char* name);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_toggle_set_name;
  auto name_to_c = gi::unwrap (name, gi::transfer_none);
  call_wrap_v ((::AdwToggle*) (gobj_()), (const char*) (name_to_c));
}
void base::ToggleBase::set_name () noexcept
{
  typedef void (*call_wrap_t) (::AdwToggle* self, const char* name);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_toggle_set_name;
  auto name_to_c = nullptr;
  call_wrap_v ((::AdwToggle*) (gobj_()), (const char*) (name_to_c));
}

// void adw_toggle_set_tooltip (AdwToggle* self /*none*/, const char* tooltip /*none*/);
// void adw_toggle_set_tooltip (::AdwToggle* self /*none*/, const char* tooltip /*none*/);
void base::ToggleBase::set_tooltip (const gi::cstring_v tooltip) noexcept
{
  typedef void (*call_wrap_t) (::AdwToggle* self, const char* tooltip);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_toggle_set_tooltip;
  auto tooltip_to_c = gi::unwrap (tooltip, gi::transfer_none);
  call_wrap_v ((::AdwToggle*) (gobj_()), (const char*) (tooltip_to_c));
}

// void adw_toggle_set_use_underline (AdwToggle* self /*none*/, gboolean use_underline);
// void adw_toggle_set_use_underline (::AdwToggle* self /*none*/, gboolean use_underline);
void base::ToggleBase::set_use_underline (gboolean use_underline) noexcept
{
  typedef void (*call_wrap_t) (::AdwToggle* self, gboolean use_underline);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_toggle_set_use_underline;
  auto use_underline_to_c = use_underline;
  call_wrap_v ((::AdwToggle*) (gobj_()), (gboolean) (use_underline_to_c));
}


} // namespace base

} // namespace Adw

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<adw/toggle_extra_def_impl.hpp>)
#include <adw/toggle_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<adw/toggle_extra_impl.hpp>)
#include <adw/toggle_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Adw {

namespace impl {

namespace internal {

void ToggleClassDef::class_init (gpointer class_struct, gpointer factory)
{
  ::AdwToggleClass *methods = (::AdwToggleClass *) class_struct;
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
