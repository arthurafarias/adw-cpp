// AUTO-GENERATED

#ifndef _GI_ADW_ABOUTDIALOG_IMPL_HPP_
#define _GI_ADW_ABOUTDIALOG_IMPL_HPP_

namespace gi {

namespace repository {

namespace Adw {

namespace base {

// AdwDialog* /*none*/ adw_about_dialog_new ();
// ::AdwAboutDialog* /*none*/ adw_about_dialog_new ();
Adw::AboutDialog base::AboutDialogBase::new_ () noexcept
{
  typedef ::AdwAboutDialog* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) adw_about_dialog_new;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// AdwDialog* /*none*/ adw_about_dialog_new_from_appdata (const char* resource_path /*none*/, const char* release_notes_version /*none,nullable*/);
// ::AdwAboutDialog* /*none*/ adw_about_dialog_new_from_appdata (const char* resource_path /*none*/, const char* release_notes_version /*none,nullable*/);
Adw::AboutDialog base::AboutDialogBase::new_from_appdata (const gi::cstring_v resource_path, const gi::cstring_v release_notes_version) noexcept
{
  typedef ::AdwAboutDialog* (*call_wrap_t) (const char* resource_path, const char* release_notes_version);
  call_wrap_t call_wrap_v = (call_wrap_t) adw_about_dialog_new_from_appdata;
  auto release_notes_version_to_c = gi::unwrap (release_notes_version, gi::transfer_none);
  auto resource_path_to_c = gi::unwrap (resource_path, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const char*) (resource_path_to_c), (const char*) (release_notes_version_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none);
}
Adw::AboutDialog base::AboutDialogBase::new_from_appdata (const gi::cstring_v resource_path) noexcept
{
  typedef ::AdwAboutDialog* (*call_wrap_t) (const char* resource_path, const char* release_notes_version);
  call_wrap_t call_wrap_v = (call_wrap_t) adw_about_dialog_new_from_appdata;
  auto release_notes_version_to_c = nullptr;
  auto resource_path_to_c = gi::unwrap (resource_path, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const char*) (resource_path_to_c), (const char*) (release_notes_version_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// void adw_about_dialog_add_acknowledgement_section (AdwAboutDialog* self /*none*/, const char* name /*none,nullable*/, const char** people /*none*/);
// void adw_about_dialog_add_acknowledgement_section (::AdwAboutDialog* self /*none*/, const char* name /*none,nullable*/, const char** people /*none*/);
void base::AboutDialogBase::add_acknowledgement_section (const gi::cstring_v name, gi::CollectionParameter<gi::ZTSpan, char*, gi::transfer_none_t> people) noexcept
{
  typedef void (*call_wrap_t) (::AdwAboutDialog* self, const char* name, const char** people);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_about_dialog_add_acknowledgement_section;
  auto people_w = unwrap (std::move(people), gi::transfer_none);
  auto people_to_c = people_w;
  auto name_to_c = gi::unwrap (name, gi::transfer_none);
  call_wrap_v ((::AdwAboutDialog*) (gobj_()), (const char*) (name_to_c), (const char**) (people_to_c));
}
void base::AboutDialogBase::add_acknowledgement_section (gi::CollectionParameter<gi::ZTSpan, char*, gi::transfer_none_t> people) noexcept
{
  typedef void (*call_wrap_t) (::AdwAboutDialog* self, const char* name, const char** people);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_about_dialog_add_acknowledgement_section;
  auto people_w = unwrap (std::move(people), gi::transfer_none);
  auto people_to_c = people_w;
  auto name_to_c = nullptr;
  call_wrap_v ((::AdwAboutDialog*) (gobj_()), (const char*) (name_to_c), (const char**) (people_to_c));
}

// void adw_about_dialog_add_credit_section (AdwAboutDialog* self /*none*/, const char* name /*none,nullable*/, const char** people /*none*/);
// void adw_about_dialog_add_credit_section (::AdwAboutDialog* self /*none*/, const char* name /*none,nullable*/, const char** people /*none*/);
void base::AboutDialogBase::add_credit_section (const gi::cstring_v name, gi::CollectionParameter<gi::ZTSpan, char*, gi::transfer_none_t> people) noexcept
{
  typedef void (*call_wrap_t) (::AdwAboutDialog* self, const char* name, const char** people);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_about_dialog_add_credit_section;
  auto people_w = unwrap (std::move(people), gi::transfer_none);
  auto people_to_c = people_w;
  auto name_to_c = gi::unwrap (name, gi::transfer_none);
  call_wrap_v ((::AdwAboutDialog*) (gobj_()), (const char*) (name_to_c), (const char**) (people_to_c));
}
void base::AboutDialogBase::add_credit_section (gi::CollectionParameter<gi::ZTSpan, char*, gi::transfer_none_t> people) noexcept
{
  typedef void (*call_wrap_t) (::AdwAboutDialog* self, const char* name, const char** people);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_about_dialog_add_credit_section;
  auto people_w = unwrap (std::move(people), gi::transfer_none);
  auto people_to_c = people_w;
  auto name_to_c = nullptr;
  call_wrap_v ((::AdwAboutDialog*) (gobj_()), (const char*) (name_to_c), (const char**) (people_to_c));
}

// void adw_about_dialog_add_legal_section (AdwAboutDialog* self /*none*/, const char* title /*none*/, const char* copyright /*none,nullable*/, GtkLicense license_type, const char* license /*none,nullable*/);
// void adw_about_dialog_add_legal_section (::AdwAboutDialog* self /*none*/, const char* title /*none*/, const char* copyright /*none,nullable*/, ::GtkLicense license_type, const char* license /*none,nullable*/);
void base::AboutDialogBase::add_legal_section (const gi::cstring_v title, const gi::cstring_v copyright, Gtk::License license_type, const gi::cstring_v license) noexcept
{
  typedef void (*call_wrap_t) (::AdwAboutDialog* self, const char* title, const char* copyright, ::GtkLicense license_type, const char* license);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_about_dialog_add_legal_section;
  auto license_to_c = gi::unwrap (license, gi::transfer_none);
  auto license_type_to_c = gi::unwrap (license_type);
  auto copyright_to_c = gi::unwrap (copyright, gi::transfer_none);
  auto title_to_c = gi::unwrap (title, gi::transfer_none);
  call_wrap_v ((::AdwAboutDialog*) (gobj_()), (const char*) (title_to_c), (const char*) (copyright_to_c), (::GtkLicense) (license_type_to_c), (const char*) (license_to_c));
}
void base::AboutDialogBase::add_legal_section (const gi::cstring_v title, Gtk::License license_type) noexcept
{
  typedef void (*call_wrap_t) (::AdwAboutDialog* self, const char* title, const char* copyright, ::GtkLicense license_type, const char* license);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_about_dialog_add_legal_section;
  auto license_to_c = nullptr;
  auto license_type_to_c = gi::unwrap (license_type);
  auto copyright_to_c = nullptr;
  auto title_to_c = gi::unwrap (title, gi::transfer_none);
  call_wrap_v ((::AdwAboutDialog*) (gobj_()), (const char*) (title_to_c), (const char*) (copyright_to_c), (::GtkLicense) (license_type_to_c), (const char*) (license_to_c));
}

// void adw_about_dialog_add_link (AdwAboutDialog* self /*none*/, const char* title /*none*/, const char* url /*none*/);
// void adw_about_dialog_add_link (::AdwAboutDialog* self /*none*/, const char* title /*none*/, const char* url /*none*/);
void base::AboutDialogBase::add_link (const gi::cstring_v title, const gi::cstring_v url) noexcept
{
  typedef void (*call_wrap_t) (::AdwAboutDialog* self, const char* title, const char* url);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_about_dialog_add_link;
  auto url_to_c = gi::unwrap (url, gi::transfer_none);
  auto title_to_c = gi::unwrap (title, gi::transfer_none);
  call_wrap_v ((::AdwAboutDialog*) (gobj_()), (const char*) (title_to_c), (const char*) (url_to_c));
}

// void adw_about_dialog_add_other_app (AdwAboutDialog* self /*none*/, const char* appid /*none*/, const char* name /*none*/, const char* summary /*none*/);
// void adw_about_dialog_add_other_app (::AdwAboutDialog* self /*none*/, const char* appid /*none*/, const char* name /*none*/, const char* summary /*none*/);
void base::AboutDialogBase::add_other_app (const gi::cstring_v appid, const gi::cstring_v name, const gi::cstring_v summary) noexcept
{
  typedef void (*call_wrap_t) (::AdwAboutDialog* self, const char* appid, const char* name, const char* summary);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_about_dialog_add_other_app;
  auto summary_to_c = gi::unwrap (summary, gi::transfer_none);
  auto name_to_c = gi::unwrap (name, gi::transfer_none);
  auto appid_to_c = gi::unwrap (appid, gi::transfer_none);
  call_wrap_v ((::AdwAboutDialog*) (gobj_()), (const char*) (appid_to_c), (const char*) (name_to_c), (const char*) (summary_to_c));
}

// const char* /*none,nullable*/ adw_about_dialog_get_appdata_resource_path (AdwAboutDialog* self /*none*/);
// const char* /*none,nullable*/ adw_about_dialog_get_appdata_resource_path (::AdwAboutDialog* self /*none*/);
gi::cstring_v base::AboutDialogBase::get_appdata_resource_path () noexcept
{
  typedef const char* (*call_wrap_t) (::AdwAboutDialog* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_about_dialog_get_appdata_resource_path;
  auto _temp_ret = call_wrap_v ((::AdwAboutDialog*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// const char* /*none*/ adw_about_dialog_get_application_icon (AdwAboutDialog* self /*none*/);
// const char* /*none*/ adw_about_dialog_get_application_icon (::AdwAboutDialog* self /*none*/);
gi::cstring_v base::AboutDialogBase::get_application_icon () noexcept
{
  typedef const char* (*call_wrap_t) (::AdwAboutDialog* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_about_dialog_get_application_icon;
  auto _temp_ret = call_wrap_v ((::AdwAboutDialog*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// const char* /*none*/ adw_about_dialog_get_application_name (AdwAboutDialog* self /*none*/);
// const char* /*none*/ adw_about_dialog_get_application_name (::AdwAboutDialog* self /*none*/);
gi::cstring_v base::AboutDialogBase::get_application_name () noexcept
{
  typedef const char* (*call_wrap_t) (::AdwAboutDialog* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_about_dialog_get_application_name;
  auto _temp_ret = call_wrap_v ((::AdwAboutDialog*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// const char* const* /*none,nullable*/ adw_about_dialog_get_artists (AdwAboutDialog* self /*none*/);
// const char** /*none,nullable*/ adw_about_dialog_get_artists (::AdwAboutDialog* self /*none*/);
gi::Collection<gi::ZTSpan, char*, gi::transfer_none_t> base::AboutDialogBase::get_artists () noexcept
{
  typedef const char** (*call_wrap_t) (::AdwAboutDialog* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_about_dialog_get_artists;
  auto _temp_ret = call_wrap_v ((::AdwAboutDialog*) (gobj_()));
  return gi::wrap_to<gi::Collection<gi::ZTSpan, char*, gi::transfer_none_t>>(_temp_ret, gi::transfer_none);
}

// const char* /*none*/ adw_about_dialog_get_comments (AdwAboutDialog* self /*none*/);
// const char* /*none*/ adw_about_dialog_get_comments (::AdwAboutDialog* self /*none*/);
gi::cstring_v base::AboutDialogBase::get_comments () noexcept
{
  typedef const char* (*call_wrap_t) (::AdwAboutDialog* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_about_dialog_get_comments;
  auto _temp_ret = call_wrap_v ((::AdwAboutDialog*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// const char* /*none*/ adw_about_dialog_get_copyright (AdwAboutDialog* self /*none*/);
// const char* /*none*/ adw_about_dialog_get_copyright (::AdwAboutDialog* self /*none*/);
gi::cstring_v base::AboutDialogBase::get_copyright () noexcept
{
  typedef const char* (*call_wrap_t) (::AdwAboutDialog* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_about_dialog_get_copyright;
  auto _temp_ret = call_wrap_v ((::AdwAboutDialog*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// const char* /*none*/ adw_about_dialog_get_debug_info (AdwAboutDialog* self /*none*/);
// const char* /*none*/ adw_about_dialog_get_debug_info (::AdwAboutDialog* self /*none*/);
gi::cstring_v base::AboutDialogBase::get_debug_info () noexcept
{
  typedef const char* (*call_wrap_t) (::AdwAboutDialog* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_about_dialog_get_debug_info;
  auto _temp_ret = call_wrap_v ((::AdwAboutDialog*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// const char* /*none*/ adw_about_dialog_get_debug_info_filename (AdwAboutDialog* self /*none*/);
// const char* /*none*/ adw_about_dialog_get_debug_info_filename (::AdwAboutDialog* self /*none*/);
gi::cstring_v base::AboutDialogBase::get_debug_info_filename () noexcept
{
  typedef const char* (*call_wrap_t) (::AdwAboutDialog* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_about_dialog_get_debug_info_filename;
  auto _temp_ret = call_wrap_v ((::AdwAboutDialog*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// const char* const* /*none,nullable*/ adw_about_dialog_get_designers (AdwAboutDialog* self /*none*/);
// const char** /*none,nullable*/ adw_about_dialog_get_designers (::AdwAboutDialog* self /*none*/);
gi::Collection<gi::ZTSpan, char*, gi::transfer_none_t> base::AboutDialogBase::get_designers () noexcept
{
  typedef const char** (*call_wrap_t) (::AdwAboutDialog* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_about_dialog_get_designers;
  auto _temp_ret = call_wrap_v ((::AdwAboutDialog*) (gobj_()));
  return gi::wrap_to<gi::Collection<gi::ZTSpan, char*, gi::transfer_none_t>>(_temp_ret, gi::transfer_none);
}

// const char* /*none*/ adw_about_dialog_get_developer_name (AdwAboutDialog* self /*none*/);
// const char* /*none*/ adw_about_dialog_get_developer_name (::AdwAboutDialog* self /*none*/);
gi::cstring_v base::AboutDialogBase::get_developer_name () noexcept
{
  typedef const char* (*call_wrap_t) (::AdwAboutDialog* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_about_dialog_get_developer_name;
  auto _temp_ret = call_wrap_v ((::AdwAboutDialog*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// const char* const* /*none,nullable*/ adw_about_dialog_get_developers (AdwAboutDialog* self /*none*/);
// const char** /*none,nullable*/ adw_about_dialog_get_developers (::AdwAboutDialog* self /*none*/);
gi::Collection<gi::ZTSpan, char*, gi::transfer_none_t> base::AboutDialogBase::get_developers () noexcept
{
  typedef const char** (*call_wrap_t) (::AdwAboutDialog* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_about_dialog_get_developers;
  auto _temp_ret = call_wrap_v ((::AdwAboutDialog*) (gobj_()));
  return gi::wrap_to<gi::Collection<gi::ZTSpan, char*, gi::transfer_none_t>>(_temp_ret, gi::transfer_none);
}

// const char* const* /*none,nullable*/ adw_about_dialog_get_documenters (AdwAboutDialog* self /*none*/);
// const char** /*none,nullable*/ adw_about_dialog_get_documenters (::AdwAboutDialog* self /*none*/);
gi::Collection<gi::ZTSpan, char*, gi::transfer_none_t> base::AboutDialogBase::get_documenters () noexcept
{
  typedef const char** (*call_wrap_t) (::AdwAboutDialog* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_about_dialog_get_documenters;
  auto _temp_ret = call_wrap_v ((::AdwAboutDialog*) (gobj_()));
  return gi::wrap_to<gi::Collection<gi::ZTSpan, char*, gi::transfer_none_t>>(_temp_ret, gi::transfer_none);
}

// const char* /*none*/ adw_about_dialog_get_issue_url (AdwAboutDialog* self /*none*/);
// const char* /*none*/ adw_about_dialog_get_issue_url (::AdwAboutDialog* self /*none*/);
gi::cstring_v base::AboutDialogBase::get_issue_url () noexcept
{
  typedef const char* (*call_wrap_t) (::AdwAboutDialog* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_about_dialog_get_issue_url;
  auto _temp_ret = call_wrap_v ((::AdwAboutDialog*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// const char* /*none*/ adw_about_dialog_get_license (AdwAboutDialog* self /*none*/);
// const char* /*none*/ adw_about_dialog_get_license (::AdwAboutDialog* self /*none*/);
gi::cstring_v base::AboutDialogBase::get_license () noexcept
{
  typedef const char* (*call_wrap_t) (::AdwAboutDialog* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_about_dialog_get_license;
  auto _temp_ret = call_wrap_v ((::AdwAboutDialog*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// GtkLicense adw_about_dialog_get_license_type (AdwAboutDialog* self /*none*/);
// ::GtkLicense adw_about_dialog_get_license_type (::AdwAboutDialog* self /*none*/);
Gtk::License base::AboutDialogBase::get_license_type () noexcept
{
  typedef ::GtkLicense (*call_wrap_t) (::AdwAboutDialog* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_about_dialog_get_license_type;
  auto _temp_ret = call_wrap_v ((::AdwAboutDialog*) (gobj_()));
  return gi::wrap (_temp_ret);
}

// const char* /*none*/ adw_about_dialog_get_release_notes (AdwAboutDialog* self /*none*/);
// const char* /*none*/ adw_about_dialog_get_release_notes (::AdwAboutDialog* self /*none*/);
gi::cstring_v base::AboutDialogBase::get_release_notes () noexcept
{
  typedef const char* (*call_wrap_t) (::AdwAboutDialog* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_about_dialog_get_release_notes;
  auto _temp_ret = call_wrap_v ((::AdwAboutDialog*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// const char* /*none*/ adw_about_dialog_get_release_notes_version (AdwAboutDialog* self /*none*/);
// const char* /*none*/ adw_about_dialog_get_release_notes_version (::AdwAboutDialog* self /*none*/);
gi::cstring_v base::AboutDialogBase::get_release_notes_version () noexcept
{
  typedef const char* (*call_wrap_t) (::AdwAboutDialog* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_about_dialog_get_release_notes_version;
  auto _temp_ret = call_wrap_v ((::AdwAboutDialog*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// const char* /*none*/ adw_about_dialog_get_support_url (AdwAboutDialog* self /*none*/);
// const char* /*none*/ adw_about_dialog_get_support_url (::AdwAboutDialog* self /*none*/);
gi::cstring_v base::AboutDialogBase::get_support_url () noexcept
{
  typedef const char* (*call_wrap_t) (::AdwAboutDialog* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_about_dialog_get_support_url;
  auto _temp_ret = call_wrap_v ((::AdwAboutDialog*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// const char* /*none*/ adw_about_dialog_get_translator_credits (AdwAboutDialog* self /*none*/);
// const char* /*none*/ adw_about_dialog_get_translator_credits (::AdwAboutDialog* self /*none*/);
gi::cstring_v base::AboutDialogBase::get_translator_credits () noexcept
{
  typedef const char* (*call_wrap_t) (::AdwAboutDialog* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_about_dialog_get_translator_credits;
  auto _temp_ret = call_wrap_v ((::AdwAboutDialog*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// const char* /*none*/ adw_about_dialog_get_version (AdwAboutDialog* self /*none*/);
// const char* /*none*/ adw_about_dialog_get_version (::AdwAboutDialog* self /*none*/);
gi::cstring_v base::AboutDialogBase::get_version () noexcept
{
  typedef const char* (*call_wrap_t) (::AdwAboutDialog* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_about_dialog_get_version;
  auto _temp_ret = call_wrap_v ((::AdwAboutDialog*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// const char* /*none*/ adw_about_dialog_get_website (AdwAboutDialog* self /*none*/);
// const char* /*none*/ adw_about_dialog_get_website (::AdwAboutDialog* self /*none*/);
gi::cstring_v base::AboutDialogBase::get_website () noexcept
{
  typedef const char* (*call_wrap_t) (::AdwAboutDialog* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_about_dialog_get_website;
  auto _temp_ret = call_wrap_v ((::AdwAboutDialog*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// void adw_about_dialog_set_application_icon (AdwAboutDialog* self /*none*/, const char* application_icon /*none*/);
// void adw_about_dialog_set_application_icon (::AdwAboutDialog* self /*none*/, const char* application_icon /*none*/);
void base::AboutDialogBase::set_application_icon (const gi::cstring_v application_icon) noexcept
{
  typedef void (*call_wrap_t) (::AdwAboutDialog* self, const char* application_icon);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_about_dialog_set_application_icon;
  auto application_icon_to_c = gi::unwrap (application_icon, gi::transfer_none);
  call_wrap_v ((::AdwAboutDialog*) (gobj_()), (const char*) (application_icon_to_c));
}

// void adw_about_dialog_set_application_name (AdwAboutDialog* self /*none*/, const char* application_name /*none*/);
// void adw_about_dialog_set_application_name (::AdwAboutDialog* self /*none*/, const char* application_name /*none*/);
void base::AboutDialogBase::set_application_name (const gi::cstring_v application_name) noexcept
{
  typedef void (*call_wrap_t) (::AdwAboutDialog* self, const char* application_name);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_about_dialog_set_application_name;
  auto application_name_to_c = gi::unwrap (application_name, gi::transfer_none);
  call_wrap_v ((::AdwAboutDialog*) (gobj_()), (const char*) (application_name_to_c));
}

// void adw_about_dialog_set_artists (AdwAboutDialog* self /*none*/, const char** artists /*none,nullable*/);
// void adw_about_dialog_set_artists (::AdwAboutDialog* self /*none*/, const char** artists /*none,nullable*/);
void base::AboutDialogBase::set_artists (gi::CollectionParameter<gi::ZTSpan, char*, gi::transfer_none_t> artists) noexcept
{
  typedef void (*call_wrap_t) (::AdwAboutDialog* self, const char** artists);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_about_dialog_set_artists;
  auto artists_w = unwrap (std::move(artists), gi::transfer_none);
  auto artists_to_c = artists_w;
  call_wrap_v ((::AdwAboutDialog*) (gobj_()), (const char**) (artists_to_c));
}

// void adw_about_dialog_set_comments (AdwAboutDialog* self /*none*/, const char* comments /*none*/);
// void adw_about_dialog_set_comments (::AdwAboutDialog* self /*none*/, const char* comments /*none*/);
void base::AboutDialogBase::set_comments (const gi::cstring_v comments) noexcept
{
  typedef void (*call_wrap_t) (::AdwAboutDialog* self, const char* comments);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_about_dialog_set_comments;
  auto comments_to_c = gi::unwrap (comments, gi::transfer_none);
  call_wrap_v ((::AdwAboutDialog*) (gobj_()), (const char*) (comments_to_c));
}

// void adw_about_dialog_set_copyright (AdwAboutDialog* self /*none*/, const char* copyright /*none*/);
// void adw_about_dialog_set_copyright (::AdwAboutDialog* self /*none*/, const char* copyright /*none*/);
void base::AboutDialogBase::set_copyright (const gi::cstring_v copyright) noexcept
{
  typedef void (*call_wrap_t) (::AdwAboutDialog* self, const char* copyright);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_about_dialog_set_copyright;
  auto copyright_to_c = gi::unwrap (copyright, gi::transfer_none);
  call_wrap_v ((::AdwAboutDialog*) (gobj_()), (const char*) (copyright_to_c));
}

// void adw_about_dialog_set_debug_info (AdwAboutDialog* self /*none*/, const char* debug_info /*none*/);
// void adw_about_dialog_set_debug_info (::AdwAboutDialog* self /*none*/, const char* debug_info /*none*/);
void base::AboutDialogBase::set_debug_info (const gi::cstring_v debug_info) noexcept
{
  typedef void (*call_wrap_t) (::AdwAboutDialog* self, const char* debug_info);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_about_dialog_set_debug_info;
  auto debug_info_to_c = gi::unwrap (debug_info, gi::transfer_none);
  call_wrap_v ((::AdwAboutDialog*) (gobj_()), (const char*) (debug_info_to_c));
}

// void adw_about_dialog_set_debug_info_filename (AdwAboutDialog* self /*none*/, const char* filename /*none*/);
// void adw_about_dialog_set_debug_info_filename (::AdwAboutDialog* self /*none*/, const char* filename /*none*/);
void base::AboutDialogBase::set_debug_info_filename (const gi::cstring_v filename) noexcept
{
  typedef void (*call_wrap_t) (::AdwAboutDialog* self, const char* filename);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_about_dialog_set_debug_info_filename;
  auto filename_to_c = gi::unwrap (filename, gi::transfer_none);
  call_wrap_v ((::AdwAboutDialog*) (gobj_()), (const char*) (filename_to_c));
}

// void adw_about_dialog_set_designers (AdwAboutDialog* self /*none*/, const char** designers /*none,nullable*/);
// void adw_about_dialog_set_designers (::AdwAboutDialog* self /*none*/, const char** designers /*none,nullable*/);
void base::AboutDialogBase::set_designers (gi::CollectionParameter<gi::ZTSpan, char*, gi::transfer_none_t> designers) noexcept
{
  typedef void (*call_wrap_t) (::AdwAboutDialog* self, const char** designers);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_about_dialog_set_designers;
  auto designers_w = unwrap (std::move(designers), gi::transfer_none);
  auto designers_to_c = designers_w;
  call_wrap_v ((::AdwAboutDialog*) (gobj_()), (const char**) (designers_to_c));
}

// void adw_about_dialog_set_developer_name (AdwAboutDialog* self /*none*/, const char* developer_name /*none*/);
// void adw_about_dialog_set_developer_name (::AdwAboutDialog* self /*none*/, const char* developer_name /*none*/);
void base::AboutDialogBase::set_developer_name (const gi::cstring_v developer_name) noexcept
{
  typedef void (*call_wrap_t) (::AdwAboutDialog* self, const char* developer_name);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_about_dialog_set_developer_name;
  auto developer_name_to_c = gi::unwrap (developer_name, gi::transfer_none);
  call_wrap_v ((::AdwAboutDialog*) (gobj_()), (const char*) (developer_name_to_c));
}

// void adw_about_dialog_set_developers (AdwAboutDialog* self /*none*/, const char** developers /*none,nullable*/);
// void adw_about_dialog_set_developers (::AdwAboutDialog* self /*none*/, const char** developers /*none,nullable*/);
void base::AboutDialogBase::set_developers (gi::CollectionParameter<gi::ZTSpan, char*, gi::transfer_none_t> developers) noexcept
{
  typedef void (*call_wrap_t) (::AdwAboutDialog* self, const char** developers);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_about_dialog_set_developers;
  auto developers_w = unwrap (std::move(developers), gi::transfer_none);
  auto developers_to_c = developers_w;
  call_wrap_v ((::AdwAboutDialog*) (gobj_()), (const char**) (developers_to_c));
}

// void adw_about_dialog_set_documenters (AdwAboutDialog* self /*none*/, const char** documenters /*none,nullable*/);
// void adw_about_dialog_set_documenters (::AdwAboutDialog* self /*none*/, const char** documenters /*none,nullable*/);
void base::AboutDialogBase::set_documenters (gi::CollectionParameter<gi::ZTSpan, char*, gi::transfer_none_t> documenters) noexcept
{
  typedef void (*call_wrap_t) (::AdwAboutDialog* self, const char** documenters);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_about_dialog_set_documenters;
  auto documenters_w = unwrap (std::move(documenters), gi::transfer_none);
  auto documenters_to_c = documenters_w;
  call_wrap_v ((::AdwAboutDialog*) (gobj_()), (const char**) (documenters_to_c));
}

// void adw_about_dialog_set_issue_url (AdwAboutDialog* self /*none*/, const char* issue_url /*none*/);
// void adw_about_dialog_set_issue_url (::AdwAboutDialog* self /*none*/, const char* issue_url /*none*/);
void base::AboutDialogBase::set_issue_url (const gi::cstring_v issue_url) noexcept
{
  typedef void (*call_wrap_t) (::AdwAboutDialog* self, const char* issue_url);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_about_dialog_set_issue_url;
  auto issue_url_to_c = gi::unwrap (issue_url, gi::transfer_none);
  call_wrap_v ((::AdwAboutDialog*) (gobj_()), (const char*) (issue_url_to_c));
}

// void adw_about_dialog_set_license (AdwAboutDialog* self /*none*/, const char* license /*none*/);
// void adw_about_dialog_set_license (::AdwAboutDialog* self /*none*/, const char* license /*none*/);
void base::AboutDialogBase::set_license (const gi::cstring_v license) noexcept
{
  typedef void (*call_wrap_t) (::AdwAboutDialog* self, const char* license);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_about_dialog_set_license;
  auto license_to_c = gi::unwrap (license, gi::transfer_none);
  call_wrap_v ((::AdwAboutDialog*) (gobj_()), (const char*) (license_to_c));
}

// void adw_about_dialog_set_license_type (AdwAboutDialog* self /*none*/, GtkLicense license_type);
// void adw_about_dialog_set_license_type (::AdwAboutDialog* self /*none*/, ::GtkLicense license_type);
void base::AboutDialogBase::set_license_type (Gtk::License license_type) noexcept
{
  typedef void (*call_wrap_t) (::AdwAboutDialog* self, ::GtkLicense license_type);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_about_dialog_set_license_type;
  auto license_type_to_c = gi::unwrap (license_type);
  call_wrap_v ((::AdwAboutDialog*) (gobj_()), (::GtkLicense) (license_type_to_c));
}

// void adw_about_dialog_set_release_notes (AdwAboutDialog* self /*none*/, const char* release_notes /*none*/);
// void adw_about_dialog_set_release_notes (::AdwAboutDialog* self /*none*/, const char* release_notes /*none*/);
void base::AboutDialogBase::set_release_notes (const gi::cstring_v release_notes) noexcept
{
  typedef void (*call_wrap_t) (::AdwAboutDialog* self, const char* release_notes);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_about_dialog_set_release_notes;
  auto release_notes_to_c = gi::unwrap (release_notes, gi::transfer_none);
  call_wrap_v ((::AdwAboutDialog*) (gobj_()), (const char*) (release_notes_to_c));
}

// void adw_about_dialog_set_release_notes_version (AdwAboutDialog* self /*none*/, const char* version /*none*/);
// void adw_about_dialog_set_release_notes_version (::AdwAboutDialog* self /*none*/, const char* version /*none*/);
void base::AboutDialogBase::set_release_notes_version (const gi::cstring_v version) noexcept
{
  typedef void (*call_wrap_t) (::AdwAboutDialog* self, const char* version);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_about_dialog_set_release_notes_version;
  auto version_to_c = gi::unwrap (version, gi::transfer_none);
  call_wrap_v ((::AdwAboutDialog*) (gobj_()), (const char*) (version_to_c));
}

// void adw_about_dialog_set_support_url (AdwAboutDialog* self /*none*/, const char* support_url /*none*/);
// void adw_about_dialog_set_support_url (::AdwAboutDialog* self /*none*/, const char* support_url /*none*/);
void base::AboutDialogBase::set_support_url (const gi::cstring_v support_url) noexcept
{
  typedef void (*call_wrap_t) (::AdwAboutDialog* self, const char* support_url);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_about_dialog_set_support_url;
  auto support_url_to_c = gi::unwrap (support_url, gi::transfer_none);
  call_wrap_v ((::AdwAboutDialog*) (gobj_()), (const char*) (support_url_to_c));
}

// void adw_about_dialog_set_translator_credits (AdwAboutDialog* self /*none*/, const char* translator_credits /*none*/);
// void adw_about_dialog_set_translator_credits (::AdwAboutDialog* self /*none*/, const char* translator_credits /*none*/);
void base::AboutDialogBase::set_translator_credits (const gi::cstring_v translator_credits) noexcept
{
  typedef void (*call_wrap_t) (::AdwAboutDialog* self, const char* translator_credits);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_about_dialog_set_translator_credits;
  auto translator_credits_to_c = gi::unwrap (translator_credits, gi::transfer_none);
  call_wrap_v ((::AdwAboutDialog*) (gobj_()), (const char*) (translator_credits_to_c));
}

// void adw_about_dialog_set_version (AdwAboutDialog* self /*none*/, const char* version /*none*/);
// void adw_about_dialog_set_version (::AdwAboutDialog* self /*none*/, const char* version /*none*/);
void base::AboutDialogBase::set_version (const gi::cstring_v version) noexcept
{
  typedef void (*call_wrap_t) (::AdwAboutDialog* self, const char* version);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_about_dialog_set_version;
  auto version_to_c = gi::unwrap (version, gi::transfer_none);
  call_wrap_v ((::AdwAboutDialog*) (gobj_()), (const char*) (version_to_c));
}

// void adw_about_dialog_set_website (AdwAboutDialog* self /*none*/, const char* website /*none*/);
// void adw_about_dialog_set_website (::AdwAboutDialog* self /*none*/, const char* website /*none*/);
void base::AboutDialogBase::set_website (const gi::cstring_v website) noexcept
{
  typedef void (*call_wrap_t) (::AdwAboutDialog* self, const char* website);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_about_dialog_set_website;
  auto website_to_c = gi::unwrap (website, gi::transfer_none);
  call_wrap_v ((::AdwAboutDialog*) (gobj_()), (const char*) (website_to_c));
}



} // namespace base

} // namespace Adw

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<adw/aboutdialog_extra_def_impl.hpp>)
#include <adw/aboutdialog_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<adw/aboutdialog_extra_impl.hpp>)
#include <adw/aboutdialog_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Adw {

namespace impl {

namespace internal {

void AboutDialogClassDef::class_init (gpointer class_struct, gpointer factory)
{
  ::AdwAboutDialogClass *methods = (::AdwAboutDialogClass *) class_struct;
  (void) methods;

  auto init_data = GI_MEMBER_INIT_DATA(TypeInitData, factory);
  (void) init_data;

}

} // namespace internal

} // namespace impl

} // namespace Adw

} // namespace repository

} // namespace gi

#endif
