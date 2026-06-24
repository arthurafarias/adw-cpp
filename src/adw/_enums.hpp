// AUTO-GENERATED

#ifndef _GI_ADW__ENUMS_HPP_
#define _GI_ADW__ENUMS_HPP_

namespace gi {

namespace repository {

namespace Adw {

enum class AccentColor : std::underlying_type<AdwAccentColor>::type {
  BLUE_ = ADW_ACCENT_COLOR_BLUE,
  TEAL_ = ADW_ACCENT_COLOR_TEAL,
  GREEN_ = ADW_ACCENT_COLOR_GREEN,
  YELLOW_ = ADW_ACCENT_COLOR_YELLOW,
  ORANGE_ = ADW_ACCENT_COLOR_ORANGE,
  RED_ = ADW_ACCENT_COLOR_RED,
  PINK_ = ADW_ACCENT_COLOR_PINK,
  PURPLE_ = ADW_ACCENT_COLOR_PURPLE,
  SLATE_ = ADW_ACCENT_COLOR_SLATE,
};

} // namespace Adw

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Adw::AccentColor>
{ typedef AdwAccentColor type; }; 
template<> struct declare_cpptype_of<AdwAccentColor>
{ typedef Adw::AccentColor type; }; 

template<> struct declare_gtype_of<Adw::AccentColor>
{ static GType get_type() { return adw_accent_color_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Adw {

enum class AnimationState : std::underlying_type<AdwAnimationState>::type {
  IDLE_ = ADW_ANIMATION_IDLE,
  PAUSED_ = ADW_ANIMATION_PAUSED,
  PLAYING_ = ADW_ANIMATION_PLAYING,
  FINISHED_ = ADW_ANIMATION_FINISHED,
};

} // namespace Adw

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Adw::AnimationState>
{ typedef AdwAnimationState type; }; 
template<> struct declare_cpptype_of<AdwAnimationState>
{ typedef Adw::AnimationState type; }; 

template<> struct declare_gtype_of<Adw::AnimationState>
{ static GType get_type() { return adw_animation_state_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Adw {

enum class BannerButtonStyle : std::underlying_type<AdwBannerButtonStyle>::type {
  DEFAULT_ = ADW_BANNER_BUTTON_DEFAULT,
  SUGGESTED_ = ADW_BANNER_BUTTON_SUGGESTED,
};

} // namespace Adw

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Adw::BannerButtonStyle>
{ typedef AdwBannerButtonStyle type; }; 
template<> struct declare_cpptype_of<AdwBannerButtonStyle>
{ typedef Adw::BannerButtonStyle type; }; 

template<> struct declare_gtype_of<Adw::BannerButtonStyle>
{ static GType get_type() { return adw_banner_button_style_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Adw {

enum class BreakpointConditionLengthType : std::underlying_type<AdwBreakpointConditionLengthType>::type {
  MIN_WIDTH_ = ADW_BREAKPOINT_CONDITION_MIN_WIDTH,
  MAX_WIDTH_ = ADW_BREAKPOINT_CONDITION_MAX_WIDTH,
  MIN_HEIGHT_ = ADW_BREAKPOINT_CONDITION_MIN_HEIGHT,
  MAX_HEIGHT_ = ADW_BREAKPOINT_CONDITION_MAX_HEIGHT,
};

} // namespace Adw

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Adw::BreakpointConditionLengthType>
{ typedef AdwBreakpointConditionLengthType type; }; 
template<> struct declare_cpptype_of<AdwBreakpointConditionLengthType>
{ typedef Adw::BreakpointConditionLengthType type; }; 

template<> struct declare_gtype_of<Adw::BreakpointConditionLengthType>
{ static GType get_type() { return adw_breakpoint_condition_length_type_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Adw {

enum class BreakpointConditionRatioType : std::underlying_type<AdwBreakpointConditionRatioType>::type {
  MIN_ASPECT_RATIO_ = ADW_BREAKPOINT_CONDITION_MIN_ASPECT_RATIO,
  MAX_ASPECT_RATIO_ = ADW_BREAKPOINT_CONDITION_MAX_ASPECT_RATIO,
};

} // namespace Adw

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Adw::BreakpointConditionRatioType>
{ typedef AdwBreakpointConditionRatioType type; }; 
template<> struct declare_cpptype_of<AdwBreakpointConditionRatioType>
{ typedef Adw::BreakpointConditionRatioType type; }; 

template<> struct declare_gtype_of<Adw::BreakpointConditionRatioType>
{ static GType get_type() { return adw_breakpoint_condition_ratio_type_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Adw {

enum class CenteringPolicy : std::underlying_type<AdwCenteringPolicy>::type {
  LOOSE_ = ADW_CENTERING_POLICY_LOOSE,
  STRICT_ = ADW_CENTERING_POLICY_STRICT,
};

} // namespace Adw

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Adw::CenteringPolicy>
{ typedef AdwCenteringPolicy type; }; 
template<> struct declare_cpptype_of<AdwCenteringPolicy>
{ typedef Adw::CenteringPolicy type; }; 

template<> struct declare_gtype_of<Adw::CenteringPolicy>
{ static GType get_type() { return adw_centering_policy_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Adw {

enum class ColorScheme : std::underlying_type<AdwColorScheme>::type {
  DEFAULT_ = ADW_COLOR_SCHEME_DEFAULT,
  FORCE_LIGHT_ = ADW_COLOR_SCHEME_FORCE_LIGHT,
  PREFER_LIGHT_ = ADW_COLOR_SCHEME_PREFER_LIGHT,
  PREFER_DARK_ = ADW_COLOR_SCHEME_PREFER_DARK,
  FORCE_DARK_ = ADW_COLOR_SCHEME_FORCE_DARK,
};

} // namespace Adw

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Adw::ColorScheme>
{ typedef AdwColorScheme type; }; 
template<> struct declare_cpptype_of<AdwColorScheme>
{ typedef Adw::ColorScheme type; }; 

template<> struct declare_gtype_of<Adw::ColorScheme>
{ static GType get_type() { return adw_color_scheme_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Adw {

enum class DialogPresentationMode : std::underlying_type<AdwDialogPresentationMode>::type {
  AUTO_ = ADW_DIALOG_AUTO,
  FLOATING_ = ADW_DIALOG_FLOATING,
  BOTTOM_SHEET_ = ADW_DIALOG_BOTTOM_SHEET,
};

} // namespace Adw

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Adw::DialogPresentationMode>
{ typedef AdwDialogPresentationMode type; }; 
template<> struct declare_cpptype_of<AdwDialogPresentationMode>
{ typedef Adw::DialogPresentationMode type; }; 

template<> struct declare_gtype_of<Adw::DialogPresentationMode>
{ static GType get_type() { return adw_dialog_presentation_mode_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Adw {

enum class Easing : std::underlying_type<AdwEasing>::type {
  LINEAR_ = ADW_LINEAR,
  EASE_IN_QUAD_ = ADW_EASE_IN_QUAD,
  EASE_OUT_QUAD_ = ADW_EASE_OUT_QUAD,
  EASE_IN_OUT_QUAD_ = ADW_EASE_IN_OUT_QUAD,
  EASE_IN_CUBIC_ = ADW_EASE_IN_CUBIC,
  EASE_OUT_CUBIC_ = ADW_EASE_OUT_CUBIC,
  EASE_IN_OUT_CUBIC_ = ADW_EASE_IN_OUT_CUBIC,
  EASE_IN_QUART_ = ADW_EASE_IN_QUART,
  EASE_OUT_QUART_ = ADW_EASE_OUT_QUART,
  EASE_IN_OUT_QUART_ = ADW_EASE_IN_OUT_QUART,
  EASE_IN_QUINT_ = ADW_EASE_IN_QUINT,
  EASE_OUT_QUINT_ = ADW_EASE_OUT_QUINT,
  EASE_IN_OUT_QUINT_ = ADW_EASE_IN_OUT_QUINT,
  EASE_IN_SINE_ = ADW_EASE_IN_SINE,
  EASE_OUT_SINE_ = ADW_EASE_OUT_SINE,
  EASE_IN_OUT_SINE_ = ADW_EASE_IN_OUT_SINE,
  EASE_IN_EXPO_ = ADW_EASE_IN_EXPO,
  EASE_OUT_EXPO_ = ADW_EASE_OUT_EXPO,
  EASE_IN_OUT_EXPO_ = ADW_EASE_IN_OUT_EXPO,
  EASE_IN_CIRC_ = ADW_EASE_IN_CIRC,
  EASE_OUT_CIRC_ = ADW_EASE_OUT_CIRC,
  EASE_IN_OUT_CIRC_ = ADW_EASE_IN_OUT_CIRC,
  EASE_IN_ELASTIC_ = ADW_EASE_IN_ELASTIC,
  EASE_OUT_ELASTIC_ = ADW_EASE_OUT_ELASTIC,
  EASE_IN_OUT_ELASTIC_ = ADW_EASE_IN_OUT_ELASTIC,
  EASE_IN_BACK_ = ADW_EASE_IN_BACK,
  EASE_OUT_BACK_ = ADW_EASE_OUT_BACK,
  EASE_IN_OUT_BACK_ = ADW_EASE_IN_OUT_BACK,
  EASE_IN_BOUNCE_ = ADW_EASE_IN_BOUNCE,
  EASE_OUT_BOUNCE_ = ADW_EASE_OUT_BOUNCE,
  EASE_IN_OUT_BOUNCE_ = ADW_EASE_IN_OUT_BOUNCE,
  EASE_ = ADW_EASE,
  EASE_IN_ = ADW_EASE_IN,
  EASE_OUT_ = ADW_EASE_OUT,
  EASE_IN_OUT_ = ADW_EASE_IN_OUT,
};

} // namespace Adw

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Adw::Easing>
{ typedef AdwEasing type; }; 
template<> struct declare_cpptype_of<AdwEasing>
{ typedef Adw::Easing type; }; 

template<> struct declare_gtype_of<Adw::Easing>
{ static GType get_type() { return adw_easing_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Adw {

enum class InlineViewSwitcherDisplayMode : std::underlying_type<AdwInlineViewSwitcherDisplayMode>::type {
  LABELS_ = ADW_INLINE_VIEW_SWITCHER_LABELS,
  ICONS_ = ADW_INLINE_VIEW_SWITCHER_ICONS,
  BOTH_ = ADW_INLINE_VIEW_SWITCHER_BOTH,
};

} // namespace Adw

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Adw::InlineViewSwitcherDisplayMode>
{ typedef AdwInlineViewSwitcherDisplayMode type; }; 
template<> struct declare_cpptype_of<AdwInlineViewSwitcherDisplayMode>
{ typedef Adw::InlineViewSwitcherDisplayMode type; }; 

template<> struct declare_gtype_of<Adw::InlineViewSwitcherDisplayMode>
{ static GType get_type() { return adw_inline_view_switcher_display_mode_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Adw {

enum class JustifyMode : std::underlying_type<AdwJustifyMode>::type {
  NONE_ = ADW_JUSTIFY_NONE,
  FILL_ = ADW_JUSTIFY_FILL,
  SPREAD_ = ADW_JUSTIFY_SPREAD,
};

} // namespace Adw

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Adw::JustifyMode>
{ typedef AdwJustifyMode type; }; 
template<> struct declare_cpptype_of<AdwJustifyMode>
{ typedef Adw::JustifyMode type; }; 

template<> struct declare_gtype_of<Adw::JustifyMode>
{ static GType get_type() { return adw_justify_mode_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Adw {

enum class LengthUnit : std::underlying_type<AdwLengthUnit>::type {
  PX_ = ADW_LENGTH_UNIT_PX,
  PT_ = ADW_LENGTH_UNIT_PT,
  SP_ = ADW_LENGTH_UNIT_SP,
};

} // namespace Adw

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Adw::LengthUnit>
{ typedef AdwLengthUnit type; }; 
template<> struct declare_cpptype_of<AdwLengthUnit>
{ typedef Adw::LengthUnit type; }; 

template<> struct declare_gtype_of<Adw::LengthUnit>
{ static GType get_type() { return adw_length_unit_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Adw {

enum class NavigationDirection : std::underlying_type<AdwNavigationDirection>::type {
  BACK_ = ADW_NAVIGATION_DIRECTION_BACK,
  FORWARD_ = ADW_NAVIGATION_DIRECTION_FORWARD,
};

} // namespace Adw

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Adw::NavigationDirection>
{ typedef AdwNavigationDirection type; }; 
template<> struct declare_cpptype_of<AdwNavigationDirection>
{ typedef Adw::NavigationDirection type; }; 

template<> struct declare_gtype_of<Adw::NavigationDirection>
{ static GType get_type() { return adw_navigation_direction_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Adw {

enum class PackDirection : std::underlying_type<AdwPackDirection>::type {
  START_TO_END_ = ADW_PACK_START_TO_END,
  END_TO_START_ = ADW_PACK_END_TO_START,
};

} // namespace Adw

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Adw::PackDirection>
{ typedef AdwPackDirection type; }; 
template<> struct declare_cpptype_of<AdwPackDirection>
{ typedef Adw::PackDirection type; }; 

template<> struct declare_gtype_of<Adw::PackDirection>
{ static GType get_type() { return adw_pack_direction_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Adw {

enum class ResponseAppearance : std::underlying_type<AdwResponseAppearance>::type {
  DEFAULT_ = ADW_RESPONSE_DEFAULT,
  SUGGESTED_ = ADW_RESPONSE_SUGGESTED,
  DESTRUCTIVE_ = ADW_RESPONSE_DESTRUCTIVE,
};

} // namespace Adw

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Adw::ResponseAppearance>
{ typedef AdwResponseAppearance type; }; 
template<> struct declare_cpptype_of<AdwResponseAppearance>
{ typedef Adw::ResponseAppearance type; }; 

template<> struct declare_gtype_of<Adw::ResponseAppearance>
{ static GType get_type() { return adw_response_appearance_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Adw {

enum class SidebarMode : std::underlying_type<AdwSidebarMode>::type {
  SIDEBAR_ = ADW_SIDEBAR_MODE_SIDEBAR,
  PAGE_ = ADW_SIDEBAR_MODE_PAGE,
};

} // namespace Adw

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Adw::SidebarMode>
{ typedef AdwSidebarMode type; }; 
template<> struct declare_cpptype_of<AdwSidebarMode>
{ typedef Adw::SidebarMode type; }; 

template<> struct declare_gtype_of<Adw::SidebarMode>
{ static GType get_type() { return adw_sidebar_mode_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Adw {

enum class ToastPriority : std::underlying_type<AdwToastPriority>::type {
  NORMAL_ = ADW_TOAST_PRIORITY_NORMAL,
  HIGH_ = ADW_TOAST_PRIORITY_HIGH,
};

} // namespace Adw

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Adw::ToastPriority>
{ typedef AdwToastPriority type; }; 
template<> struct declare_cpptype_of<AdwToastPriority>
{ typedef Adw::ToastPriority type; }; 

template<> struct declare_gtype_of<Adw::ToastPriority>
{ static GType get_type() { return adw_toast_priority_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Adw {

enum class ToolbarStyle : std::underlying_type<AdwToolbarStyle>::type {
  FLAT_ = ADW_TOOLBAR_FLAT,
  RAISED_ = ADW_TOOLBAR_RAISED,
  RAISED_BORDER_ = ADW_TOOLBAR_RAISED_BORDER,
};

} // namespace Adw

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Adw::ToolbarStyle>
{ typedef AdwToolbarStyle type; }; 
template<> struct declare_cpptype_of<AdwToolbarStyle>
{ typedef Adw::ToolbarStyle type; }; 

template<> struct declare_gtype_of<Adw::ToolbarStyle>
{ static GType get_type() { return adw_toolbar_style_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Adw {

enum class ViewSwitcherPolicy : std::underlying_type<AdwViewSwitcherPolicy>::type {
  NARROW_ = ADW_VIEW_SWITCHER_POLICY_NARROW,
  WIDE_ = ADW_VIEW_SWITCHER_POLICY_WIDE,
};

} // namespace Adw

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Adw::ViewSwitcherPolicy>
{ typedef AdwViewSwitcherPolicy type; }; 
template<> struct declare_cpptype_of<AdwViewSwitcherPolicy>
{ typedef Adw::ViewSwitcherPolicy type; }; 

template<> struct declare_gtype_of<Adw::ViewSwitcherPolicy>
{ static GType get_type() { return adw_view_switcher_policy_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Adw {

enum class WrapPolicy : std::underlying_type<AdwWrapPolicy>::type {
  MINIMUM_ = ADW_WRAP_MINIMUM,
  NATURAL_ = ADW_WRAP_NATURAL,
};

} // namespace Adw

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Adw::WrapPolicy>
{ typedef AdwWrapPolicy type; }; 
template<> struct declare_cpptype_of<AdwWrapPolicy>
{ typedef Adw::WrapPolicy type; }; 

template<> struct declare_gtype_of<Adw::WrapPolicy>
{ static GType get_type() { return adw_wrap_policy_get_type(); } };


} // namespace repository

} // namespace gi


#endif
