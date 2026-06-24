// AUTO-GENERATED

#ifndef _GI_ADW_SWITCHROW_HPP_
#define _GI_ADW_SWITCHROW_HPP_

#include "actionrow.hpp"

namespace gi {

namespace repository {

namespace Adw {


class SwitchRow;

namespace base {


#define GI_ADW_SWITCHROW_BASE base::SwitchRowBase
class SwitchRowBase : public Adw::ActionRow
{
typedef Adw::ActionRow super_type;
public:
typedef ::AdwSwitchRow BaseObjectType;

SwitchRowBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return adw_switch_row_get_type(); } 

// GtkWidget* /*none*/ adw_switch_row_new ();
// ::AdwSwitchRow* /*none*/ adw_switch_row_new ();
static GI_INLINE_DECL Adw::SwitchRow new_ () noexcept;

// gboolean adw_switch_row_get_active (AdwSwitchRow* self /*none*/);
// gboolean adw_switch_row_get_active (::AdwSwitchRow* self /*none*/);
GI_INLINE_DECL bool get_active () noexcept;

// void adw_switch_row_set_active (AdwSwitchRow* self /*none*/, gboolean is_active);
// void adw_switch_row_set_active (::AdwSwitchRow* self /*none*/, gboolean is_active);
GI_INLINE_DECL void set_active (gboolean is_active) noexcept;

gi::property_proxy<bool, base::SwitchRowBase> property_active()
{ return gi::property_proxy<bool, base::SwitchRowBase> (*this, "active"); }
const gi::property_proxy<bool, base::SwitchRowBase> property_active() const
{ return gi::property_proxy<bool, base::SwitchRowBase> (*this, "active"); }

}; // class

} // namespace base

} // namespace Adw

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<adw/switchrow_extra_def.hpp>)
#include <adw/switchrow_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<adw/switchrow_extra.hpp>)
#include <adw/switchrow_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Adw {

class SwitchRow : public GI_ADW_SWITCHROW_BASE
{ typedef GI_ADW_SWITCHROW_BASE super_type; using super_type::super_type; };

} // namespace Adw

template<> struct declare_cpptype_of<::AdwSwitchRow>
{ typedef Adw::SwitchRow type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Adw {

namespace impl {

namespace internal {


class SwitchRowClassDef
{
typedef SwitchRowClassDef self;
public:
typedef Adw::SwitchRow instance_type;
typedef ::AdwSwitchRowClass class_type;


struct TypeInitData;

protected:
GI_INLINE_DECL ~SwitchRowClassDef() = default;
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );


};

GI_CLASS_IMPL_BEGIN


class SwitchRowClass: public detail::ClassTemplate<Adw::impl::internal::SwitchRowClassDef, Adw::impl::internal::ActionRowClass>
{
friend class internal::SwitchRowClassDef;
typedef SwitchRowClass self;
typedef detail::ClassTemplate<Adw::impl::internal::SwitchRowClassDef, Adw::impl::internal::ActionRowClass> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types



};


struct SwitchRowClassDef::TypeInitData
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

using SwitchRowImpl = detail::ObjectImpl<SwitchRow, internal::SwitchRowClass>;

} // namespace impl

} // namespace Adw

} // namespace repository

} // namespace gi

#endif
