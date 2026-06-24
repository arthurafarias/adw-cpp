// AUTO-GENERATED

#ifndef _GI_ADW_SHORTCUTLABEL_IMPL_HPP_
#define _GI_ADW_SHORTCUTLABEL_IMPL_HPP_

namespace gi {

namespace repository {

namespace Adw {

namespace base {

// GtkWidget* /*none*/ adw_shortcut_label_new (const char* accelerator /*none*/);
// ::AdwShortcutLabel* /*none*/ adw_shortcut_label_new (const char* accelerator /*none*/);
Adw::ShortcutLabel base::ShortcutLabelBase::new_ (const gi::cstring_v accelerator) noexcept
{
  typedef ::AdwShortcutLabel* (*call_wrap_t) (const char* accelerator);
  call_wrap_t call_wrap_v = (call_wrap_t) adw_shortcut_label_new;
  auto accelerator_to_c = gi::unwrap (accelerator, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const char*) (accelerator_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// const char* /*none*/ adw_shortcut_label_get_accelerator (AdwShortcutLabel* self /*none*/);
// const char* /*none*/ adw_shortcut_label_get_accelerator (::AdwShortcutLabel* self /*none*/);
gi::cstring_v base::ShortcutLabelBase::get_accelerator () noexcept
{
  typedef const char* (*call_wrap_t) (::AdwShortcutLabel* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_shortcut_label_get_accelerator;
  auto _temp_ret = call_wrap_v ((::AdwShortcutLabel*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// const char* /*none*/ adw_shortcut_label_get_disabled_text (AdwShortcutLabel* self /*none*/);
// const char* /*none*/ adw_shortcut_label_get_disabled_text (::AdwShortcutLabel* self /*none*/);
gi::cstring_v base::ShortcutLabelBase::get_disabled_text () noexcept
{
  typedef const char* (*call_wrap_t) (::AdwShortcutLabel* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_shortcut_label_get_disabled_text;
  auto _temp_ret = call_wrap_v ((::AdwShortcutLabel*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// void adw_shortcut_label_set_accelerator (AdwShortcutLabel* self /*none*/, const char* accelerator /*none*/);
// void adw_shortcut_label_set_accelerator (::AdwShortcutLabel* self /*none*/, const char* accelerator /*none*/);
void base::ShortcutLabelBase::set_accelerator (const gi::cstring_v accelerator) noexcept
{
  typedef void (*call_wrap_t) (::AdwShortcutLabel* self, const char* accelerator);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_shortcut_label_set_accelerator;
  auto accelerator_to_c = gi::unwrap (accelerator, gi::transfer_none);
  call_wrap_v ((::AdwShortcutLabel*) (gobj_()), (const char*) (accelerator_to_c));
}

// void adw_shortcut_label_set_disabled_text (AdwShortcutLabel* self /*none*/, const char* disabled_text /*none*/);
// void adw_shortcut_label_set_disabled_text (::AdwShortcutLabel* self /*none*/, const char* disabled_text /*none*/);
void base::ShortcutLabelBase::set_disabled_text (const gi::cstring_v disabled_text) noexcept
{
  typedef void (*call_wrap_t) (::AdwShortcutLabel* self, const char* disabled_text);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_shortcut_label_set_disabled_text;
  auto disabled_text_to_c = gi::unwrap (disabled_text, gi::transfer_none);
  call_wrap_v ((::AdwShortcutLabel*) (gobj_()), (const char*) (disabled_text_to_c));
}


} // namespace base

} // namespace Adw

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<adw/shortcutlabel_extra_def_impl.hpp>)
#include <adw/shortcutlabel_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<adw/shortcutlabel_extra_impl.hpp>)
#include <adw/shortcutlabel_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Adw {

namespace impl {

namespace internal {

void ShortcutLabelClassDef::class_init (gpointer class_struct, gpointer factory)
{
  ::AdwShortcutLabelClass *methods = (::AdwShortcutLabelClass *) class_struct;
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
