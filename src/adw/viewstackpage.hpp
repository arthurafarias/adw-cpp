// AUTO-GENERATED

#ifndef _GI_ADW_VIEWSTACKPAGE_HPP_
#define _GI_ADW_VIEWSTACKPAGE_HPP_


namespace gi {

namespace repository {

namespace Adw {


class ViewStackPage;

namespace base {


#define GI_ADW_VIEWSTACKPAGE_BASE base::ViewStackPageBase
class ViewStackPageBase : public GObject::Object
{
typedef GObject::Object super_type;
public:
typedef ::AdwViewStackPage BaseObjectType;

ViewStackPageBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return adw_view_stack_page_get_type(); } 

GI_INLINE_DECL Gtk::Accessible interface_ (gi::interface_tag<Gtk::Accessible>);

GI_INLINE_DECL operator Gtk::Accessible ();

// guint adw_view_stack_page_get_badge_number (AdwViewStackPage* self /*none*/);
// guint adw_view_stack_page_get_badge_number (::AdwViewStackPage* self /*none*/);
GI_INLINE_DECL guint get_badge_number () noexcept;

// GtkWidget* /*none*/ adw_view_stack_page_get_child (AdwViewStackPage* self /*none*/);
// ::GtkWidget* /*none*/ adw_view_stack_page_get_child (::AdwViewStackPage* self /*none*/);
GI_INLINE_DECL Gtk::Widget get_child () noexcept;

// const char* /*none,nullable*/ adw_view_stack_page_get_icon_name (AdwViewStackPage* self /*none*/);
// const char* /*none,nullable*/ adw_view_stack_page_get_icon_name (::AdwViewStackPage* self /*none*/);
GI_INLINE_DECL gi::cstring_v get_icon_name () noexcept;

// const char* /*none,nullable*/ adw_view_stack_page_get_name (AdwViewStackPage* self /*none*/);
// const char* /*none,nullable*/ adw_view_stack_page_get_name (::AdwViewStackPage* self /*none*/);
GI_INLINE_DECL gi::cstring_v get_name () noexcept;

// gboolean adw_view_stack_page_get_needs_attention (AdwViewStackPage* self /*none*/);
// gboolean adw_view_stack_page_get_needs_attention (::AdwViewStackPage* self /*none*/);
GI_INLINE_DECL bool get_needs_attention () noexcept;

// const char* /*none,nullable*/ adw_view_stack_page_get_section_title (AdwViewStackPage* self /*none*/);
// const char* /*none,nullable*/ adw_view_stack_page_get_section_title (::AdwViewStackPage* self /*none*/);
GI_INLINE_DECL gi::cstring_v get_section_title () noexcept;

// gboolean adw_view_stack_page_get_starts_section (AdwViewStackPage* self /*none*/);
// gboolean adw_view_stack_page_get_starts_section (::AdwViewStackPage* self /*none*/);
GI_INLINE_DECL bool get_starts_section () noexcept;

// const char* /*none,nullable*/ adw_view_stack_page_get_title (AdwViewStackPage* self /*none*/);
// const char* /*none,nullable*/ adw_view_stack_page_get_title (::AdwViewStackPage* self /*none*/);
GI_INLINE_DECL gi::cstring_v get_title () noexcept;

// gboolean adw_view_stack_page_get_use_underline (AdwViewStackPage* self /*none*/);
// gboolean adw_view_stack_page_get_use_underline (::AdwViewStackPage* self /*none*/);
GI_INLINE_DECL bool get_use_underline () noexcept;

// gboolean adw_view_stack_page_get_visible (AdwViewStackPage* self /*none*/);
// gboolean adw_view_stack_page_get_visible (::AdwViewStackPage* self /*none*/);
GI_INLINE_DECL bool get_visible () noexcept;

// void adw_view_stack_page_set_badge_number (AdwViewStackPage* self /*none*/, guint badge_number);
// void adw_view_stack_page_set_badge_number (::AdwViewStackPage* self /*none*/, guint badge_number);
GI_INLINE_DECL void set_badge_number (guint badge_number) noexcept;

// void adw_view_stack_page_set_icon_name (AdwViewStackPage* self /*none*/, const char* icon_name /*none,nullable*/);
// void adw_view_stack_page_set_icon_name (::AdwViewStackPage* self /*none*/, const char* icon_name /*none,nullable*/);
GI_INLINE_DECL void set_icon_name (const gi::cstring_v icon_name) noexcept;
GI_INLINE_DECL void set_icon_name () noexcept;

// void adw_view_stack_page_set_name (AdwViewStackPage* self /*none*/, const char* name /*none,nullable*/);
// void adw_view_stack_page_set_name (::AdwViewStackPage* self /*none*/, const char* name /*none,nullable*/);
GI_INLINE_DECL void set_name (const gi::cstring_v name) noexcept;
GI_INLINE_DECL void set_name () noexcept;

// void adw_view_stack_page_set_needs_attention (AdwViewStackPage* self /*none*/, gboolean needs_attention);
// void adw_view_stack_page_set_needs_attention (::AdwViewStackPage* self /*none*/, gboolean needs_attention);
GI_INLINE_DECL void set_needs_attention (gboolean needs_attention) noexcept;

// void adw_view_stack_page_set_section_title (AdwViewStackPage* self /*none*/, const char* section_title /*none,nullable*/);
// void adw_view_stack_page_set_section_title (::AdwViewStackPage* self /*none*/, const char* section_title /*none,nullable*/);
GI_INLINE_DECL void set_section_title (const gi::cstring_v section_title) noexcept;
GI_INLINE_DECL void set_section_title () noexcept;

// void adw_view_stack_page_set_starts_section (AdwViewStackPage* self /*none*/, gboolean starts_section);
// void adw_view_stack_page_set_starts_section (::AdwViewStackPage* self /*none*/, gboolean starts_section);
GI_INLINE_DECL void set_starts_section (gboolean starts_section) noexcept;

// void adw_view_stack_page_set_title (AdwViewStackPage* self /*none*/, const char* title /*none,nullable*/);
// void adw_view_stack_page_set_title (::AdwViewStackPage* self /*none*/, const char* title /*none,nullable*/);
GI_INLINE_DECL void set_title (const gi::cstring_v title) noexcept;
GI_INLINE_DECL void set_title () noexcept;

// void adw_view_stack_page_set_use_underline (AdwViewStackPage* self /*none*/, gboolean use_underline);
// void adw_view_stack_page_set_use_underline (::AdwViewStackPage* self /*none*/, gboolean use_underline);
GI_INLINE_DECL void set_use_underline (gboolean use_underline) noexcept;

// void adw_view_stack_page_set_visible (AdwViewStackPage* self /*none*/, gboolean visible);
// void adw_view_stack_page_set_visible (::AdwViewStackPage* self /*none*/, gboolean visible);
GI_INLINE_DECL void set_visible (gboolean visible) noexcept;

gi::property_proxy<guint, base::ViewStackPageBase> property_badge_number()
{ return gi::property_proxy<guint, base::ViewStackPageBase> (*this, "badge-number"); }
const gi::property_proxy<guint, base::ViewStackPageBase> property_badge_number() const
{ return gi::property_proxy<guint, base::ViewStackPageBase> (*this, "badge-number"); }

gi::property_proxy<Gtk::Widget, base::ViewStackPageBase> property_child()
{ return gi::property_proxy<Gtk::Widget, base::ViewStackPageBase> (*this, "child"); }
const gi::property_proxy<Gtk::Widget, base::ViewStackPageBase> property_child() const
{ return gi::property_proxy<Gtk::Widget, base::ViewStackPageBase> (*this, "child"); }

gi::property_proxy<gi::cstring, base::ViewStackPageBase> property_icon_name()
{ return gi::property_proxy<gi::cstring, base::ViewStackPageBase> (*this, "icon-name"); }
const gi::property_proxy<gi::cstring, base::ViewStackPageBase> property_icon_name() const
{ return gi::property_proxy<gi::cstring, base::ViewStackPageBase> (*this, "icon-name"); }

gi::property_proxy<gi::cstring, base::ViewStackPageBase> property_name()
{ return gi::property_proxy<gi::cstring, base::ViewStackPageBase> (*this, "name"); }
const gi::property_proxy<gi::cstring, base::ViewStackPageBase> property_name() const
{ return gi::property_proxy<gi::cstring, base::ViewStackPageBase> (*this, "name"); }

gi::property_proxy<bool, base::ViewStackPageBase> property_needs_attention()
{ return gi::property_proxy<bool, base::ViewStackPageBase> (*this, "needs-attention"); }
const gi::property_proxy<bool, base::ViewStackPageBase> property_needs_attention() const
{ return gi::property_proxy<bool, base::ViewStackPageBase> (*this, "needs-attention"); }

gi::property_proxy<gi::cstring, base::ViewStackPageBase> property_section_title()
{ return gi::property_proxy<gi::cstring, base::ViewStackPageBase> (*this, "section-title"); }
const gi::property_proxy<gi::cstring, base::ViewStackPageBase> property_section_title() const
{ return gi::property_proxy<gi::cstring, base::ViewStackPageBase> (*this, "section-title"); }

gi::property_proxy<bool, base::ViewStackPageBase> property_starts_section()
{ return gi::property_proxy<bool, base::ViewStackPageBase> (*this, "starts-section"); }
const gi::property_proxy<bool, base::ViewStackPageBase> property_starts_section() const
{ return gi::property_proxy<bool, base::ViewStackPageBase> (*this, "starts-section"); }

gi::property_proxy<gi::cstring, base::ViewStackPageBase> property_title()
{ return gi::property_proxy<gi::cstring, base::ViewStackPageBase> (*this, "title"); }
const gi::property_proxy<gi::cstring, base::ViewStackPageBase> property_title() const
{ return gi::property_proxy<gi::cstring, base::ViewStackPageBase> (*this, "title"); }

gi::property_proxy<bool, base::ViewStackPageBase> property_use_underline()
{ return gi::property_proxy<bool, base::ViewStackPageBase> (*this, "use-underline"); }
const gi::property_proxy<bool, base::ViewStackPageBase> property_use_underline() const
{ return gi::property_proxy<bool, base::ViewStackPageBase> (*this, "use-underline"); }

gi::property_proxy<bool, base::ViewStackPageBase> property_visible()
{ return gi::property_proxy<bool, base::ViewStackPageBase> (*this, "visible"); }
const gi::property_proxy<bool, base::ViewStackPageBase> property_visible() const
{ return gi::property_proxy<bool, base::ViewStackPageBase> (*this, "visible"); }

}; // class

} // namespace base

} // namespace Adw

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<adw/viewstackpage_extra_def.hpp>)
#include <adw/viewstackpage_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<adw/viewstackpage_extra.hpp>)
#include <adw/viewstackpage_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Adw {

