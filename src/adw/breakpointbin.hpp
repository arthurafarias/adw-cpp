// AUTO-GENERATED

#ifndef _GI_ADW_BREAKPOINTBIN_HPP_
#define _GI_ADW_BREAKPOINTBIN_HPP_


namespace gi {

namespace repository {

namespace Adw {

class Breakpoint;

class BreakpointBin;

namespace base {


#define GI_ADW_BREAKPOINTBIN_BASE base::BreakpointBinBase
class BreakpointBinBase : public Gtk::Widget
{
typedef Gtk::Widget super_type;
public:
typedef ::AdwBreakpointBin BaseObjectType;

BreakpointBinBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return adw_breakpoint_bin_get_type(); } 

// GtkWidget* /*none*/ adw_breakpoint_bin_new ();
// ::AdwBreakpointBin* /*none*/ adw_breakpoint_bin_new ();
static GI_INLINE_DECL Adw::BreakpointBin new_ () noexcept;

// void adw_breakpoint_bin_add_breakpoint (AdwBreakpointBin* self /*none*/, AdwBreakpoint* breakpoint /*full*/);
// void adw_breakpoint_bin_add_breakpoint (::AdwBreakpointBin* self /*none*/, ::AdwBreakpoint* breakpoint /*full*/);
GI_INLINE_DECL void add_breakpoint (Adw::Breakpoint breakpoint) noexcept;

// GtkWidget* /*none,nullable*/ adw_breakpoint_bin_get_child (AdwBreakpointBin* self /*none*/);
// ::GtkWidget* /*none,nullable*/ adw_breakpoint_bin_get_child (::AdwBreakpointBin* self /*none*/);
GI_INLINE_DECL Gtk::Widget get_child () noexcept;

// AdwBreakpoint* /*none,nullable*/ adw_breakpoint_bin_get_current_breakpoint (AdwBreakpointBin* self /*none*/);
// ::AdwBreakpoint* /*none,nullable*/ adw_breakpoint_bin_get_current_breakpoint (::AdwBreakpointBin* self /*none*/);
GI_INLINE_DECL Adw::Breakpoint get_current_breakpoint () noexcept;

// void adw_breakpoint_bin_remove_breakpoint (AdwBreakpointBin* self /*none*/, AdwBreakpoint* breakpoint /*none*/);
// void adw_breakpoint_bin_remove_breakpoint (::AdwBreakpointBin* self /*none*/, ::AdwBreakpoint* breakpoint /*none*/);
GI_INLINE_DECL void remove_breakpoint (Adw::Breakpoint breakpoint) noexcept;

// void adw_breakpoint_bin_set_child (AdwBreakpointBin* self /*none*/, GtkWidget* child /*none,nullable*/);
// void adw_breakpoint_bin_set_child (::AdwBreakpointBin* self /*none*/, ::GtkWidget* child /*none,nullable*/);
GI_INLINE_DECL void set_child (Gtk::Widget child) noexcept;
GI_INLINE_DECL void set_child () noexcept;

gi::property_proxy<Gtk::Widget, base::BreakpointBinBase> property_child()
{ return gi::property_proxy<Gtk::Widget, base::BreakpointBinBase> (*this, "child"); }
const gi::property_proxy<Gtk::Widget, base::BreakpointBinBase> property_child() const
{ return gi::property_proxy<Gtk::Widget, base::BreakpointBinBase> (*this, "child"); }

gi::property_proxy<Adw::Breakpoint, base::BreakpointBinBase> property_current_breakpoint()
{ return gi::property_proxy<Adw::Breakpoint, base::BreakpointBinBase> (*this, "current-breakpoint"); }
const gi::property_proxy<Adw::Breakpoint, base::BreakpointBinBase> property_current_breakpoint() const
{ return gi::property_proxy<Adw::Breakpoint, base::BreakpointBinBase> (*this, "current-breakpoint"); }

}; // class

} // namespace base

} // namespace Adw

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<adw/breakpointbin_extra_def.hpp>)
#include <adw/breakpointbin_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<adw/breakpointbin_extra.hpp>)
#include <adw/breakpointbin_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Adw {

class BreakpointBin : public GI_ADW_BREAKPOINTBIN_BASE
{ typedef GI_ADW_BREAKPOINTBIN_BASE super_type; using super_type::super_type; };

} // namespace Adw

template<> struct declare_cpptype_of<::AdwBreakpointBin>
{ typedef Adw::BreakpointBin type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Adw {

namespace impl {

namespace internal {


class BreakpointBinClassDef
{
typedef BreakpointBinClassDef self;
public:
typedef Adw::BreakpointBin instance_type;
typedef ::AdwBreakpointBinClass class_type;


struct TypeInitData;

protected:
GI_INLINE_DECL ~BreakpointBinClassDef() = default;
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );


};

GI_CLASS_IMPL_BEGIN


class BreakpointBinClass: public detail::ClassTemplate<Adw::impl::internal::BreakpointBinClassDef, Gtk::impl::internal::WidgetClass>
{
friend class internal::BreakpointBinClassDef;
typedef BreakpointBinClass self;
typedef detail::ClassTemplate<Adw::impl::internal::BreakpointBinClassDef, Gtk::impl::internal::WidgetClass> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types



};


struct BreakpointBinClassDef::TypeInitData
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

using BreakpointBinImpl = detail::ObjectImpl<BreakpointBin, internal::BreakpointBinClass>;

} // namespace impl

} // namespace Adw

} // namespace repository

} // namespace gi

#endif
