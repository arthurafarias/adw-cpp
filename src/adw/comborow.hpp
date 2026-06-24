// AUTO-GENERATED

#ifndef _GI_ADW_COMBOROW_HPP_
#define _GI_ADW_COMBOROW_HPP_

#include "actionrow.hpp"

namespace gi {

namespace repository {

namespace Adw {


class ComboRow;

namespace base {


#define GI_ADW_COMBOROW_BASE base::ComboRowBase
class ComboRowBase : public Adw::ActionRow
{
typedef Adw::ActionRow super_type;
public:
typedef ::AdwComboRow BaseObjectType;

ComboRowBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return adw_combo_row_get_type(); } 

// GtkWidget* /*none*/ adw_combo_row_new ();
// ::AdwComboRow* /*none*/ adw_combo_row_new ();
static GI_INLINE_DECL Adw::ComboRow new_ () noexcept;

// gboolean adw_combo_row_get_enable_search (AdwComboRow* self /*none*/);
// gboolean adw_combo_row_get_enable_search (::AdwComboRow* self /*none*/);
GI_INLINE_DECL bool get_enable_search () noexcept;

// GtkExpression* /*none,nullable*/ adw_combo_row_get_expression (AdwComboRow* self /*none*/);
//  /*none,nullable*/ adw_combo_row_get_expression (::AdwComboRow* self /*none*/);
// SKIP;  type  not supported

// GtkListItemFactory* /*none,nullable*/ adw_combo_row_get_factory (AdwComboRow* self /*none*/);
// ::GtkListItemFactory* /*none,nullable*/ adw_combo_row_get_factory (::AdwComboRow* self /*none*/);
GI_INLINE_DECL Gtk::ListItemFactory get_factory () noexcept;

// GtkListItemFactory* /*none,nullable*/ adw_combo_row_get_header_factory (AdwComboRow* self /*none*/);
// ::GtkListItemFactory* /*none,nullable*/ adw_combo_row_get_header_factory (::AdwComboRow* self /*none*/);
GI_INLINE_DECL Gtk::ListItemFactory get_header_factory () noexcept;

// GtkListItemFactory* /*none,nullable*/ adw_combo_row_get_list_factory (AdwComboRow* self /*none*/);
// ::GtkListItemFactory* /*none,nullable*/ adw_combo_row_get_list_factory (::AdwComboRow* self /*none*/);
GI_INLINE_DECL Gtk::ListItemFactory get_list_factory () noexcept;

// GListModel* /*none,nullable*/ adw_combo_row_get_model (AdwComboRow* self /*none*/);
// ::GListModel* /*none,nullable*/ adw_combo_row_get_model (::AdwComboRow* self /*none*/);
GI_INLINE_DECL Gio::ListModel get_model () noexcept;

// GtkStringFilterMatchMode adw_combo_row_get_search_match_mode (AdwComboRow* self /*none*/);
// ::GtkStringFilterMatchMode adw_combo_row_get_search_match_mode (::AdwComboRow* self /*none*/);
GI_INLINE_DECL Gtk::StringFilterMatchMode get_search_match_mode () noexcept;

// guint adw_combo_row_get_selected (AdwComboRow* self /*none*/);
// guint adw_combo_row_get_selected (::AdwComboRow* self /*none*/);
GI_INLINE_DECL guint get_selected () noexcept;

// gpointer /*none,nullable*/ adw_combo_row_get_selected_item (AdwComboRow* self /*none*/);
// ::GObject* /*none,nullable*/ adw_combo_row_get_selected_item (::AdwComboRow* self /*none*/);
GI_INLINE_DECL GObject::Object get_selected_item () noexcept;

// gboolean adw_combo_row_get_use_subtitle (AdwComboRow* self /*none*/);
// gboolean adw_combo_row_get_use_subtitle (::AdwComboRow* self /*none*/);
GI_INLINE_DECL bool get_use_subtitle () noexcept;

// void adw_combo_row_set_enable_search (AdwComboRow* self /*none*/, gboolean enable_search);
// void adw_combo_row_set_enable_search (::AdwComboRow* self /*none*/, gboolean enable_search);
GI_INLINE_DECL void set_enable_search (gboolean enable_search) noexcept;

// void adw_combo_row_set_expression (AdwComboRow* self /*none*/, GtkExpression* expression /*none,nullable*/);
// void adw_combo_row_set_expression (::AdwComboRow* self /*none*/,  expression /*none,nullable*/);
// SKIP; expression type  not supported

// void adw_combo_row_set_factory (AdwComboRow* self /*none*/, GtkListItemFactory* factory /*none,nullable*/);
// void adw_combo_row_set_factory (::AdwComboRow* self /*none*/, ::GtkListItemFactory* factory /*none,nullable*/);
GI_INLINE_DECL void set_factory (Gtk::ListItemFactory factory) noexcept;
GI_INLINE_DECL void set_factory () noexcept;

// void adw_combo_row_set_header_factory (AdwComboRow* self /*none*/, GtkListItemFactory* factory /*none,nullable*/);
// void adw_combo_row_set_header_factory (::AdwComboRow* self /*none*/, ::GtkListItemFactory* factory /*none,nullable*/);
GI_INLINE_DECL void set_header_factory (Gtk::ListItemFactory factory) noexcept;
GI_INLINE_DECL void set_header_factory () noexcept;

// void adw_combo_row_set_list_factory (AdwComboRow* self /*none*/, GtkListItemFactory* factory /*none,nullable*/);
// void adw_combo_row_set_list_factory (::AdwComboRow* self /*none*/, ::GtkListItemFactory* factory /*none,nullable*/);
GI_INLINE_DECL void set_list_factory (Gtk::ListItemFactory factory) noexcept;
GI_INLINE_DECL void set_list_factory () noexcept;

// void adw_combo_row_set_model (AdwComboRow* self /*none*/, GListModel* model /*none,nullable*/);
// void adw_combo_row_set_model (::AdwComboRow* self /*none*/, ::GListModel* model /*none,nullable*/);
GI_INLINE_DECL void set_model (Gio::ListModel model) noexcept;
GI_INLINE_DECL void set_model () noexcept;

// void adw_combo_row_set_search_match_mode (AdwComboRow* self /*none*/, GtkStringFilterMatchMode search_match_mode);
// void adw_combo_row_set_search_match_mode (::AdwComboRow* self /*none*/, ::GtkStringFilterMatchMode search_match_mode);
GI_INLINE_DECL void set_search_match_mode (Gtk::StringFilterMatchMode search_match_mode) noexcept;

// void adw_combo_row_set_selected (AdwComboRow* self /*none*/, guint position);
// void adw_combo_row_set_selected (::AdwComboRow* self /*none*/, guint position);
GI_INLINE_DECL void set_selected (guint position) noexcept;

// void adw_combo_row_set_use_subtitle (AdwComboRow* self /*none*/, gboolean use_subtitle);
// void adw_combo_row_set_use_subtitle (::AdwComboRow* self /*none*/, gboolean use_subtitle);
GI_INLINE_DECL void set_use_subtitle (gboolean use_subtitle) noexcept;

gi::property_proxy<bool, base::ComboRowBase> property_enable_search()
{ return gi::property_proxy<bool, base::ComboRowBase> (*this, "enable-search"); }
const gi::property_proxy<bool, base::ComboRowBase> property_enable_search() const
{ return gi::property_proxy<bool, base::ComboRowBase> (*this, "enable-search"); }

gi::property_proxy<Gtk::ListItemFactory, base::ComboRowBase> property_factory()
{ return gi::property_proxy<Gtk::ListItemFactory, base::ComboRowBase> (*this, "factory"); }
const gi::property_proxy<Gtk::ListItemFactory, base::ComboRowBase> property_factory() const
{ return gi::property_proxy<Gtk::ListItemFactory, base::ComboRowBase> (*this, "factory"); }

gi::property_proxy<Gtk::ListItemFactory, base::ComboRowBase> property_header_factory()
{ return gi::property_proxy<Gtk::ListItemFactory, base::ComboRowBase> (*this, "header-factory"); }
const gi::property_proxy<Gtk::ListItemFactory, base::ComboRowBase> property_header_factory() const
{ return gi::property_proxy<Gtk::ListItemFactory, base::ComboRowBase> (*this, "header-factory"); }

gi::property_proxy<Gtk::ListItemFactory, base::ComboRowBase> property_list_factory()
{ return gi::property_proxy<Gtk::ListItemFactory, base::ComboRowBase> (*this, "list-factory"); }
const gi::property_proxy<Gtk::ListItemFactory, base::ComboRowBase> property_list_factory() const
{ return gi::property_proxy<Gtk::ListItemFactory, base::ComboRowBase> (*this, "list-factory"); }

gi::property_proxy<Gio::ListModel, base::ComboRowBase> property_model()
{ return gi::property_proxy<Gio::ListModel, base::ComboRowBase> (*this, "model"); }
const gi::property_proxy<Gio::ListModel, base::ComboRowBase> property_model() const
{ return gi::property_proxy<Gio::ListModel, base::ComboRowBase> (*this, "model"); }

gi::property_proxy<Gtk::StringFilterMatchMode, base::ComboRowBase> property_search_match_mode()
{ return gi::property_proxy<Gtk::StringFilterMatchMode, base::ComboRowBase> (*this, "search-match-mode"); }
const gi::property_proxy<Gtk::StringFilterMatchMode, base::ComboRowBase> property_search_match_mode() const
{ return gi::property_proxy<Gtk::StringFilterMatchMode, base::ComboRowBase> (*this, "search-match-mode"); }

gi::property_proxy<guint, base::ComboRowBase> property_selected()
{ return gi::property_proxy<guint, base::ComboRowBase> (*this, "selected"); }
const gi::property_proxy<guint, base::ComboRowBase> property_selected() const
{ return gi::property_proxy<guint, base::ComboRowBase> (*this, "selected"); }

gi::property_proxy<GObject::Object, base::ComboRowBase> property_selected_item()
{ return gi::property_proxy<GObject::Object, base::ComboRowBase> (*this, "selected-item"); }
const gi::property_proxy<GObject::Object, base::ComboRowBase> property_selected_item() const
{ return gi::property_proxy<GObject::Object, base::ComboRowBase> (*this, "selected-item"); }

gi::property_proxy<bool, base::ComboRowBase> property_use_subtitle()
{ return gi::property_proxy<bool, base::ComboRowBase> (*this, "use-subtitle"); }
const gi::property_proxy<bool, base::ComboRowBase> property_use_subtitle() const
{ return gi::property_proxy<bool, base::ComboRowBase> (*this, "use-subtitle"); }

}; // class

} // namespace base

} // namespace Adw

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<adw/comborow_extra_def.hpp>)
#include <adw/comborow_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<adw/comborow_extra.hpp>)
#include <adw/comborow_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Adw {

