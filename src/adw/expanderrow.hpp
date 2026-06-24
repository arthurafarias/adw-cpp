// AUTO-GENERATED

#ifndef _GI_ADW_EXPANDERROW_HPP_
#define _GI_ADW_EXPANDERROW_HPP_

#include "preferencesrow.hpp"

namespace gi {

namespace repository {

namespace Adw {


class ExpanderRow;

namespace base {


#define GI_ADW_EXPANDERROW_BASE base::ExpanderRowBase
class ExpanderRowBase : public Adw::PreferencesRow
{
typedef Adw::PreferencesRow super_type;
public:
typedef ::AdwExpanderRow BaseObjectType;

ExpanderRowBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return adw_expander_row_get_type(); } 

// GtkWidget* /*none*/ adw_expander_row_new ();
// ::AdwExpanderRow* /*none*/ adw_expander_row_new ();
static GI_INLINE_DECL Adw::ExpanderRow new_ () noexcept;

// void adw_expander_row_add_action (AdwExpanderRow* self /*none*/, GtkWidget* widget /*none*/);
// void adw_expander_row_add_action (::AdwExpanderRow* self /*none*/, ::GtkWidget* widget /*none*/);
// IGNORE; deprecated

// void adw_expander_row_add_prefix (AdwExpanderRow* self /*none*/, GtkWidget* widget /*none*/);
// void adw_expander_row_add_prefix (::AdwExpanderRow* self /*none*/, ::GtkWidget* widget /*none*/);
GI_INLINE_DECL void add_prefix (Gtk::Widget widget) noexcept;

// void adw_expander_row_add_row (AdwExpanderRow* self /*none*/, GtkWidget* child /*none*/);
// void adw_expander_row_add_row (::AdwExpanderRow* self /*none*/, ::GtkWidget* child /*none*/);
GI_INLINE_DECL void add_row (Gtk::Widget child) noexcept;

// void adw_expander_row_add_suffix (AdwExpanderRow* self /*none*/, GtkWidget* widget /*none*/);
// void adw_expander_row_add_suffix (::AdwExpanderRow* self /*none*/, ::GtkWidget* widget /*none*/);
GI_INLINE_DECL void add_suffix (Gtk::Widget widget) noexcept;

// gboolean adw_expander_row_get_enable_expansion (AdwExpanderRow* self /*none*/);
// gboolean adw_expander_row_get_enable_expansion (::AdwExpanderRow* self /*none*/);
GI_INLINE_DECL bool get_enable_expansion () noexcept;

// gboolean adw_expander_row_get_expanded (AdwExpanderRow* self /*none*/);
// gboolean adw_expander_row_get_expanded (::AdwExpanderRow* self /*none*/);
GI_INLINE_DECL bool get_expanded () noexcept;

// const char* /*none,nullable*/ adw_expander_row_get_icon_name (AdwExpanderRow* self /*none*/);
// const char* /*none,nullable*/ adw_expander_row_get_icon_name (::AdwExpanderRow* self /*none*/);
// IGNORE; deprecated

// gboolean adw_expander_row_get_show_enable_switch (AdwExpanderRow* self /*none*/);
// gboolean adw_expander_row_get_show_enable_switch (::AdwExpanderRow* self /*none*/);
GI_INLINE_DECL bool get_show_enable_switch () noexcept;

// const char* /*none*/ adw_expander_row_get_subtitle (AdwExpanderRow* self /*none*/);
// const char* /*none*/ adw_expander_row_get_subtitle (::AdwExpanderRow* self /*none*/);
GI_INLINE_DECL gi::cstring_v get_subtitle () noexcept;

// int adw_expander_row_get_subtitle_lines (AdwExpanderRow* self /*none*/);
// gint adw_expander_row_get_subtitle_lines (::AdwExpanderRow* self /*none*/);
GI_INLINE_DECL gint get_subtitle_lines () noexcept;

// int adw_expander_row_get_title_lines (AdwExpanderRow* self /*none*/);
// gint adw_expander_row_get_title_lines (::AdwExpanderRow* self /*none*/);
GI_INLINE_DECL gint get_title_lines () noexcept;

// void adw_expander_row_remove (AdwExpanderRow* self /*none*/, GtkWidget* child /*none*/);
// void adw_expander_row_remove (::AdwExpanderRow* self /*none*/, ::GtkWidget* child /*none*/);
GI_INLINE_DECL void remove (Gtk::Widget child) noexcept;

// void adw_expander_row_set_enable_expansion (AdwExpanderRow* self /*none*/, gboolean enable_expansion);
// void adw_expander_row_set_enable_expansion (::AdwExpanderRow* self /*none*/, gboolean enable_expansion);
GI_INLINE_DECL void set_enable_expansion (gboolean enable_expansion) noexcept;

// void adw_expander_row_set_expanded (AdwExpanderRow* self /*none*/, gboolean expanded);
// void adw_expander_row_set_expanded (::AdwExpanderRow* self /*none*/, gboolean expanded);
GI_INLINE_DECL void set_expanded (gboolean expanded) noexcept;

// void adw_expander_row_set_icon_name (AdwExpanderRow* self /*none*/, const char* icon_name /*none,nullable*/);
// void adw_expander_row_set_icon_name (::AdwExpanderRow* self /*none*/, const char* icon_name /*none,nullable*/);
// IGNORE; deprecated

// void adw_expander_row_set_show_enable_switch (AdwExpanderRow* self /*none*/, gboolean show_enable_switch);
// void adw_expander_row_set_show_enable_switch (::AdwExpanderRow* self /*none*/, gboolean show_enable_switch);
GI_INLINE_DECL void set_show_enable_switch (gboolean show_enable_switch) noexcept;

// void adw_expander_row_set_subtitle (AdwExpanderRow* self /*none*/, const char* subtitle /*none*/);
// void adw_expander_row_set_subtitle (::AdwExpanderRow* self /*none*/, const char* subtitle /*none*/);
GI_INLINE_DECL void set_subtitle (const gi::cstring_v subtitle) noexcept;

// void adw_expander_row_set_subtitle_lines (AdwExpanderRow* self /*none*/, int subtitle_lines);
// void adw_expander_row_set_subtitle_lines (::AdwExpanderRow* self /*none*/, gint subtitle_lines);
GI_INLINE_DECL void set_subtitle_lines (gint subtitle_lines) noexcept;

// void adw_expander_row_set_title_lines (AdwExpanderRow* self /*none*/, int title_lines);
// void adw_expander_row_set_title_lines (::AdwExpanderRow* self /*none*/, gint title_lines);
GI_INLINE_DECL void set_title_lines (gint title_lines) noexcept;

gi::property_proxy<bool, base::ExpanderRowBase> property_enable_expansion()
{ return gi::property_proxy<bool, base::ExpanderRowBase> (*this, "enable-expansion"); }
const gi::property_proxy<bool, base::ExpanderRowBase> property_enable_expansion() const
{ return gi::property_proxy<bool, base::ExpanderRowBase> (*this, "enable-expansion"); }

gi::property_proxy<bool, base::ExpanderRowBase> property_expanded()
{ return gi::property_proxy<bool, base::ExpanderRowBase> (*this, "expanded"); }
const gi::property_proxy<bool, base::ExpanderRowBase> property_expanded() const
{ return gi::property_proxy<bool, base::ExpanderRowBase> (*this, "expanded"); }

gi::property_proxy<gi::cstring, base::ExpanderRowBase> property_icon_name()
{ return gi::property_proxy<gi::cstring, base::ExpanderRowBase> (*this, "icon-name"); }
const gi::property_proxy<gi::cstring, base::ExpanderRowBase> property_icon_name() const
{ return gi::property_proxy<gi::cstring, base::ExpanderRowBase> (*this, "icon-name"); }

gi::property_proxy<bool, base::ExpanderRowBase> property_show_enable_switch()
{ return gi::property_proxy<bool, base::ExpanderRowBase> (*this, "show-enable-switch"); }
const gi::property_proxy<bool, base::ExpanderRowBase> property_show_enable_switch() const
{ return gi::property_proxy<bool, base::ExpanderRowBase> (*this, "show-enable-switch"); }

gi::property_proxy<gi::cstring, base::ExpanderRowBase> property_subtitle()
{ return gi::property_proxy<gi::cstring, base::ExpanderRowBase> (*this, "subtitle"); }
const gi::property_proxy<gi::cstring, base::ExpanderRowBase> property_subtitle() const
{ return gi::property_proxy<gi::cstring, base::ExpanderRowBase> (*this, "subtitle"); }

gi::property_proxy<gint, base::ExpanderRowBase> property_subtitle_lines()
{ return gi::property_proxy<gint, base::ExpanderRowBase> (*this, "subtitle-lines"); }
const gi::property_proxy<gint, base::ExpanderRowBase> property_subtitle_lines() const
{ return gi::property_proxy<gint, base::ExpanderRowBase> (*this, "subtitle-lines"); }

gi::property_proxy<gint, base::ExpanderRowBase> property_title_lines()
{ return gi::property_proxy<gint, base::ExpanderRowBase> (*this, "title-lines"); }
const gi::property_proxy<gint, base::ExpanderRowBase> property_title_lines() const
{ return gi::property_proxy<gint, base::ExpanderRowBase> (*this, "title-lines"); }

}; // class

} // namespace base

} // namespace Adw

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<adw/expanderrow_extra_def.hpp>)
#include <adw/expanderrow_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<adw/expanderrow_extra.hpp>)
#include <adw/expanderrow_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Adw {

