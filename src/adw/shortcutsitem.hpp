// AUTO-GENERATED

#ifndef _GI_ADW_SHORTCUTSITEM_HPP_
#define _GI_ADW_SHORTCUTSITEM_HPP_


namespace gi {

namespace repository {

namespace Adw {


class ShortcutsItem;

namespace base {


#define GI_ADW_SHORTCUTSITEM_BASE base::ShortcutsItemBase
class ShortcutsItemBase : public GObject::Object
{
typedef GObject::Object super_type;
public:
typedef ::AdwShortcutsItem BaseObjectType;

ShortcutsItemBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return adw_shortcuts_item_get_type(); } 

// AdwShortcutsItem* /*full*/ adw_shortcuts_item_new (const char* title /*none*/, const char* accelerator /*none*/);
// ::AdwShortcutsItem* /*full*/ adw_shortcuts_item_new (const char* title /*none*/, const char* accelerator /*none*/);
static GI_INLINE_DECL Adw::ShortcutsItem new_ (const gi::cstring_v title, const gi::cstring_v accelerator) noexcept;

// AdwShortcutsItem* /*full*/ adw_shortcuts_item_new_from_action (const char* title /*none*/, const char* action_name /*none*/);
// ::AdwShortcutsItem* /*full*/ adw_shortcuts_item_new_from_action (const char* title /*none*/, const char* action_name /*none*/);
static GI_INLINE_DECL Adw::ShortcutsItem new_from_action (const gi::cstring_v title, const gi::cstring_v action_name) noexcept;

// const char* /*none*/ adw_shortcuts_item_get_accelerator (AdwShortcutsItem* self /*none*/);
// const char* /*none*/ adw_shortcuts_item_get_accelerator (::AdwShortcutsItem* self /*none*/);
GI_INLINE_DECL gi::cstring_v get_accelerator () noexcept;

// const char* /*none*/ adw_shortcuts_item_get_action_name (AdwShortcutsItem* self /*none*/);
// const char* /*none*/ adw_shortcuts_item_get_action_name (::AdwShortcutsItem* self /*none*/);
GI_INLINE_DECL gi::cstring_v get_action_name () noexcept;

// GtkTextDirection adw_shortcuts_item_get_direction (AdwShortcutsItem* self /*none*/);
// ::GtkTextDirection adw_shortcuts_item_get_direction (::AdwShortcutsItem* self /*none*/);
GI_INLINE_DECL Gtk::TextDirection get_direction () noexcept;

// const char* /*none*/ adw_shortcuts_item_get_subtitle (AdwShortcutsItem* self /*none*/);
// const char* /*none*/ adw_shortcuts_item_get_subtitle (::AdwShortcutsItem* self /*none*/);
GI_INLINE_DECL gi::cstring_v get_subtitle () noexcept;

// const char* /*none*/ adw_shortcuts_item_get_title (AdwShortcutsItem* self /*none*/);
// const char* /*none*/ adw_shortcuts_item_get_title (::AdwShortcutsItem* self /*none*/);
GI_INLINE_DECL gi::cstring_v get_title () noexcept;

// void adw_shortcuts_item_set_accelerator (AdwShortcutsItem* self /*none*/, const char* accelerator /*none*/);
// void adw_shortcuts_item_set_accelerator (::AdwShortcutsItem* self /*none*/, const char* accelerator /*none*/);
GI_INLINE_DECL void set_accelerator (const gi::cstring_v accelerator) noexcept;

// void adw_shortcuts_item_set_action_name (AdwShortcutsItem* self /*none*/, const char* action_name /*none*/);
// void adw_shortcuts_item_set_action_name (::AdwShortcutsItem* self /*none*/, const char* action_name /*none*/);
GI_INLINE_DECL void set_action_name (const gi::cstring_v action_name) noexcept;

// void adw_shortcuts_item_set_direction (AdwShortcutsItem* self /*none*/, GtkTextDirection direction);
// void adw_shortcuts_item_set_direction (::AdwShortcutsItem* self /*none*/, ::GtkTextDirection direction);
GI_INLINE_DECL void set_direction (Gtk::TextDirection direction) noexcept;

// void adw_shortcuts_item_set_subtitle (AdwShortcutsItem* self /*none*/, const char* subtitle /*none*/);
// void adw_shortcuts_item_set_subtitle (::AdwShortcutsItem* self /*none*/, const char* subtitle /*none*/);
GI_INLINE_DECL void set_subtitle (const gi::cstring_v subtitle) noexcept;

// void adw_shortcuts_item_set_title (AdwShortcutsItem* self /*none*/, const char* title /*none*/);
// void adw_shortcuts_item_set_title (::AdwShortcutsItem* self /*none*/, const char* title /*none*/);
GI_INLINE_DECL void set_title (const gi::cstring_v title) noexcept;

gi::property_proxy<gi::cstring, base::ShortcutsItemBase> property_accelerator()
{ return gi::property_proxy<gi::cstring, base::ShortcutsItemBase> (*this, "accelerator"); }
const gi::property_proxy<gi::cstring, base::ShortcutsItemBase> property_accelerator() const
{ return gi::property_proxy<gi::cstring, base::ShortcutsItemBase> (*this, "accelerator"); }

gi::property_proxy<gi::cstring, base::ShortcutsItemBase> property_action_name()
{ return gi::property_proxy<gi::cstring, base::ShortcutsItemBase> (*this, "action-name"); }
const gi::property_proxy<gi::cstring, base::ShortcutsItemBase> property_action_name() const
{ return gi::property_proxy<gi::cstring, base::ShortcutsItemBase> (*this, "action-name"); }

gi::property_proxy<Gtk::TextDirection, base::ShortcutsItemBase> property_direction()
{ return gi::property_proxy<Gtk::TextDirection, base::ShortcutsItemBase> (*this, "direction"); }
const gi::property_proxy<Gtk::TextDirection, base::ShortcutsItemBase> property_direction() const
{ return gi::property_proxy<Gtk::TextDirection, base::ShortcutsItemBase> (*this, "direction"); }

gi::property_proxy<gi::cstring, base::ShortcutsItemBase> property_subtitle()
{ return gi::property_proxy<gi::cstring, base::ShortcutsItemBase> (*this, "subtitle"); }
const gi::property_proxy<gi::cstring, base::ShortcutsItemBase> property_subtitle() const
{ return gi::property_proxy<gi::cstring, base::ShortcutsItemBase> (*this, "subtitle"); }

gi::property_proxy<gi::cstring, base::ShortcutsItemBase> property_title()
{ return gi::property_proxy<gi::cstring, base::ShortcutsItemBase> (*this, "title"); }
const gi::property_proxy<gi::cstring, base::ShortcutsItemBase> property_title() const
{ return gi::property_proxy<gi::cstring, base::ShortcutsItemBase> (*this, "title"); }

}; // class

} // namespace base

} // namespace Adw

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<adw/shortcutsitem_extra_def.hpp>)
#include <adw/shortcutsitem_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<adw/shortcutsitem_extra.hpp>)
#include <adw/shortcutsitem_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Adw {

