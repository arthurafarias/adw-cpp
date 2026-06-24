// AUTO-GENERATED

#ifndef _GI_ADW_ENTRYROW_HPP_
#define _GI_ADW_ENTRYROW_HPP_

#include "preferencesrow.hpp"

namespace gi {

namespace repository {

namespace Adw {


class EntryRow;

namespace base {


#define GI_ADW_ENTRYROW_BASE base::EntryRowBase
class EntryRowBase : public Adw::PreferencesRow
{
typedef Adw::PreferencesRow super_type;
public:
typedef ::AdwEntryRow BaseObjectType;

EntryRowBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return adw_entry_row_get_type(); } 

GI_INLINE_DECL Gtk::Editable interface_ (gi::interface_tag<Gtk::Editable>);

GI_INLINE_DECL operator Gtk::Editable ();

// GtkWidget* /*none*/ adw_entry_row_new ();
// ::AdwEntryRow* /*none*/ adw_entry_row_new ();
static GI_INLINE_DECL Adw::EntryRow new_ () noexcept;

// void adw_entry_row_add_prefix (AdwEntryRow* self /*none*/, GtkWidget* widget /*none*/);
// void adw_entry_row_add_prefix (::AdwEntryRow* self /*none*/, ::GtkWidget* widget /*none*/);
GI_INLINE_DECL void add_prefix (Gtk::Widget widget) noexcept;

// void adw_entry_row_add_suffix (AdwEntryRow* self /*none*/, GtkWidget* widget /*none*/);
// void adw_entry_row_add_suffix (::AdwEntryRow* self /*none*/, ::GtkWidget* widget /*none*/);
GI_INLINE_DECL void add_suffix (Gtk::Widget widget) noexcept;

// gboolean adw_entry_row_get_activates_default (AdwEntryRow* self /*none*/);
// gboolean adw_entry_row_get_activates_default (::AdwEntryRow* self /*none*/);
GI_INLINE_DECL bool get_activates_default () noexcept;

// PangoAttrList* /*full,nullable*/ adw_entry_row_get_attributes (AdwEntryRow* self /*none*/);
// ::PangoAttrList* /*full,nullable*/ adw_entry_row_get_attributes (::AdwEntryRow* self /*none*/);
GI_INLINE_DECL Pango::AttrList get_attributes () noexcept;

// gboolean adw_entry_row_get_enable_emoji_completion (AdwEntryRow* self /*none*/);
// gboolean adw_entry_row_get_enable_emoji_completion (::AdwEntryRow* self /*none*/);
GI_INLINE_DECL bool get_enable_emoji_completion () noexcept;

// GtkInputHints adw_entry_row_get_input_hints (AdwEntryRow* self /*none*/);
// ::GtkInputHints adw_entry_row_get_input_hints (::AdwEntryRow* self /*none*/);
GI_INLINE_DECL Gtk::InputHints get_input_hints () noexcept;

// GtkInputPurpose adw_entry_row_get_input_purpose (AdwEntryRow* self /*none*/);
// ::GtkInputPurpose adw_entry_row_get_input_purpose (::AdwEntryRow* self /*none*/);
GI_INLINE_DECL Gtk::InputPurpose get_input_purpose () noexcept;

// int adw_entry_row_get_max_length (AdwEntryRow* self /*none*/);
// gint adw_entry_row_get_max_length (::AdwEntryRow* self /*none*/);
GI_INLINE_DECL gint get_max_length () noexcept;

// gboolean adw_entry_row_get_show_apply_button (AdwEntryRow* self /*none*/);
// gboolean adw_entry_row_get_show_apply_button (::AdwEntryRow* self /*none*/);
GI_INLINE_DECL bool get_show_apply_button () noexcept;

// guint adw_entry_row_get_text_length (AdwEntryRow* self /*none*/);
// guint adw_entry_row_get_text_length (::AdwEntryRow* self /*none*/);
GI_INLINE_DECL guint get_text_length () noexcept;

// gboolean adw_entry_row_grab_focus_without_selecting (AdwEntryRow* self /*none*/);
// gboolean adw_entry_row_grab_focus_without_selecting (::AdwEntryRow* self /*none*/);
GI_INLINE_DECL bool grab_focus_without_selecting () noexcept;

// void adw_entry_row_remove (AdwEntryRow* self /*none*/, GtkWidget* widget /*none*/);
// void adw_entry_row_remove (::AdwEntryRow* self /*none*/, ::GtkWidget* widget /*none*/);
GI_INLINE_DECL void remove (Gtk::Widget widget) noexcept;

// void adw_entry_row_set_activates_default (AdwEntryRow* self /*none*/, gboolean activates);
// void adw_entry_row_set_activates_default (::AdwEntryRow* self /*none*/, gboolean activates);
GI_INLINE_DECL void set_activates_default (gboolean activates) noexcept;

// void adw_entry_row_set_attributes (AdwEntryRow* self /*none*/, PangoAttrList* attributes /*none,nullable*/);
// void adw_entry_row_set_attributes (::AdwEntryRow* self /*none*/, ::PangoAttrList* attributes /*none,nullable*/);
GI_INLINE_DECL void set_attributes (Pango::AttrList_Ref attributes) noexcept;
GI_INLINE_DECL void set_attributes () noexcept;

// void adw_entry_row_set_enable_emoji_completion (AdwEntryRow* self /*none*/, gboolean enable_emoji_completion);
// void adw_entry_row_set_enable_emoji_completion (::AdwEntryRow* self /*none*/, gboolean enable_emoji_completion);
GI_INLINE_DECL void set_enable_emoji_completion (gboolean enable_emoji_completion) noexcept;

// void adw_entry_row_set_input_hints (AdwEntryRow* self /*none*/, GtkInputHints hints);
// void adw_entry_row_set_input_hints (::AdwEntryRow* self /*none*/, ::GtkInputHints hints);
GI_INLINE_DECL void set_input_hints (Gtk::InputHints hints) noexcept;

// void adw_entry_row_set_input_purpose (AdwEntryRow* self /*none*/, GtkInputPurpose purpose);
// void adw_entry_row_set_input_purpose (::AdwEntryRow* self /*none*/, ::GtkInputPurpose purpose);
GI_INLINE_DECL void set_input_purpose (Gtk::InputPurpose purpose) noexcept;

// void adw_entry_row_set_max_length (AdwEntryRow* self /*none*/, int max_length);
// void adw_entry_row_set_max_length (::AdwEntryRow* self /*none*/, gint max_length);
GI_INLINE_DECL void set_max_length (gint max_length) noexcept;

// void adw_entry_row_set_show_apply_button (AdwEntryRow* self /*none*/, gboolean show_apply_button);
// void adw_entry_row_set_show_apply_button (::AdwEntryRow* self /*none*/, gboolean show_apply_button);
GI_INLINE_DECL void set_show_apply_button (gboolean show_apply_button) noexcept;

gi::property_proxy<bool, base::EntryRowBase> property_activates_default()
{ return gi::property_proxy<bool, base::EntryRowBase> (*this, "activates-default"); }
const gi::property_proxy<bool, base::EntryRowBase> property_activates_default() const
{ return gi::property_proxy<bool, base::EntryRowBase> (*this, "activates-default"); }

gi::property_proxy<Pango::AttrList, base::EntryRowBase> property_attributes()
{ return gi::property_proxy<Pango::AttrList, base::EntryRowBase> (*this, "attributes"); }
const gi::property_proxy<Pango::AttrList, base::EntryRowBase> property_attributes() const
{ return gi::property_proxy<Pango::AttrList, base::EntryRowBase> (*this, "attributes"); }

gi::property_proxy<bool, base::EntryRowBase> property_enable_emoji_completion()
{ return gi::property_proxy<bool, base::EntryRowBase> (*this, "enable-emoji-completion"); }
const gi::property_proxy<bool, base::EntryRowBase> property_enable_emoji_completion() const
{ return gi::property_proxy<bool, base::EntryRowBase> (*this, "enable-emoji-completion"); }

gi::property_proxy<Gtk::InputHints, base::EntryRowBase> property_input_hints()
{ return gi::property_proxy<Gtk::InputHints, base::EntryRowBase> (*this, "input-hints"); }
const gi::property_proxy<Gtk::InputHints, base::EntryRowBase> property_input_hints() const
{ return gi::property_proxy<Gtk::InputHints, base::EntryRowBase> (*this, "input-hints"); }

gi::property_proxy<Gtk::InputPurpose, base::EntryRowBase> property_input_purpose()
{ return gi::property_proxy<Gtk::InputPurpose, base::EntryRowBase> (*this, "input-purpose"); }
const gi::property_proxy<Gtk::InputPurpose, base::EntryRowBase> property_input_purpose() const
{ return gi::property_proxy<Gtk::InputPurpose, base::EntryRowBase> (*this, "input-purpose"); }

gi::property_proxy<gint, base::EntryRowBase> property_max_length()
{ return gi::property_proxy<gint, base::EntryRowBase> (*this, "max-length"); }
const gi::property_proxy<gint, base::EntryRowBase> property_max_length() const
{ return gi::property_proxy<gint, base::EntryRowBase> (*this, "max-length"); }

gi::property_proxy<bool, base::EntryRowBase> property_show_apply_button()
{ return gi::property_proxy<bool, base::EntryRowBase> (*this, "show-apply-button"); }
const gi::property_proxy<bool, base::EntryRowBase> property_show_apply_button() const
{ return gi::property_proxy<bool, base::EntryRowBase> (*this, "show-apply-button"); }

gi::property_proxy<guint, base::EntryRowBase> property_text_length()
{ return gi::property_proxy<guint, base::EntryRowBase> (*this, "text-length"); }
const gi::property_proxy<guint, base::EntryRowBase> property_text_length() const
{ return gi::property_proxy<guint, base::EntryRowBase> (*this, "text-length"); }

// (signal) void apply ();
// (signal) void apply ();
gi::signal_proxy<void(Adw::EntryRow)> signal_apply()
{ return gi::signal_proxy<void(Adw::EntryRow)> (*this, "apply"); }

// (signal) void entry-activated ();
// (signal) void entry-activated ();
gi::signal_proxy<void(Adw::EntryRow)> signal_entry_activated()
{ return gi::signal_proxy<void(Adw::EntryRow)> (*this, "entry-activated"); }

}; // class

} // namespace base

} // namespace Adw

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<adw/entryrow_extra_def.hpp>)
#include <adw/entryrow_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<adw/entryrow_extra.hpp>)
#include <adw/entryrow_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Adw {

