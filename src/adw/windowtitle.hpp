// AUTO-GENERATED

#ifndef _GI_ADW_WINDOWTITLE_HPP_
#define _GI_ADW_WINDOWTITLE_HPP_


namespace gi {

namespace repository {

namespace Adw {


class WindowTitle;

namespace base {


#define GI_ADW_WINDOWTITLE_BASE base::WindowTitleBase
class WindowTitleBase : public Gtk::Widget
{
typedef Gtk::Widget super_type;
public:
typedef ::AdwWindowTitle BaseObjectType;

WindowTitleBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return adw_window_title_get_type(); } 

// GtkWidget* /*none*/ adw_window_title_new (const char* title /*none*/, const char* subtitle /*none*/);
// ::AdwWindowTitle* /*none*/ adw_window_title_new (const char* title /*none*/, const char* subtitle /*none*/);
static GI_INLINE_DECL Adw::WindowTitle new_ (const gi::cstring_v title, const gi::cstring_v subtitle) noexcept;

// const char* /*none*/ adw_window_title_get_subtitle (AdwWindowTitle* self /*none*/);
// const char* /*none*/ adw_window_title_get_subtitle (::AdwWindowTitle* self /*none*/);
GI_INLINE_DECL gi::cstring_v get_subtitle () noexcept;

// const char* /*none*/ adw_window_title_get_title (AdwWindowTitle* self /*none*/);
// const char* /*none*/ adw_window_title_get_title (::AdwWindowTitle* self /*none*/);
GI_INLINE_DECL gi::cstring_v get_title () noexcept;

// void adw_window_title_set_subtitle (AdwWindowTitle* self /*none*/, const char* subtitle /*none*/);
// void adw_window_title_set_subtitle (::AdwWindowTitle* self /*none*/, const char* subtitle /*none*/);
GI_INLINE_DECL void set_subtitle (const gi::cstring_v subtitle) noexcept;

// void adw_window_title_set_title (AdwWindowTitle* self /*none*/, const char* title /*none*/);
// void adw_window_title_set_title (::AdwWindowTitle* self /*none*/, const char* title /*none*/);
GI_INLINE_DECL void set_title (const gi::cstring_v title) noexcept;

gi::property_proxy<gi::cstring, base::WindowTitleBase> property_subtitle()
{ return gi::property_proxy<gi::cstring, base::WindowTitleBase> (*this, "subtitle"); }
const gi::property_proxy<gi::cstring, base::WindowTitleBase> property_subtitle() const
{ return gi::property_proxy<gi::cstring, base::WindowTitleBase> (*this, "subtitle"); }

gi::property_proxy<gi::cstring, base::WindowTitleBase> property_title()
{ return gi::property_proxy<gi::cstring, base::WindowTitleBase> (*this, "title"); }
const gi::property_proxy<gi::cstring, base::WindowTitleBase> property_title() const
{ return gi::property_proxy<gi::cstring, base::WindowTitleBase> (*this, "title"); }

}; // class

} // namespace base

} // namespace Adw

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<adw/windowtitle_extra_def.hpp>)
#include <adw/windowtitle_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<adw/windowtitle_extra.hpp>)
#include <adw/windowtitle_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Adw {

class WindowTitle : public GI_ADW_WINDOWTITLE_BASE
{ typedef GI_ADW_WINDOWTITLE_BASE super_type; using super_type::super_type; };

} // namespace Adw

template<> struct declare_cpptype_of<::AdwWindowTitle>
{ typedef Adw::WindowTitle type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Adw {

namespace impl {

namespace internal {


class WindowTitleClassDef
{
typedef WindowTitleClassDef self;
public:
typedef Adw::WindowTitle instance_type;
typedef ::AdwWindowTitleClass class_type;


struct TypeInitData;

protected:
GI_INLINE_DECL ~WindowTitleClassDef() = default;
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );


};

GI_CLASS_IMPL_BEGIN


class WindowTitleClass: public detail::ClassTemplate<Adw::impl::internal::WindowTitleClassDef, Gtk::impl::internal::WidgetClass>
{
friend class internal::WindowTitleClassDef;
typedef WindowTitleClass self;
typedef detail::ClassTemplate<Adw::impl::internal::WindowTitleClassDef, Gtk::impl::internal::WidgetClass> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types



};


struct WindowTitleClassDef::TypeInitData
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

using WindowTitleImpl = detail::ObjectImpl<WindowTitle, internal::WindowTitleClass>;

} // namespace impl

} // namespace Adw

} // namespace repository

} // namespace gi

#endif
