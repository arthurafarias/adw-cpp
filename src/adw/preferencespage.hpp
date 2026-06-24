// AUTO-GENERATED

#ifndef _GI_ADW_PREFERENCESPAGE_HPP_
#define _GI_ADW_PREFERENCESPAGE_HPP_


namespace gi {

namespace repository {

namespace Adw {

class Banner;
class PreferencesGroup;

class PreferencesPage;

namespace base {


#define GI_ADW_PREFERENCESPAGE_BASE base::PreferencesPageBase
class PreferencesPageBase : public Gtk::Widget
{
typedef Gtk::Widget super_type;
public:
typedef ::AdwPreferencesPage BaseObjectType;

PreferencesPageBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return adw_preferences_page_get_type(); } 

// GtkWidget* /*none*/ adw_preferences_page_new ();
// ::AdwPreferencesPage* /*none*/ adw_preferences_page_new ();
static GI_INLINE_DECL Adw::PreferencesPage new_ () noexcept;

// void adw_preferences_page_add (AdwPreferencesPage* self /*none*/, AdwPreferencesGroup* group /*none*/);
// void adw_preferences_page_add (::AdwPreferencesPage* self /*none*/, ::AdwPreferencesGroup* group /*none*/);
GI_INLINE_DECL void add (Adw::PreferencesGroup group) noexcept;

// AdwBanner* /*none,nullable*/ adw_preferences_page_get_banner (AdwPreferencesPage* self /*none*/);
// ::AdwBanner* /*none,nullable*/ adw_preferences_page_get_banner (::AdwPreferencesPage* self /*none*/);
GI_INLINE_DECL Adw::Banner get_banner () noexcept;

// const char* /*none*/ adw_preferences_page_get_description (AdwPreferencesPage* self /*none*/);
// const char* /*none*/ adw_preferences_page_get_description (::AdwPreferencesPage* self /*none*/);
GI_INLINE_DECL gi::cstring_v get_description () noexcept;

// gboolean adw_preferences_page_get_description_centered (AdwPreferencesPage* self /*none*/);
// gboolean adw_preferences_page_get_description_centered (::AdwPreferencesPage* self /*none*/);
GI_INLINE_DECL bool get_description_centered () noexcept;

// AdwPreferencesGroup* /*none,nullable*/ adw_preferences_page_get_group (AdwPreferencesPage* self /*none*/, guint index);
// ::AdwPreferencesGroup* /*none,nullable*/ adw_preferences_page_get_group (::AdwPreferencesPage* self /*none*/, guint index);
GI_INLINE_DECL Adw::PreferencesGroup get_group (guint index) noexcept;

// const char* /*none,nullable*/ adw_preferences_page_get_icon_name (AdwPreferencesPage* self /*none*/);
// const char* /*none,nullable*/ adw_preferences_page_get_icon_name (::AdwPreferencesPage* self /*none*/);
GI_INLINE_DECL gi::cstring_v get_icon_name () noexcept;

// const char* /*none,nullable*/ adw_preferences_page_get_name (AdwPreferencesPage* self /*none*/);
// const char* /*none,nullable*/ adw_preferences_page_get_name (::AdwPreferencesPage* self /*none*/);
GI_INLINE_DECL gi::cstring_v get_name () noexcept;

// const char* /*none*/ adw_preferences_page_get_title (AdwPreferencesPage* self /*none*/);
// const char* /*none*/ adw_preferences_page_get_title (::AdwPreferencesPage* self /*none*/);
GI_INLINE_DECL gi::cstring_v get_title () noexcept;

// gboolean adw_preferences_page_get_use_underline (AdwPreferencesPage* self /*none*/);
// gboolean adw_preferences_page_get_use_underline (::AdwPreferencesPage* self /*none*/);
GI_INLINE_DECL bool get_use_underline () noexcept;

// void adw_preferences_page_insert (AdwPreferencesPage* self /*none*/, AdwPreferencesGroup* group /*none*/, int index);
// void adw_preferences_page_insert (::AdwPreferencesPage* self /*none*/, ::AdwPreferencesGroup* group /*none*/, gint index);
GI_INLINE_DECL void insert (Adw::PreferencesGroup group, gint index) noexcept;

// void adw_preferences_page_remove (AdwPreferencesPage* self /*none*/, AdwPreferencesGroup* group /*none*/);
// void adw_preferences_page_remove (::AdwPreferencesPage* self /*none*/, ::AdwPreferencesGroup* group /*none*/);
GI_INLINE_DECL void remove (Adw::PreferencesGroup group) noexcept;

// void adw_preferences_page_scroll_to_top (AdwPreferencesPage* self /*none*/);
// void adw_preferences_page_scroll_to_top (::AdwPreferencesPage* self /*none*/);
GI_INLINE_DECL void scroll_to_top () noexcept;

// void adw_preferences_page_set_banner (AdwPreferencesPage* self /*none*/, AdwBanner* banner /*none,nullable*/);
// void adw_preferences_page_set_banner (::AdwPreferencesPage* self /*none*/, ::AdwBanner* banner /*none,nullable*/);
GI_INLINE_DECL void set_banner (Adw::Banner banner) noexcept;
GI_INLINE_DECL void set_banner () noexcept;

// void adw_preferences_page_set_description (AdwPreferencesPage* self /*none*/, const char* description /*none*/);
// void adw_preferences_page_set_description (::AdwPreferencesPage* self /*none*/, const char* description /*none*/);
GI_INLINE_DECL void set_description (const gi::cstring_v description) noexcept;

// void adw_preferences_page_set_description_centered (AdwPreferencesPage* self /*none*/, gboolean centered);
// void adw_preferences_page_set_description_centered (::AdwPreferencesPage* self /*none*/, gboolean centered);
GI_INLINE_DECL void set_description_centered (gboolean centered) noexcept;

// void adw_preferences_page_set_icon_name (AdwPreferencesPage* self /*none*/, const char* icon_name /*none,nullable*/);
// void adw_preferences_page_set_icon_name (::AdwPreferencesPage* self /*none*/, const char* icon_name /*none,nullable*/);
GI_INLINE_DECL void set_icon_name (const gi::cstring_v icon_name) noexcept;
GI_INLINE_DECL void set_icon_name () noexcept;

// void adw_preferences_page_set_name (AdwPreferencesPage* self /*none*/, const char* name /*none,nullable*/);
// void adw_preferences_page_set_name (::AdwPreferencesPage* self /*none*/, const char* name /*none,nullable*/);
GI_INLINE_DECL void set_name (const gi::cstring_v name) noexcept;
GI_INLINE_DECL void set_name () noexcept;

// void adw_preferences_page_set_title (AdwPreferencesPage* self /*none*/, const char* title /*none*/);
// void adw_preferences_page_set_title (::AdwPreferencesPage* self /*none*/, const char* title /*none*/);
GI_INLINE_DECL void set_title (const gi::cstring_v title) noexcept;

// void adw_preferences_page_set_use_underline (AdwPreferencesPage* self /*none*/, gboolean use_underline);
// void adw_preferences_page_set_use_underline (::AdwPreferencesPage* self /*none*/, gboolean use_underline);
GI_INLINE_DECL void set_use_underline (gboolean use_underline) noexcept;

gi::property_proxy<Adw::Banner, base::PreferencesPageBase> property_banner()
{ return gi::property_proxy<Adw::Banner, base::PreferencesPageBase> (*this, "banner"); }
const gi::property_proxy<Adw::Banner, base::PreferencesPageBase> property_banner() const
{ return gi::property_proxy<Adw::Banner, base::PreferencesPageBase> (*this, "banner"); }

gi::property_proxy<gi::cstring, base::PreferencesPageBase> property_description()
{ return gi::property_proxy<gi::cstring, base::PreferencesPageBase> (*this, "description"); }
const gi::property_proxy<gi::cstring, base::PreferencesPageBase> property_description() const
{ return gi::property_proxy<gi::cstring, base::PreferencesPageBase> (*this, "description"); }

gi::property_proxy<bool, base::PreferencesPageBase> property_description_centered()
{ return gi::property_proxy<bool, base::PreferencesPageBase> (*this, "description-centered"); }
const gi::property_proxy<bool, base::PreferencesPageBase> property_description_centered() const
{ return gi::property_proxy<bool, base::PreferencesPageBase> (*this, "description-centered"); }

gi::property_proxy<gi::cstring, base::PreferencesPageBase> property_icon_name()
{ return gi::property_proxy<gi::cstring, base::PreferencesPageBase> (*this, "icon-name"); }
const gi::property_proxy<gi::cstring, base::PreferencesPageBase> property_icon_name() const
{ return gi::property_proxy<gi::cstring, base::PreferencesPageBase> (*this, "icon-name"); }

gi::property_proxy<gi::cstring, base::PreferencesPageBase> property_name()
{ return gi::property_proxy<gi::cstring, base::PreferencesPageBase> (*this, "name"); }
const gi::property_proxy<gi::cstring, base::PreferencesPageBase> property_name() const
{ return gi::property_proxy<gi::cstring, base::PreferencesPageBase> (*this, "name"); }

gi::property_proxy<gi::cstring, base::PreferencesPageBase> property_title()
{ return gi::property_proxy<gi::cstring, base::PreferencesPageBase> (*this, "title"); }
const gi::property_proxy<gi::cstring, base::PreferencesPageBase> property_title() const
{ return gi::property_proxy<gi::cstring, base::PreferencesPageBase> (*this, "title"); }

gi::property_proxy<bool, base::PreferencesPageBase> property_use_underline()
{ return gi::property_proxy<bool, base::PreferencesPageBase> (*this, "use-underline"); }
const gi::property_proxy<bool, base::PreferencesPageBase> property_use_underline() const
{ return gi::property_proxy<bool, base::PreferencesPageBase> (*this, "use-underline"); }

}; // class

} // namespace base

} // namespace Adw

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<adw/preferencespage_extra_def.hpp>)
#include <adw/preferencespage_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<adw/preferencespage_extra.hpp>)
#include <adw/preferencespage_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Adw {

