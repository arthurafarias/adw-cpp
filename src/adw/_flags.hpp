// AUTO-GENERATED

#ifndef _GI_ADW__FLAGS_HPP_
#define _GI_ADW__FLAGS_HPP_

namespace gi {

namespace repository {

namespace Adw {

enum class TabViewShortcuts : std::underlying_type<AdwTabViewShortcuts>::type {
  NONE_ = ADW_TAB_VIEW_SHORTCUT_NONE,
  CONTROL_TAB_ = ADW_TAB_VIEW_SHORTCUT_CONTROL_TAB,
  CONTROL_SHIFT_TAB_ = ADW_TAB_VIEW_SHORTCUT_CONTROL_SHIFT_TAB,
  CONTROL_PAGE_UP_ = ADW_TAB_VIEW_SHORTCUT_CONTROL_PAGE_UP,
  CONTROL_PAGE_DOWN_ = ADW_TAB_VIEW_SHORTCUT_CONTROL_PAGE_DOWN,
  CONTROL_HOME_ = ADW_TAB_VIEW_SHORTCUT_CONTROL_HOME,
  CONTROL_END_ = ADW_TAB_VIEW_SHORTCUT_CONTROL_END,
  CONTROL_SHIFT_PAGE_UP_ = ADW_TAB_VIEW_SHORTCUT_CONTROL_SHIFT_PAGE_UP,
  CONTROL_SHIFT_PAGE_DOWN_ = ADW_TAB_VIEW_SHORTCUT_CONTROL_SHIFT_PAGE_DOWN,
  CONTROL_SHIFT_HOME_ = ADW_TAB_VIEW_SHORTCUT_CONTROL_SHIFT_HOME,
  CONTROL_SHIFT_END_ = ADW_TAB_VIEW_SHORTCUT_CONTROL_SHIFT_END,
  ALT_DIGITS_ = ADW_TAB_VIEW_SHORTCUT_ALT_DIGITS,
  ALT_ZERO_ = ADW_TAB_VIEW_SHORTCUT_ALT_ZERO,
  ALL_SHORTCUTS_ = ADW_TAB_VIEW_SHORTCUT_ALL_SHORTCUTS,
};

GI_FLAG_OPERATORS(TabViewShortcuts)

} // namespace Adw

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Adw::TabViewShortcuts>
{ typedef AdwTabViewShortcuts type; }; 
template<> struct declare_cpptype_of<AdwTabViewShortcuts>
{ typedef Adw::TabViewShortcuts type; }; 

template<> struct declare_gtype_of<Adw::TabViewShortcuts>
{ static GType get_type() { return adw_tab_view_shortcuts_get_type(); } };

template<> struct is_bitfield<Adw::TabViewShortcuts> : public std::true_type
{};


} // namespace repository

} // namespace gi


#endif
