// AUTO-GENERATED

#ifndef _GI_ADW_INLINEVIEWSWITCHER_IMPL_HPP_
#define _GI_ADW_INLINEVIEWSWITCHER_IMPL_HPP_

namespace gi {

namespace repository {

namespace Adw {

namespace base {

Gtk::Orientable InlineViewSwitcherBase::interface_ (gi::interface_tag<Gtk::Orientable>)
{ return gi::wrap ((Gtk::Orientable::BaseObjectType*) gobj_copy_(), gi::transfer_full); }

InlineViewSwitcherBase::operator Gtk::Orientable ()
{ return interface_ (gi::interface_tag<Gtk::Orientable>()); }

// GtkWidget* /*none*/ adw_inline_view_switcher_new ();
// ::AdwInlineViewSwitcher* /*none*/ adw_inline_view_switcher_new ();
Adw::InlineViewSwitcher base::InlineViewSwitcherBase::new_ () noexcept
{
  typedef ::AdwInlineViewSwitcher* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) adw_inline_view_switcher_new;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// gboolean adw_inline_view_switcher_get_can_shrink (AdwInlineViewSwitcher* self /*none*/);
// gboolean adw_inline_view_switcher_get_can_shrink (::AdwInlineViewSwitcher* self /*none*/);
bool base::InlineViewSwitcherBase::get_can_shrink () noexcept
{
  typedef gboolean (*call_wrap_t) (::AdwInlineViewSwitcher* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_inline_view_switcher_get_can_shrink;
  auto _temp_ret = call_wrap_v ((::AdwInlineViewSwitcher*) (gobj_()));
  return _temp_ret;
}

// AdwInlineViewSwitcherDisplayMode adw_inline_view_switcher_get_display_mode (AdwInlineViewSwitcher* self /*none*/);
// ::AdwInlineViewSwitcherDisplayMode adw_inline_view_switcher_get_display_mode (::AdwInlineViewSwitcher* self /*none*/);
Adw::InlineViewSwitcherDisplayMode base::InlineViewSwitcherBase::get_display_mode () noexcept
{
  typedef ::AdwInlineViewSwitcherDisplayMode (*call_wrap_t) (::AdwInlineViewSwitcher* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_inline_view_switcher_get_display_mode;
  auto _temp_ret = call_wrap_v ((::AdwInlineViewSwitcher*) (gobj_()));
  return gi::wrap (_temp_ret);
}

// gboolean adw_inline_view_switcher_get_homogeneous (AdwInlineViewSwitcher* self /*none*/);
// gboolean adw_inline_view_switcher_get_homogeneous (::AdwInlineViewSwitcher* self /*none*/);
bool base::InlineViewSwitcherBase::get_homogeneous () noexcept
{
  typedef gboolean (*call_wrap_t) (::AdwInlineViewSwitcher* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_inline_view_switcher_get_homogeneous;
  auto _temp_ret = call_wrap_v ((::AdwInlineViewSwitcher*) (gobj_()));
  return _temp_ret;
}

// AdwViewStack* /*none,nullable*/ adw_inline_view_switcher_get_stack (AdwInlineViewSwitcher* self /*none*/);
// ::AdwViewStack* /*none,nullable*/ adw_inline_view_switcher_get_stack (::AdwInlineViewSwitcher* self /*none*/);
Adw::ViewStack base::InlineViewSwitcherBase::get_stack () noexcept
{
  typedef ::AdwViewStack* (*call_wrap_t) (::AdwInlineViewSwitcher* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_inline_view_switcher_get_stack;
  auto _temp_ret = call_wrap_v ((::AdwInlineViewSwitcher*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// void adw_inline_view_switcher_set_can_shrink (AdwInlineViewSwitcher* self /*none*/, gboolean can_shrink);
// void adw_inline_view_switcher_set_can_shrink (::AdwInlineViewSwitcher* self /*none*/, gboolean can_shrink);
void base::InlineViewSwitcherBase::set_can_shrink (gboolean can_shrink) noexcept
{
  typedef void (*call_wrap_t) (::AdwInlineViewSwitcher* self, gboolean can_shrink);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_inline_view_switcher_set_can_shrink;
  auto can_shrink_to_c = can_shrink;
  call_wrap_v ((::AdwInlineViewSwitcher*) (gobj_()), (gboolean) (can_shrink_to_c));
}

// void adw_inline_view_switcher_set_display_mode (AdwInlineViewSwitcher* self /*none*/, AdwInlineViewSwitcherDisplayMode mode);
// void adw_inline_view_switcher_set_display_mode (::AdwInlineViewSwitcher* self /*none*/, ::AdwInlineViewSwitcherDisplayMode mode);
void base::InlineViewSwitcherBase::set_display_mode (Adw::InlineViewSwitcherDisplayMode mode) noexcept
{
  typedef void (*call_wrap_t) (::AdwInlineViewSwitcher* self, ::AdwInlineViewSwitcherDisplayMode mode);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_inline_view_switcher_set_display_mode;
  auto mode_to_c = gi::unwrap (mode);
  call_wrap_v ((::AdwInlineViewSwitcher*) (gobj_()), (::AdwInlineViewSwitcherDisplayMode) (mode_to_c));
}

// void adw_inline_view_switcher_set_homogeneous (AdwInlineViewSwitcher* self /*none*/, gboolean homogeneous);
// void adw_inline_view_switcher_set_homogeneous (::AdwInlineViewSwitcher* self /*none*/, gboolean homogeneous);
void base::InlineViewSwitcherBase::set_homogeneous (gboolean homogeneous) noexcept
{
  typedef void (*call_wrap_t) (::AdwInlineViewSwitcher* self, gboolean homogeneous);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_inline_view_switcher_set_homogeneous;
  auto homogeneous_to_c = homogeneous;
  call_wrap_v ((::AdwInlineViewSwitcher*) (gobj_()), (gboolean) (homogeneous_to_c));
}

// void adw_inline_view_switcher_set_stack (AdwInlineViewSwitcher* self /*none*/, AdwViewStack* stack /*none,nullable*/);
// void adw_inline_view_switcher_set_stack (::AdwInlineViewSwitcher* self /*none*/, ::AdwViewStack* stack /*none,nullable*/);
void base::InlineViewSwitcherBase::set_stack (Adw::ViewStack stack) noexcept
{
  typedef void (*call_wrap_t) (::AdwInlineViewSwitcher* self, ::AdwViewStack* stack);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_inline_view_switcher_set_stack;
  auto stack_to_c = gi::unwrap (stack, gi::transfer_none);
  call_wrap_v ((::AdwInlineViewSwitcher*) (gobj_()), (::AdwViewStack*) (stack_to_c));
}
void base::InlineViewSwitcherBase::set_stack () noexcept
{
  typedef void (*call_wrap_t) (::AdwInlineViewSwitcher* self, ::AdwViewStack* stack);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_inline_view_switcher_set_stack;
  auto stack_to_c = nullptr;
  call_wrap_v ((::AdwInlineViewSwitcher*) (gobj_()), (::AdwViewStack*) (stack_to_c));
}


} // namespace base

} // namespace Adw

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<adw/inlineviewswitcher_extra_def_impl.hpp>)
#include <adw/inlineviewswitcher_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<adw/inlineviewswitcher_extra_impl.hpp>)
#include <adw/inlineviewswitcher_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Adw {

namespace impl {

namespace internal {

void InlineViewSwitcherClassDef::class_init (gpointer class_struct, gpointer factory)
{
  ::AdwInlineViewSwitcherClass *methods = (::AdwInlineViewSwitcherClass *) class_struct;
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
