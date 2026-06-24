// AUTO-GENERATED

#ifndef _GI_ADW_ABOUTDIALOG_HPP_
#define _GI_ADW_ABOUTDIALOG_HPP_

#include "dialog.hpp"

namespace gi {

namespace repository {

namespace Adw {


class AboutDialog;

namespace base {


#define GI_ADW_ABOUTDIALOG_BASE base::AboutDialogBase
class AboutDialogBase : public Adw::Dialog
{
typedef Adw::Dialog super_type;
public:
typedef ::AdwAboutDialog BaseObjectType;

AboutDialogBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return adw_about_dialog_get_type(); } 

// AdwDialog* /*none*/ adw_about_dialog_new ();
// ::AdwAboutDialog* /*none*/ adw_about_dialog_new ();
static GI_INLINE_DECL Adw::AboutDialog new_ () noexcept;

// AdwDialog* /*none*/ adw_about_dialog_new_from_appdata (const char* resource_path /*none*/, const char* release_notes_version /*none,nullable*/);
// ::AdwAboutDialog* /*none*/ adw_about_dialog_new_from_appdata (const char* resource_path /*none*/, const char* release_notes_version /*none,nullable*/);
static GI_INLINE_DECL Adw::AboutDialog new_from_appdata (const gi::cstring_v resource_path, const gi::cstring_v release_notes_version) noexcept;
static GI_INLINE_DECL Adw::AboutDialog new_from_appdata (const gi::cstring_v resource_path) noexcept;

// void adw_about_dialog_add_acknowledgement_section (AdwAboutDialog* self /*none*/, const char* name /*none,nullable*/, const char** people /*none*/);
// void adw_about_dialog_add_acknowledgement_section (::AdwAboutDialog* self /*none*/, const char* name /*none,nullable*/, const char** people /*none*/);
GI_INLINE_DECL void add_acknowledgement_section (const gi::cstring_v name, gi::CollectionParameter<gi::ZTSpan, char*, gi::transfer_none_t> people) noexcept;
GI_INLINE_DECL void add_acknowledgement_section (gi::CollectionParameter<gi::ZTSpan, char*, gi::transfer_none_t> people) noexcept;

// void adw_about_dialog_add_credit_section (AdwAboutDialog* self /*none*/, const char* name /*none,nullable*/, const char** people /*none*/);
// void adw_about_dialog_add_credit_section (::AdwAboutDialog* self /*none*/, const char* name /*none,nullable*/, const char** people /*none*/);
GI_INLINE_DECL void add_credit_section (const gi::cstring_v name, gi::CollectionParameter<gi::ZTSpan, char*, gi::transfer_none_t> people) noexcept;
GI_INLINE_DECL void add_credit_section (gi::CollectionParameter<gi::ZTSpan, char*, gi::transfer_none_t> people) noexcept;

// void adw_about_dialog_add_legal_section (AdwAboutDialog* self /*none*/, const char* title /*none*/, const char* copyright /*none,nullable*/, GtkLicense license_type, const char* license /*none,nullable*/);
// void adw_about_dialog_add_legal_section (::AdwAboutDialog* self /*none*/, const char* title /*none*/, const char* copyright /*none,nullable*/, ::GtkLicense license_type, const char* license /*none,nullable*/);
GI_INLINE_DECL void add_legal_section (const gi::cstring_v title, const gi::cstring_v copyright, Gtk::License license_type, const gi::cstring_v license) noexcept;
GI_INLINE_DECL void add_legal_section (const gi::cstring_v title, Gtk::License license_type) noexcept;

// void adw_about_dialog_add_link (AdwAboutDialog* self /*none*/, const char* title /*none*/, const char* url /*none*/);
// void adw_about_dialog_add_link (::AdwAboutDialog* self /*none*/, const char* title /*none*/, const char* url /*none*/);
GI_INLINE_DECL void add_link (const gi::cstring_v title, const gi::cstring_v url) noexcept;

// void adw_about_dialog_add_other_app (AdwAboutDialog* self /*none*/, const char* appid /*none*/, const char* name /*none*/, const char* summary /*none*/);
// void adw_about_dialog_add_other_app (::AdwAboutDialog* self /*none*/, const char* appid /*none*/, const char* name /*none*/, const char* summary /*none*/);
GI_INLINE_DECL void add_other_app (const gi::cstring_v appid, const gi::cstring_v name, const gi::cstring_v summary) noexcept;

// const char* /*none,nullable*/ adw_about_dialog_get_appdata_resource_path (AdwAboutDialog* self /*none*/);
// const char* /*none,nullable*/ adw_about_dialog_get_appdata_resource_path (::AdwAboutDialog* self /*none*/);
GI_INLINE_DECL gi::cstring_v get_appdata_resource_path () noexcept;

// const char* /*none*/ adw_about_dialog_get_application_icon (AdwAboutDialog* self /*none*/);
// const char* /*none*/ adw_about_dialog_get_application_icon (::AdwAboutDialog* self /*none*/);
GI_INLINE_DECL gi::cstring_v get_application_icon () noexcept;

// const char* /*none*/ adw_about_dialog_get_application_name (AdwAboutDialog* self /*none*/);
// const char* /*none*/ adw_about_dialog_get_application_name (::AdwAboutDialog* self /*none*/);
GI_INLINE_DECL gi::cstring_v get_application_name () noexcept;

// const char* const* /*none,nullable*/ adw_about_dialog_get_artists (AdwAboutDialog* self /*none*/);
// const char** /*none,nullable*/ adw_about_dialog_get_artists (::AdwAboutDialog* self /*none*/);
GI_INLINE_DECL gi::Collection<gi::ZTSpan, char*, gi::transfer_none_t> get_artists () noexcept;

// const char* /*none*/ adw_about_dialog_get_comments (AdwAboutDialog* self /*none*/);
// const char* /*none*/ adw_about_dialog_get_comments (::AdwAboutDialog* self /*none*/);
GI_INLINE_DECL gi::cstring_v get_comments () noexcept;

// const char* /*none*/ adw_about_dialog_get_copyright (AdwAboutDialog* self /*none*/);
// const char* /*none*/ adw_about_dialog_get_copyright (::AdwAboutDialog* self /*none*/);
GI_INLINE_DECL gi::cstring_v get_copyright () noexcept;

// const char* /*none*/ adw_about_dialog_get_debug_info (AdwAboutDialog* self /*none*/);
// const char* /*none*/ adw_about_dialog_get_debug_info (::AdwAboutDialog* self /*none*/);
GI_INLINE_DECL gi::cstring_v get_debug_info () noexcept;

// const char* /*none*/ adw_about_dialog_get_debug_info_filename (AdwAboutDialog* self /*none*/);
// const char* /*none*/ adw_about_dialog_get_debug_info_filename (::AdwAboutDialog* self /*none*/);
GI_INLINE_DECL gi::cstring_v get_debug_info_filename () noexcept;

// const char* const* /*none,nullable*/ adw_about_dialog_get_designers (AdwAboutDialog* self /*none*/);
// const char** /*none,nullable*/ adw_about_dialog_get_designers (::AdwAboutDialog* self /*none*/);
GI_INLINE_DECL gi::Collection<gi::ZTSpan, char*, gi::transfer_none_t> get_designers () noexcept;

// const char* /*none*/ adw_about_dialog_get_developer_name (AdwAboutDialog* self /*none*/);
// const char* /*none*/ adw_about_dialog_get_developer_name (::AdwAboutDialog* self /*none*/);
GI_INLINE_DECL gi::cstring_v get_developer_name () noexcept;

// const char* const* /*none,nullable*/ adw_about_dialog_get_developers (AdwAboutDialog* self /*none*/);
// const char** /*none,nullable*/ adw_about_dialog_get_developers (::AdwAboutDialog* self /*none*/);
GI_INLINE_DECL gi::Collection<gi::ZTSpan, char*, gi::transfer_none_t> get_developers () noexcept;

// const char* const* /*none,nullable*/ adw_about_dialog_get_documenters (AdwAboutDialog* self /*none*/);
// const char** /*none,nullable*/ adw_about_dialog_get_documenters (::AdwAboutDialog* self /*none*/);
GI_INLINE_DECL gi::Collection<gi::ZTSpan, char*, gi::transfer_none_t> get_documenters () noexcept;

// const char* /*none*/ adw_about_dialog_get_issue_url (AdwAboutDialog* self /*none*/);
// const char* /*none*/ adw_about_dialog_get_issue_url (::AdwAboutDialog* self /*none*/);
GI_INLINE_DECL gi::cstring_v get_issue_url () noexcept;

// const char* /*none*/ adw_about_dialog_get_license (AdwAboutDialog* self /*none*/);
// const char* /*none*/ adw_about_dialog_get_license (::AdwAboutDialog* self /*none*/);
GI_INLINE_DECL gi::cstring_v get_license () noexcept;

// GtkLicense adw_about_dialog_get_license_type (AdwAboutDialog* self /*none*/);
// ::GtkLicense adw_about_dialog_get_license_type (::AdwAboutDialog* self /*none*/);
GI_INLINE_DECL Gtk::License get_license_type () noexcept;

// const char* /*none*/ adw_about_dialog_get_release_notes (AdwAboutDialog* self /*none*/);
// const char* /*none*/ adw_about_dialog_get_release_notes (::AdwAboutDialog* self /*none*/);
GI_INLINE_DECL gi::cstring_v get_release_notes () noexcept;

// const char* /*none*/ adw_about_dialog_get_release_notes_version (AdwAboutDialog* self /*none*/);
// const char* /*none*/ adw_about_dialog_get_release_notes_version (::AdwAboutDialog* self /*none*/);
GI_INLINE_DECL gi::cstring_v get_release_notes_version () noexcept;

// const char* /*none*/ adw_about_dialog_get_support_url (AdwAboutDialog* self /*none*/);
// const char* /*none*/ adw_about_dialog_get_support_url (::AdwAboutDialog* self /*none*/);
GI_INLINE_DECL gi::cstring_v get_support_url () noexcept;

// const char* /*none*/ adw_about_dialog_get_translator_credits (AdwAboutDialog* self /*none*/);
// const char* /*none*/ adw_about_dialog_get_translator_credits (::AdwAboutDialog* self /*none*/);
GI_INLINE_DECL gi::cstring_v get_translator_credits () noexcept;

// const char* /*none*/ adw_about_dialog_get_version (AdwAboutDialog* self /*none*/);
// const char* /*none*/ adw_about_dialog_get_version (::AdwAboutDialog* self /*none*/);
GI_INLINE_DECL gi::cstring_v get_version () noexcept;

// const char* /*none*/ adw_about_dialog_get_website (AdwAboutDialog* self /*none*/);
// const char* /*none*/ adw_about_dialog_get_website (::AdwAboutDialog* self /*none*/);
GI_INLINE_DECL gi::cstring_v get_website () noexcept;

// void adw_about_dialog_set_application_icon (AdwAboutDialog* self /*none*/, const char* application_icon /*none*/);
// void adw_about_dialog_set_application_icon (::AdwAboutDialog* self /*none*/, const char* application_icon /*none*/);
GI_INLINE_DECL void set_application_icon (const gi::cstring_v application_icon) noexcept;

// void adw_about_dialog_set_application_name (AdwAboutDialog* self /*none*/, const char* application_name /*none*/);
// void adw_about_dialog_set_application_name (::AdwAboutDialog* self /*none*/, const char* application_name /*none*/);
GI_INLINE_DECL void set_application_name (const gi::cstring_v application_name) noexcept;

// void adw_about_dialog_set_artists (AdwAboutDialog* self /*none*/, const char** artists /*none,nullable*/);
// void adw_about_dialog_set_artists (::AdwAboutDialog* self /*none*/, const char** artists /*none,nullable*/);
GI_INLINE_DECL void set_artists (gi::CollectionParameter<gi::ZTSpan, char*, gi::transfer_none_t> artists) noexcept;

// void adw_about_dialog_set_comments (AdwAboutDialog* self /*none*/, const char* comments /*none*/);
// void adw_about_dialog_set_comments (::AdwAboutDialog* self /*none*/, const char* comments /*none*/);
GI_INLINE_DECL void set_comments (const gi::cstring_v comments) noexcept;

// void adw_about_dialog_set_copyright (AdwAboutDialog* self /*none*/, const char* copyright /*none*/);
// void adw_about_dialog_set_copyright (::AdwAboutDialog* self /*none*/, const char* copyright /*none*/);
GI_INLINE_DECL void set_copyright (const gi::cstring_v copyright) noexcept;

// void adw_about_dialog_set_debug_info (AdwAboutDialog* self /*none*/, const char* debug_info /*none*/);
// void adw_about_dialog_set_debug_info (::AdwAboutDialog* self /*none*/, const char* debug_info /*none*/);
GI_INLINE_DECL void set_debug_info (const gi::cstring_v debug_info) noexcept;

// void adw_about_dialog_set_debug_info_filename (AdwAboutDialog* self /*none*/, const char* filename /*none*/);
// void adw_about_dialog_set_debug_info_filename (::AdwAboutDialog* self /*none*/, const char* filename /*none*/);
GI_INLINE_DECL void set_debug_info_filename (const gi::cstring_v filename) noexcept;

// void adw_about_dialog_set_designers (AdwAboutDialog* self /*none*/, const char** designers /*none,nullable*/);
// void adw_about_dialog_set_designers (::AdwAboutDialog* self /*none*/, const char** designers /*none,nullable*/);
GI_INLINE_DECL void set_designers (gi::CollectionParameter<gi::ZTSpan, char*, gi::transfer_none_t> designers) noexcept;

// void adw_about_dialog_set_developer_name (AdwAboutDialog* self /*none*/, const char* developer_name /*none*/);
// void adw_about_dialog_set_developer_name (::AdwAboutDialog* self /*none*/, const char* developer_name /*none*/);
GI_INLINE_DECL void set_developer_name (const gi::cstring_v developer_name) noexcept;

// void adw_about_dialog_set_developers (AdwAboutDialog* self /*none*/, const char** developers /*none,nullable*/);
// void adw_about_dialog_set_developers (::AdwAboutDialog* self /*none*/, const char** developers /*none,nullable*/);
GI_INLINE_DECL void set_developers (gi::CollectionParameter<gi::ZTSpan, char*, gi::transfer_none_t> developers) noexcept;

// void adw_about_dialog_set_documenters (AdwAboutDialog* self /*none*/, const char** documenters /*none,nullable*/);
// void adw_about_dialog_set_documenters (::AdwAboutDialog* self /*none*/, const char** documenters /*none,nullable*/);
GI_INLINE_DECL void set_documenters (gi::CollectionParameter<gi::ZTSpan, char*, gi::transfer_none_t> documenters) noexcept;

// void adw_about_dialog_set_issue_url (AdwAboutDialog* self /*none*/, const char* issue_url /*none*/);
// void adw_about_dialog_set_issue_url (::AdwAboutDialog* self /*none*/, const char* issue_url /*none*/);
GI_INLINE_DECL void set_issue_url (const gi::cstring_v issue_url) noexcept;

// void adw_about_dialog_set_license (AdwAboutDialog* self /*none*/, const char* license /*none*/);
// void adw_about_dialog_set_license (::AdwAboutDialog* self /*none*/, const char* license /*none*/);
GI_INLINE_DECL void set_license (const gi::cstring_v license) noexcept;

// void adw_about_dialog_set_license_type (AdwAboutDialog* self /*none*/, GtkLicense license_type);
// void adw_about_dialog_set_license_type (::AdwAboutDialog* self /*none*/, ::GtkLicense license_type);
GI_INLINE_DECL void set_license_type (Gtk::License license_type) noexcept;

// void adw_about_dialog_set_release_notes (AdwAboutDialog* self /*none*/, const char* release_notes /*none*/);
// void adw_about_dialog_set_release_notes (::AdwAboutDialog* self /*none*/, const char* release_notes /*none*/);
GI_INLINE_DECL void set_release_notes (const gi::cstring_v release_notes) noexcept;

// void adw_about_dialog_set_release_notes_version (AdwAboutDialog* self /*none*/, const char* version /*none*/);
// void adw_about_dialog_set_release_notes_version (::AdwAboutDialog* self /*none*/, const char* version /*none*/);
GI_INLINE_DECL void set_release_notes_version (const gi::cstring_v version) noexcept;

// void adw_about_dialog_set_support_url (AdwAboutDialog* self /*none*/, const char* support_url /*none*/);
// void adw_about_dialog_set_support_url (::AdwAboutDialog* self /*none*/, const char* support_url /*none*/);
GI_INLINE_DECL void set_support_url (const gi::cstring_v support_url) noexcept;

// void adw_about_dialog_set_translator_credits (AdwAboutDialog* self /*none*/, const char* translator_credits /*none*/);
// void adw_about_dialog_set_translator_credits (::AdwAboutDialog* self /*none*/, const char* translator_credits /*none*/);
GI_INLINE_DECL void set_translator_credits (const gi::cstring_v translator_credits) noexcept;

// void adw_about_dialog_set_version (AdwAboutDialog* self /*none*/, const char* version /*none*/);
// void adw_about_dialog_set_version (::AdwAboutDialog* self /*none*/, const char* version /*none*/);
GI_INLINE_DECL void set_version (const gi::cstring_v version) noexcept;

// void adw_about_dialog_set_website (AdwAboutDialog* self /*none*/, const char* website /*none*/);
// void adw_about_dialog_set_website (::AdwAboutDialog* self /*none*/, const char* website /*none*/);
GI_INLINE_DECL void set_website (const gi::cstring_v website) noexcept;

gi::property_proxy<gi::cstring, base::AboutDialogBase> property_appdata_resource_path()
{ return gi::property_proxy<gi::cstring, base::AboutDialogBase> (*this, "appdata-resource-path"); }
const gi::property_proxy<gi::cstring, base::AboutDialogBase> property_appdata_resource_path() const
{ return gi::property_proxy<gi::cstring, base::AboutDialogBase> (*this, "appdata-resource-path"); }

gi::property_proxy<gi::cstring, base::AboutDialogBase> property_application_icon()
{ return gi::property_proxy<gi::cstring, base::AboutDialogBase> (*this, "application-icon"); }
const gi::property_proxy<gi::cstring, base::AboutDialogBase> property_application_icon() const
{ return gi::property_proxy<gi::cstring, base::AboutDialogBase> (*this, "application-icon"); }

gi::property_proxy<gi::cstring, base::AboutDialogBase> property_application_name()
{ return gi::property_proxy<gi::cstring, base::AboutDialogBase> (*this, "application-name"); }
const gi::property_proxy<gi::cstring, base::AboutDialogBase> property_application_name() const
{ return gi::property_proxy<gi::cstring, base::AboutDialogBase> (*this, "application-name"); }

gi::property_proxy<gi::cstring, base::AboutDialogBase> property_comments()
{ return gi::property_proxy<gi::cstring, base::AboutDialogBase> (*this, "comments"); }
const gi::property_proxy<gi::cstring, base::AboutDialogBase> property_comments() const
{ return gi::property_proxy<gi::cstring, base::AboutDialogBase> (*this, "comments"); }

gi::property_proxy<gi::cstring, base::AboutDialogBase> property_copyright()
{ return gi::property_proxy<gi::cstring, base::AboutDialogBase> (*this, "copyright"); }
const gi::property_proxy<gi::cstring, base::AboutDialogBase> property_copyright() const
{ return gi::property_proxy<gi::cstring, base::AboutDialogBase> (*this, "copyright"); }

gi::property_proxy<gi::cstring, base::AboutDialogBase> property_debug_info()
{ return gi::property_proxy<gi::cstring, base::AboutDialogBase> (*this, "debug-info"); }
const gi::property_proxy<gi::cstring, base::AboutDialogBase> property_debug_info() const
{ return gi::property_proxy<gi::cstring, base::AboutDialogBase> (*this, "debug-info"); }

gi::property_proxy<gi::cstring, base::AboutDialogBase> property_debug_info_filename()
{ return gi::property_proxy<gi::cstring, base::AboutDialogBase> (*this, "debug-info-filename"); }
const gi::property_proxy<gi::cstring, base::AboutDialogBase> property_debug_info_filename() const
{ return gi::property_proxy<gi::cstring, base::AboutDialogBase> (*this, "debug-info-filename"); }

gi::property_proxy<gi::cstring, base::AboutDialogBase> property_developer_name()
{ return gi::property_proxy<gi::cstring, base::AboutDialogBase> (*this, "developer-name"); }
const gi::property_proxy<gi::cstring, base::AboutDialogBase> property_developer_name() const
{ return gi::property_proxy<gi::cstring, base::AboutDialogBase> (*this, "developer-name"); }

gi::property_proxy<gi::cstring, base::AboutDialogBase> property_issue_url()
{ return gi::property_proxy<gi::cstring, base::AboutDialogBase> (*this, "issue-url"); }
const gi::property_proxy<gi::cstring, base::AboutDialogBase> property_issue_url() const
{ return gi::property_proxy<gi::cstring, base::AboutDialogBase> (*this, "issue-url"); }

gi::property_proxy<gi::cstring, base::AboutDialogBase> property_license()
{ return gi::property_proxy<gi::cstring, base::AboutDialogBase> (*this, "license"); }
const gi::property_proxy<gi::cstring, base::AboutDialogBase> property_license() const
{ return gi::property_proxy<gi::cstring, base::AboutDialogBase> (*this, "license"); }

gi::property_proxy<Gtk::License, base::AboutDialogBase> property_license_type()
{ return gi::property_proxy<Gtk::License, base::AboutDialogBase> (*this, "license-type"); }
const gi::property_proxy<Gtk::License, base::AboutDialogBase> property_license_type() const
{ return gi::property_proxy<Gtk::License, base::AboutDialogBase> (*this, "license-type"); }

gi::property_proxy<gi::cstring, base::AboutDialogBase> property_release_notes()
{ return gi::property_proxy<gi::cstring, base::AboutDialogBase> (*this, "release-notes"); }
const gi::property_proxy<gi::cstring, base::AboutDialogBase> property_release_notes() const
{ return gi::property_proxy<gi::cstring, base::AboutDialogBase> (*this, "release-notes"); }

gi::property_proxy<gi::cstring, base::AboutDialogBase> property_release_notes_version()
{ return gi::property_proxy<gi::cstring, base::AboutDialogBase> (*this, "release-notes-version"); }
const gi::property_proxy<gi::cstring, base::AboutDialogBase> property_release_notes_version() const
{ return gi::property_proxy<gi::cstring, base::AboutDialogBase> (*this, "release-notes-version"); }

gi::property_proxy<gi::cstring, base::AboutDialogBase> property_support_url()
{ return gi::property_proxy<gi::cstring, base::AboutDialogBase> (*this, "support-url"); }
const gi::property_proxy<gi::cstring, base::AboutDialogBase> property_support_url() const
{ return gi::property_proxy<gi::cstring, base::AboutDialogBase> (*this, "support-url"); }

gi::property_proxy<gi::cstring, base::AboutDialogBase> property_translator_credits()
{ return gi::property_proxy<gi::cstring, base::AboutDialogBase> (*this, "translator-credits"); }
const gi::property_proxy<gi::cstring, base::AboutDialogBase> property_translator_credits() const
{ return gi::property_proxy<gi::cstring, base::AboutDialogBase> (*this, "translator-credits"); }

gi::property_proxy<gi::cstring, base::AboutDialogBase> property_version()
{ return gi::property_proxy<gi::cstring, base::AboutDialogBase> (*this, "version"); }
const gi::property_proxy<gi::cstring, base::AboutDialogBase> property_version() const
{ return gi::property_proxy<gi::cstring, base::AboutDialogBase> (*this, "version"); }

gi::property_proxy<gi::cstring, base::AboutDialogBase> property_website()
{ return gi::property_proxy<gi::cstring, base::AboutDialogBase> (*this, "website"); }
const gi::property_proxy<gi::cstring, base::AboutDialogBase> property_website() const
{ return gi::property_proxy<gi::cstring, base::AboutDialogBase> (*this, "website"); }

// (signal) gboolean activate-link (gchar* uri /*none*/);
// (signal) gboolean activate-link (char* uri /*none*/);
gi::signal_proxy<bool(Adw::AboutDialog, gi::cstring_v uri)> signal_activate_link()
{ return gi::signal_proxy<bool(Adw::AboutDialog, gi::cstring_v uri)> (*this, "activate-link"); }

}; // class

} // namespace base

} // namespace Adw

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<adw/aboutdialog_extra_def.hpp>)
#include <adw/aboutdialog_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<adw/aboutdialog_extra.hpp>)
#include <adw/aboutdialog_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Adw {

