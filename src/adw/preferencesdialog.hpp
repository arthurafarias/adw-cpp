// AUTO-GENERATED

#ifndef _GI_ADW_PREFERENCESDIALOG_HPP_
#define _GI_ADW_PREFERENCESDIALOG_HPP_

#include "dialog.hpp"

namespace gi {

namespace repository {

namespace Adw {

class NavigationPage;
class PreferencesPage;
class Toast;

class PreferencesDialog;

namespace base {


#define GI_ADW_PREFERENCESDIALOG_BASE base::PreferencesDialogBase
class PreferencesDialogBase : public Adw::Dialog
{
typedef Adw::Dialog super_type;
public:
typedef ::AdwPreferencesDialog BaseObjectType;

PreferencesDialogBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return adw_preferences_dialog_get_type(); } 

// AdwDialog* /*none*/ adw_preferences_dialog_new ();
// ::AdwPreferencesDialog* /*none*/ adw_preferences_dialog_new ();
static GI_INLINE_DECL Adw::PreferencesDialog new_ () noexcept;

// void adw_preferences_dialog_add (AdwPreferencesDialog* self /*none*/, AdwPreferencesPage* page /*none*/);
// void adw_preferences_dialog_add (::AdwPreferencesDialog* self /*none*/, ::AdwPreferencesPage* page /*none*/);
GI_INLINE_DECL void add (Adw::PreferencesPage page) noexcept;

// void adw_preferences_dialog_add_toast (AdwPreferencesDialog* self /*none*/, AdwToast* toast /*full*/);
// void adw_preferences_dialog_add_toast (::AdwPreferencesDialog* self /*none*/, ::AdwToast* toast /*full*/);
GI_INLINE_DECL void add_toast (Adw::Toast toast) noexcept;

// gboolean adw_preferences_dialog_get_search_enabled (AdwPreferencesDialog* self /*none*/);
// gboolean adw_preferences_dialog_get_search_enabled (::AdwPreferencesDialog* self /*none*/);
GI_INLINE_DECL bool get_search_enabled () noexcept;

// AdwPreferencesPage* /*none,nullable*/ adw_preferences_dialog_get_visible_page (AdwPreferencesDialog* self /*none*/);
// ::AdwPreferencesPage* /*none,nullable*/ adw_preferences_dialog_get_visible_page (::AdwPreferencesDialog* self /*none*/);
GI_INLINE_DECL Adw::PreferencesPage get_visible_page () noexcept;

// const char* /*none,nullable*/ adw_preferences_dialog_get_visible_page_name (AdwPreferencesDialog* self /*none*/);
// const char* /*none,nullable*/ adw_preferences_dialog_get_visible_page_name (::AdwPreferencesDialog* self /*none*/);
GI_INLINE_DECL gi::cstring_v get_visible_page_name () noexcept;

// gboolean adw_preferences_dialog_pop_subpage (AdwPreferencesDialog* self /*none*/);
// gboolean adw_preferences_dialog_pop_subpage (::AdwPreferencesDialog* self /*none*/);
GI_INLINE_DECL bool pop_subpage () noexcept;

// void adw_preferences_dialog_push_subpage (AdwPreferencesDialog* self /*none*/, AdwNavigationPage* page /*none*/);
// void adw_preferences_dialog_push_subpage (::AdwPreferencesDialog* self /*none*/, ::AdwNavigationPage* page /*none*/);
GI_INLINE_DECL void push_subpage (Adw::NavigationPage page) noexcept;

// void adw_preferences_dialog_remove (AdwPreferencesDialog* self /*none*/, AdwPreferencesPage* page /*none*/);
// void adw_preferences_dialog_remove (::AdwPreferencesDialog* self /*none*/, ::AdwPreferencesPage* page /*none*/);
GI_INLINE_DECL void remove (Adw::PreferencesPage page) noexcept;

// void adw_preferences_dialog_set_search_enabled (AdwPreferencesDialog* self /*none*/, gboolean search_enabled);
// void adw_preferences_dialog_set_search_enabled (::AdwPreferencesDialog* self /*none*/, gboolean search_enabled);
GI_INLINE_DECL void set_search_enabled (gboolean search_enabled) noexcept;

// void adw_preferences_dialog_set_visible_page (AdwPreferencesDialog* self /*none*/, AdwPreferencesPage* page /*none*/);
// void adw_preferences_dialog_set_visible_page (::AdwPreferencesDialog* self /*none*/, ::AdwPreferencesPage* page /*none*/);
GI_INLINE_DECL void set_visible_page (Adw::PreferencesPage page) noexcept;

// void adw_preferences_dialog_set_visible_page_name (AdwPreferencesDialog* self /*none*/, const char* name /*none*/);
// void adw_preferences_dialog_set_visible_page_name (::AdwPreferencesDialog* self /*none*/, const char* name /*none*/);
GI_INLINE_DECL void set_visible_page_name (const gi::cstring_v name) noexcept;

gi::property_proxy<bool, base::PreferencesDialogBase> property_search_enabled()
{ return gi::property_proxy<bool, base::PreferencesDialogBase> (*this, "search-enabled"); }
const gi::property_proxy<bool, base::PreferencesDialogBase> property_search_enabled() const
{ return gi::property_proxy<bool, base::PreferencesDialogBase> (*this, "search-enabled"); }

gi::property_proxy<Gtk::Widget, base::PreferencesDialogBase> property_visible_page()
{ return gi::property_proxy<Gtk::Widget, base::PreferencesDialogBase> (*this, "visible-page"); }
const gi::property_proxy<Gtk::Widget, base::PreferencesDialogBase> property_visible_page() const
{ return gi::property_proxy<Gtk::Widget, base::PreferencesDialogBase> (*this, "visible-page"); }

gi::property_proxy<gi::cstring, base::PreferencesDialogBase> property_visible_page_name()
{ return gi::property_proxy<gi::cstring, base::PreferencesDialogBase> (*this, "visible-page-name"); }
const gi::property_proxy<gi::cstring, base::PreferencesDialogBase> property_visible_page_name() const
{ return gi::property_proxy<gi::cstring, base::PreferencesDialogBase> (*this, "visible-page-name"); }

}; // class

} // namespace base

} // namespace Adw

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<adw/preferencesdialog_extra_def.hpp>)
#include <adw/preferencesdialog_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<adw/preferencesdialog_extra.hpp>)
#include <adw/preferencesdialog_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Adw {

