// AUTO-GENERATED

#ifndef _GI_ADW_SIDEBARSECTION_IMPL_HPP_
#define _GI_ADW_SIDEBARSECTION_IMPL_HPP_

namespace gi {

namespace repository {

namespace Adw {

namespace base {

Gtk::Buildable SidebarSectionBase::interface_ (gi::interface_tag<Gtk::Buildable>)
{ return gi::wrap ((Gtk::Buildable::BaseObjectType*) gobj_copy_(), gi::transfer_full); }

SidebarSectionBase::operator Gtk::Buildable ()
{ return interface_ (gi::interface_tag<Gtk::Buildable>()); }

// AdwSidebarSection* /*full*/ adw_sidebar_section_new ();
// ::AdwSidebarSection* /*full*/ adw_sidebar_section_new ();
Adw::SidebarSection base::SidebarSectionBase::new_ () noexcept
{
  typedef ::AdwSidebarSection* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) adw_sidebar_section_new;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// void adw_sidebar_section_append (AdwSidebarSection* self /*none*/, AdwSidebarItem* item /*full*/);
// void adw_sidebar_section_append (::AdwSidebarSection* self /*none*/, ::AdwSidebarItem* item /*full*/);
void base::SidebarSectionBase::append (Adw::SidebarItem item) noexcept
{
  typedef void (*call_wrap_t) (::AdwSidebarSection* self, ::AdwSidebarItem* item);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_sidebar_section_append;
  auto item_to_c = gi::unwrap (item, gi::transfer_full);
  call_wrap_v ((::AdwSidebarSection*) (gobj_()), (::AdwSidebarItem*) (item_to_c));
}

// void adw_sidebar_section_bind_model (AdwSidebarSection* self /*none*/, GListModel* model /*none,nullable*/, AdwSidebarSectionCreateItemFunc create_item_func /*none,nullable*/, gpointer user_data, GDestroyNotify user_data_free_func /*none*/);
// void adw_sidebar_section_bind_model (::AdwSidebarSection* self /*none*/, ::GListModel* model /*none,nullable*/, Adw::SidebarSectionCreateItemFunc::cfunction_type create_item_func /*none,nullable*/, void* user_data, GLib::DestroyNotify::cfunction_type user_data_free_func /*none*/);
void base::SidebarSectionBase::bind_model (Gio::ListModel model, Adw::SidebarSectionCreateItemFunc create_item_func) noexcept
{
  typedef void (*call_wrap_t) (::AdwSidebarSection* self, ::GListModel* model, Adw::SidebarSectionCreateItemFunc::cfunction_type create_item_func, void* user_data, GLib::DestroyNotify::cfunction_type user_data_free_func);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_sidebar_section_bind_model;
  auto create_item_func_wrap_ = create_item_func ? unwrap (std::move (create_item_func), gi::scope_notified) : nullptr;
  auto model_to_c = gi::unwrap (model, gi::transfer_none);
  call_wrap_v ((::AdwSidebarSection*) (gobj_()), (::GListModel*) (model_to_c), (Adw::SidebarSectionCreateItemFunc::cfunction_type) (create_item_func_wrap_ ? &create_item_func_wrap_->wrapper : nullptr), (void*) (create_item_func_wrap_), (GLib::DestroyNotify::cfunction_type) (create_item_func_wrap_ ? &create_item_func_wrap_->destroy : nullptr));
}
void base::SidebarSectionBase::bind_model (Adw::SidebarSectionCreateItemFunc create_item_func) noexcept
{
  typedef void (*call_wrap_t) (::AdwSidebarSection* self, ::GListModel* model, Adw::SidebarSectionCreateItemFunc::cfunction_type create_item_func, void* user_data, GLib::DestroyNotify::cfunction_type user_data_free_func);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_sidebar_section_bind_model;
  auto create_item_func_wrap_ = create_item_func ? unwrap (std::move (create_item_func), gi::scope_notified) : nullptr;
  auto model_to_c = nullptr;
  call_wrap_v ((::AdwSidebarSection*) (gobj_()), (::GListModel*) (model_to_c), (Adw::SidebarSectionCreateItemFunc::cfunction_type) (create_item_func_wrap_ ? &create_item_func_wrap_->wrapper : nullptr), (void*) (create_item_func_wrap_), (GLib::DestroyNotify::cfunction_type) (create_item_func_wrap_ ? &create_item_func_wrap_->destroy : nullptr));
}

// AdwSidebarItem* /*none,nullable*/ adw_sidebar_section_get_item (AdwSidebarSection* self /*none*/, guint index);
// ::AdwSidebarItem* /*none,nullable*/ adw_sidebar_section_get_item (::AdwSidebarSection* self /*none*/, guint index);
Adw::SidebarItem base::SidebarSectionBase::get_item (guint index) noexcept
{
  typedef ::AdwSidebarItem* (*call_wrap_t) (::AdwSidebarSection* self, guint index);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_sidebar_section_get_item;
  auto index_to_c = index;
  auto _temp_ret = call_wrap_v ((::AdwSidebarSection*) (gobj_()), (guint) (index_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// GListModel* /*full*/ adw_sidebar_section_get_items (AdwSidebarSection* self /*none*/);
// ::GListModel* /*full*/ adw_sidebar_section_get_items (::AdwSidebarSection* self /*none*/);
Gio::ListModel base::SidebarSectionBase::get_items () noexcept
{
  typedef ::GListModel* (*call_wrap_t) (::AdwSidebarSection* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_sidebar_section_get_items;
  auto _temp_ret = call_wrap_v ((::AdwSidebarSection*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// GMenuModel* /*none,nullable*/ adw_sidebar_section_get_menu_model (AdwSidebarSection* self /*none*/);
// ::GMenuModel* /*none,nullable*/ adw_sidebar_section_get_menu_model (::AdwSidebarSection* self /*none*/);
Gio::MenuModel base::SidebarSectionBase::get_menu_model () noexcept
{
  typedef ::GMenuModel* (*call_wrap_t) (::AdwSidebarSection* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_sidebar_section_get_menu_model;
  auto _temp_ret = call_wrap_v ((::AdwSidebarSection*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// AdwSidebar* /*none,nullable*/ adw_sidebar_section_get_sidebar (AdwSidebarSection* self /*none*/);
// ::AdwSidebar* /*none,nullable*/ adw_sidebar_section_get_sidebar (::AdwSidebarSection* self /*none*/);
Adw::Sidebar base::SidebarSectionBase::get_sidebar () noexcept
{
  typedef ::AdwSidebar* (*call_wrap_t) (::AdwSidebarSection* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_sidebar_section_get_sidebar;
  auto _temp_ret = call_wrap_v ((::AdwSidebarSection*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// const char* /*none,nullable*/ adw_sidebar_section_get_title (AdwSidebarSection* self /*none*/);
// const char* /*none,nullable*/ adw_sidebar_section_get_title (::AdwSidebarSection* self /*none*/);
gi::cstring_v base::SidebarSectionBase::get_title () noexcept
{
  typedef const char* (*call_wrap_t) (::AdwSidebarSection* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_sidebar_section_get_title;
  auto _temp_ret = call_wrap_v ((::AdwSidebarSection*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// void adw_sidebar_section_insert (AdwSidebarSection* self /*none*/, AdwSidebarItem* item /*full*/, int position);
// void adw_sidebar_section_insert (::AdwSidebarSection* self /*none*/, ::AdwSidebarItem* item /*full*/, gint position);
void base::SidebarSectionBase::insert (Adw::SidebarItem item, gint position) noexcept
{
  typedef void (*call_wrap_t) (::AdwSidebarSection* self, ::AdwSidebarItem* item, gint position);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_sidebar_section_insert;
  auto position_to_c = position;
  auto item_to_c = gi::unwrap (item, gi::transfer_full);
  call_wrap_v ((::AdwSidebarSection*) (gobj_()), (::AdwSidebarItem*) (item_to_c), (gint) (position_to_c));
}

// void adw_sidebar_section_prepend (AdwSidebarSection* self /*none*/, AdwSidebarItem* item /*full*/);
// void adw_sidebar_section_prepend (::AdwSidebarSection* self /*none*/, ::AdwSidebarItem* item /*full*/);
void base::SidebarSectionBase::prepend (Adw::SidebarItem item) noexcept
{
  typedef void (*call_wrap_t) (::AdwSidebarSection* self, ::AdwSidebarItem* item);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_sidebar_section_prepend;
  auto item_to_c = gi::unwrap (item, gi::transfer_full);
  call_wrap_v ((::AdwSidebarSection*) (gobj_()), (::AdwSidebarItem*) (item_to_c));
}

// void adw_sidebar_section_remove (AdwSidebarSection* self /*none*/, AdwSidebarItem* item /*none*/);
// void adw_sidebar_section_remove (::AdwSidebarSection* self /*none*/, ::AdwSidebarItem* item /*none*/);
void base::SidebarSectionBase::remove (Adw::SidebarItem item) noexcept
{
  typedef void (*call_wrap_t) (::AdwSidebarSection* self, ::AdwSidebarItem* item);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_sidebar_section_remove;
  auto item_to_c = gi::unwrap (item, gi::transfer_none);
  call_wrap_v ((::AdwSidebarSection*) (gobj_()), (::AdwSidebarItem*) (item_to_c));
}

// void adw_sidebar_section_remove_all (AdwSidebarSection* self /*none*/);
// void adw_sidebar_section_remove_all (::AdwSidebarSection* self /*none*/);
void base::SidebarSectionBase::remove_all () noexcept
{
  typedef void (*call_wrap_t) (::AdwSidebarSection* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_sidebar_section_remove_all;
  call_wrap_v ((::AdwSidebarSection*) (gobj_()));
}

// void adw_sidebar_section_set_menu_model (AdwSidebarSection* self /*none*/, GMenuModel* menu_model /*none,nullable*/);
// void adw_sidebar_section_set_menu_model (::AdwSidebarSection* self /*none*/, ::GMenuModel* menu_model /*none,nullable*/);
void base::SidebarSectionBase::set_menu_model (Gio::MenuModel menu_model) noexcept
{
  typedef void (*call_wrap_t) (::AdwSidebarSection* self, ::GMenuModel* menu_model);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_sidebar_section_set_menu_model;
  auto menu_model_to_c = gi::unwrap (menu_model, gi::transfer_none);
  call_wrap_v ((::AdwSidebarSection*) (gobj_()), (::GMenuModel*) (menu_model_to_c));
}
void base::SidebarSectionBase::set_menu_model () noexcept
{
  typedef void (*call_wrap_t) (::AdwSidebarSection* self, ::GMenuModel* menu_model);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_sidebar_section_set_menu_model;
  auto menu_model_to_c = nullptr;
  call_wrap_v ((::AdwSidebarSection*) (gobj_()), (::GMenuModel*) (menu_model_to_c));
}

// void adw_sidebar_section_set_title (AdwSidebarSection* self /*none*/, const char* title /*none,nullable*/);
// void adw_sidebar_section_set_title (::AdwSidebarSection* self /*none*/, const char* title /*none,nullable*/);
void base::SidebarSectionBase::set_title (const gi::cstring_v title) noexcept
{
  typedef void (*call_wrap_t) (::AdwSidebarSection* self, const char* title);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_sidebar_section_set_title;
  auto title_to_c = gi::unwrap (title, gi::transfer_none);
  call_wrap_v ((::AdwSidebarSection*) (gobj_()), (const char*) (title_to_c));
}
void base::SidebarSectionBase::set_title () noexcept
{
  typedef void (*call_wrap_t) (::AdwSidebarSection* self, const char* title);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_sidebar_section_set_title;
  auto title_to_c = nullptr;
  call_wrap_v ((::AdwSidebarSection*) (gobj_()), (const char*) (title_to_c));
}


} // namespace base

} // namespace Adw

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<adw/sidebarsection_extra_def_impl.hpp>)
#include <adw/sidebarsection_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<adw/sidebarsection_extra_impl.hpp>)
#include <adw/sidebarsection_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Adw {

namespace impl {

namespace internal {

void SidebarSectionClassDef::class_init (gpointer class_struct, gpointer factory)
{
  ::AdwSidebarSectionClass *methods = (::AdwSidebarSectionClass *) class_struct;
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
