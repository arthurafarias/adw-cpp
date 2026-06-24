// AUTO-GENERATED

#ifndef _GI_ADW_BREAKPOINT_HPP_
#define _GI_ADW_BREAKPOINT_HPP_


namespace gi {

namespace repository {

namespace Adw {

class BreakpointCondition;
class BreakpointCondition_Ref;

class Breakpoint;

namespace base {


#define GI_ADW_BREAKPOINT_BASE base::BreakpointBase
class BreakpointBase : public GObject::Object
{
typedef GObject::Object super_type;
public:
typedef ::AdwBreakpoint BaseObjectType;

BreakpointBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return adw_breakpoint_get_type(); } 

GI_INLINE_DECL Gtk::Buildable interface_ (gi::interface_tag<Gtk::Buildable>);

GI_INLINE_DECL operator Gtk::Buildable ();

// AdwBreakpoint* /*full*/ adw_breakpoint_new (AdwBreakpointCondition* condition /*full*/);
// ::AdwBreakpoint* /*full*/ adw_breakpoint_new (::AdwBreakpointCondition* condition /*full*/);
static GI_INLINE_DECL Adw::Breakpoint new_ (Adw::BreakpointCondition condition) noexcept;

// void adw_breakpoint_add_setter (AdwBreakpoint* self /*none*/, GObject* object /*none*/, const char* property /*none*/, const GValue* value /*none,nullable*/);
// void adw_breakpoint_add_setter (::AdwBreakpoint* self /*none*/, ::GObject* object /*none*/, const char* property /*none*/, const ::GValue* value /*none,nullable*/);
GI_INLINE_DECL void add_setter (GObject::Object object, const gi::cstring_v property, const GObject::Value_Ref value) noexcept;
GI_INLINE_DECL void add_setter (GObject::Object object, const gi::cstring_v property) noexcept;

// void adw_breakpoint_add_setters (AdwBreakpoint* self /*none*/, GObject* first_object /*none*/, const char* first_property /*none*/,  ..._ /*none*/);
// void adw_breakpoint_add_setters (::AdwBreakpoint* self /*none*/, ::GObject* first_object /*none*/, const char* first_property /*none*/,  ..._ /*none*/);
// IGNORE; not introspectable; shadowed-by add_settersv, varargs not supported

// void adw_breakpoint_add_setters_valist (AdwBreakpoint* self /*none*/, GObject* first_object /*none*/, const char* first_property /*none*/, va_list args /*none*/);
// void adw_breakpoint_add_setters_valist (::AdwBreakpoint* self /*none*/, ::GObject* first_object /*none*/, const char* first_property /*none*/,  args /*none*/);
// IGNORE; not introspectable, args type  not supported

// void adw_breakpoint_add_settersv (AdwBreakpoint* self /*none*/, int n_setters, GObject** objects /*none*/, const char** names /*none*/, const GValue** values /*none*/);
// void adw_breakpoint_add_settersv (::AdwBreakpoint* self /*none*/, gint n_setters, ::GObject** objects /*none*/, const char** names /*none*/, const ::GValue** values /*none*/);
GI_INLINE_DECL void add_setters (gi::CollectionParameter<gi::DSpan, ::GObject*, gi::transfer_none_t> objects, gi::CollectionParameter<gi::DSpan, char*, gi::transfer_none_t> names, gi::CollectionParameter<gi::DSpan, ::GValue*, gi::transfer_none_t> values) noexcept;

// AdwBreakpointCondition* /*none,nullable*/ adw_breakpoint_get_condition (AdwBreakpoint* self /*none*/);
// ::AdwBreakpointCondition* /*none,nullable*/ adw_breakpoint_get_condition (::AdwBreakpoint* self /*none*/);
GI_INLINE_DECL Adw::BreakpointCondition_Ref get_condition () noexcept;

// void adw_breakpoint_set_condition (AdwBreakpoint* self /*none*/, AdwBreakpointCondition* condition /*none,nullable*/);
// void adw_breakpoint_set_condition (::AdwBreakpoint* self /*none*/, ::AdwBreakpointCondition* condition /*none,nullable*/);
GI_INLINE_DECL void set_condition (Adw::BreakpointCondition_Ref condition) noexcept;
GI_INLINE_DECL void set_condition () noexcept;

gi::property_proxy<Adw::BreakpointCondition, base::BreakpointBase> property_condition()
{ return gi::property_proxy<Adw::BreakpointCondition, base::BreakpointBase> (*this, "condition"); }
const gi::property_proxy<Adw::BreakpointCondition, base::BreakpointBase> property_condition() const
{ return gi::property_proxy<Adw::BreakpointCondition, base::BreakpointBase> (*this, "condition"); }

// (signal) void apply ();
// (signal) void apply ();
gi::signal_proxy<void(Adw::Breakpoint)> signal_apply()
{ return gi::signal_proxy<void(Adw::Breakpoint)> (*this, "apply"); }

// (signal) void unapply ();
// (signal) void unapply ();
gi::signal_proxy<void(Adw::Breakpoint)> signal_unapply()
{ return gi::signal_proxy<void(Adw::Breakpoint)> (*this, "unapply"); }

}; // class

} // namespace base

} // namespace Adw

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<adw/breakpoint_extra_def.hpp>)
#include <adw/breakpoint_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<adw/breakpoint_extra.hpp>)
#include <adw/breakpoint_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Adw {

class Breakpoint : public GI_ADW_BREAKPOINT_BASE
{ typedef GI_ADW_BREAKPOINT_BASE super_type; using super_type::super_type; };

} // namespace Adw

template<> struct declare_cpptype_of<::AdwBreakpoint>
{ typedef Adw::Breakpoint type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Adw {

namespace impl {

namespace internal {


class BreakpointClassDef
{
typedef BreakpointClassDef self;
public:
typedef Adw::Breakpoint instance_type;
typedef ::AdwBreakpointClass class_type;


struct TypeInitData;

protected:
GI_INLINE_DECL ~BreakpointClassDef() = default;
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );


};

GI_CLASS_IMPL_BEGIN


class BreakpointClass: public detail::ClassTemplate<Adw::impl::internal::BreakpointClassDef, GObject::impl::internal::ObjectClass, Gtk::impl::internal::BuildableIfaceClassImpl>
{
friend class internal::BreakpointClassDef;
typedef BreakpointClass self;
typedef detail::ClassTemplate<Adw::impl::internal::BreakpointClassDef, GObject::impl::internal::ObjectClass, Gtk::impl::internal::BuildableIfaceClassImpl> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types
typedef Gtk::impl::internal::BuildableIfaceClassImpl GtkBuildableIface_type;



};


struct BreakpointClassDef::TypeInitData
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

using BreakpointImpl = detail::ObjectImpl<Breakpoint, internal::BreakpointClass>;

} // namespace impl

} // namespace Adw

} // namespace repository

} // namespace gi

#endif
