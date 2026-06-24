// AUTO-GENERATED

#ifndef _GI_GTK_GRAPHICSOFFLOAD_IMPL_HPP_
#define _GI_GTK_GRAPHICSOFFLOAD_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

// GtkWidget* /*none*/ gtk_graphics_offload_new (GtkWidget* child /*none,nullable*/);
// ::GtkGraphicsOffload* /*none*/ gtk_graphics_offload_new (::GtkWidget* child /*none,nullable*/);
Gtk::GraphicsOffload base::GraphicsOffloadBase::new_ (Gtk::Widget child) noexcept
{
  typedef ::GtkGraphicsOffload* (*call_wrap_t) (::GtkWidget* child);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_graphics_offload_new;
  auto child_to_c = gi::unwrap (child, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GtkWidget*) (child_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none);
}
Gtk::GraphicsOffload base::GraphicsOffloadBase::new_ () noexcept
{
  typedef ::GtkGraphicsOffload* (*call_wrap_t) (::GtkWidget* child);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_graphics_offload_new;
  auto child_to_c = nullptr;
  auto _temp_ret = call_wrap_v ((::GtkWidget*) (child_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// gboolean gtk_graphics_offload_get_black_background (GtkGraphicsOffload* self /*none*/);
// gboolean gtk_graphics_offload_get_black_background (::GtkGraphicsOffload* self /*none*/);
bool base::GraphicsOffloadBase::get_black_background () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkGraphicsOffload* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_graphics_offload_get_black_background;
  auto _temp_ret = call_wrap_v ((::GtkGraphicsOffload*) (gobj_()));
  return _temp_ret;
}

// GtkWidget* /*none,nullable*/ gtk_graphics_offload_get_child (GtkGraphicsOffload* self /*none*/);
// ::GtkWidget* /*none,nullable*/ gtk_graphics_offload_get_child (::GtkGraphicsOffload* self /*none*/);
Gtk::Widget base::GraphicsOffloadBase::get_child () noexcept
{
  typedef ::GtkWidget* (*call_wrap_t) (::GtkGraphicsOffload* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_graphics_offload_get_child;
  auto _temp_ret = call_wrap_v ((::GtkGraphicsOffload*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// GtkGraphicsOffloadEnabled gtk_graphics_offload_get_enabled (GtkGraphicsOffload* self /*none*/);
// ::GtkGraphicsOffloadEnabled gtk_graphics_offload_get_enabled (::GtkGraphicsOffload* self /*none*/);
Gtk::GraphicsOffloadEnabled base::GraphicsOffloadBase::get_enabled () noexcept
{
  typedef ::GtkGraphicsOffloadEnabled (*call_wrap_t) (::GtkGraphicsOffload* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_graphics_offload_get_enabled;
  auto _temp_ret = call_wrap_v ((::GtkGraphicsOffload*) (gobj_()));
  return gi::wrap (_temp_ret);
}

// void gtk_graphics_offload_set_black_background (GtkGraphicsOffload* self /*none*/, gboolean value);
// void gtk_graphics_offload_set_black_background (::GtkGraphicsOffload* self /*none*/, gboolean value);
void base::GraphicsOffloadBase::set_black_background (gboolean value) noexcept
{
  typedef void (*call_wrap_t) (::GtkGraphicsOffload* self, gboolean value);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_graphics_offload_set_black_background;
  auto value_to_c = value;
  call_wrap_v ((::GtkGraphicsOffload*) (gobj_()), (gboolean) (value_to_c));
}

// void gtk_graphics_offload_set_child (GtkGraphicsOffload* self /*none*/, GtkWidget* child /*none,nullable*/);
// void gtk_graphics_offload_set_child (::GtkGraphicsOffload* self /*none*/, ::GtkWidget* child /*none,nullable*/);
void base::GraphicsOffloadBase::set_child (Gtk::Widget child) noexcept
{
  typedef void (*call_wrap_t) (::GtkGraphicsOffload* self, ::GtkWidget* child);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_graphics_offload_set_child;
  auto child_to_c = gi::unwrap (child, gi::transfer_none);
  call_wrap_v ((::GtkGraphicsOffload*) (gobj_()), (::GtkWidget*) (child_to_c));
}
void base::GraphicsOffloadBase::set_child () noexcept
{
  typedef void (*call_wrap_t) (::GtkGraphicsOffload* self, ::GtkWidget* child);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_graphics_offload_set_child;
  auto child_to_c = nullptr;
  call_wrap_v ((::GtkGraphicsOffload*) (gobj_()), (::GtkWidget*) (child_to_c));
}

// void gtk_graphics_offload_set_enabled (GtkGraphicsOffload* self /*none*/, GtkGraphicsOffloadEnabled enabled);
// void gtk_graphics_offload_set_enabled (::GtkGraphicsOffload* self /*none*/, ::GtkGraphicsOffloadEnabled enabled);
void base::GraphicsOffloadBase::set_enabled (Gtk::GraphicsOffloadEnabled enabled) noexcept
{
  typedef void (*call_wrap_t) (::GtkGraphicsOffload* self, ::GtkGraphicsOffloadEnabled enabled);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_graphics_offload_set_enabled;
  auto enabled_to_c = gi::unwrap (enabled);
  call_wrap_v ((::GtkGraphicsOffload*) (gobj_()), (::GtkGraphicsOffloadEnabled) (enabled_to_c));
}


} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/graphicsoffload_extra_def_impl.hpp>)
#include <gtk/graphicsoffload_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/graphicsoffload_extra_impl.hpp>)
#include <gtk/graphicsoffload_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {

void GraphicsOffloadClassDef::class_init (gpointer class_struct, gpointer factory)
{
  ::GtkGraphicsOffloadClass *methods = (::GtkGraphicsOffloadClass *) class_struct;
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
