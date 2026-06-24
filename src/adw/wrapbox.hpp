// AUTO-GENERATED

#ifndef _GI_ADW_WRAPBOX_HPP_
#define _GI_ADW_WRAPBOX_HPP_


namespace gi {

namespace repository {

namespace Adw {


class WrapBox;

namespace base {


#define GI_ADW_WRAPBOX_BASE base::WrapBoxBase
class WrapBoxBase : public Gtk::Widget
{
typedef Gtk::Widget super_type;
public:
typedef ::AdwWrapBox BaseObjectType;

WrapBoxBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return adw_wrap_box_get_type(); } 

GI_INLINE_DECL Gtk::Orientable interface_ (gi::interface_tag<Gtk::Orientable>);

GI_INLINE_DECL operator Gtk::Orientable ();

// GtkWidget* /*none*/ adw_wrap_box_new ();
// ::AdwWrapBox* /*none*/ adw_wrap_box_new ();
static GI_INLINE_DECL Adw::WrapBox new_ () noexcept;

// void adw_wrap_box_append (AdwWrapBox* self /*none*/, GtkWidget* child /*none*/);
// void adw_wrap_box_append (::AdwWrapBox* self /*none*/, ::GtkWidget* child /*none*/);
GI_INLINE_DECL void append (Gtk::Widget child) noexcept;

// float adw_wrap_box_get_align (AdwWrapBox* self /*none*/);
// gfloat adw_wrap_box_get_align (::AdwWrapBox* self /*none*/);
GI_INLINE_DECL gfloat get_align () noexcept;

// int adw_wrap_box_get_child_spacing (AdwWrapBox* self /*none*/);
// gint adw_wrap_box_get_child_spacing (::AdwWrapBox* self /*none*/);
GI_INLINE_DECL gint get_child_spacing () noexcept;

// AdwLengthUnit adw_wrap_box_get_child_spacing_unit (AdwWrapBox* self /*none*/);
// ::AdwLengthUnit adw_wrap_box_get_child_spacing_unit (::AdwWrapBox* self /*none*/);
GI_INLINE_DECL Adw::LengthUnit get_child_spacing_unit () noexcept;

// AdwJustifyMode adw_wrap_box_get_justify (AdwWrapBox* self /*none*/);
// ::AdwJustifyMode adw_wrap_box_get_justify (::AdwWrapBox* self /*none*/);
GI_INLINE_DECL Adw::JustifyMode get_justify () noexcept;

// gboolean adw_wrap_box_get_justify_last_line (AdwWrapBox* self /*none*/);
// gboolean adw_wrap_box_get_justify_last_line (::AdwWrapBox* self /*none*/);
GI_INLINE_DECL bool get_justify_last_line () noexcept;

// gboolean adw_wrap_box_get_line_homogeneous (AdwWrapBox* self /*none*/);
// gboolean adw_wrap_box_get_line_homogeneous (::AdwWrapBox* self /*none*/);
GI_INLINE_DECL bool get_line_homogeneous () noexcept;

// int adw_wrap_box_get_line_spacing (AdwWrapBox* self /*none*/);
// gint adw_wrap_box_get_line_spacing (::AdwWrapBox* self /*none*/);
GI_INLINE_DECL gint get_line_spacing () noexcept;

// AdwLengthUnit adw_wrap_box_get_line_spacing_unit (AdwWrapBox* self /*none*/);
// ::AdwLengthUnit adw_wrap_box_get_line_spacing_unit (::AdwWrapBox* self /*none*/);
GI_INLINE_DECL Adw::LengthUnit get_line_spacing_unit () noexcept;

// int adw_wrap_box_get_natural_line_length (AdwWrapBox* self /*none*/);
// gint adw_wrap_box_get_natural_line_length (::AdwWrapBox* self /*none*/);
GI_INLINE_DECL gint get_natural_line_length () noexcept;

// AdwLengthUnit adw_wrap_box_get_natural_line_length_unit (AdwWrapBox* self /*none*/);
// ::AdwLengthUnit adw_wrap_box_get_natural_line_length_unit (::AdwWrapBox* self /*none*/);
GI_INLINE_DECL Adw::LengthUnit get_natural_line_length_unit () noexcept;

// AdwPackDirection adw_wrap_box_get_pack_direction (AdwWrapBox* self /*none*/);
// ::AdwPackDirection adw_wrap_box_get_pack_direction (::AdwWrapBox* self /*none*/);
GI_INLINE_DECL Adw::PackDirection get_pack_direction () noexcept;

// AdwWrapPolicy adw_wrap_box_get_wrap_policy (AdwWrapBox* self /*none*/);
// ::AdwWrapPolicy adw_wrap_box_get_wrap_policy (::AdwWrapBox* self /*none*/);
GI_INLINE_DECL Adw::WrapPolicy get_wrap_policy () noexcept;

// gboolean adw_wrap_box_get_wrap_reverse (AdwWrapBox* self /*none*/);
// gboolean adw_wrap_box_get_wrap_reverse (::AdwWrapBox* self /*none*/);
GI_INLINE_DECL bool get_wrap_reverse () noexcept;

// void adw_wrap_box_insert_child_after (AdwWrapBox* self /*none*/, GtkWidget* child /*none*/, GtkWidget* sibling /*none,nullable*/);
// void adw_wrap_box_insert_child_after (::AdwWrapBox* self /*none*/, ::GtkWidget* child /*none*/, ::GtkWidget* sibling /*none,nullable*/);
GI_INLINE_DECL void insert_child_after (Gtk::Widget child, Gtk::Widget sibling) noexcept;
GI_INLINE_DECL void insert_child_after (Gtk::Widget child) noexcept;

// void adw_wrap_box_prepend (AdwWrapBox* self /*none*/, GtkWidget* child /*none*/);
// void adw_wrap_box_prepend (::AdwWrapBox* self /*none*/, ::GtkWidget* child /*none*/);
GI_INLINE_DECL void prepend (Gtk::Widget child) noexcept;

// void adw_wrap_box_remove (AdwWrapBox* self /*none*/, GtkWidget* child /*none*/);
// void adw_wrap_box_remove (::AdwWrapBox* self /*none*/, ::GtkWidget* child /*none*/);
GI_INLINE_DECL void remove (Gtk::Widget child) noexcept;

// void adw_wrap_box_remove_all (AdwWrapBox* self /*none*/);
// void adw_wrap_box_remove_all (::AdwWrapBox* self /*none*/);
GI_INLINE_DECL void remove_all () noexcept;

// void adw_wrap_box_reorder_child_after (AdwWrapBox* self /*none*/, GtkWidget* child /*none*/, GtkWidget* sibling /*none,nullable*/);
// void adw_wrap_box_reorder_child_after (::AdwWrapBox* self /*none*/, ::GtkWidget* child /*none*/, ::GtkWidget* sibling /*none,nullable*/);
GI_INLINE_DECL void reorder_child_after (Gtk::Widget child, Gtk::Widget sibling) noexcept;
GI_INLINE_DECL void reorder_child_after (Gtk::Widget child) noexcept;

// void adw_wrap_box_set_align (AdwWrapBox* self /*none*/, float align);
// void adw_wrap_box_set_align (::AdwWrapBox* self /*none*/, gfloat align);
GI_INLINE_DECL void set_align (gfloat align) noexcept;

// void adw_wrap_box_set_child_spacing (AdwWrapBox* self /*none*/, int child_spacing);
// void adw_wrap_box_set_child_spacing (::AdwWrapBox* self /*none*/, gint child_spacing);
GI_INLINE_DECL void set_child_spacing (gint child_spacing) noexcept;

// void adw_wrap_box_set_child_spacing_unit (AdwWrapBox* self /*none*/, AdwLengthUnit unit);
// void adw_wrap_box_set_child_spacing_unit (::AdwWrapBox* self /*none*/, ::AdwLengthUnit unit);
GI_INLINE_DECL void set_child_spacing_unit (Adw::LengthUnit unit) noexcept;

// void adw_wrap_box_set_justify (AdwWrapBox* self /*none*/, AdwJustifyMode justify);
// void adw_wrap_box_set_justify (::AdwWrapBox* self /*none*/, ::AdwJustifyMode justify);
GI_INLINE_DECL void set_justify (Adw::JustifyMode justify) noexcept;

// void adw_wrap_box_set_justify_last_line (AdwWrapBox* self /*none*/, gboolean justify_last_line);
// void adw_wrap_box_set_justify_last_line (::AdwWrapBox* self /*none*/, gboolean justify_last_line);
GI_INLINE_DECL void set_justify_last_line (gboolean justify_last_line) noexcept;

// void adw_wrap_box_set_line_homogeneous (AdwWrapBox* self /*none*/, gboolean homogeneous);
// void adw_wrap_box_set_line_homogeneous (::AdwWrapBox* self /*none*/, gboolean homogeneous);
GI_INLINE_DECL void set_line_homogeneous (gboolean homogeneous) noexcept;

// void adw_wrap_box_set_line_spacing (AdwWrapBox* self /*none*/, int line_spacing);
// void adw_wrap_box_set_line_spacing (::AdwWrapBox* self /*none*/, gint line_spacing);
GI_INLINE_DECL void set_line_spacing (gint line_spacing) noexcept;

// void adw_wrap_box_set_line_spacing_unit (AdwWrapBox* self /*none*/, AdwLengthUnit unit);
// void adw_wrap_box_set_line_spacing_unit (::AdwWrapBox* self /*none*/, ::AdwLengthUnit unit);
GI_INLINE_DECL void set_line_spacing_unit (Adw::LengthUnit unit) noexcept;

// void adw_wrap_box_set_natural_line_length (AdwWrapBox* self /*none*/, int natural_line_length);
// void adw_wrap_box_set_natural_line_length (::AdwWrapBox* self /*none*/, gint natural_line_length);
GI_INLINE_DECL void set_natural_line_length (gint natural_line_length) noexcept;

// void adw_wrap_box_set_natural_line_length_unit (AdwWrapBox* self /*none*/, AdwLengthUnit unit);
// void adw_wrap_box_set_natural_line_length_unit (::AdwWrapBox* self /*none*/, ::AdwLengthUnit unit);
GI_INLINE_DECL void set_natural_line_length_unit (Adw::LengthUnit unit) noexcept;

// void adw_wrap_box_set_pack_direction (AdwWrapBox* self /*none*/, AdwPackDirection pack_direction);
// void adw_wrap_box_set_pack_direction (::AdwWrapBox* self /*none*/, ::AdwPackDirection pack_direction);
GI_INLINE_DECL void set_pack_direction (Adw::PackDirection pack_direction) noexcept;

// void adw_wrap_box_set_wrap_policy (AdwWrapBox* self /*none*/, AdwWrapPolicy wrap_policy);
// void adw_wrap_box_set_wrap_policy (::AdwWrapBox* self /*none*/, ::AdwWrapPolicy wrap_policy);
GI_INLINE_DECL void set_wrap_policy (Adw::WrapPolicy wrap_policy) noexcept;

// void adw_wrap_box_set_wrap_reverse (AdwWrapBox* self /*none*/, gboolean wrap_reverse);
// void adw_wrap_box_set_wrap_reverse (::AdwWrapBox* self /*none*/, gboolean wrap_reverse);
GI_INLINE_DECL void set_wrap_reverse (gboolean wrap_reverse) noexcept;

gi::property_proxy<gfloat, base::WrapBoxBase> property_align()
{ return gi::property_proxy<gfloat, base::WrapBoxBase> (*this, "align"); }
const gi::property_proxy<gfloat, base::WrapBoxBase> property_align() const
{ return gi::property_proxy<gfloat, base::WrapBoxBase> (*this, "align"); }

gi::property_proxy<gint, base::WrapBoxBase> property_child_spacing()
{ return gi::property_proxy<gint, base::WrapBoxBase> (*this, "child-spacing"); }
const gi::property_proxy<gint, base::WrapBoxBase> property_child_spacing() const
{ return gi::property_proxy<gint, base::WrapBoxBase> (*this, "child-spacing"); }

gi::property_proxy<Adw::LengthUnit, base::WrapBoxBase> property_child_spacing_unit()
{ return gi::property_proxy<Adw::LengthUnit, base::WrapBoxBase> (*this, "child-spacing-unit"); }
const gi::property_proxy<Adw::LengthUnit, base::WrapBoxBase> property_child_spacing_unit() const
{ return gi::property_proxy<Adw::LengthUnit, base::WrapBoxBase> (*this, "child-spacing-unit"); }

gi::property_proxy<Adw::JustifyMode, base::WrapBoxBase> property_justify()
{ return gi::property_proxy<Adw::JustifyMode, base::WrapBoxBase> (*this, "justify"); }
const gi::property_proxy<Adw::JustifyMode, base::WrapBoxBase> property_justify() const
{ return gi::property_proxy<Adw::JustifyMode, base::WrapBoxBase> (*this, "justify"); }

gi::property_proxy<bool, base::WrapBoxBase> property_justify_last_line()
{ return gi::property_proxy<bool, base::WrapBoxBase> (*this, "justify-last-line"); }
const gi::property_proxy<bool, base::WrapBoxBase> property_justify_last_line() const
{ return gi::property_proxy<bool, base::WrapBoxBase> (*this, "justify-last-line"); }

gi::property_proxy<bool, base::WrapBoxBase> property_line_homogeneous()
{ return gi::property_proxy<bool, base::WrapBoxBase> (*this, "line-homogeneous"); }
const gi::property_proxy<bool, base::WrapBoxBase> property_line_homogeneous() const
{ return gi::property_proxy<bool, base::WrapBoxBase> (*this, "line-homogeneous"); }

gi::property_proxy<gint, base::WrapBoxBase> property_line_spacing()
{ return gi::property_proxy<gint, base::WrapBoxBase> (*this, "line-spacing"); }
const gi::property_proxy<gint, base::WrapBoxBase> property_line_spacing() const
{ return gi::property_proxy<gint, base::WrapBoxBase> (*this, "line-spacing"); }

gi::property_proxy<Adw::LengthUnit, base::WrapBoxBase> property_line_spacing_unit()
{ return gi::property_proxy<Adw::LengthUnit, base::WrapBoxBase> (*this, "line-spacing-unit"); }
const gi::property_proxy<Adw::LengthUnit, base::WrapBoxBase> property_line_spacing_unit() const
{ return gi::property_proxy<Adw::LengthUnit, base::WrapBoxBase> (*this, "line-spacing-unit"); }

gi::property_proxy<gint, base::WrapBoxBase> property_natural_line_length()
{ return gi::property_proxy<gint, base::WrapBoxBase> (*this, "natural-line-length"); }
const gi::property_proxy<gint, base::WrapBoxBase> property_natural_line_length() const
{ return gi::property_proxy<gint, base::WrapBoxBase> (*this, "natural-line-length"); }

gi::property_proxy<Adw::LengthUnit, base::WrapBoxBase> property_natural_line_length_unit()
{ return gi::property_proxy<Adw::LengthUnit, base::WrapBoxBase> (*this, "natural-line-length-unit"); }
const gi::property_proxy<Adw::LengthUnit, base::WrapBoxBase> property_natural_line_length_unit() const
{ return gi::property_proxy<Adw::LengthUnit, base::WrapBoxBase> (*this, "natural-line-length-unit"); }

gi::property_proxy<Adw::PackDirection, base::WrapBoxBase> property_pack_direction()
{ return gi::property_proxy<Adw::PackDirection, base::WrapBoxBase> (*this, "pack-direction"); }
const gi::property_proxy<Adw::PackDirection, base::WrapBoxBase> property_pack_direction() const
{ return gi::property_proxy<Adw::PackDirection, base::WrapBoxBase> (*this, "pack-direction"); }

gi::property_proxy<Adw::WrapPolicy, base::WrapBoxBase> property_wrap_policy()
{ return gi::property_proxy<Adw::WrapPolicy, base::WrapBoxBase> (*this, "wrap-policy"); }
const gi::property_proxy<Adw::WrapPolicy, base::WrapBoxBase> property_wrap_policy() const
{ return gi::property_proxy<Adw::WrapPolicy, base::WrapBoxBase> (*this, "wrap-policy"); }

gi::property_proxy<bool, base::WrapBoxBase> property_wrap_reverse()
{ return gi::property_proxy<bool, base::WrapBoxBase> (*this, "wrap-reverse"); }
const gi::property_proxy<bool, base::WrapBoxBase> property_wrap_reverse() const
{ return gi::property_proxy<bool, base::WrapBoxBase> (*this, "wrap-reverse"); }

}; // class

} // namespace base

} // namespace Adw

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<adw/wrapbox_extra_def.hpp>)
#include <adw/wrapbox_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<adw/wrapbox_extra.hpp>)
#include <adw/wrapbox_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Adw {

