// AUTO-GENERATED

#ifndef _GI_GDK_COLORSTATE_HPP_
#define _GI_GDK_COLORSTATE_HPP_


namespace gi {

namespace repository {

namespace Gdk {

class CicpParams;
class ColorState_Ref;

class ColorState;

namespace base {


#define GI_GDK_COLORSTATE_BASE base::ColorStateBase
class ColorStateBase : public gi::detail::GBoxedWrapperBase<ColorStateBase, ::GdkColorState>
{
typedef gi::detail::GBoxedWrapperBase<ColorStateBase, ::GdkColorState> super_type;
public:

ColorStateBase (std::nullptr_t = nullptr) : super_type() {}

static GType get_type_ () G_GNUC_CONST { return gdk_color_state_get_type(); } 

// GdkCicpParams* /*full,nullable*/ gdk_color_state_create_cicp_params (GdkColorState* self /*none*/);
// ::GdkCicpParams* /*full,nullable*/ gdk_color_state_create_cicp_params (::GdkColorState* self /*none*/);
GI_INLINE_DECL Gdk::CicpParams create_cicp_params () noexcept;

// gboolean gdk_color_state_equal (GdkColorState* self /*none*/, GdkColorState* other /*none*/);
// gboolean gdk_color_state_equal (::GdkColorState* self /*none*/, ::GdkColorState* other /*none*/);
GI_INLINE_DECL bool equal (Gdk::ColorState_Ref other) noexcept;

// gboolean gdk_color_state_equivalent (GdkColorState* self /*none*/, GdkColorState* other /*none*/);
// gboolean gdk_color_state_equivalent (::GdkColorState* self /*none*/, ::GdkColorState* other /*none*/);
GI_INLINE_DECL bool equivalent (Gdk::ColorState_Ref other) noexcept;

// GdkColorState* /*full*/ gdk_color_state_ref (GdkColorState* self /*none*/);
// ::GdkColorState* /*full*/ gdk_color_state_ref (::GdkColorState* self /*none*/);
// IGNORE; marked ignore

// void gdk_color_state_unref (GdkColorState* self /*none*/);
// void gdk_color_state_unref (::GdkColorState* self /*none*/);
// IGNORE; marked ignore

// GdkColorState* /*full*/ gdk_color_state_get_oklab ();
// ::GdkColorState* /*full*/ gdk_color_state_get_oklab ();
static GI_INLINE_DECL Gdk::ColorState get_oklab () noexcept;

// GdkColorState* /*full*/ gdk_color_state_get_oklch ();
// ::GdkColorState* /*full*/ gdk_color_state_get_oklch ();
static GI_INLINE_DECL Gdk::ColorState get_oklch () noexcept;

// GdkColorState* /*full*/ gdk_color_state_get_rec2100_linear ();
// ::GdkColorState* /*full*/ gdk_color_state_get_rec2100_linear ();
static GI_INLINE_DECL Gdk::ColorState get_rec2100_linear () noexcept;

// GdkColorState* /*full*/ gdk_color_state_get_rec2100_pq ();
// ::GdkColorState* /*full*/ gdk_color_state_get_rec2100_pq ();
static GI_INLINE_DECL Gdk::ColorState get_rec2100_pq () noexcept;

// GdkColorState* /*full*/ gdk_color_state_get_srgb ();
// ::GdkColorState* /*full*/ gdk_color_state_get_srgb ();
static GI_INLINE_DECL Gdk::ColorState get_srgb () noexcept;

// GdkColorState* /*full*/ gdk_color_state_get_srgb_linear ();
// ::GdkColorState* /*full*/ gdk_color_state_get_srgb_linear ();
static GI_INLINE_DECL Gdk::ColorState get_srgb_linear () noexcept;

}; // class

} // namespace base

} // namespace Gdk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gdk/colorstate_extra_def.hpp>)
#include <gdk/colorstate_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gdk/colorstate_extra.hpp>)
#include <gdk/colorstate_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gdk {

class ColorState_Ref;

class ColorState : public gi::detail::GBoxedWrapper<ColorState, ::GdkColorState, GI_GDK_COLORSTATE_BASE, ColorState_Ref>
{ typedef gi::detail::GBoxedWrapper<ColorState, ::GdkColorState, GI_GDK_COLORSTATE_BASE, ColorState_Ref> super_type; using super_type::super_type; };


class ColorState_Ref : public gi::detail::GBoxedRefWrapper<ColorState, ::GdkColorState, GI_GDK_COLORSTATE_BASE>
{ typedef gi::detail::GBoxedRefWrapper<ColorState, ::GdkColorState, GI_GDK_COLORSTATE_BASE> super_type; using super_type::super_type; };

} // namespace Gdk

template<> struct declare_cpptype_of<::GdkColorState>
{ typedef Gdk::ColorState type; }; 

} // namespace repository

} // namespace gi

#endif