class EntryRow : public GI_ADW_ENTRYROW_BASE
{ typedef GI_ADW_ENTRYROW_BASE super_type; using super_type::super_type; };

} // namespace Adw

template<> struct declare_cpptype_of<::AdwEntryRow>
{ typedef Adw::EntryRow type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Adw {

namespace impl {

namespace internal {


class EntryRowClassDef
{
typedef EntryRowClassDef self;
public:
typedef Adw::EntryRow instance_type;
typedef ::AdwEntryRowClass class_type;


struct TypeInitData;

protected:
GI_INLINE_DECL ~EntryRowClassDef() = default;
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );


};

GI_CLASS_IMPL_BEGIN


class EntryRowClass: public detail::ClassTemplate<Adw::impl::internal::EntryRowClassDef, Adw::impl::internal::PreferencesRowClass, Gtk::impl::internal::EditableInterfaceClassImpl>
{
friend class internal::EntryRowClassDef;
typedef EntryRowClass self;
typedef detail::ClassTemplate<Adw::impl::internal::EntryRowClassDef, Adw::impl::internal::PreferencesRowClass, Gtk::impl::internal::EditableInterfaceClassImpl> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types
typedef Gtk::impl::internal::EditableInterfaceClassImpl GtkEditableInterface_type;



};


struct EntryRowClassDef::TypeInitData
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

using EntryRowImpl = detail::ObjectImpl<EntryRow, internal::EntryRowClass>;

} // namespace impl

} // namespace Adw

} // namespace repository

} // namespace gi

#endif
