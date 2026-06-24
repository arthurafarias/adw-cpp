// AUTO-GENERATED

#ifndef _GI_ADW_TOGGLEGROUP_HPP_
#define _GI_ADW_TOGGLEGROUP_HPP_


namespace gi {

namespace repository {

namespace Adw {

class Toggle;

class ToggleGroup;

namespace base {


#define GI_ADW_TOGGLEGROUP_BASE base::ToggleGroupBase
class ToggleGroupBase : public Gtk::Widget
{
typedef Gtk::Widget super_type;
public:
typedef ::AdwToggleGroup BaseObjectType;

ToggleGroupBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return adw_toggle_group_get_type(); } 

GI_INLINE_DECL Gtk::Orientable interface_ (gi::interface_tag<Gtk::Orientable>);

GI_INLINE_DECL operator Gtk::Orientable ();

// GtkWidget* /*none*/ adw_toggle_group_new ();
// ::AdwToggleGroup* /*none*/ adw_toggle_group_new ();
static GI_INLINE_DECL Adw::ToggleGroup new_ () noexcept;

// void adw_toggle_group_add (AdwToggleGroup* self /*none*/, AdwToggle* toggle /*full*/);
// void adw_toggle_group_add (::AdwToggleGroup* self /*none*/, ::AdwToggle* toggle /*full*/);
GI_INLINE_DECL void add (Adw::Toggle toggle) noexcept;

// guint adw_toggle_group_get_active (AdwToggleGroup* self /*none*/);
// guint adw_toggle_group_get_active (::AdwToggleGroup* self /*none*/);
GI_INLINE_DECL guint get_active () noexcept;

// const char* /*none,nullable*/ adw_toggle_group_get_active_name (AdwToggleGroup* self /*none*/);
// const char* /*none,nullable*/ adw_toggle_group_get_active_name (::AdwToggleGroup* self /*none*/);
GI_INLINE_DECL gi::cstring_v get_active_name () noexcept;

// gboolean adw_toggle_group_get_can_shrink (AdwToggleGroup* self /*none*/);
// gboolean adw_toggle_group_get_can_shrink (::AdwToggleGroup* self /*none*/);
GI_INLINE_DECL bool get_can_shrink () noexcept;

// gboolean adw_toggle_group_get_homogeneous (AdwToggleGroup* self /*none*/);
// gboolean adw_toggle_group_get_homogeneous (::AdwToggleGroup* self /*none*/);
GI_INLINE_DECL bool get_homogeneous () noexcept;

// guint adw_toggle_group_get_n_toggles (AdwToggleGroup* self /*none*/);
// guint adw_toggle_group_get_n_toggles (::AdwToggleGroup* self /*none*/);
GI_INLINE_DECL guint get_n_toggles () noexcept;

// AdwToggle* /*none,nullable*/ adw_toggle_group_get_toggle (AdwToggleGroup* self /*none*/, guint index);
// ::AdwToggle* /*none,nullable*/ adw_toggle_group_get_toggle (::AdwToggleGroup* self /*none*/, guint index);
GI_INLINE_DECL Adw::Toggle get_toggle (guint index) noexcept;

// AdwToggle* /*none,nullable*/ adw_toggle_group_get_toggle_by_name (AdwToggleGroup* self /*none*/, const char* name /*none*/);
// ::AdwToggle* /*none,nullable*/ adw_toggle_group_get_toggle_by_name (::AdwToggleGroup* self /*none*/, const char* name /*none*/);
GI_INLINE_DECL Adw::Toggle get_toggle_by_name (const gi::cstring_v name) noexcept;

// GtkSelectionModel* /*full*/ adw_toggle_group_get_toggles (AdwToggleGroup* self /*none*/);
// ::GtkSelectionModel* /*full*/ adw_toggle_group_get_toggles (::AdwToggleGroup* self /*none*/);
GI_INLINE_DECL Gtk::SelectionModel get_toggles () noexcept;

// void adw_toggle_group_remove (AdwToggleGroup* self /*none*/, AdwToggle* toggle /*none*/);
// void adw_toggle_group_remove (::AdwToggleGroup* self /*none*/, ::AdwToggle* toggle /*none*/);
GI_INLINE_DECL void remove (Adw::Toggle toggle) noexcept;

// void adw_toggle_group_remove_all (AdwToggleGroup* self /*none*/);
// void adw_toggle_group_remove_all (::AdwToggleGroup* self /*none*/);
GI_INLINE_DECL void remove_all () noexcept;

// void adw_toggle_group_set_active (AdwToggleGroup* self /*none*/, guint active);
// void adw_toggle_group_set_active (::AdwToggleGroup* self /*none*/, guint active);
GI_INLINE_DECL void set_active (guint active) noexcept;

// void adw_toggle_group_set_active_name (AdwToggleGroup* self /*none*/, const char* name /*none,nullable*/);
// void adw_toggle_group_set_active_name (::AdwToggleGroup* self /*none*/, const char* name /*none,nullable*/);
GI_INLINE_DECL void set_active_name (const gi::cstring_v name) noexcept;
GI_INLINE_DECL void set_active_name () noexcept;

// void adw_toggle_group_set_can_shrink (AdwToggleGroup* self /*none*/, gboolean can_shrink);
// void adw_toggle_group_set_can_shrink (::AdwToggleGroup* self /*none*/, gboolean can_shrink);
GI_INLINE_DECL void set_can_shrink (gboolean can_shrink) noexcept;

// void adw_toggle_group_set_homogeneous (AdwToggleGroup* self /*none*/, gboolean homogeneous);
// void adw_toggle_group_set_homogeneous (::AdwToggleGroup* self /*none*/, gboolean homogeneous);
GI_INLINE_DECL void set_homogeneous (gboolean homogeneous) noexcept;

gi::property_proxy<guint, base::ToggleGroupBase> property_active()
{ return gi::property_proxy<guint, base::ToggleGroupBase> (*this, "active"); }
const gi::property_proxy<guint, base::ToggleGroupBase> property_active() const
{ return gi::property_proxy<guint, base::ToggleGroupBase> (*this, "active"); }

gi::property_proxy<gi::cstring, base::ToggleGroupBase> property_active_name()
{ return gi::property_proxy<gi::cstring, base::ToggleGroupBase> (*this, "active-name"); }
const gi::property_proxy<gi::cstring, base::ToggleGroupBase> property_active_name() const
{ return gi::property_proxy<gi::cstring, base::ToggleGroupBase> (*this, "active-name"); }

gi::property_proxy<bool, base::ToggleGroupBase> property_can_shrink()
{ return gi::property_proxy<bool, base::ToggleGroupBase> (*this, "can-shrink"); }
const gi::property_proxy<bool, base::ToggleGroupBase> property_can_shrink() const
{ return gi::property_proxy<bool, base::ToggleGroupBase> (*this, "can-shrink"); }

gi::property_proxy<bool, base::ToggleGroupBase> property_homogeneous()
{ return gi::property_proxy<bool, base::ToggleGroupBase> (*this, "homogeneous"); }
const gi::property_proxy<bool, base::ToggleGroupBase> property_homogeneous() const
{ return gi::property_proxy<bool, base::ToggleGroupBase> (*this, "homogeneous"); }

gi::property_proxy<guint, base::ToggleGroupBase> property_n_toggles()
{ return gi::property_proxy<guint, base::ToggleGroupBase> (*this, "n-toggles"); }
const gi::property_proxy<guint, base::ToggleGroupBase> property_n_toggles() const
{ return gi::property_proxy<guint, base::ToggleGroupBase> (*this, "n-toggles"); }

gi::property_proxy<Gtk::SelectionModel, base::ToggleGroupBase> property_toggles()
{ return gi::property_proxy<Gtk::SelectionModel, base::ToggleGroupBase> (*this, "toggles"); }
const gi::property_proxy<Gtk::SelectionModel, base::ToggleGroupBase> property_toggles() const
{ return gi::property_proxy<Gtk::SelectionModel, base::ToggleGroupBase> (*this, "toggles"); }

}; // class

} // namespace base

} // namespace Adw

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<adw/togglegroup_extra_def.hpp>)
#include <adw/togglegroup_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<adw/togglegroup_extra.hpp>)
#include <adw/togglegroup_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Adw {

