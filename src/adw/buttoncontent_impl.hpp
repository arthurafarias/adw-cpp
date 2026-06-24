// AUTO-GENERATED

#ifndef _GI_ADW_BUTTONCONTENT_IMPL_HPP_
#define _GI_ADW_BUTTONCONTENT_IMPL_HPP_

namespace gi {

namespace repository {

namespace Adw {

namespace base {

// GtkWidget* /*none*/ adw_button_content_new ();
// ::AdwButtonContent* /*none*/ adw_button_content_new ();
Adw::ButtonContent base::ButtonContentBase::new_ () noexcept
{
  typedef ::AdwButtonContent* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) adw_button_content_new;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// gboolean adw_button_content_get_can_shrink (AdwButtonContent* self /*none*/);
// gboolean adw_button_content_get_can_shrink (::AdwButtonContent* self /*none*/);
bool base::ButtonContentBase::get_can_shrink () noexcept
{
  typedef gboolean (*call_wrap_t) (::AdwButtonContent* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_button_content_get_can_shrink;
  auto _temp_ret = call_wrap_v ((::AdwButtonContent*) (gobj_()));
  return _temp_ret;
}

// const char* /*none*/ adw_button_content_get_icon_name (AdwButtonContent* self /*none*/);
// const char* /*none*/ adw_button_content_get_icon_name (::AdwButtonContent* self /*none*/);
gi::cstring_v base::ButtonContentBase::get_icon_name () noexcept
{
  typedef const char* (*call_wrap_t) (::AdwButtonContent* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_button_content_get_icon_name;
  auto _temp_ret = call_wrap_v ((::AdwButtonContent*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// const char* /*none*/ adw_button_content_get_label (AdwButtonContent* self /*none*/);
// const char* /*none*/ adw_button_content_get_label (::AdwButtonContent* self /*none*/);
gi::cstring_v base::ButtonContentBase::get_label () noexcept
{
  typedef const char* (*call_wrap_t) (::AdwButtonContent* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_button_content_get_label;
  auto _temp_ret = call_wrap_v ((::AdwButtonContent*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// gboolean adw_button_content_get_use_underline (AdwButtonContent* self /*none*/);
// gboolean adw_button_content_get_use_underline (::AdwButtonContent* self /*none*/);
bool base::ButtonContentBase::get_use_underline () noexcept
{
  typedef gboolean (*call_wrap_t) (::AdwButtonContent* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_button_content_get_use_underline;
  auto _temp_ret = call_wrap_v ((::AdwButtonContent*) (gobj_()));
  return _temp_ret;
}

// void adw_button_content_set_can_shrink (AdwButtonContent* self /*none*/, gboolean can_shrink);
// void adw_button_content_set_can_shrink (::AdwButtonContent* self /*none*/, gboolean can_shrink);
void base::ButtonContentBase::set_can_shrink (gboolean can_shrink) noexcept
{
  typedef void (*call_wrap_t) (::AdwButtonContent* self, gboolean can_shrink);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_button_content_set_can_shrink;
  auto can_shrink_to_c = can_shrink;
  call_wrap_v ((::AdwButtonContent*) (gobj_()), (gboolean) (can_shrink_to_c));
}

// void adw_button_content_set_icon_name (AdwButtonContent* self /*none*/, const char* icon_name /*none*/);
// void adw_button_content_set_icon_name (::AdwButtonContent* self /*none*/, const char* icon_name /*none*/);
void base::ButtonContentBase::set_icon_name (const gi::cstring_v icon_name) noexcept
{
  typedef void (*call_wrap_t) (::AdwButtonContent* self, const char* icon_name);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_button_content_set_icon_name;
  auto icon_name_to_c = gi::unwrap (icon_name, gi::transfer_none);
  call_wrap_v ((::AdwButtonContent*) (gobj_()), (const char*) (icon_name_to_c));
}

// void adw_button_content_set_label (AdwButtonContent* self /*none*/, const char* label /*none*/);
// void adw_button_content_set_label (::AdwButtonContent* self /*none*/, const char* label /*none*/);
void base::ButtonContentBase::set_label (const gi::cstring_v label) noexcept
{
  typedef void (*call_wrap_t) (::AdwButtonContent* self, const char* label);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_button_content_set_label;
  auto label_to_c = gi::unwrap (label, gi::transfer_none);
  call_wrap_v ((::AdwButtonContent*) (gobj_()), (const char*) (label_to_c));
}

// void adw_button_content_set_use_underline (AdwButtonContent* self /*none*/, gboolean use_underline);
// void adw_button_content_set_use_underline (::AdwButtonContent* self /*none*/, gboolean use_underline);
void base::ButtonContentBase::set_use_underline (gboolean use_underline) noexcept
{
  typedef void (*call_wrap_t) (::AdwButtonContent* self, gboolean use_underline);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_button_content_set_use_underline;
  auto use_underline_to_c = use_underline;
  call_wrap_v ((::AdwButtonContent*) (gobj_()), (gboolean) (use_underline_to_c));
}


} // namespace base

} // namespace Adw

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<adw/buttoncontent_extra_def_impl.hpp>)
#include <adw/buttoncontent_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<adw/buttoncontent_extra_impl.hpp>)
#include <adw/buttoncontent_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Adw {

namespace impl {

namespace internal {

void ButtonContentClassDef::class_init (gpointer class_struct, gpointer factory)
{
  ::AdwButtonContentClass *methods = (::AdwButtonContentClass *) class_struct;
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
