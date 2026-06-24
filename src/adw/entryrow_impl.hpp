// AUTO-GENERATED

#ifndef _GI_ADW_ENTRYROW_IMPL_HPP_
#define _GI_ADW_ENTRYROW_IMPL_HPP_

namespace gi {

namespace repository {

namespace Adw {

namespace base {

Gtk::Editable EntryRowBase::interface_ (gi::interface_tag<Gtk::Editable>)
{ return gi::wrap ((Gtk::Editable::BaseObjectType*) gobj_copy_(), gi::transfer_full); }

EntryRowBase::operator Gtk::Editable ()
{ return interface_ (gi::interface_tag<Gtk::Editable>()); }

// GtkWidget* /*none*/ adw_entry_row_new ();
// ::AdwEntryRow* /*none*/ adw_entry_row_new ();
Adw::EntryRow base::EntryRowBase::new_ () noexcept
{
  typedef ::AdwEntryRow* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) adw_entry_row_new;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// void adw_entry_row_add_prefix (AdwEntryRow* self /*none*/, GtkWidget* widget /*none*/);
// void adw_entry_row_add_prefix (::AdwEntryRow* self /*none*/, ::GtkWidget* widget /*none*/);
void base::EntryRowBase::add_prefix (Gtk::Widget widget) noexcept
{
  typedef void (*call_wrap_t) (::AdwEntryRow* self, ::GtkWidget* widget);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_entry_row_add_prefix;
  auto widget_to_c = gi::unwrap (widget, gi::transfer_none);
  call_wrap_v ((::AdwEntryRow*) (gobj_()), (::GtkWidget*) (widget_to_c));
}

// void adw_entry_row_add_suffix (AdwEntryRow* self /*none*/, GtkWidget* widget /*none*/);
// void adw_entry_row_add_suffix (::AdwEntryRow* self /*none*/, ::GtkWidget* widget /*none*/);
void base::EntryRowBase::add_suffix (Gtk::Widget widget) noexcept
{
  typedef void (*call_wrap_t) (::AdwEntryRow* self, ::GtkWidget* widget);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_entry_row_add_suffix;
  auto widget_to_c = gi::unwrap (widget, gi::transfer_none);
  call_wrap_v ((::AdwEntryRow*) (gobj_()), (::GtkWidget*) (widget_to_c));
}

// gboolean adw_entry_row_get_activates_default (AdwEntryRow* self /*none*/);
// gboolean adw_entry_row_get_activates_default (::AdwEntryRow* self /*none*/);
bool base::EntryRowBase::get_activates_default () noexcept
{
  typedef gboolean (*call_wrap_t) (::AdwEntryRow* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_entry_row_get_activates_default;
  auto _temp_ret = call_wrap_v ((::AdwEntryRow*) (gobj_()));
  return _temp_ret;
}

// PangoAttrList* /*full,nullable*/ adw_entry_row_get_attributes (AdwEntryRow* self /*none*/);
// ::PangoAttrList* /*full,nullable*/ adw_entry_row_get_attributes (::AdwEntryRow* self /*none*/);
Pango::AttrList base::EntryRowBase::get_attributes () noexcept
{
  typedef ::PangoAttrList* (*call_wrap_t) (::AdwEntryRow* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_entry_row_get_attributes;
  auto _temp_ret = call_wrap_v ((::AdwEntryRow*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// gboolean adw_entry_row_get_enable_emoji_completion (AdwEntryRow* self /*none*/);
// gboolean adw_entry_row_get_enable_emoji_completion (::AdwEntryRow* self /*none*/);
bool base::EntryRowBase::get_enable_emoji_completion () noexcept
{
  typedef gboolean (*call_wrap_t) (::AdwEntryRow* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_entry_row_get_enable_emoji_completion;
  auto _temp_ret = call_wrap_v ((::AdwEntryRow*) (gobj_()));
  return _temp_ret;
}

// GtkInputHints adw_entry_row_get_input_hints (AdwEntryRow* self /*none*/);
// ::GtkInputHints adw_entry_row_get_input_hints (::AdwEntryRow* self /*none*/);
Gtk::InputHints base::EntryRowBase::get_input_hints () noexcept
{
  typedef ::GtkInputHints (*call_wrap_t) (::AdwEntryRow* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_entry_row_get_input_hints;
  auto _temp_ret = call_wrap_v ((::AdwEntryRow*) (gobj_()));
  return gi::wrap (_temp_ret);
}

// GtkInputPurpose adw_entry_row_get_input_purpose (AdwEntryRow* self /*none*/);
// ::GtkInputPurpose adw_entry_row_get_input_purpose (::AdwEntryRow* self /*none*/);
Gtk::InputPurpose base::EntryRowBase::get_input_purpose () noexcept
{
  typedef ::GtkInputPurpose (*call_wrap_t) (::AdwEntryRow* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_entry_row_get_input_purpose;
  auto _temp_ret = call_wrap_v ((::AdwEntryRow*) (gobj_()));
  return gi::wrap (_temp_ret);
}

// int adw_entry_row_get_max_length (AdwEntryRow* self /*none*/);
// gint adw_entry_row_get_max_length (::AdwEntryRow* self /*none*/);
gint base::EntryRowBase::get_max_length () noexcept
{
  typedef gint (*call_wrap_t) (::AdwEntryRow* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_entry_row_get_max_length;
  auto _temp_ret = call_wrap_v ((::AdwEntryRow*) (gobj_()));
  return _temp_ret;
}

// gboolean adw_entry_row_get_show_apply_button (AdwEntryRow* self /*none*/);
// gboolean adw_entry_row_get_show_apply_button (::AdwEntryRow* self /*none*/);
bool base::EntryRowBase::get_show_apply_button () noexcept
{
  typedef gboolean (*call_wrap_t) (::AdwEntryRow* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_entry_row_get_show_apply_button;
  auto _temp_ret = call_wrap_v ((::AdwEntryRow*) (gobj_()));
  return _temp_ret;
}

// guint adw_entry_row_get_text_length (AdwEntryRow* self /*none*/);
// guint adw_entry_row_get_text_length (::AdwEntryRow* self /*none*/);
guint base::EntryRowBase::get_text_length () noexcept
{
  typedef guint (*call_wrap_t) (::AdwEntryRow* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_entry_row_get_text_length;
  auto _temp_ret = call_wrap_v ((::AdwEntryRow*) (gobj_()));
  return _temp_ret;
}

// gboolean adw_entry_row_grab_focus_without_selecting (AdwEntryRow* self /*none*/);
// gboolean adw_entry_row_grab_focus_without_selecting (::AdwEntryRow* self /*none*/);
bool base::EntryRowBase::grab_focus_without_selecting () noexcept
{
  typedef gboolean (*call_wrap_t) (::AdwEntryRow* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_entry_row_grab_focus_without_selecting;
  auto _temp_ret = call_wrap_v ((::AdwEntryRow*) (gobj_()));
  return _temp_ret;
}

// void adw_entry_row_remove (AdwEntryRow* self /*none*/, GtkWidget* widget /*none*/);
// void adw_entry_row_remove (::AdwEntryRow* self /*none*/, ::GtkWidget* widget /*none*/);
void base::EntryRowBase::remove (Gtk::Widget widget) noexcept
{
  typedef void (*call_wrap_t) (::AdwEntryRow* self, ::GtkWidget* widget);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_entry_row_remove;
  auto widget_to_c = gi::unwrap (widget, gi::transfer_none);
  call_wrap_v ((::AdwEntryRow*) (gobj_()), (::GtkWidget*) (widget_to_c));
}

// void adw_entry_row_set_activates_default (AdwEntryRow* self /*none*/, gboolean activates);
// void adw_entry_row_set_activates_default (::AdwEntryRow* self /*none*/, gboolean activates);
void base::EntryRowBase::set_activates_default (gboolean activates) noexcept
{
  typedef void (*call_wrap_t) (::AdwEntryRow* self, gboolean activates);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_entry_row_set_activates_default;
  auto activates_to_c = activates;
  call_wrap_v ((::AdwEntryRow*) (gobj_()), (gboolean) (activates_to_c));
}

// void adw_entry_row_set_attributes (AdwEntryRow* self /*none*/, PangoAttrList* attributes /*none,nullable*/);
// void adw_entry_row_set_attributes (::AdwEntryRow* self /*none*/, ::PangoAttrList* attributes /*none,nullable*/);
void base::EntryRowBase::set_attributes (Pango::AttrList_Ref attributes) noexcept
{
  typedef void (*call_wrap_t) (::AdwEntryRow* self, ::PangoAttrList* attributes);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_entry_row_set_attributes;
  auto attributes_to_c = gi::unwrap (attributes, gi::transfer_none);
  call_wrap_v ((::AdwEntryRow*) (gobj_()), (::PangoAttrList*) (attributes_to_c));
}
void base::EntryRowBase::set_attributes () noexcept
{
  typedef void (*call_wrap_t) (::AdwEntryRow* self, ::PangoAttrList* attributes);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_entry_row_set_attributes;
  auto attributes_to_c = nullptr;
  call_wrap_v ((::AdwEntryRow*) (gobj_()), (::PangoAttrList*) (attributes_to_c));
}

// void adw_entry_row_set_enable_emoji_completion (AdwEntryRow* self /*none*/, gboolean enable_emoji_completion);
// void adw_entry_row_set_enable_emoji_completion (::AdwEntryRow* self /*none*/, gboolean enable_emoji_completion);
void base::EntryRowBase::set_enable_emoji_completion (gboolean enable_emoji_completion) noexcept
{
  typedef void (*call_wrap_t) (::AdwEntryRow* self, gboolean enable_emoji_completion);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_entry_row_set_enable_emoji_completion;
  auto enable_emoji_completion_to_c = enable_emoji_completion;
  call_wrap_v ((::AdwEntryRow*) (gobj_()), (gboolean) (enable_emoji_completion_to_c));
}

// void adw_entry_row_set_input_hints (AdwEntryRow* self /*none*/, GtkInputHints hints);
// void adw_entry_row_set_input_hints (::AdwEntryRow* self /*none*/, ::GtkInputHints hints);
void base::EntryRowBase::set_input_hints (Gtk::InputHints hints) noexcept
{
  typedef void (*call_wrap_t) (::AdwEntryRow* self, ::GtkInputHints hints);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_entry_row_set_input_hints;
  auto hints_to_c = gi::unwrap (hints);
  call_wrap_v ((::AdwEntryRow*) (gobj_()), (::GtkInputHints) (hints_to_c));
}

// void adw_entry_row_set_input_purpose (AdwEntryRow* self /*none*/, GtkInputPurpose purpose);
// void adw_entry_row_set_input_purpose (::AdwEntryRow* self /*none*/, ::GtkInputPurpose purpose);
void base::EntryRowBase::set_input_purpose (Gtk::InputPurpose purpose) noexcept
{
  typedef void (*call_wrap_t) (::AdwEntryRow* self, ::GtkInputPurpose purpose);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_entry_row_set_input_purpose;
  auto purpose_to_c = gi::unwrap (purpose);
  call_wrap_v ((::AdwEntryRow*) (gobj_()), (::GtkInputPurpose) (purpose_to_c));
}

// void adw_entry_row_set_max_length (AdwEntryRow* self /*none*/, int max_length);
// void adw_entry_row_set_max_length (::AdwEntryRow* self /*none*/, gint max_length);
void base::EntryRowBase::set_max_length (gint max_length) noexcept
{
  typedef void (*call_wrap_t) (::AdwEntryRow* self, gint max_length);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_entry_row_set_max_length;
  auto max_length_to_c = max_length;
  call_wrap_v ((::AdwEntryRow*) (gobj_()), (gint) (max_length_to_c));
}

// void adw_entry_row_set_show_apply_button (AdwEntryRow* self /*none*/, gboolean show_apply_button);
// void adw_entry_row_set_show_apply_button (::AdwEntryRow* self /*none*/, gboolean show_apply_button);
void base::EntryRowBase::set_show_apply_button (gboolean show_apply_button) noexcept
{
  typedef void (*call_wrap_t) (::AdwEntryRow* self, gboolean show_apply_button);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_entry_row_set_show_apply_button;
  auto show_apply_button_to_c = show_apply_button;
  call_wrap_v ((::AdwEntryRow*) (gobj_()), (gboolean) (show_apply_button_to_c));
}




} // namespace base

} // namespace Adw

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<adw/entryrow_extra_def_impl.hpp>)
#include <adw/entryrow_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<adw/entryrow_extra_impl.hpp>)
#include <adw/entryrow_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Adw {

namespace impl {

namespace internal {

void EntryRowClassDef::class_init (gpointer class_struct, gpointer factory)
{
  ::AdwEntryRowClass *methods = (::AdwEntryRowClass *) class_struct;
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