class PreferencesDialog : public GI_ADW_PREFERENCESDIALOG_BASE
{ typedef GI_ADW_PREFERENCESDIALOG_BASE super_type; using super_type::super_type; };

} // namespace Adw

template<> struct declare_cpptype_of<::AdwPreferencesDialog>
{ typedef Adw::PreferencesDialog type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Adw {

namespace impl {

namespace internal {


class PreferencesDialogClassDef
{
typedef PreferencesDialogClassDef self;
public:
typedef Adw::PreferencesDialog instance_type;
typedef ::AdwPreferencesDialogClass class_type;


struct TypeInitData;

protected:
GI_INLINE_DECL ~PreferencesDialogClassDef() = default;
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );


};

GI_CLASS_IMPL_BEGIN


class PreferencesDialogClass: public detail::ClassTemplate<Adw::impl::internal::PreferencesDialogClassDef, Adw::impl::internal::DialogClass>
{
friend class internal::PreferencesDialogClassDef;
typedef PreferencesDialogClass self;
typedef detail::ClassTemplate<Adw::impl::internal::PreferencesDialogClassDef, Adw::impl::internal::DialogClass> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types



};


struct PreferencesDialogClassDef::TypeInitData
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

using PreferencesDialogImpl = detail::ObjectImpl<PreferencesDialog, internal::PreferencesDialogClass>;

} // namespace impl

} // namespace Adw

} // namespace repository

} // namespace gi

#endif
