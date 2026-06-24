// AUTO-GENERATED

#ifndef _GI_ADW_ACTIONROW_HPP_
#define _GI_ADW_ACTIONROW_HPP_

#include "preferencesrow.hpp"

namespace gi {

namespace repository {

namespace Adw {


class ActionRow;

namespace base {


#define GI_ADW_ACTIONROW_BASE base::ActionRowBase
class ActionRowBase : public Adw::PreferencesRow
{
typedef Adw::PreferencesRow super_type;
public:
typedef ::AdwActionRow BaseObjectType;

ActionRowBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return adw_action_row_get_type(); } 

// GtkWidget* /*none*/ adw_action_row_new ();
// ::AdwActionRow* /*none*/ adw_action_row_new ();
static GI_INLINE_DECL Adw::ActionRow new_ () noexcept;

// void adw_action_row_activate (AdwActionRow* self /*none*/);
// void adw_action_row_activate (::AdwActionRow* self /*none*/);
GI_INLINE_DECL void activate () noexcept;

// void adw_action_row_add_prefix (AdwActionRow* self /*none*/, GtkWidget* widget /*none*/);
// void adw_action_row_add_prefix (::AdwActionRow* self /*none*/, ::GtkWidget* widget /*none*/);
GI_INLINE_DECL void add_prefix (Gtk::Widget widget) noexcept;

// void adw_action_row_add_suffix (AdwActionRow* self /*none*/, GtkWidget* widget /*none*/);
// void adw_action_row_add_suffix (::AdwActionRow* self /*none*/, ::GtkWidget* widget /*none*/);
GI_INLINE_DECL void add_suffix (Gtk::Widget widget) noexcept;

// GtkWidget* /*none,nullable*/ adw_action_row_get_activatable_widget (AdwActionRow* self /*none*/);
// ::GtkWidget* /*none,nullable*/ adw_action_row_get_activatable_widget (::AdwActionRow* self /*none*/);
GI_INLINE_DECL Gtk::Widget get_activatable_widget () noexcept;

// const char* /*none,nullable*/ adw_action_row_get_icon_name (AdwActionRow* self /*none*/);
// const char* /*none,nullable*/ adw_action_row_get_icon_name (::AdwActionRow* self /*none*/);
// IGNORE; deprecated

// const char* /*none,nullable*/ adw_action_row_get_subtitle (AdwActionRow* self /*none*/);
// const char* /*none,nullable*/ adw_action_row_get_subtitle (::AdwActionRow* self /*none*/);
GI_INLINE_DECL gi::cstring_v get_subtitle () noexcept;

// int adw_action_row_get_subtitle_lines (AdwActionRow* self /*none*/);
// gint adw_action_row_get_subtitle_lines (::AdwActionRow* self /*none*/);
GI_INLINE_DECL gint get_subtitle_lines () noexcept;

// gboolean adw_action_row_get_subtitle_selectable (AdwActionRow* self /*none*/);
// gboolean adw_action_row_get_subtitle_selectable (::AdwActionRow* self /*none*/);
GI_INLINE_DECL bool get_subtitle_selectable () noexcept;

// int adw_action_row_get_title_lines (AdwActionRow* self /*none*/);
// gint adw_action_row_get_title_lines (::AdwActionRow* self /*none*/);
GI_INLINE_DECL gint get_title_lines () noexcept;

// void adw_action_row_remove (AdwActionRow* self /*none*/, GtkWidget* widget /*none*/);
// void adw_action_row_remove (::AdwActionRow* self /*none*/, ::GtkWidget* widget /*none*/);
GI_INLINE_DECL void remove (Gtk::Widget widget) noexcept;

// void adw_action_row_set_activatable_widget (AdwActionRow* self /*none*/, GtkWidget* widget /*none,nullable*/);
// void adw_action_row_set_activatable_widget (::AdwActionRow* self /*none*/, ::GtkWidget* widget /*none,nullable*/);
GI_INLINE_DECL void set_activatable_widget (Gtk::Widget widget) noexcept;
GI_INLINE_DECL void set_activatable_widget () noexcept;

// void adw_action_row_set_icon_name (AdwActionRow* self /*none*/, const char* icon_name /*none,nullable*/);
// void adw_action_row_set_icon_name (::AdwActionRow* self /*none*/, const char* icon_name /*none,nullable*/);
// IGNORE; deprecated

// void adw_action_row_set_subtitle (AdwActionRow* self /*none*/, const char* subtitle /*none*/);
// void adw_action_row_set_subtitle (::AdwActionRow* self /*none*/, const char* subtitle /*none*/);
GI_INLINE_DECL void set_subtitle (const gi::cstring_v subtitle) noexcept;

// void adw_action_row_set_subtitle_lines (AdwActionRow* self /*none*/, int subtitle_lines);
// void adw_action_row_set_subtitle_lines (::AdwActionRow* self /*none*/, gint subtitle_lines);
GI_INLINE_DECL void set_subtitle_lines (gint subtitle_lines) noexcept;

// void adw_action_row_set_subtitle_selectable (AdwActionRow* self /*none*/, gboolean subtitle_selectable);
// void adw_action_row_set_subtitle_selectable (::AdwActionRow* self /*none*/, gboolean subtitle_selectable);
GI_INLINE_DECL void set_subtitle_selectable (gboolean subtitle_selectable) noexcept;

// void adw_action_row_set_title_lines (AdwActionRow* self /*none*/, int title_lines);
// void adw_action_row_set_title_lines (::AdwActionRow* self /*none*/, gint title_lines);
GI_INLINE_DECL void set_title_lines (gint title_lines) noexcept;

gi::property_proxy<Gtk::Widget, base::ActionRowBase> property_activatable_widget()
{ return gi::property_proxy<Gtk::Widget, base::ActionRowBase> (*this, "activatable-widget"); }
const gi::property_proxy<Gtk::Widget, base::ActionRowBase> property_activatable_widget() const
{ return gi::property_proxy<Gtk::Widget, base::ActionRowBase> (*this, "activatable-widget"); }

gi::property_proxy<gi::cstring, base::ActionRowBase> property_icon_name()
{ return gi::property_proxy<gi::cstring, base::ActionRowBase> (*this, "icon-name"); }
const gi::property_proxy<gi::cstring, base::ActionRowBase> property_icon_name() const
{ return gi::property_proxy<gi::cstring, base::ActionRowBase> (*this, "icon-name"); }

gi::property_proxy<gi::cstring, base::ActionRowBase> property_subtitle()
{ return gi::property_proxy<gi::cstring, base::ActionRowBase> (*this, "subtitle"); }
const gi::property_proxy<gi::cstring, base::ActionRowBase> property_subtitle() const
{ return gi::property_proxy<gi::cstring, base::ActionRowBase> (*this, "subtitle"); }

gi::property_proxy<gint, base::ActionRowBase> property_subtitle_lines()
{ return gi::property_proxy<gint, base::ActionRowBase> (*this, "subtitle-lines"); }
const gi::property_proxy<gint, base::ActionRowBase> property_subtitle_lines() const
{ return gi::property_proxy<gint, base::ActionRowBase> (*this, "subtitle-lines"); }

gi::property_proxy<bool, base::ActionRowBase> property_subtitle_selectable()
{ return gi::property_proxy<bool, base::ActionRowBase> (*this, "subtitle-selectable"); }
const gi::property_proxy<bool, base::ActionRowBase> property_subtitle_selectable() const
{ return gi::property_proxy<bool, base::ActionRowBase> (*this, "subtitle-selectable"); }

gi::property_proxy<gint, base::ActionRowBase> property_title_lines()
{ return gi::property_proxy<gint, base::ActionRowBase> (*this, "title-lines"); }
const gi::property_proxy<gint, base::ActionRowBase> property_title_lines() const
{ return gi::property_proxy<gint, base::ActionRowBase> (*this, "title-lines"); }

// (signal) void activated ();
// (signal) void activated ();
gi::signal_proxy<void(Adw::ActionRow)> signal_activated()
{ return gi::signal_proxy<void(Adw::ActionRow)> (*this, "activated"); }

}; // class

} // namespace base

} // namespace Adw

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<adw/actionrow_extra_def.hpp>)
#include <adw/actionrow_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<adw/actionrow_extra.hpp>)
#include <adw/actionrow_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Adw {

