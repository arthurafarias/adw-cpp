// AUTO-GENERATED

#ifndef _GI_GTK_ACCESSIBLETEXT_IMPL_HPP_
#define _GI_GTK_ACCESSIBLETEXT_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

// void gtk_accessible_text_update_caret_position (GtkAccessibleText* self /*none*/);
// void gtk_accessible_text_update_caret_position (::GtkAccessibleText* self /*none*/);
void base::AccessibleTextBase::update_caret_position () noexcept
{
  typedef void (*call_wrap_t) (::GtkAccessibleText* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_accessible_text_update_caret_position;
  call_wrap_v ((::GtkAccessibleText*) (gobj_()));
}

// void gtk_accessible_text_update_contents (GtkAccessibleText* self /*none*/, GtkAccessibleTextContentChange change, unsigned int start, unsigned int end);
// void gtk_accessible_text_update_contents (::GtkAccessibleText* self /*none*/, ::GtkAccessibleTextContentChange change, guint start, guint end);
void base::AccessibleTextBase::update_contents (Gtk::AccessibleTextContentChange change, guint start, guint end) noexcept
{
  typedef void (*call_wrap_t) (::GtkAccessibleText* self, ::GtkAccessibleTextContentChange change, guint start, guint end);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_accessible_text_update_contents;
  auto end_to_c = end;
  auto start_to_c = start;
  auto change_to_c = gi::unwrap (change);
  call_wrap_v ((::GtkAccessibleText*) (gobj_()), (::GtkAccessibleTextContentChange) (change_to_c), (guint) (start_to_c), (guint) (end_to_c));
}

// void gtk_accessible_text_update_selection_bound (GtkAccessibleText* self /*none*/);
// void gtk_accessible_text_update_selection_bound (::GtkAccessibleText* self /*none*/);
void base::AccessibleTextBase::update_selection_bound () noexcept
{
  typedef void (*call_wrap_t) (::GtkAccessibleText* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_accessible_text_update_selection_bound;
  call_wrap_v ((::GtkAccessibleText*) (gobj_()));
}


} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/accessibletext_extra_def_impl.hpp>)
#include <gtk/accessibletext_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/accessibletext_extra_impl.hpp>)
#include <gtk/accessibletext_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {

void AccessibleTextInterfaceDef::interface_init (gpointer interface_struct, gpointer factory)
{
  ::GtkAccessibleTextInterface *methods = (::GtkAccessibleTextInterface *) interface_struct;
  (void) methods;

  auto init_data = GI_MEMBER_INIT_DATA(TypeInitData, factory);
  (void) init_data;

  if (init_data.get_caret_position) methods->get_caret_position = (decltype (methods->get_caret_position)) gi::detail::method_wrapper<self, guint (*) (), gi::transfer_none_t, std::tuple<>>::wrapper<&self::get_caret_position_>;
  if (init_data.get_contents) methods->get_contents = (decltype (methods->get_contents)) gi::detail::method_wrapper<self, GLib::Bytes (*) (guint start, guint end), gi::transfer_full_t, std::tuple<gi::transfer_none_t, gi::transfer_none_t>>::wrapper<&self::get_contents_>;
  if (init_data.get_contents_at) methods->get_contents_at = (decltype (methods->get_contents_at)) gi::detail::method_wrapper<self, GLib::Bytes (*) (guint offset, Gtk::AccessibleTextGranularity granularity, guint & start, guint & end), gi::transfer_full_t, std::tuple<gi::transfer_none_t, gi::transfer_none_t, gi::transfer_full_t, gi::transfer_full_t>>::wrapper<&self::get_contents_at_>;
  if (init_data.get_default_attributes) methods->get_default_attributes = (decltype (methods->get_default_attributes)) gi::detail::method_wrapper<self, void (*) (gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t> & attribute_names, gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t> & attribute_values), gi::transfer_full_t, std::tuple<gi::transfer_full_t, gi::transfer_full_t>>::wrapper<&self::get_default_attributes_>;
  if (init_data.get_extents) methods->get_extents = (decltype (methods->get_extents)) gi::detail::method_wrapper<self, bool (*) (guint start, guint end, Graphene::Rect_Ref extents), gi::transfer_none_t, std::tuple<gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t>>::wrapper<&self::get_extents_>;
  if (init_data.get_offset) methods->get_offset = (decltype (methods->get_offset)) gi::detail::method_wrapper<self, bool (*) (const Graphene::Point_Ref point, guint & offset), gi::transfer_none_t, std::tuple<gi::transfer_none_t, gi::transfer_full_t>>::wrapper<&self::get_offset_>;
  if (init_data.set_caret_position) methods->set_caret_position = (decltype (methods->set_caret_position)) gi::detail::method_wrapper<self, bool (*) (guint offset), gi::transfer_none_t, std::tuple<gi::transfer_none_t>>::wrapper<&self::set_caret_position_>;
  if (init_data.set_selection) methods->set_selection = (decltype (methods->set_selection)) gi::detail::method_wrapper<self, bool (*) (gsize i, Gtk::AccessibleTextRange_Ref range), gi::transfer_none_t, std::tuple<gi::transfer_none_t, gi::transfer_none_t>>::wrapper<&self::set_selection_>;
}

