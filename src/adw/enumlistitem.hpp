// AUTO-GENERATED

#ifndef _GI_ADW_ENUMLISTITEM_HPP_
#define _GI_ADW_ENUMLISTITEM_HPP_


namespace gi {

namespace repository {

namespace Adw {


class EnumListItem;

namespace base {


#define GI_ADW_ENUMLISTITEM_BASE base::EnumListItemBase
class EnumListItemBase : public GObject::Object
{
typedef GObject::Object super_type;
public:
typedef ::AdwEnumListItem BaseObjectType;

EnumListItemBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return adw_enum_list_item_get_type(); } 

// const char* /*none*/ adw_enum_list_item_get_name (AdwEnumListItem* self /*none*/);
// const char* /*none*/ adw_enum_list_item_get_name (::AdwEnumListItem* self /*none*/);
GI_INLINE_DECL gi::cstring_v get_name () noexcept;

// const char* /*none*/ adw_enum_list_item_get_nick (AdwEnumListItem* self /*none*/);
// const char* /*none*/ adw_enum_list_item_get_nick (::AdwEnumListItem* self /*none*/);
GI_INLINE_DECL gi::cstring_v get_nick () noexcept;

// int adw_enum_list_item_get_value (AdwEnumListItem* self /*none*/);
// gint adw_enum_list_item_get_value (::AdwEnumListItem* self /*none*/);
GI_INLINE_DECL gint get_value () noexcept;

gi::property_proxy<gi::cstring, base::EnumListItemBase> property_name()
{ return gi::property_proxy<gi::cstring, base::EnumListItemBase> (*this, "name"); }
const gi::property_proxy<gi::cstring, base::EnumListItemBase> property_name() const
{ return gi::property_proxy<gi::cstring, base::EnumListItemBase> (*this, "name"); }

gi::property_proxy<gi::cstring, base::EnumListItemBase> property_nick()
{ return gi::property_proxy<gi::cstring, base::EnumListItemBase> (*this, "nick"); }
const gi::property_proxy<gi::cstring, base::EnumListItemBase> property_nick() const
{ return gi::property_proxy<gi::cstring, base::EnumListItemBase> (*this, "nick"); }

gi::property_proxy<gint, base::EnumListItemBase> property_value()
{ return gi::property_proxy<gint, base::EnumListItemBase> (*this, "value"); }
const gi::property_proxy<gint, base::EnumListItemBase> property_value() const
{ return gi::property_proxy<gint, base::EnumListItemBase> (*this, "value"); }

}; // class

} // namespace base

} // namespace Adw

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<adw/enumlistitem_extra_def.hpp>)
#include <adw/enumlistitem_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<adw/enumlistitem_extra.hpp>)
#include <adw/enumlistitem_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Adw {

class EnumListItem : public GI_ADW_ENUMLISTITEM_BASE
{ typedef GI_ADW_ENUMLISTITEM_BASE super_type; using super_type::super_type; };

} // namespace Adw

template<> struct declare_cpptype_of<::AdwEnumListItem>
{ typedef Adw::EnumListItem type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Adw {

namespace impl {

namespace internal {


class EnumListItemClassDef
{
typedef EnumListItemClassDef self;
public:
typedef Adw::EnumListItem instance_type;
typedef ::AdwEnumListItemClass class_type;


struct TypeInitData;

protected:
GI_INLINE_DECL ~EnumListItemClassDef() = default;
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );


};

GI_CLASS_IMPL_BEGIN


class EnumListItemClass: public detail::ClassTemplate<Adw::impl::internal::EnumListItemClassDef, GObject::impl::internal::ObjectClass>
{
friend class internal::EnumListItemClassDef;
typedef EnumListItemClass self;
typedef detail::ClassTemplate<Adw::impl::internal::EnumListItemClassDef, GObject::impl::internal::ObjectClass> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types



};


struct EnumListItemClassDef::TypeInitData
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

using EnumListItemImpl = detail::ObjectImpl<EnumListItem, internal::EnumListItemClass>;

} // namespace impl

} // namespace Adw

} // namespace repository

} // namespace gi

#endif
