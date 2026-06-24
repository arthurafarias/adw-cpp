// AUTO-GENERATED

#ifndef _GI_ADW_LAYOUT_IMPL_HPP_
#define _GI_ADW_LAYOUT_IMPL_HPP_

namespace gi {

namespace repository {

namespace Adw {

namespace base {

Gtk::Buildable LayoutBase::interface_ (gi::interface_tag<Gtk::Buildable>)
{ return gi::wrap ((Gtk::Buildable::BaseObjectType*) gobj_copy_(), gi::transfer_full); }

LayoutBase::operator Gtk::Buildable ()
{ return interface_ (gi::interface_tag<Gtk::Buildable>()); }

// AdwLayout* /*full*/ adw_layout_new (GtkWidget* content /*none*/);
// ::AdwLayout* /*full*/ adw_layout_new (::GtkWidget* content /*none*/);
Adw::Layout base::LayoutBase::new_ (Gtk::Widget content) noexcept
{
  typedef ::AdwLayout* (*call_wrap_t) (::GtkWidget* content);
  call_wrap_t call_wrap_v = (call_wrap_t) adw_layout_new;
  auto content_to_c = gi::unwrap (content, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GtkWidget*) (content_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// GtkWidget* /*none*/ adw_layout_get_content (AdwLayout* self /*none*/);
// ::GtkWidget* /*none*/ adw_layout_get_content (::AdwLayout* self /*none*/);
Gtk::Widget base::LayoutBase::get_content () noexcept
{
  typedef ::GtkWidget* (*call_wrap_t) (::AdwLayout* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_layout_get_content;
  auto _temp_ret = call_wrap_v ((::AdwLayout*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// const char* /*none,nullable*/ adw_layout_get_name (AdwLayout* self /*none*/);
// const char* /*none,nullable*/ adw_layout_get_name (::AdwLayout* self /*none*/);
gi::cstring_v base::LayoutBase::get_name () noexcept
{
  typedef const char* (*call_wrap_t) (::AdwLayout* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_layout_get_name;
  auto _temp_ret = call_wrap_v ((::AdwLayout*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// void adw_layout_set_name (AdwLayout* self /*none*/, const char* name /*none,nullable*/);
// void adw_layout_set_name (::AdwLayout* self /*none*/, const char* name /*none,nullable*/);
void base::LayoutBase::set_name (const gi::cstring_v name) noexcept
{
  typedef void (*call_wrap_t) (::AdwLayout* self, const char* name);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_layout_set_name;
  auto name_to_c = gi::unwrap (name, gi::transfer_none);
  call_wrap_v ((::AdwLayout*) (gobj_()), (const char*) (name_to_c));
}
void base::LayoutBase::set_name () noexcept
{
  typedef void (*call_wrap_t) (::AdwLayout* self, const char* name);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_layout_set_name;
  auto name_to_c = nullptr;
  call_wrap_v ((::AdwLayout*) (gobj_()), (const char*) (name_to_c));
}


} // namespace base

} // namespace Adw

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<adw/layout_extra_def_impl.hpp>)
#include <adw/layout_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<adw/layout_extra_impl.hpp>)
#include <adw/layout_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Adw {

namespace impl {

namespace internal {

void LayoutClassDef::class_init (gpointer class_struct, gpointer factory)
{
  ::AdwLayoutClass *methods = (::AdwLayoutClass *) class_struct;
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
