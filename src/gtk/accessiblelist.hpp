// AUTO-GENERATED

#ifndef _GI_GTK_ACCESSIBLELIST_HPP_
#define _GI_GTK_ACCESSIBLELIST_HPP_


namespace gi {

namespace repository {

namespace Gtk {

class Accessible;
class AccessibleList_Ref;

class AccessibleList;

namespace base {


#define GI_GTK_ACCESSIBLELIST_BASE base::AccessibleListBase
class AccessibleListBase : public gi::detail::GBoxedWrapperBase<AccessibleListBase, ::GtkAccessibleList>
{
typedef gi::detail::GBoxedWrapperBase<AccessibleListBase, ::GtkAccessibleList> super_type;
public:

AccessibleListBase (std::nullptr_t = nullptr) : super_type() {}

static GType get_type_ () G_GNUC_CONST { return gtk_accessible_list_get_type(); } 

// GtkAccessibleList* /*full*/ gtk_accessible_list_new_from_array (GtkAccessible** accessibles /*none*/, gsize n_accessibles);
// ::GtkAccessibleList* /*full*/ gtk_accessible_list_new_from_array (::GtkAccessible** accessibles /*none*/, gsize n_accessibles);
static GI_INLINE_DECL Gtk::AccessibleList new_from_array (gi::CollectionParameter<gi::DSpan, ::GtkAccessible*, gi::transfer_none_t> accessibles) noexcept;

// GtkAccessibleList* /*full*/ gtk_accessible_list_new_from_list (GList* list /*none*/);
// ::GtkAccessibleList* /*full*/ gtk_accessible_list_new_from_list (::GList* list /*none*/);
static GI_INLINE_DECL Gtk::AccessibleList new_from_list (gi::CollectionParameter<GList, ::GtkAccessible*, gi::transfer_none_t> list) noexcept;

// GList* /*container*/ gtk_accessible_list_get_objects (GtkAccessibleList* accessible_list /*none*/);
// ::GList* /*container*/ gtk_accessible_list_get_objects (::GtkAccessibleList* accessible_list /*none*/);
GI_INLINE_DECL gi::Collection<GList, ::GtkAccessible*, gi::transfer_container_t> get_objects () noexcept;

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/accessiblelist_extra_def.hpp>)
#include <gtk/accessiblelist_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/accessiblelist_extra.hpp>)
#include <gtk/accessiblelist_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class AccessibleList_Ref;

class AccessibleList : public gi::detail::GBoxedWrapper<AccessibleList, ::GtkAccessibleList, GI_GTK_ACCESSIBLELIST_BASE, AccessibleList_Ref>
{ typedef gi::detail::GBoxedWrapper<AccessibleList, ::GtkAccessibleList, GI_GTK_ACCESSIBLELIST_BASE, AccessibleList_Ref> super_type; using super_type::super_type; };


class AccessibleList_Ref : public gi::detail::GBoxedRefWrapper<AccessibleList, ::GtkAccessibleList, GI_GTK_ACCESSIBLELIST_BASE>
{ typedef gi::detail::GBoxedRefWrapper<AccessibleList, ::GtkAccessibleList, GI_GTK_ACCESSIBLELIST_BASE> super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkAccessibleList>
{ typedef Gtk::AccessibleList type; }; 

} // namespace repository

} // namespace gi

#endif
