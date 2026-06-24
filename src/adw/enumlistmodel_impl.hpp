// AUTO-GENERATED

#ifndef _GI_ADW_ENUMLISTMODEL_IMPL_HPP_
#define _GI_ADW_ENUMLISTMODEL_IMPL_HPP_

namespace gi {

namespace repository {

namespace Adw {

namespace base {

Gio::ListModel EnumListModelBase::interface_ (gi::interface_tag<Gio::ListModel>)
{ return gi::wrap ((Gio::ListModel::BaseObjectType*) gobj_copy_(), gi::transfer_full); }

EnumListModelBase::operator Gio::ListModel ()
{ return interface_ (gi::interface_tag<Gio::ListModel>()); }

// AdwEnumListModel* /*full*/ adw_enum_list_model_new (GType enum_type);
// ::AdwEnumListModel* /*full*/ adw_enum_list_model_new (GType enum_type);
Adw::EnumListModel base::EnumListModelBase::new_ (GType enum_type) noexcept
{
  typedef ::AdwEnumListModel* (*call_wrap_t) (GType enum_type);
  call_wrap_t call_wrap_v = (call_wrap_t) adw_enum_list_model_new;
  auto enum_type_to_c = enum_type;
  auto _temp_ret = call_wrap_v ((GType) (enum_type_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// guint adw_enum_list_model_find_position (AdwEnumListModel* self /*none*/, int value);
// guint adw_enum_list_model_find_position (::AdwEnumListModel* self /*none*/, gint value);
guint base::EnumListModelBase::find_position (gint value) noexcept
{
  typedef guint (*call_wrap_t) (::AdwEnumListModel* self, gint value);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_enum_list_model_find_position;
  auto value_to_c = value;
  auto _temp_ret = call_wrap_v ((::AdwEnumListModel*) (gobj_()), (gint) (value_to_c));
  return _temp_ret;
}

// GType adw_enum_list_model_get_enum_type (AdwEnumListModel* self /*none*/);
// GType adw_enum_list_model_get_enum_type (::AdwEnumListModel* self /*none*/);
GType base::EnumListModelBase::get_enum_type () noexcept
{
  typedef GType (*call_wrap_t) (::AdwEnumListModel* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_enum_list_model_get_enum_type;
  auto _temp_ret = call_wrap_v ((::AdwEnumListModel*) (gobj_()));
  return _temp_ret;
}


} // namespace base

} // namespace Adw

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<adw/enumlistmodel_extra_def_impl.hpp>)
#include <adw/enumlistmodel_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<adw/enumlistmodel_extra_impl.hpp>)
#include <adw/enumlistmodel_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Adw {

namespace impl {

namespace internal {

void EnumListModelClassDef::class_init (gpointer class_struct, gpointer factory)
{
  ::AdwEnumListModelClass *methods = (::AdwEnumListModelClass *) class_struct;
  (void) methods;

  auto init_data = GI_MEMBER_INIT_DATA(TypeInitData, factory);
  (void) init_data;

}

} // namespace internal

} // namespace impl

} // namespace Adw

} // namespace repository

} // namespace gi

#endif
