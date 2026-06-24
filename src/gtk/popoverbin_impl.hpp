// AUTO-GENERATED

#ifndef _GI_GTK_POPOVERBIN_IMPL_HPP_
#define _GI_GTK_POPOVERBIN_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

// GtkWidget* /*none*/ gtk_popover_bin_new ();
// ::GtkPopoverBin* /*none*/ gtk_popover_bin_new ();
Gtk::PopoverBin base::PopoverBinBase::new_ () noexcept
{
  typedef ::GtkPopoverBin* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_popover_bin_new;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// GtkWidget* /*none,nullable*/ gtk_popover_bin_get_child (GtkPopoverBin* self /*none*/);
// ::GtkWidget* /*none,nullable*/ gtk_popover_bin_get_child (::GtkPopoverBin* self /*none*/);
Gtk::Widget base::PopoverBinBase::get_child () noexcept
{
  typedef ::GtkWidget* (*call_wrap_t) (::GtkPopoverBin* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_popover_bin_get_child;
  auto _temp_ret = call_wrap_v ((::GtkPopoverBin*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// gboolean gtk_popover_bin_get_handle_input (GtkPopoverBin* self /*none*/);
// gboolean gtk_popover_bin_get_handle_input (::GtkPopoverBin* self /*none*/);
bool base::PopoverBinBase::get_handle_input () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkPopoverBin* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_popover_bin_get_handle_input;
  auto _temp_ret = call_wrap_v ((::GtkPopoverBin*) (gobj_()));
  return _temp_ret;
}

// GMenuModel* /*none,nullable*/ gtk_popover_bin_get_menu_model (GtkPopoverBin* self /*none*/);
// ::GMenuModel* /*none,nullable*/ gtk_popover_bin_get_menu_model (::GtkPopoverBin* self /*none*/);
Gio::MenuModel base::PopoverBinBase::get_menu_model () noexcept
{
  typedef ::GMenuModel* (*call_wrap_t) (::GtkPopoverBin* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_popover_bin_get_menu_model;
  auto _temp_ret = call_wrap_v ((::GtkPopoverBin*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// GtkWidget* /*none,nullable*/ gtk_popover_bin_get_popover (GtkPopoverBin* self /*none*/);
// ::GtkPopover* /*none,nullable*/ gtk_popover_bin_get_popover (::GtkPopoverBin* self /*none*/);
Gtk::Popover base::PopoverBinBase::get_popover () noexcept
{
  typedef ::GtkPopover* (*call_wrap_t) (::GtkPopoverBin* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_popover_bin_get_popover;
  auto _temp_ret = call_wrap_v ((::GtkPopoverBin*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// void gtk_popover_bin_popdown (GtkPopoverBin* self /*none*/);
// void gtk_popover_bin_popdown (::GtkPopoverBin* self /*none*/);
void base::PopoverBinBase::popdown () noexcept
{
  typedef void (*call_wrap_t) (::GtkPopoverBin* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_popover_bin_popdown;
  call_wrap_v ((::GtkPopoverBin*) (gobj_()));
}

// void gtk_popover_bin_popup (GtkPopoverBin* self /*none*/);
// void gtk_popover_bin_popup (::GtkPopoverBin* self /*none*/);
void base::PopoverBinBase::popup () noexcept
{
  typedef void (*call_wrap_t) (::GtkPopoverBin* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_popover_bin_popup;
  call_wrap_v ((::GtkPopoverBin*) (gobj_()));
}

// void gtk_popover_bin_set_child (GtkPopoverBin* self /*none*/, GtkWidget* child /*none,nullable*/);
// void gtk_popover_bin_set_child (::GtkPopoverBin* self /*none*/, ::GtkWidget* child /*none,nullable*/);
void base::PopoverBinBase::set_child (Gtk::Widget child) noexcept
{
  typedef void (*call_wrap_t) (::GtkPopoverBin* self, ::GtkWidget* child);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_popover_bin_set_child;
  auto child_to_c = gi::unwrap (child, gi::transfer_none);
  call_wrap_v ((::GtkPopoverBin*) (gobj_()), (::GtkWidget*) (child_to_c));
}
void base::PopoverBinBase::set_child () noexcept
{
  typedef void (*call_wrap_t) (::GtkPopoverBin* self, ::GtkWidget* child);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_popover_bin_set_child;
  auto child_to_c = nullptr;
  call_wrap_v ((::GtkPopoverBin*) (gobj_()), (::GtkWidget*) (child_to_c));
}

// void gtk_popover_bin_set_handle_input (GtkPopoverBin* self /*none*/, gboolean handle_input);
// void gtk_popover_bin_set_handle_input (::GtkPopoverBin* self /*none*/, gboolean handle_input);
void base::PopoverBinBase::set_handle_input (gboolean handle_input) noexcept
{
  typedef void (*call_wrap_t) (::GtkPopoverBin* self, gboolean handle_input);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_popover_bin_set_handle_input;
  auto handle_input_to_c = handle_input;
  call_wrap_v ((::GtkPopoverBin*) (gobj_()), (gboolean) (handle_input_to_c));
}

// void gtk_popover_bin_set_menu_model (GtkPopoverBin* self /*none*/, GMenuModel* model /*none,nullable*/);
// void gtk_popover_bin_set_menu_model (::GtkPopoverBin* self /*none*/, ::GMenuModel* model /*none,nullable*/);
void base::PopoverBinBase::set_menu_model (Gio::MenuModel model) noexcept
{
  typedef void (*call_wrap_t) (::GtkPopoverBin* self, ::GMenuModel* model);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_popover_bin_set_menu_model;
  auto model_to_c = gi::unwrap (model, gi::transfer_none);
  call_wrap_v ((::GtkPopoverBin*) (gobj_()), (::GMenuModel*) (model_to_c));
}
void base::PopoverBinBase::set_menu_model () noexcept
{
  typedef void (*call_wrap_t) (::GtkPopoverBin* self, ::GMenuModel* model);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_popover_bin_set_menu_model;
  auto model_to_c = nullptr;
  call_wrap_v ((::GtkPopoverBin*) (gobj_()), (::GMenuModel*) (model_to_c));
}

// void gtk_popover_bin_set_popover (GtkPopoverBin* self /*none*/, GtkWidget* popover /*none,nullable*/);
// void gtk_popover_bin_set_popover (::GtkPopoverBin* self /*none*/, ::GtkPopover* popover /*none,nullable*/);
void base::PopoverBinBase::set_popover (Gtk::Popover popover) noexcept
{
  typedef void (*call_wrap_t) (::GtkPopoverBin* self, ::GtkPopover* popover);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_popover_bin_set_popover;
  auto popover_to_c = gi::unwrap (popover, gi::transfer_none);
  call_wrap_v ((::GtkPopoverBin*) (gobj_()), (::GtkPopover*) (popover_to_c));
}
void base::PopoverBinBase::set_popover () noexcept
{
  typedef void (*call_wrap_t) (::GtkPopoverBin* self, ::GtkPopover* popover);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_popover_bin_set_popover;
  auto popover_to_c = nullptr;
  call_wrap_v ((::GtkPopoverBin*) (gobj_()), (::GtkPopover*) (popover_to_c));
}


} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/popoverbin_extra_def_impl.hpp>)
#include <gtk/popoverbin_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/popoverbin_extra_impl.hpp>)
#include <gtk/popoverbin_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {

void PopoverBinClassDef::class_init (gpointer class_struct, gpointer factory)
{
  ::GtkPopoverBinClass *methods = (::GtkPopoverBinClass *) class_struct;
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
