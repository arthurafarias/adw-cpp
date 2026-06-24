// AUTO-GENERATED

#ifndef _GI_ADW_SPINNER_IMPL_HPP_
#define _GI_ADW_SPINNER_IMPL_HPP_

namespace gi {

namespace repository {

namespace Adw {

namespace base {

// GtkWidget* /*none*/ adw_spinner_new ();
// ::AdwSpinner* /*none*/ adw_spinner_new ();
Adw::Spinner base::SpinnerBase::new_ () noexcept
{
  typedef ::AdwSpinner* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) adw_spinner_new;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_none);
}


} // namespace base

} // namespace Adw

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<adw/spinner_extra_def_impl.hpp>)
#include <adw/spinner_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<adw/spinner_extra_impl.hpp>)
#include <adw/spinner_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Adw {

namespace impl {

namespace internal {

void SpinnerClassDef::class_init (gpointer class_struct, gpointer factory)
{
  ::AdwSpinnerClass *methods = (::AdwSpinnerClass *) class_struct;
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
