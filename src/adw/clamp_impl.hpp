// AUTO-GENERATED

#ifndef _GI_ADW_CLAMP_IMPL_HPP_
#define _GI_ADW_CLAMP_IMPL_HPP_

namespace gi {

namespace repository {

namespace Adw {

namespace base {

Gtk::Orientable ClampBase::interface_ (gi::interface_tag<Gtk::Orientable>)
{ return gi::wrap ((Gtk::Orientable::BaseObjectType*) gobj_copy_(), gi::transfer_full); }

ClampBase::operator Gtk::Orientable ()
{ return interface_ (gi::interface_tag<Gtk::Orientable>()); }

// GtkWidget* /*none*/ adw_clamp_new ();
// ::AdwClamp* /*none*/ adw_clamp_new ();
Adw::Clamp base::ClampBase::new_ () noexcept
{
  typedef ::AdwClamp* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) adw_clamp_new;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// GtkWidget* /*none,nullable*/ adw_clamp_get_child (AdwClamp* self /*none*/);
// ::GtkWidget* /*none,nullable*/ adw_clamp_get_child (::AdwClamp* self /*none*/);
Gtk::Widget base::ClampBase::get_child () noexcept
{
  typedef ::GtkWidget* (*call_wrap_t) (::AdwClamp* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_clamp_get_child;
  auto _temp_ret = call_wrap_v ((::AdwClamp*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// int adw_clamp_get_maximum_size (AdwClamp* self /*none*/);
// gint adw_clamp_get_maximum_size (::AdwClamp* self /*none*/);
gint base::ClampBase::get_maximum_size () noexcept
{
  typedef gint (*call_wrap_t) (::AdwClamp* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_clamp_get_maximum_size;
  auto _temp_ret = call_wrap_v ((::AdwClamp*) (gobj_()));
  return _temp_ret;
}

// int adw_clamp_get_tightening_threshold (AdwClamp* self /*none*/);
// gint adw_clamp_get_tightening_threshold (::AdwClamp* self /*none*/);
gint base::ClampBase::get_tightening_threshold () noexcept
{
  typedef gint (*call_wrap_t) (::AdwClamp* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_clamp_get_tightening_threshold;
  auto _temp_ret = call_wrap_v ((::AdwClamp*) (gobj_()));
  return _temp_ret;
}

// AdwLengthUnit adw_clamp_get_unit (AdwClamp* self /*none*/);
// ::AdwLengthUnit adw_clamp_get_unit (::AdwClamp* self /*none*/);
Adw::LengthUnit base::ClampBase::get_unit () noexcept
{
  typedef ::AdwLengthUnit (*call_wrap_t) (::AdwClamp* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_clamp_get_unit;
  auto _temp_ret = call_wrap_v ((::AdwClamp*) (gobj_()));
  return gi::wrap (_temp_ret);
}

// void adw_clamp_set_child (AdwClamp* self /*none*/, GtkWidget* child /*none,nullable*/);
// void adw_clamp_set_child (::AdwClamp* self /*none*/, ::GtkWidget* child /*none,nullable*/);
void base::ClampBase::set_child (Gtk::Widget child) noexcept
{
  typedef void (*call_wrap_t) (::AdwClamp* self, ::GtkWidget* child);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_clamp_set_child;
  auto child_to_c = gi::unwrap (child, gi::transfer_none);
  call_wrap_v ((::AdwClamp*) (gobj_()), (::GtkWidget*) (child_to_c));
}
void base::ClampBase::set_child () noexcept
{
  typedef void (*call_wrap_t) (::AdwClamp* self, ::GtkWidget* child);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_clamp_set_child;
  auto child_to_c = nullptr;
  call_wrap_v ((::AdwClamp*) (gobj_()), (::GtkWidget*) (child_to_c));
}

// void adw_clamp_set_maximum_size (AdwClamp* self /*none*/, int maximum_size);
// void adw_clamp_set_maximum_size (::AdwClamp* self /*none*/, gint maximum_size);
void base::ClampBase::set_maximum_size (gint maximum_size) noexcept
{
  typedef void (*call_wrap_t) (::AdwClamp* self, gint maximum_size);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_clamp_set_maximum_size;
  auto maximum_size_to_c = maximum_size;
  call_wrap_v ((::AdwClamp*) (gobj_()), (gint) (maximum_size_to_c));
}

// void adw_clamp_set_tightening_threshold (AdwClamp* self /*none*/, int tightening_threshold);
// void adw_clamp_set_tightening_threshold (::AdwClamp* self /*none*/, gint tightening_threshold);
void base::ClampBase::set_tightening_threshold (gint tightening_threshold) noexcept
{
  typedef void (*call_wrap_t) (::AdwClamp* self, gint tightening_threshold);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_clamp_set_tightening_threshold;
  auto tightening_threshold_to_c = tightening_threshold;
  call_wrap_v ((::AdwClamp*) (gobj_()), (gint) (tightening_threshold_to_c));
}

// void adw_clamp_set_unit (AdwClamp* self /*none*/, AdwLengthUnit unit);
// void adw_clamp_set_unit (::AdwClamp* self /*none*/, ::AdwLengthUnit unit);
void base::ClampBase::set_unit (Adw::LengthUnit unit) noexcept
{
  typedef void (*call_wrap_t) (::AdwClamp* self, ::AdwLengthUnit unit);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_clamp_set_unit;
  auto unit_to_c = gi::unwrap (unit);
  call_wrap_v ((::AdwClamp*) (gobj_()), (::AdwLengthUnit) (unit_to_c));
}


} // namespace base

} // namespace Adw

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<adw/clamp_extra_def_impl.hpp>)
#include <adw/clamp_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<adw/clamp_extra_impl.hpp>)
#include <adw/clamp_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Adw {

namespace impl {

namespace internal {

void ClampClassDef::class_init (gpointer class_struct, gpointer factory)
{
  ::AdwClampClass *methods = (::AdwClampClass *) class_struct;
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
