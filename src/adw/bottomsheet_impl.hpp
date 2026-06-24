// AUTO-GENERATED

#ifndef _GI_ADW_BOTTOMSHEET_IMPL_HPP_
#define _GI_ADW_BOTTOMSHEET_IMPL_HPP_

namespace gi {

namespace repository {

namespace Adw {

namespace base {

Adw::Swipeable BottomSheetBase::interface_ (gi::interface_tag<Adw::Swipeable>)
{ return gi::wrap ((Adw::Swipeable::BaseObjectType*) gobj_copy_(), gi::transfer_full); }

BottomSheetBase::operator Adw::Swipeable ()
{ return interface_ (gi::interface_tag<Adw::Swipeable>()); }

// GtkWidget* /*none*/ adw_bottom_sheet_new ();
// ::AdwBottomSheet* /*none*/ adw_bottom_sheet_new ();
Adw::BottomSheet base::BottomSheetBase::new_ () noexcept
{
  typedef ::AdwBottomSheet* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) adw_bottom_sheet_new;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// float adw_bottom_sheet_get_align (AdwBottomSheet* self /*none*/);
// gfloat adw_bottom_sheet_get_align (::AdwBottomSheet* self /*none*/);
gfloat base::BottomSheetBase::get_align () noexcept
{
  typedef gfloat (*call_wrap_t) (::AdwBottomSheet* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_bottom_sheet_get_align;
  auto _temp_ret = call_wrap_v ((::AdwBottomSheet*) (gobj_()));
  return _temp_ret;
}

// GtkWidget* /*none,nullable*/ adw_bottom_sheet_get_bottom_bar (AdwBottomSheet* self /*none*/);
// ::GtkWidget* /*none,nullable*/ adw_bottom_sheet_get_bottom_bar (::AdwBottomSheet* self /*none*/);
Gtk::Widget base::BottomSheetBase::get_bottom_bar () noexcept
{
  typedef ::GtkWidget* (*call_wrap_t) (::AdwBottomSheet* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_bottom_sheet_get_bottom_bar;
  auto _temp_ret = call_wrap_v ((::AdwBottomSheet*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// int adw_bottom_sheet_get_bottom_bar_height (AdwBottomSheet* self /*none*/);
// gint adw_bottom_sheet_get_bottom_bar_height (::AdwBottomSheet* self /*none*/);
gint base::BottomSheetBase::get_bottom_bar_height () noexcept
{
  typedef gint (*call_wrap_t) (::AdwBottomSheet* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_bottom_sheet_get_bottom_bar_height;
  auto _temp_ret = call_wrap_v ((::AdwBottomSheet*) (gobj_()));
  return _temp_ret;
}

// gboolean adw_bottom_sheet_get_can_close (AdwBottomSheet* self /*none*/);
// gboolean adw_bottom_sheet_get_can_close (::AdwBottomSheet* self /*none*/);
bool base::BottomSheetBase::get_can_close () noexcept
{
  typedef gboolean (*call_wrap_t) (::AdwBottomSheet* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_bottom_sheet_get_can_close;
  auto _temp_ret = call_wrap_v ((::AdwBottomSheet*) (gobj_()));
  return _temp_ret;
}

// gboolean adw_bottom_sheet_get_can_open (AdwBottomSheet* self /*none*/);
// gboolean adw_bottom_sheet_get_can_open (::AdwBottomSheet* self /*none*/);
bool base::BottomSheetBase::get_can_open () noexcept
{
  typedef gboolean (*call_wrap_t) (::AdwBottomSheet* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_bottom_sheet_get_can_open;
  auto _temp_ret = call_wrap_v ((::AdwBottomSheet*) (gobj_()));
  return _temp_ret;
}

// GtkWidget* /*none,nullable*/ adw_bottom_sheet_get_content (AdwBottomSheet* self /*none*/);
// ::GtkWidget* /*none,nullable*/ adw_bottom_sheet_get_content (::AdwBottomSheet* self /*none*/);
Gtk::Widget base::BottomSheetBase::get_content () noexcept
{
  typedef ::GtkWidget* (*call_wrap_t) (::AdwBottomSheet* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_bottom_sheet_get_content;
  auto _temp_ret = call_wrap_v ((::AdwBottomSheet*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// gboolean adw_bottom_sheet_get_full_width (AdwBottomSheet* self /*none*/);
// gboolean adw_bottom_sheet_get_full_width (::AdwBottomSheet* self /*none*/);
bool base::BottomSheetBase::get_full_width () noexcept
{
  typedef gboolean (*call_wrap_t) (::AdwBottomSheet* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_bottom_sheet_get_full_width;
  auto _temp_ret = call_wrap_v ((::AdwBottomSheet*) (gobj_()));
  return _temp_ret;
}

// gboolean adw_bottom_sheet_get_modal (AdwBottomSheet* self /*none*/);
// gboolean adw_bottom_sheet_get_modal (::AdwBottomSheet* self /*none*/);
bool base::BottomSheetBase::get_modal () noexcept
{
  typedef gboolean (*call_wrap_t) (::AdwBottomSheet* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_bottom_sheet_get_modal;
  auto _temp_ret = call_wrap_v ((::AdwBottomSheet*) (gobj_()));
  return _temp_ret;
}

// gboolean adw_bottom_sheet_get_open (AdwBottomSheet* self /*none*/);
// gboolean adw_bottom_sheet_get_open (::AdwBottomSheet* self /*none*/);
bool base::BottomSheetBase::get_open () noexcept
{
  typedef gboolean (*call_wrap_t) (::AdwBottomSheet* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_bottom_sheet_get_open;
  auto _temp_ret = call_wrap_v ((::AdwBottomSheet*) (gobj_()));
  return _temp_ret;
}

// gboolean adw_bottom_sheet_get_reveal_bottom_bar (AdwBottomSheet* self /*none*/);
// gboolean adw_bottom_sheet_get_reveal_bottom_bar (::AdwBottomSheet* self /*none*/);
bool base::BottomSheetBase::get_reveal_bottom_bar () noexcept
{
  typedef gboolean (*call_wrap_t) (::AdwBottomSheet* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_bottom_sheet_get_reveal_bottom_bar;
  auto _temp_ret = call_wrap_v ((::AdwBottomSheet*) (gobj_()));
  return _temp_ret;
}

// GtkWidget* /*none,nullable*/ adw_bottom_sheet_get_sheet (AdwBottomSheet* self /*none*/);
// ::GtkWidget* /*none,nullable*/ adw_bottom_sheet_get_sheet (::AdwBottomSheet* self /*none*/);
Gtk::Widget base::BottomSheetBase::get_sheet () noexcept
{
  typedef ::GtkWidget* (*call_wrap_t) (::AdwBottomSheet* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_bottom_sheet_get_sheet;
  auto _temp_ret = call_wrap_v ((::AdwBottomSheet*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// int adw_bottom_sheet_get_sheet_height (AdwBottomSheet* self /*none*/);
// gint adw_bottom_sheet_get_sheet_height (::AdwBottomSheet* self /*none*/);
gint base::BottomSheetBase::get_sheet_height () noexcept
{
  typedef gint (*call_wrap_t) (::AdwBottomSheet* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_bottom_sheet_get_sheet_height;
  auto _temp_ret = call_wrap_v ((::AdwBottomSheet*) (gobj_()));
  return _temp_ret;
}

// gboolean adw_bottom_sheet_get_show_drag_handle (AdwBottomSheet* self /*none*/);
// gboolean adw_bottom_sheet_get_show_drag_handle (::AdwBottomSheet* self /*none*/);
bool base::BottomSheetBase::get_show_drag_handle () noexcept
{
  typedef gboolean (*call_wrap_t) (::AdwBottomSheet* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_bottom_sheet_get_show_drag_handle;
  auto _temp_ret = call_wrap_v ((::AdwBottomSheet*) (gobj_()));
  return _temp_ret;
}

// void adw_bottom_sheet_set_align (AdwBottomSheet* self /*none*/, float align);
// void adw_bottom_sheet_set_align (::AdwBottomSheet* self /*none*/, gfloat align);
void base::BottomSheetBase::set_align (gfloat align) noexcept
{
  typedef void (*call_wrap_t) (::AdwBottomSheet* self, gfloat align);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_bottom_sheet_set_align;
  auto align_to_c = align;
  call_wrap_v ((::AdwBottomSheet*) (gobj_()), (gfloat) (align_to_c));
}

// void adw_bottom_sheet_set_bottom_bar (AdwBottomSheet* self /*none*/, GtkWidget* bottom_bar /*none,nullable*/);
// void adw_bottom_sheet_set_bottom_bar (::AdwBottomSheet* self /*none*/, ::GtkWidget* bottom_bar /*none,nullable*/);
void base::BottomSheetBase::set_bottom_bar (Gtk::Widget bottom_bar) noexcept
{
  typedef void (*call_wrap_t) (::AdwBottomSheet* self, ::GtkWidget* bottom_bar);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_bottom_sheet_set_bottom_bar;
  auto bottom_bar_to_c = gi::unwrap (bottom_bar, gi::transfer_none);
  call_wrap_v ((::AdwBottomSheet*) (gobj_()), (::GtkWidget*) (bottom_bar_to_c));
}
void base::BottomSheetBase::set_bottom_bar () noexcept
{
  typedef void (*call_wrap_t) (::AdwBottomSheet* self, ::GtkWidget* bottom_bar);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_bottom_sheet_set_bottom_bar;
  auto bottom_bar_to_c = nullptr;
  call_wrap_v ((::AdwBottomSheet*) (gobj_()), (::GtkWidget*) (bottom_bar_to_c));
}

// void adw_bottom_sheet_set_can_close (AdwBottomSheet* self /*none*/, gboolean can_close);
// void adw_bottom_sheet_set_can_close (::AdwBottomSheet* self /*none*/, gboolean can_close);
void base::BottomSheetBase::set_can_close (gboolean can_close) noexcept
{
  typedef void (*call_wrap_t) (::AdwBottomSheet* self, gboolean can_close);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_bottom_sheet_set_can_close;
  auto can_close_to_c = can_close;
  call_wrap_v ((::AdwBottomSheet*) (gobj_()), (gboolean) (can_close_to_c));
}

// void adw_bottom_sheet_set_can_open (AdwBottomSheet* self /*none*/, gboolean can_open);
// void adw_bottom_sheet_set_can_open (::AdwBottomSheet* self /*none*/, gboolean can_open);
void base::BottomSheetBase::set_can_open (gboolean can_open) noexcept
{
  typedef void (*call_wrap_t) (::AdwBottomSheet* self, gboolean can_open);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_bottom_sheet_set_can_open;
  auto can_open_to_c = can_open;
  call_wrap_v ((::AdwBottomSheet*) (gobj_()), (gboolean) (can_open_to_c));
}

// void adw_bottom_sheet_set_content (AdwBottomSheet* self /*none*/, GtkWidget* content /*none,nullable*/);
// void adw_bottom_sheet_set_content (::AdwBottomSheet* self /*none*/, ::GtkWidget* content /*none,nullable*/);
void base::BottomSheetBase::set_content (Gtk::Widget content) noexcept
{
  typedef void (*call_wrap_t) (::AdwBottomSheet* self, ::GtkWidget* content);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_bottom_sheet_set_content;
  auto content_to_c = gi::unwrap (content, gi::transfer_none);
  call_wrap_v ((::AdwBottomSheet*) (gobj_()), (::GtkWidget*) (content_to_c));
}
void base::BottomSheetBase::set_content () noexcept
{
  typedef void (*call_wrap_t) (::AdwBottomSheet* self, ::GtkWidget* content);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_bottom_sheet_set_content;
  auto content_to_c = nullptr;
  call_wrap_v ((::AdwBottomSheet*) (gobj_()), (::GtkWidget*) (content_to_c));
}

// void adw_bottom_sheet_set_full_width (AdwBottomSheet* self /*none*/, gboolean full_width);
// void adw_bottom_sheet_set_full_width (::AdwBottomSheet* self /*none*/, gboolean full_width);
void base::BottomSheetBase::set_full_width (gboolean full_width) noexcept
{
  typedef void (*call_wrap_t) (::AdwBottomSheet* self, gboolean full_width);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_bottom_sheet_set_full_width;
  auto full_width_to_c = full_width;
  call_wrap_v ((::AdwBottomSheet*) (gobj_()), (gboolean) (full_width_to_c));
}

// void adw_bottom_sheet_set_modal (AdwBottomSheet* self /*none*/, gboolean modal);
// void adw_bottom_sheet_set_modal (::AdwBottomSheet* self /*none*/, gboolean modal);
void base::BottomSheetBase::set_modal (gboolean modal) noexcept
{
  typedef void (*call_wrap_t) (::AdwBottomSheet* self, gboolean modal);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_bottom_sheet_set_modal;
  auto modal_to_c = modal;
  call_wrap_v ((::AdwBottomSheet*) (gobj_()), (gboolean) (modal_to_c));
}

// void adw_bottom_sheet_set_open (AdwBottomSheet* self /*none*/, gboolean open);
// void adw_bottom_sheet_set_open (::AdwBottomSheet* self /*none*/, gboolean open);
void base::BottomSheetBase::set_open (gboolean open) noexcept
{
  typedef void (*call_wrap_t) (::AdwBottomSheet* self, gboolean open);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_bottom_sheet_set_open;
  auto open_to_c = open;
  call_wrap_v ((::AdwBottomSheet*) (gobj_()), (gboolean) (open_to_c));
}

// void adw_bottom_sheet_set_reveal_bottom_bar (AdwBottomSheet* self /*none*/, gboolean reveal);
// void adw_bottom_sheet_set_reveal_bottom_bar (::AdwBottomSheet* self /*none*/, gboolean reveal);
void base::BottomSheetBase::set_reveal_bottom_bar (gboolean reveal) noexcept
{
  typedef void (*call_wrap_t) (::AdwBottomSheet* self, gboolean reveal);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_bottom_sheet_set_reveal_bottom_bar;
  auto reveal_to_c = reveal;
  call_wrap_v ((::AdwBottomSheet*) (gobj_()), (gboolean) (reveal_to_c));
}

// void adw_bottom_sheet_set_sheet (AdwBottomSheet* self /*none*/, GtkWidget* sheet /*none,nullable*/);
// void adw_bottom_sheet_set_sheet (::AdwBottomSheet* self /*none*/, ::GtkWidget* sheet /*none,nullable*/);
void base::BottomSheetBase::set_sheet (Gtk::Widget sheet) noexcept
{
  typedef void (*call_wrap_t) (::AdwBottomSheet* self, ::GtkWidget* sheet);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_bottom_sheet_set_sheet;
  auto sheet_to_c = gi::unwrap (sheet, gi::transfer_none);
  call_wrap_v ((::AdwBottomSheet*) (gobj_()), (::GtkWidget*) (sheet_to_c));
}
void base::BottomSheetBase::set_sheet () noexcept
{
  typedef void (*call_wrap_t) (::AdwBottomSheet* self, ::GtkWidget* sheet);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_bottom_sheet_set_sheet;
  auto sheet_to_c = nullptr;
  call_wrap_v ((::AdwBottomSheet*) (gobj_()), (::GtkWidget*) (sheet_to_c));
}

// void adw_bottom_sheet_set_show_drag_handle (AdwBottomSheet* self /*none*/, gboolean show_drag_handle);
// void adw_bottom_sheet_set_show_drag_handle (::AdwBottomSheet* self /*none*/, gboolean show_drag_handle);
void base::BottomSheetBase::set_show_drag_handle (gboolean show_drag_handle) noexcept
{
  typedef void (*call_wrap_t) (::AdwBottomSheet* self, gboolean show_drag_handle);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_bottom_sheet_set_show_drag_handle;
  auto show_drag_handle_to_c = show_drag_handle;
  call_wrap_v ((::AdwBottomSheet*) (gobj_()), (gboolean) (show_drag_handle_to_c));
}



} // namespace base

} // namespace Adw

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<adw/bottomsheet_extra_def_impl.hpp>)
#include <adw/bottomsheet_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<adw/bottomsheet_extra_impl.hpp>)
#include <adw/bottomsheet_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Adw {

namespace impl {

namespace internal {

void BottomSheetClassDef::class_init (gpointer class_struct, gpointer factory)
{
  ::AdwBottomSheetClass *methods = (::AdwBottomSheetClass *) class_struct;
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
