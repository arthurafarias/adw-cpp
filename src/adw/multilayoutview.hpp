// AUTO-GENERATED

#ifndef _GI_ADW_MULTILAYOUTVIEW_HPP_
#define _GI_ADW_MULTILAYOUTVIEW_HPP_


namespace gi {

namespace repository {

namespace Adw {

class Layout;

class MultiLayoutView;

namespace base {


#define GI_ADW_MULTILAYOUTVIEW_BASE base::MultiLayoutViewBase
class MultiLayoutViewBase : public Gtk::Widget
{
typedef Gtk::Widget super_type;
public:
typedef ::AdwMultiLayoutView BaseObjectType;

MultiLayoutViewBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return adw_multi_layout_view_get_type(); } 

// GtkWidget* /*none*/ adw_multi_layout_view_new ();
// ::AdwMultiLayoutView* /*none*/ adw_multi_layout_view_new ();
static GI_INLINE_DECL Adw::MultiLayoutView new_ () noexcept;

// void adw_multi_layout_view_add_layout (AdwMultiLayoutView* self /*none*/, AdwLayout* layout /*full*/);
// void adw_multi_layout_view_add_layout (::AdwMultiLayoutView* self /*none*/, ::AdwLayout* layout /*full*/);
GI_INLINE_DECL void add_layout (Adw::Layout layout) noexcept;

// GtkWidget* /*none,nullable*/ adw_multi_layout_view_get_child (AdwMultiLayoutView* self /*none*/, const char* id /*none*/);
// ::GtkWidget* /*none,nullable*/ adw_multi_layout_view_get_child (::AdwMultiLayoutView* self /*none*/, const char* id /*none*/);
GI_INLINE_DECL Gtk::Widget get_child (const gi::cstring_v id) noexcept;

// AdwLayout* /*none,nullable*/ adw_multi_layout_view_get_layout (AdwMultiLayoutView* self /*none*/);
// ::AdwLayout* /*none,nullable*/ adw_multi_layout_view_get_layout (::AdwMultiLayoutView* self /*none*/);
GI_INLINE_DECL Adw::Layout get_layout () noexcept;

// AdwLayout* /*none,nullable*/ adw_multi_layout_view_get_layout_by_name (AdwMultiLayoutView* self /*none*/, const char* name /*none*/);
// ::AdwLayout* /*none,nullable*/ adw_multi_layout_view_get_layout_by_name (::AdwMultiLayoutView* self /*none*/, const char* name /*none*/);
GI_INLINE_DECL Adw::Layout get_layout_by_name (const gi::cstring_v name) noexcept;

// const char* /*none,nullable*/ adw_multi_layout_view_get_layout_name (AdwMultiLayoutView* self /*none*/);
// const char* /*none,nullable*/ adw_multi_layout_view_get_layout_name (::AdwMultiLayoutView* self /*none*/);
GI_INLINE_DECL gi::cstring_v get_layout_name () noexcept;

// void adw_multi_layout_view_remove_layout (AdwMultiLayoutView* self /*none*/, AdwLayout* layout /*none*/);
// void adw_multi_layout_view_remove_layout (::AdwMultiLayoutView* self /*none*/, ::AdwLayout* layout /*none*/);
GI_INLINE_DECL void remove_layout (Adw::Layout layout) noexcept;

// void adw_multi_layout_view_set_child (AdwMultiLayoutView* self /*none*/, const char* id /*none*/, GtkWidget* child /*none*/);
// void adw_multi_layout_view_set_child (::AdwMultiLayoutView* self /*none*/, const char* id /*none*/, ::GtkWidget* child /*none*/);
GI_INLINE_DECL void set_child (const gi::cstring_v id, Gtk::Widget child) noexcept;

// void adw_multi_layout_view_set_layout (AdwMultiLayoutView* self /*none*/, AdwLayout* layout /*none*/);
// void adw_multi_layout_view_set_layout (::AdwMultiLayoutView* self /*none*/, ::AdwLayout* layout /*none*/);
GI_INLINE_DECL void set_layout (Adw::Layout layout) noexcept;

// void adw_multi_layout_view_set_layout_name (AdwMultiLayoutView* self /*none*/, const char* name /*none*/);
// void adw_multi_layout_view_set_layout_name (::AdwMultiLayoutView* self /*none*/, const char* name /*none*/);
GI_INLINE_DECL void set_layout_name (const gi::cstring_v name) noexcept;

gi::property_proxy<Adw::Layout, base::MultiLayoutViewBase> property_layout()
{ return gi::property_proxy<Adw::Layout, base::MultiLayoutViewBase> (*this, "layout"); }
const gi::property_proxy<Adw::Layout, base::MultiLayoutViewBase> property_layout() const
{ return gi::property_proxy<Adw::Layout, base::MultiLayoutViewBase> (*this, "layout"); }

gi::property_proxy<gi::cstring, base::MultiLayoutViewBase> property_layout_name()
{ return gi::property_proxy<gi::cstring, base::MultiLayoutViewBase> (*this, "layout-name"); }
const gi::property_proxy<gi::cstring, base::MultiLayoutViewBase> property_layout_name() const
{ return gi::property_proxy<gi::cstring, base::MultiLayoutViewBase> (*this, "layout-name"); }

}; // class

} // namespace base

} // namespace Adw

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<adw/multilayoutview_extra_def.hpp>)
#include <adw/multilayoutview_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<adw/multilayoutview_extra.hpp>)
#include <adw/multilayoutview_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Adw {

class MultiLayoutView : public GI_ADW_MULTILAYOUTVIEW_BASE
{ typedef GI_ADW_MULTILAYOUTVIEW_BASE super_type; using super_type::super_type; };

} // namespace Adw

template<> struct declare_cpptype_of<::AdwMultiLayoutView>
{ typedef Adw::MultiLayoutView type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Adw {

namespace impl {

namespace internal {


class MultiLayoutViewClassDef
{
typedef MultiLayoutViewClassDef self;
public:
typedef Adw::MultiLayoutView instance_type;
typedef ::AdwMultiLayoutViewClass class_type;


struct TypeInitData;

protected:
GI_INLINE_DECL ~MultiLayoutViewClassDef() = default;
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );


};

GI_CLASS_IMPL_BEGIN


class MultiLayoutViewClass: public detail::ClassTemplate<Adw::impl::internal::MultiLayoutViewClassDef, Gtk::impl::internal::WidgetClass>
{
friend class internal::MultiLayoutViewClassDef;
typedef MultiLayoutViewClass self;
typedef detail::ClassTemplate<Adw::impl::internal::MultiLayoutViewClassDef, Gtk::impl::internal::WidgetClass> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types



};


struct MultiLayoutViewClassDef::TypeInitData
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

using MultiLayoutViewImpl = detail::ObjectImpl<MultiLayoutView, internal::MultiLayoutViewClass>;

} // namespace impl

} // namespace Adw

} // namespace repository

} // namespace gi

#endif
