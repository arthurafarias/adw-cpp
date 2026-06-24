// AUTO-GENERATED

#ifndef _GI_ADW_SIDEBARITEM_IMPL_HPP_
#define _GI_ADW_SIDEBARITEM_IMPL_HPP_

namespace gi {

namespace repository {

namespace Adw {

namespace base {

// AdwSidebarItem* /*full*/ adw_sidebar_item_new (const char* title /*none*/);
// ::AdwSidebarItem* /*full*/ adw_sidebar_item_new (const char* title /*none*/);
Adw::SidebarItem base::SidebarItemBase::new_ (const gi::cstring_v title) noexcept
{
  typedef ::AdwSidebarItem* (*call_wrap_t) (const char* title);
  call_wrap_t call_wrap_v = (call_wrap_t) adw_sidebar_item_new;
  auto title_to_c = gi::unwrap (title, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const char*) (title_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// gboolean adw_sidebar_item_get_drag_motion_activate (AdwSidebarItem* self /*none*/);
// gboolean adw_sidebar_item_get_drag_motion_activate (::AdwSidebarItem* self /*none*/);
bool base::SidebarItemBase::get_drag_motion_activate () noexcept
{
  typedef gboolean (*call_wrap_t) (::AdwSidebarItem* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_sidebar_item_get_drag_motion_activate;
  auto _temp_ret = call_wrap_v ((::AdwSidebarItem*) (gobj_()));
  return _temp_ret;
}

// gboolean adw_sidebar_item_get_enabled (AdwSidebarItem* self /*none*/);
// gboolean adw_sidebar_item_get_enabled (::AdwSidebarItem* self /*none*/);
bool base::SidebarItemBase::get_enabled () noexcept
{
  typedef gboolean (*call_wrap_t) (::AdwSidebarItem* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_sidebar_item_get_enabled;
  auto _temp_ret = call_wrap_v ((::AdwSidebarItem*) (gobj_()));
  return _temp_ret;
}

// const char* /*none,nullable*/ adw_sidebar_item_get_icon_name (AdwSidebarItem* self /*none*/);
// const char* /*none,nullable*/ adw_sidebar_item_get_icon_name (::AdwSidebarItem* self /*none*/);
gi::cstring_v base::SidebarItemBase::get_icon_name () noexcept
{
  typedef const char* (*call_wrap_t) (::AdwSidebarItem* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_sidebar_item_get_icon_name;
  auto _temp_ret = call_wrap_v ((::AdwSidebarItem*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// GdkPaintable* /*none,nullable*/ adw_sidebar_item_get_icon_paintable (AdwSidebarItem* self /*none*/);
// ::GdkPaintable* /*none,nullable*/ adw_sidebar_item_get_icon_paintable (::AdwSidebarItem* self /*none*/);
Gdk::Paintable base::SidebarItemBase::get_icon_paintable () noexcept
{
  typedef ::GdkPaintable* (*call_wrap_t) (::AdwSidebarItem* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_sidebar_item_get_icon_paintable;
  auto _temp_ret = call_wrap_v ((::AdwSidebarItem*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// guint adw_sidebar_item_get_index (AdwSidebarItem* self /*none*/);
// guint adw_sidebar_item_get_index (::AdwSidebarItem* self /*none*/);
guint base::SidebarItemBase::get_index () noexcept
{
  typedef guint (*call_wrap_t) (::AdwSidebarItem* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_sidebar_item_get_index;
  auto _temp_ret = call_wrap_v ((::AdwSidebarItem*) (gobj_()));
  return _temp_ret;
}

// AdwSidebarSection* /*none,nullable*/ adw_sidebar_item_get_section (AdwSidebarItem* self /*none*/);
// ::AdwSidebarSection* /*none,nullable*/ adw_sidebar_item_get_section (::AdwSidebarItem* self /*none*/);
Adw::SidebarSection base::SidebarItemBase::get_section () noexcept
{
  typedef ::AdwSidebarSection* (*call_wrap_t) (::AdwSidebarItem* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_sidebar_item_get_section;
  auto _temp_ret = call_wrap_v ((::AdwSidebarItem*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// guint adw_sidebar_item_get_section_index (AdwSidebarItem* self /*none*/);
// guint adw_sidebar_item_get_section_index (::AdwSidebarItem* self /*none*/);
guint base::SidebarItemBase::get_section_index () noexcept
{
  typedef guint (*call_wrap_t) (::AdwSidebarItem* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_sidebar_item_get_section_index;
  auto _temp_ret = call_wrap_v ((::AdwSidebarItem*) (gobj_()));
  return _temp_ret;
}

// const char* /*none,nullable*/ adw_sidebar_item_get_subtitle (AdwSidebarItem* self /*none*/);
// const char* /*none,nullable*/ adw_sidebar_item_get_subtitle (::AdwSidebarItem* self /*none*/);
gi::cstring_v base::SidebarItemBase::get_subtitle () noexcept
{
  typedef const char* (*call_wrap_t) (::AdwSidebarItem* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_sidebar_item_get_subtitle;
  auto _temp_ret = call_wrap_v ((::AdwSidebarItem*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// GtkWidget* /*none,nullable*/ adw_sidebar_item_get_suffix (AdwSidebarItem* self /*none*/);
// ::GtkWidget* /*none,nullable*/ adw_sidebar_item_get_suffix (::AdwSidebarItem* self /*none*/);
Gtk::Widget base::SidebarItemBase::get_suffix () noexcept
{
  typedef ::GtkWidget* (*call_wrap_t) (::AdwSidebarItem* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_sidebar_item_get_suffix;
  auto _temp_ret = call_wrap_v ((::AdwSidebarItem*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// const char* /*none,nullable*/ adw_sidebar_item_get_title (AdwSidebarItem* self /*none*/);
// const char* /*none,nullable*/ adw_sidebar_item_get_title (::AdwSidebarItem* self /*none*/);
gi::cstring_v base::SidebarItemBase::get_title () noexcept
{
  typedef const char* (*call_wrap_t) (::AdwSidebarItem* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_sidebar_item_get_title;
  auto _temp_ret = call_wrap_v ((::AdwSidebarItem*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// const char* /*none,nullable*/ adw_sidebar_item_get_tooltip (AdwSidebarItem* self /*none*/);
// const char* /*none,nullable*/ adw_sidebar_item_get_tooltip (::AdwSidebarItem* self /*none*/);
gi::cstring_v base::SidebarItemBase::get_tooltip () noexcept
{
  typedef const char* (*call_wrap_t) (::AdwSidebarItem* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_sidebar_item_get_tooltip;
  auto _temp_ret = call_wrap_v ((::AdwSidebarItem*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// gboolean adw_sidebar_item_get_use_underline (AdwSidebarItem* self /*none*/);
// gboolean adw_sidebar_item_get_use_underline (::AdwSidebarItem* self /*none*/);
bool base::SidebarItemBase::get_use_underline () noexcept
{
  typedef gboolean (*call_wrap_t) (::AdwSidebarItem* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_sidebar_item_get_use_underline;
  auto _temp_ret = call_wrap_v ((::AdwSidebarItem*) (gobj_()));
  return _temp_ret;
}

// gboolean adw_sidebar_item_get_visible (AdwSidebarItem* self /*none*/);
// gboolean adw_sidebar_item_get_visible (::AdwSidebarItem* self /*none*/);
bool base::SidebarItemBase::get_visible () noexcept
{
  typedef gboolean (*call_wrap_t) (::AdwSidebarItem* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_sidebar_item_get_visible;
  auto _temp_ret = call_wrap_v ((::AdwSidebarItem*) (gobj_()));
  return _temp_ret;
}

// void adw_sidebar_item_set_drag_motion_activate (AdwSidebarItem* self /*none*/, gboolean drag_motion_activate);
// void adw_sidebar_item_set_drag_motion_activate (::AdwSidebarItem* self /*none*/, gboolean drag_motion_activate);
void base::SidebarItemBase::set_drag_motion_activate (gboolean drag_motion_activate) noexcept
{
  typedef void (*call_wrap_t) (::AdwSidebarItem* self, gboolean drag_motion_activate);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_sidebar_item_set_drag_motion_activate;
  auto drag_motion_activate_to_c = drag_motion_activate;
  call_wrap_v ((::AdwSidebarItem*) (gobj_()), (gboolean) (drag_motion_activate_to_c));
}

// void adw_sidebar_item_set_enabled (AdwSidebarItem* self /*none*/, gboolean enabled);
// void adw_sidebar_item_set_enabled (::AdwSidebarItem* self /*none*/, gboolean enabled);
void base::SidebarItemBase::set_enabled (gboolean enabled) noexcept
{
  typedef void (*call_wrap_t) (::AdwSidebarItem* self, gboolean enabled);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_sidebar_item_set_enabled;
  auto enabled_to_c = enabled;
  call_wrap_v ((::AdwSidebarItem*) (gobj_()), (gboolean) (enabled_to_c));
}

// void adw_sidebar_item_set_icon_name (AdwSidebarItem* self /*none*/, const char* icon_name /*none,nullable*/);
// void adw_sidebar_item_set_icon_name (::AdwSidebarItem* self /*none*/, const char* icon_name /*none,nullable*/);
void base::SidebarItemBase::set_icon_name (const gi::cstring_v icon_name) noexcept
{
  typedef void (*call_wrap_t) (::AdwSidebarItem* self, const char* icon_name);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_sidebar_item_set_icon_name;
  auto icon_name_to_c = gi::unwrap (icon_name, gi::transfer_none);
  call_wrap_v ((::AdwSidebarItem*) (gobj_()), (const char*) (icon_name_to_c));
}
void base::SidebarItemBase::set_icon_name () noexcept
{
  typedef void (*call_wrap_t) (::AdwSidebarItem* self, const char* icon_name);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_sidebar_item_set_icon_name;
  auto icon_name_to_c = nullptr;
  call_wrap_v ((::AdwSidebarItem*) (gobj_()), (const char*) (icon_name_to_c));
}

// void adw_sidebar_item_set_icon_paintable (AdwSidebarItem* self /*none*/, GdkPaintable* paintable /*none,nullable*/);
// void adw_sidebar_item_set_icon_paintable (::AdwSidebarItem* self /*none*/, ::GdkPaintable* paintable /*none,nullable*/);
void base::SidebarItemBase::set_icon_paintable (Gdk::Paintable paintable) noexcept
{
  typedef void (*call_wrap_t) (::AdwSidebarItem* self, ::GdkPaintable* paintable);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_sidebar_item_set_icon_paintable;
  auto paintable_to_c = gi::unwrap (paintable, gi::transfer_none);
  call_wrap_v ((::AdwSidebarItem*) (gobj_()), (::GdkPaintable*) (paintable_to_c));
}
void base::SidebarItemBase::set_icon_paintable () noexcept
{
  typedef void (*call_wrap_t) (::AdwSidebarItem* self, ::GdkPaintable* paintable);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_sidebar_item_set_icon_paintable;
  auto paintable_to_c = nullptr;
  call_wrap_v ((::AdwSidebarItem*) (gobj_()), (::GdkPaintable*) (paintable_to_c));
}

// void adw_sidebar_item_set_subtitle (AdwSidebarItem* self /*none*/, const char* subtitle /*none,nullable*/);
// void adw_sidebar_item_set_subtitle (::AdwSidebarItem* self /*none*/, const char* subtitle /*none,nullable*/);
void base::SidebarItemBase::set_subtitle (const gi::cstring_v subtitle) noexcept
{
  typedef void (*call_wrap_t) (::AdwSidebarItem* self, const char* subtitle);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_sidebar_item_set_subtitle;
  auto subtitle_to_c = gi::unwrap (subtitle, gi::transfer_none);
  call_wrap_v ((::AdwSidebarItem*) (gobj_()), (const char*) (subtitle_to_c));
}
void base::SidebarItemBase::set_subtitle () noexcept
{
  typedef void (*call_wrap_t) (::AdwSidebarItem* self, const char* subtitle);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_sidebar_item_set_subtitle;
  auto subtitle_to_c = nullptr;
  call_wrap_v ((::AdwSidebarItem*) (gobj_()), (const char*) (subtitle_to_c));
}

// void adw_sidebar_item_set_suffix (AdwSidebarItem* self /*none*/, GtkWidget* suffix /*none,nullable*/);
// void adw_sidebar_item_set_suffix (::AdwSidebarItem* self /*none*/, ::GtkWidget* suffix /*none,nullable*/);
void base::SidebarItemBase::set_suffix (Gtk::Widget suffix) noexcept
{
  typedef void (*call_wrap_t) (::AdwSidebarItem* self, ::GtkWidget* suffix);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_sidebar_item_set_suffix;
  auto suffix_to_c = gi::unwrap (suffix, gi::transfer_none);
  call_wrap_v ((::AdwSidebarItem*) (gobj_()), (::GtkWidget*) (suffix_to_c));
}
void base::SidebarItemBase::set_suffix () noexcept
{
  typedef void (*call_wrap_t) (::AdwSidebarItem* self, ::GtkWidget* suffix);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_sidebar_item_set_suffix;
  auto suffix_to_c = nullptr;
  call_wrap_v ((::AdwSidebarItem*) (gobj_()), (::GtkWidget*) (suffix_to_c));
}

// void adw_sidebar_item_set_title (AdwSidebarItem* self /*none*/, const char* title /*none,nullable*/);
// void adw_sidebar_item_set_title (::AdwSidebarItem* self /*none*/, const char* title /*none,nullable*/);
void base::SidebarItemBase::set_title (const gi::cstring_v title) noexcept
{
  typedef void (*call_wrap_t) (::AdwSidebarItem* self, const char* title);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_sidebar_item_set_title;
  auto title_to_c = gi::unwrap (title, gi::transfer_none);
  call_wrap_v ((::AdwSidebarItem*) (gobj_()), (const char*) (title_to_c));
}
void base::SidebarItemBase::set_title () noexcept
{
  typedef void (*call_wrap_t) (::AdwSidebarItem* self, const char* title);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_sidebar_item_set_title;
  auto title_to_c = nullptr;
  call_wrap_v ((::AdwSidebarItem*) (gobj_()), (const char*) (title_to_c));
}

// void adw_sidebar_item_set_tooltip (AdwSidebarItem* self /*none*/, const char* tooltip /*none,nullable*/);
// void adw_sidebar_item_set_tooltip (::AdwSidebarItem* self /*none*/, const char* tooltip /*none,nullable*/);
void base::SidebarItemBase::set_tooltip (const gi::cstring_v tooltip) noexcept
{
  typedef void (*call_wrap_t) (::AdwSidebarItem* self, const char* tooltip);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_sidebar_item_set_tooltip;
  auto tooltip_to_c = gi::unwrap (tooltip, gi::transfer_none);
  call_wrap_v ((::AdwSidebarItem*) (gobj_()), (const char*) (tooltip_to_c));
}
void base::SidebarItemBase::set_tooltip () noexcept
{
  typedef void (*call_wrap_t) (::AdwSidebarItem* self, const char* tooltip);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_sidebar_item_set_tooltip;
  auto tooltip_to_c = nullptr;
  call_wrap_v ((::AdwSidebarItem*) (gobj_()), (const char*) (tooltip_to_c));
}

// void adw_sidebar_item_set_use_underline (AdwSidebarItem* self /*none*/, gboolean use_underline);
// void adw_sidebar_item_set_use_underline (::AdwSidebarItem* self /*none*/, gboolean use_underline);
void base::SidebarItemBase::set_use_underline (gboolean use_underline) noexcept
{
  typedef void (*call_wrap_t) (::AdwSidebarItem* self, gboolean use_underline);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_sidebar_item_set_use_underline;
  auto use_underline_to_c = use_underline;
  call_wrap_v ((::AdwSidebarItem*) (gobj_()), (gboolean) (use_underline_to_c));
}

// void adw_sidebar_item_set_visible (AdwSidebarItem* self /*none*/, gboolean visible);
// void adw_sidebar_item_set_visible (::AdwSidebarItem* self /*none*/, gboolean visible);
void base::SidebarItemBase::set_visible (gboolean visible) noexcept
{
  typedef void (*call_wrap_t) (::AdwSidebarItem* self, gboolean visible);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_sidebar_item_set_visible;
  auto visible_to_c = visible;
  call_wrap_v ((::AdwSidebarItem*) (gobj_()), (gboolean) (visible_to_c));
}


} // namespace base

} // namespace Adw

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<adw/sidebaritem_extra_def_impl.hpp>)
#include <adw/sidebaritem_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<adw/sidebaritem_extra_impl.hpp>)
#include <adw/sidebaritem_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Adw {

namespace impl {

namespace internal {

void SidebarItemClassDef::class_init (gpointer class_struct, gpointer factory)
{
  ::AdwSidebarItemClass *methods = (::AdwSidebarItemClass *) class_struct;
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
