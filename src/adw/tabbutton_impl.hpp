// AUTO-GENERATED

#ifndef _GI_ADW_TABBUTTON_IMPL_HPP_
#define _GI_ADW_TABBUTTON_IMPL_HPP_

namespace gi {

namespace repository {

namespace Adw {

namespace base {

Gtk::Actionable TabButtonBase::interface_ (gi::interface_tag<Gtk::Actionable>)
{ return gi::wrap ((Gtk::Actionable::BaseObjectType*) gobj_copy_(), gi::transfer_full); }

TabButtonBase::operator Gtk::Actionable ()
{ return interface_ (gi::interface_tag<Gtk::Actionable>()); }

// GtkWidget* /*none*/ adw_tab_button_new ();
// ::AdwTabButton* /*none*/ adw_tab_button_new ();
Adw::TabButton base::TabButtonBase::new_ () noexcept
{
  typedef ::AdwTabButton* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) adw_tab_button_new;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// AdwTabView* /*none,nullable*/ adw_tab_button_get_view (AdwTabButton* self /*none*/);
// ::AdwTabView* /*none,nullable*/ adw_tab_button_get_view (::AdwTabButton* self /*none*/);
Adw::TabView base::TabButtonBase::get_view () noexcept
{
  typedef ::AdwTabView* (*call_wrap_t) (::AdwTabButton* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_tab_button_get_view;
  auto _temp_ret = call_wrap_v ((::AdwTabButton*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// void adw_tab_button_set_view (AdwTabButton* self /*none*/, AdwTabView* view /*none,nullable*/);
// void adw_tab_button_set_view (::AdwTabButton* self /*none*/, ::AdwTabView* view /*none,nullable*/);
void base::TabButtonBase::set_view (Adw::TabView view) noexcept
{
  typedef void (*call_wrap_t) (::AdwTabButton* self, ::AdwTabView* view);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_tab_button_set_view;
  auto view_to_c = gi::unwrap (view, gi::transfer_none);
  call_wrap_v ((::AdwTabButton*) (gobj_()), (::AdwTabView*) (view_to_c));
}
void base::TabButtonBase::set_view () noexcept
{
  typedef void (*call_wrap_t) (::AdwTabButton* self, ::AdwTabView* view);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_tab_button_set_view;
  auto view_to_c = nullptr;
  call_wrap_v ((::AdwTabButton*) (gobj_()), (::AdwTabView*) (view_to_c));
}




} // namespace base

} // namespace Adw

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<adw/tabbutton_extra_def_impl.hpp>)
#include <adw/tabbutton_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<adw/tabbutton_extra_impl.hpp>)
#include <adw/tabbutton_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Adw {

namespace impl {

namespace internal {

void TabButtonClassDef::class_init (gpointer class_struct, gpointer factory)
{
  ::AdwTabButtonClass *methods = (::AdwTabButtonClass *) class_struct;
  (void) methods;

  auto init_data = GI_MEMBER_INIT_DATA(TypeInitData, factory);
  (void) init_data;

}

} // namespace internal

} // namespace impl

} // namespace Adw

} // namespace repository

} // namespace gi

#endif