// gboolean AccessibleText::get_attributes (GtkAccessibleText* self /*none*/, unsigned int offset, gsize* n_ranges, GtkAccessibleTextRange** ranges /*container,out,opt*/, char*** attribute_names /*full,out,opt*/, char*** attribute_values /*full,out,opt*/);
// gboolean AccessibleText::get_attributes (::GtkAccessibleText* self /*none*/, guint offset, gsize* n_ranges, ::GtkAccessibleTextRange*** ranges /*container,out,opt*/, char*** attribute_names /*full,out,opt*/, char*** attribute_values /*full,out,opt*/);
// SKIP; ranges out boxed array not supported (depth 2)

// unsigned int AccessibleText::get_caret_position (GtkAccessibleText* self /*none*/);
// guint AccessibleText::get_caret_position (::GtkAccessibleText* self /*none*/);
guint AccessibleTextInterfaceClassImpl::get_caret_position_ () noexcept
{
  if (!get_struct_()->get_caret_position) { g_critical ("no method in class struct"); return {}; }
  typedef guint (*call_wrap_t) (::GtkAccessibleText* self);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->get_caret_position;
  auto _temp_ret = call_wrap_v ((::GtkAccessibleText*) (gobj_()));
  return _temp_ret;
}

// GBytes* /*full*/ AccessibleText::get_contents (GtkAccessibleText* self /*none*/, unsigned int start, unsigned int end);
// ::GBytes* /*full*/ AccessibleText::get_contents (::GtkAccessibleText* self /*none*/, guint start, guint end);
GLib::Bytes AccessibleTextInterfaceClassImpl::get_contents_ (guint start, guint end) noexcept
{
  if (!get_struct_()->get_contents) { g_critical ("no method in class struct"); return {}; }
  typedef ::GBytes* (*call_wrap_t) (::GtkAccessibleText* self, guint start, guint end);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->get_contents;
  auto end_to_c = end;
  auto start_to_c = start;
  auto _temp_ret = call_wrap_v ((::GtkAccessibleText*) (gobj_()), (guint) (start_to_c), (guint) (end_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// GBytes* /*full*/ AccessibleText::get_contents_at (GtkAccessibleText* self /*none*/, unsigned int offset, GtkAccessibleTextGranularity granularity, unsigned int* start, unsigned int* end);
// ::GBytes* /*full*/ AccessibleText::get_contents_at (::GtkAccessibleText* self /*none*/, guint offset, ::GtkAccessibleTextGranularity granularity, guint* start, guint* end);
GLib::Bytes AccessibleTextInterfaceClassImpl::get_contents_at_ (guint offset, Gtk::AccessibleTextGranularity granularity, guint & start, guint & end) noexcept
{
  if (!get_struct_()->get_contents_at) { g_critical ("no method in class struct"); return {}; }
  typedef ::GBytes* (*call_wrap_t) (::GtkAccessibleText* self, guint offset, ::GtkAccessibleTextGranularity granularity, guint* start, guint* end);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->get_contents_at;
  guint end_o {};
  guint start_o {};
  auto granularity_to_c = gi::unwrap (granularity);
  auto offset_to_c = offset;
  auto _temp_ret = call_wrap_v ((::GtkAccessibleText*) (gobj_()), (guint) (offset_to_c), (::GtkAccessibleTextGranularity) (granularity_to_c), (guint*) (&start_o), (guint*) (&end_o));
  end = end_o;
  start = start_o;
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// void AccessibleText::get_default_attributes (GtkAccessibleText* self /*none*/, char*** attribute_names /*full,out,opt*/, char*** attribute_values /*full,out,opt*/);
// void AccessibleText::get_default_attributes (::GtkAccessibleText* self /*none*/, char*** attribute_names /*full,out,opt*/, char*** attribute_values /*full,out,opt*/);
void AccessibleTextInterfaceClassImpl::get_default_attributes_ (gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t> & attribute_names, gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t> & attribute_values) noexcept
{
  if (!get_struct_()->get_default_attributes) { g_critical ("no method in class struct"); return ; }
  typedef void (*call_wrap_t) (::GtkAccessibleText* self, char*** attribute_names, char*** attribute_values);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->get_default_attributes;
  char** attribute_values_o {};
  char** attribute_names_o {};
  call_wrap_v ((::GtkAccessibleText*) (gobj_()), (char***) (&attribute_names_o), (char***) (&attribute_values_o));
  attribute_values = gi::wrap_to<gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t>>(attribute_values_o, gi::transfer_full);
  attribute_names = gi::wrap_to<gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t>>(attribute_names_o, gi::transfer_full);
}

// gboolean AccessibleText::get_extents (GtkAccessibleText* self /*none*/, unsigned int start, unsigned int end, graphene_rect_t* extents /*none*/);
// gboolean AccessibleText::get_extents (::GtkAccessibleText* self /*none*/, guint start, guint end, ::graphene_rect_t* extents /*none*/);
bool AccessibleTextInterfaceClassImpl::get_extents_ (guint start, guint end, Graphene::Rect_Ref extents) noexcept
{
  if (!get_struct_()->get_extents) { g_critical ("no method in class struct"); return {}; }
  typedef gboolean (*call_wrap_t) (::GtkAccessibleText* self, guint start, guint end, ::graphene_rect_t* extents);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->get_extents;
  auto extents_to_c = gi::unwrap (extents, gi::transfer_none);
  auto end_to_c = end;
  auto start_to_c = start;
  auto _temp_ret = call_wrap_v ((::GtkAccessibleText*) (gobj_()), (guint) (start_to_c), (guint) (end_to_c), (::graphene_rect_t*) (extents_to_c));
  return _temp_ret;
}

// gboolean AccessibleText::get_offset (GtkAccessibleText* self /*none*/, const graphene_point_t* point /*none*/, unsigned int* offset);
// gboolean AccessibleText::get_offset (::GtkAccessibleText* self /*none*/, const ::graphene_point_t* point /*none*/, guint* offset);
bool AccessibleTextInterfaceClassImpl::get_offset_ (const Graphene::Point_Ref point, guint & offset) noexcept
{
  if (!get_struct_()->get_offset) { g_critical ("no method in class struct"); return {}; }
  typedef gboolean (*call_wrap_t) (::GtkAccessibleText* self, const ::graphene_point_t* point, guint* offset);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->get_offset;
  guint offset_o {};
  auto point_to_c = gi::unwrap (point, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GtkAccessibleText*) (gobj_()), (const ::graphene_point_t*) (point_to_c), (guint*) (&offset_o));
  offset = offset_o;
  return _temp_ret;
}

// gboolean AccessibleText::get_selection (GtkAccessibleText* self /*none*/, gsize* n_ranges, GtkAccessibleTextRange** ranges /*container,out,opt*/);
// gboolean AccessibleText::get_selection (::GtkAccessibleText* self /*none*/, gsize* n_ranges, ::GtkAccessibleTextRange*** ranges /*container,out,opt*/);
// SKIP; ranges out boxed array not supported (depth 2)

// gboolean AccessibleText::set_caret_position (GtkAccessibleText* self /*none*/, unsigned int offset);
// gboolean AccessibleText::set_caret_position (::GtkAccessibleText* self /*none*/, guint offset);
bool AccessibleTextInterfaceClassImpl::set_caret_position_ (guint offset) noexcept
{
  if (!get_struct_()->set_caret_position) { g_critical ("no method in class struct"); return {}; }
  typedef gboolean (*call_wrap_t) (::GtkAccessibleText* self, guint offset);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->set_caret_position;
  auto offset_to_c = offset;
  auto _temp_ret = call_wrap_v ((::GtkAccessibleText*) (gobj_()), (guint) (offset_to_c));
  return _temp_ret;
}

// gboolean AccessibleText::set_selection (GtkAccessibleText* self /*none*/, gsize i, GtkAccessibleTextRange* range /*none*/);
// gboolean AccessibleText::set_selection (::GtkAccessibleText* self /*none*/, gsize i, ::GtkAccessibleTextRange* range /*none*/);
bool AccessibleTextInterfaceClassImpl::set_selection_ (gsize i, Gtk::AccessibleTextRange_Ref range) noexcept
{
  if (!get_struct_()->set_selection) { g_critical ("no method in class struct"); return {}; }
  typedef gboolean (*call_wrap_t) (::GtkAccessibleText* self, gsize i, ::GtkAccessibleTextRange* range);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->set_selection;
  auto range_to_c = gi::unwrap (range, gi::transfer_none);
  auto i_to_c = i;
  auto _temp_ret = call_wrap_v ((::GtkAccessibleText*) (gobj_()), (gsize) (i_to_c), (::GtkAccessibleTextRange*) (range_to_c));
  return _temp_ret;
}

} // namespace internal

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
