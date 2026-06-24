// AUTO-GENERATED

#ifndef _GI_GTK_ACCESSIBLEHYPERLINK_HPP_
#define _GI_GTK_ACCESSIBLEHYPERLINK_HPP_


namespace gi {

namespace repository {

namespace Gtk {

class Accessible;
class AccessibleHypertext;
class AccessibleTextRange;
class AccessibleTextRange_Ref;

class AccessibleHyperlink;

namespace base {


#define GI_GTK_ACCESSIBLEHYPERLINK_BASE base::AccessibleHyperlinkBase
class AccessibleHyperlinkBase : public GObject::Object
{
typedef GObject::Object super_type;
public:
typedef ::GtkAccessibleHyperlink BaseObjectType;

AccessibleHyperlinkBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_accessible_hyperlink_get_type(); } 

GI_INLINE_DECL Gtk::Accessible interface_ (gi::interface_tag<Gtk::Accessible>);

GI_INLINE_DECL operator Gtk::Accessible ();

// GtkAccessibleHyperlink* /*full*/ gtk_accessible_hyperlink_new (GtkAccessibleHypertext* parent /*none*/, unsigned int index, const char* uri /*none*/, GtkAccessibleTextRange* bounds /*none*/);
// ::GtkAccessibleHyperlink* /*full*/ gtk_accessible_hyperlink_new (::GtkAccessibleHypertext* parent /*none*/, guint index, const char* uri /*none*/, ::GtkAccessibleTextRange* bounds /*none*/);
static GI_INLINE_DECL Gtk::AccessibleHyperlink new_ (Gtk::AccessibleHypertext parent, guint index, const gi::cstring_v uri, Gtk::AccessibleTextRange_Ref bounds) noexcept;

// void gtk_accessible_hyperlink_set_platform_state (GtkAccessibleHyperlink* self /*none*/, GtkAccessiblePlatformState state, gboolean enabled);
// void gtk_accessible_hyperlink_set_platform_state (::GtkAccessibleHyperlink* self /*none*/, ::GtkAccessiblePlatformState state, gboolean enabled);
GI_INLINE_DECL void set_platform_state (Gtk::AccessiblePlatformState state, gboolean enabled) noexcept;

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/accessiblehyperlink_extra_def.hpp>)
#include <gtk/accessiblehyperlink_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/accessiblehyperlink_extra.hpp>)
#include <gtk/accessiblehyperlink_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class AccessibleHyperlink : public GI_GTK_ACCESSIBLEHYPERLINK_BASE
{ typedef GI_GTK_ACCESSIBLEHYPERLINK_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkAccessibleHyperlink>
{ typedef Gtk::AccessibleHyperlink type; }; 

} // namespace repository

} // namespace gi

#include "accessible.hpp"

namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {


class AccessibleHyperlinkClassDef
{
typedef AccessibleHyperlinkClassDef self;
public:
typedef Gtk::AccessibleHyperlink instance_type;
typedef ::GtkAccessibleHyperlinkClass class_type;


struct TypeInitData;

protected:
GI_INLINE_DECL ~AccessibleHyperlinkClassDef() = default;
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );


};

GI_CLASS_IMPL_BEGIN


class AccessibleHyperlinkClass: public detail::ClassTemplate<Gtk::impl::internal::AccessibleHyperlinkClassDef, GObject::impl::internal::ObjectClass, Gtk::impl::internal::AccessibleInterfaceClassImpl>
{
friend class internal::AccessibleHyperlinkClassDef;
typedef AccessibleHyperlinkClass self;
typedef detail::ClassTemplate<Gtk::impl::internal::AccessibleHyperlinkClassDef, GObject::impl::internal::ObjectClass, Gtk::impl::internal::AccessibleInterfaceClassImpl> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types
typedef Gtk::impl::internal::AccessibleInterfaceClassImpl GtkAccessibleInterface_type;



};


struct AccessibleHyperlinkClassDef::TypeInitData
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

using AccessibleHyperlinkImpl = detail::ObjectImpl<AccessibleHyperlink, internal::AccessibleHyperlinkClass>;

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
