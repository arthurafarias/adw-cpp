// AUTO-GENERATED

#ifndef _GI_ADW_SPINROW_HPP_
#define _GI_ADW_SPINROW_HPP_

#include "actionrow.hpp"

namespace gi {

namespace repository {

namespace Adw {


class SpinRow;

namespace base {


#define GI_ADW_SPINROW_BASE base::SpinRowBase
class SpinRowBase : public Adw::ActionRow
{
typedef Adw::ActionRow super_type;
public:
typedef ::AdwSpinRow BaseObjectType;

SpinRowBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return adw_spin_row_get_type(); } 

GI_INLINE_DECL Gtk::Editable interface_ (gi::interface_tag<Gtk::Editable>);

GI_INLINE_DECL operator Gtk::Editable ();

// GtkWidget* /*none*/ adw_spin_row_new (GtkAdjustment* adjustment /*none,nullable*/, double climb_rate, guint digits);
// ::AdwSpinRow* /*none*/ adw_spin_row_new (::GtkAdjustment* adjustment /*none,nullable*/, gdouble climb_rate, guint digits);
static GI_INLINE_DECL Adw::SpinRow new_ (Gtk::Adjustment adjustment, gdouble climb_rate, guint digits) noexcept;
static GI_INLINE_DECL Adw::SpinRow new_ (gdouble climb_rate, guint digits) noexcept;

// GtkWidget* /*none*/ adw_spin_row_new_with_range (double min, double max, double step);
// ::AdwSpinRow* /*none*/ adw_spin_row_new_with_range (gdouble min, gdouble max, gdouble step);
static GI_INLINE_DECL Adw::SpinRow new_with_range (gdouble min, gdouble max, gdouble step) noexcept;

// void adw_spin_row_configure (AdwSpinRow* self /*none*/, GtkAdjustment* adjustment /*none,nullable*/, double climb_rate, guint digits);
// void adw_spin_row_configure (::AdwSpinRow* self /*none*/, ::GtkAdjustment* adjustment /*none,nullable*/, gdouble climb_rate, guint digits);
GI_INLINE_DECL void configure (Gtk::Adjustment adjustment, gdouble climb_rate, guint digits) noexcept;
GI_INLINE_DECL void configure (gdouble climb_rate, guint digits) noexcept;

// GtkAdjustment* /*none*/ adw_spin_row_get_adjustment (AdwSpinRow* self /*none*/);
// ::GtkAdjustment* /*none*/ adw_spin_row_get_adjustment (::AdwSpinRow* self /*none*/);
GI_INLINE_DECL Gtk::Adjustment get_adjustment () noexcept;

// double adw_spin_row_get_climb_rate (AdwSpinRow* self /*none*/);
// gdouble adw_spin_row_get_climb_rate (::AdwSpinRow* self /*none*/);
GI_INLINE_DECL gdouble get_climb_rate () noexcept;

// guint adw_spin_row_get_digits (AdwSpinRow* self /*none*/);
// guint adw_spin_row_get_digits (::AdwSpinRow* self /*none*/);
GI_INLINE_DECL guint get_digits () noexcept;

// gboolean adw_spin_row_get_numeric (AdwSpinRow* self /*none*/);
// gboolean adw_spin_row_get_numeric (::AdwSpinRow* self /*none*/);
GI_INLINE_DECL bool get_numeric () noexcept;

// gboolean adw_spin_row_get_snap_to_ticks (AdwSpinRow* self /*none*/);
// gboolean adw_spin_row_get_snap_to_ticks (::AdwSpinRow* self /*none*/);
GI_INLINE_DECL bool get_snap_to_ticks () noexcept;

// GtkSpinButtonUpdatePolicy adw_spin_row_get_update_policy (AdwSpinRow* self /*none*/);
// ::GtkSpinButtonUpdatePolicy adw_spin_row_get_update_policy (::AdwSpinRow* self /*none*/);
GI_INLINE_DECL Gtk::SpinButtonUpdatePolicy get_update_policy () noexcept;

// double adw_spin_row_get_value (AdwSpinRow* self /*none*/);
// gdouble adw_spin_row_get_value (::AdwSpinRow* self /*none*/);
GI_INLINE_DECL gdouble get_value () noexcept;

// gboolean adw_spin_row_get_wrap (AdwSpinRow* self /*none*/);
// gboolean adw_spin_row_get_wrap (::AdwSpinRow* self /*none*/);
GI_INLINE_DECL bool get_wrap () noexcept;

// void adw_spin_row_set_adjustment (AdwSpinRow* self /*none*/, GtkAdjustment* adjustment /*none,nullable*/);
// void adw_spin_row_set_adjustment (::AdwSpinRow* self /*none*/, ::GtkAdjustment* adjustment /*none,nullable*/);
GI_INLINE_DECL void set_adjustment (Gtk::Adjustment adjustment) noexcept;
GI_INLINE_DECL void set_adjustment () noexcept;

// void adw_spin_row_set_climb_rate (AdwSpinRow* self /*none*/, double climb_rate);
// void adw_spin_row_set_climb_rate (::AdwSpinRow* self /*none*/, gdouble climb_rate);
GI_INLINE_DECL void set_climb_rate (gdouble climb_rate) noexcept;

// void adw_spin_row_set_digits (AdwSpinRow* self /*none*/, guint digits);
// void adw_spin_row_set_digits (::AdwSpinRow* self /*none*/, guint digits);
GI_INLINE_DECL void set_digits (guint digits) noexcept;

// void adw_spin_row_set_numeric (AdwSpinRow* self /*none*/, gboolean numeric);
// void adw_spin_row_set_numeric (::AdwSpinRow* self /*none*/, gboolean numeric);
GI_INLINE_DECL void set_numeric (gboolean numeric) noexcept;

// void adw_spin_row_set_range (AdwSpinRow* self /*none*/, double min, double max);
// void adw_spin_row_set_range (::AdwSpinRow* self /*none*/, gdouble min, gdouble max);
GI_INLINE_DECL void set_range (gdouble min, gdouble max) noexcept;

// void adw_spin_row_set_snap_to_ticks (AdwSpinRow* self /*none*/, gboolean snap_to_ticks);
// void adw_spin_row_set_snap_to_ticks (::AdwSpinRow* self /*none*/, gboolean snap_to_ticks);
GI_INLINE_DECL void set_snap_to_ticks (gboolean snap_to_ticks) noexcept;

// void adw_spin_row_set_update_policy (AdwSpinRow* self /*none*/, GtkSpinButtonUpdatePolicy policy);
// void adw_spin_row_set_update_policy (::AdwSpinRow* self /*none*/, ::GtkSpinButtonUpdatePolicy policy);
GI_INLINE_DECL void set_update_policy (Gtk::SpinButtonUpdatePolicy policy) noexcept;

// void adw_spin_row_set_value (AdwSpinRow* self /*none*/, double value);
// void adw_spin_row_set_value (::AdwSpinRow* self /*none*/, gdouble value);
GI_INLINE_DECL void set_value (gdouble value) noexcept;

// void adw_spin_row_set_wrap (AdwSpinRow* self /*none*/, gboolean wrap);
// void adw_spin_row_set_wrap (::AdwSpinRow* self /*none*/, gboolean wrap);
GI_INLINE_DECL void set_wrap (gboolean wrap) noexcept;

// void adw_spin_row_update (AdwSpinRow* self /*none*/);
// void adw_spin_row_update (::AdwSpinRow* self /*none*/);
GI_INLINE_DECL void update () noexcept;

gi::property_proxy<Gtk::Adjustment, base::SpinRowBase> property_adjustment()
{ return gi::property_proxy<Gtk::Adjustment, base::SpinRowBase> (*this, "adjustment"); }
const gi::property_proxy<Gtk::Adjustment, base::SpinRowBase> property_adjustment() const
{ return gi::property_proxy<Gtk::Adjustment, base::SpinRowBase> (*this, "adjustment"); }

gi::property_proxy<gdouble, base::SpinRowBase> property_climb_rate()
{ return gi::property_proxy<gdouble, base::SpinRowBase> (*this, "climb-rate"); }
const gi::property_proxy<gdouble, base::SpinRowBase> property_climb_rate() const
{ return gi::property_proxy<gdouble, base::SpinRowBase> (*this, "climb-rate"); }

gi::property_proxy<guint, base::SpinRowBase> property_digits()
{ return gi::property_proxy<guint, base::SpinRowBase> (*this, "digits"); }
const gi::property_proxy<guint, base::SpinRowBase> property_digits() const
{ return gi::property_proxy<guint, base::SpinRowBase> (*this, "digits"); }

gi::property_proxy<bool, base::SpinRowBase> property_numeric()
{ return gi::property_proxy<bool, base::SpinRowBase> (*this, "numeric"); }
const gi::property_proxy<bool, base::SpinRowBase> property_numeric() const
{ return gi::property_proxy<bool, base::SpinRowBase> (*this, "numeric"); }

gi::property_proxy<bool, base::SpinRowBase> property_snap_to_ticks()
{ return gi::property_proxy<bool, base::SpinRowBase> (*this, "snap-to-ticks"); }
const gi::property_proxy<bool, base::SpinRowBase> property_snap_to_ticks() const
{ return gi::property_proxy<bool, base::SpinRowBase> (*this, "snap-to-ticks"); }

gi::property_proxy<Gtk::SpinButtonUpdatePolicy, base::SpinRowBase> property_update_policy()
{ return gi::property_proxy<Gtk::SpinButtonUpdatePolicy, base::SpinRowBase> (*this, "update-policy"); }
const gi::property_proxy<Gtk::SpinButtonUpdatePolicy, base::SpinRowBase> property_update_policy() const
{ return gi::property_proxy<Gtk::SpinButtonUpdatePolicy, base::SpinRowBase> (*this, "update-policy"); }

gi::property_proxy<gdouble, base::SpinRowBase> property_value()
{ return gi::property_proxy<gdouble, base::SpinRowBase> (*this, "value"); }
const gi::property_proxy<gdouble, base::SpinRowBase> property_value() const
{ return gi::property_proxy<gdouble, base::SpinRowBase> (*this, "value"); }

gi::property_proxy<bool, base::SpinRowBase> property_wrap()
{ return gi::property_proxy<bool, base::SpinRowBase> (*this, "wrap"); }
const gi::property_proxy<bool, base::SpinRowBase> property_wrap() const
{ return gi::property_proxy<bool, base::SpinRowBase> (*this, "wrap"); }

// (signal) gint input (gpointer new_value);
// (signal) gint input (gdouble* new_value);
gi::signal_proxy<gint(Adw::SpinRow, gdouble & new_value)> signal_input()
{ return gi::signal_proxy<gint(Adw::SpinRow, gdouble & new_value)> (*this, "input"); }

// (signal) gboolean output ();
// (signal) gboolean output ();
gi::signal_proxy<bool(Adw::SpinRow)> signal_output()
{ return gi::signal_proxy<bool(Adw::SpinRow)> (*this, "output"); }

// (signal) void wrapped ();
// (signal) void wrapped ();
gi::signal_proxy<void(Adw::SpinRow)> signal_wrapped()
{ return gi::signal_proxy<void(Adw::SpinRow)> (*this, "wrapped"); }

}; // class

} // namespace base

} // namespace Adw

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<adw/spinrow_extra_def.hpp>)
#include <adw/spinrow_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<adw/spinrow_extra.hpp>)
#include <adw/spinrow_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Adw {

