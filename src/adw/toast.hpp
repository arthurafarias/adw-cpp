// AUTO-GENERATED

#ifndef _GI_ADW_TOAST_HPP_
#define _GI_ADW_TOAST_HPP_


namespace gi {

namespace repository {

namespace Adw {


class Toast;

namespace base {


#define GI_ADW_TOAST_BASE base::ToastBase
class ToastBase : public GObject::Object
{
typedef GObject::Object super_type;
public:
typedef ::AdwToast BaseObjectType;

ToastBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return adw_toast_get_type(); } 

// AdwToast* /*full*/ adw_toast_new (const char* title /*none*/);
// ::AdwToast* /*full*/ adw_toast_new (const char* title /*none*/);
static GI_INLINE_DECL Adw::Toast new_ (const gi::cstring_v title) noexcept;

// AdwToast* /*full*/ adw_toast_new_format (const char* format /*none*/,  ..._ /*none*/);
// ::AdwToast* /*full*/ adw_toast_new_format (const char* format /*none*/,  ..._ /*none*/);
// IGNORE; not introspectable, varargs not supported

// void adw_toast_dismiss (AdwToast* self /*none*/);
// void adw_toast_dismiss (::AdwToast* self /*none*/);
GI_INLINE_DECL void dismiss () noexcept;

// const char* /*none,nullable*/ adw_toast_get_action_name (AdwToast* self /*none*/);
// const char* /*none,nullable*/ adw_toast_get_action_name (::AdwToast* self /*none*/);
GI_INLINE_DECL gi::cstring_v get_action_name () noexcept;

// GVariant* /*none,nullable*/ adw_toast_get_action_target_value (AdwToast* self /*none*/);
// ::GVariant* /*none,nullable*/ adw_toast_get_action_target_value (::AdwToast* self /*none*/);
GI_INLINE_DECL GLib::Variant get_action_target_value () noexcept;

// const char* /*none,nullable*/ adw_toast_get_button_label (AdwToast* self /*none*/);
// const char* /*none,nullable*/ adw_toast_get_button_label (::AdwToast* self /*none*/);
GI_INLINE_DECL gi::cstring_v get_button_label () noexcept;

// GtkWidget* /*none,nullable*/ adw_toast_get_custom_title (AdwToast* self /*none*/);
// ::GtkWidget* /*none,nullable*/ adw_toast_get_custom_title (::AdwToast* self /*none*/);
GI_INLINE_DECL Gtk::Widget get_custom_title () noexcept;

// AdwToastPriority adw_toast_get_priority (AdwToast* self /*none*/);
// ::AdwToastPriority adw_toast_get_priority (::AdwToast* self /*none*/);
GI_INLINE_DECL Adw::ToastPriority get_priority () noexcept;

// guint adw_toast_get_timeout (AdwToast* self /*none*/);
// guint adw_toast_get_timeout (::AdwToast* self /*none*/);
GI_INLINE_DECL guint get_timeout () noexcept;

// const char* /*none,nullable*/ adw_toast_get_title (AdwToast* self /*none*/);
// const char* /*none,nullable*/ adw_toast_get_title (::AdwToast* self /*none*/);
GI_INLINE_DECL gi::cstring_v get_title () noexcept;

// gboolean adw_toast_get_use_markup (AdwToast* self /*none*/);
// gboolean adw_toast_get_use_markup (::AdwToast* self /*none*/);
GI_INLINE_DECL bool get_use_markup () noexcept;

// void adw_toast_set_action_name (AdwToast* self /*none*/, const char* action_name /*none,nullable*/);
// void adw_toast_set_action_name (::AdwToast* self /*none*/, const char* action_name /*none,nullable*/);
GI_INLINE_DECL void set_action_name (const gi::cstring_v action_name) noexcept;
GI_INLINE_DECL void set_action_name () noexcept;

// void adw_toast_set_action_target (AdwToast* self /*none*/, const char* format_string /*none,nullable*/,  ..._ /*none*/);
// void adw_toast_set_action_target (::AdwToast* self /*none*/, const char* format_string /*none,nullable*/,  ..._ /*none*/);
// IGNORE; not introspectable, varargs not supported

// void adw_toast_set_action_target_value (AdwToast* self /*none*/, GVariant* action_target /*none,nullable*/);
// void adw_toast_set_action_target_value (::AdwToast* self /*none*/, ::GVariant* action_target /*none,nullable*/);
GI_INLINE_DECL void set_action_target_value (GLib::Variant action_target) noexcept;
GI_INLINE_DECL void set_action_target_value () noexcept;

// void adw_toast_set_button_label (AdwToast* self /*none*/, const char* button_label /*none,nullable*/);
// void adw_toast_set_button_label (::AdwToast* self /*none*/, const char* button_label /*none,nullable*/);
GI_INLINE_DECL void set_button_label (const gi::cstring_v button_label) noexcept;
GI_INLINE_DECL void set_button_label () noexcept;

// void adw_toast_set_custom_title (AdwToast* self /*none*/, GtkWidget* widget /*none,nullable*/);
// void adw_toast_set_custom_title (::AdwToast* self /*none*/, ::GtkWidget* widget /*none,nullable*/);
GI_INLINE_DECL void set_custom_title (Gtk::Widget widget) noexcept;
GI_INLINE_DECL void set_custom_title () noexcept;

// void adw_toast_set_detailed_action_name (AdwToast* self /*none*/, const char* detailed_action_name /*none,nullable*/);
// void adw_toast_set_detailed_action_name (::AdwToast* self /*none*/, const char* detailed_action_name /*none,nullable*/);
GI_INLINE_DECL void set_detailed_action_name (const gi::cstring_v detailed_action_name) noexcept;
GI_INLINE_DECL void set_detailed_action_name () noexcept;

// void adw_toast_set_priority (AdwToast* self /*none*/, AdwToastPriority priority);
// void adw_toast_set_priority (::AdwToast* self /*none*/, ::AdwToastPriority priority);
GI_INLINE_DECL void set_priority (Adw::ToastPriority priority) noexcept;

// void adw_toast_set_timeout (AdwToast* self /*none*/, guint timeout);
// void adw_toast_set_timeout (::AdwToast* self /*none*/, guint timeout);
GI_INLINE_DECL void set_timeout (guint timeout) noexcept;

// void adw_toast_set_title (AdwToast* self /*none*/, const char* title /*none*/);
// void adw_toast_set_title (::AdwToast* self /*none*/, const char* title /*none*/);
GI_INLINE_DECL void set_title (const gi::cstring_v title) noexcept;

// void adw_toast_set_use_markup (AdwToast* self /*none*/, gboolean use_markup);
// void adw_toast_set_use_markup (::AdwToast* self /*none*/, gboolean use_markup);
GI_INLINE_DECL void set_use_markup (gboolean use_markup) noexcept;

gi::property_proxy<gi::cstring, base::ToastBase> property_action_name()
{ return gi::property_proxy<gi::cstring, base::ToastBase> (*this, "action-name"); }
const gi::property_proxy<gi::cstring, base::ToastBase> property_action_name() const
{ return gi::property_proxy<gi::cstring, base::ToastBase> (*this, "action-name"); }

gi::property_proxy<GLib::Variant, base::ToastBase> property_action_target()
{ return gi::property_proxy<GLib::Variant, base::ToastBase> (*this, "action-target"); }
const gi::property_proxy<GLib::Variant, base::ToastBase> property_action_target() const
{ return gi::property_proxy<GLib::Variant, base::ToastBase> (*this, "action-target"); }

gi::property_proxy<gi::cstring, base::ToastBase> property_button_label()
{ return gi::property_proxy<gi::cstring, base::ToastBase> (*this, "button-label"); }
const gi::property_proxy<gi::cstring, base::ToastBase> property_button_label() const
{ return gi::property_proxy<gi::cstring, base::ToastBase> (*this, "button-label"); }

gi::property_proxy<Gtk::Widget, base::ToastBase> property_custom_title()
{ return gi::property_proxy<Gtk::Widget, base::ToastBase> (*this, "custom-title"); }
const gi::property_proxy<Gtk::Widget, base::ToastBase> property_custom_title() const
{ return gi::property_proxy<Gtk::Widget, base::ToastBase> (*this, "custom-title"); }

gi::property_proxy<Adw::ToastPriority, base::ToastBase> property_priority()
{ return gi::property_proxy<Adw::ToastPriority, base::ToastBase> (*this, "priority"); }
const gi::property_proxy<Adw::ToastPriority, base::ToastBase> property_priority() const
{ return gi::property_proxy<Adw::ToastPriority, base::ToastBase> (*this, "priority"); }

gi::property_proxy<guint, base::ToastBase> property_timeout()
{ return gi::property_proxy<guint, base::ToastBase> (*this, "timeout"); }
const gi::property_proxy<guint, base::ToastBase> property_timeout() const
{ return gi::property_proxy<guint, base::ToastBase> (*this, "timeout"); }

gi::property_proxy<gi::cstring, base::ToastBase> property_title()
{ return gi::property_proxy<gi::cstring, base::ToastBase> (*this, "title"); }
const gi::property_proxy<gi::cstring, base::ToastBase> property_title() const
{ return gi::property_proxy<gi::cstring, base::ToastBase> (*this, "title"); }

gi::property_proxy<bool, base::ToastBase> property_use_markup()
{ return gi::property_proxy<bool, base::ToastBase> (*this, "use-markup"); }
const gi::property_proxy<bool, base::ToastBase> property_use_markup() const
{ return gi::property_proxy<bool, base::ToastBase> (*this, "use-markup"); }

// (signal) void button-clicked ();
// (signal) void button-clicked ();
gi::signal_proxy<void(Adw::Toast)> signal_button_clicked()
{ return gi::signal_proxy<void(Adw::Toast)> (*this, "button-clicked"); }

// (signal) void dismissed ();
// (signal) void dismissed ();
gi::signal_proxy<void(Adw::Toast)> signal_dismissed()
{ return gi::signal_proxy<void(Adw::Toast)> (*this, "dismissed"); }

}; // class

} // namespace base

} // namespace Adw

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<adw/toast_extra_def.hpp>)
#include <adw/toast_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<adw/toast_extra.hpp>)
#include <adw/toast_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Adw {

class Toast : public GI_ADW_TOAST_BASE
{ typedef GI_ADW_TOAST_BASE super_type; using super_type::super_type; };

} // namespace Adw

template<> struct declare_cpptype_of<::AdwToast>
{ typedef Adw::Toast type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Adw {

namespace impl {

namespace internal {


class ToastClassDef
{
typedef ToastClassDef self;
public:
typedef Adw::Toast instance_type;
typedef ::AdwToastClass class_type;


struct TypeInitData;

protected:
GI_INLINE_DECL ~ToastClassDef() = default;
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );


};

GI_CLASS_IMPL_BEGIN


class ToastClass: public detail::ClassTemplate<Adw::impl::internal::ToastClassDef, GObject::impl::internal::ObjectClass>
{
friend class internal::ToastClassDef;
typedef ToastClass self;
typedef detail::ClassTemplate<Adw::impl::internal::ToastClassDef, GObject::impl::internal::ObjectClass> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types



};


struct ToastClassDef::TypeInitData
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

using ToastImpl = detail::ObjectImpl<Toast, internal::ToastClass>;

} // namespace impl

} // namespace Adw

} // namespace repository

} // namespace gi

#endif