class ComboRow : public GI_ADW_COMBOROW_BASE
{ typedef GI_ADW_COMBOROW_BASE super_type; using super_type::super_type; };

} // namespace Adw

template<> struct declare_cpptype_of<::AdwComboRow>
{ typedef Adw::ComboRow type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Adw {

namespace impl {

namespace internal {


class ComboRowClassDef
{
typedef ComboRowClassDef self;
public:
typedef Adw::ComboRow instance_type;
typedef ::AdwComboRowClass class_type;


struct TypeInitData;

protected:
GI_INLINE_DECL ~ComboRowClassDef() = default;
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );


};

GI_CLASS_IMPL_BEGIN


class ComboRowClass: public detail::ClassTemplate<Adw::impl::internal::ComboRowClassDef, Adw::impl::internal::ActionRowClass>
{
friend class internal::ComboRowClassDef;
typedef ComboRowClass self;
typedef detail::ClassTemplate<Adw::impl::internal::ComboRowClassDef, Adw::impl::internal::ActionRowClass> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types



};


struct ComboRowClassDef::TypeInitData
{

template<typename SubClass>
constexpr static TypeInitData factory()
{
  // using DefData = detail::DefinitionData<SubClass, TypeInitData>;
  return {

  };
}
};
} // namespace internal

GI_CLASS_IMPL_END

using ComboRowImpl = detail::ObjectImpl<ComboRow, internal::ComboRowClass>;

} // namespace impl

} // namespace Adw

} // namespace repository

} // namespace gi

#endif