class ActionRow : public GI_ADW_ACTIONROW_BASE
{ typedef GI_ADW_ACTIONROW_BASE super_type; using super_type::super_type; };

} // namespace Adw

template<> struct declare_cpptype_of<::AdwActionRow>
{ typedef Adw::ActionRow type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Adw {

namespace impl {

namespace internal {


class ActionRowClassDef
{
typedef ActionRowClassDef self;
public:
typedef Adw::ActionRow instance_type;
typedef ::AdwActionRowClass class_type;

using GI_MEMBER_CHECK_CONFLICT(activate) = self;

struct TypeInitData;

protected:
GI_INLINE_DECL ~ActionRowClassDef() = default;
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );

// void ActionRow::activate (AdwActionRow* self /*none*/);
// void ActionRow::activate (::AdwActionRow* self /*none*/);
virtual void activate_ () noexcept = 0;


};

GI_CLASS_IMPL_BEGIN


class ActionRowClass: public detail::ClassTemplate<Adw::impl::internal::ActionRowClassDef, Adw::impl::internal::PreferencesRowClass>
{
friend class internal::ActionRowClassDef;
typedef ActionRowClass self;
typedef detail::ClassTemplate<Adw::impl::internal::ActionRowClassDef, Adw::impl::internal::PreferencesRowClass> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types


// void ActionRow::activate (AdwActionRow* self /*none*/);
// void ActionRow::activate (::AdwActionRow* self /*none*/);
GI_INLINE_DECL void activate_ () noexcept override;


};


struct ActionRowClassDef::TypeInitData
{
  GI_MEMBER_DEFINE(ActionRowClass, activate)

template<typename SubClass>
constexpr static TypeInitData factory()
{
  using DefData = detail::DefinitionData<SubClass, TypeInitData>;
  return {
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, activate)
  };
}
};
} // namespace internal

GI_CLASS_IMPL_END

using ActionRowImpl = detail::ObjectImpl<ActionRow, internal::ActionRowClass>;

} // namespace impl

} // namespace Adw

} // namespace repository

} // namespace gi

#endif
