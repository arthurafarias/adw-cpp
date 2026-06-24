// AUTO-GENERATED

#ifndef _GI_ADW_TOASTOVERLAY_HPP_
#define _GI_ADW_TOASTOVERLAY_HPP_


namespace gi {

namespace repository {

namespace Adw {

class Toast;

class ToastOverlay;

namespace base {


#define GI_ADW_TOASTOVERLAY_BASE base::ToastOverlayBase
class ToastOverlayBase : public Gtk::Widget
{
typedef Gtk::Widget super_type;
public:
typedef ::AdwToastOverlay BaseObjectType;

ToastOverlayBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return adw_toast_overlay_get_type(); } 

// GtkWidget* /*none*/ adw_toast_overlay_new ();
// ::AdwToastOverlay* /*none*/ adw_toast_overlay_new ();
static GI_INLINE_DECL Adw::ToastOverlay new_ () noexcept;

// void adw_toast_overlay_add_toast (AdwToastOverlay* self /*none*/, AdwToast* toast /*full*/);
// void adw_toast_overlay_add_toast (::AdwToastOverlay* self /*none*/, ::AdwToast* toast /*full*/);
GI_INLINE_DECL void add_toast (Adw::Toast toast) noexcept;

// void adw_toast_overlay_dismiss_all (AdwToastOverlay* self /*none*/);
// void adw_toast_overlay_dismiss_all (::AdwToastOverlay* self /*none*/);
GI_INLINE_DECL void dismiss_all () noexcept;

// GtkWidget* /*none,nullable*/ adw_toast_overlay_get_child (AdwToastOverlay* self /*none*/);
// ::GtkWidget* /*none,nullable*/ adw_toast_overlay_get_child (::AdwToastOverlay* self /*none*/);
GI_INLINE_DECL Gtk::Widget get_child () noexcept;

// void adw_toast_overlay_set_child (AdwToastOverlay* self /*none*/, GtkWidget* child /*none,nullable*/);
// void adw_toast_overlay_set_child (::AdwToastOverlay* self /*none*/, ::GtkWidget* child /*none,nullable*/);
GI_INLINE_DECL void set_child (Gtk::Widget child) noexcept;
GI_INLINE_DECL void set_child () noexcept;

gi::property_proxy<Gtk::Widget, base::ToastOverlayBase> property_child()
{ return gi::property_proxy<Gtk::Widget, base::ToastOverlayBase> (*this, "child"); }
const gi::property_proxy<Gtk::Widget, base::ToastOverlayBase> property_child() const
{ return gi::property_proxy<Gtk::Widget, base::ToastOverlayBase> (*this, "child"); }

}; // class

} // namespace base

} // namespace Adw

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<adw/toastoverlay_extra_def.hpp>)
#include <adw/toastoverlay_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<adw/toastoverlay_extra.hpp>)
#include <adw/toastoverlay_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Adw {

class ToastOverlay : public GI_ADW_TOASTOVERLAY_BASE
{ typedef GI_ADW_TOASTOVERLAY_BASE super_type; using super_type::super_type; };

} // namespace Adw

template<> struct declare_cpptype_of<::AdwToastOverlay>
{ typedef Adw::ToastOverlay type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Adw {

namespace impl {

namespace internal {


class ToastOverlayClassDef
{
typedef ToastOverlayClassDef self;
public:
typedef Adw::ToastOverlay instance_type;
typedef ::AdwToastOverlayClass class_type;


struct TypeInitData;

protected:
GI_INLINE_DECL ~ToastOverlayClassDef() = default;
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );


};

GI_CLASS_IMPL_BEGIN


class ToastOverlayClass: public detail::ClassTemplate<Adw::impl::internal::ToastOverlayClassDef, Gtk::impl::internal::WidgetClass>
{
friend class internal::ToastOverlayClassDef;
typedef ToastOverlayClass self;
typedef detail::ClassTemplate<Adw::impl::internal::ToastOverlayClassDef, Gtk::impl::internal::WidgetClass> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types



};


struct ToastOverlayClassDef::TypeInitData
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

using ToastOverlayImpl = detail::ObjectImpl<ToastOverlay, internal::ToastOverlayClass>;

} // namespace impl

} // namespace Adw

} // namespace repository

} // namespace gi

#endif
