// AUTO-GENERATED

#ifndef _GI_ADW__CALLBACKS_HPP_
#define _GI_ADW__CALLBACKS_HPP_

namespace gi {

namespace repository {

namespace Adw {

class SidebarItem;

// typedef void (*AdwAnimationTargetFunc) (double value, gpointer user_data);
// typedef void (*AdwAnimationTargetFunc) (gdouble value, void* user_data);
namespace internal {

typedef void (*AnimationTargetFunc_CF_CType) (gdouble value, void* user_data);
GI_INLINE_DECL void AnimationTargetFunc_CF (gdouble value, AnimationTargetFunc_CF_CType _call, gpointer user_data) noexcept;
GI_CB_ARG_CALLBACK_CUSTOM(AnimationTargetFunc_CB_Trait, AnimationTargetFunc_CF_CType, AnimationTargetFunc_CF);
} // namespace internal

typedef gi::detail::callback<void(gdouble value), gi::transfer_full_t, std::tuple<gi::transfer_none_t>> AnimationTargetFunc;

// typedef AdwSidebarItem* /*full*/ (*AdwSidebarSectionCreateItemFunc) (gpointer item /*none*/, gpointer user_data);
// typedef ::AdwSidebarItem* /*full*/ (*AdwSidebarSectionCreateItemFunc) (::GObject* item /*none*/, void* user_data);
namespace internal {

typedef ::AdwSidebarItem* (*SidebarSectionCreateItemFunc_CF_CType) (::GObject* item, void* user_data);
GI_INLINE_DECL Adw::SidebarItem SidebarSectionCreateItemFunc_CF (GObject::Object item, SidebarSectionCreateItemFunc_CF_CType _call, gpointer user_data) noexcept;
GI_CB_ARG_CALLBACK_CUSTOM(SidebarSectionCreateItemFunc_CB_Trait, SidebarSectionCreateItemFunc_CF_CType, SidebarSectionCreateItemFunc_CF);
} // namespace internal

typedef gi::detail::callback<Adw::SidebarItem(GObject::Object item), gi::transfer_full_t, std::tuple<gi::transfer_none_t>> SidebarSectionCreateItemFunc;

} // namespace Adw

} // namespace repository

} // namespace gi

#endif
