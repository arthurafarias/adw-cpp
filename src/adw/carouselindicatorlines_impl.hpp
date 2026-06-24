// AUTO-GENERATED

#ifndef _GI_ADW_CAROUSELINDICATORLINES_IMPL_HPP_
#define _GI_ADW_CAROUSELINDICATORLINES_IMPL_HPP_

namespace gi {

namespace repository {

namespace Adw {

namespace base {

Gtk::Orientable CarouselIndicatorLinesBase::interface_ (gi::interface_tag<Gtk::Orientable>)
{ return gi::wrap ((Gtk::Orientable::BaseObjectType*) gobj_copy_(), gi::transfer_full); }

CarouselIndicatorLinesBase::operator Gtk::Orientable ()
{ return interface_ (gi::interface_tag<Gtk::Orientable>()); }

// GtkWidget* /*none*/ adw_carousel_indicator_lines_new ();
// ::AdwCarouselIndicatorLines* /*none*/ adw_carousel_indicator_lines_new ();
Adw::CarouselIndicatorLines base::CarouselIndicatorLinesBase::new_ () noexcept
{
  typedef ::AdwCarouselIndicatorLines* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) adw_carousel_indicator_lines_new;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// AdwCarousel* /*none,nullable*/ adw_carousel_indicator_lines_get_carousel (AdwCarouselIndicatorLines* self /*none*/);
// ::AdwCarousel* /*none,nullable*/ adw_carousel_indicator_lines_get_carousel (::AdwCarouselIndicatorLines* self /*none*/);
Adw::Carousel base::CarouselIndicatorLinesBase::get_carousel () noexcept
{
  typedef ::AdwCarousel* (*call_wrap_t) (::AdwCarouselIndicatorLines* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_carousel_indicator_lines_get_carousel;
  auto _temp_ret = call_wrap_v ((::AdwCarouselIndicatorLines*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// void adw_carousel_indicator_lines_set_carousel (AdwCarouselIndicatorLines* self /*none*/, AdwCarousel* carousel /*none,nullable*/);
// void adw_carousel_indicator_lines_set_carousel (::AdwCarouselIndicatorLines* self /*none*/, ::AdwCarousel* carousel /*none,nullable*/);
void base::CarouselIndicatorLinesBase::set_carousel (Adw::Carousel carousel) noexcept
{
  typedef void (*call_wrap_t) (::AdwCarouselIndicatorLines* self, ::AdwCarousel* carousel);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_carousel_indicator_lines_set_carousel;
  auto carousel_to_c = gi::unwrap (carousel, gi::transfer_none);
  call_wrap_v ((::AdwCarouselIndicatorLines*) (gobj_()), (::AdwCarousel*) (carousel_to_c));
}
void base::CarouselIndicatorLinesBase::set_carousel () noexcept
{
  typedef void (*call_wrap_t) (::AdwCarouselIndicatorLines* self, ::AdwCarousel* carousel);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_carousel_indicator_lines_set_carousel;
  auto carousel_to_c = nullptr;
  call_wrap_v ((::AdwCarouselIndicatorLines*) (gobj_()), (::AdwCarousel*) (carousel_to_c));
}


} // namespace base

} // namespace Adw

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<adw/carouselindicatorlines_extra_def_impl.hpp>)
#include <adw/carouselindicatorlines_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<adw/carouselindicatorlines_extra_impl.hpp>)
#include <adw/carouselindicatorlines_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Adw {

namespace impl {

namespace internal {

void CarouselIndicatorLinesClassDef::class_init (gpointer class_struct, gpointer factory)
{
  ::AdwCarouselIndicatorLinesClass *methods = (::AdwCarouselIndicatorLinesClass *) class_struct;
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