class ToggleGroup : public GI_ADW_TOGGLEGROUP_BASE
{ typedef GI_ADW_TOGGLEGROUP_BASE super_type; using super_type::super_type; };

} // namespace Adw

template<> struct declare_cpptype_of<::AdwToggleGroup>
{ typedef Adw::ToggleGroup type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Adw {

namespace impl {

namespace internal {


class ToggleGroupClassDef
{
typedef ToggleGroupClassDef self;
public:
typedef Adw::ToggleGroup instance_type;
typedef ::AdwToggleGroupClass class_type;


struct TypeInitData;

protected:
GI_INLINE_DECL ~ToggleGroupClassDef() = default;
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );


};

GI_CLASS_IMPL_BEGIN


class ToggleGroupClass: public detail::ClassTemplate<Adw::impl::internal::ToggleGroupClassDef, Gtk::impl::internal::WidgetClass, Gtk::impl::internal::OrientableIfaceClassImpl>
{
friend class internal::ToggleGroupClassDef;
typedef ToggleGroupClass self;
typedef detail::ClassTemplate<Adw::impl::internal::ToggleGroupClassDef, Gtk::impl::internal::WidgetClass, Gtk::impl::internal::OrientableIfaceClassImpl> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types
typedef Gtk::impl::internal::OrientableIfaceClassImpl GtkOrientableIface_type;



};


struct ToggleGroupClassDef::TypeInitData
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

using ToggleGroupImpl = detail::ObjectImpl<ToggleGroup, internal::ToggleGroupClass>;

} // namespace impl

} // namespace Adw

} // namespace repository

} // namespace gi

#endif