class ViewStackPage : public GI_ADW_VIEWSTACKPAGE_BASE
{ typedef GI_ADW_VIEWSTACKPAGE_BASE super_type; using super_type::super_type; };

} // namespace Adw

template<> struct declare_cpptype_of<::AdwViewStackPage>
{ typedef Adw::ViewStackPage type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Adw {

namespace impl {

namespace internal {


class ViewStackPageClassDef
{
typedef ViewStackPageClassDef self;
public:
typedef Adw::ViewStackPage instance_type;
typedef ::AdwViewStackPageClass class_type;


struct TypeInitData;

protected:
GI_INLINE_DECL ~ViewStackPageClassDef() = default;
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );


};

GI_CLASS_IMPL_BEGIN


class ViewStackPageClass: public detail::ClassTemplate<Adw::impl::internal::ViewStackPageClassDef, GObject::impl::internal::ObjectClass, Gtk::impl::internal::AccessibleInterfaceClassImpl>
{
friend class internal::ViewStackPageClassDef;
typedef ViewStackPageClass self;
typedef detail::ClassTemplate<Adw::impl::internal::ViewStackPageClassDef, GObject::impl::internal::ObjectClass, Gtk::impl::internal::AccessibleInterfaceClassImpl> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types
typedef Gtk::impl::internal::AccessibleInterfaceClassImpl GtkAccessibleInterface_type;



};


struct ViewStackPageClassDef::TypeInitData
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

using ViewStackPageImpl = detail::ObjectImpl<ViewStackPage, internal::ViewStackPageClass>;

} // namespace impl

} // namespace Adw

} // namespace repository

} // namespace gi

#endif
