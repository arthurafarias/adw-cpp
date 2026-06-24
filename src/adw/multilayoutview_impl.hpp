// AUTO-GENERATED

#ifndef _GI_ADW_MULTILAYOUTVIEW_IMPL_HPP_
#define _GI_ADW_MULTILAYOUTVIEW_IMPL_HPP_

namespace gi {

namespace repository {

namespace Adw {

namespace base {

// GtkWidget* /*none*/ adw_multi_layout_view_new ();
// ::AdwMultiLayoutView* /*none*/ adw_multi_layout_view_new ();
Adw::MultiLayoutView base::MultiLayoutViewBase::new_ () noexcept
{
  typedef ::AdwMultiLayoutView* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) adw_multi_layout_view_new;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// void adw_multi_layout_view_add_layout (AdwMultiLayoutView* self /*none*/, AdwLayout* layout /*full*/);
// void adw_multi_layout_view_add_layout (::AdwMultiLayoutView* self /*none*/, ::AdwLayout* layout /*full*/);
void base::MultiLayoutViewBase::add_layout (Adw::Layout layout) noexcept
{
  typedef void (*call_wrap_t) (::AdwMultiLayoutView* self, ::AdwLayout* layout);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_multi_layout_view_add_layout;
  auto layout_to_c = gi::unwrap (layout, gi::transfer_full);
  call_wrap_v ((::AdwMultiLayoutView*) (gobj_()), (::AdwLayout*) (layout_to_c));
}

// GtkWidget* /*none,nullable*/ adw_multi_layout_view_get_child (AdwMultiLayoutView* self /*none*/, const char* id /*none*/);
// ::GtkWidget* /*none,nullable*/ adw_multi_layout_view_get_child (::AdwMultiLayoutView* self /*none*/, const char* id /*none*/);
Gtk::Widget base::MultiLayoutViewBase::get_child (const gi::cstring_v id) noexcept
{
  typedef ::GtkWidget* (*call_wrap_t) (::AdwMultiLayoutView* self, const char* id);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_multi_layout_view_get_child;
  auto id_to_c = gi::unwrap (id, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::AdwMultiLayoutView*) (gobj_()), (const char*) (id_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// AdwLayout* /*none,nullable*/ adw_multi_layout_view_get_layout (AdwMultiLayoutView* self /*none*/);
// ::AdwLayout* /*none,nullable*/ adw_multi_layout_view_get_layout (::AdwMultiLayoutView* self /*none*/);
Adw::Layout base::MultiLayoutViewBase::get_layout () noexcept
{
  typedef ::AdwLayout* (*call_wrap_t) (::AdwMultiLayoutView* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_multi_layout_view_get_layout;
  auto _temp_ret = call_wrap_v ((::AdwMultiLayoutView*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// AdwLayout* /*none,nullable*/ adw_multi_layout_view_get_layout_by_name (AdwMultiLayoutView* self /*none*/, const char* name /*none*/);
// ::AdwLayout* /*none,nullable*/ adw_multi_layout_view_get_layout_by_name (::AdwMultiLayoutView* self /*none*/, const char* name /*none*/);
Adw::Layout base::MultiLayoutViewBase::get_layout_by_name (const gi::cstring_v name) noexcept
{
  typedef ::AdwLayout* (*call_wrap_t) (::AdwMultiLayoutView* self, const char* name);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_multi_layout_view_get_layout_by_name;
  auto name_to_c = gi::unwrap (name, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::AdwMultiLayoutView*) (gobj_()), (const char*) (name_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// const char* /*none,nullable*/ adw_multi_layout_view_get_layout_name (AdwMultiLayoutView* self /*none*/);
// const char* /*none,nullable*/ adw_multi_layout_view_get_layout_name (::AdwMultiLayoutView* self /*none*/);
gi::cstring_v base::MultiLayoutViewBase::get_layout_name () noexcept
{
  typedef const char* (*call_wrap_t) (::AdwMultiLayoutView* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_multi_layout_view_get_layout_name;
  auto _temp_ret = call_wrap_v ((::AdwMultiLayoutView*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// void adw_multi_layout_view_remove_layout (AdwMultiLayoutView* self /*none*/, AdwLayout* layout /*none*/);
// void adw_multi_layout_view_remove_layout (::AdwMultiLayoutView* self /*none*/, ::AdwLayout* layout /*none*/);
void base::MultiLayoutViewBase::remove_layout (Adw::Layout layout) noexcept
{
  typedef void (*call_wrap_t) (::AdwMultiLayoutView* self, ::AdwLayout* layout);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_multi_layout_view_remove_layout;
  auto layout_to_c = gi::unwrap (layout, gi::transfer_none);
  call_wrap_v ((::AdwMultiLayoutView*) (gobj_()), (::AdwLayout*) (layout_to_c));
}

// void adw_multi_layout_view_set_child (AdwMultiLayoutView* self /*none*/, const char* id /*none*/, GtkWidget* child /*none*/);
// void adw_multi_layout_view_set_child (::AdwMultiLayoutView* self /*none*/, const char* id /*none*/, ::GtkWidget* child /*none*/);
void base::MultiLayoutViewBase::set_child (const gi::cstring_v id, Gtk::Widget child) noexcept
{
  typedef void (*call_wrap_t) (::AdwMultiLayoutView* self, const char* id, ::GtkWidget* child);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_multi_layout_view_set_child;
  auto child_to_c = gi::unwrap (child, gi::transfer_none);
  auto id_to_c = gi::unwrap (id, gi::transfer_none);
  call_wrap_v ((::AdwMultiLayoutView*) (gobj_()), (const char*) (id_to_c), (::GtkWidget*) (child_to_c));
}

// void adw_multi_layout_view_set_layout (AdwMultiLayoutView* self /*none*/, AdwLayout* layout /*none*/);
// void adw_multi_layout_view_set_layout (::AdwMultiLayoutView* self /*none*/, ::AdwLayout* layout /*none*/);
void base::MultiLayoutViewBase::set_layout (Adw::Layout layout) noexcept
{
  typedef void (*call_wrap_t) (::AdwMultiLayoutView* self, ::AdwLayout* layout);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_multi_layout_view_set_layout;
  auto layout_to_c = gi::unwrap (layout, gi::transfer_none);
  call_wrap_v ((::AdwMultiLayoutView*) (gobj_()), (::AdwLayout*) (layout_to_c));
}

// void adw_multi_layout_view_set_layout_name (AdwMultiLayoutView* self /*none*/, const char* name /*none*/);
// void adw_multi_layout_view_set_layout_name (::AdwMultiLayoutView* self /*none*/, const char* name /*none*/);
void base::MultiLayoutViewBase::set_layout_name (const gi::cstring_v name) noexcept
{
  typedef void (*call_wrap_t) (::AdwMultiLayoutView* self, const char* name);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_multi_layout_view_set_layout_name;
  auto name_to_c = gi::unwrap (name, gi::transfer_none);
  call_wrap_v ((::AdwMultiLayoutView*) (gobj_()), (const char*) (name_to_c));
}


} // namespace base

} // namespace Adw

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<adw/multilayoutview_extra_def_impl.hpp>)
#include <adw/multilayoutview_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<adw/multilayoutview_extra_impl.hpp>)
#include <adw/multilayoutview_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Adw {

namespace impl {

namespace internal {

void MultiLayoutViewClassDef::class_init (gpointer class_struct, gpointer factory)
{
  ::AdwMultiLayoutViewClass *methods = (::AdwMultiLayoutViewClass *) class_struct;
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
