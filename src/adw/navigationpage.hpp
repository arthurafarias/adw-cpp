// AUTO-GENERATED

#ifndef _GI_ADW_NAVIGATIONPAGE_HPP_
#define _GI_ADW_NAVIGATIONPAGE_HPP_


namespace gi {

namespace repository {

namespace Adw {


class NavigationPage;

namespace base {


#define GI_ADW_NAVIGATIONPAGE_BASE base::NavigationPageBase
class NavigationPageBase : public Gtk::Widget
{
typedef Gtk::Widget super_type;
public:
typedef ::AdwNavigationPage BaseObjectType;

NavigationPageBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return adw_navigation_page_get_type(); } 

// AdwNavigationPage* /*none*/ adw_navigation_page_new (GtkWidget* child /*none*/, const char* title /*none*/);
// ::AdwNavigationPage* /*none*/ adw_navigation_page_new (::GtkWidget* child /*none*/, const char* title /*none*/);
static GI_INLINE_DECL Adw::NavigationPage new_ (Gtk::Widget child, const gi::cstring_v title) noexcept;

// AdwNavigationPage* /*none*/ adw_navigation_page_new_with_tag (GtkWidget* child /*none*/, const char* title /*none*/, const char* tag /*none*/);
// ::AdwNavigationPage* /*none*/ adw_navigation_page_new_with_tag (::GtkWidget* child /*none*/, const char* title /*none*/, const char* tag /*none*/);
static GI_INLINE_DECL Adw::NavigationPage new_with_tag (Gtk::Widget child, const gi::cstring_v title, const gi::cstring_v tag) noexcept;

// gboolean adw_navigation_page_get_can_pop (AdwNavigationPage* self /*none*/);
// gboolean adw_navigation_page_get_can_pop (::AdwNavigationPage* self /*none*/);
GI_INLINE_DECL bool get_can_pop () noexcept;

// GtkWidget* /*none,nullable*/ adw_navigation_page_get_child (AdwNavigationPage* self /*none*/);
// ::GtkWidget* /*none,nullable*/ adw_navigation_page_get_child (::AdwNavigationPage* self /*none*/);
GI_INLINE_DECL Gtk::Widget get_child () noexcept;

// const char* /*none,nullable*/ adw_navigation_page_get_tag (AdwNavigationPage* self /*none*/);
// const char* /*none,nullable*/ adw_navigation_page_get_tag (::AdwNavigationPage* self /*none*/);
GI_INLINE_DECL gi::cstring_v get_tag () noexcept;

// const char* /*none*/ adw_navigation_page_get_title (AdwNavigationPage* self /*none*/);
// const char* /*none*/ adw_navigation_page_get_title (::AdwNavigationPage* self /*none*/);
GI_INLINE_DECL gi::cstring_v get_title () noexcept;

// void adw_navigation_page_set_can_pop (AdwNavigationPage* self /*none*/, gboolean can_pop);
// void adw_navigation_page_set_can_pop (::AdwNavigationPage* self /*none*/, gboolean can_pop);
GI_INLINE_DECL void set_can_pop (gboolean can_pop) noexcept;

// void adw_navigation_page_set_child (AdwNavigationPage* self /*none*/, GtkWidget* child /*none,nullable*/);
// void adw_navigation_page_set_child (::AdwNavigationPage* self /*none*/, ::GtkWidget* child /*none,nullable*/);
GI_INLINE_DECL void set_child (Gtk::Widget child) noexcept;
GI_INLINE_DECL void set_child () noexcept;

// void adw_navigation_page_set_tag (AdwNavigationPage* self /*none*/, const char* tag /*none,nullable*/);
// void adw_navigation_page_set_tag (::AdwNavigationPage* self /*none*/, const char* tag /*none,nullable*/);
GI_INLINE_DECL void set_tag (const gi::cstring_v tag) noexcept;
GI_INLINE_DECL void set_tag () noexcept;

// void adw_navigation_page_set_title (AdwNavigationPage* self /*none*/, const char* title /*none*/);
// void adw_navigation_page_set_title (::AdwNavigationPage* self /*none*/, const char* title /*none*/);
GI_INLINE_DECL void set_title (const gi::cstring_v title) noexcept;

gi::property_proxy<bool, base::NavigationPageBase> property_can_pop()
{ return gi::property_proxy<bool, base::NavigationPageBase> (*this, "can-pop"); }
const gi::property_proxy<bool, base::NavigationPageBase> property_can_pop() const
{ return gi::property_proxy<bool, base::NavigationPageBase> (*this, "can-pop"); }

gi::property_proxy<Gtk::Widget, base::NavigationPageBase> property_child()
{ return gi::property_proxy<Gtk::Widget, base::NavigationPageBase> (*this, "child"); }
const gi::property_proxy<Gtk::Widget, base::NavigationPageBase> property_child() const
{ return gi::property_proxy<Gtk::Widget, base::NavigationPageBase> (*this, "child"); }

gi::property_proxy<gi::cstring, base::NavigationPageBase> property_tag()
{ return gi::property_proxy<gi::cstring, base::NavigationPageBase> (*this, "tag"); }
const gi::property_proxy<gi::cstring, base::NavigationPageBase> property_tag() const
{ return gi::property_proxy<gi::cstring, base::NavigationPageBase> (*this, "tag"); }

gi::property_proxy<gi::cstring, base::NavigationPageBase> property_title()
{ return gi::property_proxy<gi::cstring, base::NavigationPageBase> (*this, "title"); }
const gi::property_proxy<gi::cstring, base::NavigationPageBase> property_title() const
{ return gi::property_proxy<gi::cstring, base::NavigationPageBase> (*this, "title"); }

// (signal) void hidden ();
// (signal) void hidden ();
gi::signal_proxy<void(Adw::NavigationPage)> signal_hidden()
{ return gi::signal_proxy<void(Adw::NavigationPage)> (*this, "hidden"); }

// (signal) void hiding ();
// (signal) void hiding ();
gi::signal_proxy<void(Adw::NavigationPage)> signal_hiding()
{ return gi::signal_proxy<void(Adw::NavigationPage)> (*this, "hiding"); }

// (signal) void showing ();
// (signal) void showing ();
gi::signal_proxy<void(Adw::NavigationPage)> signal_showing()
{ return gi::signal_proxy<void(Adw::NavigationPage)> (*this, "showing"); }

// (signal) void shown ();
// (signal) void shown ();
gi::signal_proxy<void(Adw::NavigationPage)> signal_shown()
{ return gi::signal_proxy<void(Adw::NavigationPage)> (*this, "shown"); }

}; // class

} // namespace base

} // namespace Adw

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<adw/navigationpage_extra_def.hpp>)
#include <adw/navigationpage_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<adw/navigationpage_extra.hpp>)
#include <adw/navigationpage_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Adw {