class SpinRow : public GI_ADW_SPINROW_BASE
{ typedef GI_ADW_SPINROW_BASE super_type; using super_type::super_type; };

} // namespace Adw

template<> struct declare_cpptype_of<::AdwSpinRow>
{ typedef Adw::SpinRow type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Adw {

namespace impl {

namespace internal {


class SpinRowClassDef
{
typedef SpinRowClassDef self;
public:
typedef Adw::SpinRow instance_type;
typedef ::AdwSpinRowClass class_type;


struct TypeInitData;

protected:
GI_INLINE_DECL ~SpinRowClassDef() = default;
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );


};

GI_CLASS_IMPL_BEGIN


class SpinRowClass: public detail::ClassTemplate<Adw::impl::internal::SpinRowClassDef, Adw::impl::internal::ActionRowClass, Gtk::impl::internal::EditableInterfaceClassImpl>
{
friend class internal::SpinRowClassDef;
typedef SpinRowClass self;
typedef detail::ClassTemplate<Adw::impl::internal::SpinRowClassDef, Adw::impl::internal::ActionRowClass, Gtk::impl::internal::EditableInterfaceClassImpl> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types
typedef Gtk::impl::internal::EditableInterfaceClassImpl GtkEditableInterface_type;



};


struct SpinRowClassDef::TypeInitData
{

template<typename SubClass>
constexpr static TypeInitData factory()
{
  // using DefData = detail::DefinitionData<SubClass, TypeInitData>;
  return {

  };
}
};
} // namespace internal

GI_CLASS_IMPL_END

using SpinRowImpl = detail::ObjectImpl<SpinRow, internal::SpinRowClass>;

} // namespace impl

} // namespace Adw

} // namespace repository

} // namespace gi

#endif
