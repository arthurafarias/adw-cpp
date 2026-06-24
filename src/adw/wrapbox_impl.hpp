// AUTO-GENERATED

#ifndef _GI_ADW_WRAPBOX_IMPL_HPP_
#define _GI_ADW_WRAPBOX_IMPL_HPP_

namespace gi {

namespace repository {

namespace Adw {

namespace base {

Gtk::Orientable WrapBoxBase::interface_ (gi::interface_tag<Gtk::Orientable>)
{ return gi::wrap ((Gtk::Orientable::BaseObjectType*) gobj_copy_(), gi::transfer_full); }

WrapBoxBase::operator Gtk::Orientable ()
{ return interface_ (gi::interface_tag<Gtk::Orientable>()); }

// GtkWidget* /*none*/ adw_wrap_box_new ();
// ::AdwWrapBox* /*none*/ adw_wrap_box_new ();
Adw::WrapBox base::WrapBoxBase::new_ () noexcept
{
  typedef ::AdwWrapBox* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) adw_wrap_box_new;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// void adw_wrap_box_append (AdwWrapBox* self /*none*/, GtkWidget* child /*none*/);
// void adw_wrap_box_append (::AdwWrapBox* self /*none*/, ::GtkWidget* child /*none*/);
void base::WrapBoxBase::append (Gtk::Widget child) noexcept
{
  typedef void (*call_wrap_t) (::AdwWrapBox* self, ::GtkWidget* child);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_wrap_box_append;
  auto child_to_c = gi::unwrap (child, gi::transfer_none);
  call_wrap_v ((::AdwWrapBox*) (gobj_()), (::GtkWidget*) (child_to_c));
}

// float adw_wrap_box_get_align (AdwWrapBox* self /*none*/);
// gfloat adw_wrap_box_get_align (::AdwWrapBox* self /*none*/);
gfloat base::WrapBoxBase::get_align () noexcept
{
  typedef gfloat (*call_wrap_t) (::AdwWrapBox* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_wrap_box_get_align;
  auto _temp_ret = call_wrap_v ((::AdwWrapBox*) (gobj_()));
  return _temp_ret;
}

// int adw_wrap_box_get_child_spacing (AdwWrapBox* self /*none*/);
// gint adw_wrap_box_get_child_spacing (::AdwWrapBox* self /*none*/);
gint base::WrapBoxBase::get_child_spacing () noexcept
{
  typedef gint (*call_wrap_t) (::AdwWrapBox* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_wrap_box_get_child_spacing;
  auto _temp_ret = call_wrap_v ((::AdwWrapBox*) (gobj_()));
  return _temp_ret;
}

// AdwLengthUnit adw_wrap_box_get_child_spacing_unit (AdwWrapBox* self /*none*/);
// ::AdwLengthUnit adw_wrap_box_get_child_spacing_unit (::AdwWrapBox* self /*none*/);
Adw::LengthUnit base::WrapBoxBase::get_child_spacing_unit () noexcept
{
  typedef ::AdwLengthUnit (*call_wrap_t) (::AdwWrapBox* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_wrap_box_get_child_spacing_unit;
  auto _temp_ret = call_wrap_v ((::AdwWrapBox*) (gobj_()));
  return gi::wrap (_temp_ret);
}

// AdwJustifyMode adw_wrap_box_get_justify (AdwWrapBox* self /*none*/);
// ::AdwJustifyMode adw_wrap_box_get_justify (::AdwWrapBox* self /*none*/);
Adw::JustifyMode base::WrapBoxBase::get_justify () noexcept
{
  typedef ::AdwJustifyMode (*call_wrap_t) (::AdwWrapBox* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_wrap_box_get_justify;
  auto _temp_ret = call_wrap_v ((::AdwWrapBox*) (gobj_()));
  return gi::wrap (_temp_ret);
}

// gboolean adw_wrap_box_get_justify_last_line (AdwWrapBox* self /*none*/);
// gboolean adw_wrap_box_get_justify_last_line (::AdwWrapBox* self /*none*/);
bool base::WrapBoxBase::get_justify_last_line () noexcept
{
  typedef gboolean (*call_wrap_t) (::AdwWrapBox* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_wrap_box_get_justify_last_line;
  auto _temp_ret = call_wrap_v ((::AdwWrapBox*) (gobj_()));
  return _temp_ret;
}

// gboolean adw_wrap_box_get_line_homogeneous (AdwWrapBox* self /*none*/);
// gboolean adw_wrap_box_get_line_homogeneous (::AdwWrapBox* self /*none*/);
bool base::WrapBoxBase::get_line_homogeneous () noexcept
{
  typedef gboolean (*call_wrap_t) (::AdwWrapBox* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_wrap_box_get_line_homogeneous;
  auto _temp_ret = call_wrap_v ((::AdwWrapBox*) (gobj_()));
  return _temp_ret;
}

// int adw_wrap_box_get_line_spacing (AdwWrapBox* self /*none*/);
// gint adw_wrap_box_get_line_spacing (::AdwWrapBox* self /*none*/);
gint base::WrapBoxBase::get_line_spacing () noexcept
{
  typedef gint (*call_wrap_t) (::AdwWrapBox* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_wrap_box_get_line_spacing;
  auto _temp_ret = call_wrap_v ((::AdwWrapBox*) (gobj_()));
  return _temp_ret;
}

// AdwLengthUnit adw_wrap_box_get_line_spacing_unit (AdwWrapBox* self /*none*/);
// ::AdwLengthUnit adw_wrap_box_get_line_spacing_unit (::AdwWrapBox* self /*none*/);
Adw::LengthUnit base::WrapBoxBase::get_line_spacing_unit () noexcept
{
  typedef ::AdwLengthUnit (*call_wrap_t) (::AdwWrapBox* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_wrap_box_get_line_spacing_unit;
  auto _temp_ret = call_wrap_v ((::AdwWrapBox*) (gobj_()));
  return gi::wrap (_temp_ret);
}

// int adw_wrap_box_get_natural_line_length (AdwWrapBox* self /*none*/);
// gint adw_wrap_box_get_natural_line_length (::AdwWrapBox* self /*none*/);
gint base::WrapBoxBase::get_natural_line_length () noexcept
{
  typedef gint (*call_wrap_t) (::AdwWrapBox* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_wrap_box_get_natural_line_length;
  auto _temp_ret = call_wrap_v ((::AdwWrapBox*) (gobj_()));
  return _temp_ret;
}

// AdwLengthUnit adw_wrap_box_get_natural_line_length_unit (AdwWrapBox* self /*none*/);
// ::AdwLengthUnit adw_wrap_box_get_natural_line_length_unit (::AdwWrapBox* self /*none*/);
Adw::LengthUnit base::WrapBoxBase::get_natural_line_length_unit () noexcept
{
  typedef ::AdwLengthUnit (*call_wrap_t) (::AdwWrapBox* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_wrap_box_get_natural_line_length_unit;
  auto _temp_ret = call_wrap_v ((::AdwWrapBox*) (gobj_()));
  return gi::wrap (_temp_ret);
}

// AdwPackDirection adw_wrap_box_get_pack_direction (AdwWrapBox* self /*none*/);
// ::AdwPackDirection adw_wrap_box_get_pack_direction (::AdwWrapBox* self /*none*/);
Adw::PackDirection base::WrapBoxBase::get_pack_direction () noexcept
{
  typedef ::AdwPackDirection (*call_wrap_t) (::AdwWrapBox* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_wrap_box_get_pack_direction;
  auto _temp_ret = call_wrap_v ((::AdwWrapBox*) (gobj_()));
  return gi::wrap (_temp_ret);
}

// AdwWrapPolicy adw_wrap_box_get_wrap_policy (AdwWrapBox* self /*none*/);
// ::AdwWrapPolicy adw_wrap_box_get_wrap_policy (::AdwWrapBox* self /*none*/);
Adw::WrapPolicy base::WrapBoxBase::get_wrap_policy () noexcept
{
  typedef ::AdwWrapPolicy (*call_wrap_t) (::AdwWrapBox* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_wrap_box_get_wrap_policy;
  auto _temp_ret = call_wrap_v ((::AdwWrapBox*) (gobj_()));
  return gi::wrap (_temp_ret);
}

// gboolean adw_wrap_box_get_wrap_reverse (AdwWrapBox* self /*none*/);
// gboolean adw_wrap_box_get_wrap_reverse (::AdwWrapBox* self /*none*/);
bool base::WrapBoxBase::get_wrap_reverse () noexcept
{
  typedef gboolean (*call_wrap_t) (::AdwWrapBox* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_wrap_box_get_wrap_reverse;
  auto _temp_ret = call_wrap_v ((::AdwWrapBox*) (gobj_()));
  return _temp_ret;
}

// void adw_wrap_box_insert_child_after (AdwWrapBox* self /*none*/, GtkWidget* child /*none*/, GtkWidget* sibling /*none,nullable*/);
// void adw_wrap_box_insert_child_after (::AdwWrapBox* self /*none*/, ::GtkWidget* child /*none*/, ::GtkWidget* sibling /*none,nullable*/);
void base::WrapBoxBase::insert_child_after (Gtk::Widget child, Gtk::Widget sibling) noexcept
{
  typedef void (*call_wrap_t) (::AdwWrapBox* self, ::GtkWidget* child, ::GtkWidget* sibling);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_wrap_box_insert_child_after;
  auto sibling_to_c = gi::unwrap (sibling, gi::transfer_none);
  auto child_to_c = gi::unwrap (child, gi::transfer_none);
  call_wrap_v ((::AdwWrapBox*) (gobj_()), (::GtkWidget*) (child_to_c), (::GtkWidget*) (sibling_to_c));
}
void base::WrapBoxBase::insert_child_after (Gtk::Widget child) noexcept
{
  typedef void (*call_wrap_t) (::AdwWrapBox* self, ::GtkWidget* child, ::GtkWidget* sibling);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_wrap_box_insert_child_after;
  auto sibling_to_c = nullptr;
  auto child_to_c = gi::unwrap (child, gi::transfer_none);
  call_wrap_v ((::AdwWrapBox*) (gobj_()), (::GtkWidget*) (child_to_c), (::GtkWidget*) (sibling_to_c));
}

// void adw_wrap_box_prepend (AdwWrapBox* self /*none*/, GtkWidget* child /*none*/);
// void adw_wrap_box_prepend (::AdwWrapBox* self /*none*/, ::GtkWidget* child /*none*/);
void base::WrapBoxBase::prepend (Gtk::Widget child) noexcept
{
  typedef void (*call_wrap_t) (::AdwWrapBox* self, ::GtkWidget* child);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_wrap_box_prepend;
  auto child_to_c = gi::unwrap (child, gi::transfer_none);
  call_wrap_v ((::AdwWrapBox*) (gobj_()), (::GtkWidget*) (child_to_c));
}

// void adw_wrap_box_remove (AdwWrapBox* self /*none*/, GtkWidget* child /*none*/);
// void adw_wrap_box_remove (::AdwWrapBox* self /*none*/, ::GtkWidget* child /*none*/);
void base::WrapBoxBase::remove (Gtk::Widget child) noexcept
{
  typedef void (*call_wrap_t) (::AdwWrapBox* self, ::GtkWidget* child);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_wrap_box_remove;
  auto child_to_c = gi::unwrap (child, gi::transfer_none);
  call_wrap_v ((::AdwWrapBox*) (gobj_()), (::GtkWidget*) (child_to_c));
}

// void adw_wrap_box_remove_all (AdwWrapBox* self /*none*/);
// void adw_wrap_box_remove_all (::AdwWrapBox* self /*none*/);
void base::WrapBoxBase::remove_all () noexcept
{
  typedef void (*call_wrap_t) (::AdwWrapBox* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_wrap_box_remove_all;
  call_wrap_v ((::AdwWrapBox*) (gobj_()));
}

// void adw_wrap_box_reorder_child_after (AdwWrapBox* self /*none*/, GtkWidget* child /*none*/, GtkWidget* sibling /*none,nullable*/);
// void adw_wrap_box_reorder_child_after (::AdwWrapBox* self /*none*/, ::GtkWidget* child /*none*/, ::GtkWidget* sibling /*none,nullable*/);
void base::WrapBoxBase::reorder_child_after (Gtk::Widget child, Gtk::Widget sibling) noexcept
{
  typedef void (*call_wrap_t) (::AdwWrapBox* self, ::GtkWidget* child, ::GtkWidget* sibling);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_wrap_box_reorder_child_after;
  auto sibling_to_c = gi::unwrap (sibling, gi::transfer_none);
  auto child_to_c = gi::unwrap (child, gi::transfer_none);
  call_wrap_v ((::AdwWrapBox*) (gobj_()), (::GtkWidget*) (child_to_c), (::GtkWidget*) (sibling_to_c));
}
void base::WrapBoxBase::reorder_child_after (Gtk::Widget child) noexcept
{
  typedef void (*call_wrap_t) (::AdwWrapBox* self, ::GtkWidget* child, ::GtkWidget* sibling);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_wrap_box_reorder_child_after;
  auto sibling_to_c = nullptr;
  auto child_to_c = gi::unwrap (child, gi::transfer_none);
  call_wrap_v ((::AdwWrapBox*) (gobj_()), (::GtkWidget*) (child_to_c), (::GtkWidget*) (sibling_to_c));
}

// void adw_wrap_box_set_align (AdwWrapBox* self /*none*/, float align);
// void adw_wrap_box_set_align (::AdwWrapBox* self /*none*/, gfloat align);
void base::WrapBoxBase::set_align (gfloat align) noexcept
{
  typedef void (*call_wrap_t) (::AdwWrapBox* self, gfloat align);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_wrap_box_set_align;
  auto align_to_c = align;
  call_wrap_v ((::AdwWrapBox*) (gobj_()), (gfloat) (align_to_c));
}

// void adw_wrap_box_set_child_spacing (AdwWrapBox* self /*none*/, int child_spacing);
// void adw_wrap_box_set_child_spacing (::AdwWrapBox* self /*none*/, gint child_spacing);
void base::WrapBoxBase::set_child_spacing (gint child_spacing) noexcept
{
  typedef void (*call_wrap_t) (::AdwWrapBox* self, gint child_spacing);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_wrap_box_set_child_spacing;
  auto child_spacing_to_c = child_spacing;
  call_wrap_v ((::AdwWrapBox*) (gobj_()), (gint) (child_spacing_to_c));
}

// void adw_wrap_box_set_child_spacing_unit (AdwWrapBox* self /*none*/, AdwLengthUnit unit);
// void adw_wrap_box_set_child_spacing_unit (::AdwWrapBox* self /*none*/, ::AdwLengthUnit unit);
void base::WrapBoxBase::set_child_spacing_unit (Adw::LengthUnit unit) noexcept
{
  typedef void (*call_wrap_t) (::AdwWrapBox* self, ::AdwLengthUnit unit);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_wrap_box_set_child_spacing_unit;
  auto unit_to_c = gi::unwrap (unit);
  call_wrap_v ((::AdwWrapBox*) (gobj_()), (::AdwLengthUnit) (unit_to_c));
}

// void adw_wrap_box_set_justify (AdwWrapBox* self /*none*/, AdwJustifyMode justify);
// void adw_wrap_box_set_justify (::AdwWrapBox* self /*none*/, ::AdwJustifyMode justify);
void base::WrapBoxBase::set_justify (Adw::JustifyMode justify) noexcept
{
  typedef void (*call_wrap_t) (::AdwWrapBox* self, ::AdwJustifyMode justify);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_wrap_box_set_justify;
  auto justify_to_c = gi::unwrap (justify);
  call_wrap_v ((::AdwWrapBox*) (gobj_()), (::AdwJustifyMode) (justify_to_c));
}

// void adw_wrap_box_set_justify_last_line (AdwWrapBox* self /*none*/, gboolean justify_last_line);
// void adw_wrap_box_set_justify_last_line (::AdwWrapBox* self /*none*/, gboolean justify_last_line);
void base::WrapBoxBase::set_justify_last_line (gboolean justify_last_line) noexcept
{
  typedef void (*call_wrap_t) (::AdwWrapBox* self, gboolean justify_last_line);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_wrap_box_set_justify_last_line;
  auto justify_last_line_to_c = justify_last_line;
  call_wrap_v ((::AdwWrapBox*) (gobj_()), (gboolean) (justify_last_line_to_c));
}

// void adw_wrap_box_set_line_homogeneous (AdwWrapBox* self /*none*/, gboolean homogeneous);
// void adw_wrap_box_set_line_homogeneous (::AdwWrapBox* self /*none*/, gboolean homogeneous);
void base::WrapBoxBase::set_line_homogeneous (gboolean homogeneous) noexcept
{
  typedef void (*call_wrap_t) (::AdwWrapBox* self, gboolean homogeneous);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_wrap_box_set_line_homogeneous;
  auto homogeneous_to_c = homogeneous;
  call_wrap_v ((::AdwWrapBox*) (gobj_()), (gboolean) (homogeneous_to_c));
}

// void adw_wrap_box_set_line_spacing (AdwWrapBox* self /*none*/, int line_spacing);
// void adw_wrap_box_set_line_spacing (::AdwWrapBox* self /*none*/, gint line_spacing);
void base::WrapBoxBase::set_line_spacing (gint line_spacing) noexcept
{
  typedef void (*call_wrap_t) (::AdwWrapBox* self, gint line_spacing);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_wrap_box_set_line_spacing;
  auto line_spacing_to_c = line_spacing;
  call_wrap_v ((::AdwWrapBox*) (gobj_()), (gint) (line_spacing_to_c));
}

// void adw_wrap_box_set_line_spacing_unit (AdwWrapBox* self /*none*/, AdwLengthUnit unit);
// void adw_wrap_box_set_line_spacing_unit (::AdwWrapBox* self /*none*/, ::AdwLengthUnit unit);
void base::WrapBoxBase::set_line_spacing_unit (Adw::LengthUnit unit) noexcept
{
  typedef void (*call_wrap_t) (::AdwWrapBox* self, ::AdwLengthUnit unit);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_wrap_box_set_line_spacing_unit;
  auto unit_to_c = gi::unwrap (unit);
  call_wrap_v ((::AdwWrapBox*) (gobj_()), (::AdwLengthUnit) (unit_to_c));
}

// void adw_wrap_box_set_natural_line_length (AdwWrapBox* self /*none*/, int natural_line_length);
// void adw_wrap_box_set_natural_line_length (::AdwWrapBox* self /*none*/, gint natural_line_length);
void base::WrapBoxBase::set_natural_line_length (gint natural_line_length) noexcept
{
  typedef void (*call_wrap_t) (::AdwWrapBox* self, gint natural_line_length);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_wrap_box_set_natural_line_length;
  auto natural_line_length_to_c = natural_line_length;
  call_wrap_v ((::AdwWrapBox*) (gobj_()), (gint) (natural_line_length_to_c));
}

// void adw_wrap_box_set_natural_line_length_unit (AdwWrapBox* self /*none*/, AdwLengthUnit unit);
// void adw_wrap_box_set_natural_line_length_unit (::AdwWrapBox* self /*none*/, ::AdwLengthUnit unit);
void base::WrapBoxBase::set_natural_line_length_unit (Adw::LengthUnit unit) noexcept
{
  typedef void (*call_wrap_t) (::AdwWrapBox* self, ::AdwLengthUnit unit);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_wrap_box_set_natural_line_length_unit;
  auto unit_to_c = gi::unwrap (unit);
  call_wrap_v ((::AdwWrapBox*) (gobj_()), (::AdwLengthUnit) (unit_to_c));
}

// void adw_wrap_box_set_pack_direction (AdwWrapBox* self /*none*/, AdwPackDirection pack_direction);
// void adw_wrap_box_set_pack_direction (::AdwWrapBox* self /*none*/, ::AdwPackDirection pack_direction);
void base::WrapBoxBase::set_pack_direction (Adw::PackDirection pack_direction) noexcept
{
  typedef void (*call_wrap_t) (::AdwWrapBox* self, ::AdwPackDirection pack_direction);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_wrap_box_set_pack_direction;
  auto pack_direction_to_c = gi::unwrap (pack_direction);
  call_wrap_v ((::AdwWrapBox*) (gobj_()), (::AdwPackDirection) (pack_direction_to_c));
}

// void adw_wrap_box_set_wrap_policy (AdwWrapBox* self /*none*/, AdwWrapPolicy wrap_policy);
// void adw_wrap_box_set_wrap_policy (::AdwWrapBox* self /*none*/, ::AdwWrapPolicy wrap_policy);
void base::WrapBoxBase::set_wrap_policy (Adw::WrapPolicy wrap_policy) noexcept
{
  typedef void (*call_wrap_t) (::AdwWrapBox* self, ::AdwWrapPolicy wrap_policy);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_wrap_box_set_wrap_policy;
  auto wrap_policy_to_c = gi::unwrap (wrap_policy);
  call_wrap_v ((::AdwWrapBox*) (gobj_()), (::AdwWrapPolicy) (wrap_policy_to_c));
}

// void adw_wrap_box_set_wrap_reverse (AdwWrapBox* self /*none*/, gboolean wrap_reverse);
// void adw_wrap_box_set_wrap_reverse (::AdwWrapBox* self /*none*/, gboolean wrap_reverse);
void base::WrapBoxBase::set_wrap_reverse (gboolean wrap_reverse) noexcept
{
  typedef void (*call_wrap_t) (::AdwWrapBox* self, gboolean wrap_reverse);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_wrap_box_set_wrap_reverse;
  auto wrap_reverse_to_c = wrap_reverse;
  call_wrap_v ((::AdwWrapBox*) (gobj_()), (gboolean) (wrap_reverse_to_c));
}


} // namespace base

} // namespace Adw

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<adw/wrapbox_extra_def_impl.hpp>)
#include <adw/wrapbox_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<adw/wrapbox_extra_impl.hpp>)
#include <adw/wrapbox_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Adw {

namespace impl {

namespace internal {

void WrapBoxClassDef::class_init (gpointer class_struct, gpointer factory)
{
  ::AdwWrapBoxClass *methods = (::AdwWrapBoxClass *) class_struct;
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
