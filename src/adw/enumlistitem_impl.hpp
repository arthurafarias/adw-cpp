// AUTO-GENERATED

#ifndef _GI_ADW_ENUMLISTITEM_IMPL_HPP_
#define _GI_ADW_ENUMLISTITEM_IMPL_HPP_

namespace gi {

namespace repository {

namespace Adw {

namespace base {

// const char* /*none*/ adw_enum_list_item_get_name (AdwEnumListItem* self /*none*/);
// const char* /*none*/ adw_enum_list_item_get_name (::AdwEnumListItem* self /*none*/);
gi::cstring_v base::EnumListItemBase::get_name () noexcept
{
  typedef const char* (*call_wrap_t) (::AdwEnumListItem* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_enum_list_item_get_name;
  auto _temp_ret = call_wrap_v ((::AdwEnumListItem*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// const char* /*none*/ adw_enum_list_item_get_nick (AdwEnumListItem* self /*none*/);
// const char* /*none*/ adw_enum_list_item_get_nick (::AdwEnumListItem* self /*none*/);
gi::cstring_v base::EnumListItemBase::get_nick () noexcept
{
  typedef const char* (*call_wrap_t) (::AdwEnumListItem* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_enum_list_item_get_nick;
  auto _temp_ret = call_wrap_v ((::AdwEnumListItem*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// int adw_enum_list_item_get_value (AdwEnumListItem* self /*none*/);
// gint adw_enum_list_item_get_value (::AdwEnumListItem* self /*none*/);
gint base::EnumListItemBase::get_value () noexcept
{
  typedef gint (*call_wrap_t) (::AdwEnumListItem* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_enum_list_item_get_value;
  auto _temp_ret = call_wrap_v ((::AdwEnumListItem*) (gobj_()));
  return _temp_ret;
}


} // namespace base

} // namespace Adw

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<adw/enumlistitem_extra_def_impl.hpp>)
#include <adw/enumlistitem_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<adw/enumlistitem_extra_impl.hpp>)
#include <adw/enumlistitem_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Adw {

namespace impl {

namespace internal {

void EnumListItemClassDef::class_init (gpointer class_struct, gpointer factory)
{
  ::AdwEnumListItemClass *methods = (::AdwEnumListItemClass *) class_struct;
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
