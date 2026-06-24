// AUTO-GENERATED

#ifndef _GI_ADW_APPLICATION_IMPL_HPP_
#define _GI_ADW_APPLICATION_IMPL_HPP_

namespace gi {

namespace repository {

namespace Adw {

namespace base {

// AdwApplication* /*full*/ adw_application_new (const char* application_id /*none,nullable*/, GApplicationFlags flags);
// ::AdwApplication* /*full*/ adw_application_new (const char* application_id /*none,nullable*/, ::GApplicationFlags flags);
Adw::Application base::ApplicationBase::new_ (const gi::cstring_v application_id, Gio::ApplicationFlags flags) noexcept
{
  typedef ::AdwApplication* (*call_wrap_t) (const char* application_id, ::GApplicationFlags flags);
  call_wrap_t call_wrap_v = (call_wrap_t) adw_application_new;
  auto flags_to_c = gi::unwrap (flags);
  auto application_id_to_c = gi::unwrap (application_id, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const char*) (application_id_to_c), (::GApplicationFlags) (flags_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}
Adw::Application base::ApplicationBase::new_ (Gio::ApplicationFlags flags) noexcept
{
  typedef ::AdwApplication* (*call_wrap_t) (const char* application_id, ::GApplicationFlags flags);
  call_wrap_t call_wrap_v = (call_wrap_t) adw_application_new;
  auto flags_to_c = gi::unwrap (flags);
  auto application_id_to_c = nullptr;
  auto _temp_ret = call_wrap_v ((const char*) (application_id_to_c), (::GApplicationFlags) (flags_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// AdwStyleManager* /*none*/ adw_application_get_style_manager (AdwApplication* self /*none*/);
// ::AdwStyleManager* /*none*/ adw_application_get_style_manager (::AdwApplication* self /*none*/);
Adw::StyleManager base::ApplicationBase::get_style_manager () noexcept
{
  typedef ::AdwStyleManager* (*call_wrap_t) (::AdwApplication* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_application_get_style_manager;
  auto _temp_ret = call_wrap_v ((::AdwApplication*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}


} // namespace base

} // namespace Adw

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<adw/application_extra_def_impl.hpp>)
#include <adw/application_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<adw/application_extra_impl.hpp>)
#include <adw/application_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Adw {

namespace impl {

namespace internal {

void ApplicationClassDef::class_init (gpointer class_struct, gpointer factory)
{
  ::AdwApplicationClass *methods = (::AdwApplicationClass *) class_struct;
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
