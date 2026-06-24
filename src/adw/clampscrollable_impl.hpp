// AUTO-GENERATED

#ifndef _GI_ADW_CLAMPSCROLLABLE_IMPL_HPP_
#define _GI_ADW_CLAMPSCROLLABLE_IMPL_HPP_

namespace gi {

namespace repository {

namespace Adw {

namespace base {

Gtk::Orientable ClampScrollableBase::interface_ (gi::interface_tag<Gtk::Orientable>)
{ return gi::wrap ((Gtk::Orientable::BaseObjectType*) gobj_copy_(), gi::transfer_full); }

ClampScrollableBase::operator Gtk::Orientable ()
{ return interface_ (gi::interface_tag<Gtk::Orientable>()); }

Gtk::Scrollable ClampScrollableBase::interface_ (gi::interface_tag<Gtk::Scrollable>)
{ return gi::wrap ((Gtk::Scrollable::BaseObjectType*) gobj_copy_(), gi::transfer_full); }

ClampScrollableBase::operator Gtk::Scrollable ()
{ return interface_ (gi::interface_tag<Gtk::Scrollable>()); }

// GtkWidget* /*none*/ adw_clamp_scrollable_new ();
// ::AdwClampScrollable* /*none*/ adw_clamp_scrollable_new ();
Adw::ClampScrollable base::ClampScrollableBase::new_ () noexcept
{
  typedef ::AdwClampScrollable* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) adw_clamp_scrollable_new;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// GtkWidget* /*none,nullable*/ adw_clamp_scrollable_get_child (AdwClampScrollable* self /*none*/);
// ::GtkWidget* /*none,nullable*/ adw_clamp_scrollable_get_child (::AdwClampScrollable* self /*none*/);
Gtk::Widget base::ClampScrollableBase::get_child () noexcept
{
  typedef ::GtkWidget* (*call_wrap_t) (::AdwClampScrollable* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_clamp_scrollable_get_child;
  auto _temp_ret = call_wrap_v ((::AdwClampScrollable*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// int adw_clamp_scrollable_get_maximum_size (AdwClampScrollable* self /*none*/);
// gint adw_clamp_scrollable_get_maximum_size (::AdwClampScrollable* self /*none*/);
gint base::ClampScrollableBase::get_maximum_size () noexcept
{
  typedef gint (*call_wrap_t) (::AdwClampScrollable* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_clamp_scrollable_get_maximum_size;
  auto _temp_ret = call_wrap_v ((::AdwClampScrollable*) (gobj_()));
  return _temp_ret;
}

// int adw_clamp_scrollable_get_tightening_threshold (AdwClampScrollable* self /*none*/);
// gint adw_clamp_scrollable_get_tightening_threshold (::AdwClampScrollable* self /*none*/);
gint base::ClampScrollableBase::get_tightening_threshold () noexcept
{
  typedef gint (*call_wrap_t) (::AdwClampScrollable* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_clamp_scrollable_get_tightening_threshold;
  auto _temp_ret = call_wrap_v ((::AdwClampScrollable*) (gobj_()));
  return _temp_ret;
}

// AdwLengthUnit adw_clamp_scrollable_get_unit (AdwClampScrollable* self /*none*/);
// ::AdwLengthUnit adw_clamp_scrollable_get_unit (::AdwClampScrollable* self /*none*/);
Adw::LengthUnit base::ClampScrollableBase::get_unit () noexcept
{
  typedef ::AdwLengthUnit (*call_wrap_t) (::AdwClampScrollable* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_clamp_scrollable_get_unit;
  auto _temp_ret = call_wrap_v ((::AdwClampScrollable*) (gobj_()));
  return gi::wrap (_temp_ret);
}

// void adw_clamp_scrollable_set_child (AdwClampScrollable* self /*none*/, GtkWidget* child /*none,nullable*/);
// void adw_clamp_scrollable_set_child (::AdwClampScrollable* self /*none*/, ::GtkWidget* child /*none,nullable*/);
void base::ClampScrollableBase::set_child (Gtk::Widget child) noexcept
{
  typedef void (*call_wrap_t) (::AdwClampScrollable* self, ::GtkWidget* child);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_clamp_scrollable_set_child;
  auto child_to_c = gi::unwrap (child, gi::transfer_none);
  call_wrap_v ((::AdwClampScrollable*) (gobj_()), (::GtkWidget*) (child_to_c));
}
void base::ClampScrollableBase::set_child () noexcept
{
  typedef void (*call_wrap_t) (::AdwClampScrollable* self, ::GtkWidget* child);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_clamp_scrollable_set_child;
  auto child_to_c = nullptr;
  call_wrap_v ((::AdwClampScrollable*) (gobj_()), (::GtkWidget*) (child_to_c));
}

// void adw_clamp_scrollable_set_maximum_size (AdwClampScrollable* self /*none*/, int maximum_size);
// void adw_clamp_scrollable_set_maximum_size (::AdwClampScrollable* self /*none*/, gint maximum_size);
void base::ClampScrollableBase::set_maximum_size (gint maximum_size) noexcept
{
  typedef void (*call_wrap_t) (::AdwClampScrollable* self, gint maximum_size);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_clamp_scrollable_set_maximum_size;
  auto maximum_size_to_c = maximum_size;
  call_wrap_v ((::AdwClampScrollable*) (gobj_()), (gint) (maximum_size_to_c));
}

// void adw_clamp_scrollable_set_tightening_threshold (AdwClampScrollable* self /*none*/, int tightening_threshold);
// void adw_clamp_scrollable_set_tightening_threshold (::AdwClampScrollable* self /*none*/, gint tightening_threshold);
void base::ClampScrollableBase::set_tightening_threshold (gint tightening_threshold) noexcept
{
  typedef void (*call_wrap_t) (::AdwClampScrollable* self, gint tightening_threshold);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_clamp_scrollable_set_tightening_threshold;
  auto tightening_threshold_to_c = tightening_threshold;
  call_wrap_v ((::AdwClampScrollable*) (gobj_()), (gint) (tightening_threshold_to_c));
}

// void adw_clamp_scrollable_set_unit (AdwClampScrollable* self /*none*/, AdwLengthUnit unit);
// void adw_clamp_scrollable_set_unit (::AdwClampScrollable* self /*none*/, ::AdwLengthUnit unit);
void base::ClampScrollableBase::set_unit (Adw::LengthUnit unit) noexcept
{
  typedef void (*call_wrap_t) (::AdwClampScrollable* self, ::AdwLengthUnit unit);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_clamp_scrollable_set_unit;
  auto unit_to_c = gi::unwrap (unit);
  call_wrap_v ((::AdwClampScrollable*) (gobj_()), (::AdwLengthUnit) (unit_to_c));
}


} // namespace base

} // namespace Adw

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<adw/clampscrollable_extra_def_impl.hpp>)
#include <adw/clampscrollable_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<adw/clampscrollable_extra_impl.hpp>)
#include <adw/clampscrollable_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Adw {

namespace impl {

namespace internal {

void ClampScrollableClassDef::class_init (gpointer class_struct, gpointer factory)
{
  ::AdwClampScrollableClass *methods = (::AdwClampScrollableClass *) class_struct;
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
