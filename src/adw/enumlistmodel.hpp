// AUTO-GENERATED

#ifndef _GI_ADW_ENUMLISTMODEL_HPP_
#define _GI_ADW_ENUMLISTMODEL_HPP_


namespace gi {

namespace repository {

namespace Adw {


class EnumListModel;

namespace base {


#define GI_ADW_ENUMLISTMODEL_BASE base::EnumListModelBase
class EnumListModelBase : public GObject::Object
{
typedef GObject::Object super_type;
public:
typedef ::AdwEnumListModel BaseObjectType;

EnumListModelBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return adw_enum_list_model_get_type(); } 

GI_INLINE_DECL Gio::ListModel interface_ (gi::interface_tag<Gio::ListModel>);

GI_INLINE_DECL operator Gio::ListModel ();

// AdwEnumListModel* /*full*/ adw_enum_list_model_new (GType enum_type);
// ::AdwEnumListModel* /*full*/ adw_enum_list_model_new (GType enum_type);
static GI_INLINE_DECL Adw::EnumListModel new_ (GType enum_type) noexcept;

// guint adw_enum_list_model_find_position (AdwEnumListModel* self /*none*/, int value);
// guint adw_enum_list_model_find_position (::AdwEnumListModel* self /*none*/, gint value);
GI_INLINE_DECL guint find_position (gint value) noexcept;

// GType adw_enum_list_model_get_enum_type (AdwEnumListModel* self /*none*/);
// GType adw_enum_list_model_get_enum_type (::AdwEnumListModel* self /*none*/);
GI_INLINE_DECL GType get_enum_type () noexcept;

gi::property_proxy<GType, base::EnumListModelBase> property_enum_type()
{ return gi::property_proxy<GType, base::EnumListModelBase> (*this, "enum-type"); }
const gi::property_proxy<GType, base::EnumListModelBase> property_enum_type() const
{ return gi::property_proxy<GType, base::EnumListModelBase> (*this, "enum-type"); }

gi::property_proxy<GType, base::EnumListModelBase> property_item_type()
{ return gi::property_proxy<GType, base::EnumListModelBase> (*this, "item-type"); }
const gi::property_proxy<GType, base::EnumListModelBase> property_item_type() const
{ return gi::property_proxy<GType, base::EnumListModelBase> (*this, "item-type"); }

gi::property_proxy<guint, base::EnumListModelBase> property_n_items()
{ return gi::property_proxy<guint, base::EnumListModelBase> (*this, "n-items"); }
const gi::property_proxy<guint, base::EnumListModelBase> property_n_items() const
{ return gi::property_proxy<guint, base::EnumListModelBase> (*this, "n-items"); }

}; // class

} // namespace base

} // namespace Adw

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<adw/enumlistmodel_extra_def.hpp>)
#include <adw/enumlistmodel_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<adw/enumlistmodel_extra.hpp>)
#include <adw/enumlistmodel_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Adw {

class EnumListModel : public GI_ADW_ENUMLISTMODEL_BASE
{ typedef GI_ADW_ENUMLISTMODEL_BASE super_type; using super_type::super_type; };

} // namespace Adw

template<> struct declare_cpptype_of<::AdwEnumListModel>
{ typedef Adw::EnumListModel type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Adw {

namespace impl {

namespace internal {


class EnumListModelClassDef
{
typedef EnumListModelClassDef self;
public:
typedef Adw::EnumListModel instance_type;
typedef ::AdwEnumListModelClass class_type;


struct TypeInitData;

protected:
GI_INLINE_DECL ~EnumListModelClassDef() = default;
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );


};

GI_CLASS_IMPL_BEGIN


class EnumListModelClass: public detail::ClassTemplate<Adw::impl::internal::EnumListModelClassDef, GObject::impl::internal::ObjectClass, Gio::impl::internal::ListModelInterfaceClassImpl>
{
friend class internal::EnumListModelClassDef;
typedef EnumListModelClass self;
typedef detail::ClassTemplate<Adw::impl::internal::EnumListModelClassDef, GObject::impl::internal::ObjectClass, Gio::impl::internal::ListModelInterfaceClassImpl> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types
typedef Gio::impl::internal::ListModelInterfaceClassImpl GListModelInterface_type;



};


struct EnumListModelClassDef::TypeInitData
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

using EnumListModelImpl = detail::ObjectImpl<EnumListModel, internal::EnumListModelClass>;

} // namespace impl

} // namespace Adw

} // namespace repository

} // namespace gi

#endif
