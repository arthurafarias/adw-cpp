// AUTO-GENERATED

#ifndef _GI_ADW_SPINROW_IMPL_HPP_
#define _GI_ADW_SPINROW_IMPL_HPP_

namespace gi {

namespace repository {

namespace Adw {

namespace base {

Gtk::Editable SpinRowBase::interface_ (gi::interface_tag<Gtk::Editable>)
{ return gi::wrap ((Gtk::Editable::BaseObjectType*) gobj_copy_(), gi::transfer_full); }

SpinRowBase::operator Gtk::Editable ()
{ return interface_ (gi::interface_tag<Gtk::Editable>()); }

// GtkWidget* /*none*/ adw_spin_row_new (GtkAdjustment* adjustment /*none,nullable*/, double climb_rate, guint digits);
// ::AdwSpinRow* /*none*/ adw_spin_row_new (::GtkAdjustment* adjustment /*none,nullable*/, gdouble climb_rate, guint digits);
Adw::SpinRow base::SpinRowBase::new_ (Gtk::Adjustment adjustment, gdouble climb_rate, guint digits) noexcept
{
  typedef ::AdwSpinRow* (*call_wrap_t) (::GtkAdjustment* adjustment, gdouble climb_rate, guint digits);
  call_wrap_t call_wrap_v = (call_wrap_t) adw_spin_row_new;
  auto digits_to_c = digits;
  auto climb_rate_to_c = climb_rate;
  auto adjustment_to_c = gi::unwrap (adjustment, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GtkAdjustment*) (adjustment_to_c), (gdouble) (climb_rate_to_c), (guint) (digits_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none);
}
Adw::SpinRow base::SpinRowBase::new_ (gdouble climb_rate, guint digits) noexcept
{
  typedef ::AdwSpinRow* (*call_wrap_t) (::GtkAdjustment* adjustment, gdouble climb_rate, guint digits);
  call_wrap_t call_wrap_v = (call_wrap_t) adw_spin_row_new;
  auto digits_to_c = digits;
  auto climb_rate_to_c = climb_rate;
  auto adjustment_to_c = nullptr;
  auto _temp_ret = call_wrap_v ((::GtkAdjustment*) (adjustment_to_c), (gdouble) (climb_rate_to_c), (guint) (digits_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// GtkWidget* /*none*/ adw_spin_row_new_with_range (double min, double max, double step);
// ::AdwSpinRow* /*none*/ adw_spin_row_new_with_range (gdouble min, gdouble max, gdouble step);
Adw::SpinRow base::SpinRowBase::new_with_range (gdouble min, gdouble max, gdouble step) noexcept
{
  typedef ::AdwSpinRow* (*call_wrap_t) (gdouble min, gdouble max, gdouble step);
  call_wrap_t call_wrap_v = (call_wrap_t) adw_spin_row_new_with_range;
  auto step_to_c = step;
  auto max_to_c = max;
  auto min_to_c = min;
  auto _temp_ret = call_wrap_v ((gdouble) (min_to_c), (gdouble) (max_to_c), (gdouble) (step_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// void adw_spin_row_configure (AdwSpinRow* self /*none*/, GtkAdjustment* adjustment /*none,nullable*/, double climb_rate, guint digits);
// void adw_spin_row_configure (::AdwSpinRow* self /*none*/, ::GtkAdjustment* adjustment /*none,nullable*/, gdouble climb_rate, guint digits);
void base::SpinRowBase::configure (Gtk::Adjustment adjustment, gdouble climb_rate, guint digits) noexcept
{
  typedef void (*call_wrap_t) (::AdwSpinRow* self, ::GtkAdjustment* adjustment, gdouble climb_rate, guint digits);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_spin_row_configure;
  auto digits_to_c = digits;
  auto climb_rate_to_c = climb_rate;
  auto adjustment_to_c = gi::unwrap (adjustment, gi::transfer_none);
  call_wrap_v ((::AdwSpinRow*) (gobj_()), (::GtkAdjustment*) (adjustment_to_c), (gdouble) (climb_rate_to_c), (guint) (digits_to_c));
}
void base::SpinRowBase::configure (gdouble climb_rate, guint digits) noexcept
{
  typedef void (*call_wrap_t) (::AdwSpinRow* self, ::GtkAdjustment* adjustment, gdouble climb_rate, guint digits);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_spin_row_configure;
  auto digits_to_c = digits;
  auto climb_rate_to_c = climb_rate;
  auto adjustment_to_c = nullptr;
  call_wrap_v ((::AdwSpinRow*) (gobj_()), (::GtkAdjustment*) (adjustment_to_c), (gdouble) (climb_rate_to_c), (guint) (digits_to_c));
}

// GtkAdjustment* /*none*/ adw_spin_row_get_adjustment (AdwSpinRow* self /*none*/);
// ::GtkAdjustment* /*none*/ adw_spin_row_get_adjustment (::AdwSpinRow* self /*none*/);
Gtk::Adjustment base::SpinRowBase::get_adjustment () noexcept
{
  typedef ::GtkAdjustment* (*call_wrap_t) (::AdwSpinRow* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_spin_row_get_adjustment;
  auto _temp_ret = call_wrap_v ((::AdwSpinRow*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// double adw_spin_row_get_climb_rate (AdwSpinRow* self /*none*/);
// gdouble adw_spin_row_get_climb_rate (::AdwSpinRow* self /*none*/);
gdouble base::SpinRowBase::get_climb_rate () noexcept
{
  typedef gdouble (*call_wrap_t) (::AdwSpinRow* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_spin_row_get_climb_rate;
  auto _temp_ret = call_wrap_v ((::AdwSpinRow*) (gobj_()));
  return _temp_ret;
}

// guint adw_spin_row_get_digits (AdwSpinRow* self /*none*/);
// guint adw_spin_row_get_digits (::AdwSpinRow* self /*none*/);
guint base::SpinRowBase::get_digits () noexcept
{
  typedef guint (*call_wrap_t) (::AdwSpinRow* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_spin_row_get_digits;
  auto _temp_ret = call_wrap_v ((::AdwSpinRow*) (gobj_()));
  return _temp_ret;
}

// gboolean adw_spin_row_get_numeric (AdwSpinRow* self /*none*/);
// gboolean adw_spin_row_get_numeric (::AdwSpinRow* self /*none*/);
bool base::SpinRowBase::get_numeric () noexcept
{
  typedef gboolean (*call_wrap_t) (::AdwSpinRow* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_spin_row_get_numeric;
  auto _temp_ret = call_wrap_v ((::AdwSpinRow*) (gobj_()));
  return _temp_ret;
}

// gboolean adw_spin_row_get_snap_to_ticks (AdwSpinRow* self /*none*/);
// gboolean adw_spin_row_get_snap_to_ticks (::AdwSpinRow* self /*none*/);
bool base::SpinRowBase::get_snap_to_ticks () noexcept
{
  typedef gboolean (*call_wrap_t) (::AdwSpinRow* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_spin_row_get_snap_to_ticks;
  auto _temp_ret = call_wrap_v ((::AdwSpinRow*) (gobj_()));
  return _temp_ret;
}

// GtkSpinButtonUpdatePolicy adw_spin_row_get_update_policy (AdwSpinRow* self /*none*/);
// ::GtkSpinButtonUpdatePolicy adw_spin_row_get_update_policy (::AdwSpinRow* self /*none*/);
Gtk::SpinButtonUpdatePolicy base::SpinRowBase::get_update_policy () noexcept
{
  typedef ::GtkSpinButtonUpdatePolicy (*call_wrap_t) (::AdwSpinRow* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_spin_row_get_update_policy;
  auto _temp_ret = call_wrap_v ((::AdwSpinRow*) (gobj_()));
  return gi::wrap (_temp_ret);
}

// double adw_spin_row_get_value (AdwSpinRow* self /*none*/);
// gdouble adw_spin_row_get_value (::AdwSpinRow* self /*none*/);
gdouble base::SpinRowBase::get_value () noexcept
{
  typedef gdouble (*call_wrap_t) (::AdwSpinRow* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_spin_row_get_value;
  auto _temp_ret = call_wrap_v ((::AdwSpinRow*) (gobj_()));
  return _temp_ret;
}

// gboolean adw_spin_row_get_wrap (AdwSpinRow* self /*none*/);
// gboolean adw_spin_row_get_wrap (::AdwSpinRow* self /*none*/);
bool base::SpinRowBase::get_wrap () noexcept
{
  typedef gboolean (*call_wrap_t) (::AdwSpinRow* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_spin_row_get_wrap;
  auto _temp_ret = call_wrap_v ((::AdwSpinRow*) (gobj_()));
  return _temp_ret;
}

// void adw_spin_row_set_adjustment (AdwSpinRow* self /*none*/, GtkAdjustment* adjustment /*none,nullable*/);
// void adw_spin_row_set_adjustment (::AdwSpinRow* self /*none*/, ::GtkAdjustment* adjustment /*none,nullable*/);
void base::SpinRowBase::set_adjustment (Gtk::Adjustment adjustment) noexcept
{
  typedef void (*call_wrap_t) (::AdwSpinRow* self, ::GtkAdjustment* adjustment);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_spin_row_set_adjustment;
  auto adjustment_to_c = gi::unwrap (adjustment, gi::transfer_none);
  call_wrap_v ((::AdwSpinRow*) (gobj_()), (::GtkAdjustment*) (adjustment_to_c));
}
void base::SpinRowBase::set_adjustment () noexcept
{
  typedef void (*call_wrap_t) (::AdwSpinRow* self, ::GtkAdjustment* adjustment);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_spin_row_set_adjustment;
  auto adjustment_to_c = nullptr;
  call_wrap_v ((::AdwSpinRow*) (gobj_()), (::GtkAdjustment*) (adjustment_to_c));
}

// void adw_spin_row_set_climb_rate (AdwSpinRow* self /*none*/, double climb_rate);
// void adw_spin_row_set_climb_rate (::AdwSpinRow* self /*none*/, gdouble climb_rate);
void base::SpinRowBase::set_climb_rate (gdouble climb_rate) noexcept
{
  typedef void (*call_wrap_t) (::AdwSpinRow* self, gdouble climb_rate);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_spin_row_set_climb_rate;
  auto climb_rate_to_c = climb_rate;
  call_wrap_v ((::AdwSpinRow*) (gobj_()), (gdouble) (climb_rate_to_c));
}

// void adw_spin_row_set_digits (AdwSpinRow* self /*none*/, guint digits);
// void adw_spin_row_set_digits (::AdwSpinRow* self /*none*/, guint digits);
void base::SpinRowBase::set_digits (guint digits) noexcept
{
  typedef void (*call_wrap_t) (::AdwSpinRow* self, guint digits);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_spin_row_set_digits;
  auto digits_to_c = digits;
  call_wrap_v ((::AdwSpinRow*) (gobj_()), (guint) (digits_to_c));
}

// void adw_spin_row_set_numeric (AdwSpinRow* self /*none*/, gboolean numeric);
// void adw_spin_row_set_numeric (::AdwSpinRow* self /*none*/, gboolean numeric);
void base::SpinRowBase::set_numeric (gboolean numeric) noexcept
{
  typedef void (*call_wrap_t) (::AdwSpinRow* self, gboolean numeric);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_spin_row_set_numeric;
  auto numeric_to_c = numeric;
  call_wrap_v ((::AdwSpinRow*) (gobj_()), (gboolean) (numeric_to_c));
}

// void adw_spin_row_set_range (AdwSpinRow* self /*none*/, double min, double max);
// void adw_spin_row_set_range (::AdwSpinRow* self /*none*/, gdouble min, gdouble max);
void base::SpinRowBase::set_range (gdouble min, gdouble max) noexcept
{
  typedef void (*call_wrap_t) (::AdwSpinRow* self, gdouble min, gdouble max);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_spin_row_set_range;
  auto max_to_c = max;
  auto min_to_c = min;
  call_wrap_v ((::AdwSpinRow*) (gobj_()), (gdouble) (min_to_c), (gdouble) (max_to_c));
}

// void adw_spin_row_set_snap_to_ticks (AdwSpinRow* self /*none*/, gboolean snap_to_ticks);
// void adw_spin_row_set_snap_to_ticks (::AdwSpinRow* self /*none*/, gboolean snap_to_ticks);
void base::SpinRowBase::set_snap_to_ticks (gboolean snap_to_ticks) noexcept
{
  typedef void (*call_wrap_t) (::AdwSpinRow* self, gboolean snap_to_ticks);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_spin_row_set_snap_to_ticks;
  auto snap_to_ticks_to_c = snap_to_ticks;
  call_wrap_v ((::AdwSpinRow*) (gobj_()), (gboolean) (snap_to_ticks_to_c));
}

// void adw_spin_row_set_update_policy (AdwSpinRow* self /*none*/, GtkSpinButtonUpdatePolicy policy);
// void adw_spin_row_set_update_policy (::AdwSpinRow* self /*none*/, ::GtkSpinButtonUpdatePolicy policy);
void base::SpinRowBase::set_update_policy (Gtk::SpinButtonUpdatePolicy policy) noexcept
{
  typedef void (*call_wrap_t) (::AdwSpinRow* self, ::GtkSpinButtonUpdatePolicy policy);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_spin_row_set_update_policy;
  auto policy_to_c = gi::unwrap (policy);
  call_wrap_v ((::AdwSpinRow*) (gobj_()), (::GtkSpinButtonUpdatePolicy) (policy_to_c));
}

// void adw_spin_row_set_value (AdwSpinRow* self /*none*/, double value);
// void adw_spin_row_set_value (::AdwSpinRow* self /*none*/, gdouble value);
void base::SpinRowBase::set_value (gdouble value) noexcept
{
  typedef void (*call_wrap_t) (::AdwSpinRow* self, gdouble value);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_spin_row_set_value;
  auto value_to_c = value;
  call_wrap_v ((::AdwSpinRow*) (gobj_()), (gdouble) (value_to_c));
}

// void adw_spin_row_set_wrap (AdwSpinRow* self /*none*/, gboolean wrap);
// void adw_spin_row_set_wrap (::AdwSpinRow* self /*none*/, gboolean wrap);
void base::SpinRowBase::set_wrap (gboolean wrap) noexcept
{
  typedef void (*call_wrap_t) (::AdwSpinRow* self, gboolean wrap);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_spin_row_set_wrap;
  auto wrap_to_c = wrap;
  call_wrap_v ((::AdwSpinRow*) (gobj_()), (gboolean) (wrap_to_c));
}

// void adw_spin_row_update (AdwSpinRow* self /*none*/);
// void adw_spin_row_update (::AdwSpinRow* self /*none*/);
void base::SpinRowBase::update () noexcept
{
  typedef void (*call_wrap_t) (::AdwSpinRow* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_spin_row_update;
  call_wrap_v ((::AdwSpinRow*) (gobj_()));
}





} // namespace base

} // namespace Adw

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<adw/spinrow_extra_def_impl.hpp>)
#include <adw/spinrow_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<adw/spinrow_extra_impl.hpp>)
#include <adw/spinrow_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Adw {

namespace impl {

namespace internal {

void SpinRowClassDef::class_init (gpointer class_struct, gpointer factory)
{
  ::AdwSpinRowClass *methods = (::AdwSpinRowClass *) class_struct;
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
