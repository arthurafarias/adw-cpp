// AUTO-GENERATED

#ifndef _GI_ADW_ALERTDIALOG_HPP_
#define _GI_ADW_ALERTDIALOG_HPP_

#include "dialog.hpp"

namespace gi {

namespace repository {

namespace Adw {


class AlertDialog;

namespace base {


#define GI_ADW_ALERTDIALOG_BASE base::AlertDialogBase
class AlertDialogBase : public Adw::Dialog
{
typedef Adw::Dialog super_type;
public:
typedef ::AdwAlertDialog BaseObjectType;

AlertDialogBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return adw_alert_dialog_get_type(); } 

// AdwDialog* /*none*/ adw_alert_dialog_new (const char* heading /*none,nullable*/, const char* body /*none,nullable*/);
// ::AdwAlertDialog* /*none*/ adw_alert_dialog_new (const char* heading /*none,nullable*/, const char* body /*none,nullable*/);
static GI_INLINE_DECL Adw::AlertDialog new_ (const gi::cstring_v heading, const gi::cstring_v body) noexcept;
static GI_INLINE_DECL Adw::AlertDialog new_ () noexcept;

// void adw_alert_dialog_add_response (AdwAlertDialog* self /*none*/, const char* id /*none*/, const char* label /*none*/);
// void adw_alert_dialog_add_response (::AdwAlertDialog* self /*none*/, const char* id /*none*/, const char* label /*none*/);
GI_INLINE_DECL void add_response (const gi::cstring_v id, const gi::cstring_v label) noexcept;

// void adw_alert_dialog_add_responses (AdwAlertDialog* self /*none*/, const char* first_id /*none*/,  ..._ /*none*/);
// void adw_alert_dialog_add_responses (::AdwAlertDialog* self /*none*/, const char* first_id /*none*/,  ..._ /*none*/);
// IGNORE; not introspectable, varargs not supported

// void adw_alert_dialog_choose (AdwAlertDialog* self /*none*/, GtkWidget* parent /*none,nullable*/, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void adw_alert_dialog_choose (::AdwAlertDialog* self /*none*/, ::GtkWidget* parent /*none,nullable*/, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
GI_INLINE_DECL void choose (Gtk::Widget parent, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept;
GI_INLINE_DECL void choose (Gio::AsyncReadyCallback callback) noexcept;

// const char* /*none*/ adw_alert_dialog_choose_finish (AdwAlertDialog* self /*none*/, GAsyncResult* result /*none*/);
// const char* /*none*/ adw_alert_dialog_choose_finish (::AdwAlertDialog* self /*none*/, ::GAsyncResult* result /*none*/);
GI_INLINE_DECL gi::cstring_v choose_finish (Gio::AsyncResult result) noexcept;

// void adw_alert_dialog_format_body (AdwAlertDialog* self /*none*/, const char* format /*none*/,  ..._ /*none*/);
// void adw_alert_dialog_format_body (::AdwAlertDialog* self /*none*/, const char* format /*none*/,  ..._ /*none*/);
// IGNORE; not introspectable, varargs not supported

// void adw_alert_dialog_format_body_markup (AdwAlertDialog* self /*none*/, const char* format /*none*/,  ..._ /*none*/);
// void adw_alert_dialog_format_body_markup (::AdwAlertDialog* self /*none*/, const char* format /*none*/,  ..._ /*none*/);
// IGNORE; not introspectable, varargs not supported

// void adw_alert_dialog_format_heading (AdwAlertDialog* self /*none*/, const char* format /*none*/,  ..._ /*none*/);
// void adw_alert_dialog_format_heading (::AdwAlertDialog* self /*none*/, const char* format /*none*/,  ..._ /*none*/);
// IGNORE; not introspectable, varargs not supported

// void adw_alert_dialog_format_heading_markup (AdwAlertDialog* self /*none*/, const char* format /*none*/,  ..._ /*none*/);
// void adw_alert_dialog_format_heading_markup (::AdwAlertDialog* self /*none*/, const char* format /*none*/,  ..._ /*none*/);
// IGNORE; not introspectable, varargs not supported

// const char* /*none*/ adw_alert_dialog_get_body (AdwAlertDialog* self /*none*/);
// const char* /*none*/ adw_alert_dialog_get_body (::AdwAlertDialog* self /*none*/);
GI_INLINE_DECL gi::cstring_v get_body () noexcept;

// gboolean adw_alert_dialog_get_body_use_markup (AdwAlertDialog* self /*none*/);
// gboolean adw_alert_dialog_get_body_use_markup (::AdwAlertDialog* self /*none*/);
GI_INLINE_DECL bool get_body_use_markup () noexcept;

// const char* /*none*/ adw_alert_dialog_get_close_response (AdwAlertDialog* self /*none*/);
// const char* /*none*/ adw_alert_dialog_get_close_response (::AdwAlertDialog* self /*none*/);
GI_INLINE_DECL gi::cstring_v get_close_response () noexcept;

// const char* /*none,nullable*/ adw_alert_dialog_get_default_response (AdwAlertDialog* self /*none*/);
// const char* /*none,nullable*/ adw_alert_dialog_get_default_response (::AdwAlertDialog* self /*none*/);
GI_INLINE_DECL gi::cstring_v get_default_response () noexcept;

// GtkWidget* /*none,nullable*/ adw_alert_dialog_get_extra_child (AdwAlertDialog* self /*none*/);
// ::GtkWidget* /*none,nullable*/ adw_alert_dialog_get_extra_child (::AdwAlertDialog* self /*none*/);
GI_INLINE_DECL Gtk::Widget get_extra_child () noexcept;

// const char* /*none,nullable*/ adw_alert_dialog_get_heading (AdwAlertDialog* self /*none*/);
// const char* /*none,nullable*/ adw_alert_dialog_get_heading (::AdwAlertDialog* self /*none*/);
GI_INLINE_DECL gi::cstring_v get_heading () noexcept;

// gboolean adw_alert_dialog_get_heading_use_markup (AdwAlertDialog* self /*none*/);
// gboolean adw_alert_dialog_get_heading_use_markup (::AdwAlertDialog* self /*none*/);
GI_INLINE_DECL bool get_heading_use_markup () noexcept;

// gboolean adw_alert_dialog_get_prefer_wide_layout (AdwAlertDialog* self /*none*/);
// gboolean adw_alert_dialog_get_prefer_wide_layout (::AdwAlertDialog* self /*none*/);
GI_INLINE_DECL bool get_prefer_wide_layout () noexcept;

// AdwResponseAppearance adw_alert_dialog_get_response_appearance (AdwAlertDialog* self /*none*/, const char* response /*none*/);
// ::AdwResponseAppearance adw_alert_dialog_get_response_appearance (::AdwAlertDialog* self /*none*/, const char* response /*none*/);
GI_INLINE_DECL Adw::ResponseAppearance get_response_appearance (const gi::cstring_v response) noexcept;

// gboolean adw_alert_dialog_get_response_enabled (AdwAlertDialog* self /*none*/, const char* response /*none*/);
// gboolean adw_alert_dialog_get_response_enabled (::AdwAlertDialog* self /*none*/, const char* response /*none*/);
GI_INLINE_DECL bool get_response_enabled (const gi::cstring_v response) noexcept;

// const char* /*none*/ adw_alert_dialog_get_response_label (AdwAlertDialog* self /*none*/, const char* response /*none*/);
// const char* /*none*/ adw_alert_dialog_get_response_label (::AdwAlertDialog* self /*none*/, const char* response /*none*/);
GI_INLINE_DECL gi::cstring_v get_response_label (const gi::cstring_v response) noexcept;

// gboolean adw_alert_dialog_has_response (AdwAlertDialog* self /*none*/, const char* response /*none*/);
// gboolean adw_alert_dialog_has_response (::AdwAlertDialog* self /*none*/, const char* response /*none*/);
GI_INLINE_DECL bool has_response (const gi::cstring_v response) noexcept;

// void adw_alert_dialog_remove_response (AdwAlertDialog* self /*none*/, const char* id /*none*/);
// void adw_alert_dialog_remove_response (::AdwAlertDialog* self /*none*/, const char* id /*none*/);
GI_INLINE_DECL void remove_response (const gi::cstring_v id) noexcept;

// void adw_alert_dialog_set_body (AdwAlertDialog* self /*none*/, const char* body /*none*/);
// void adw_alert_dialog_set_body (::AdwAlertDialog* self /*none*/, const char* body /*none*/);
GI_INLINE_DECL void set_body (const gi::cstring_v body) noexcept;

// void adw_alert_dialog_set_body_use_markup (AdwAlertDialog* self /*none*/, gboolean use_markup);
// void adw_alert_dialog_set_body_use_markup (::AdwAlertDialog* self /*none*/, gboolean use_markup);
GI_INLINE_DECL void set_body_use_markup (gboolean use_markup) noexcept;

// void adw_alert_dialog_set_close_response (AdwAlertDialog* self /*none*/, const char* response /*none*/);
// void adw_alert_dialog_set_close_response (::AdwAlertDialog* self /*none*/, const char* response /*none*/);
GI_INLINE_DECL void set_close_response (const gi::cstring_v response) noexcept;

// void adw_alert_dialog_set_default_response (AdwAlertDialog* self /*none*/, const char* response /*none,nullable*/);
// void adw_alert_dialog_set_default_response (::AdwAlertDialog* self /*none*/, const char* response /*none,nullable*/);
GI_INLINE_DECL void set_default_response (const gi::cstring_v response) noexcept;
GI_INLINE_DECL void set_default_response () noexcept;

// void adw_alert_dialog_set_extra_child (AdwAlertDialog* self /*none*/, GtkWidget* child /*none,nullable*/);
// void adw_alert_dialog_set_extra_child (::AdwAlertDialog* self /*none*/, ::GtkWidget* child /*none,nullable*/);
GI_INLINE_DECL void set_extra_child (Gtk::Widget child) noexcept;
GI_INLINE_DECL void set_extra_child () noexcept;

// void adw_alert_dialog_set_heading (AdwAlertDialog* self /*none*/, const char* heading /*none,nullable*/);
// void adw_alert_dialog_set_heading (::AdwAlertDialog* self /*none*/, const char* heading /*none,nullable*/);
GI_INLINE_DECL void set_heading (const gi::cstring_v heading) noexcept;
GI_INLINE_DECL void set_heading () noexcept;

// void adw_alert_dialog_set_heading_use_markup (AdwAlertDialog* self /*none*/, gboolean use_markup);
// void adw_alert_dialog_set_heading_use_markup (::AdwAlertDialog* self /*none*/, gboolean use_markup);
GI_INLINE_DECL void set_heading_use_markup (gboolean use_markup) noexcept;

// void adw_alert_dialog_set_prefer_wide_layout (AdwAlertDialog* self /*none*/, gboolean prefer_wide_layout);
// void adw_alert_dialog_set_prefer_wide_layout (::AdwAlertDialog* self /*none*/, gboolean prefer_wide_layout);
GI_INLINE_DECL void set_prefer_wide_layout (gboolean prefer_wide_layout) noexcept;

// void adw_alert_dialog_set_response_appearance (AdwAlertDialog* self /*none*/, const char* response /*none*/, AdwResponseAppearance appearance);
// void adw_alert_dialog_set_response_appearance (::AdwAlertDialog* self /*none*/, const char* response /*none*/, ::AdwResponseAppearance appearance);
GI_INLINE_DECL void set_response_appearance (const gi::cstring_v response, Adw::ResponseAppearance appearance) noexcept;

// void adw_alert_dialog_set_response_enabled (AdwAlertDialog* self /*none*/, const char* response /*none*/, gboolean enabled);
// void adw_alert_dialog_set_response_enabled (::AdwAlertDialog* self /*none*/, const char* response /*none*/, gboolean enabled);
GI_INLINE_DECL void set_response_enabled (const gi::cstring_v response, gboolean enabled) noexcept;

// void adw_alert_dialog_set_response_label (AdwAlertDialog* self /*none*/, const char* response /*none*/, const char* label /*none*/);
// void adw_alert_dialog_set_response_label (::AdwAlertDialog* self /*none*/, const char* response /*none*/, const char* label /*none*/);
GI_INLINE_DECL void set_response_label (const gi::cstring_v response, const gi::cstring_v label) noexcept;

gi::property_proxy<gi::cstring, base::AlertDialogBase> property_body()
{ return gi::property_proxy<gi::cstring, base::AlertDialogBase> (*this, "body"); }
const gi::property_proxy<gi::cstring, base::AlertDialogBase> property_body() const
{ return gi::property_proxy<gi::cstring, base::AlertDialogBase> (*this, "body"); }

gi::property_proxy<bool, base::AlertDialogBase> property_body_use_markup()
{ return gi::property_proxy<bool, base::AlertDialogBase> (*this, "body-use-markup"); }
const gi::property_proxy<bool, base::AlertDialogBase> property_body_use_markup() const
{ return gi::property_proxy<bool, base::AlertDialogBase> (*this, "body-use-markup"); }

gi::property_proxy<gi::cstring, base::AlertDialogBase> property_close_response()
{ return gi::property_proxy<gi::cstring, base::AlertDialogBase> (*this, "close-response"); }
const gi::property_proxy<gi::cstring, base::AlertDialogBase> property_close_response() const
{ return gi::property_proxy<gi::cstring, base::AlertDialogBase> (*this, "close-response"); }

gi::property_proxy<gi::cstring, base::AlertDialogBase> property_default_response()
{ return gi::property_proxy<gi::cstring, base::AlertDialogBase> (*this, "default-response"); }
const gi::property_proxy<gi::cstring, base::AlertDialogBase> property_default_response() const
{ return gi::property_proxy<gi::cstring, base::AlertDialogBase> (*this, "default-response"); }

gi::property_proxy<Gtk::Widget, base::AlertDialogBase> property_extra_child()
{ return gi::property_proxy<Gtk::Widget, base::AlertDialogBase> (*this, "extra-child"); }
const gi::property_proxy<Gtk::Widget, base::AlertDialogBase> property_extra_child() const
{ return gi::property_proxy<Gtk::Widget, base::AlertDialogBase> (*this, "extra-child"); }

gi::property_proxy<gi::cstring, base::AlertDialogBase> property_heading()
{ return gi::property_proxy<gi::cstring, base::AlertDialogBase> (*this, "heading"); }
const gi::property_proxy<gi::cstring, base::AlertDialogBase> property_heading() const
{ return gi::property_proxy<gi::cstring, base::AlertDialogBase> (*this, "heading"); }

gi::property_proxy<bool, base::AlertDialogBase> property_heading_use_markup()
{ return gi::property_proxy<bool, base::AlertDialogBase> (*this, "heading-use-markup"); }
const gi::property_proxy<bool, base::AlertDialogBase> property_heading_use_markup() const
{ return gi::property_proxy<bool, base::AlertDialogBase> (*this, "heading-use-markup"); }

gi::property_proxy<bool, base::AlertDialogBase> property_prefer_wide_layout()
{ return gi::property_proxy<bool, base::AlertDialogBase> (*this, "prefer-wide-layout"); }
const gi::property_proxy<bool, base::AlertDialogBase> property_prefer_wide_layout() const
{ return gi::property_proxy<bool, base::AlertDialogBase> (*this, "prefer-wide-layout"); }

// (signal) void response (gchar* response /*none*/);
// (signal) void response (char* response /*none*/);
gi::signal_proxy<void(Adw::AlertDialog, gi::cstring_v response)> signal_response()
{ return gi::signal_proxy<void(Adw::AlertDialog, gi::cstring_v response)> (*this, "response"); }

}; // class

} // namespace base

} // namespace Adw

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<adw/alertdialog_extra_def.hpp>)
#include <adw/alertdialog_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<adw/alertdialog_extra.hpp>)
#include <adw/alertdialog_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Adw {

class AlertDialog : public GI_ADW_ALERTDIALOG_BASE
{ typedef GI_ADW_ALERTDIALOG_BASE super_type; using super_type::super_type; };

} // namespace Adw

