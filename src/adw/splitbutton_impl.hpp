// AUTO-GENERATED

#ifndef _GI_ADW_SPLITBUTTON_IMPL_HPP_
#define _GI_ADW_SPLITBUTTON_IMPL_HPP_

namespace gi {

namespace repository {

namespace Adw {

namespace base {

Gtk::Actionable SplitButtonBase::interface_ (gi::interface_tag<Gtk::Actionable>)
{ return gi::wrap ((Gtk::Actionable::BaseObjectType*) gobj_copy_(), gi::transfer_full); }

SplitButtonBase::operator Gtk::Actionable ()
{ return interface_ (gi::interface_tag<Gtk::Actionable>()); }

// GtkWidget* /*none*/ adw_split_button_new ();
// ::AdwSplitButton* /*none*/ adw_split_button_new ();
Adw::SplitButton base::SplitButtonBase::new_ () noexcept
{
  typedef ::AdwSplitButton* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) adw_split_button_new;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// gboolean adw_split_button_get_can_shrink (AdwSplitButton* self /*none*/);
// gboolean adw_split_button_get_can_shrink (::AdwSplitButton* self /*none*/);
bool base::SplitButtonBase::get_can_shrink () noexcept
{
  typedef gboolean (*call_wrap_t) (::AdwSplitButton* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_split_button_get_can_shrink;
  auto _temp_ret = call_wrap_v ((::AdwSplitButton*) (gobj_()));
  return _temp_ret;
}

// GtkWidget* /*none,nullable*/ adw_split_button_get_child (AdwSplitButton* self /*none*/);
// ::GtkWidget* /*none,nullable*/ adw_split_button_get_child (::AdwSplitButton* self /*none*/);
Gtk::Widget base::SplitButtonBase::get_child () noexcept
{
  typedef ::GtkWidget* (*call_wrap_t) (::AdwSplitButton* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_split_button_get_child;
  auto _temp_ret = call_wrap_v ((::AdwSplitButton*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// GtkArrowType adw_split_button_get_direction (AdwSplitButton* self /*none*/);
// ::GtkArrowType adw_split_button_get_direction (::AdwSplitButton* self /*none*/);
Gtk::ArrowType base::SplitButtonBase::get_direction () noexcept
{
  typedef ::GtkArrowType (*call_wrap_t) (::AdwSplitButton* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_split_button_get_direction;
  auto _temp_ret = call_wrap_v ((::AdwSplitButton*) (gobj_()));
  return gi::wrap (_temp_ret);
}

// const char* /*none*/ adw_split_button_get_dropdown_tooltip (AdwSplitButton* self /*none*/);
// const char* /*none*/ adw_split_button_get_dropdown_tooltip (::AdwSplitButton* self /*none*/);
gi::cstring_v base::SplitButtonBase::get_dropdown_tooltip () noexcept
{
  typedef const char* (*call_wrap_t) (::AdwSplitButton* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_split_button_get_dropdown_tooltip;
  auto _temp_ret = call_wrap_v ((::AdwSplitButton*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// const char* /*none,nullable*/ adw_split_button_get_icon_name (AdwSplitButton* self /*none*/);
// const char* /*none,nullable*/ adw_split_button_get_icon_name (::AdwSplitButton* self /*none*/);
gi::cstring_v base::SplitButtonBase::get_icon_name () noexcept
{
  typedef const char* (*call_wrap_t) (::AdwSplitButton* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_split_button_get_icon_name;
  auto _temp_ret = call_wrap_v ((::AdwSplitButton*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// const char* /*none,nullable*/ adw_split_button_get_label (AdwSplitButton* self /*none*/);
// const char* /*none,nullable*/ adw_split_button_get_label (::AdwSplitButton* self /*none*/);
gi::cstring_v base::SplitButtonBase::get_label () noexcept
{
  typedef const char* (*call_wrap_t) (::AdwSplitButton* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_split_button_get_label;
  auto _temp_ret = call_wrap_v ((::AdwSplitButton*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// GMenuModel* /*none,nullable*/ adw_split_button_get_menu_model (AdwSplitButton* self /*none*/);
// ::GMenuModel* /*none,nullable*/ adw_split_button_get_menu_model (::AdwSplitButton* self /*none*/);
Gio::MenuModel base::SplitButtonBase::get_menu_model () noexcept
{
  typedef ::GMenuModel* (*call_wrap_t) (::AdwSplitButton* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_split_button_get_menu_model;
  auto _temp_ret = call_wrap_v ((::AdwSplitButton*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// GtkPopover* /*none,nullable*/ adw_split_button_get_popover (AdwSplitButton* self /*none*/);
// ::GtkPopover* /*none,nullable*/ adw_split_button_get_popover (::AdwSplitButton* self /*none*/);
Gtk::Popover base::SplitButtonBase::get_popover () noexcept
{
  typedef ::GtkPopover* (*call_wrap_t) (::AdwSplitButton* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_split_button_get_popover;
  auto _temp_ret = call_wrap_v ((::AdwSplitButton*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// gboolean adw_split_button_get_use_underline (AdwSplitButton* self /*none*/);
// gboolean adw_split_button_get_use_underline (::AdwSplitButton* self /*none*/);
bool base::SplitButtonBase::get_use_underline () noexcept
{
  typedef gboolean (*call_wrap_t) (::AdwSplitButton* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_split_button_get_use_underline;
  auto _temp_ret = call_wrap_v ((::AdwSplitButton*) (gobj_()));
  return _temp_ret;
}

// void adw_split_button_popdown (AdwSplitButton* self /*none*/);
// void adw_split_button_popdown (::AdwSplitButton* self /*none*/);
void base::SplitButtonBase::popdown () noexcept
{
  typedef void (*call_wrap_t) (::AdwSplitButton* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_split_button_popdown;
  call_wrap_v ((::AdwSplitButton*) (gobj_()));
}

// void adw_split_button_popup (AdwSplitButton* self /*none*/);
// void adw_split_button_popup (::AdwSplitButton* self /*none*/);
void base::SplitButtonBase::popup () noexcept
{
  typedef void (*call_wrap_t) (::AdwSplitButton* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_split_button_popup;
  call_wrap_v ((::AdwSplitButton*) (gobj_()));
}

// void adw_split_button_set_can_shrink (AdwSplitButton* self /*none*/, gboolean can_shrink);
// void adw_split_button_set_can_shrink (::AdwSplitButton* self /*none*/, gboolean can_shrink);
void base::SplitButtonBase::set_can_shrink (gboolean can_shrink) noexcept
{
  typedef void (*call_wrap_t) (::AdwSplitButton* self, gboolean can_shrink);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_split_button_set_can_shrink;
  auto can_shrink_to_c = can_shrink;
  call_wrap_v ((::AdwSplitButton*) (gobj_()), (gboolean) (can_shrink_to_c));
}

// void adw_split_button_set_child (AdwSplitButton* self /*none*/, GtkWidget* child /*none,nullable*/);
// void adw_split_button_set_child (::AdwSplitButton* self /*none*/, ::GtkWidget* child /*none,nullable*/);
void base::SplitButtonBase::set_child (Gtk::Widget child) noexcept
{
  typedef void (*call_wrap_t) (::AdwSplitButton* self, ::GtkWidget* child);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_split_button_set_child;
  auto child_to_c = gi::unwrap (child, gi::transfer_none);
  call_wrap_v ((::AdwSplitButton*) (gobj_()), (::GtkWidget*) (child_to_c));
}
void base::SplitButtonBase::set_child () noexcept
{
  typedef void (*call_wrap_t) (::AdwSplitButton* self, ::GtkWidget* child);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_split_button_set_child;
  auto child_to_c = nullptr;
  call_wrap_v ((::AdwSplitButton*) (gobj_()), (::GtkWidget*) (child_to_c));
}

// void adw_split_button_set_direction (AdwSplitButton* self /*none*/, GtkArrowType direction);
// void adw_split_button_set_direction (::AdwSplitButton* self /*none*/, ::GtkArrowType direction);
void base::SplitButtonBase::set_direction (Gtk::ArrowType direction) noexcept
{
  typedef void (*call_wrap_t) (::AdwSplitButton* self, ::GtkArrowType direction);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_split_button_set_direction;
  auto direction_to_c = gi::unwrap (direction);
  call_wrap_v ((::AdwSplitButton*) (gobj_()), (::GtkArrowType) (direction_to_c));
}

// void adw_split_button_set_dropdown_tooltip (AdwSplitButton* self /*none*/, const char* tooltip /*none*/);
// void adw_split_button_set_dropdown_tooltip (::AdwSplitButton* self /*none*/, const char* tooltip /*none*/);
void base::SplitButtonBase::set_dropdown_tooltip (const gi::cstring_v tooltip) noexcept
{
  typedef void (*call_wrap_t) (::AdwSplitButton* self, const char* tooltip);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_split_button_set_dropdown_tooltip;
  auto tooltip_to_c = gi::unwrap (tooltip, gi::transfer_none);
  call_wrap_v ((::AdwSplitButton*) (gobj_()), (const char*) (tooltip_to_c));
}

// void adw_split_button_set_icon_name (AdwSplitButton* self /*none*/, const char* icon_name /*none*/);
// void adw_split_button_set_icon_name (::AdwSplitButton* self /*none*/, const char* icon_name /*none*/);
void base::SplitButtonBase::set_icon_name (const gi::cstring_v icon_name) noexcept
{
  typedef void (*call_wrap_t) (::AdwSplitButton* self, const char* icon_name);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_split_button_set_icon_name;
  auto icon_name_to_c = gi::unwrap (icon_name, gi::transfer_none);
  call_wrap_v ((::AdwSplitButton*) (gobj_()), (const char*) (icon_name_to_c));
}

// void adw_split_button_set_label (AdwSplitButton* self /*none*/, const char* label /*none*/);
// void adw_split_button_set_label (::AdwSplitButton* self /*none*/, const char* label /*none*/);
void base::SplitButtonBase::set_label (const gi::cstring_v label) noexcept
{
  typedef void (*call_wrap_t) (::AdwSplitButton* self, const char* label);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_split_button_set_label;
  auto label_to_c = gi::unwrap (label, gi::transfer_none);
  call_wrap_v ((::AdwSplitButton*) (gobj_()), (const char*) (label_to_c));
}

// void adw_split_button_set_menu_model (AdwSplitButton* self /*none*/, GMenuModel* menu_model /*none,nullable*/);
// void adw_split_button_set_menu_model (::AdwSplitButton* self /*none*/, ::GMenuModel* menu_model /*none,nullable*/);
void base::SplitButtonBase::set_menu_model (Gio::MenuModel menu_model) noexcept
{
  typedef void (*call_wrap_t) (::AdwSplitButton* self, ::GMenuModel* menu_model);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_split_button_set_menu_model;
  auto menu_model_to_c = gi::unwrap (menu_model, gi::transfer_none);
  call_wrap_v ((::AdwSplitButton*) (gobj_()), (::GMenuModel*) (menu_model_to_c));
}
void base::SplitButtonBase::set_menu_model () noexcept
{
  typedef void (*call_wrap_t) (::AdwSplitButton* self, ::GMenuModel* menu_model);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_split_button_set_menu_model;
  auto menu_model_to_c = nullptr;
  call_wrap_v ((::AdwSplitButton*) (gobj_()), (::GMenuModel*) (menu_model_to_c));
}

// void adw_split_button_set_popover (AdwSplitButton* self /*none*/, GtkPopover* popover /*none,nullable*/);
// void adw_split_button_set_popover (::AdwSplitButton* self /*none*/, ::GtkPopover* popover /*none,nullable*/);
void base::SplitButtonBase::set_popover (Gtk::Popover popover) noexcept
{
  typedef void (*call_wrap_t) (::AdwSplitButton* self, ::GtkPopover* popover);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_split_button_set_popover;
  auto popover_to_c = gi::unwrap (popover, gi::transfer_none);
  call_wrap_v ((::AdwSplitButton*) (gobj_()), (::GtkPopover*) (popover_to_c));
}
void base::SplitButtonBase::set_popover () noexcept
{
  typedef void (*call_wrap_t) (::AdwSplitButton* self, ::GtkPopover* popover);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_split_button_set_popover;
  auto popover_to_c = nullptr;
  call_wrap_v ((::AdwSplitButton*) (gobj_()), (::GtkPopover*) (popover_to_c));
}

// void adw_split_button_set_use_underline (AdwSplitButton* self /*none*/, gboolean use_underline);
// void adw_split_button_set_use_underline (::AdwSplitButton* self /*none*/, gboolean use_underline);
void base::SplitButtonBase::set_use_underline (gboolean use_underline) noexcept
{
  typedef void (*call_wrap_t) (::AdwSplitButton* self, gboolean use_underline);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_split_button_set_use_underline;
  auto use_underline_to_c = use_underline;
  call_wrap_v ((::AdwSplitButton*) (gobj_()), (gboolean) (use_underline_to_c));
}




} // namespace base

} // namespace Adw

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<adw/splitbutton_extra_def_impl.hpp>)
#include <adw/splitbutton_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<adw/splitbutton_extra_impl.hpp>)
#include <adw/splitbutton_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Adw {

namespace impl {

namespace internal {

void SplitButtonClassDef::class_init (gpointer class_struct, gpointer factory)
{
  ::AdwSplitButtonClass *methods = (::AdwSplitButtonClass *) class_struct;
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