class AboutDialog : public GI_ADW_ABOUTDIALOG_BASE
{ typedef GI_ADW_ABOUTDIALOG_BASE super_type; using super_type::super_type; };

} // namespace Adw

template<> struct declare_cpptype_of<::AdwAboutDialog>
{ typedef Adw::AboutDialog type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Adw {

namespace impl {

namespace internal {


class AboutDialogClassDef
{
typedef AboutDialogClassDef self;
public:
typedef Adw::AboutDialog instance_type;
typedef ::AdwAboutDialogClass class_type;


struct TypeInitData;

protected:
GI_INLINE_DECL ~AboutDialogClassDef() = default;
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );


};

GI_CLASS_IMPL_BEGIN


class AboutDialogClass: public detail::ClassTemplate<Adw::impl::internal::AboutDialogClassDef, Adw::impl::internal::DialogClass>
{
friend class internal::AboutDialogClassDef;
typedef AboutDialogClass self;
typedef detail::ClassTemplate<Adw::impl::internal::AboutDialogClassDef, Adw::impl::internal::DialogClass> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types



};


struct AboutDialogClassDef::TypeInitData
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

using AboutDialogImpl = detail::ObjectImpl<AboutDialog, internal::AboutDialogClass>;

} // namespace impl

} // namespace Adw

} // namespace repository

} // namespace gi

#endif
