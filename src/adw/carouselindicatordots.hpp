// AUTO-GENERATED

#ifndef _GI_ADW_CAROUSELINDICATORDOTS_HPP_
#define _GI_ADW_CAROUSELINDICATORDOTS_HPP_


namespace gi {

namespace repository {

namespace Adw {

class Carousel;

class CarouselIndicatorDots;

namespace base {


#define GI_ADW_CAROUSELINDICATORDOTS_BASE base::CarouselIndicatorDotsBase
class CarouselIndicatorDotsBase : public Gtk::Widget
{
typedef Gtk::Widget super_type;
public:
typedef ::AdwCarouselIndicatorDots BaseObjectType;

CarouselIndicatorDotsBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return adw_carousel_indicator_dots_get_type(); } 

GI_INLINE_DECL Gtk::Orientable interface_ (gi::interface_tag<Gtk::Orientable>);

GI_INLINE_DECL operator Gtk::Orientable ();

// GtkWidget* /*none*/ adw_carousel_indicator_dots_new ();
// ::AdwCarouselIndicatorDots* /*none*/ adw_carousel_indicator_dots_new ();
static GI_INLINE_DECL Adw::CarouselIndicatorDots new_ () noexcept;

// AdwCarousel* /*none,nullable*/ adw_carousel_indicator_dots_get_carousel (AdwCarouselIndicatorDots* self /*none*/);
// ::AdwCarousel* /*none,nullable*/ adw_carousel_indicator_dots_get_carousel (::AdwCarouselIndicatorDots* self /*none*/);
GI_INLINE_DECL Adw::Carousel get_carousel () noexcept;

// void adw_carousel_indicator_dots_set_carousel (AdwCarouselIndicatorDots* self /*none*/, AdwCarousel* carousel /*none,nullable*/);
// void adw_carousel_indicator_dots_set_carousel (::AdwCarouselIndicatorDots* self /*none*/, ::AdwCarousel* carousel /*none,nullable*/);
GI_INLINE_DECL void set_carousel (Adw::Carousel carousel) noexcept;
GI_INLINE_DECL void set_carousel () noexcept;

gi::property_proxy<Adw::Carousel, base::CarouselIndicatorDotsBase> property_carousel()
{ return gi::property_proxy<Adw::Carousel, base::CarouselIndicatorDotsBase> (*this, "carousel"); }
const gi::property_proxy<Adw::Carousel, base::CarouselIndicatorDotsBase> property_carousel() const
{ return gi::property_proxy<Adw::Carousel, base::CarouselIndicatorDotsBase> (*this, "carousel"); }

}; // class

} // namespace base

} // namespace Adw

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<adw/carouselindicatordots_extra_def.hpp>)
#include <adw/carouselindicatordots_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<adw/carouselindicatordots_extra.hpp>)
#include <adw/carouselindicatordots_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Adw {

class CarouselIndicatorDots : public GI_ADW_CAROUSELINDICATORDOTS_BASE
{ typedef GI_ADW_CAROUSELINDICATORDOTS_BASE super_type; using super_type::super_type; };

} // namespace Adw

template<> struct declare_cpptype_of<::AdwCarouselIndicatorDots>
{ typedef Adw::CarouselIndicatorDots type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Adw {

namespace impl {

namespace internal {


class CarouselIndicatorDotsClassDef
{
typedef CarouselIndicatorDotsClassDef self;
public:
typedef Adw::CarouselIndicatorDots instance_type;
typedef ::AdwCarouselIndicatorDotsClass class_type;


struct TypeInitData;

protected:
GI_INLINE_DECL ~CarouselIndicatorDotsClassDef() = default;
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );


};

GI_CLASS_IMPL_BEGIN


class CarouselIndicatorDotsClass: public detail::ClassTemplate<Adw::impl::internal::CarouselIndicatorDotsClassDef, Gtk::impl::internal::WidgetClass, Gtk::impl::internal::OrientableIfaceClassImpl>
{
friend class internal::CarouselIndicatorDotsClassDef;
typedef CarouselIndicatorDotsClass self;
typedef detail::ClassTemplate<Adw::impl::internal::CarouselIndicatorDotsClassDef, Gtk::impl::internal::WidgetClass, Gtk::impl::internal::OrientableIfaceClassImpl> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types
typedef Gtk::impl::internal::OrientableIfaceClassImpl GtkOrientableIface_type;



};


struct CarouselIndicatorDotsClassDef::TypeInitData
{

template<typename SubClass>
constexpr static TypeInitData factory()
{
  // using DefData = detail::DefinitionData<SubClass, TypeInitData>;
  return {

  };
}
};
} // namespace internal

GI_CLASS_IMPL_END

using CarouselIndicatorDotsImpl = detail::ObjectImpl<CarouselIndicatorDots, internal::CarouselIndicatorDotsClass>;

} // namespace impl

} // namespace Adw

} // namespace repository

} // namespace gi

#endif
