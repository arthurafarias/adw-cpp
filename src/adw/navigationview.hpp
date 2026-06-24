// AUTO-GENERATED

#ifndef _GI_ADW_NAVIGATIONVIEW_HPP_
#define _GI_ADW_NAVIGATIONVIEW_HPP_


namespace gi {

namespace repository {

namespace Adw {

class NavigationPage;
class Swipeable;

class NavigationView;

namespace base {


#define GI_ADW_NAVIGATIONVIEW_BASE base::NavigationViewBase
class NavigationViewBase : public Gtk::Widget
{
typedef Gtk::Widget super_type;
public:
typedef ::AdwNavigationView BaseObjectType;

NavigationViewBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return adw_navigation_view_get_type(); } 

GI_INLINE_DECL Adw::Swipeable interface_ (gi::interface_tag<Adw::Swipeable>);

GI_INLINE_DECL operator Adw::Swipeable ();

// GtkWidget* /*none*/ adw_navigation_view_new ();
// ::AdwNavigationView* /*none*/ adw_navigation_view_new ();
static GI_INLINE_DECL Adw::NavigationView new_ () noexcept;

// void adw_navigation_view_add (AdwNavigationView* self /*none*/, AdwNavigationPage* page /*none*/);
// void adw_navigation_view_add (::AdwNavigationView* self /*none*/, ::AdwNavigationPage* page /*none*/);
GI_INLINE_DECL void add (Adw::NavigationPage page) noexcept;

// AdwNavigationPage* /*none,nullable*/ adw_navigation_view_find_page (AdwNavigationView* self /*none*/, const char* tag /*none*/);
// ::AdwNavigationPage* /*none,nullable*/ adw_navigation_view_find_page (::AdwNavigationView* self /*none*/, const char* tag /*none*/);
GI_INLINE_DECL Adw::NavigationPage find_page (const gi::cstring_v tag) noexcept;

// gboolean adw_navigation_view_get_animate_transitions (AdwNavigationView* self /*none*/);
// gboolean adw_navigation_view_get_animate_transitions (::AdwNavigationView* self /*none*/);
GI_INLINE_DECL bool get_animate_transitions () noexcept;

// gboolean adw_navigation_view_get_hhomogeneous (AdwNavigationView* self /*none*/);
// gboolean adw_navigation_view_get_hhomogeneous (::AdwNavigationView* self /*none*/);
GI_INLINE_DECL bool get_hhomogeneous () noexcept;

// GListModel* /*full*/ adw_navigation_view_get_navigation_stack (AdwNavigationView* self /*none*/);
// ::GListModel* /*full*/ adw_navigation_view_get_navigation_stack (::AdwNavigationView* self /*none*/);
GI_INLINE_DECL Gio::ListModel get_navigation_stack () noexcept;

// gboolean adw_navigation_view_get_pop_on_escape (AdwNavigationView* self /*none*/);
// gboolean adw_navigation_view_get_pop_on_escape (::AdwNavigationView* self /*none*/);
GI_INLINE_DECL bool get_pop_on_escape () noexcept;

// AdwNavigationPage* /*none,nullable*/ adw_navigation_view_get_previous_page (AdwNavigationView* self /*none*/, AdwNavigationPage* page /*none*/);
// ::AdwNavigationPage* /*none,nullable*/ adw_navigation_view_get_previous_page (::AdwNavigationView* self /*none*/, ::AdwNavigationPage* page /*none*/);
GI_INLINE_DECL Adw::NavigationPage get_previous_page (Adw::NavigationPage page) noexcept;

// gboolean adw_navigation_view_get_vhomogeneous (AdwNavigationView* self /*none*/);
// gboolean adw_navigation_view_get_vhomogeneous (::AdwNavigationView* self /*none*/);
GI_INLINE_DECL bool get_vhomogeneous () noexcept;

// AdwNavigationPage* /*none,nullable*/ adw_navigation_view_get_visible_page (AdwNavigationView* self /*none*/);
// ::AdwNavigationPage* /*none,nullable*/ adw_navigation_view_get_visible_page (::AdwNavigationView* self /*none*/);
GI_INLINE_DECL Adw::NavigationPage get_visible_page () noexcept;

// const char* /*none,nullable*/ adw_navigation_view_get_visible_page_tag (AdwNavigationView* self /*none*/);
// const char* /*none,nullable*/ adw_navigation_view_get_visible_page_tag (::AdwNavigationView* self /*none*/);
GI_INLINE_DECL gi::cstring_v get_visible_page_tag () noexcept;

// gboolean adw_navigation_view_pop (AdwNavigationView* self /*none*/);
// gboolean adw_navigation_view_pop (::AdwNavigationView* self /*none*/);
GI_INLINE_DECL bool pop () noexcept;

// gboolean adw_navigation_view_pop_to_page (AdwNavigationView* self /*none*/, AdwNavigationPage* page /*none*/);
// gboolean adw_navigation_view_pop_to_page (::AdwNavigationView* self /*none*/, ::AdwNavigationPage* page /*none*/);
GI_INLINE_DECL bool pop_to_page (Adw::NavigationPage page) noexcept;

// gboolean adw_navigation_view_pop_to_tag (AdwNavigationView* self /*none*/, const char* tag /*none*/);
// gboolean adw_navigation_view_pop_to_tag (::AdwNavigationView* self /*none*/, const char* tag /*none*/);
GI_INLINE_DECL bool pop_to_tag (const gi::cstring_v tag) noexcept;

// void adw_navigation_view_push (AdwNavigationView* self /*none*/, AdwNavigationPage* page /*none*/);
// void adw_navigation_view_push (::AdwNavigationView* self /*none*/, ::AdwNavigationPage* page /*none*/);
GI_INLINE_DECL void push (Adw::NavigationPage page) noexcept;

// void adw_navigation_view_push_by_tag (AdwNavigationView* self /*none*/, const char* tag /*none*/);
// void adw_navigation_view_push_by_tag (::AdwNavigationView* self /*none*/, const char* tag /*none*/);
GI_INLINE_DECL void push_by_tag (const gi::cstring_v tag) noexcept;

// void adw_navigation_view_remove (AdwNavigationView* self /*none*/, AdwNavigationPage* page /*none*/);
// void adw_navigation_view_remove (::AdwNavigationView* self /*none*/, ::AdwNavigationPage* page /*none*/);
GI_INLINE_DECL void remove (Adw::NavigationPage page) noexcept;

// void adw_navigation_view_replace (AdwNavigationView* self /*none*/, AdwNavigationPage** pages /*none*/, int n_pages);
// void adw_navigation_view_replace (::AdwNavigationView* self /*none*/, ::AdwNavigationPage** pages /*none*/, gint n_pages);
GI_INLINE_DECL void replace (gi::CollectionParameter<gi::DSpan, ::AdwNavigationPage*, gi::transfer_none_t> pages) noexcept;

// void adw_navigation_view_replace_with_tags (AdwNavigationView* self /*none*/, const char* const* tags /*none*/, int n_tags);
// void adw_navigation_view_replace_with_tags (::AdwNavigationView* self /*none*/, const char** tags /*none*/, gint n_tags);
GI_INLINE_DECL void replace_with_tags (gi::CollectionParameter<gi::DSpan, char*, gi::transfer_none_t> tags) noexcept;

// void adw_navigation_view_set_animate_transitions (AdwNavigationView* self /*none*/, gboolean animate_transitions);
// void adw_navigation_view_set_animate_transitions (::AdwNavigationView* self /*none*/, gboolean animate_transitions);
GI_INLINE_DECL void set_animate_transitions (gboolean animate_transitions) noexcept;

// void adw_navigation_view_set_hhomogeneous (AdwNavigationView* self /*none*/, gboolean hhomogeneous);
// void adw_navigation_view_set_hhomogeneous (::AdwNavigationView* self /*none*/, gboolean hhomogeneous);
GI_INLINE_DECL void set_hhomogeneous (gboolean hhomogeneous) noexcept;

// void adw_navigation_view_set_pop_on_escape (AdwNavigationView* self /*none*/, gboolean pop_on_escape);
// void adw_navigation_view_set_pop_on_escape (::AdwNavigationView* self /*none*/, gboolean pop_on_escape);
GI_INLINE_DECL void set_pop_on_escape (gboolean pop_on_escape) noexcept;

// void adw_navigation_view_set_vhomogeneous (AdwNavigationView* self /*none*/, gboolean vhomogeneous);
// void adw_navigation_view_set_vhomogeneous (::AdwNavigationView* self /*none*/, gboolean vhomogeneous);
GI_INLINE_DECL void set_vhomogeneous (gboolean vhomogeneous) noexcept;

gi::property_proxy<bool, base::NavigationViewBase> property_animate_transitions()
{ return gi::property_proxy<bool, base::NavigationViewBase> (*this, "animate-transitions"); }
const gi::property_proxy<bool, base::NavigationViewBase> property_animate_transitions() const
{ return gi::property_proxy<bool, base::NavigationViewBase> (*this, "animate-transitions"); }

gi::property_proxy<bool, base::NavigationViewBase> property_hhomogeneous()
{ return gi::property_proxy<bool, base::NavigationViewBase> (*this, "hhomogeneous"); }
const gi::property_proxy<bool, base::NavigationViewBase> property_hhomogeneous() const
{ return gi::property_proxy<bool, base::NavigationViewBase> (*this, "hhomogeneous"); }

gi::property_proxy<Gio::ListModel, base::NavigationViewBase> property_navigation_stack()
{ return gi::property_proxy<Gio::ListModel, base::NavigationViewBase> (*this, "navigation-stack"); }
const gi::property_proxy<Gio::ListModel, base::NavigationViewBase> property_navigation_stack() const
{ return gi::property_proxy<Gio::ListModel, base::NavigationViewBase> (*this, "navigation-stack"); }

gi::property_proxy<bool, base::NavigationViewBase> property_pop_on_escape()
{ return gi::property_proxy<bool, base::NavigationViewBase> (*this, "pop-on-escape"); }
const gi::property_proxy<bool, base::NavigationViewBase> property_pop_on_escape() const
{ return gi::property_proxy<bool, base::NavigationViewBase> (*this, "pop-on-escape"); }

gi::property_proxy<bool, base::NavigationViewBase> property_vhomogeneous()
{ return gi::property_proxy<bool, base::NavigationViewBase> (*this, "vhomogeneous"); }
const gi::property_proxy<bool, base::NavigationViewBase> property_vhomogeneous() const
{ return gi::property_proxy<bool, base::NavigationViewBase> (*this, "vhomogeneous"); }

gi::property_proxy<Adw::NavigationPage, base::NavigationViewBase> property_visible_page()
{ return gi::property_proxy<Adw::NavigationPage, base::NavigationViewBase> (*this, "visible-page"); }
const gi::property_proxy<Adw::NavigationPage, base::NavigationViewBase> property_visible_page() const
{ return gi::property_proxy<Adw::NavigationPage, base::NavigationViewBase> (*this, "visible-page"); }

gi::property_proxy<gi::cstring, base::NavigationViewBase> property_visible_page_tag()
{ return gi::property_proxy<gi::cstring, base::NavigationViewBase> (*this, "visible-page-tag"); }
const gi::property_proxy<gi::cstring, base::NavigationViewBase> property_visible_page_tag() const
{ return gi::property_proxy<gi::cstring, base::NavigationViewBase> (*this, "visible-page-tag"); }

// (signal)  /*full,nullable*/ get-next-page ();
// (signal) ::AdwNavigationPage* /*full,nullable*/ get-next-page ();
gi::signal_proxy<Adw::NavigationPage(Adw::NavigationView)> signal_get_next_page()
{ return gi::signal_proxy<Adw::NavigationPage(Adw::NavigationView)> (*this, "get-next-page"); }

// (signal) void popped ( page /*none*/);
// (signal) void popped (::AdwNavigationPage* page /*none*/);
gi::signal_proxy<void(Adw::NavigationView, Adw::NavigationPage page)> signal_popped()
{ return gi::signal_proxy<void(Adw::NavigationView, Adw::NavigationPage page)> (*this, "popped"); }

// (signal) void pushed ();
// (signal) void pushed ();
gi::signal_proxy<void(Adw::NavigationView)> signal_pushed()
{ return gi::signal_proxy<void(Adw::NavigationView)> (*this, "pushed"); }

// (signal) void replaced ();
// (signal) void replaced ();
gi::signal_proxy<void(Adw::NavigationView)> signal_replaced()
{ return gi::signal_proxy<void(Adw::NavigationView)> (*this, "replaced"); }

}; // class

} // namespace base

} // namespace Adw

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<adw/navigationview_extra_def.hpp>)
#include <adw/navigationview_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<adw/navigationview_extra.hpp>)
#include <adw/navigationview_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Adw {

