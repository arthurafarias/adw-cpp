// AUTO-GENERATED

#ifndef _GI_ADW_SHORTCUTSSECTION_HPP_
#define _GI_ADW_SHORTCUTSSECTION_HPP_


namespace gi {

namespace repository {

namespace Adw {

class ShortcutsItem;

class ShortcutsSection;

namespace base {


#define GI_ADW_SHORTCUTSSECTION_BASE base::ShortcutsSectionBase
class ShortcutsSectionBase : public GObject::Object
{
typedef GObject::Object super_type;
public:
typedef ::AdwShortcutsSection BaseObjectType;

ShortcutsSectionBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return adw_shortcuts_section_get_type(); } 

GI_INLINE_DECL Gio::ListModel interface_ (gi::interface_tag<Gio::ListModel>);

GI_INLINE_DECL operator Gio::ListModel ();

GI_INLINE_DECL Gtk::Buildable interface_ (gi::interface_tag<Gtk::Buildable>);

GI_INLINE_DECL operator Gtk::Buildable ();

// AdwShortcutsSection* /*full*/ adw_shortcuts_section_new (const char* title /*none,nullable*/);
// ::AdwShortcutsSection* /*full*/ adw_shortcuts_section_new (const char* title /*none,nullable*/);
static GI_INLINE_DECL Adw::ShortcutsSection new_ (const gi::cstring_v title) noexcept;
static GI_INLINE_DECL Adw::ShortcutsSection new_ () noexcept;

// void adw_shortcuts_section_add (AdwShortcutsSection* self /*none*/, AdwShortcutsItem* item /*full*/);
// void adw_shortcuts_section_add (::AdwShortcutsSection* self /*none*/, ::AdwShortcutsItem* item /*full*/);
GI_INLINE_DECL void add (Adw::ShortcutsItem item) noexcept;

// const char* /*none,nullable*/ adw_shortcuts_section_get_title (AdwShortcutsSection* self /*none*/);
// const char* /*none,nullable*/ adw_shortcuts_section_get_title (::AdwShortcutsSection* self /*none*/);
GI_INLINE_DECL gi::cstring_v get_title () noexcept;

// void adw_shortcuts_section_set_title (AdwShortcutsSection* self /*none*/, const char* title /*none,nullable*/);
// void adw_shortcuts_section_set_title (::AdwShortcutsSection* self /*none*/, const char* title /*none,nullable*/);
GI_INLINE_DECL void set_title (const gi::cstring_v title) noexcept;
GI_INLINE_DECL void set_title () noexcept;

gi::property_proxy<GType, base::ShortcutsSectionBase> property_item_type()
{ return gi::property_proxy<GType, base::ShortcutsSectionBase> (*this, "item-type"); }
const gi::property_proxy<GType, base::ShortcutsSectionBase> property_item_type() const
{ return gi::property_proxy<GType, base::ShortcutsSectionBase> (*this, "item-type"); }

gi::property_proxy<guint, base::ShortcutsSectionBase> property_n_items()
{ return gi::property_proxy<guint, base::ShortcutsSectionBase> (*this, "n-items"); }
const gi::property_proxy<guint, base::ShortcutsSectionBase> property_n_items() const
{ return gi::property_proxy<guint, base::ShortcutsSectionBase> (*this, "n-items"); }

gi::property_proxy<gi::cstring, base::ShortcutsSectionBase> property_title()
{ return gi::property_proxy<gi::cstring, base::ShortcutsSectionBase> (*this, "title"); }
const gi::property_proxy<gi::cstring, base::ShortcutsSectionBase> property_title() const
{ return gi::property_proxy<gi::cstring, base::ShortcutsSectionBase> (*this, "title"); }

}; // class

} // namespace base

} // namespace Adw

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<adw/shortcutssection_extra_def.hpp>)
#include <adw/shortcutssection_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<adw/shortcutssection_extra.hpp>)
#include <adw/shortcutssection_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Adw {

class ShortcutsSection : public GI_ADW_SHORTCUTSSECTION_BASE
{ typedef GI_ADW_SHORTCUTSSECTION_BASE super_type; using super_type::super_type; };

} // namespace Adw

template<> struct declare_cpptype_of<::AdwShortcutsSection>
{ typedef Adw::ShortcutsSection type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Adw {

namespace impl {

namespace internal {


class ShortcutsSectionClassDef
{
typedef ShortcutsSectionClassDef self;
public:
typedef Adw::ShortcutsSection instance_type;
typedef ::AdwShortcutsSectionClass class_type;


struct TypeInitData;

protected:
GI_INLINE_DECL ~ShortcutsSectionClassDef() = default;
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );


};

GI_CLASS_IMPL_BEGIN


class ShortcutsSectionClass: public detail::ClassTemplate<Adw::impl::internal::ShortcutsSectionClassDef, GObject::impl::internal::ObjectClass, Gio::impl::internal::ListModelInterfaceClassImpl, Gtk::impl::internal::BuildableIfaceClassImpl>
{
friend class internal::ShortcutsSectionClassDef;
typedef ShortcutsSectionClass self;
typedef detail::ClassTemplate<Adw::impl::internal::ShortcutsSectionClassDef, GObject::impl::internal::ObjectClass, Gio::impl::internal::ListModelInterfaceClassImpl, Gtk::impl::internal::BuildableIfaceClassImpl> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types
typedef Gio::impl::internal::ListModelInterfaceClassImpl GListModelInterface_type;
typedef Gtk::impl::internal::BuildableIfaceClassImpl GtkBuildableIface_type;



};


struct ShortcutsSectionClassDef::TypeInitData
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

using ShortcutsSectionImpl = detail::ObjectImpl<ShortcutsSection, internal::ShortcutsSectionClass>;

} // namespace impl

} // namespace Adw

} // namespace repository

} // namespace gi

#endif