class ShortcutsItem : public GI_ADW_SHORTCUTSITEM_BASE
{ typedef GI_ADW_SHORTCUTSITEM_BASE super_type; using super_type::super_type; };

} // namespace Adw

template<> struct declare_cpptype_of<::AdwShortcutsItem>
{ typedef Adw::ShortcutsItem type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Adw {

namespace impl {

namespace internal {


class ShortcutsItemClassDef
{
typedef ShortcutsItemClassDef self;
public:
typedef Adw::ShortcutsItem instance_type;
typedef ::AdwShortcutsItemClass class_type;


struct TypeInitData;

protected:
GI_INLINE_DECL ~ShortcutsItemClassDef() = default;
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );


};

GI_CLASS_IMPL_BEGIN


class ShortcutsItemClass: public detail::ClassTemplate<Adw::impl::internal::ShortcutsItemClassDef, GObject::impl::internal::ObjectClass>
{
friend class internal::ShortcutsItemClassDef;
typedef ShortcutsItemClass self;
typedef detail::ClassTemplate<Adw::impl::internal::ShortcutsItemClassDef, GObject::impl::internal::ObjectClass> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types



};


struct ShortcutsItemClassDef::TypeInitData
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

using ShortcutsItemImpl = detail::ObjectImpl<ShortcutsItem, internal::ShortcutsItemClass>;

} // namespace impl

} // namespace Adw

} // namespace repository

} // namespace gi

#endif
