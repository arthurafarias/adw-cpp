// AUTO-GENERATED

#ifndef _GI_ADW_PASSWORDENTRYROW_HPP_
#define _GI_ADW_PASSWORDENTRYROW_HPP_

#include "entryrow.hpp"

namespace gi {

namespace repository {

namespace Adw {


class PasswordEntryRow;

namespace base {


#define GI_ADW_PASSWORDENTRYROW_BASE base::PasswordEntryRowBase
class PasswordEntryRowBase : public Adw::EntryRow
{
typedef Adw::EntryRow super_type;
public:
typedef ::AdwPasswordEntryRow BaseObjectType;

PasswordEntryRowBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return adw_password_entry_row_get_type(); } 

// GtkWidget* /*none*/ adw_password_entry_row_new ();
// ::AdwPasswordEntryRow* /*none*/ adw_password_entry_row_new ();
static GI_INLINE_DECL Adw::PasswordEntryRow new_ () noexcept;

}; // class

} // namespace base

} // namespace Adw

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<adw/passwordentryrow_extra_def.hpp>)
#include <adw/passwordentryrow_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<adw/passwordentryrow_extra.hpp>)
#include <adw/passwordentryrow_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Adw {

class PasswordEntryRow : public GI_ADW_PASSWORDENTRYROW_BASE
{ typedef GI_ADW_PASSWORDENTRYROW_BASE super_type; using super_type::super_type; };

} // namespace Adw

template<> struct declare_cpptype_of<::AdwPasswordEntryRow>
{ typedef Adw::PasswordEntryRow type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Adw {

namespace impl {

namespace internal {


class PasswordEntryRowClassDef
{
typedef PasswordEntryRowClassDef self;
public:
typedef Adw::PasswordEntryRow instance_type;
typedef ::AdwPasswordEntryRowClass class_type;


struct TypeInitData;

protected:
GI_INLINE_DECL ~PasswordEntryRowClassDef() = default;
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );


};

GI_CLASS_IMPL_BEGIN


class PasswordEntryRowClass: public detail::ClassTemplate<Adw::impl::internal::PasswordEntryRowClassDef, Adw::impl::internal::EntryRowClass>
{
friend class internal::PasswordEntryRowClassDef;
typedef PasswordEntryRowClass self;
typedef detail::ClassTemplate<Adw::impl::internal::PasswordEntryRowClassDef, Adw::impl::internal::EntryRowClass> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types



};


struct PasswordEntryRowClassDef::TypeInitData
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

using PasswordEntryRowImpl = detail::ObjectImpl<PasswordEntryRow, internal::PasswordEntryRowClass>;

} // namespace impl

} // namespace Adw

} // namespace repository

} // namespace gi

#endif
