// AUTO-GENERATED

#ifndef _GI_ADW_STATUSPAGE_HPP_
#define _GI_ADW_STATUSPAGE_HPP_


namespace gi {

namespace repository {

namespace Adw {


class StatusPage;

namespace base {


#define GI_ADW_STATUSPAGE_BASE base::StatusPageBase
class StatusPageBase : public Gtk::Widget
{
typedef Gtk::Widget super_type;
public:
typedef ::AdwStatusPage BaseObjectType;

StatusPageBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return adw_status_page_get_type(); } 

// GtkWidget* /*none*/ adw_status_page_new ();
// ::AdwStatusPage* /*none*/ adw_status_page_new ();
static GI_INLINE_DECL Adw::StatusPage new_ () noexcept;

// GtkWidget* /*none,nullable*/ adw_status_page_get_child (AdwStatusPage* self /*none*/);
// ::GtkWidget* /*none,nullable*/ adw_status_page_get_child (::AdwStatusPage* self /*none*/);
GI_INLINE_DECL Gtk::Widget get_child () noexcept;

// const char* /*none,nullable*/ adw_status_page_get_description (AdwStatusPage* self /*none*/);
// const char* /*none,nullable*/ adw_status_page_get_description (::AdwStatusPage* self /*none*/);
GI_INLINE_DECL gi::cstring_v get_description () noexcept;

// const char* /*none,nullable*/ adw_status_page_get_icon_name (AdwStatusPage* self /*none*/);
// const char* /*none,nullable*/ adw_status_page_get_icon_name (::AdwStatusPage* self /*none*/);
GI_INLINE_DECL gi::cstring_v get_icon_name () noexcept;

// GdkPaintable* /*none,nullable*/ adw_status_page_get_paintable (AdwStatusPage* self /*none*/);
// ::GdkPaintable* /*none,nullable*/ adw_status_page_get_paintable (::AdwStatusPage* self /*none*/);
GI_INLINE_DECL Gdk::Paintable get_paintable () noexcept;

// const char* /*none*/ adw_status_page_get_title (AdwStatusPage* self /*none*/);
// const char* /*none*/ adw_status_page_get_title (::AdwStatusPage* self /*none*/);
GI_INLINE_DECL gi::cstring_v get_title () noexcept;

// void adw_status_page_set_child (AdwStatusPage* self /*none*/, GtkWidget* child /*none,nullable*/);
// void adw_status_page_set_child (::AdwStatusPage* self /*none*/, ::GtkWidget* child /*none,nullable*/);
GI_INLINE_DECL void set_child (Gtk::Widget child) noexcept;
GI_INLINE_DECL void set_child () noexcept;

// void adw_status_page_set_description (AdwStatusPage* self /*none*/, const char* description /*none,nullable*/);
// void adw_status_page_set_description (::AdwStatusPage* self /*none*/, const char* description /*none,nullable*/);
GI_INLINE_DECL void set_description (const gi::cstring_v description) noexcept;
GI_INLINE_DECL void set_description () noexcept;

// void adw_status_page_set_icon_name (AdwStatusPage* self /*none*/, const char* icon_name /*none,nullable*/);
// void adw_status_page_set_icon_name (::AdwStatusPage* self /*none*/, const char* icon_name /*none,nullable*/);
GI_INLINE_DECL void set_icon_name (const gi::cstring_v icon_name) noexcept;
GI_INLINE_DECL void set_icon_name () noexcept;

// void adw_status_page_set_paintable (AdwStatusPage* self /*none*/, GdkPaintable* paintable /*none,nullable*/);
// void adw_status_page_set_paintable (::AdwStatusPage* self /*none*/, ::GdkPaintable* paintable /*none,nullable*/);
GI_INLINE_DECL void set_paintable (Gdk::Paintable paintable) noexcept;
GI_INLINE_DECL void set_paintable () noexcept;

// void adw_status_page_set_title (AdwStatusPage* self /*none*/, const char* title /*none*/);
// void adw_status_page_set_title (::AdwStatusPage* self /*none*/, const char* title /*none*/);
GI_INLINE_DECL void set_title (const gi::cstring_v title) noexcept;

gi::property_proxy<Gtk::Widget, base::StatusPageBase> property_child()
{ return gi::property_proxy<Gtk::Widget, base::StatusPageBase> (*this, "child"); }
const gi::property_proxy<Gtk::Widget, base::StatusPageBase> property_child() const
{ return gi::property_proxy<Gtk::Widget, base::StatusPageBase> (*this, "child"); }

gi::property_proxy<gi::cstring, base::StatusPageBase> property_description()
{ return gi::property_proxy<gi::cstring, base::StatusPageBase> (*this, "description"); }
const gi::property_proxy<gi::cstring, base::StatusPageBase> property_description() const
{ return gi::property_proxy<gi::cstring, base::StatusPageBase> (*this, "description"); }

gi::property_proxy<gi::cstring, base::StatusPageBase> property_icon_name()
{ return gi::property_proxy<gi::cstring, base::StatusPageBase> (*this, "icon-name"); }
const gi::property_proxy<gi::cstring, base::StatusPageBase> property_icon_name() const
{ return gi::property_proxy<gi::cstring, base::StatusPageBase> (*this, "icon-name"); }

gi::property_proxy<Gdk::Paintable, base::StatusPageBase> property_paintable()
{ return gi::property_proxy<Gdk::Paintable, base::StatusPageBase> (*this, "paintable"); }
const gi::property_proxy<Gdk::Paintable, base::StatusPageBase> property_paintable() const
{ return gi::property_proxy<Gdk::Paintable, base::StatusPageBase> (*this, "paintable"); }

gi::property_proxy<gi::cstring, base::StatusPageBase> property_title()
{ return gi::property_proxy<gi::cstring, base::StatusPageBase> (*this, "title"); }
const gi::property_proxy<gi::cstring, base::StatusPageBase> property_title() const
{ return gi::property_proxy<gi::cstring, base::StatusPageBase> (*this, "title"); }

}; // class

} // namespace base

} // namespace Adw

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<adw/statuspage_extra_def.hpp>)
#include <adw/statuspage_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<adw/statuspage_extra.hpp>)
#include <adw/statuspage_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Adw {

class StatusPage : public GI_ADW_STATUSPAGE_BASE
{ typedef GI_ADW_STATUSPAGE_BASE super_type; using super_type::super_type; };

} // namespace Adw

template<> struct declare_cpptype_of<::AdwStatusPage>
{ typedef Adw::StatusPage type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Adw {

namespace impl {

namespace internal {


class StatusPageClassDef
{
typedef StatusPageClassDef self;
public:
typedef Adw::StatusPage instance_type;
typedef ::AdwStatusPageClass class_type;


struct TypeInitData;

protected:
GI_INLINE_DECL ~StatusPageClassDef() = default;
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );


};

GI_CLASS_IMPL_BEGIN


class StatusPageClass: public detail::ClassTemplate<Adw::impl::internal::StatusPageClassDef, Gtk::impl::internal::WidgetClass>
{
friend class internal::StatusPageClassDef;
typedef StatusPageClass self;
typedef detail::ClassTemplate<Adw::impl::internal::StatusPageClassDef, Gtk::impl::internal::WidgetClass> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types



};


struct StatusPageClassDef::TypeInitData
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

using StatusPageImpl = detail::ObjectImpl<StatusPage, internal::StatusPageClass>;

} // namespace impl

} // namespace Adw

} // namespace repository

} // namespace gi

#endif
