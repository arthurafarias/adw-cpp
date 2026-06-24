// AUTO-GENERATED

#ifndef _GI_ADW_CAROUSEL_HPP_
#define _GI_ADW_CAROUSEL_HPP_


namespace gi {

namespace repository {

namespace Adw {

class SpringParams;
class SpringParams_Ref;
class Swipeable;

class Carousel;

namespace base {


#define GI_ADW_CAROUSEL_BASE base::CarouselBase
class CarouselBase : public Gtk::Widget
{
typedef Gtk::Widget super_type;
public:
typedef ::AdwCarousel BaseObjectType;

CarouselBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return adw_carousel_get_type(); } 

GI_INLINE_DECL Adw::Swipeable interface_ (gi::interface_tag<Adw::Swipeable>);

GI_INLINE_DECL operator Adw::Swipeable ();

GI_INLINE_DECL Gtk::Orientable interface_ (gi::interface_tag<Gtk::Orientable>);

GI_INLINE_DECL operator Gtk::Orientable ();

// GtkWidget* /*none*/ adw_carousel_new ();
// ::AdwCarousel* /*none*/ adw_carousel_new ();
static GI_INLINE_DECL Adw::Carousel new_ () noexcept;

// void adw_carousel_append (AdwCarousel* self /*none*/, GtkWidget* child /*none*/);
// void adw_carousel_append (::AdwCarousel* self /*none*/, ::GtkWidget* child /*none*/);
GI_INLINE_DECL void append (Gtk::Widget child) noexcept;

// gboolean adw_carousel_get_allow_long_swipes (AdwCarousel* self /*none*/);
// gboolean adw_carousel_get_allow_long_swipes (::AdwCarousel* self /*none*/);
GI_INLINE_DECL bool get_allow_long_swipes () noexcept;

// gboolean adw_carousel_get_allow_mouse_drag (AdwCarousel* self /*none*/);
// gboolean adw_carousel_get_allow_mouse_drag (::AdwCarousel* self /*none*/);
GI_INLINE_DECL bool get_allow_mouse_drag () noexcept;

// gboolean adw_carousel_get_allow_scroll_wheel (AdwCarousel* self /*none*/);
// gboolean adw_carousel_get_allow_scroll_wheel (::AdwCarousel* self /*none*/);
GI_INLINE_DECL bool get_allow_scroll_wheel () noexcept;

// gboolean adw_carousel_get_interactive (AdwCarousel* self /*none*/);
// gboolean adw_carousel_get_interactive (::AdwCarousel* self /*none*/);
GI_INLINE_DECL bool get_interactive () noexcept;

// guint adw_carousel_get_n_pages (AdwCarousel* self /*none*/);
// guint adw_carousel_get_n_pages (::AdwCarousel* self /*none*/);
GI_INLINE_DECL guint get_n_pages () noexcept;

// GtkWidget* /*none*/ adw_carousel_get_nth_page (AdwCarousel* self /*none*/, guint n);
// ::GtkWidget* /*none*/ adw_carousel_get_nth_page (::AdwCarousel* self /*none*/, guint n);
GI_INLINE_DECL Gtk::Widget get_nth_page (guint n) noexcept;

// double adw_carousel_get_position (AdwCarousel* self /*none*/);
// gdouble adw_carousel_get_position (::AdwCarousel* self /*none*/);
GI_INLINE_DECL gdouble get_position () noexcept;

// guint adw_carousel_get_reveal_duration (AdwCarousel* self /*none*/);
// guint adw_carousel_get_reveal_duration (::AdwCarousel* self /*none*/);
GI_INLINE_DECL guint get_reveal_duration () noexcept;

// AdwSpringParams* /*full*/ adw_carousel_get_scroll_params (AdwCarousel* self /*none*/);
// ::AdwSpringParams* /*full*/ adw_carousel_get_scroll_params (::AdwCarousel* self /*none*/);
GI_INLINE_DECL Adw::SpringParams get_scroll_params () noexcept;

// guint adw_carousel_get_spacing (AdwCarousel* self /*none*/);
// guint adw_carousel_get_spacing (::AdwCarousel* self /*none*/);
GI_INLINE_DECL guint get_spacing () noexcept;

// void adw_carousel_insert (AdwCarousel* self /*none*/, GtkWidget* child /*none*/, int position);
// void adw_carousel_insert (::AdwCarousel* self /*none*/, ::GtkWidget* child /*none*/, gint position);
GI_INLINE_DECL void insert (Gtk::Widget child, gint position) noexcept;

// void adw_carousel_prepend (AdwCarousel* self /*none*/, GtkWidget* child /*none*/);
// void adw_carousel_prepend (::AdwCarousel* self /*none*/, ::GtkWidget* child /*none*/);
GI_INLINE_DECL void prepend (Gtk::Widget child) noexcept;

// void adw_carousel_remove (AdwCarousel* self /*none*/, GtkWidget* child /*none*/);
// void adw_carousel_remove (::AdwCarousel* self /*none*/, ::GtkWidget* child /*none*/);
GI_INLINE_DECL void remove (Gtk::Widget child) noexcept;

// void adw_carousel_reorder (AdwCarousel* self /*none*/, GtkWidget* child /*none*/, int position);
// void adw_carousel_reorder (::AdwCarousel* self /*none*/, ::GtkWidget* child /*none*/, gint position);
GI_INLINE_DECL void reorder (Gtk::Widget child, gint position) noexcept;

// void adw_carousel_scroll_to (AdwCarousel* self /*none*/, GtkWidget* widget /*none*/, gboolean animate);
// void adw_carousel_scroll_to (::AdwCarousel* self /*none*/, ::GtkWidget* widget /*none*/, gboolean animate);
GI_INLINE_DECL void scroll_to (Gtk::Widget widget, gboolean animate) noexcept;

// void adw_carousel_set_allow_long_swipes (AdwCarousel* self /*none*/, gboolean allow_long_swipes);
// void adw_carousel_set_allow_long_swipes (::AdwCarousel* self /*none*/, gboolean allow_long_swipes);
GI_INLINE_DECL void set_allow_long_swipes (gboolean allow_long_swipes) noexcept;

// void adw_carousel_set_allow_mouse_drag (AdwCarousel* self /*none*/, gboolean allow_mouse_drag);
// void adw_carousel_set_allow_mouse_drag (::AdwCarousel* self /*none*/, gboolean allow_mouse_drag);
GI_INLINE_DECL void set_allow_mouse_drag (gboolean allow_mouse_drag) noexcept;

// void adw_carousel_set_allow_scroll_wheel (AdwCarousel* self /*none*/, gboolean allow_scroll_wheel);
// void adw_carousel_set_allow_scroll_wheel (::AdwCarousel* self /*none*/, gboolean allow_scroll_wheel);
GI_INLINE_DECL void set_allow_scroll_wheel (gboolean allow_scroll_wheel) noexcept;

// void adw_carousel_set_interactive (AdwCarousel* self /*none*/, gboolean interactive);
// void adw_carousel_set_interactive (::AdwCarousel* self /*none*/, gboolean interactive);
GI_INLINE_DECL void set_interactive (gboolean interactive) noexcept;

// void adw_carousel_set_reveal_duration (AdwCarousel* self /*none*/, guint reveal_duration);
// void adw_carousel_set_reveal_duration (::AdwCarousel* self /*none*/, guint reveal_duration);
GI_INLINE_DECL void set_reveal_duration (guint reveal_duration) noexcept;

// void adw_carousel_set_scroll_params (AdwCarousel* self /*none*/, AdwSpringParams* params /*none*/);
// void adw_carousel_set_scroll_params (::AdwCarousel* self /*none*/, ::AdwSpringParams* params /*none*/);
GI_INLINE_DECL void set_scroll_params (Adw::SpringParams_Ref params) noexcept;

// void adw_carousel_set_spacing (AdwCarousel* self /*none*/, guint spacing);
// void adw_carousel_set_spacing (::AdwCarousel* self /*none*/, guint spacing);
GI_INLINE_DECL void set_spacing (guint spacing) noexcept;

gi::property_proxy<bool, base::CarouselBase> property_allow_long_swipes()
{ return gi::property_proxy<bool, base::CarouselBase> (*this, "allow-long-swipes"); }
const gi::property_proxy<bool, base::CarouselBase> property_allow_long_swipes() const
{ return gi::property_proxy<bool, base::CarouselBase> (*this, "allow-long-swipes"); }

gi::property_proxy<bool, base::CarouselBase> property_allow_mouse_drag()
{ return gi::property_proxy<bool, base::CarouselBase> (*this, "allow-mouse-drag"); }
const gi::property_proxy<bool, base::CarouselBase> property_allow_mouse_drag() const
{ return gi::property_proxy<bool, base::CarouselBase> (*this, "allow-mouse-drag"); }

gi::property_proxy<bool, base::CarouselBase> property_allow_scroll_wheel()
{ return gi::property_proxy<bool, base::CarouselBase> (*this, "allow-scroll-wheel"); }
const gi::property_proxy<bool, base::CarouselBase> property_allow_scroll_wheel() const
{ return gi::property_proxy<bool, base::CarouselBase> (*this, "allow-scroll-wheel"); }

gi::property_proxy<bool, base::CarouselBase> property_interactive()
{ return gi::property_proxy<bool, base::CarouselBase> (*this, "interactive"); }
const gi::property_proxy<bool, base::CarouselBase> property_interactive() const
{ return gi::property_proxy<bool, base::CarouselBase> (*this, "interactive"); }

gi::property_proxy<guint, base::CarouselBase> property_n_pages()
{ return gi::property_proxy<guint, base::CarouselBase> (*this, "n-pages"); }
const gi::property_proxy<guint, base::CarouselBase> property_n_pages() const
{ return gi::property_proxy<guint, base::CarouselBase> (*this, "n-pages"); }

gi::property_proxy<gdouble, base::CarouselBase> property_position()
{ return gi::property_proxy<gdouble, base::CarouselBase> (*this, "position"); }
const gi::property_proxy<gdouble, base::CarouselBase> property_position() const
{ return gi::property_proxy<gdouble, base::CarouselBase> (*this, "position"); }

gi::property_proxy<guint, base::CarouselBase> property_reveal_duration()
{ return gi::property_proxy<guint, base::CarouselBase> (*this, "reveal-duration"); }
const gi::property_proxy<guint, base::CarouselBase> property_reveal_duration() const
{ return gi::property_proxy<guint, base::CarouselBase> (*this, "reveal-duration"); }

gi::property_proxy<Adw::SpringParams, base::CarouselBase> property_scroll_params()
{ return gi::property_proxy<Adw::SpringParams, base::CarouselBase> (*this, "scroll-params"); }
const gi::property_proxy<Adw::SpringParams, base::CarouselBase> property_scroll_params() const
{ return gi::property_proxy<Adw::SpringParams, base::CarouselBase> (*this, "scroll-params"); }

gi::property_proxy<guint, base::CarouselBase> property_spacing()
{ return gi::property_proxy<guint, base::CarouselBase> (*this, "spacing"); }
const gi::property_proxy<guint, base::CarouselBase> property_spacing() const
{ return gi::property_proxy<guint, base::CarouselBase> (*this, "spacing"); }

// (signal) void page-changed (guint index);
// (signal) void page-changed (guint index);
gi::signal_proxy<void(Adw::Carousel, guint index)> signal_page_changed()
{ return gi::signal_proxy<void(Adw::Carousel, guint index)> (*this, "page-changed"); }

}; // class

} // namespace base

} // namespace Adw

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<adw/carousel_extra_def.hpp>)
#include <adw/carousel_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<adw/carousel_extra.hpp>)
#include <adw/carousel_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Adw {

