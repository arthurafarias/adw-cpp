// AUTO-GENERATED

#ifndef _GI_GTK_ACCESSIBLEHYPERTEXT_IMPL_HPP_
#define _GI_GTK_ACCESSIBLEHYPERTEXT_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {


} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/accessiblehypertext_extra_def_impl.hpp>)
#include <gtk/accessiblehypertext_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/accessiblehypertext_extra_impl.hpp>)
#include <gtk/accessiblehypertext_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {

void AccessibleHypertextInterfaceDef::interface_init (gpointer interface_struct, gpointer factory)
{
  ::GtkAccessibleHypertextInterface *methods = (::GtkAccessibleHypertextInterface *) interface_struct;
  (void) methods;

  auto init_data = GI_MEMBER_INIT_DATA(TypeInitData, factory);
  (void) init_data;

  if (init_data.get_link) methods->get_link = (decltype (methods->get_link)) gi::detail::method_wrapper<self, Gtk::AccessibleHyperlink (*) (guint index), gi::transfer_none_t, std::tuple<gi::transfer_none_t>>::wrapper<&self::get_link_>;
  if (init_data.get_link_at) methods->get_link_at = (decltype (methods->get_link_at)) gi::detail::method_wrapper<self, guint (*) (guint offset), gi::transfer_none_t, std::tuple<gi::transfer_none_t>>::wrapper<&self::get_link_at_>;
  if (init_data.get_n_links) methods->get_n_links = (decltype (methods->get_n_links)) gi::detail::method_wrapper<self, guint (*) (), gi::transfer_none_t, std::tuple<>>::wrapper<&self::get_n_links_>;
}

// GtkAccessibleHyperlink* /*none*/ AccessibleHypertext::get_link (GtkAccessibleHypertext* self /*none*/, unsigned int index);
// ::GtkAccessibleHyperlink* /*none*/ AccessibleHypertext::get_link (::GtkAccessibleHypertext* self /*none*/, guint index);
Gtk::AccessibleHyperlink AccessibleHypertextInterfaceClassImpl::get_link_ (guint index) noexcept
{
  if (!get_struct_()->get_link) { g_critical ("no method in class struct"); return {}; }
  typedef ::GtkAccessibleHyperlink* (*call_wrap_t) (::GtkAccessibleHypertext* self, guint index);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->get_link;
  auto index_to_c = index;
  auto _temp_ret = call_wrap_v ((::GtkAccessibleHypertext*) (gobj_()), (guint) (index_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// unsigned int AccessibleHypertext::get_link_at (GtkAccessibleHypertext* self /*none*/, unsigned int offset);
// guint AccessibleHypertext::get_link_at (::GtkAccessibleHypertext* self /*none*/, guint offset);
guint AccessibleHypertextInterfaceClassImpl::get_link_at_ (guint offset) noexcept
{
  if (!get_struct_()->get_link_at) { g_critical ("no method in class struct"); return {}; }
  typedef guint (*call_wrap_t) (::GtkAccessibleHypertext* self, guint offset);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->get_link_at;
  auto offset_to_c = offset;
  auto _temp_ret = call_wrap_v ((::GtkAccessibleHypertext*) (gobj_()), (guint) (offset_to_c));
  return _temp_ret;
}

// unsigned int AccessibleHypertext::get_n_links (GtkAccessibleHypertext* self /*none*/);
// guint AccessibleHypertext::get_n_links (::GtkAccessibleHypertext* self /*none*/);
guint AccessibleHypertextInterfaceClassImpl::get_n_links_ () noexcept
{
  if (!get_struct_()->get_n_links) { g_critical ("no method in class struct"); return {}; }
  typedef guint (*call_wrap_t) (::GtkAccessibleHypertext* self);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->get_n_links;
  auto _temp_ret = call_wrap_v ((::GtkAccessibleHypertext*) (gobj_()));
  return _temp_ret;
}

} // namespace internal

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
