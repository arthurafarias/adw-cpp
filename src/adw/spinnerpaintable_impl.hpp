// AUTO-GENERATED

#ifndef _GI_ADW_SPINNERPAINTABLE_IMPL_HPP_
#define _GI_ADW_SPINNERPAINTABLE_IMPL_HPP_

namespace gi {

namespace repository {

namespace Adw {

namespace base {

Gdk::Paintable SpinnerPaintableBase::interface_ (gi::interface_tag<Gdk::Paintable>)
{ return gi::wrap ((Gdk::Paintable::BaseObjectType*) gobj_copy_(), gi::transfer_full); }

SpinnerPaintableBase::operator Gdk::Paintable ()
{ return interface_ (gi::interface_tag<Gdk::Paintable>()); }

Gtk::SymbolicPaintable SpinnerPaintableBase::interface_ (gi::interface_tag<Gtk::SymbolicPaintable>)
{ return gi::wrap ((Gtk::SymbolicPaintable::BaseObjectType*) gobj_copy_(), gi::transfer_full); }

SpinnerPaintableBase::operator Gtk::SymbolicPaintable ()
{ return interface_ (gi::interface_tag<Gtk::SymbolicPaintable>()); }

// AdwSpinnerPaintable* /*full*/ adw_spinner_paintable_new (GtkWidget* widget /*none,nullable*/);
// ::AdwSpinnerPaintable* /*full*/ adw_spinner_paintable_new (::GtkWidget* widget /*none,nullable*/);
Adw::SpinnerPaintable base::SpinnerPaintableBase::new_ (Gtk::Widget widget) noexcept
{
  typedef ::AdwSpinnerPaintable* (*call_wrap_t) (::GtkWidget* widget);
  call_wrap_t call_wrap_v = (call_wrap_t) adw_spinner_paintable_new;
  auto widget_to_c = gi::unwrap (widget, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GtkWidget*) (widget_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}
Adw::SpinnerPaintable base::SpinnerPaintableBase::new_ () noexcept
{
  typedef ::AdwSpinnerPaintable* (*call_wrap_t) (::GtkWidget* widget);
  call_wrap_t call_wrap_v = (call_wrap_t) adw_spinner_paintable_new;
  auto widget_to_c = nullptr;
  auto _temp_ret = call_wrap_v ((::GtkWidget*) (widget_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// GtkWidget* /*none,nullable*/ adw_spinner_paintable_get_widget (AdwSpinnerPaintable* self /*none*/);
// ::GtkWidget* /*none,nullable*/ adw_spinner_paintable_get_widget (::AdwSpinnerPaintable* self /*none*/);
Gtk::Widget base::SpinnerPaintableBase::get_widget () noexcept
{
  typedef ::GtkWidget* (*call_wrap_t) (::AdwSpinnerPaintable* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_spinner_paintable_get_widget;
  auto _temp_ret = call_wrap_v ((::AdwSpinnerPaintable*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// void adw_spinner_paintable_set_widget (AdwSpinnerPaintable* self /*none*/, GtkWidget* widget /*none,nullable*/);
// void adw_spinner_paintable_set_widget (::AdwSpinnerPaintable* self /*none*/, ::GtkWidget* widget /*none,nullable*/);
void base::SpinnerPaintableBase::set_widget (Gtk::Widget widget) noexcept
{
  typedef void (*call_wrap_t) (::AdwSpinnerPaintable* self, ::GtkWidget* widget);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_spinner_paintable_set_widget;
  auto widget_to_c = gi::unwrap (widget, gi::transfer_none);
  call_wrap_v ((::AdwSpinnerPaintable*) (gobj_()), (::GtkWidget*) (widget_to_c));
}
void base::SpinnerPaintableBase::set_widget () noexcept
{
  typedef void (*call_wrap_t) (::AdwSpinnerPaintable* self, ::GtkWidget* widget);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_spinner_paintable_set_widget;
  auto widget_to_c = nullptr;
  call_wrap_v ((::AdwSpinnerPaintable*) (gobj_()), (::GtkWidget*) (widget_to_c));
}


} // namespace base

} // namespace Adw

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<adw/spinnerpaintable_extra_def_impl.hpp>)
#include <adw/spinnerpaintable_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<adw/spinnerpaintable_extra_impl.hpp>)
#include <adw/spinnerpaintable_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Adw {

namespace impl {

namespace internal {

void SpinnerPaintableClassDef::class_init (gpointer class_struct, gpointer factory)
{
  ::AdwSpinnerPaintableClass *methods = (::AdwSpinnerPaintableClass *) class_struct;
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