class WrapBox : public GI_ADW_WRAPBOX_BASE
{ typedef GI_ADW_WRAPBOX_BASE super_type; using super_type::super_type; };

} // namespace Adw

template<> struct declare_cpptype_of<::AdwWrapBox>
{ typedef Adw::WrapBox type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Adw {

namespace impl {

namespace internal {


class WrapBoxClassDef
{
typedef WrapBoxClassDef self;
public:
typedef Adw::WrapBox instance_type;
typedef ::AdwWrapBoxClass class_type;


struct TypeInitData;

protected:
GI_INLINE_DECL ~WrapBoxClassDef() = default;
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );


};

GI_CLASS_IMPL_BEGIN


class WrapBoxClass: public detail::ClassTemplate<Adw::impl::internal::WrapBoxClassDef, Gtk::impl::internal::WidgetClass, Gtk::impl::internal::OrientableIfaceClassImpl>
{
friend class internal::WrapBoxClassDef;
typedef WrapBoxClass self;
typedef detail::ClassTemplate<Adw::impl::internal::WrapBoxClassDef, Gtk::impl::internal::WidgetClass, Gtk::impl::internal::OrientableIfaceClassImpl> super;

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


struct WrapBoxClassDef::TypeInitData
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

using WrapBoxImpl = detail::ObjectImpl<WrapBox, internal::WrapBoxClass>;

} // namespace impl

} // namespace Adw

} // namespace repository

} // namespace gi

#endif
