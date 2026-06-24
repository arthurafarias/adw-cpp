// AUTO-GENERATED

#ifndef _GI_GTK_ACCESSIBLEHYPERTEXT_HPP_
#define _GI_GTK_ACCESSIBLEHYPERTEXT_HPP_


namespace gi {

namespace repository {

namespace Gtk {

class AccessibleHyperlink;

class AccessibleHypertext;

namespace base {


#define GI_GTK_ACCESSIBLEHYPERTEXT_BASE base::AccessibleHypertextBase
class AccessibleHypertextBase : public gi::InterfaceBase
{
typedef gi::InterfaceBase super_type;
public:
typedef ::GtkAccessibleHypertext BaseObjectType;

AccessibleHypertextBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_accessible_hypertext_get_type(); } 

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/accessiblehypertext_extra_def.hpp>)
#include <gtk/accessiblehypertext_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/accessiblehypertext_extra.hpp>)
#include <gtk/accessiblehypertext_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class AccessibleHypertext : public GI_GTK_ACCESSIBLEHYPERTEXT_BASE
{ typedef GI_GTK_ACCESSIBLEHYPERTEXT_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkAccessibleHypertext>
{ typedef Gtk::AccessibleHypertext type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {


class AccessibleHypertextInterfaceDef
{
typedef AccessibleHypertextInterfaceDef self;
public:
typedef Gtk::AccessibleHypertext instance_type;
typedef ::GtkAccessibleHypertextInterface interface_type;

using GI_MEMBER_CHECK_CONFLICT(get_link) = self;
using GI_MEMBER_CHECK_CONFLICT(get_link_at) = self;
using GI_MEMBER_CHECK_CONFLICT(get_n_links) = self;

struct TypeInitData;

protected:
GI_INLINE_DECL ~AccessibleHypertextInterfaceDef() = default;
static GI_INLINE_DECL void interface_init (gpointer interface_struct, gpointer );

// GtkAccessibleHyperlink* /*none*/ AccessibleHypertext::get_link (GtkAccessibleHypertext* self /*none*/, unsigned int index);
// ::GtkAccessibleHyperlink* /*none*/ AccessibleHypertext::get_link (::GtkAccessibleHypertext* self /*none*/, guint index);
virtual Gtk::AccessibleHyperlink get_link_ (guint index) noexcept = 0;

// unsigned int AccessibleHypertext::get_link_at (GtkAccessibleHypertext* self /*none*/, unsigned int offset);
// guint AccessibleHypertext::get_link_at (::GtkAccessibleHypertext* self /*none*/, guint offset);
virtual guint get_link_at_ (guint offset) noexcept = 0;

// unsigned int AccessibleHypertext::get_n_links (GtkAccessibleHypertext* self /*none*/);
// guint AccessibleHypertext::get_n_links (::GtkAccessibleHypertext* self /*none*/);
virtual guint get_n_links_ () noexcept = 0;


};

using AccessibleHypertextImpl = detail::InterfaceImpl<AccessibleHypertextInterfaceDef>;

class AccessibleHypertextInterfaceClassImpl: public detail::InterfaceClassImpl<AccessibleHypertextImpl>
{
friend class internal::AccessibleHypertextInterfaceDef;
typedef AccessibleHypertextInterfaceClassImpl self;
typedef detail::InterfaceClassImpl<AccessibleHypertextImpl> super;

protected:
using super::super;

// GtkAccessibleHyperlink* /*none*/ AccessibleHypertext::get_link (GtkAccessibleHypertext* self /*none*/, unsigned int index);
// ::GtkAccessibleHyperlink* /*none*/ AccessibleHypertext::get_link (::GtkAccessibleHypertext* self /*none*/, guint index);
GI_INLINE_DECL Gtk::AccessibleHyperlink get_link_ (guint index) noexcept override;

// unsigned int AccessibleHypertext::get_link_at (GtkAccessibleHypertext* self /*none*/, unsigned int offset);
// guint AccessibleHypertext::get_link_at (::GtkAccessibleHypertext* self /*none*/, guint offset);
GI_INLINE_DECL guint get_link_at_ (guint offset) noexcept override;

// unsigned int AccessibleHypertext::get_n_links (GtkAccessibleHypertext* self /*none*/);
// guint AccessibleHypertext::get_n_links (::GtkAccessibleHypertext* self /*none*/);
GI_INLINE_DECL guint get_n_links_ () noexcept override;


};


struct AccessibleHypertextInterfaceDef::TypeInitData
{
  GI_MEMBER_DEFINE(AccessibleHypertextInterfaceClassImpl, get_link)
  GI_MEMBER_DEFINE(AccessibleHypertextInterfaceClassImpl, get_link_at)
  GI_MEMBER_DEFINE(AccessibleHypertextInterfaceClassImpl, get_n_links)

template<typename SubClass>
constexpr static TypeInitData factory()
{
  using DefData = detail::DefinitionData<SubClass, TypeInitData>;
  return {
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, get_link),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, get_link_at),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, get_n_links)
  };
}
};
} // namespace internal

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
