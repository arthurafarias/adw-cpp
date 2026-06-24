// AUTO-GENERATED

#ifndef _GI_ADW_BUTTONROW_HPP_
#define _GI_ADW_BUTTONROW_HPP_

#include "preferencesrow.hpp"

namespace gi {

namespace repository {

namespace Adw {


class ButtonRow;

namespace base {


#define GI_ADW_BUTTONROW_BASE base::ButtonRowBase
class ButtonRowBase : public Adw::PreferencesRow
{
typedef Adw::PreferencesRow super_type;
public:
typedef ::AdwButtonRow BaseObjectType;

ButtonRowBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return adw_button_row_get_type(); } 

// GtkWidget* /*none*/ adw_button_row_new ();
// ::AdwButtonRow* /*none*/ adw_button_row_new ();
static GI_INLINE_DECL Adw::ButtonRow new_ () noexcept;

// const char* /*none,nullable*/ adw_button_row_get_end_icon_name (AdwButtonRow* self /*none*/);
// const char* /*none,nullable*/ adw_button_row_get_end_icon_name (::AdwButtonRow* self /*none*/);
GI_INLINE_DECL gi::cstring_v get_end_icon_name () noexcept;

// const char* /*none,nullable*/ adw_button_row_get_start_icon_name (AdwButtonRow* self /*none*/);
// const char* /*none,nullable*/ adw_button_row_get_start_icon_name (::AdwButtonRow* self /*none*/);
GI_INLINE_DECL gi::cstring_v get_start_icon_name () noexcept;

// void adw_button_row_set_end_icon_name (AdwButtonRow* self /*none*/, const char* icon_name /*none,nullable*/);
// void adw_button_row_set_end_icon_name (::AdwButtonRow* self /*none*/, const char* icon_name /*none,nullable*/);
GI_INLINE_DECL void set_end_icon_name (const gi::cstring_v icon_name) noexcept;
GI_INLINE_DECL void set_end_icon_name () noexcept;

// void adw_button_row_set_start_icon_name (AdwButtonRow* self /*none*/, const char* icon_name /*none,nullable*/);
// void adw_button_row_set_start_icon_name (::AdwButtonRow* self /*none*/, const char* icon_name /*none,nullable*/);
GI_INLINE_DECL void set_start_icon_name (const gi::cstring_v icon_name) noexcept;
GI_INLINE_DECL void set_start_icon_name () noexcept;

gi::property_proxy<gi::cstring, base::ButtonRowBase> property_end_icon_name()
{ return gi::property_proxy<gi::cstring, base::ButtonRowBase> (*this, "end-icon-name"); }
const gi::property_proxy<gi::cstring, base::ButtonRowBase> property_end_icon_name() const
{ return gi::property_proxy<gi::cstring, base::ButtonRowBase> (*this, "end-icon-name"); }

gi::property_proxy<gi::cstring, base::ButtonRowBase> property_start_icon_name()
{ return gi::property_proxy<gi::cstring, base::ButtonRowBase> (*this, "start-icon-name"); }
const gi::property_proxy<gi::cstring, base::ButtonRowBase> property_start_icon_name() const
{ return gi::property_proxy<gi::cstring, base::ButtonRowBase> (*this, "start-icon-name"); }

// (signal) void activated ();
// (signal) void activated ();
gi::signal_proxy<void(Adw::ButtonRow)> signal_activated()
{ return gi::signal_proxy<void(Adw::ButtonRow)> (*this, "activated"); }

}; // class

} // namespace base

} // namespace Adw

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<adw/buttonrow_extra_def.hpp>)
#include <adw/buttonrow_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<adw/buttonrow_extra.hpp>)
#include <adw/buttonrow_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Adw {

class ButtonRow : public GI_ADW_BUTTONROW_BASE
{ typedef GI_ADW_BUTTONROW_BASE super_type; using super_type::super_type; };

} // namespace Adw

template<> struct declare_cpptype_of<::AdwButtonRow>
{ typedef Adw::ButtonRow type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Adw {

namespace impl {

namespace internal {


class ButtonRowClassDef
{
typedef ButtonRowClassDef self;
public:
typedef Adw::ButtonRow instance_type;
typedef ::AdwButtonRowClass class_type;


struct TypeInitData;

protected:
GI_INLINE_DECL ~ButtonRowClassDef() = default;
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );


};

GI_CLASS_IMPL_BEGIN


class ButtonRowClass: public detail::ClassTemplate<Adw::impl::internal::ButtonRowClassDef, Adw::impl::internal::PreferencesRowClass>
{
friend class internal::ButtonRowClassDef;
typedef ButtonRowClass self;
typedef detail::ClassTemplate<Adw::impl::internal::ButtonRowClassDef, Adw::impl::internal::PreferencesRowClass> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types



};


struct ButtonRowClassDef::TypeInitData
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

using ButtonRowImpl = detail::ObjectImpl<ButtonRow, internal::ButtonRowClass>;

} // namespace impl

} // namespace Adw

} // namespace repository

} // namespace gi

#endif
