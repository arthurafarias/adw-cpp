// AUTO-GENERATED

#ifndef _GI_ADW_WRAPLAYOUT_IMPL_HPP_
#define _GI_ADW_WRAPLAYOUT_IMPL_HPP_

namespace gi {

namespace repository {

namespace Adw {

namespace base {

Gtk::Orientable WrapLayoutBase::interface_ (gi::interface_tag<Gtk::Orientable>)
{ return gi::wrap ((Gtk::Orientable::BaseObjectType*) gobj_copy_(), gi::transfer_full); }

WrapLayoutBase::operator Gtk::Orientable ()
{ return interface_ (gi::interface_tag<Gtk::Orientable>()); }

// GtkLayoutManager* /*full*/ adw_wrap_layout_new ();
// ::AdwWrapLayout* /*full*/ adw_wrap_layout_new ();
Adw::WrapLayout base::WrapLayoutBase::new_ () noexcept
{
  typedef ::AdwWrapLayout* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) adw_wrap_layout_new;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// float adw_wrap_layout_get_align (AdwWrapLayout* self /*none*/);
// gfloat adw_wrap_layout_get_align (::AdwWrapLayout* self /*none*/);
gfloat base::WrapLayoutBase::get_align () noexcept
{
  typedef gfloat (*call_wrap_t) (::AdwWrapLayout* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_wrap_layout_get_align;
  auto _temp_ret = call_wrap_v ((::AdwWrapLayout*) (gobj_()));
  return _temp_ret;
}

// int adw_wrap_layout_get_child_spacing (AdwWrapLayout* self /*none*/);
// gint adw_wrap_layout_get_child_spacing (::AdwWrapLayout* self /*none*/);
gint base::WrapLayoutBase::get_child_spacing () noexcept
{
  typedef gint (*call_wrap_t) (::AdwWrapLayout* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_wrap_layout_get_child_spacing;
  auto _temp_ret = call_wrap_v ((::AdwWrapLayout*) (gobj_()));
  return _temp_ret;
}

// AdwLengthUnit adw_wrap_layout_get_child_spacing_unit (AdwWrapLayout* self /*none*/);
// ::AdwLengthUnit adw_wrap_layout_get_child_spacing_unit (::AdwWrapLayout* self /*none*/);
Adw::LengthUnit base::WrapLayoutBase::get_child_spacing_unit () noexcept
{
  typedef ::AdwLengthUnit (*call_wrap_t) (::AdwWrapLayout* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_wrap_layout_get_child_spacing_unit;
  auto _temp_ret = call_wrap_v ((::AdwWrapLayout*) (gobj_()));
  return gi::wrap (_temp_ret);
}

// AdwJustifyMode adw_wrap_layout_get_justify (AdwWrapLayout* self /*none*/);
// ::AdwJustifyMode adw_wrap_layout_get_justify (::AdwWrapLayout* self /*none*/);
Adw::JustifyMode base::WrapLayoutBase::get_justify () noexcept
{
  typedef ::AdwJustifyMode (*call_wrap_t) (::AdwWrapLayout* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_wrap_layout_get_justify;
  auto _temp_ret = call_wrap_v ((::AdwWrapLayout*) (gobj_()));
  return gi::wrap (_temp_ret);
}

// gboolean adw_wrap_layout_get_justify_last_line (AdwWrapLayout* self /*none*/);
// gboolean adw_wrap_layout_get_justify_last_line (::AdwWrapLayout* self /*none*/);
bool base::WrapLayoutBase::get_justify_last_line () noexcept
{
  typedef gboolean (*call_wrap_t) (::AdwWrapLayout* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_wrap_layout_get_justify_last_line;
  auto _temp_ret = call_wrap_v ((::AdwWrapLayout*) (gobj_()));
  return _temp_ret;
}

// gboolean adw_wrap_layout_get_line_homogeneous (AdwWrapLayout* self /*none*/);
// gboolean adw_wrap_layout_get_line_homogeneous (::AdwWrapLayout* self /*none*/);
bool base::WrapLayoutBase::get_line_homogeneous () noexcept
{
  typedef gboolean (*call_wrap_t) (::AdwWrapLayout* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_wrap_layout_get_line_homogeneous;
  auto _temp_ret = call_wrap_v ((::AdwWrapLayout*) (gobj_()));
  return _temp_ret;
}

// int adw_wrap_layout_get_line_spacing (AdwWrapLayout* self /*none*/);
// gint adw_wrap_layout_get_line_spacing (::AdwWrapLayout* self /*none*/);
gint base::WrapLayoutBase::get_line_spacing () noexcept
{
  typedef gint (*call_wrap_t) (::AdwWrapLayout* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_wrap_layout_get_line_spacing;
  auto _temp_ret = call_wrap_v ((::AdwWrapLayout*) (gobj_()));
  return _temp_ret;
}

// AdwLengthUnit adw_wrap_layout_get_line_spacing_unit (AdwWrapLayout* self /*none*/);
// ::AdwLengthUnit adw_wrap_layout_get_line_spacing_unit (::AdwWrapLayout* self /*none*/);
Adw::LengthUnit base::WrapLayoutBase::get_line_spacing_unit () noexcept
{
  typedef ::AdwLengthUnit (*call_wrap_t) (::AdwWrapLayout* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_wrap_layout_get_line_spacing_unit;
  auto _temp_ret = call_wrap_v ((::AdwWrapLayout*) (gobj_()));
  return gi::wrap (_temp_ret);
}

// int adw_wrap_layout_get_natural_line_length (AdwWrapLayout* self /*none*/);
// gint adw_wrap_layout_get_natural_line_length (::AdwWrapLayout* self /*none*/);
gint base::WrapLayoutBase::get_natural_line_length () noexcept
{
  typedef gint (*call_wrap_t) (::AdwWrapLayout* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_wrap_layout_get_natural_line_length;
  auto _temp_ret = call_wrap_v ((::AdwWrapLayout*) (gobj_()));
  return _temp_ret;
}

// AdwLengthUnit adw_wrap_layout_get_natural_line_length_unit (AdwWrapLayout* self /*none*/);
// ::AdwLengthUnit adw_wrap_layout_get_natural_line_length_unit (::AdwWrapLayout* self /*none*/);
Adw::LengthUnit base::WrapLayoutBase::get_natural_line_length_unit () noexcept
{
  typedef ::AdwLengthUnit (*call_wrap_t) (::AdwWrapLayout* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_wrap_layout_get_natural_line_length_unit;
  auto _temp_ret = call_wrap_v ((::AdwWrapLayout*) (gobj_()));
  return gi::wrap (_temp_ret);
}

// AdwPackDirection adw_wrap_layout_get_pack_direction (AdwWrapLayout* self /*none*/);
// ::AdwPackDirection adw_wrap_layout_get_pack_direction (::AdwWrapLayout* self /*none*/);
Adw::PackDirection base::WrapLayoutBase::get_pack_direction () noexcept
{
  typedef ::AdwPackDirection (*call_wrap_t) (::AdwWrapLayout* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_wrap_layout_get_pack_direction;
  auto _temp_ret = call_wrap_v ((::AdwWrapLayout*) (gobj_()));
  return gi::wrap (_temp_ret);
}

// AdwWrapPolicy adw_wrap_layout_get_wrap_policy (AdwWrapLayout* self /*none*/);
// ::AdwWrapPolicy adw_wrap_layout_get_wrap_policy (::AdwWrapLayout* self /*none*/);
Adw::WrapPolicy base::WrapLayoutBase::get_wrap_policy () noexcept
{
  typedef ::AdwWrapPolicy (*call_wrap_t) (::AdwWrapLayout* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_wrap_layout_get_wrap_policy;
  auto _temp_ret = call_wrap_v ((::AdwWrapLayout*) (gobj_()));
  return gi::wrap (_temp_ret);
}

// gboolean adw_wrap_layout_get_wrap_reverse (AdwWrapLayout* self /*none*/);
// gboolean adw_wrap_layout_get_wrap_reverse (::AdwWrapLayout* self /*none*/);
bool base::WrapLayoutBase::get_wrap_reverse () noexcept
{
  typedef gboolean (*call_wrap_t) (::AdwWrapLayout* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_wrap_layout_get_wrap_reverse;
  auto _temp_ret = call_wrap_v ((::AdwWrapLayout*) (gobj_()));
  return _temp_ret;
}

// void adw_wrap_layout_set_align (AdwWrapLayout* self /*none*/, float align);
// void adw_wrap_layout_set_align (::AdwWrapLayout* self /*none*/, gfloat align);
void base::WrapLayoutBase::set_align (gfloat align) noexcept
{
  typedef void (*call_wrap_t) (::AdwWrapLayout* self, gfloat align);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_wrap_layout_set_align;
  auto align_to_c = align;
  call_wrap_v ((::AdwWrapLayout*) (gobj_()), (gfloat) (align_to_c));
}

// void adw_wrap_layout_set_child_spacing (AdwWrapLayout* self /*none*/, int child_spacing);
// void adw_wrap_layout_set_child_spacing (::AdwWrapLayout* self /*none*/, gint child_spacing);
void base::WrapLayoutBase::set_child_spacing (gint child_spacing) noexcept
{
  typedef void (*call_wrap_t) (::AdwWrapLayout* self, gint child_spacing);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_wrap_layout_set_child_spacing;
  auto child_spacing_to_c = child_spacing;
  call_wrap_v ((::AdwWrapLayout*) (gobj_()), (gint) (child_spacing_to_c));
}

// void adw_wrap_layout_set_child_spacing_unit (AdwWrapLayout* self /*none*/, AdwLengthUnit unit);
// void adw_wrap_layout_set_child_spacing_unit (::AdwWrapLayout* self /*none*/, ::AdwLengthUnit unit);
void base::WrapLayoutBase::set_child_spacing_unit (Adw::LengthUnit unit) noexcept
{
  typedef void (*call_wrap_t) (::AdwWrapLayout* self, ::AdwLengthUnit unit);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_wrap_layout_set_child_spacing_unit;
  auto unit_to_c = gi::unwrap (unit);
  call_wrap_v ((::AdwWrapLayout*) (gobj_()), (::AdwLengthUnit) (unit_to_c));
}

// void adw_wrap_layout_set_justify (AdwWrapLayout* self /*none*/, AdwJustifyMode justify);
// void adw_wrap_layout_set_justify (::AdwWrapLayout* self /*none*/, ::AdwJustifyMode justify);
void base::WrapLayoutBase::set_justify (Adw::JustifyMode justify) noexcept
{
  typedef void (*call_wrap_t) (::AdwWrapLayout* self, ::AdwJustifyMode justify);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_wrap_layout_set_justify;
  auto justify_to_c = gi::unwrap (justify);
  call_wrap_v ((::AdwWrapLayout*) (gobj_()), (::AdwJustifyMode) (justify_to_c));
}

// void adw_wrap_layout_set_justify_last_line (AdwWrapLayout* self /*none*/, gboolean justify_last_line);
// void adw_wrap_layout_set_justify_last_line (::AdwWrapLayout* self /*none*/, gboolean justify_last_line);
void base::WrapLayoutBase::set_justify_last_line (gboolean justify_last_line) noexcept
{
  typedef void (*call_wrap_t) (::AdwWrapLayout* self, gboolean justify_last_line);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_wrap_layout_set_justify_last_line;
  auto justify_last_line_to_c = justify_last_line;
  call_wrap_v ((::AdwWrapLayout*) (gobj_()), (gboolean) (justify_last_line_to_c));
}

// void adw_wrap_layout_set_line_homogeneous (AdwWrapLayout* self /*none*/, gboolean homogeneous);
// void adw_wrap_layout_set_line_homogeneous (::AdwWrapLayout* self /*none*/, gboolean homogeneous);
void base::WrapLayoutBase::set_line_homogeneous (gboolean homogeneous) noexcept
{
  typedef void (*call_wrap_t) (::AdwWrapLayout* self, gboolean homogeneous);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_wrap_layout_set_line_homogeneous;
  auto homogeneous_to_c = homogeneous;
  call_wrap_v ((::AdwWrapLayout*) (gobj_()), (gboolean) (homogeneous_to_c));
}

// void adw_wrap_layout_set_line_spacing (AdwWrapLayout* self /*none*/, int line_spacing);
// void adw_wrap_layout_set_line_spacing (::AdwWrapLayout* self /*none*/, gint line_spacing);
void base::WrapLayoutBase::set_line_spacing (gint line_spacing) noexcept
{
  typedef void (*call_wrap_t) (::AdwWrapLayout* self, gint line_spacing);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_wrap_layout_set_line_spacing;
  auto line_spacing_to_c = line_spacing;
  call_wrap_v ((::AdwWrapLayout*) (gobj_()), (gint) (line_spacing_to_c));
}

// void adw_wrap_layout_set_line_spacing_unit (AdwWrapLayout* self /*none*/, AdwLengthUnit unit);
// void adw_wrap_layout_set_line_spacing_unit (::AdwWrapLayout* self /*none*/, ::AdwLengthUnit unit);
void base::WrapLayoutBase::set_line_spacing_unit (Adw::LengthUnit unit) noexcept
{
  typedef void (*call_wrap_t) (::AdwWrapLayout* self, ::AdwLengthUnit unit);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_wrap_layout_set_line_spacing_unit;
  auto unit_to_c = gi::unwrap (unit);
  call_wrap_v ((::AdwWrapLayout*) (gobj_()), (::AdwLengthUnit) (unit_to_c));
}

// void adw_wrap_layout_set_natural_line_length (AdwWrapLayout* self /*none*/, int natural_line_length);
// void adw_wrap_layout_set_natural_line_length (::AdwWrapLayout* self /*none*/, gint natural_line_length);
void base::WrapLayoutBase::set_natural_line_length (gint natural_line_length) noexcept
{
  typedef void (*call_wrap_t) (::AdwWrapLayout* self, gint natural_line_length);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_wrap_layout_set_natural_line_length;
  auto natural_line_length_to_c = natural_line_length;
  call_wrap_v ((::AdwWrapLayout*) (gobj_()), (gint) (natural_line_length_to_c));
}

// void adw_wrap_layout_set_natural_line_length_unit (AdwWrapLayout* self /*none*/, AdwLengthUnit unit);
// void adw_wrap_layout_set_natural_line_length_unit (::AdwWrapLayout* self /*none*/, ::AdwLengthUnit unit);
void base::WrapLayoutBase::set_natural_line_length_unit (Adw::LengthUnit unit) noexcept
{
  typedef void (*call_wrap_t) (::AdwWrapLayout* self, ::AdwLengthUnit unit);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_wrap_layout_set_natural_line_length_unit;
  auto unit_to_c = gi::unwrap (unit);
  call_wrap_v ((::AdwWrapLayout*) (gobj_()), (::AdwLengthUnit) (unit_to_c));
}

// void adw_wrap_layout_set_pack_direction (AdwWrapLayout* self /*none*/, AdwPackDirection pack_direction);
// void adw_wrap_layout_set_pack_direction (::AdwWrapLayout* self /*none*/, ::AdwPackDirection pack_direction);
void base::WrapLayoutBase::set_pack_direction (Adw::PackDirection pack_direction) noexcept
{
  typedef void (*call_wrap_t) (::AdwWrapLayout* self, ::AdwPackDirection pack_direction);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_wrap_layout_set_pack_direction;
  auto pack_direction_to_c = gi::unwrap (pack_direction);
  call_wrap_v ((::AdwWrapLayout*) (gobj_()), (::AdwPackDirection) (pack_direction_to_c));
}

// void adw_wrap_layout_set_wrap_policy (AdwWrapLayout* self /*none*/, AdwWrapPolicy wrap_policy);
// void adw_wrap_layout_set_wrap_policy (::AdwWrapLayout* self /*none*/, ::AdwWrapPolicy wrap_policy);
void base::WrapLayoutBase::set_wrap_policy (Adw::WrapPolicy wrap_policy) noexcept
{
  typedef void (*call_wrap_t) (::AdwWrapLayout* self, ::AdwWrapPolicy wrap_policy);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_wrap_layout_set_wrap_policy;
  auto wrap_policy_to_c = gi::unwrap (wrap_policy);
  call_wrap_v ((::AdwWrapLayout*) (gobj_()), (::AdwWrapPolicy) (wrap_policy_to_c));
}

// void adw_wrap_layout_set_wrap_reverse (AdwWrapLayout* self /*none*/, gboolean wrap_reverse);
// void adw_wrap_layout_set_wrap_reverse (::AdwWrapLayout* self /*none*/, gboolean wrap_reverse);
void base::WrapLayoutBase::set_wrap_reverse (gboolean wrap_reverse) noexcept
{
  typedef void (*call_wrap_t) (::AdwWrapLayout* self, gboolean wrap_reverse);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_wrap_layout_set_wrap_reverse;
  auto wrap_reverse_to_c = wrap_reverse;
  call_wrap_v ((::AdwWrapLayout*) (gobj_()), (gboolean) (wrap_reverse_to_c));
}


} // namespace base

} // namespace Adw

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<adw/wraplayout_extra_def_impl.hpp>)
#include <adw/wraplayout_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<adw/wraplayout_extra_impl.hpp>)
#include <adw/wraplayout_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Adw {

namespace impl {

namespace internal {

void WrapLayoutClassDef::class_init (gpointer class_struct, gpointer factory)
{
  ::AdwWrapLayoutClass *methods = (::AdwWrapLayoutClass *) class_struct;
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
