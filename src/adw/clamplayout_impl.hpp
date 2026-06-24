// AUTO-GENERATED

#ifndef _GI_ADW_CLAMPLAYOUT_IMPL_HPP_
#define _GI_ADW_CLAMPLAYOUT_IMPL_HPP_

namespace gi {

namespace repository {

namespace Adw {

namespace base {

Gtk::Orientable ClampLayoutBase::interface_ (gi::interface_tag<Gtk::Orientable>)
{ return gi::wrap ((Gtk::Orientable::BaseObjectType*) gobj_copy_(), gi::transfer_full); }

ClampLayoutBase::operator Gtk::Orientable ()
{ return interface_ (gi::interface_tag<Gtk::Orientable>()); }

// GtkLayoutManager* /*full*/ adw_clamp_layout_new ();
// ::AdwClampLayout* /*full*/ adw_clamp_layout_new ();
Adw::ClampLayout base::ClampLayoutBase::new_ () noexcept
{
  typedef ::AdwClampLayout* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) adw_clamp_layout_new;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// int adw_clamp_layout_get_maximum_size (AdwClampLayout* self /*none*/);
// gint adw_clamp_layout_get_maximum_size (::AdwClampLayout* self /*none*/);
gint base::ClampLayoutBase::get_maximum_size () noexcept
{
  typedef gint (*call_wrap_t) (::AdwClampLayout* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_clamp_layout_get_maximum_size;
  auto _temp_ret = call_wrap_v ((::AdwClampLayout*) (gobj_()));
  return _temp_ret;
}

// int adw_clamp_layout_get_tightening_threshold (AdwClampLayout* self /*none*/);
// gint adw_clamp_layout_get_tightening_threshold (::AdwClampLayout* self /*none*/);
gint base::ClampLayoutBase::get_tightening_threshold () noexcept
{
  typedef gint (*call_wrap_t) (::AdwClampLayout* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_clamp_layout_get_tightening_threshold;
  auto _temp_ret = call_wrap_v ((::AdwClampLayout*) (gobj_()));
  return _temp_ret;
}

// AdwLengthUnit adw_clamp_layout_get_unit (AdwClampLayout* self /*none*/);
// ::AdwLengthUnit adw_clamp_layout_get_unit (::AdwClampLayout* self /*none*/);
Adw::LengthUnit base::ClampLayoutBase::get_unit () noexcept
{
  typedef ::AdwLengthUnit (*call_wrap_t) (::AdwClampLayout* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_clamp_layout_get_unit;
  auto _temp_ret = call_wrap_v ((::AdwClampLayout*) (gobj_()));
  return gi::wrap (_temp_ret);
}

// void adw_clamp_layout_set_maximum_size (AdwClampLayout* self /*none*/, int maximum_size);
// void adw_clamp_layout_set_maximum_size (::AdwClampLayout* self /*none*/, gint maximum_size);
void base::ClampLayoutBase::set_maximum_size (gint maximum_size) noexcept
{
  typedef void (*call_wrap_t) (::AdwClampLayout* self, gint maximum_size);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_clamp_layout_set_maximum_size;
  auto maximum_size_to_c = maximum_size;
  call_wrap_v ((::AdwClampLayout*) (gobj_()), (gint) (maximum_size_to_c));
}

// void adw_clamp_layout_set_tightening_threshold (AdwClampLayout* self /*none*/, int tightening_threshold);
// void adw_clamp_layout_set_tightening_threshold (::AdwClampLayout* self /*none*/, gint tightening_threshold);
void base::ClampLayoutBase::set_tightening_threshold (gint tightening_threshold) noexcept
{
  typedef void (*call_wrap_t) (::AdwClampLayout* self, gint tightening_threshold);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_clamp_layout_set_tightening_threshold;
  auto tightening_threshold_to_c = tightening_threshold;
  call_wrap_v ((::AdwClampLayout*) (gobj_()), (gint) (tightening_threshold_to_c));
}

// void adw_clamp_layout_set_unit (AdwClampLayout* self /*none*/, AdwLengthUnit unit);
// void adw_clamp_layout_set_unit (::AdwClampLayout* self /*none*/, ::AdwLengthUnit unit);
void base::ClampLayoutBase::set_unit (Adw::LengthUnit unit) noexcept
{
  typedef void (*call_wrap_t) (::AdwClampLayout* self, ::AdwLengthUnit unit);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_clamp_layout_set_unit;
  auto unit_to_c = gi::unwrap (unit);
  call_wrap_v ((::AdwClampLayout*) (gobj_()), (::AdwLengthUnit) (unit_to_c));
}


} // namespace base

} // namespace Adw

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<adw/clamplayout_extra_def_impl.hpp>)
#include <adw/clamplayout_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<adw/clamplayout_extra_impl.hpp>)
#include <adw/clamplayout_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Adw {

namespace impl {

namespace internal {

void ClampLayoutClassDef::class_init (gpointer class_struct, gpointer factory)
{
  ::AdwClampLayoutClass *methods = (::AdwClampLayoutClass *) class_struct;
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