template<> struct declare_cpptype_of<::AdwAlertDialog>
{ typedef Adw::AlertDialog type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Adw {

namespace impl {

namespace internal {


class AlertDialogClassDef
{
typedef AlertDialogClassDef self;
public:
typedef Adw::AlertDialog instance_type;
typedef ::AdwAlertDialogClass class_type;

using GI_MEMBER_CHECK_CONFLICT(response) = self;

struct TypeInitData;

protected:
GI_INLINE_DECL ~AlertDialogClassDef() = default;
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );

// void AlertDialog::response (AdwAlertDialog* self /*none*/, const char* response /*none*/);
// void AlertDialog::response (::AdwAlertDialog* self /*none*/, const char* response /*none*/);
virtual void response_ (const gi::cstring_v response) noexcept = 0;


};

GI_CLASS_IMPL_BEGIN


class AlertDialogClass: public detail::ClassTemplate<Adw::impl::internal::AlertDialogClassDef, Adw::impl::internal::DialogClass>
{
friend class internal::AlertDialogClassDef;
typedef AlertDialogClass self;
typedef detail::ClassTemplate<Adw::impl::internal::AlertDialogClassDef, Adw::impl::internal::DialogClass> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types


// void AlertDialog::response (AdwAlertDialog* self /*none*/, const char* response /*none*/);
// void AlertDialog::response (::AdwAlertDialog* self /*none*/, const char* response /*none*/);
GI_INLINE_DECL void response_ (const gi::cstring_v response) noexcept override;


};


struct AlertDialogClassDef::TypeInitData
{
  GI_MEMBER_DEFINE(AlertDialogClass, response)

template<typename SubClass>
constexpr static TypeInitData factory()
{
  using DefData = detail::DefinitionData<SubClass, TypeInitData>;
  return {
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, response)
  };
}
};
} // namespace internal

GI_CLASS_IMPL_END

using AlertDialogImpl = detail::ObjectImpl<AlertDialog, internal::AlertDialogClass>;

} // namespace impl

} // namespace Adw

} // namespace repository

} // namespace gi

#endif
