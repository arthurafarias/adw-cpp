// AUTO-GENERATED

#ifndef _GI_ADW_NAVIGATIONPAGE_IMPL_HPP_
#define _GI_ADW_NAVIGATIONPAGE_IMPL_HPP_

namespace gi {

namespace repository {

namespace Adw {

namespace base {

// AdwNavigationPage* /*none*/ adw_navigation_page_new (GtkWidget* child /*none*/, const char* title /*none*/);
// ::AdwNavigationPage* /*none*/ adw_navigation_page_new (::GtkWidget* child /*none*/, const char* title /*none*/);
Adw::NavigationPage base::NavigationPageBase::new_ (Gtk::Widget child, const gi::cstring_v title) noexcept
{
  typedef ::AdwNavigationPage* (*call_wrap_t) (::GtkWidget* child, const char* title);
  call_wrap_t call_wrap_v = (call_wrap_t) adw_navigation_page_new;
  auto title_to_c = gi::unwrap (title, gi::transfer_none);
  auto child_to_c = gi::unwrap (child, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GtkWidget*) (child_to_c), (const char*) (title_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// AdwNavigationPage* /*none*/ adw_navigation_page_new_with_tag (GtkWidget* child /*none*/, const char* title /*none*/, const char* tag /*none*/);
// ::AdwNavigationPage* /*none*/ adw_navigation_page_new_with_tag (::GtkWidget* child /*none*/, const char* title /*none*/, const char* tag /*none*/);
Adw::NavigationPage base::NavigationPageBase::new_with_tag (Gtk::Widget child, const gi::cstring_v title, const gi::cstring_v tag) noexcept
{
  typedef ::AdwNavigationPage* (*call_wrap_t) (::GtkWidget* child, const char* title, const char* tag);
  call_wrap_t call_wrap_v = (call_wrap_t) adw_navigation_page_new_with_tag;
  auto tag_to_c = gi::unwrap (tag, gi::transfer_none);
  auto title_to_c = gi::unwrap (title, gi::transfer_none);
  auto child_to_c = gi::unwrap (child, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GtkWidget*) (child_to_c), (const char*) (title_to_c), (const char*) (tag_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// gboolean adw_navigation_page_get_can_pop (AdwNavigationPage* self /*none*/);
// gboolean adw_navigation_page_get_can_pop (::AdwNavigationPage* self /*none*/);
bool base::NavigationPageBase::get_can_pop () noexcept
{
  typedef gboolean (*call_wrap_t) (::AdwNavigationPage* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_navigation_page_get_can_pop;
  auto _temp_ret = call_wrap_v ((::AdwNavigationPage*) (gobj_()));
  return _temp_ret;
}

// GtkWidget* /*none,nullable*/ adw_navigation_page_get_child (AdwNavigationPage* self /*none*/);
// ::GtkWidget* /*none,nullable*/ adw_navigation_page_get_child (::AdwNavigationPage* self /*none*/);
Gtk::Widget base::NavigationPageBase::get_child () noexcept
{
  typedef ::GtkWidget* (*call_wrap_t) (::AdwNavigationPage* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_navigation_page_get_child;
  auto _temp_ret = call_wrap_v ((::AdwNavigationPage*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// const char* /*none,nullable*/ adw_navigation_page_get_tag (AdwNavigationPage* self /*none*/);
// const char* /*none,nullable*/ adw_navigation_page_get_tag (::AdwNavigationPage* self /*none*/);
gi::cstring_v base::NavigationPageBase::get_tag () noexcept
{
  typedef const char* (*call_wrap_t) (::AdwNavigationPage* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_navigation_page_get_tag;
  auto _temp_ret = call_wrap_v ((::AdwNavigationPage*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// const char* /*none*/ adw_navigation_page_get_title (AdwNavigationPage* self /*none*/);
// const char* /*none*/ adw_navigation_page_get_title (::AdwNavigationPage* self /*none*/);
gi::cstring_v base::NavigationPageBase::get_title () noexcept
{
  typedef const char* (*call_wrap_t) (::AdwNavigationPage* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_navigation_page_get_title;
  auto _temp_ret = call_wrap_v ((::AdwNavigationPage*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// void adw_navigation_page_set_can_pop (AdwNavigationPage* self /*none*/, gboolean can_pop);
// void adw_navigation_page_set_can_pop (::AdwNavigationPage* self /*none*/, gboolean can_pop);
void base::NavigationPageBase::set_can_pop (gboolean can_pop) noexcept
{
  typedef void (*call_wrap_t) (::AdwNavigationPage* self, gboolean can_pop);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_navigation_page_set_can_pop;
  auto can_pop_to_c = can_pop;
  call_wrap_v ((::AdwNavigationPage*) (gobj_()), (gboolean) (can_pop_to_c));
}

// void adw_navigation_page_set_child (AdwNavigationPage* self /*none*/, GtkWidget* child /*none,nullable*/);
// void adw_navigation_page_set_child (::AdwNavigationPage* self /*none*/, ::GtkWidget* child /*none,nullable*/);
void base::NavigationPageBase::set_child (Gtk::Widget child) noexcept
{
  typedef void (*call_wrap_t) (::AdwNavigationPage* self, ::GtkWidget* child);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_navigation_page_set_child;
  auto child_to_c = gi::unwrap (child, gi::transfer_none);
  call_wrap_v ((::AdwNavigationPage*) (gobj_()), (::GtkWidget*) (child_to_c));
}
void base::NavigationPageBase::set_child () noexcept
{
  typedef void (*call_wrap_t) (::AdwNavigationPage* self, ::GtkWidget* child);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_navigation_page_set_child;
  auto child_to_c = nullptr;
  call_wrap_v ((::AdwNavigationPage*) (gobj_()), (::GtkWidget*) (child_to_c));
}

// void adw_navigation_page_set_tag (AdwNavigationPage* self /*none*/, const char* tag /*none,nullable*/);
// void adw_navigation_page_set_tag (::AdwNavigationPage* self /*none*/, const char* tag /*none,nullable*/);
void base::NavigationPageBase::set_tag (const gi::cstring_v tag) noexcept
{
  typedef void (*call_wrap_t) (::AdwNavigationPage* self, const char* tag);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_navigation_page_set_tag;
  auto tag_to_c = gi::unwrap (tag, gi::transfer_none);
  call_wrap_v ((::AdwNavigationPage*) (gobj_()), (const char*) (tag_to_c));
}
void base::NavigationPageBase::set_tag () noexcept
{
  typedef void (*call_wrap_t) (::AdwNavigationPage* self, const char* tag);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_navigation_page_set_tag;
  auto tag_to_c = nullptr;
  call_wrap_v ((::AdwNavigationPage*) (gobj_()), (const char*) (tag_to_c));
}

// void adw_navigation_page_set_title (AdwNavigationPage* self /*none*/, const char* title /*none*/);
// void adw_navigation_page_set_title (::AdwNavigationPage* self /*none*/, const char* title /*none*/);
void base::NavigationPageBase::set_title (const gi::cstring_v title) noexcept
{
  typedef void (*call_wrap_t) (::AdwNavigationPage* self, const char* title);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_navigation_page_set_title;
  auto title_to_c = gi::unwrap (title, gi::transfer_none);
  call_wrap_v ((::AdwNavigationPage*) (gobj_()), (const char*) (title_to_c));
}






} // namespace base

} // namespace Adw

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<adw/navigationpage_extra_def_impl.hpp>)
#include <adw/navigationpage_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<adw/navigationpage_extra_impl.hpp>)
#include <adw/navigationpage_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Adw {

namespace impl {

namespace internal {

void NavigationPageClassDef::class_init (gpointer class_struct, gpointer factory)
{
  ::AdwNavigationPageClass *methods = (::AdwNavigationPageClass *) class_struct;
  (void) methods;

  auto init_data = GI_MEMBER_INIT_DATA(TypeInitData, factory);
  (void) init_data;

  if (init_data.hidden) methods->hidden = (decltype (methods->hidden)) gi::detail::method_wrapper<self, void (*) (), gi::transfer_full_t, std::tuple<>>::wrapper<&self::hidden_>;
  if (init_data.hiding) methods->hiding = (decltype (methods->hiding)) gi::detail::method_wrapper<self, void (*) (), gi::transfer_full_t, std::tuple<>>::wrapper<&self::hiding_>;
  if (init_data.showing) methods->showing = (decltype (methods->showing)) gi::detail::method_wrapper<self, void (*) (), gi::transfer_full_t, std::tuple<>>::wrapper<&self::showing_>;
  if (init_data.shown) methods->shown = (decltype (methods->shown)) gi::detail::method_wrapper<self, void (*) (), gi::transfer_full_t, std::tuple<>>::wrapper<&self::shown_>;
}

// void NavigationPage::hidden (AdwNavigationPage* self /*none*/);
// void NavigationPage::hidden (::AdwNavigationPage* self /*none*/);
void NavigationPageClass::hidden_ () noexcept
{
  if (!get_struct_()->hidden) { g_critical ("no method in class struct"); return ; }
  typedef void (*call_wrap_t) (::AdwNavigationPage* self);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->hidden;
  call_wrap_v ((::AdwNavigationPage*) (gobj_()));
}

// void NavigationPage::hiding (AdwNavigationPage* self /*none*/);
// void NavigationPage::hiding (::AdwNavigationPage* self /*none*/);
void NavigationPageClass::hiding_ () noexcept
{
  if (!get_struct_()->hiding) { g_critical ("no method in class struct"); return ; }
  typedef void (*call_wrap_t) (::AdwNavigationPage* self);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->hiding;
  call_wrap_v ((::AdwNavigationPage*) (gobj_()));
}

// void NavigationPage::showing (AdwNavigationPage* self /*none*/);
// void NavigationPage::showing (::AdwNavigationPage* self /*none*/);
void NavigationPageClass::showing_ () noexcept
{
  if (!get_struct_()->showing) { g_critical ("no method in class struct"); return ; }
  typedef void (*call_wrap_t) (::AdwNavigationPage* self);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->showing;
  call_wrap_v ((::AdwNavigationPage*) (gobj_()));
}

// void NavigationPage::shown (AdwNavigationPage* self /*none*/);
// void NavigationPage::shown (::AdwNavigationPage* self /*none*/);
void NavigationPageClass::shown_ () noexcept
{
  if (!get_struct_()->shown) { g_critical ("no method in class struct"); return ; }
  typedef void (*call_wrap_t) (::AdwNavigationPage* self);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->shown;
  call_wrap_v ((::AdwNavigationPage*) (gobj_()));
}

} // namespace internal

} // namespace impl

} // namespace Adw

} // namespace repository

} // namespace gi

#endif
