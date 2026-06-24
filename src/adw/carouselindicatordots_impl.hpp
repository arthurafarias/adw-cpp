// AUTO-GENERATED

#ifndef _GI_ADW_CAROUSELINDICATORDOTS_IMPL_HPP_
#define _GI_ADW_CAROUSELINDICATORDOTS_IMPL_HPP_

namespace gi {

namespace repository {

namespace Adw {

namespace base {

Gtk::Orientable CarouselIndicatorDotsBase::interface_ (gi::interface_tag<Gtk::Orientable>)
{ return gi::wrap ((Gtk::Orientable::BaseObjectType*) gobj_copy_(), gi::transfer_full); }

CarouselIndicatorDotsBase::operator Gtk::Orientable ()
{ return interface_ (gi::interface_tag<Gtk::Orientable>()); }

// GtkWidget* /*none*/ adw_carousel_indicator_dots_new ();
// ::AdwCarouselIndicatorDots* /*none*/ adw_carousel_indicator_dots_new ();
Adw::CarouselIndicatorDots base::CarouselIndicatorDotsBase::new_ () noexcept
{
  typedef ::AdwCarouselIndicatorDots* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) adw_carousel_indicator_dots_new;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// AdwCarousel* /*none,nullable*/ adw_carousel_indicator_dots_get_carousel (AdwCarouselIndicatorDots* self /*none*/);
// ::AdwCarousel* /*none,nullable*/ adw_carousel_indicator_dots_get_carousel (::AdwCarouselIndicatorDots* self /*none*/);
Adw::Carousel base::CarouselIndicatorDotsBase::get_carousel () noexcept
{
  typedef ::AdwCarousel* (*call_wrap_t) (::AdwCarouselIndicatorDots* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_carousel_indicator_dots_get_carousel;
  auto _temp_ret = call_wrap_v ((::AdwCarouselIndicatorDots*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// void adw_carousel_indicator_dots_set_carousel (AdwCarouselIndicatorDots* self /*none*/, AdwCarousel* carousel /*none,nullable*/);
// void adw_carousel_indicator_dots_set_carousel (::AdwCarouselIndicatorDots* self /*none*/, ::AdwCarousel* carousel /*none,nullable*/);
void base::CarouselIndicatorDotsBase::set_carousel (Adw::Carousel carousel) noexcept
{
  typedef void (*call_wrap_t) (::AdwCarouselIndicatorDots* self, ::AdwCarousel* carousel);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_carousel_indicator_dots_set_carousel;
  auto carousel_to_c = gi::unwrap (carousel, gi::transfer_none);
  call_wrap_v ((::AdwCarouselIndicatorDots*) (gobj_()), (::AdwCarousel*) (carousel_to_c));
}
void base::CarouselIndicatorDotsBase::set_carousel () noexcept
{
  typedef void (*call_wrap_t) (::AdwCarouselIndicatorDots* self, ::AdwCarousel* carousel);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_carousel_indicator_dots_set_carousel;
  auto carousel_to_c = nullptr;
  call_wrap_v ((::AdwCarouselIndicatorDots*) (gobj_()), (::AdwCarousel*) (carousel_to_c));
}


} // namespace base

} // namespace Adw

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<adw/carouselindicatordots_extra_def_impl.hpp>)
#include <adw/carouselindicatordots_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<adw/carouselindicatordots_extra_impl.hpp>)
#include <adw/carouselindicatordots_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Adw {

namespace impl {

namespace internal {

void CarouselIndicatorDotsClassDef::class_init (gpointer class_struct, gpointer factory)
{
  ::AdwCarouselIndicatorDotsClass *methods = (::AdwCarouselIndicatorDotsClass *) class_struct;
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
