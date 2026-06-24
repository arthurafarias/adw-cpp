// AUTO-GENERATED

#ifndef _GI_GTK_ACCESSIBLELIST_IMPL_HPP_
#define _GI_GTK_ACCESSIBLELIST_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

// GtkAccessibleList* /*full*/ gtk_accessible_list_new_from_array (GtkAccessible** accessibles /*none*/, gsize n_accessibles);
// ::GtkAccessibleList* /*full*/ gtk_accessible_list_new_from_array (::GtkAccessible** accessibles /*none*/, gsize n_accessibles);
Gtk::AccessibleList base::AccessibleListBase::new_from_array (gi::CollectionParameter<gi::DSpan, ::GtkAccessible*, gi::transfer_none_t> accessibles) noexcept
{
  typedef ::GtkAccessibleList* (*call_wrap_t) (::GtkAccessible** accessibles, gsize n_accessibles);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_accessible_list_new_from_array;
  auto accessibles_w = unwrap (std::move(accessibles), gi::transfer_none);
  auto accessibles_to_c = accessibles_w;
  auto _temp_ret = call_wrap_v ((::GtkAccessible**) (accessibles_to_c), (gsize) (accessibles._size()));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// GtkAccessibleList* /*full*/ gtk_accessible_list_new_from_list (GList* list /*none*/);
// ::GtkAccessibleList* /*full*/ gtk_accessible_list_new_from_list (::GList* list /*none*/);
Gtk::AccessibleList base::AccessibleListBase::new_from_list (gi::CollectionParameter<GList, ::GtkAccessible*, gi::transfer_none_t> list) noexcept
{
  typedef ::GtkAccessibleList* (*call_wrap_t) (::GList* list);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_accessible_list_new_from_list;
  auto list_w = unwrap (std::move(list), gi::transfer_none);
  auto list_to_c = list_w;
  auto _temp_ret = call_wrap_v ((::GList*) (list_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// GList* /*container*/ gtk_accessible_list_get_objects (GtkAccessibleList* accessible_list /*none*/);
// ::GList* /*container*/ gtk_accessible_list_get_objects (::GtkAccessibleList* accessible_list /*none*/);
gi::Collection<GList, ::GtkAccessible*, gi::transfer_container_t> base::AccessibleListBase::get_objects () noexcept
{
  typedef ::GList* (*call_wrap_t) (::GtkAccessibleList* accessible_list);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_accessible_list_get_objects;
  auto _temp_ret = call_wrap_v ((::GtkAccessibleList*) (gobj_()));
  return gi::wrap_to<gi::Collection<GList, ::GtkAccessible*, gi::transfer_container_t>>(_temp_ret, gi::transfer_container);
}


} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/accessiblelist_extra_def_impl.hpp>)
#include <gtk/accessiblelist_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/accessiblelist_extra_impl.hpp>)
#include <gtk/accessiblelist_extra_impl.hpp>
#endif
#endif

#endif
