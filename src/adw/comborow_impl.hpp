// AUTO-GENERATED

#ifndef _GI_ADW_COMBOROW_IMPL_HPP_
#define _GI_ADW_COMBOROW_IMPL_HPP_

namespace gi {

namespace repository {

namespace Adw {

namespace base {

// GtkWidget* /*none*/ adw_combo_row_new ();
// ::AdwComboRow* /*none*/ adw_combo_row_new ();
Adw::ComboRow base::ComboRowBase::new_ () noexcept
{
  typedef ::AdwComboRow* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) adw_combo_row_new;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// gboolean adw_combo_row_get_enable_search (AdwComboRow* self /*none*/);
// gboolean adw_combo_row_get_enable_search (::AdwComboRow* self /*none*/);
bool base::ComboRowBase::get_enable_search () noexcept
{
  typedef gboolean (*call_wrap_t) (::AdwComboRow* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_combo_row_get_enable_search;
  auto _temp_ret = call_wrap_v ((::AdwComboRow*) (gobj_()));
  return _temp_ret;
}

// GtkExpression* /*none,nullable*/ adw_combo_row_get_expression (AdwComboRow* self /*none*/);
//  /*none,nullable*/ adw_combo_row_get_expression (::AdwComboRow* self /*none*/);
// SKIP;  type  not supported

// GtkListItemFactory* /*none,nullable*/ adw_combo_row_get_factory (AdwComboRow* self /*none*/);
// ::GtkListItemFactory* /*none,nullable*/ adw_combo_row_get_factory (::AdwComboRow* self /*none*/);
Gtk::ListItemFactory base::ComboRowBase::get_factory () noexcept
{
  typedef ::GtkListItemFactory* (*call_wrap_t) (::AdwComboRow* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_combo_row_get_factory;
  auto _temp_ret = call_wrap_v ((::AdwComboRow*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// GtkListItemFactory* /*none,nullable*/ adw_combo_row_get_header_factory (AdwComboRow* self /*none*/);
// ::GtkListItemFactory* /*none,nullable*/ adw_combo_row_get_header_factory (::AdwComboRow* self /*none*/);
Gtk::ListItemFactory base::ComboRowBase::get_header_factory () noexcept
{
  typedef ::GtkListItemFactory* (*call_wrap_t) (::AdwComboRow* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_combo_row_get_header_factory;
  auto _temp_ret = call_wrap_v ((::AdwComboRow*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// GtkListItemFactory* /*none,nullable*/ adw_combo_row_get_list_factory (AdwComboRow* self /*none*/);
// ::GtkListItemFactory* /*none,nullable*/ adw_combo_row_get_list_factory (::AdwComboRow* self /*none*/);
Gtk::ListItemFactory base::ComboRowBase::get_list_factory () noexcept
{
  typedef ::GtkListItemFactory* (*call_wrap_t) (::AdwComboRow* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_combo_row_get_list_factory;
  auto _temp_ret = call_wrap_v ((::AdwComboRow*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// GListModel* /*none,nullable*/ adw_combo_row_get_model (AdwComboRow* self /*none*/);
// ::GListModel* /*none,nullable*/ adw_combo_row_get_model (::AdwComboRow* self /*none*/);
Gio::ListModel base::ComboRowBase::get_model () noexcept
{
  typedef ::GListModel* (*call_wrap_t) (::AdwComboRow* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_combo_row_get_model;
  auto _temp_ret = call_wrap_v ((::AdwComboRow*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// GtkStringFilterMatchMode adw_combo_row_get_search_match_mode (AdwComboRow* self /*none*/);
// ::GtkStringFilterMatchMode adw_combo_row_get_search_match_mode (::AdwComboRow* self /*none*/);
Gtk::StringFilterMatchMode base::ComboRowBase::get_search_match_mode () noexcept
{
  typedef ::GtkStringFilterMatchMode (*call_wrap_t) (::AdwComboRow* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_combo_row_get_search_match_mode;
  auto _temp_ret = call_wrap_v ((::AdwComboRow*) (gobj_()));
  return gi::wrap (_temp_ret);
}

// guint adw_combo_row_get_selected (AdwComboRow* self /*none*/);
// guint adw_combo_row_get_selected (::AdwComboRow* self /*none*/);
guint base::ComboRowBase::get_selected () noexcept
{
  typedef guint (*call_wrap_t) (::AdwComboRow* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_combo_row_get_selected;
  auto _temp_ret = call_wrap_v ((::AdwComboRow*) (gobj_()));
  return _temp_ret;
}

// gpointer /*none,nullable*/ adw_combo_row_get_selected_item (AdwComboRow* self /*none*/);
// ::GObject* /*none,nullable*/ adw_combo_row_get_selected_item (::AdwComboRow* self /*none*/);
GObject::Object base::ComboRowBase::get_selected_item () noexcept
{
  typedef ::GObject* (*call_wrap_t) (::AdwComboRow* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_combo_row_get_selected_item;
  auto _temp_ret = call_wrap_v ((::AdwComboRow*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// gboolean adw_combo_row_get_use_subtitle (AdwComboRow* self /*none*/);
// gboolean adw_combo_row_get_use_subtitle (::AdwComboRow* self /*none*/);
bool base::ComboRowBase::get_use_subtitle () noexcept
{
  typedef gboolean (*call_wrap_t) (::AdwComboRow* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_combo_row_get_use_subtitle;
  auto _temp_ret = call_wrap_v ((::AdwComboRow*) (gobj_()));
  return _temp_ret;
}

// void adw_combo_row_set_enable_search (AdwComboRow* self /*none*/, gboolean enable_search);
// void adw_combo_row_set_enable_search (::AdwComboRow* self /*none*/, gboolean enable_search);
void base::ComboRowBase::set_enable_search (gboolean enable_search) noexcept
{
  typedef void (*call_wrap_t) (::AdwComboRow* self, gboolean enable_search);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_combo_row_set_enable_search;
  auto enable_search_to_c = enable_search;
  call_wrap_v ((::AdwComboRow*) (gobj_()), (gboolean) (enable_search_to_c));
}

// void adw_combo_row_set_expression (AdwComboRow* self /*none*/, GtkExpression* expression /*none,nullable*/);
// void adw_combo_row_set_expression (::AdwComboRow* self /*none*/,  expression /*none,nullable*/);
// SKIP; expression type  not supported

// void adw_combo_row_set_factory (AdwComboRow* self /*none*/, GtkListItemFactory* factory /*none,nullable*/);
// void adw_combo_row_set_factory (::AdwComboRow* self /*none*/, ::GtkListItemFactory* factory /*none,nullable*/);
void base::ComboRowBase::set_factory (Gtk::ListItemFactory factory) noexcept
{
  typedef void (*call_wrap_t) (::AdwComboRow* self, ::GtkListItemFactory* factory);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_combo_row_set_factory;
  auto factory_to_c = gi::unwrap (factory, gi::transfer_none);
  call_wrap_v ((::AdwComboRow*) (gobj_()), (::GtkListItemFactory*) (factory_to_c));
}
void base::ComboRowBase::set_factory () noexcept
{
  typedef void (*call_wrap_t) (::AdwComboRow* self, ::GtkListItemFactory* factory);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_combo_row_set_factory;
  auto factory_to_c = nullptr;
  call_wrap_v ((::AdwComboRow*) (gobj_()), (::GtkListItemFactory*) (factory_to_c));
}

// void adw_combo_row_set_header_factory (AdwComboRow* self /*none*/, GtkListItemFactory* factory /*none,nullable*/);
// void adw_combo_row_set_header_factory (::AdwComboRow* self /*none*/, ::GtkListItemFactory* factory /*none,nullable*/);
void base::ComboRowBase::set_header_factory (Gtk::ListItemFactory factory) noexcept
{
  typedef void (*call_wrap_t) (::AdwComboRow* self, ::GtkListItemFactory* factory);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_combo_row_set_header_factory;
  auto factory_to_c = gi::unwrap (factory, gi::transfer_none);
  call_wrap_v ((::AdwComboRow*) (gobj_()), (::GtkListItemFactory*) (factory_to_c));
}
void base::ComboRowBase::set_header_factory () noexcept
{
  typedef void (*call_wrap_t) (::AdwComboRow* self, ::GtkListItemFactory* factory);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_combo_row_set_header_factory;
  auto factory_to_c = nullptr;
  call_wrap_v ((::AdwComboRow*) (gobj_()), (::GtkListItemFactory*) (factory_to_c));
}

// void adw_combo_row_set_list_factory (AdwComboRow* self /*none*/, GtkListItemFactory* factory /*none,nullable*/);
// void adw_combo_row_set_list_factory (::AdwComboRow* self /*none*/, ::GtkListItemFactory* factory /*none,nullable*/);
void base::ComboRowBase::set_list_factory (Gtk::ListItemFactory factory) noexcept
{
  typedef void (*call_wrap_t) (::AdwComboRow* self, ::GtkListItemFactory* factory);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_combo_row_set_list_factory;
  auto factory_to_c = gi::unwrap (factory, gi::transfer_none);
  call_wrap_v ((::AdwComboRow*) (gobj_()), (::GtkListItemFactory*) (factory_to_c));
}
void base::ComboRowBase::set_list_factory () noexcept
{
  typedef void (*call_wrap_t) (::AdwComboRow* self, ::GtkListItemFactory* factory);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_combo_row_set_list_factory;
  auto factory_to_c = nullptr;
  call_wrap_v ((::AdwComboRow*) (gobj_()), (::GtkListItemFactory*) (factory_to_c));
}

// void adw_combo_row_set_model (AdwComboRow* self /*none*/, GListModel* model /*none,nullable*/);
// void adw_combo_row_set_model (::AdwComboRow* self /*none*/, ::GListModel* model /*none,nullable*/);
void base::ComboRowBase::set_model (Gio::ListModel model) noexcept
{
  typedef void (*call_wrap_t) (::AdwComboRow* self, ::GListModel* model);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_combo_row_set_model;
  auto model_to_c = gi::unwrap (model, gi::transfer_none);
  call_wrap_v ((::AdwComboRow*) (gobj_()), (::GListModel*) (model_to_c));
}
void base::ComboRowBase::set_model () noexcept
{
  typedef void (*call_wrap_t) (::AdwComboRow* self, ::GListModel* model);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_combo_row_set_model;
  auto model_to_c = nullptr;
  call_wrap_v ((::AdwComboRow*) (gobj_()), (::GListModel*) (model_to_c));
}

// void adw_combo_row_set_search_match_mode (AdwComboRow* self /*none*/, GtkStringFilterMatchMode search_match_mode);
// void adw_combo_row_set_search_match_mode (::AdwComboRow* self /*none*/, ::GtkStringFilterMatchMode search_match_mode);
void base::ComboRowBase::set_search_match_mode (Gtk::StringFilterMatchMode search_match_mode) noexcept
{
  typedef void (*call_wrap_t) (::AdwComboRow* self, ::GtkStringFilterMatchMode search_match_mode);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_combo_row_set_search_match_mode;
  auto search_match_mode_to_c = gi::unwrap (search_match_mode);
  call_wrap_v ((::AdwComboRow*) (gobj_()), (::GtkStringFilterMatchMode) (search_match_mode_to_c));
}

// void adw_combo_row_set_selected (AdwComboRow* self /*none*/, guint position);
// void adw_combo_row_set_selected (::AdwComboRow* self /*none*/, guint position);
void base::ComboRowBase::set_selected (guint position) noexcept
{
  typedef void (*call_wrap_t) (::AdwComboRow* self, guint position);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_combo_row_set_selected;
  auto position_to_c = position;
  call_wrap_v ((::AdwComboRow*) (gobj_()), (guint) (position_to_c));
}

// void adw_combo_row_set_use_subtitle (AdwComboRow* self /*none*/, gboolean use_subtitle);
// void adw_combo_row_set_use_subtitle (::AdwComboRow* self /*none*/, gboolean use_subtitle);
void base::ComboRowBase::set_use_subtitle (gboolean use_subtitle) noexcept
{
  typedef void (*call_wrap_t) (::AdwComboRow* self, gboolean use_subtitle);
  call_wrap_t call_wrap_v = (call_wrap_t) ::adw_combo_row_set_use_subtitle;
  auto use_subtitle_to_c = use_subtitle;
  call_wrap_v ((::AdwComboRow*) (gobj_()), (gboolean) (use_subtitle_to_c));
}


} // namespace base

} // namespace Adw

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<adw/comborow_extra_def_impl.hpp>)
#include <adw/comborow_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<adw/comborow_extra_impl.hpp>)
#include <adw/comborow_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Adw {

namespace impl {

namespace internal {

void ComboRowClassDef::class_init (gpointer class_struct, gpointer factory)
{
  ::AdwComboRowClass *methods = (::AdwComboRowClass *) class_struct;
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
