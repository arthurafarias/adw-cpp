// AUTO-GENERATED

#ifndef _GI_GTK_ACCESSIBLEHYPERLINK_IMPL_HPP_
#define _GI_GTK_ACCESSIBLEHYPERLINK_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

Gtk::Accessible AccessibleHyperlinkBase::interface_ (gi::interface_tag<Gtk::Accessible>)
{ return gi::wrap ((Gtk::Accessible::BaseObjectType*) gobj_copy_(), gi::transfer_full); }

AccessibleHyperlinkBase::operator Gtk::Accessible ()
{ return interface_ (gi::interface_tag<Gtk::Accessible>()); }

// GtkAccessibleHyperlink* /*full*/ gtk_accessible_hyperlink_new (GtkAccessibleHypertext* parent /*none*/, unsigned int index, const char* uri /*none*/, GtkAccessibleTextRange* bounds /*none*/);
// ::GtkAccessibleHyperlink* /*full*/ gtk_accessible_hyperlink_new (::GtkAccessibleHypertext* parent /*none*/, guint index, const char* uri /*none*/, ::GtkAccessibleTextRange* bounds /*none*/);
Gtk::AccessibleHyperlink base::AccessibleHyperlinkBase::new_ (Gtk::AccessibleHypertext parent, guint index, const gi::cstring_v uri, Gtk::AccessibleTextRange_Ref bounds) noexcept
{
  typedef ::GtkAccessibleHyperlink* (*call_wrap_t) (::GtkAccessibleHypertext* parent, guint index, const char* uri, ::GtkAccessibleTextRange* bounds);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_accessible_hyperlink_new;
  auto bounds_to_c = gi::unwrap (bounds, gi::transfer_none);
  auto uri_to_c = gi::unwrap (uri, gi::transfer_none);
  auto index_to_c = index;
  auto parent_to_c = gi::unwrap (parent, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GtkAccessibleHypertext*) (parent_to_c), (guint) (index_to_c), (const char*) (uri_to_c), (::GtkAccessibleTextRange*) (bounds_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// void gtk_accessible_hyperlink_set_platform_state (GtkAccessibleHyperlink* self /*none*/, GtkAccessiblePlatformState state, gboolean enabled);
// void gtk_accessible_hyperlink_set_platform_state (::GtkAccessibleHyperlink* self /*none*/, ::GtkAccessiblePlatformState state, gboolean enabled);
void base::AccessibleHyperlinkBase::set_platform_state (Gtk::AccessiblePlatformState state, gboolean enabled) noexcept
{
  typedef void (*call_wrap_t) (::GtkAccessibleHyperlink* self, ::GtkAccessiblePlatformState state, gboolean enabled);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_accessible_hyperlink_set_platform_state;
  auto enabled_to_c = enabled;
  auto state_to_c = gi::unwrap (state);
  call_wrap_v ((::GtkAccessibleHyperlink*) (gobj_()), (::GtkAccessiblePlatformState) (state_to_c), (gboolean) (enabled_to_c));
}


} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/accessiblehyperlink_extra_def_impl.hpp>)
#include <gtk/accessiblehyperlink_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/accessiblehyperlink_extra_impl.hpp>)
#include <gtk/accessiblehyperlink_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {

void AccessibleHyperlinkClassDef::class_init (gpointer class_struct, gpointer factory)
{
  ::GtkAccessibleHyperlinkClass *methods = (::GtkAccessibleHyperlinkClass *) class_struct;
  (void) methods;

  auto init_data = GI_MEMBER_INIT_DATA(TypeInitData, factory);
  (void) init_data;

}

} // namespace internal

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
