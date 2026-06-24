// AUTO-GENERATED

#ifndef _GI_ADW_VIEWSTACK_IMPL_HPP_
#define _GI_ADW_VIEWSTACK_IMPL_HPP_

namespace gi {

namespace repository {

namespace Adw {

namespace base {

// GtkWidget* /*none*/ adw_view_stack_new ();
// ::AdwViewStack* /*none*/ adw_view_stack_new ();
Adw::ViewStack base::ViewStackBase::new_ () noexcept
{
  typedef ::AdwViewStack* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) adw_view_stack_new;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// AdwViewStackPage* /*none*/ adw_view_stack_add (AdwViewStack* self /*none*/, GtkWidget* child /*none*/);
// ::AdwViewStackPage* /*none*/ adw_view_stack_add (::AdwViewStack* self /*none*/, ::GtkWidget* child /*none*/);
Adw::ViewStackPage base::ViewStackBase::add (Gtk::Widget child) noexcept
{
  typedef ::AdwViewStackPage* (*call_wrap_t) (::AdwViewStack* self, ::GtkWidget* child);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_view_stack_add;
  auto child_to_c = gi::unwrap (child, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::AdwViewStack*) (gobj_()), (::GtkWidget*) (child_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// AdwViewStackPage* /*none*/ adw_view_stack_add_named (AdwViewStack* self /*none*/, GtkWidget* child /*none*/, const char* name /*none,nullable*/);
// ::AdwViewStackPage* /*none*/ adw_view_stack_add_named (::AdwViewStack* self /*none*/, ::GtkWidget* child /*none*/, const char* name /*none,nullable*/);
Adw::ViewStackPage base::ViewStackBase::add_named (Gtk::Widget child, const gi::cstring_v name) noexcept
{
  typedef ::AdwViewStackPage* (*call_wrap_t) (::AdwViewStack* self, ::GtkWidget* child, const char* name);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_view_stack_add_named;
  auto name_to_c = gi::unwrap (name, gi::transfer_none);
  auto child_to_c = gi::unwrap (child, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::AdwViewStack*) (gobj_()), (::GtkWidget*) (child_to_c), (const char*) (name_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none);
}
Adw::ViewStackPage base::ViewStackBase::add_named (Gtk::Widget child) noexcept
{
  typedef ::AdwViewStackPage* (*call_wrap_t) (::AdwViewStack* self, ::GtkWidget* child, const char* name);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_view_stack_add_named;
  auto name_to_c = nullptr;
  auto child_to_c = gi::unwrap (child, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::AdwViewStack*) (gobj_()), (::GtkWidget*) (child_to_c), (const char*) (name_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// AdwViewStackPage* /*none*/ adw_view_stack_add_titled (AdwViewStack* self /*none*/, GtkWidget* child /*none*/, const char* name /*none,nullable*/, const char* title /*none*/);
// ::AdwViewStackPage* /*none*/ adw_view_stack_add_titled (::AdwViewStack* self /*none*/, ::GtkWidget* child /*none*/, const char* name /*none,nullable*/, const char* title /*none*/);
Adw::ViewStackPage base::ViewStackBase::add_titled (Gtk::Widget child, const gi::cstring_v name, const gi::cstring_v title) noexcept
{
  typedef ::AdwViewStackPage* (*call_wrap_t) (::AdwViewStack* self, ::GtkWidget* child, const char* name, const char* title);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_view_stack_add_titled;
  auto title_to_c = gi::unwrap (title, gi::transfer_none);
  auto name_to_c = gi::unwrap (name, gi::transfer_none);
  auto child_to_c = gi::unwrap (child, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::AdwViewStack*) (gobj_()), (::GtkWidget*) (child_to_c), (const char*) (name_to_c), (const char*) (title_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none);
}
Adw::ViewStackPage base::ViewStackBase::add_titled (Gtk::Widget child, const gi::cstring_v title) noexcept
{
  typedef ::AdwViewStackPage* (*call_wrap_t) (::AdwViewStack* self, ::GtkWidget* child, const char* name, const char* title);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_view_stack_add_titled;
  auto title_to_c = gi::unwrap (title, gi::transfer_none);
  auto name_to_c = nullptr;
  auto child_to_c = gi::unwrap (child, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::AdwViewStack*) (gobj_()), (::GtkWidget*) (child_to_c), (const char*) (name_to_c), (const char*) (title_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// AdwViewStackPage* /*none*/ adw_view_stack_add_titled_with_icon (AdwViewStack* self /*none*/, GtkWidget* child /*none*/, const char* name /*none,nullable*/, const char* title /*none*/, const char* icon_name /*none*/);
// ::AdwViewStackPage* /*none*/ adw_view_stack_add_titled_with_icon (::AdwViewStack* self /*none*/, ::GtkWidget* child /*none*/, const char* name /*none,nullable*/, const char* title /*none*/, const char* icon_name /*none*/);
Adw::ViewStackPage base::ViewStackBase::add_titled_with_icon (Gtk::Widget child, const gi::cstring_v name, const gi::cstring_v title, const gi::cstring_v icon_name) noexcept
{
  typedef ::AdwViewStackPage* (*call_wrap_t) (::AdwViewStack* self, ::GtkWidget* child, const char* name, const char* title, const char* icon_name);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_view_stack_add_titled_with_icon;
  auto icon_name_to_c = gi::unwrap (icon_name, gi::transfer_none);
  auto title_to_c = gi::unwrap (title, gi::transfer_none);
  auto name_to_c = gi::unwrap (name, gi::transfer_none);
  auto child_to_c = gi::unwrap (child, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::AdwViewStack*) (gobj_()), (::GtkWidget*) (child_to_c), (const char*) (name_to_c), (const char*) (title_to_c), (const char*) (icon_name_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none);
}
Adw::ViewStackPage base::ViewStackBase::add_titled_with_icon (Gtk::Widget child, const gi::cstring_v title, const gi::cstring_v icon_name) noexcept
{
  typedef ::AdwViewStackPage* (*call_wrap_t) (::AdwViewStack* self, ::GtkWidget* child, const char* name, const char* title, const char* icon_name);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_view_stack_add_titled_with_icon;
  auto icon_name_to_c = gi::unwrap (icon_name, gi::transfer_none);
  auto title_to_c = gi::unwrap (title, gi::transfer_none);
  auto name_to_c = nullptr;
  auto child_to_c = gi::unwrap (child, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::AdwViewStack*) (gobj_()), (::GtkWidget*) (child_to_c), (const char*) (name_to_c), (const char*) (title_to_c), (const char*) (icon_name_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// GtkWidget* /*none,nullable*/ adw_view_stack_get_child_by_name (AdwViewStack* self /*none*/, const char* name /*none*/);
// ::GtkWidget* /*none,nullable*/ adw_view_stack_get_child_by_name (::AdwViewStack* self /*none*/, const char* name /*none*/);
Gtk::Widget base::ViewStackBase::get_child_by_name (const gi::cstring_v name) noexcept
{
  typedef ::GtkWidget* (*call_wrap_t) (::AdwViewStack* self, const char* name);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_view_stack_get_child_by_name;
  auto name_to_c = gi::unwrap (name, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::AdwViewStack*) (gobj_()), (const char*) (name_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// gboolean adw_view_stack_get_enable_transitions (AdwViewStack* self /*none*/);
// gboolean adw_view_stack_get_enable_transitions (::AdwViewStack* self /*none*/);
bool base::ViewStackBase::get_enable_transitions () noexcept
{
  typedef gboolean (*call_wrap_t) (::AdwViewStack* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_view_stack_get_enable_transitions;
  auto _temp_ret = call_wrap_v ((::AdwViewStack*) (gobj_()));
  return _temp_ret;
}

// gboolean adw_view_stack_get_hhomogeneous (AdwViewStack* self /*none*/);
// gboolean adw_view_stack_get_hhomogeneous (::AdwViewStack* self /*none*/);
bool base::ViewStackBase::get_hhomogeneous () noexcept
{
  typedef gboolean (*call_wrap_t) (::AdwViewStack* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_view_stack_get_hhomogeneous;
  auto _temp_ret = call_wrap_v ((::AdwViewStack*) (gobj_()));
  return _temp_ret;
}

// AdwViewStackPage* /*none*/ adw_view_stack_get_page (AdwViewStack* self /*none*/, GtkWidget* child /*none*/);
// ::AdwViewStackPage* /*none*/ adw_view_stack_get_page (::AdwViewStack* self /*none*/, ::GtkWidget* child /*none*/);
Adw::ViewStackPage base::ViewStackBase::get_page (Gtk::Widget child) noexcept
{
  typedef ::AdwViewStackPage* (*call_wrap_t) (::AdwViewStack* self, ::GtkWidget* child);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_view_stack_get_page;
  auto child_to_c = gi::unwrap (child, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::AdwViewStack*) (gobj_()), (::GtkWidget*) (child_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// GtkSelectionModel* /*full*/ adw_view_stack_get_pages (AdwViewStack* self /*none*/);
// ::GtkSelectionModel* /*full*/ adw_view_stack_get_pages (::AdwViewStack* self /*none*/);
Gtk::SelectionModel base::ViewStackBase::get_pages () noexcept
{
  typedef ::GtkSelectionModel* (*call_wrap_t) (::AdwViewStack* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_view_stack_get_pages;
  auto _temp_ret = call_wrap_v ((::AdwViewStack*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// guint adw_view_stack_get_transition_duration (AdwViewStack* self /*none*/);
// guint adw_view_stack_get_transition_duration (::AdwViewStack* self /*none*/);
guint base::ViewStackBase::get_transition_duration () noexcept
{
  typedef guint (*call_wrap_t) (::AdwViewStack* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_view_stack_get_transition_duration;
  auto _temp_ret = call_wrap_v ((::AdwViewStack*) (gobj_()));
  return _temp_ret;
}

// gboolean adw_view_stack_get_transition_running (AdwViewStack* self /*none*/);
// gboolean adw_view_stack_get_transition_running (::AdwViewStack* self /*none*/);
bool base::ViewStackBase::get_transition_running () noexcept
{
  typedef gboolean (*call_wrap_t) (::AdwViewStack* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_view_stack_get_transition_running;
  auto _temp_ret = call_wrap_v ((::AdwViewStack*) (gobj_()));
  return _temp_ret;
}

// gboolean adw_view_stack_get_vhomogeneous (AdwViewStack* self /*none*/);
// gboolean adw_view_stack_get_vhomogeneous (::AdwViewStack* self /*none*/);
bool base::ViewStackBase::get_vhomogeneous () noexcept
{
  typedef gboolean (*call_wrap_t) (::AdwViewStack* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_view_stack_get_vhomogeneous;
  auto _temp_ret = call_wrap_v ((::AdwViewStack*) (gobj_()));
  return _temp_ret;
}

// GtkWidget* /*none,nullable*/ adw_view_stack_get_visible_child (AdwViewStack* self /*none*/);
// ::GtkWidget* /*none,nullable*/ adw_view_stack_get_visible_child (::AdwViewStack* self /*none*/);
Gtk::Widget base::ViewStackBase::get_visible_child () noexcept
{
  typedef ::GtkWidget* (*call_wrap_t) (::AdwViewStack* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_view_stack_get_visible_child;
  auto _temp_ret = call_wrap_v ((::AdwViewStack*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// const char* /*none,nullable*/ adw_view_stack_get_visible_child_name (AdwViewStack* self /*none*/);
// const char* /*none,nullable*/ adw_view_stack_get_visible_child_name (::AdwViewStack* self /*none*/);
gi::cstring_v base::ViewStackBase::get_visible_child_name () noexcept
{
  typedef const char* (*call_wrap_t) (::AdwViewStack* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_view_stack_get_visible_child_name;
  auto _temp_ret = call_wrap_v ((::AdwViewStack*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// void adw_view_stack_remove (AdwViewStack* self /*none*/, GtkWidget* child /*none*/);
// void adw_view_stack_remove (::AdwViewStack* self /*none*/, ::GtkWidget* child /*none*/);
void base::ViewStackBase::remove (Gtk::Widget child) noexcept
{
  typedef void (*call_wrap_t) (::AdwViewStack* self, ::GtkWidget* child);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_view_stack_remove;
  auto child_to_c = gi::unwrap (child, gi::transfer_none);
  call_wrap_v ((::AdwViewStack*) (gobj_()), (::GtkWidget*) (child_to_c));
}

// void adw_view_stack_set_enable_transitions (AdwViewStack* self /*none*/, gboolean enable_transitions);
// void adw_view_stack_set_enable_transitions (::AdwViewStack* self /*none*/, gboolean enable_transitions);
void base::ViewStackBase::set_enable_transitions (gboolean enable_transitions) noexcept
{
  typedef void (*call_wrap_t) (::AdwViewStack* self, gboolean enable_transitions);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_view_stack_set_enable_transitions;
  auto enable_transitions_to_c = enable_transitions;
  call_wrap_v ((::AdwViewStack*) (gobj_()), (gboolean) (enable_transitions_to_c));
}

// void adw_view_stack_set_hhomogeneous (AdwViewStack* self /*none*/, gboolean hhomogeneous);
// void adw_view_stack_set_hhomogeneous (::AdwViewStack* self /*none*/, gboolean hhomogeneous);
void base::ViewStackBase::set_hhomogeneous (gboolean hhomogeneous) noexcept
{
  typedef void (*call_wrap_t) (::AdwViewStack* self, gboolean hhomogeneous);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_view_stack_set_hhomogeneous;
  auto hhomogeneous_to_c = hhomogeneous;
  call_wrap_v ((::AdwViewStack*) (gobj_()), (gboolean) (hhomogeneous_to_c));
}

// void adw_view_stack_set_transition_duration (AdwViewStack* self /*none*/, guint duration);
// void adw_view_stack_set_transition_duration (::AdwViewStack* self /*none*/, guint duration);
void base::ViewStackBase::set_transition_duration (guint duration) noexcept
{
  typedef void (*call_wrap_t) (::AdwViewStack* self, guint duration);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_view_stack_set_transition_duration;
  auto duration_to_c = duration;
  call_wrap_v ((::AdwViewStack*) (gobj_()), (guint) (duration_to_c));
}

// void adw_view_stack_set_vhomogeneous (AdwViewStack* self /*none*/, gboolean vhomogeneous);
// void adw_view_stack_set_vhomogeneous (::AdwViewStack* self /*none*/, gboolean vhomogeneous);
void base::ViewStackBase::set_vhomogeneous (gboolean vhomogeneous) noexcept
{
  typedef void (*call_wrap_t) (::AdwViewStack* self, gboolean vhomogeneous);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_view_stack_set_vhomogeneous;
  auto vhomogeneous_to_c = vhomogeneous;
  call_wrap_v ((::AdwViewStack*) (gobj_()), (gboolean) (vhomogeneous_to_c));
}

// void adw_view_stack_set_visible_child (AdwViewStack* self /*none*/, GtkWidget* child /*none*/);
// void adw_view_stack_set_visible_child (::AdwViewStack* self /*none*/, ::GtkWidget* child /*none*/);
void base::ViewStackBase::set_visible_child (Gtk::Widget child) noexcept
{
  typedef void (*call_wrap_t) (::AdwViewStack* self, ::GtkWidget* child);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_view_stack_set_visible_child;
  auto child_to_c = gi::unwrap (child, gi::transfer_none);
  call_wrap_v ((::AdwViewStack*) (gobj_()), (::GtkWidget*) (child_to_c));
}

// void adw_view_stack_set_visible_child_name (AdwViewStack* self /*none*/, const char* name /*none*/);
// void adw_view_stack_set_visible_child_name (::AdwViewStack* self /*none*/, const char* name /*none*/);
void base::ViewStackBase::set_visible_child_name (const gi::cstring_v name) noexcept
{
  typedef void (*call_wrap_t) (::AdwViewStack* self, const char* name);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_view_stack_set_visible_child_name;
  auto name_to_c = gi::unwrap (name, gi::transfer_none);
  call_wrap_v ((::AdwViewStack*) (gobj_()), (const char*) (name_to_c));
}


} // namespace base

} // namespace Adw

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<adw/viewstack_extra_def_impl.hpp>)
#include <adw/viewstack_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<adw/viewstack_extra_impl.hpp>)
#include <adw/viewstack_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Adw {

namespace impl {

namespace internal {

void ViewStackClassDef::class_init (gpointer class_struct, gpointer factory)
{
  ::AdwViewStackClass *methods = (::AdwViewStackClass *) class_struct;
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
