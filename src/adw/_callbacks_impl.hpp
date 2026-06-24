// AUTO-GENERATED

#ifndef _GI_ADW__CALLBACKS_IMPL_HPP_
#define _GI_ADW__CALLBACKS_IMPL_HPP_

namespace gi {

namespace repository {

namespace Adw {

// typedef void (*AdwAnimationTargetFunc) (double value, gpointer user_data);
// typedef void (*AdwAnimationTargetFunc) (gdouble value, void* user_data);
namespace internal {

void AnimationTargetFunc_CF (gdouble value, AnimationTargetFunc_CF_CType _call, gpointer user_data) noexcept
{
  auto user_data_to_c = user_data;
  auto value_to_c = value;
  _call ((gdouble) (value_to_c), (void*) (user_data_to_c));
}
} // namespace internal


// typedef AdwSidebarItem* /*full*/ (*AdwSidebarSectionCreateItemFunc) (gpointer item /*none*/, gpointer user_data);
// typedef ::AdwSidebarItem* /*full*/ (*AdwSidebarSectionCreateItemFunc) (::GObject* item /*none*/, void* user_data);
namespace internal {

Adw::SidebarItem SidebarSectionCreateItemFunc_CF (GObject::Object item, SidebarSectionCreateItemFunc_CF_CType _call, gpointer user_data) noexcept
{
  auto user_data_to_c = user_data;
  auto item_to_c = gi::unwrap (item, gi::transfer_none);
  auto _temp_ret = _call ((::GObject*) (item_to_c), (void*) (user_data_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}
} // namespace internal


} // namespace Adw

} // namespace repository

} // namespace gi

#endif
