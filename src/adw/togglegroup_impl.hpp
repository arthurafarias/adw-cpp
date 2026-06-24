// AUTO-GENERATED

#ifndef _GI_ADW_TOGGLEGROUP_IMPL_HPP_
#define _GI_ADW_TOGGLEGROUP_IMPL_HPP_

namespace gi {

namespace repository {

namespace Adw {

namespace base {

Gtk::Orientable ToggleGroupBase::interface_ (gi::interface_tag<Gtk::Orientable>)
{ return gi::wrap ((Gtk::Orientable::BaseObjectType*) gobj_copy_(), gi::transfer_full); }

ToggleGroupBase::operator Gtk::Orientable ()
{ return interface_ (gi::interface_tag<Gtk::Orientable>()); }

// GtkWidget* /*none*/ adw_toggle_group_new ();
// ::AdwToggleGroup* /*none*/ adw_toggle_group_new ();
Adw::ToggleGroup base::ToggleGroupBase::new_ () noexcept
{
  typedef ::AdwToggleGroup* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) adw_toggle_group_new;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// void adw_toggle_group_add (AdwToggleGroup* self /*none*/, AdwToggle* toggle /*full*/);
// void adw_toggle_group_add (::AdwToggleGroup* self /*none*/, ::AdwToggle* toggle /*full*/);
void base::ToggleGroupBase::add (Adw::Toggle toggle) noexcept
{
  typedef void (*call_wrap_t) (::AdwToggleGroup* self, ::AdwToggle* toggle);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_toggle_group_add;
  auto toggle_to_c = gi::unwrap (toggle, gi::transfer_full);
  call_wrap_v ((::AdwToggleGroup*) (gobj_()), (::AdwToggle*) (toggle_to_c));
}

// guint adw_toggle_group_get_active (AdwToggleGroup* self /*none*/);
// guint adw_toggle_group_get_active (::AdwToggleGroup* self /*none*/);
guint base::ToggleGroupBase::get_active () noexcept
{
  typedef guint (*call_wrap_t) (::AdwToggleGroup* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_toggle_group_get_active;
  auto _temp_ret = call_wrap_v ((::AdwToggleGroup*) (gobj_()));
  return _temp_ret;
}

// const char* /*none,nullable*/ adw_toggle_group_get_active_name (AdwToggleGroup* self /*none*/);
// const char* /*none,nullable*/ adw_toggle_group_get_active_name (::AdwToggleGroup* self /*none*/);
gi::cstring_v base::ToggleGroupBase::get_active_name () noexcept
{
  typedef const char* (*call_wrap_t) (::AdwToggleGroup* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_toggle_group_get_active_name;
  auto _temp_ret = call_wrap_v ((::AdwToggleGroup*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// gboolean adw_toggle_group_get_can_shrink (AdwToggleGroup* self /*none*/);
// gboolean adw_toggle_group_get_can_shrink (::AdwToggleGroup* self /*none*/);
bool base::ToggleGroupBase::get_can_shrink () noexcept
{
  typedef gboolean (*call_wrap_t) (::AdwToggleGroup* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_toggle_group_get_can_shrink;
  auto _temp_ret = call_wrap_v ((::AdwToggleGroup*) (gobj_()));
  return _temp_ret;
}

// gboolean adw_toggle_group_get_homogeneous (AdwToggleGroup* self /*none*/);
// gboolean adw_toggle_group_get_homogeneous (::AdwToggleGroup* self /*none*/);
bool base::ToggleGroupBase::get_homogeneous () noexcept
{
  typedef gboolean (*call_wrap_t) (::AdwToggleGroup* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_toggle_group_get_homogeneous;
  auto _temp_ret = call_wrap_v ((::AdwToggleGroup*) (gobj_()));
  return _temp_ret;
}

// guint adw_toggle_group_get_n_toggles (AdwToggleGroup* self /*none*/);
// guint adw_toggle_group_get_n_toggles (::AdwToggleGroup* self /*none*/);
guint base::ToggleGroupBase::get_n_toggles () noexcept
{
  typedef guint (*call_wrap_t) (::AdwToggleGroup* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_toggle_group_get_n_toggles;
  auto _temp_ret = call_wrap_v ((::AdwToggleGroup*) (gobj_()));
  return _temp_ret;
}

// AdwToggle* /*none,nullable*/ adw_toggle_group_get_toggle (AdwToggleGroup* self /*none*/, guint index);
// ::AdwToggle* /*none,nullable*/ adw_toggle_group_get_toggle (::AdwToggleGroup* self /*none*/, guint index);
Adw::Toggle base::ToggleGroupBase::get_toggle (guint index) noexcept
{
  typedef ::AdwToggle* (*call_wrap_t) (::AdwToggleGroup* self, guint index);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_toggle_group_get_toggle;
  auto index_to_c = index;
  auto _temp_ret = call_wrap_v ((::AdwToggleGroup*) (gobj_()), (guint) (index_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// AdwToggle* /*none,nullable*/ adw_toggle_group_get_toggle_by_name (AdwToggleGroup* self /*none*/, const char* name /*none*/);
// ::AdwToggle* /*none,nullable*/ adw_toggle_group_get_toggle_by_name (::AdwToggleGroup* self /*none*/, const char* name /*none*/);
Adw::Toggle base::ToggleGroupBase::get_toggle_by_name (const gi::cstring_v name) noexcept
{
  typedef ::AdwToggle* (*call_wrap_t) (::AdwToggleGroup* self, const char* name);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_toggle_group_get_toggle_by_name;
  auto name_to_c = gi::unwrap (name, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::AdwToggleGroup*) (gobj_()), (const char*) (name_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// GtkSelectionModel* /*full*/ adw_toggle_group_get_toggles (AdwToggleGroup* self /*none*/);
// ::GtkSelectionModel* /*full*/ adw_toggle_group_get_toggles (::AdwToggleGroup* self /*none*/);
Gtk::SelectionModel base::ToggleGroupBase::get_toggles () noexcept
{
  typedef ::GtkSelectionModel* (*call_wrap_t) (::AdwToggleGroup* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_toggle_group_get_toggles;
  auto _temp_ret = call_wrap_v ((::AdwToggleGroup*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// void adw_toggle_group_remove (AdwToggleGroup* self /*none*/, AdwToggle* toggle /*none*/);
// void adw_toggle_group_remove (::AdwToggleGroup* self /*none*/, ::AdwToggle* toggle /*none*/);
void base::ToggleGroupBase::remove (Adw::Toggle toggle) noexcept
{
  typedef void (*call_wrap_t) (::AdwToggleGroup* self, ::AdwToggle* toggle);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_toggle_group_remove;
  auto toggle_to_c = gi::unwrap (toggle, gi::transfer_none);
  call_wrap_v ((::AdwToggleGroup*) (gobj_()), (::AdwToggle*) (toggle_to_c));
}

// void adw_toggle_group_remove_all (AdwToggleGroup* self /*none*/);
// void adw_toggle_group_remove_all (::AdwToggleGroup* self /*none*/);
void base::ToggleGroupBase::remove_all () noexcept
{
  typedef void (*call_wrap_t) (::AdwToggleGroup* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_toggle_group_remove_all;
  call_wrap_v ((::AdwToggleGroup*) (gobj_()));
}

// void adw_toggle_group_set_active (AdwToggleGroup* self /*none*/, guint active);
// void adw_toggle_group_set_active (::AdwToggleGroup* self /*none*/, guint active);
void base::ToggleGroupBase::set_active (guint active) noexcept
{
  typedef void (*call_wrap_t) (::AdwToggleGroup* self, guint active);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_toggle_group_set_active;
  auto active_to_c = active;
  call_wrap_v ((::AdwToggleGroup*) (gobj_()), (guint) (active_to_c));
}

// void adw_toggle_group_set_active_name (AdwToggleGroup* self /*none*/, const char* name /*none,nullable*/);
// void adw_toggle_group_set_active_name (::AdwToggleGroup* self /*none*/, const char* name /*none,nullable*/);
void base::ToggleGroupBase::set_active_name (const gi::cstring_v name) noexcept
{
  typedef void (*call_wrap_t) (::AdwToggleGroup* self, const char* name);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_toggle_group_set_active_name;
  auto name_to_c = gi::unwrap (name, gi::transfer_none);
  call_wrap_v ((::AdwToggleGroup*) (gobj_()), (const char*) (name_to_c));
}
void base::ToggleGroupBase::set_active_name () noexcept
{
  typedef void (*call_wrap_t) (::AdwToggleGroup* self, const char* name);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_toggle_group_set_active_name;
  auto name_to_c = nullptr;
  call_wrap_v ((::AdwToggleGroup*) (gobj_()), (const char*) (name_to_c));
}

// void adw_toggle_group_set_can_shrink (AdwToggleGroup* self /*none*/, gboolean can_shrink);
// void adw_toggle_group_set_can_shrink (::AdwToggleGroup* self /*none*/, gboolean can_shrink);
void base::ToggleGroupBase::set_can_shrink (gboolean can_shrink) noexcept
{
  typedef void (*call_wrap_t) (::AdwToggleGroup* self, gboolean can_shrink);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_toggle_group_set_can_shrink;
  auto can_shrink_to_c = can_shrink;
  call_wrap_v ((::AdwToggleGroup*) (gobj_()), (gboolean) (can_shrink_to_c));
}

// void adw_toggle_group_set_homogeneous (AdwToggleGroup* self /*none*/, gboolean homogeneous);
// void adw_toggle_group_set_homogeneous (::AdwToggleGroup* self /*none*/, gboolean homogeneous);
void base::ToggleGroupBase::set_homogeneous (gboolean homogeneous) noexcept
{
  typedef void (*call_wrap_t) (::AdwToggleGroup* self, gboolean homogeneous);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_toggle_group_set_homogeneous;
  auto homogeneous_to_c = homogeneous;
  call_wrap_v ((::AdwToggleGroup*) (gobj_()), (gboolean) (homogeneous_to_c));
}


} // namespace base

} // namespace Adw

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<adw/togglegroup_extra_def_impl.hpp>)
#include <adw/togglegroup_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<adw/togglegroup_extra_impl.hpp>)
#include <adw/togglegroup_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Adw {

namespace impl {

namespace internal {

void ToggleGroupClassDef::class_init (gpointer class_struct, gpointer factory)
{
  ::AdwToggleGroupClass *methods = (::AdwToggleGroupClass *) class_struct;
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
