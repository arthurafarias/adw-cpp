// AUTO-GENERATED

#ifndef _GI_ADW_PREFERENCESGROUP_HPP_
#define _GI_ADW_PREFERENCESGROUP_HPP_


namespace gi {

namespace repository {

namespace Adw {


class PreferencesGroup;

namespace base {


#define GI_ADW_PREFERENCESGROUP_BASE base::PreferencesGroupBase
class PreferencesGroupBase : public Gtk::Widget
{
typedef Gtk::Widget super_type;
public:
typedef ::AdwPreferencesGroup BaseObjectType;

PreferencesGroupBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return adw_preferences_group_get_type(); } 

// GtkWidget* /*none*/ adw_preferences_group_new ();
// ::AdwPreferencesGroup* /*none*/ adw_preferences_group_new ();
static GI_INLINE_DECL Adw::PreferencesGroup new_ () noexcept;

// void adw_preferences_group_add (AdwPreferencesGroup* self /*none*/, GtkWidget* child /*none*/);
// void adw_preferences_group_add (::AdwPreferencesGroup* self /*none*/, ::GtkWidget* child /*none*/);
GI_INLINE_DECL void add (Gtk::Widget child) noexcept;

// void adw_preferences_group_bind_model (AdwPreferencesGroup* self /*none*/, GListModel* model /*none,nullable*/, GtkListBoxCreateWidgetFunc create_row_func /*none,nullable*/, gpointer user_data, GDestroyNotify user_data_free_func /*none*/);
// void adw_preferences_group_bind_model (::AdwPreferencesGroup* self /*none*/, ::GListModel* model /*none,nullable*/, Gtk::ListBoxCreateWidgetFunc::cfunction_type create_row_func /*none,nullable*/, void* user_data, GLib::DestroyNotify::cfunction_type user_data_free_func /*none*/);
GI_INLINE_DECL void bind_model (Gio::ListModel model, Gtk::ListBoxCreateWidgetFunc create_row_func) noexcept;
GI_INLINE_DECL void bind_model (Gtk::ListBoxCreateWidgetFunc create_row_func) noexcept;

// const char* /*none,nullable*/ adw_preferences_group_get_description (AdwPreferencesGroup* self /*none*/);
// const char* /*none,nullable*/ adw_preferences_group_get_description (::AdwPreferencesGroup* self /*none*/);
GI_INLINE_DECL gi::cstring_v get_description () noexcept;

// GtkWidget* /*none,nullable*/ adw_preferences_group_get_header_suffix (AdwPreferencesGroup* self /*none*/);
// ::GtkWidget* /*none,nullable*/ adw_preferences_group_get_header_suffix (::AdwPreferencesGroup* self /*none*/);
GI_INLINE_DECL Gtk::Widget get_header_suffix () noexcept;

// GtkWidget* /*none,nullable*/ adw_preferences_group_get_row (AdwPreferencesGroup* self /*none*/, guint index);
// ::GtkWidget* /*none,nullable*/ adw_preferences_group_get_row (::AdwPreferencesGroup* self /*none*/, guint index);
GI_INLINE_DECL Gtk::Widget get_row (guint index) noexcept;

// gboolean adw_preferences_group_get_separate_rows (AdwPreferencesGroup* self /*none*/);
// gboolean adw_preferences_group_get_separate_rows (::AdwPreferencesGroup* self /*none*/);
GI_INLINE_DECL bool get_separate_rows () noexcept;

// const char* /*none*/ adw_preferences_group_get_title (AdwPreferencesGroup* self /*none*/);
// const char* /*none*/ adw_preferences_group_get_title (::AdwPreferencesGroup* self /*none*/);
GI_INLINE_DECL gi::cstring_v get_title () noexcept;

// void adw_preferences_group_remove (AdwPreferencesGroup* self /*none*/, GtkWidget* child /*none*/);
// void adw_preferences_group_remove (::AdwPreferencesGroup* self /*none*/, ::GtkWidget* child /*none*/);
GI_INLINE_DECL void remove (Gtk::Widget child) noexcept;

// void adw_preferences_group_set_description (AdwPreferencesGroup* self /*none*/, const char* description /*none,nullable*/);
// void adw_preferences_group_set_description (::AdwPreferencesGroup* self /*none*/, const char* description /*none,nullable*/);
GI_INLINE_DECL void set_description (const gi::cstring_v description) noexcept;
GI_INLINE_DECL void set_description () noexcept;

// void adw_preferences_group_set_header_suffix (AdwPreferencesGroup* self /*none*/, GtkWidget* suffix /*none,nullable*/);
// void adw_preferences_group_set_header_suffix (::AdwPreferencesGroup* self /*none*/, ::GtkWidget* suffix /*none,nullable*/);
GI_INLINE_DECL void set_header_suffix (Gtk::Widget suffix) noexcept;
GI_INLINE_DECL void set_header_suffix () noexcept;

// void adw_preferences_group_set_separate_rows (AdwPreferencesGroup* self /*none*/, gboolean separate_rows);
// void adw_preferences_group_set_separate_rows (::AdwPreferencesGroup* self /*none*/, gboolean separate_rows);
GI_INLINE_DECL void set_separate_rows (gboolean separate_rows) noexcept;

// void adw_preferences_group_set_title (AdwPreferencesGroup* self /*none*/, const char* title /*none*/);
// void adw_preferences_group_set_title (::AdwPreferencesGroup* self /*none*/, const char* title /*none*/);
GI_INLINE_DECL void set_title (const gi::cstring_v title) noexcept;

gi::property_proxy<gi::cstring, base::PreferencesGroupBase> property_description()
{ return gi::property_proxy<gi::cstring, base::PreferencesGroupBase> (*this, "description"); }
const gi::property_proxy<gi::cstring, base::PreferencesGroupBase> property_description() const
{ return gi::property_proxy<gi::cstring, base::PreferencesGroupBase> (*this, "description"); }

gi::property_proxy<Gtk::Widget, base::PreferencesGroupBase> property_header_suffix()
{ return gi::property_proxy<Gtk::Widget, base::PreferencesGroupBase> (*this, "header-suffix"); }
const gi::property_proxy<Gtk::Widget, base::PreferencesGroupBase> property_header_suffix() const
{ return gi::property_proxy<Gtk::Widget, base::PreferencesGroupBase> (*this, "header-suffix"); }

gi::property_proxy<bool, base::PreferencesGroupBase> property_separate_rows()
{ return gi::property_proxy<bool, base::PreferencesGroupBase> (*this, "separate-rows"); }
const gi::property_proxy<bool, base::PreferencesGroupBase> property_separate_rows() const
{ return gi::property_proxy<bool, base::PreferencesGroupBase> (*this, "separate-rows"); }

gi::property_proxy<gi::cstring, base::PreferencesGroupBase> property_title()
{ return gi::property_proxy<gi::cstring, base::PreferencesGroupBase> (*this, "title"); }
const gi::property_proxy<gi::cstring, base::PreferencesGroupBase> property_title() const
{ return gi::property_proxy<gi::cstring, base::PreferencesGroupBase> (*this, "title"); }

}; // class

} // namespace base

} // namespace Adw

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<adw/preferencesgroup_extra_def.hpp>)
#include <adw/preferencesgroup_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<adw/preferencesgroup_extra.hpp>)
#include <adw/preferencesgroup_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Adw {

