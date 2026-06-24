// AUTO-GENERATED

#ifndef _GI_ADW_CAROUSEL_IMPL_HPP_
#define _GI_ADW_CAROUSEL_IMPL_HPP_

namespace gi {

namespace repository {

namespace Adw {

namespace base {

Adw::Swipeable CarouselBase::interface_ (gi::interface_tag<Adw::Swipeable>)
{ return gi::wrap ((Adw::Swipeable::BaseObjectType*) gobj_copy_(), gi::transfer_full); }

CarouselBase::operator Adw::Swipeable ()
{ return interface_ (gi::interface_tag<Adw::Swipeable>()); }

Gtk::Orientable CarouselBase::interface_ (gi::interface_tag<Gtk::Orientable>)
{ return gi::wrap ((Gtk::Orientable::BaseObjectType*) gobj_copy_(), gi::transfer_full); }

CarouselBase::operator Gtk::Orientable ()
{ return interface_ (gi::interface_tag<Gtk::Orientable>()); }

// GtkWidget* /*none*/ adw_carousel_new ();
// ::AdwCarousel* /*none*/ adw_carousel_new ();
Adw::Carousel base::CarouselBase::new_ () noexcept
{
  typedef ::AdwCarousel* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) adw_carousel_new;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// void adw_carousel_append (AdwCarousel* self /*none*/, GtkWidget* child /*none*/);
// void adw_carousel_append (::AdwCarousel* self /*none*/, ::GtkWidget* child /*none*/);
void base::CarouselBase::append (Gtk::Widget child) noexcept
{
  typedef void (*call_wrap_t) (::AdwCarousel* self, ::GtkWidget* child);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_carousel_append;
  auto child_to_c = gi::unwrap (child, gi::transfer_none);
  call_wrap_v ((::AdwCarousel*) (gobj_()), (::GtkWidget*) (child_to_c));
}

// gboolean adw_carousel_get_allow_long_swipes (AdwCarousel* self /*none*/);
// gboolean adw_carousel_get_allow_long_swipes (::AdwCarousel* self /*none*/);
bool base::CarouselBase::get_allow_long_swipes () noexcept
{
  typedef gboolean (*call_wrap_t) (::AdwCarousel* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_carousel_get_allow_long_swipes;
  auto _temp_ret = call_wrap_v ((::AdwCarousel*) (gobj_()));
  return _temp_ret;
}

// gboolean adw_carousel_get_allow_mouse_drag (AdwCarousel* self /*none*/);
// gboolean adw_carousel_get_allow_mouse_drag (::AdwCarousel* self /*none*/);
bool base::CarouselBase::get_allow_mouse_drag () noexcept
{
  typedef gboolean (*call_wrap_t) (::AdwCarousel* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_carousel_get_allow_mouse_drag;
  auto _temp_ret = call_wrap_v ((::AdwCarousel*) (gobj_()));
  return _temp_ret;
}

// gboolean adw_carousel_get_allow_scroll_wheel (AdwCarousel* self /*none*/);
// gboolean adw_carousel_get_allow_scroll_wheel (::AdwCarousel* self /*none*/);
bool base::CarouselBase::get_allow_scroll_wheel () noexcept
{
  typedef gboolean (*call_wrap_t) (::AdwCarousel* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_carousel_get_allow_scroll_wheel;
  auto _temp_ret = call_wrap_v ((::AdwCarousel*) (gobj_()));
  return _temp_ret;
}

// gboolean adw_carousel_get_interactive (AdwCarousel* self /*none*/);
// gboolean adw_carousel_get_interactive (::AdwCarousel* self /*none*/);
bool base::CarouselBase::get_interactive () noexcept
{
  typedef gboolean (*call_wrap_t) (::AdwCarousel* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_carousel_get_interactive;
  auto _temp_ret = call_wrap_v ((::AdwCarousel*) (gobj_()));
  return _temp_ret;
}

// guint adw_carousel_get_n_pages (AdwCarousel* self /*none*/);
// guint adw_carousel_get_n_pages (::AdwCarousel* self /*none*/);
guint base::CarouselBase::get_n_pages () noexcept
{
  typedef guint (*call_wrap_t) (::AdwCarousel* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_carousel_get_n_pages;
  auto _temp_ret = call_wrap_v ((::AdwCarousel*) (gobj_()));
  return _temp_ret;
}

// GtkWidget* /*none*/ adw_carousel_get_nth_page (AdwCarousel* self /*none*/, guint n);
// ::GtkWidget* /*none*/ adw_carousel_get_nth_page (::AdwCarousel* self /*none*/, guint n);
Gtk::Widget base::CarouselBase::get_nth_page (guint n) noexcept
{
  typedef ::GtkWidget* (*call_wrap_t) (::AdwCarousel* self, guint n);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_carousel_get_nth_page;
  auto n_to_c = n;
  auto _temp_ret = call_wrap_v ((::AdwCarousel*) (gobj_()), (guint) (n_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// double adw_carousel_get_position (AdwCarousel* self /*none*/);
// gdouble adw_carousel_get_position (::AdwCarousel* self /*none*/);
gdouble base::CarouselBase::get_position () noexcept
{
  typedef gdouble (*call_wrap_t) (::AdwCarousel* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_carousel_get_position;
  auto _temp_ret = call_wrap_v ((::AdwCarousel*) (gobj_()));
  return _temp_ret;
}

// guint adw_carousel_get_reveal_duration (AdwCarousel* self /*none*/);
// guint adw_carousel_get_reveal_duration (::AdwCarousel* self /*none*/);
guint base::CarouselBase::get_reveal_duration () noexcept
{
  typedef guint (*call_wrap_t) (::AdwCarousel* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_carousel_get_reveal_duration;
  auto _temp_ret = call_wrap_v ((::AdwCarousel*) (gobj_()));
  return _temp_ret;
}

// AdwSpringParams* /*full*/ adw_carousel_get_scroll_params (AdwCarousel* self /*none*/);
// ::AdwSpringParams* /*full*/ adw_carousel_get_scroll_params (::AdwCarousel* self /*none*/);
Adw::SpringParams base::CarouselBase::get_scroll_params () noexcept
{
  typedef ::AdwSpringParams* (*call_wrap_t) (::AdwCarousel* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_carousel_get_scroll_params;
  auto _temp_ret = call_wrap_v ((::AdwCarousel*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// guint adw_carousel_get_spacing (AdwCarousel* self /*none*/);
// guint adw_carousel_get_spacing (::AdwCarousel* self /*none*/);
guint base::CarouselBase::get_spacing () noexcept
{
  typedef guint (*call_wrap_t) (::AdwCarousel* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_carousel_get_spacing;
  auto _temp_ret = call_wrap_v ((::AdwCarousel*) (gobj_()));
  return _temp_ret;
}

// void adw_carousel_insert (AdwCarousel* self /*none*/, GtkWidget* child /*none*/, int position);
// void adw_carousel_insert (::AdwCarousel* self /*none*/, ::GtkWidget* child /*none*/, gint position);
void base::CarouselBase::insert (Gtk::Widget child, gint position) noexcept
{
  typedef void (*call_wrap_t) (::AdwCarousel* self, ::GtkWidget* child, gint position);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_carousel_insert;
  auto position_to_c = position;
  auto child_to_c = gi::unwrap (child, gi::transfer_none);
  call_wrap_v ((::AdwCarousel*) (gobj_()), (::GtkWidget*) (child_to_c), (gint) (position_to_c));
}

// void adw_carousel_prepend (AdwCarousel* self /*none*/, GtkWidget* child /*none*/);
// void adw_carousel_prepend (::AdwCarousel* self /*none*/, ::GtkWidget* child /*none*/);
void base::CarouselBase::prepend (Gtk::Widget child) noexcept
{
  typedef void (*call_wrap_t) (::AdwCarousel* self, ::GtkWidget* child);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_carousel_prepend;
  auto child_to_c = gi::unwrap (child, gi::transfer_none);
  call_wrap_v ((::AdwCarousel*) (gobj_()), (::GtkWidget*) (child_to_c));
}

// void adw_carousel_remove (AdwCarousel* self /*none*/, GtkWidget* child /*none*/);
// void adw_carousel_remove (::AdwCarousel* self /*none*/, ::GtkWidget* child /*none*/);
void base::CarouselBase::remove (Gtk::Widget child) noexcept
{
  typedef void (*call_wrap_t) (::AdwCarousel* self, ::GtkWidget* child);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_carousel_remove;
  auto child_to_c = gi::unwrap (child, gi::transfer_none);
  call_wrap_v ((::AdwCarousel*) (gobj_()), (::GtkWidget*) (child_to_c));
}

// void adw_carousel_reorder (AdwCarousel* self /*none*/, GtkWidget* child /*none*/, int position);
// void adw_carousel_reorder (::AdwCarousel* self /*none*/, ::GtkWidget* child /*none*/, gint position);
void base::CarouselBase::reorder (Gtk::Widget child, gint position) noexcept
{
  typedef void (*call_wrap_t) (::AdwCarousel* self, ::GtkWidget* child, gint position);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_carousel_reorder;
  auto position_to_c = position;
  auto child_to_c = gi::unwrap (child, gi::transfer_none);
  call_wrap_v ((::AdwCarousel*) (gobj_()), (::GtkWidget*) (child_to_c), (gint) (position_to_c));
}

// void adw_carousel_scroll_to (AdwCarousel* self /*none*/, GtkWidget* widget /*none*/, gboolean animate);
// void adw_carousel_scroll_to (::AdwCarousel* self /*none*/, ::GtkWidget* widget /*none*/, gboolean animate);
void base::CarouselBase::scroll_to (Gtk::Widget widget, gboolean animate) noexcept
{
  typedef void (*call_wrap_t) (::AdwCarousel* self, ::GtkWidget* widget, gboolean animate);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_carousel_scroll_to;
  auto animate_to_c = animate;
  auto widget_to_c = gi::unwrap (widget, gi::transfer_none);
  call_wrap_v ((::AdwCarousel*) (gobj_()), (::GtkWidget*) (widget_to_c), (gboolean) (animate_to_c));
}

// void adw_carousel_set_allow_long_swipes (AdwCarousel* self /*none*/, gboolean allow_long_swipes);
// void adw_carousel_set_allow_long_swipes (::AdwCarousel* self /*none*/, gboolean allow_long_swipes);
void base::CarouselBase::set_allow_long_swipes (gboolean allow_long_swipes) noexcept
{
  typedef void (*call_wrap_t) (::AdwCarousel* self, gboolean allow_long_swipes);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_carousel_set_allow_long_swipes;
  auto allow_long_swipes_to_c = allow_long_swipes;
  call_wrap_v ((::AdwCarousel*) (gobj_()), (gboolean) (allow_long_swipes_to_c));
}

// void adw_carousel_set_allow_mouse_drag (AdwCarousel* self /*none*/, gboolean allow_mouse_drag);
// void adw_carousel_set_allow_mouse_drag (::AdwCarousel* self /*none*/, gboolean allow_mouse_drag);
void base::CarouselBase::set_allow_mouse_drag (gboolean allow_mouse_drag) noexcept
{
  typedef void (*call_wrap_t) (::AdwCarousel* self, gboolean allow_mouse_drag);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_carousel_set_allow_mouse_drag;
  auto allow_mouse_drag_to_c = allow_mouse_drag;
  call_wrap_v ((::AdwCarousel*) (gobj_()), (gboolean) (allow_mouse_drag_to_c));
}

// void adw_carousel_set_allow_scroll_wheel (AdwCarousel* self /*none*/, gboolean allow_scroll_wheel);
// void adw_carousel_set_allow_scroll_wheel (::AdwCarousel* self /*none*/, gboolean allow_scroll_wheel);
void base::CarouselBase::set_allow_scroll_wheel (gboolean allow_scroll_wheel) noexcept
{
  typedef void (*call_wrap_t) (::AdwCarousel* self, gboolean allow_scroll_wheel);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_carousel_set_allow_scroll_wheel;
  auto allow_scroll_wheel_to_c = allow_scroll_wheel;
  call_wrap_v ((::AdwCarousel*) (gobj_()), (gboolean) (allow_scroll_wheel_to_c));
}

// void adw_carousel_set_interactive (AdwCarousel* self /*none*/, gboolean interactive);
// void adw_carousel_set_interactive (::AdwCarousel* self /*none*/, gboolean interactive);
void base::CarouselBase::set_interactive (gboolean interactive) noexcept
{
  typedef void (*call_wrap_t) (::AdwCarousel* self, gboolean interactive);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_carousel_set_interactive;
  auto interactive_to_c = interactive;
  call_wrap_v ((::AdwCarousel*) (gobj_()), (gboolean) (interactive_to_c));
}

// void adw_carousel_set_reveal_duration (AdwCarousel* self /*none*/, guint reveal_duration);
// void adw_carousel_set_reveal_duration (::AdwCarousel* self /*none*/, guint reveal_duration);
void base::CarouselBase::set_reveal_duration (guint reveal_duration) noexcept
{
  typedef void (*call_wrap_t) (::AdwCarousel* self, guint reveal_duration);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_carousel_set_reveal_duration;
  auto reveal_duration_to_c = reveal_duration;
  call_wrap_v ((::AdwCarousel*) (gobj_()), (guint) (reveal_duration_to_c));
}

// void adw_carousel_set_scroll_params (AdwCarousel* self /*none*/, AdwSpringParams* params /*none*/);
// void adw_carousel_set_scroll_params (::AdwCarousel* self /*none*/, ::AdwSpringParams* params /*none*/);
void base::CarouselBase::set_scroll_params (Adw::SpringParams_Ref params) noexcept
{
  typedef void (*call_wrap_t) (::AdwCarousel* self, ::AdwSpringParams* params);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_carousel_set_scroll_params;
  auto params_to_c = gi::unwrap (params, gi::transfer_none);
  call_wrap_v ((::AdwCarousel*) (gobj_()), (::AdwSpringParams*) (params_to_c));
}

// void adw_carousel_set_spacing (AdwCarousel* self /*none*/, guint spacing);
// void adw_carousel_set_spacing (::AdwCarousel* self /*none*/, guint spacing);
void base::CarouselBase::set_spacing (guint spacing) noexcept
{
  typedef void (*call_wrap_t) (::AdwCarousel* self, guint spacing);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_carousel_set_spacing;
  auto spacing_to_c = spacing;
  call_wrap_v ((::AdwCarousel*) (gobj_()), (guint) (spacing_to_c));
}



} // namespace base

} // namespace Adw

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<adw/carousel_extra_def_impl.hpp>)
#include <adw/carousel_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<adw/carousel_extra_impl.hpp>)
#include <adw/carousel_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Adw {

namespace impl {

namespace internal {

void CarouselClassDef::class_init (gpointer class_struct, gpointer factory)
{
  ::AdwCarouselClass *methods = (::AdwCarouselClass *) class_struct;
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