class NavigationPage : public GI_ADW_NAVIGATIONPAGE_BASE
{ typedef GI_ADW_NAVIGATIONPAGE_BASE super_type; using super_type::super_type; };

} // namespace Adw

template<> struct declare_cpptype_of<::AdwNavigationPage>
{ typedef Adw::NavigationPage type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Adw {

namespace impl {

namespace internal {


class NavigationPageClassDef
{
typedef NavigationPageClassDef self;
public:
typedef Adw::NavigationPage instance_type;
typedef ::AdwNavigationPageClass class_type;

using GI_MEMBER_CHECK_CONFLICT(hidden) = self;
using GI_MEMBER_CHECK_CONFLICT(hiding) = self;
using GI_MEMBER_CHECK_CONFLICT(showing) = self;
using GI_MEMBER_CHECK_CONFLICT(shown) = self;

struct TypeInitData;

protected:
GI_INLINE_DECL ~NavigationPageClassDef() = default;
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );

// void NavigationPage::hidden (AdwNavigationPage* self /*none*/);
// void NavigationPage::hidden (::AdwNavigationPage* self /*none*/);
virtual void hidden_ () noexcept = 0;

// void NavigationPage::hiding (AdwNavigationPage* self /*none*/);
// void NavigationPage::hiding (::AdwNavigationPage* self /*none*/);
virtual void hiding_ () noexcept = 0;

// void NavigationPage::showing (AdwNavigationPage* self /*none*/);
// void NavigationPage::showing (::AdwNavigationPage* self /*none*/);
virtual void showing_ () noexcept = 0;

// void NavigationPage::shown (AdwNavigationPage* self /*none*/);
// void NavigationPage::shown (::AdwNavigationPage* self /*none*/);
virtual void shown_ () noexcept = 0;


};

GI_CLASS_IMPL_BEGIN


class NavigationPageClass: public detail::ClassTemplate<Adw::impl::internal::NavigationPageClassDef, Gtk::impl::internal::WidgetClass>
{
friend class internal::NavigationPageClassDef;
typedef NavigationPageClass self;
typedef detail::ClassTemplate<Adw::impl::internal::NavigationPageClassDef, Gtk::impl::internal::WidgetClass> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types


// void NavigationPage::hidden (AdwNavigationPage* self /*none*/);
// void NavigationPage::hidden (::AdwNavigationPage* self /*none*/);
GI_INLINE_DECL void hidden_ () noexcept override;

// void NavigationPage::hiding (AdwNavigationPage* self /*none*/);
// void NavigationPage::hiding (::AdwNavigationPage* self /*none*/);
GI_INLINE_DECL void hiding_ () noexcept override;

// void NavigationPage::showing (AdwNavigationPage* self /*none*/);
// void NavigationPage::showing (::AdwNavigationPage* self /*none*/);
GI_INLINE_DECL void showing_ () noexcept override;

// void NavigationPage::shown (AdwNavigationPage* self /*none*/);
// void NavigationPage::shown (::AdwNavigationPage* self /*none*/);
GI_INLINE_DECL void shown_ () noexcept override;


};


struct NavigationPageClassDef::TypeInitData
{
  GI_MEMBER_DEFINE(NavigationPageClass, hidden)
  GI_MEMBER_DEFINE(NavigationPageClass, hiding)
  GI_MEMBER_DEFINE(NavigationPageClass, showing)
  GI_MEMBER_DEFINE(NavigationPageClass, shown)

template<typename SubClass>
constexpr static TypeInitData factory()
{
  using DefData = detail::DefinitionData<SubClass, TypeInitData>;
  return {
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, hidden),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, hiding),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, showing),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, shown)
  };
}
};
} // namespace internal

GI_CLASS_IMPL_END

using NavigationPageImpl = detail::ObjectImpl<NavigationPage, internal::NavigationPageClass>;

} // namespace impl

} // namespace Adw

} // namespace repository

} // namespace gi

#endif
