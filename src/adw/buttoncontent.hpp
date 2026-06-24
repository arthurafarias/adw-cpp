// AUTO-GENERATED

#ifndef _GI_ADW_BUTTONCONTENT_HPP_
#define _GI_ADW_BUTTONCONTENT_HPP_


namespace gi {

namespace repository {

namespace Adw {


class ButtonContent;

namespace base {


#define GI_ADW_BUTTONCONTENT_BASE base::ButtonContentBase
class ButtonContentBase : public Gtk::Widget
{
typedef Gtk::Widget super_type;
public:
typedef ::AdwButtonContent BaseObjectType;

ButtonContentBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return adw_button_content_get_type(); } 

// GtkWidget* /*none*/ adw_button_content_new ();
// ::AdwButtonContent* /*none*/ adw_button_content_new ();
static GI_INLINE_DECL Adw::ButtonContent new_ () noexcept;

// gboolean adw_button_content_get_can_shrink (AdwButtonContent* self /*none*/);
// gboolean adw_button_content_get_can_shrink (::AdwButtonContent* self /*none*/);
GI_INLINE_DECL bool get_can_shrink () noexcept;

// const char* /*none*/ adw_button_content_get_icon_name (AdwButtonContent* self /*none*/);
// const char* /*none*/ adw_button_content_get_icon_name (::AdwButtonContent* self /*none*/);
GI_INLINE_DECL gi::cstring_v get_icon_name () noexcept;

// const char* /*none*/ adw_button_content_get_label (AdwButtonContent* self /*none*/);
// const char* /*none*/ adw_button_content_get_label (::AdwButtonContent* self /*none*/);
GI_INLINE_DECL gi::cstring_v get_label () noexcept;

// gboolean adw_button_content_get_use_underline (AdwButtonContent* self /*none*/);
// gboolean adw_button_content_get_use_underline (::AdwButtonContent* self /*none*/);
GI_INLINE_DECL bool get_use_underline () noexcept;

// void adw_button_content_set_can_shrink (AdwButtonContent* self /*none*/, gboolean can_shrink);
// void adw_button_content_set_can_shrink (::AdwButtonContent* self /*none*/, gboolean can_shrink);
GI_INLINE_DECL void set_can_shrink (gboolean can_shrink) noexcept;

// void adw_button_content_set_icon_name (AdwButtonContent* self /*none*/, const char* icon_name /*none*/);
// void adw_button_content_set_icon_name (::AdwButtonContent* self /*none*/, const char* icon_name /*none*/);
GI_INLINE_DECL void set_icon_name (const gi::cstring_v icon_name) noexcept;

// void adw_button_content_set_label (AdwButtonContent* self /*none*/, const char* label /*none*/);
// void adw_button_content_set_label (::AdwButtonContent* self /*none*/, const char* label /*none*/);
GI_INLINE_DECL void set_label (const gi::cstring_v label) noexcept;

// void adw_button_content_set_use_underline (AdwButtonContent* self /*none*/, gboolean use_underline);
// void adw_button_content_set_use_underline (::AdwButtonContent* self /*none*/, gboolean use_underline);
GI_INLINE_DECL void set_use_underline (gboolean use_underline) noexcept;

gi::property_proxy<bool, base::ButtonContentBase> property_can_shrink()
{ return gi::property_proxy<bool, base::ButtonContentBase> (*this, "can-shrink"); }
const gi::property_proxy<bool, base::ButtonContentBase> property_can_shrink() const
{ return gi::property_proxy<bool, base::ButtonContentBase> (*this, "can-shrink"); }

gi::property_proxy<gi::cstring, base::ButtonContentBase> property_icon_name()
{ return gi::property_proxy<gi::cstring, base::ButtonContentBase> (*this, "icon-name"); }
const gi::property_proxy<gi::cstring, base::ButtonContentBase> property_icon_name() const
{ return gi::property_proxy<gi::cstring, base::ButtonContentBase> (*this, "icon-name"); }

gi::property_proxy<gi::cstring, base::ButtonContentBase> property_label()
{ return gi::property_proxy<gi::cstring, base::ButtonContentBase> (*this, "label"); }
const gi::property_proxy<gi::cstring, base::ButtonContentBase> property_label() const
{ return gi::property_proxy<gi::cstring, base::ButtonContentBase> (*this, "label"); }

gi::property_proxy<bool, base::ButtonContentBase> property_use_underline()
{ return gi::property_proxy<bool, base::ButtonContentBase> (*this, "use-underline"); }
const gi::property_proxy<bool, base::ButtonContentBase> property_use_underline() const
{ return gi::property_proxy<bool, base::ButtonContentBase> (*this, "use-underline"); }

}; // class

} // namespace base

} // namespace Adw

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<adw/buttoncontent_extra_def.hpp>)
#include <adw/buttoncontent_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<adw/buttoncontent_extra.hpp>)
#include <adw/buttoncontent_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Adw {

class ButtonContent : public GI_ADW_BUTTONCONTENT_BASE
{ typedef GI_ADW_BUTTONCONTENT_BASE super_type; using super_type::super_type; };

} // namespace Adw

template<> struct declare_cpptype_of<::AdwButtonContent>
{ typedef Adw::ButtonContent type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Adw {

namespace impl {

namespace internal {


class ButtonContentClassDef
{
typedef ButtonContentClassDef self;
public:
typedef Adw::ButtonContent instance_type;
typedef ::AdwButtonContentClass class_type;


struct TypeInitData;

protected:
GI_INLINE_DECL ~ButtonContentClassDef() = default;
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );


};

GI_CLASS_IMPL_BEGIN


class ButtonContentClass: public detail::ClassTemplate<Adw::impl::internal::ButtonContentClassDef, Gtk::impl::internal::WidgetClass>
{
friend class internal::ButtonContentClassDef;
typedef ButtonContentClass self;
typedef detail::ClassTemplate<Adw::impl::internal::ButtonContentClassDef, Gtk::impl::internal::WidgetClass> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types



};


struct ButtonContentClassDef::TypeInitData
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

using ButtonContentImpl = detail::ObjectImpl<ButtonContent, internal::ButtonContentClass>;

} // namespace impl

} // namespace Adw

} // namespace repository

} // namespace gi

#endif
