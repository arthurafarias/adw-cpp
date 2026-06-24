// AUTO-GENERATED

#ifndef _GI_ADW_CAROUSELINDICATORLINES_HPP_
#define _GI_ADW_CAROUSELINDICATORLINES_HPP_


namespace gi {

namespace repository {

namespace Adw {

class Carousel;

class CarouselIndicatorLines;

namespace base {


#define GI_ADW_CAROUSELINDICATORLINES_BASE base::CarouselIndicatorLinesBase
class CarouselIndicatorLinesBase : public Gtk::Widget
{
typedef Gtk::Widget super_type;
public:
typedef ::AdwCarouselIndicatorLines BaseObjectType;

CarouselIndicatorLinesBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return adw_carousel_indicator_lines_get_type(); } 

GI_INLINE_DECL Gtk::Orientable interface_ (gi::interface_tag<Gtk::Orientable>);

GI_INLINE_DECL operator Gtk::Orientable ();

// GtkWidget* /*none*/ adw_carousel_indicator_lines_new ();
// ::AdwCarouselIndicatorLines* /*none*/ adw_carousel_indicator_lines_new ();
static GI_INLINE_DECL Adw::CarouselIndicatorLines new_ () noexcept;

// AdwCarousel* /*none,nullable*/ adw_carousel_indicator_lines_get_carousel (AdwCarouselIndicatorLines* self /*none*/);
// ::AdwCarousel* /*none,nullable*/ adw_carousel_indicator_lines_get_carousel (::AdwCarouselIndicatorLines* self /*none*/);
GI_INLINE_DECL Adw::Carousel get_carousel () noexcept;

// void adw_carousel_indicator_lines_set_carousel (AdwCarouselIndicatorLines* self /*none*/, AdwCarousel* carousel /*none,nullable*/);
// void adw_carousel_indicator_lines_set_carousel (::AdwCarouselIndicatorLines* self /*none*/, ::AdwCarousel* carousel /*none,nullable*/);
GI_INLINE_DECL void set_carousel (Adw::Carousel carousel) noexcept;
GI_INLINE_DECL void set_carousel () noexcept;

gi::property_proxy<Adw::Carousel, base::CarouselIndicatorLinesBase> property_carousel()
{ return gi::property_proxy<Adw::Carousel, base::CarouselIndicatorLinesBase> (*this, "carousel"); }
const gi::property_proxy<Adw::Carousel, base::CarouselIndicatorLinesBase> property_carousel() const
{ return gi::property_proxy<Adw::Carousel, base::CarouselIndicatorLinesBase> (*this, "carousel"); }

}; // class

} // namespace base

} // namespace Adw

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<adw/carouselindicatorlines_extra_def.hpp>)
#include <adw/carouselindicatorlines_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<adw/carouselindicatorlines_extra.hpp>)
#include <adw/carouselindicatorlines_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Adw {

class CarouselIndicatorLines : public GI_ADW_CAROUSELINDICATORLINES_BASE
{ typedef GI_ADW_CAROUSELINDICATORLINES_BASE super_type; using super_type::super_type; };

} // namespace Adw

template<> struct declare_cpptype_of<::AdwCarouselIndicatorLines>
{ typedef Adw::CarouselIndicatorLines type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Adw {

namespace impl {

namespace internal {


class CarouselIndicatorLinesClassDef
{
typedef CarouselIndicatorLinesClassDef self;
public:
typedef Adw::CarouselIndicatorLines instance_type;
typedef ::AdwCarouselIndicatorLinesClass class_type;


struct TypeInitData;

protected:
GI_INLINE_DECL ~CarouselIndicatorLinesClassDef() = default;
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );


};

GI_CLASS_IMPL_BEGIN


class CarouselIndicatorLinesClass: public detail::ClassTemplate<Adw::impl::internal::CarouselIndicatorLinesClassDef, Gtk::impl::internal::WidgetClass, Gtk::impl::internal::OrientableIfaceClassImpl>
{
friend class internal::CarouselIndicatorLinesClassDef;
typedef CarouselIndicatorLinesClass self;
typedef detail::ClassTemplate<Adw::impl::internal::CarouselIndicatorLinesClassDef, Gtk::impl::internal::WidgetClass, Gtk::impl::internal::OrientableIfaceClassImpl> super;

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


struct CarouselIndicatorLinesClassDef::TypeInitData
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

using CarouselIndicatorLinesImpl = detail::ObjectImpl<CarouselIndicatorLines, internal::CarouselIndicatorLinesClass>;

} // namespace impl

} // namespace Adw

} // namespace repository

} // namespace gi

#endif
