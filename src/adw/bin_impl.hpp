// AUTO-GENERATED

#ifndef _GI_ADW_BIN_IMPL_HPP_
#define _GI_ADW_BIN_IMPL_HPP_

namespace gi {

namespace repository {

namespace Adw {

namespace base {

// GtkWidget* /*none*/ adw_bin_new ();
// ::AdwBin* /*none*/ adw_bin_new ();
Adw::Bin base::BinBase::new_ () noexcept
{
  typedef ::AdwBin* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) adw_bin_new;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// GtkWidget* /*none,nullable*/ adw_bin_get_child (AdwBin* self /*none*/);
// ::GtkWidget* /*none,nullable*/ adw_bin_get_child (::AdwBin* self /*none*/);
Gtk::Widget base::BinBase::get_child () noexcept
{
  typedef ::GtkWidget* (*call_wrap_t) (::AdwBin* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_bin_get_child;
  auto _temp_ret = call_wrap_v ((::AdwBin*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// void adw_bin_set_child (AdwBin* self /*none*/, GtkWidget* child /*none,nullable*/);
// void adw_bin_set_child (::AdwBin* self /*none*/, ::GtkWidget* child /*none,nullable*/);
void base::BinBase::set_child (Gtk::Widget child) noexcept
{
  typedef void (*call_wrap_t) (::AdwBin* self, ::GtkWidget* child);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_bin_set_child;
  auto child_to_c = gi::unwrap (child, gi::transfer_none);
  call_wrap_v ((::AdwBin*) (gobj_()), (::GtkWidget*) (child_to_c));
}
void base::BinBase::set_child () noexcept
{
  typedef void (*call_wrap_t) (::AdwBin* self, ::GtkWidget* child);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_bin_set_child;
  auto child_to_c = nullptr;
  call_wrap_v ((::AdwBin*) (gobj_()), (::GtkWidget*) (child_to_c));
}


} // namespace base

} // namespace Adw

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<adw/bin_extra_def_impl.hpp>)
#include <adw/bin_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<adw/bin_extra_impl.hpp>)
#include <adw/bin_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Adw {

namespace impl {

namespace internal {

void BinClassDef::class_init (gpointer class_struct, gpointer factory)
{
  ::AdwBinClass *methods = (::AdwBinClass *) class_struct;
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
