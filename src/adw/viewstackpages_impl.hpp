// AUTO-GENERATED

#ifndef _GI_ADW_VIEWSTACKPAGES_IMPL_HPP_
#define _GI_ADW_VIEWSTACKPAGES_IMPL_HPP_

namespace gi {

namespace repository {

namespace Adw {

namespace base {

Gio::ListModel ViewStackPagesBase::interface_ (gi::interface_tag<Gio::ListModel>)
{ return gi::wrap ((Gio::ListModel::BaseObjectType*) gobj_copy_(), gi::transfer_full); }

ViewStackPagesBase::operator Gio::ListModel ()
{ return interface_ (gi::interface_tag<Gio::ListModel>()); }

Gtk::SectionModel ViewStackPagesBase::interface_ (gi::interface_tag<Gtk::SectionModel>)
{ return gi::wrap ((Gtk::SectionModel::BaseObjectType*) gobj_copy_(), gi::transfer_full); }

ViewStackPagesBase::operator Gtk::SectionModel ()
{ return interface_ (gi::interface_tag<Gtk::SectionModel>()); }

Gtk::SelectionModel ViewStackPagesBase::interface_ (gi::interface_tag<Gtk::SelectionModel>)
{ return gi::wrap ((Gtk::SelectionModel::BaseObjectType*) gobj_copy_(), gi::transfer_full); }

ViewStackPagesBase::operator Gtk::SelectionModel ()
{ return interface_ (gi::interface_tag<Gtk::SelectionModel>()); }

// AdwViewStackPage* /*none,nullable*/ adw_view_stack_pages_get_selected_page (AdwViewStackPages* self /*none*/);
// ::AdwViewStackPage* /*none,nullable*/ adw_view_stack_pages_get_selected_page (::AdwViewStackPages* self /*none*/);
Adw::ViewStackPage base::ViewStackPagesBase::get_selected_page () noexcept
{
  typedef ::AdwViewStackPage* (*call_wrap_t) (::AdwViewStackPages* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_view_stack_pages_get_selected_page;
  auto _temp_ret = call_wrap_v ((::AdwViewStackPages*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// void adw_view_stack_pages_set_selected_page (AdwViewStackPages* self /*none*/, AdwViewStackPage* page /*none*/);
// void adw_view_stack_pages_set_selected_page (::AdwViewStackPages* self /*none*/, ::AdwViewStackPage* page /*none*/);
void base::ViewStackPagesBase::set_selected_page (Adw::ViewStackPage page) noexcept
{
  typedef void (*call_wrap_t) (::AdwViewStackPages* self, ::AdwViewStackPage* page);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_view_stack_pages_set_selected_page;
  auto page_to_c = gi::unwrap (page, gi::transfer_none);
  call_wrap_v ((::AdwViewStackPages*) (gobj_()), (::AdwViewStackPage*) (page_to_c));
}


} // namespace base

} // namespace Adw

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<adw/viewstackpages_extra_def_impl.hpp>)
#include <adw/viewstackpages_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<adw/viewstackpages_extra_impl.hpp>)
#include <adw/viewstackpages_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Adw {

namespace impl {

namespace internal {

void ViewStackPagesClassDef::class_init (gpointer class_struct, gpointer factory)
{
  ::AdwViewStackPagesClass *methods = (::AdwViewStackPagesClass *) class_struct;
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
