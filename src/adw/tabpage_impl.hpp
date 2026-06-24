// AUTO-GENERATED

#ifndef _GI_ADW_TABPAGE_IMPL_HPP_
#define _GI_ADW_TABPAGE_IMPL_HPP_

namespace gi {

namespace repository {

namespace Adw {

namespace base {

Gtk::Accessible TabPageBase::interface_ (gi::interface_tag<Gtk::Accessible>)
{ return gi::wrap ((Gtk::Accessible::BaseObjectType*) gobj_copy_(), gi::transfer_full); }

TabPageBase::operator Gtk::Accessible ()
{ return interface_ (gi::interface_tag<Gtk::Accessible>()); }

// GtkWidget* /*none*/ adw_tab_page_get_child (AdwTabPage* self /*none*/);
// ::GtkWidget* /*none*/ adw_tab_page_get_child (::AdwTabPage* self /*none*/);
Gtk::Widget base::TabPageBase::get_child () noexcept
{
  typedef ::GtkWidget* (*call_wrap_t) (::AdwTabPage* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_tab_page_get_child;
  auto _temp_ret = call_wrap_v ((::AdwTabPage*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// GIcon* /*none,nullable*/ adw_tab_page_get_icon (AdwTabPage* self /*none*/);
// ::GIcon* /*none,nullable*/ adw_tab_page_get_icon (::AdwTabPage* self /*none*/);
Gio::Icon base::TabPageBase::get_icon () noexcept
{
  typedef ::GIcon* (*call_wrap_t) (::AdwTabPage* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_tab_page_get_icon;
  auto _temp_ret = call_wrap_v ((::AdwTabPage*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// gboolean adw_tab_page_get_indicator_activatable (AdwTabPage* self /*none*/);
// gboolean adw_tab_page_get_indicator_activatable (::AdwTabPage* self /*none*/);
bool base::TabPageBase::get_indicator_activatable () noexcept
{
  typedef gboolean (*call_wrap_t) (::AdwTabPage* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_tab_page_get_indicator_activatable;
  auto _temp_ret = call_wrap_v ((::AdwTabPage*) (gobj_()));
  return _temp_ret;
}

// GIcon* /*none,nullable*/ adw_tab_page_get_indicator_icon (AdwTabPage* self /*none*/);
// ::GIcon* /*none,nullable*/ adw_tab_page_get_indicator_icon (::AdwTabPage* self /*none*/);
Gio::Icon base::TabPageBase::get_indicator_icon () noexcept
{
  typedef ::GIcon* (*call_wrap_t) (::AdwTabPage* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_tab_page_get_indicator_icon;
  auto _temp_ret = call_wrap_v ((::AdwTabPage*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// const char* /*none*/ adw_tab_page_get_indicator_tooltip (AdwTabPage* self /*none*/);
// const char* /*none*/ adw_tab_page_get_indicator_tooltip (::AdwTabPage* self /*none*/);
gi::cstring_v base::TabPageBase::get_indicator_tooltip () noexcept
{
  typedef const char* (*call_wrap_t) (::AdwTabPage* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_tab_page_get_indicator_tooltip;
  auto _temp_ret = call_wrap_v ((::AdwTabPage*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// const char* /*none,nullable*/ adw_tab_page_get_keyword (AdwTabPage* self /*none*/);
// const char* /*none,nullable*/ adw_tab_page_get_keyword (::AdwTabPage* self /*none*/);
gi::cstring_v base::TabPageBase::get_keyword () noexcept
{
  typedef const char* (*call_wrap_t) (::AdwTabPage* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_tab_page_get_keyword;
  auto _temp_ret = call_wrap_v ((::AdwTabPage*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// gboolean adw_tab_page_get_live_thumbnail (AdwTabPage* self /*none*/);
// gboolean adw_tab_page_get_live_thumbnail (::AdwTabPage* self /*none*/);
bool base::TabPageBase::get_live_thumbnail () noexcept
{
  typedef gboolean (*call_wrap_t) (::AdwTabPage* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_tab_page_get_live_thumbnail;
  auto _temp_ret = call_wrap_v ((::AdwTabPage*) (gobj_()));
  return _temp_ret;
}

// gboolean adw_tab_page_get_loading (AdwTabPage* self /*none*/);
// gboolean adw_tab_page_get_loading (::AdwTabPage* self /*none*/);
bool base::TabPageBase::get_loading () noexcept
{
  typedef gboolean (*call_wrap_t) (::AdwTabPage* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_tab_page_get_loading;
  auto _temp_ret = call_wrap_v ((::AdwTabPage*) (gobj_()));
  return _temp_ret;
}

// gboolean adw_tab_page_get_needs_attention (AdwTabPage* self /*none*/);
// gboolean adw_tab_page_get_needs_attention (::AdwTabPage* self /*none*/);
bool base::TabPageBase::get_needs_attention () noexcept
{
  typedef gboolean (*call_wrap_t) (::AdwTabPage* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_tab_page_get_needs_attention;
  auto _temp_ret = call_wrap_v ((::AdwTabPage*) (gobj_()));
  return _temp_ret;
}

// AdwTabPage* /*none,nullable*/ adw_tab_page_get_parent (AdwTabPage* self /*none*/);
// ::AdwTabPage* /*none,nullable*/ adw_tab_page_get_parent (::AdwTabPage* self /*none*/);
Adw::TabPage base::TabPageBase::get_parent () noexcept
{
  typedef ::AdwTabPage* (*call_wrap_t) (::AdwTabPage* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_tab_page_get_parent;
  auto _temp_ret = call_wrap_v ((::AdwTabPage*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// gboolean adw_tab_page_get_pinned (AdwTabPage* self /*none*/);
// gboolean adw_tab_page_get_pinned (::AdwTabPage* self /*none*/);
bool base::TabPageBase::get_pinned () noexcept
{
  typedef gboolean (*call_wrap_t) (::AdwTabPage* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_tab_page_get_pinned;
  auto _temp_ret = call_wrap_v ((::AdwTabPage*) (gobj_()));
  return _temp_ret;
}

// gboolean adw_tab_page_get_selected (AdwTabPage* self /*none*/);
// gboolean adw_tab_page_get_selected (::AdwTabPage* self /*none*/);
bool base::TabPageBase::get_selected () noexcept
{
  typedef gboolean (*call_wrap_t) (::AdwTabPage* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_tab_page_get_selected;
  auto _temp_ret = call_wrap_v ((::AdwTabPage*) (gobj_()));
  return _temp_ret;
}

// float adw_tab_page_get_thumbnail_xalign (AdwTabPage* self /*none*/);
// gfloat adw_tab_page_get_thumbnail_xalign (::AdwTabPage* self /*none*/);
gfloat base::TabPageBase::get_thumbnail_xalign () noexcept
{
  typedef gfloat (*call_wrap_t) (::AdwTabPage* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_tab_page_get_thumbnail_xalign;
  auto _temp_ret = call_wrap_v ((::AdwTabPage*) (gobj_()));
  return _temp_ret;
}

// float adw_tab_page_get_thumbnail_yalign (AdwTabPage* self /*none*/);
// gfloat adw_tab_page_get_thumbnail_yalign (::AdwTabPage* self /*none*/);
gfloat base::TabPageBase::get_thumbnail_yalign () noexcept
{
  typedef gfloat (*call_wrap_t) (::AdwTabPage* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_tab_page_get_thumbnail_yalign;
  auto _temp_ret = call_wrap_v ((::AdwTabPage*) (gobj_()));
  return _temp_ret;
}

// const char* /*none*/ adw_tab_page_get_title (AdwTabPage* self /*none*/);
// const char* /*none*/ adw_tab_page_get_title (::AdwTabPage* self /*none*/);
gi::cstring_v base::TabPageBase::get_title () noexcept
{
  typedef const char* (*call_wrap_t) (::AdwTabPage* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_tab_page_get_title;
  auto _temp_ret = call_wrap_v ((::AdwTabPage*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// const char* /*none,nullable*/ adw_tab_page_get_tooltip (AdwTabPage* self /*none*/);
// const char* /*none,nullable*/ adw_tab_page_get_tooltip (::AdwTabPage* self /*none*/);
gi::cstring_v base::TabPageBase::get_tooltip () noexcept
{
  typedef const char* (*call_wrap_t) (::AdwTabPage* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_tab_page_get_tooltip;
  auto _temp_ret = call_wrap_v ((::AdwTabPage*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// void adw_tab_page_invalidate_thumbnail (AdwTabPage* self /*none*/);
// void adw_tab_page_invalidate_thumbnail (::AdwTabPage* self /*none*/);
void base::TabPageBase::invalidate_thumbnail () noexcept
{
  typedef void (*call_wrap_t) (::AdwTabPage* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_tab_page_invalidate_thumbnail;
  call_wrap_v ((::AdwTabPage*) (gobj_()));
}

// void adw_tab_page_set_icon (AdwTabPage* self /*none*/, GIcon* icon /*none,nullable*/);
// void adw_tab_page_set_icon (::AdwTabPage* self /*none*/, ::GIcon* icon /*none,nullable*/);
void base::TabPageBase::set_icon (Gio::Icon icon) noexcept
{
  typedef void (*call_wrap_t) (::AdwTabPage* self, ::GIcon* icon);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_tab_page_set_icon;
  auto icon_to_c = gi::unwrap (icon, gi::transfer_none);
  call_wrap_v ((::AdwTabPage*) (gobj_()), (::GIcon*) (icon_to_c));
}
void base::TabPageBase::set_icon () noexcept
{
  typedef void (*call_wrap_t) (::AdwTabPage* self, ::GIcon* icon);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_tab_page_set_icon;
  auto icon_to_c = nullptr;
  call_wrap_v ((::AdwTabPage*) (gobj_()), (::GIcon*) (icon_to_c));
}

// void adw_tab_page_set_indicator_activatable (AdwTabPage* self /*none*/, gboolean activatable);
// void adw_tab_page_set_indicator_activatable (::AdwTabPage* self /*none*/, gboolean activatable);
void base::TabPageBase::set_indicator_activatable (gboolean activatable) noexcept
{
  typedef void (*call_wrap_t) (::AdwTabPage* self, gboolean activatable);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_tab_page_set_indicator_activatable;
  auto activatable_to_c = activatable;
  call_wrap_v ((::AdwTabPage*) (gobj_()), (gboolean) (activatable_to_c));
}

// void adw_tab_page_set_indicator_icon (AdwTabPage* self /*none*/, GIcon* indicator_icon /*none,nullable*/);
// void adw_tab_page_set_indicator_icon (::AdwTabPage* self /*none*/, ::GIcon* indicator_icon /*none,nullable*/);
void base::TabPageBase::set_indicator_icon (Gio::Icon indicator_icon) noexcept
{
  typedef void (*call_wrap_t) (::AdwTabPage* self, ::GIcon* indicator_icon);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_tab_page_set_indicator_icon;
  auto indicator_icon_to_c = gi::unwrap (indicator_icon, gi::transfer_none);
  call_wrap_v ((::AdwTabPage*) (gobj_()), (::GIcon*) (indicator_icon_to_c));
}
void base::TabPageBase::set_indicator_icon () noexcept
{
  typedef void (*call_wrap_t) (::AdwTabPage* self, ::GIcon* indicator_icon);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_tab_page_set_indicator_icon;
  auto indicator_icon_to_c = nullptr;
  call_wrap_v ((::AdwTabPage*) (gobj_()), (::GIcon*) (indicator_icon_to_c));
}

// void adw_tab_page_set_indicator_tooltip (AdwTabPage* self /*none*/, const char* tooltip /*none*/);
// void adw_tab_page_set_indicator_tooltip (::AdwTabPage* self /*none*/, const char* tooltip /*none*/);
void base::TabPageBase::set_indicator_tooltip (const gi::cstring_v tooltip) noexcept
{
  typedef void (*call_wrap_t) (::AdwTabPage* self, const char* tooltip);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_tab_page_set_indicator_tooltip;
  auto tooltip_to_c = gi::unwrap (tooltip, gi::transfer_none);
  call_wrap_v ((::AdwTabPage*) (gobj_()), (const char*) (tooltip_to_c));
}

// void adw_tab_page_set_keyword (AdwTabPage* self /*none*/, const char* keyword /*none*/);
// void adw_tab_page_set_keyword (::AdwTabPage* self /*none*/, const char* keyword /*none*/);
void base::TabPageBase::set_keyword (const gi::cstring_v keyword) noexcept
{
  typedef void (*call_wrap_t) (::AdwTabPage* self, const char* keyword);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_tab_page_set_keyword;
  auto keyword_to_c = gi::unwrap (keyword, gi::transfer_none);
  call_wrap_v ((::AdwTabPage*) (gobj_()), (const char*) (keyword_to_c));
}

// void adw_tab_page_set_live_thumbnail (AdwTabPage* self /*none*/, gboolean live_thumbnail);
// void adw_tab_page_set_live_thumbnail (::AdwTabPage* self /*none*/, gboolean live_thumbnail);
void base::TabPageBase::set_live_thumbnail (gboolean live_thumbnail) noexcept
{
  typedef void (*call_wrap_t) (::AdwTabPage* self, gboolean live_thumbnail);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_tab_page_set_live_thumbnail;
  auto live_thumbnail_to_c = live_thumbnail;
  call_wrap_v ((::AdwTabPage*) (gobj_()), (gboolean) (live_thumbnail_to_c));
}

// void adw_tab_page_set_loading (AdwTabPage* self /*none*/, gboolean loading);
// void adw_tab_page_set_loading (::AdwTabPage* self /*none*/, gboolean loading);
void base::TabPageBase::set_loading (gboolean loading) noexcept
{
  typedef void (*call_wrap_t) (::AdwTabPage* self, gboolean loading);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_tab_page_set_loading;
  auto loading_to_c = loading;
  call_wrap_v ((::AdwTabPage*) (gobj_()), (gboolean) (loading_to_c));
}

// void adw_tab_page_set_needs_attention (AdwTabPage* self /*none*/, gboolean needs_attention);
// void adw_tab_page_set_needs_attention (::AdwTabPage* self /*none*/, gboolean needs_attention);
void base::TabPageBase::set_needs_attention (gboolean needs_attention) noexcept
{
  typedef void (*call_wrap_t) (::AdwTabPage* self, gboolean needs_attention);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_tab_page_set_needs_attention;
  auto needs_attention_to_c = needs_attention;
  call_wrap_v ((::AdwTabPage*) (gobj_()), (gboolean) (needs_attention_to_c));
}

// void adw_tab_page_set_thumbnail_xalign (AdwTabPage* self /*none*/, float xalign);
// void adw_tab_page_set_thumbnail_xalign (::AdwTabPage* self /*none*/, gfloat xalign);
void base::TabPageBase::set_thumbnail_xalign (gfloat xalign) noexcept
{
  typedef void (*call_wrap_t) (::AdwTabPage* self, gfloat xalign);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_tab_page_set_thumbnail_xalign;
  auto xalign_to_c = xalign;
  call_wrap_v ((::AdwTabPage*) (gobj_()), (gfloat) (xalign_to_c));
}

// void adw_tab_page_set_thumbnail_yalign (AdwTabPage* self /*none*/, float yalign);
// void adw_tab_page_set_thumbnail_yalign (::AdwTabPage* self /*none*/, gfloat yalign);
void base::TabPageBase::set_thumbnail_yalign (gfloat yalign) noexcept
{
  typedef void (*call_wrap_t) (::AdwTabPage* self, gfloat yalign);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_tab_page_set_thumbnail_yalign;
  auto yalign_to_c = yalign;
  call_wrap_v ((::AdwTabPage*) (gobj_()), (gfloat) (yalign_to_c));
}

// void adw_tab_page_set_title (AdwTabPage* self /*none*/, const char* title /*none*/);
// void adw_tab_page_set_title (::AdwTabPage* self /*none*/, const char* title /*none*/);
void base::TabPageBase::set_title (const gi::cstring_v title) noexcept
{
  typedef void (*call_wrap_t) (::AdwTabPage* self, const char* title);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_tab_page_set_title;
  auto title_to_c = gi::unwrap (title, gi::transfer_none);
  call_wrap_v ((::AdwTabPage*) (gobj_()), (const char*) (title_to_c));
}

// void adw_tab_page_set_tooltip (AdwTabPage* self /*none*/, const char* tooltip /*none*/);
// void adw_tab_page_set_tooltip (::AdwTabPage* self /*none*/, const char* tooltip /*none*/);
void base::TabPageBase::set_tooltip (const gi::cstring_v tooltip) noexcept
{
  typedef void (*call_wrap_t) (::AdwTabPage* self, const char* tooltip);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_tab_page_set_tooltip;
  auto tooltip_to_c = gi::unwrap (tooltip, gi::transfer_none);
  call_wrap_v ((::AdwTabPage*) (gobj_()), (const char*) (tooltip_to_c));
}


} // namespace base

} // namespace Adw

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<adw/tabpage_extra_def_impl.hpp>)
#include <adw/tabpage_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<adw/tabpage_extra_impl.hpp>)
#include <adw/tabpage_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Adw {

namespace impl {

namespace internal {

void TabPageClassDef::class_init (gpointer class_struct, gpointer factory)
{
  ::AdwTabPageClass *methods = (::AdwTabPageClass *) class_struct;
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
