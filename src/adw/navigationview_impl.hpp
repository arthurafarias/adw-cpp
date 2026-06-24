// AUTO-GENERATED

#ifndef _GI_ADW_NAVIGATIONVIEW_IMPL_HPP_
#define _GI_ADW_NAVIGATIONVIEW_IMPL_HPP_

namespace gi {

namespace repository {

namespace Adw {

namespace base {

Adw::Swipeable NavigationViewBase::interface_ (gi::interface_tag<Adw::Swipeable>)
{ return gi::wrap ((Adw::Swipeable::BaseObjectType*) gobj_copy_(), gi::transfer_full); }

NavigationViewBase::operator Adw::Swipeable ()
{ return interface_ (gi::interface_tag<Adw::Swipeable>()); }

// GtkWidget* /*none*/ adw_navigation_view_new ();
// ::AdwNavigationView* /*none*/ adw_navigation_view_new ();
Adw::NavigationView base::NavigationViewBase::new_ () noexcept
{
  typedef ::AdwNavigationView* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) adw_navigation_view_new;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// void adw_navigation_view_add (AdwNavigationView* self /*none*/, AdwNavigationPage* page /*none*/);
// void adw_navigation_view_add (::AdwNavigationView* self /*none*/, ::AdwNavigationPage* page /*none*/);
void base::NavigationViewBase::add (Adw::NavigationPage page) noexcept
{
  typedef void (*call_wrap_t) (::AdwNavigationView* self, ::AdwNavigationPage* page);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_navigation_view_add;
  auto page_to_c = gi::unwrap (page, gi::transfer_none);
  call_wrap_v ((::AdwNavigationView*) (gobj_()), (::AdwNavigationPage*) (page_to_c));
}

// AdwNavigationPage* /*none,nullable*/ adw_navigation_view_find_page (AdwNavigationView* self /*none*/, const char* tag /*none*/);
// ::AdwNavigationPage* /*none,nullable*/ adw_navigation_view_find_page (::AdwNavigationView* self /*none*/, const char* tag /*none*/);
Adw::NavigationPage base::NavigationViewBase::find_page (const gi::cstring_v tag) noexcept
{
  typedef ::AdwNavigationPage* (*call_wrap_t) (::AdwNavigationView* self, const char* tag);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_navigation_view_find_page;
  auto tag_to_c = gi::unwrap (tag, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::AdwNavigationView*) (gobj_()), (const char*) (tag_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// gboolean adw_navigation_view_get_animate_transitions (AdwNavigationView* self /*none*/);
// gboolean adw_navigation_view_get_animate_transitions (::AdwNavigationView* self /*none*/);
bool base::NavigationViewBase::get_animate_transitions () noexcept
{
  typedef gboolean (*call_wrap_t) (::AdwNavigationView* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_navigation_view_get_animate_transitions;
  auto _temp_ret = call_wrap_v ((::AdwNavigationView*) (gobj_()));
  return _temp_ret;
}

// gboolean adw_navigation_view_get_hhomogeneous (AdwNavigationView* self /*none*/);
// gboolean adw_navigation_view_get_hhomogeneous (::AdwNavigationView* self /*none*/);
bool base::NavigationViewBase::get_hhomogeneous () noexcept
{
  typedef gboolean (*call_wrap_t) (::AdwNavigationView* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_navigation_view_get_hhomogeneous;
  auto _temp_ret = call_wrap_v ((::AdwNavigationView*) (gobj_()));
  return _temp_ret;
}

// GListModel* /*full*/ adw_navigation_view_get_navigation_stack (AdwNavigationView* self /*none*/);
// ::GListModel* /*full*/ adw_navigation_view_get_navigation_stack (::AdwNavigationView* self /*none*/);
Gio::ListModel base::NavigationViewBase::get_navigation_stack () noexcept
{
  typedef ::GListModel* (*call_wrap_t) (::AdwNavigationView* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_navigation_view_get_navigation_stack;
  auto _temp_ret = call_wrap_v ((::AdwNavigationView*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// gboolean adw_navigation_view_get_pop_on_escape (AdwNavigationView* self /*none*/);
// gboolean adw_navigation_view_get_pop_on_escape (::AdwNavigationView* self /*none*/);
bool base::NavigationViewBase::get_pop_on_escape () noexcept
{
  typedef gboolean (*call_wrap_t) (::AdwNavigationView* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_navigation_view_get_pop_on_escape;
  auto _temp_ret = call_wrap_v ((::AdwNavigationView*) (gobj_()));
  return _temp_ret;
}

// AdwNavigationPage* /*none,nullable*/ adw_navigation_view_get_previous_page (AdwNavigationView* self /*none*/, AdwNavigationPage* page /*none*/);
// ::AdwNavigationPage* /*none,nullable*/ adw_navigation_view_get_previous_page (::AdwNavigationView* self /*none*/, ::AdwNavigationPage* page /*none*/);
Adw::NavigationPage base::NavigationViewBase::get_previous_page (Adw::NavigationPage page) noexcept
{
  typedef ::AdwNavigationPage* (*call_wrap_t) (::AdwNavigationView* self, ::AdwNavigationPage* page);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_navigation_view_get_previous_page;
  auto page_to_c = gi::unwrap (page, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::AdwNavigationView*) (gobj_()), (::AdwNavigationPage*) (page_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// gboolean adw_navigation_view_get_vhomogeneous (AdwNavigationView* self /*none*/);
// gboolean adw_navigation_view_get_vhomogeneous (::AdwNavigationView* self /*none*/);
bool base::NavigationViewBase::get_vhomogeneous () noexcept
{
  typedef gboolean (*call_wrap_t) (::AdwNavigationView* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_navigation_view_get_vhomogeneous;
  auto _temp_ret = call_wrap_v ((::AdwNavigationView*) (gobj_()));
  return _temp_ret;
}

// AdwNavigationPage* /*none,nullable*/ adw_navigation_view_get_visible_page (AdwNavigationView* self /*none*/);
// ::AdwNavigationPage* /*none,nullable*/ adw_navigation_view_get_visible_page (::AdwNavigationView* self /*none*/);
Adw::NavigationPage base::NavigationViewBase::get_visible_page () noexcept
{
  typedef ::AdwNavigationPage* (*call_wrap_t) (::AdwNavigationView* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_navigation_view_get_visible_page;
  auto _temp_ret = call_wrap_v ((::AdwNavigationView*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// const char* /*none,nullable*/ adw_navigation_view_get_visible_page_tag (AdwNavigationView* self /*none*/);
// const char* /*none,nullable*/ adw_navigation_view_get_visible_page_tag (::AdwNavigationView* self /*none*/);
gi::cstring_v base::NavigationViewBase::get_visible_page_tag () noexcept
{
  typedef const char* (*call_wrap_t) (::AdwNavigationView* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_navigation_view_get_visible_page_tag;
  auto _temp_ret = call_wrap_v ((::AdwNavigationView*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// gboolean adw_navigation_view_pop (AdwNavigationView* self /*none*/);
// gboolean adw_navigation_view_pop (::AdwNavigationView* self /*none*/);
bool base::NavigationViewBase::pop () noexcept
{
  typedef gboolean (*call_wrap_t) (::AdwNavigationView* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_navigation_view_pop;
  auto _temp_ret = call_wrap_v ((::AdwNavigationView*) (gobj_()));
  return _temp_ret;
}

// gboolean adw_navigation_view_pop_to_page (AdwNavigationView* self /*none*/, AdwNavigationPage* page /*none*/);
// gboolean adw_navigation_view_pop_to_page (::AdwNavigationView* self /*none*/, ::AdwNavigationPage* page /*none*/);
bool base::NavigationViewBase::pop_to_page (Adw::NavigationPage page) noexcept
{
  typedef gboolean (*call_wrap_t) (::AdwNavigationView* self, ::AdwNavigationPage* page);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_navigation_view_pop_to_page;
  auto page_to_c = gi::unwrap (page, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::AdwNavigationView*) (gobj_()), (::AdwNavigationPage*) (page_to_c));
  return _temp_ret;
}

// gboolean adw_navigation_view_pop_to_tag (AdwNavigationView* self /*none*/, const char* tag /*none*/);
// gboolean adw_navigation_view_pop_to_tag (::AdwNavigationView* self /*none*/, const char* tag /*none*/);
bool base::NavigationViewBase::pop_to_tag (const gi::cstring_v tag) noexcept
{
  typedef gboolean (*call_wrap_t) (::AdwNavigationView* self, const char* tag);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_navigation_view_pop_to_tag;
  auto tag_to_c = gi::unwrap (tag, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::AdwNavigationView*) (gobj_()), (const char*) (tag_to_c));
  return _temp_ret;
}

// void adw_navigation_view_push (AdwNavigationView* self /*none*/, AdwNavigationPage* page /*none*/);
// void adw_navigation_view_push (::AdwNavigationView* self /*none*/, ::AdwNavigationPage* page /*none*/);
void base::NavigationViewBase::push (Adw::NavigationPage page) noexcept
{
  typedef void (*call_wrap_t) (::AdwNavigationView* self, ::AdwNavigationPage* page);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_navigation_view_push;
  auto page_to_c = gi::unwrap (page, gi::transfer_none);
  call_wrap_v ((::AdwNavigationView*) (gobj_()), (::AdwNavigationPage*) (page_to_c));
}

// void adw_navigation_view_push_by_tag (AdwNavigationView* self /*none*/, const char* tag /*none*/);
// void adw_navigation_view_push_by_tag (::AdwNavigationView* self /*none*/, const char* tag /*none*/);
void base::NavigationViewBase::push_by_tag (const gi::cstring_v tag) noexcept
{
  typedef void (*call_wrap_t) (::AdwNavigationView* self, const char* tag);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_navigation_view_push_by_tag;
  auto tag_to_c = gi::unwrap (tag, gi::transfer_none);
  call_wrap_v ((::AdwNavigationView*) (gobj_()), (const char*) (tag_to_c));
}

// void adw_navigation_view_remove (AdwNavigationView* self /*none*/, AdwNavigationPage* page /*none*/);
// void adw_navigation_view_remove (::AdwNavigationView* self /*none*/, ::AdwNavigationPage* page /*none*/);
void base::NavigationViewBase::remove (Adw::NavigationPage page) noexcept
{
  typedef void (*call_wrap_t) (::AdwNavigationView* self, ::AdwNavigationPage* page);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_navigation_view_remove;
  auto page_to_c = gi::unwrap (page, gi::transfer_none);
  call_wrap_v ((::AdwNavigationView*) (gobj_()), (::AdwNavigationPage*) (page_to_c));
}

// void adw_navigation_view_replace (AdwNavigationView* self /*none*/, AdwNavigationPage** pages /*none*/, int n_pages);
// void adw_navigation_view_replace (::AdwNavigationView* self /*none*/, ::AdwNavigationPage** pages /*none*/, gint n_pages);
void base::NavigationViewBase::replace (gi::CollectionParameter<gi::DSpan, ::AdwNavigationPage*, gi::transfer_none_t> pages) noexcept
{
  typedef void (*call_wrap_t) (::AdwNavigationView* self, ::AdwNavigationPage** pages, gint n_pages);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_navigation_view_replace;
  auto pages_w = unwrap (std::move(pages), gi::transfer_none);
  auto pages_to_c = pages_w;
  call_wrap_v ((::AdwNavigationView*) (gobj_()), (::AdwNavigationPage**) (pages_to_c), (gint) (pages._size()));
}

// void adw_navigation_view_replace_with_tags (AdwNavigationView* self /*none*/, const char* const* tags /*none*/, int n_tags);
// void adw_navigation_view_replace_with_tags (::AdwNavigationView* self /*none*/, const char** tags /*none*/, gint n_tags);
void base::NavigationViewBase::replace_with_tags (gi::CollectionParameter<gi::DSpan, char*, gi::transfer_none_t> tags) noexcept
{
  typedef void (*call_wrap_t) (::AdwNavigationView* self, const char** tags, gint n_tags);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_navigation_view_replace_with_tags;
  auto tags_w = unwrap (std::move(tags), gi::transfer_none);
  auto tags_to_c = tags_w;
  call_wrap_v ((::AdwNavigationView*) (gobj_()), (const char**) (tags_to_c), (gint) (tags._size()));
}

// void adw_navigation_view_set_animate_transitions (AdwNavigationView* self /*none*/, gboolean animate_transitions);
// void adw_navigation_view_set_animate_transitions (::AdwNavigationView* self /*none*/, gboolean animate_transitions);
void base::NavigationViewBase::set_animate_transitions (gboolean animate_transitions) noexcept
{
  typedef void (*call_wrap_t) (::AdwNavigationView* self, gboolean animate_transitions);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_navigation_view_set_animate_transitions;
  auto animate_transitions_to_c = animate_transitions;
  call_wrap_v ((::AdwNavigationView*) (gobj_()), (gboolean) (animate_transitions_to_c));
}

// void adw_navigation_view_set_hhomogeneous (AdwNavigationView* self /*none*/, gboolean hhomogeneous);
// void adw_navigation_view_set_hhomogeneous (::AdwNavigationView* self /*none*/, gboolean hhomogeneous);
void base::NavigationViewBase::set_hhomogeneous (gboolean hhomogeneous) noexcept
{
  typedef void (*call_wrap_t) (::AdwNavigationView* self, gboolean hhomogeneous);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_navigation_view_set_hhomogeneous;
  auto hhomogeneous_to_c = hhomogeneous;
  call_wrap_v ((::AdwNavigationView*) (gobj_()), (gboolean) (hhomogeneous_to_c));
}

// void adw_navigation_view_set_pop_on_escape (AdwNavigationView* self /*none*/, gboolean pop_on_escape);
// void adw_navigation_view_set_pop_on_escape (::AdwNavigationView* self /*none*/, gboolean pop_on_escape);
void base::NavigationViewBase::set_pop_on_escape (gboolean pop_on_escape) noexcept
{
  typedef void (*call_wrap_t) (::AdwNavigationView* self, gboolean pop_on_escape);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_navigation_view_set_pop_on_escape;
  auto pop_on_escape_to_c = pop_on_escape;
  call_wrap_v ((::AdwNavigationView*) (gobj_()), (gboolean) (pop_on_escape_to_c));
}

// void adw_navigation_view_set_vhomogeneous (AdwNavigationView* self /*none*/, gboolean vhomogeneous);
// void adw_navigation_view_set_vhomogeneous (::AdwNavigationView* self /*none*/, gboolean vhomogeneous);
void base::NavigationViewBase::set_vhomogeneous (gboolean vhomogeneous) noexcept
{
  typedef void (*call_wrap_t) (::AdwNavigationView* self, gboolean vhomogeneous);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_navigation_view_set_vhomogeneous;
  auto vhomogeneous_to_c = vhomogeneous;
  call_wrap_v ((::AdwNavigationView*) (gobj_()), (gboolean) (vhomogeneous_to_c));
}






} // namespace base

} // namespace Adw

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<adw/navigationview_extra_def_impl.hpp>)
#include <adw/navigationview_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<adw/navigationview_extra_impl.hpp>)
#include <adw/navigationview_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Adw {

namespace impl {

namespace internal {

void NavigationViewClassDef::class_init (gpointer class_struct, gpointer factory)
{
  ::AdwNavigationViewClass *methods = (::AdwNavigationViewClass *) class_struct;
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