class Carousel : public GI_ADW_CAROUSEL_BASE
{ typedef GI_ADW_CAROUSEL_BASE super_type; using super_type::super_type; };

} // namespace Adw

template<> struct declare_cpptype_of<::AdwCarousel>
{ typedef Adw::Carousel type; }; 

} // namespace repository

} // namespace gi

#include "swipeable.hpp"

namespace gi {

namespace repository {

namespace Adw {

namespace impl {

namespace internal {


class CarouselClassDef
{
typedef CarouselClassDef self;
public:
typedef Adw::Carousel instance_type;
typedef ::AdwCarouselClass class_type;


struct TypeInitData;

protected:
GI_INLINE_DECL ~CarouselClassDef() = default;
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );


};

GI_CLASS_IMPL_BEGIN


class CarouselClass: public detail::ClassTemplate<Adw::impl::internal::CarouselClassDef, Gtk::impl::internal::WidgetClass, Adw::impl::internal::SwipeableInterfaceClassImpl, Gtk::impl::internal::OrientableIfaceClassImpl>
{
friend class internal::CarouselClassDef;
typedef CarouselClass self;
typedef detail::ClassTemplate<Adw::impl::internal::CarouselClassDef, Gtk::impl::internal::WidgetClass, Adw::impl::internal::SwipeableInterfaceClassImpl, Gtk::impl::internal::OrientableIfaceClassImpl> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types
typedef Adw::impl::internal::SwipeableInterfaceClassImpl AdwSwipeableInterface_type;
typedef Gtk::impl::internal::OrientableIfaceClassImpl GtkOrientableIface_type;



};


struct CarouselClassDef::TypeInitData
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

using CarouselImpl = detail::ObjectImpl<Carousel, internal::CarouselClass>;

} // namespace impl

} // namespace Adw

} // namespace repository

} // namespace gi

#endif
