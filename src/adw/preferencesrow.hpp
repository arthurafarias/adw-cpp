// AUTO-GENERATED

#ifndef _GI_ADW_PREFERENCESROW_HPP_
#define _GI_ADW_PREFERENCESROW_HPP_


namespace gi {

namespace repository {

namespace Adw {


class PreferencesRow;

namespace base {


#define GI_ADW_PREFERENCESROW_BASE base::PreferencesRowBase
class PreferencesRowBase : public Gtk::ListBoxRow
{
typedef Gtk::ListBoxRow super_type;
public:
typedef ::AdwPreferencesRow BaseObjectType;

PreferencesRowBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return adw_preferences_row_get_type(); } 

// GtkWidget* /*none*/ adw_preferences_row_new ();
// ::AdwPreferencesRow* /*none*/ adw_preferences_row_new ();
static GI_INLINE_DECL Adw::PreferencesRow new_ () noexcept;

// const char* /*none*/ adw_preferences_row_get_title (AdwPreferencesRow* self /*none*/);
// const char* /*none*/ adw_preferences_row_get_title (::AdwPreferencesRow* self /*none*/);
GI_INLINE_DECL gi::cstring_v get_title () noexcept;

// gboolean adw_preferences_row_get_title_selectable (AdwPreferencesRow* self /*none*/);
// gboolean adw_preferences_row_get_title_selectable (::AdwPreferencesRow* self /*none*/);
GI_INLINE_DECL bool get_title_selectable () noexcept;

// gboolean adw_preferences_row_get_use_markup (AdwPreferencesRow* self /*none*/);
// gboolean adw_preferences_row_get_use_markup (::AdwPreferencesRow* self /*none*/);
GI_INLINE_DECL bool get_use_markup () noexcept;

// gboolean adw_preferences_row_get_use_underline (AdwPreferencesRow* self /*none*/);
// gboolean adw_preferences_row_get_use_underline (::AdwPreferencesRow* self /*none*/);
GI_INLINE_DECL bool get_use_underline () noexcept;

// void adw_preferences_row_set_title (AdwPreferencesRow* self /*none*/, const char* title /*none*/);
// void adw_preferences_row_set_title (::AdwPreferencesRow* self /*none*/, const char* title /*none*/);
GI_INLINE_DECL void set_title (const gi::cstring_v title) noexcept;

// void adw_preferences_row_set_title_selectable (AdwPreferencesRow* self /*none*/, gboolean title_selectable);
// void adw_preferences_row_set_title_selectable (::AdwPreferencesRow* self /*none*/, gboolean title_selectable);
GI_INLINE_DECL void set_title_selectable (gboolean title_selectable) noexcept;

// void adw_preferences_row_set_use_markup (AdwPreferencesRow* self /*none*/, gboolean use_markup);
// void adw_preferences_row_set_use_markup (::AdwPreferencesRow* self /*none*/, gboolean use_markup);
GI_INLINE_DECL void set_use_markup (gboolean use_markup) noexcept;

// void adw_preferences_row_set_use_underline (AdwPreferencesRow* self /*none*/, gboolean use_underline);
// void adw_preferences_row_set_use_underline (::AdwPreferencesRow* self /*none*/, gboolean use_underline);
GI_INLINE_DECL void set_use_underline (gboolean use_underline) noexcept;

gi::property_proxy<gi::cstring, base::PreferencesRowBase> property_title()
{ return gi::property_proxy<gi::cstring, base::PreferencesRowBase> (*this, "title"); }
const gi::property_proxy<gi::cstring, base::PreferencesRowBase> property_title() const
{ return gi::property_proxy<gi::cstring, base::PreferencesRowBase> (*this, "title"); }

gi::property_proxy<bool, base::PreferencesRowBase> property_title_selectable()
{ return gi::property_proxy<bool, base::PreferencesRowBase> (*this, "title-selectable"); }
const gi::property_proxy<bool, base::PreferencesRowBase> property_title_selectable() const
{ return gi::property_proxy<bool, base::PreferencesRowBase> (*this, "title-selectable"); }

gi::property_proxy<bool, base::PreferencesRowBase> property_use_markup()
{ return gi::property_proxy<bool, base::PreferencesRowBase> (*this, "use-markup"); }
const gi::property_proxy<bool, base::PreferencesRowBase> property_use_markup() const
{ return gi::property_proxy<bool, base::PreferencesRowBase> (*this, "use-markup"); }

gi::property_proxy<bool, base::PreferencesRowBase> property_use_underline()
{ return gi::property_proxy<bool, base::PreferencesRowBase> (*this, "use-underline"); }
const gi::property_proxy<bool, base::PreferencesRowBase> property_use_underline() const
{ return gi::property_proxy<bool, base::PreferencesRowBase> (*this, "use-underline"); }

}; // class

} // namespace base

} // namespace Adw

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<adw/preferencesrow_extra_def.hpp>)
#include <adw/preferencesrow_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<adw/preferencesrow_extra.hpp>)
#include <adw/preferencesrow_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Adw {

class PreferencesRow : public GI_ADW_PREFERENCESROW_BASE
{ typedef GI_ADW_PREFERENCESROW_BASE super_type; using super_type::super_type; };

} // namespace Adw

template<> struct declare_cpptype_of<::AdwPreferencesRow>
{ typedef Adw::PreferencesRow type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Adw {

namespace impl {

namespace internal {


class PreferencesRowClassDef
{
typedef PreferencesRowClassDef self;
public:
typedef Adw::PreferencesRow instance_type;
typedef ::AdwPreferencesRowClass class_type;


struct TypeInitData;

protected:
GI_INLINE_DECL ~PreferencesRowClassDef() = default;
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );


};

GI_CLASS_IMPL_BEGIN


class PreferencesRowClass: public detail::ClassTemplate<Adw::impl::internal::PreferencesRowClassDef, Gtk::impl::internal::ListBoxRowClass>
{
friend class internal::PreferencesRowClassDef;
typedef PreferencesRowClass self;
typedef detail::ClassTemplate<Adw::impl::internal::PreferencesRowClassDef, Gtk::impl::internal::ListBoxRowClass> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types



};


struct PreferencesRowClassDef::TypeInitData
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

using PreferencesRowImpl = detail::ObjectImpl<PreferencesRow, internal::PreferencesRowClass>;

} // namespace impl

} // namespace Adw

} // namespace repository

} // namespace gi

#endif