class PreferencesPage : public GI_ADW_PREFERENCESPAGE_BASE
{ typedef GI_ADW_PREFERENCESPAGE_BASE super_type; using super_type::super_type; };

} // namespace Adw

template<> struct declare_cpptype_of<::AdwPreferencesPage>
{ typedef Adw::PreferencesPage type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Adw {

namespace impl {

namespace internal {


class PreferencesPageClassDef
{
typedef PreferencesPageClassDef self;
public:
typedef Adw::PreferencesPage instance_type;
typedef ::AdwPreferencesPageClass class_type;


struct TypeInitData;

protected:
GI_INLINE_DECL ~PreferencesPageClassDef() = default;
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );


};

GI_CLASS_IMPL_BEGIN


class PreferencesPageClass: public detail::ClassTemplate<Adw::impl::internal::PreferencesPageClassDef, Gtk::impl::internal::WidgetClass>
{
friend class internal::PreferencesPageClassDef;
typedef PreferencesPageClass self;
typedef detail::ClassTemplate<Adw::impl::internal::PreferencesPageClassDef, Gtk::impl::internal::WidgetClass> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types



};


struct PreferencesPageClassDef::TypeInitData
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

using PreferencesPageImpl = detail::ObjectImpl<PreferencesPage, internal::PreferencesPageClass>;

} // namespace impl

} // namespace Adw

} // namespace repository

} // namespace gi

#endif
