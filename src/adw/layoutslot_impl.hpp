// AUTO-GENERATED

#ifndef _GI_ADW_LAYOUTSLOT_IMPL_HPP_
#define _GI_ADW_LAYOUTSLOT_IMPL_HPP_

namespace gi {

namespace repository {

namespace Adw {

namespace base {

// GtkWidget* /*none*/ adw_layout_slot_new (const char* id /*none*/);
// ::AdwLayoutSlot* /*none*/ adw_layout_slot_new (const char* id /*none*/);
Adw::LayoutSlot base::LayoutSlotBase::new_ (const gi::cstring_v id) noexcept
{
  typedef ::AdwLayoutSlot* (*call_wrap_t) (const char* id);
  call_wrap_t call_wrap_v = (call_wrap_t) adw_layout_slot_new;
  auto id_to_c = gi::unwrap (id, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const char*) (id_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// const char* /*none*/ adw_layout_slot_get_slot_id (AdwLayoutSlot* self /*none*/);
// const char* /*none*/ adw_layout_slot_get_slot_id (::AdwLayoutSlot* self /*none*/);
gi::cstring_v base::LayoutSlotBase::get_slot_id () noexcept
{
  typedef const char* (*call_wrap_t) (::AdwLayoutSlot* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_layout_slot_get_slot_id;
  auto _temp_ret = call_wrap_v ((::AdwLayoutSlot*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}


} // namespace base

} // namespace Adw

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<adw/layoutslot_extra_def_impl.hpp>)
#include <adw/layoutslot_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<adw/layoutslot_extra_impl.hpp>)
#include <adw/layoutslot_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Adw {

namespace impl {

namespace internal {

void LayoutSlotClassDef::class_init (gpointer class_struct, gpointer factory)
{
  ::AdwLayoutSlotClass *methods = (::AdwLayoutSlotClass *) class_struct;
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