class PreferencesGroup : public GI_ADW_PREFERENCESGROUP_BASE
{ typedef GI_ADW_PREFERENCESGROUP_BASE super_type; using super_type::super_type; };

} // namespace Adw

template<> struct declare_cpptype_of<::AdwPreferencesGroup>
{ typedef Adw::PreferencesGroup type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Adw {

namespace impl {

namespace internal {


class PreferencesGroupClassDef
{
typedef PreferencesGroupClassDef self;
public:
typedef Adw::PreferencesGroup instance_type;
typedef ::AdwPreferencesGroupClass class_type;


struct TypeInitData;

protected:
GI_INLINE_DECL ~PreferencesGroupClassDef() = default;
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );


};

GI_CLASS_IMPL_BEGIN


class PreferencesGroupClass: public detail::ClassTemplate<Adw::impl::internal::PreferencesGroupClassDef, Gtk::impl::internal::WidgetClass>
{
friend class internal::PreferencesGroupClassDef;
typedef PreferencesGroupClass self;
typedef detail::ClassTemplate<Adw::impl::internal::PreferencesGroupClassDef, Gtk::impl::internal::WidgetClass> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types



};


struct PreferencesGroupClassDef::TypeInitData
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

using PreferencesGroupImpl = detail::ObjectImpl<PreferencesGroup, internal::PreferencesGroupClass>;

} // namespace impl

} // namespace Adw

} // namespace repository

} // namespace gi

#endif