class ExpanderRow : public GI_ADW_EXPANDERROW_BASE
{ typedef GI_ADW_EXPANDERROW_BASE super_type; using super_type::super_type; };

} // namespace Adw

template<> struct declare_cpptype_of<::AdwExpanderRow>
{ typedef Adw::ExpanderRow type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Adw {

namespace impl {

namespace internal {


class ExpanderRowClassDef
{
typedef ExpanderRowClassDef self;
public:
typedef Adw::ExpanderRow instance_type;
typedef ::AdwExpanderRowClass class_type;


struct TypeInitData;

protected:
GI_INLINE_DECL ~ExpanderRowClassDef() = default;
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );


};

GI_CLASS_IMPL_BEGIN


class ExpanderRowClass: public detail::ClassTemplate<Adw::impl::internal::ExpanderRowClassDef, Adw::impl::internal::PreferencesRowClass>
{
friend class internal::ExpanderRowClassDef;
typedef ExpanderRowClass self;
typedef detail::ClassTemplate<Adw::impl::internal::ExpanderRowClassDef, Adw::impl::internal::PreferencesRowClass> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types



};


struct ExpanderRowClassDef::TypeInitData
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

using ExpanderRowImpl = detail::ObjectImpl<ExpanderRow, internal::ExpanderRowClass>;

} // namespace impl

} // namespace Adw

} // namespace repository

} // namespace gi

#endif