class NavigationView : public GI_ADW_NAVIGATIONVIEW_BASE
{ typedef GI_ADW_NAVIGATIONVIEW_BASE super_type; using super_type::super_type; };

} // namespace Adw

template<> struct declare_cpptype_of<::AdwNavigationView>
{ typedef Adw::NavigationView type; }; 

} // namespace repository

} // namespace gi

#include "swipeable.hpp"

namespace gi {

namespace repository {

namespace Adw {

namespace impl {

namespace internal {


class NavigationViewClassDef
{
typedef NavigationViewClassDef self;
public:
typedef Adw::NavigationView instance_type;
typedef ::AdwNavigationViewClass class_type;


struct TypeInitData;

protected:
GI_INLINE_DECL ~NavigationViewClassDef() = default;
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );


};

GI_CLASS_IMPL_BEGIN


class NavigationViewClass: public detail::ClassTemplate<Adw::impl::internal::NavigationViewClassDef, Gtk::impl::internal::WidgetClass, Adw::impl::internal::SwipeableInterfaceClassImpl>
{
friend class internal::NavigationViewClassDef;
typedef NavigationViewClass self;
typedef detail::ClassTemplate<Adw::impl::internal::NavigationViewClassDef, Gtk::impl::internal::WidgetClass, Adw::impl::internal::SwipeableInterfaceClassImpl> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types
typedef Adw::impl::internal::SwipeableInterfaceClassImpl AdwSwipeableInterface_type;



};


struct NavigationViewClassDef::TypeInitData
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

using NavigationViewImpl = detail::ObjectImpl<NavigationView, internal::NavigationViewClass>;

} // namespace impl

} // namespace Adw

} // namespace repository

} // namespace gi

#endif
