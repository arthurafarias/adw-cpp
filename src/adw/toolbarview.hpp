// AUTO-GENERATED

#ifndef _GI_ADW_TOOLBARVIEW_HPP_
#define _GI_ADW_TOOLBARVIEW_HPP_


namespace gi {

namespace repository {

namespace Adw {


class ToolbarView;

namespace base {


#define GI_ADW_TOOLBARVIEW_BASE base::ToolbarViewBase
class ToolbarViewBase : public Gtk::Widget
{
typedef Gtk::Widget super_type;
public:
typedef ::AdwToolbarView BaseObjectType;

ToolbarViewBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return adw_toolbar_view_get_type(); } 

// GtkWidget* /*none*/ adw_toolbar_view_new ();
// ::AdwToolbarView* /*none*/ adw_toolbar_view_new ();
static GI_INLINE_DECL Adw::ToolbarView new_ () noexcept;

// void adw_toolbar_view_add_bottom_bar (AdwToolbarView* self /*none*/, GtkWidget* widget /*none*/);
// void adw_toolbar_view_add_bottom_bar (::AdwToolbarView* self /*none*/, ::GtkWidget* widget /*none*/);
GI_INLINE_DECL void add_bottom_bar (Gtk::Widget widget) noexcept;

// void adw_toolbar_view_add_top_bar (AdwToolbarView* self /*none*/, GtkWidget* widget /*none*/);
// void adw_toolbar_view_add_top_bar (::AdwToolbarView* self /*none*/, ::GtkWidget* widget /*none*/);
GI_INLINE_DECL void add_top_bar (Gtk::Widget widget) noexcept;

// int adw_toolbar_view_get_bottom_bar_height (AdwToolbarView* self /*none*/);
// gint adw_toolbar_view_get_bottom_bar_height (::AdwToolbarView* self /*none*/);
GI_INLINE_DECL gint get_bottom_bar_height () noexcept;

// AdwToolbarStyle adw_toolbar_view_get_bottom_bar_style (AdwToolbarView* self /*none*/);
// ::AdwToolbarStyle adw_toolbar_view_get_bottom_bar_style (::AdwToolbarView* self /*none*/);
GI_INLINE_DECL Adw::ToolbarStyle get_bottom_bar_style () noexcept;

// GtkWidget* /*none,nullable*/ adw_toolbar_view_get_content (AdwToolbarView* self /*none*/);
// ::GtkWidget* /*none,nullable*/ adw_toolbar_view_get_content (::AdwToolbarView* self /*none*/);
GI_INLINE_DECL Gtk::Widget get_content () noexcept;

// gboolean adw_toolbar_view_get_extend_content_to_bottom_edge (AdwToolbarView* self /*none*/);
// gboolean adw_toolbar_view_get_extend_content_to_bottom_edge (::AdwToolbarView* self /*none*/);
GI_INLINE_DECL bool get_extend_content_to_bottom_edge () noexcept;

// gboolean adw_toolbar_view_get_extend_content_to_top_edge (AdwToolbarView* self /*none*/);
// gboolean adw_toolbar_view_get_extend_content_to_top_edge (::AdwToolbarView* self /*none*/);
GI_INLINE_DECL bool get_extend_content_to_top_edge () noexcept;

// gboolean adw_toolbar_view_get_reveal_bottom_bars (AdwToolbarView* self /*none*/);
// gboolean adw_toolbar_view_get_reveal_bottom_bars (::AdwToolbarView* self /*none*/);
GI_INLINE_DECL bool get_reveal_bottom_bars () noexcept;

// gboolean adw_toolbar_view_get_reveal_top_bars (AdwToolbarView* self /*none*/);
// gboolean adw_toolbar_view_get_reveal_top_bars (::AdwToolbarView* self /*none*/);
GI_INLINE_DECL bool get_reveal_top_bars () noexcept;

// int adw_toolbar_view_get_top_bar_height (AdwToolbarView* self /*none*/);
// gint adw_toolbar_view_get_top_bar_height (::AdwToolbarView* self /*none*/);
GI_INLINE_DECL gint get_top_bar_height () noexcept;

// AdwToolbarStyle adw_toolbar_view_get_top_bar_style (AdwToolbarView* self /*none*/);
// ::AdwToolbarStyle adw_toolbar_view_get_top_bar_style (::AdwToolbarView* self /*none*/);
GI_INLINE_DECL Adw::ToolbarStyle get_top_bar_style () noexcept;

// void adw_toolbar_view_remove (AdwToolbarView* self /*none*/, GtkWidget* widget /*none*/);
// void adw_toolbar_view_remove (::AdwToolbarView* self /*none*/, ::GtkWidget* widget /*none*/);
GI_INLINE_DECL void remove (Gtk::Widget widget) noexcept;

// void adw_toolbar_view_set_bottom_bar_style (AdwToolbarView* self /*none*/, AdwToolbarStyle style);
// void adw_toolbar_view_set_bottom_bar_style (::AdwToolbarView* self /*none*/, ::AdwToolbarStyle style);
GI_INLINE_DECL void set_bottom_bar_style (Adw::ToolbarStyle style) noexcept;

// void adw_toolbar_view_set_content (AdwToolbarView* self /*none*/, GtkWidget* content /*none,nullable*/);
// void adw_toolbar_view_set_content (::AdwToolbarView* self /*none*/, ::GtkWidget* content /*none,nullable*/);
GI_INLINE_DECL void set_content (Gtk::Widget content) noexcept;
GI_INLINE_DECL void set_content () noexcept;

// void adw_toolbar_view_set_extend_content_to_bottom_edge (AdwToolbarView* self /*none*/, gboolean extend);
// void adw_toolbar_view_set_extend_content_to_bottom_edge (::AdwToolbarView* self /*none*/, gboolean extend);
GI_INLINE_DECL void set_extend_content_to_bottom_edge (gboolean extend) noexcept;

// void adw_toolbar_view_set_extend_content_to_top_edge (AdwToolbarView* self /*none*/, gboolean extend);
// void adw_toolbar_view_set_extend_content_to_top_edge (::AdwToolbarView* self /*none*/, gboolean extend);
GI_INLINE_DECL void set_extend_content_to_top_edge (gboolean extend) noexcept;

// void adw_toolbar_view_set_reveal_bottom_bars (AdwToolbarView* self /*none*/, gboolean reveal);
// void adw_toolbar_view_set_reveal_bottom_bars (::AdwToolbarView* self /*none*/, gboolean reveal);
GI_INLINE_DECL void set_reveal_bottom_bars (gboolean reveal) noexcept;

// void adw_toolbar_view_set_reveal_top_bars (AdwToolbarView* self /*none*/, gboolean reveal);
// void adw_toolbar_view_set_reveal_top_bars (::AdwToolbarView* self /*none*/, gboolean reveal);
GI_INLINE_DECL void set_reveal_top_bars (gboolean reveal) noexcept;

// void adw_toolbar_view_set_top_bar_style (AdwToolbarView* self /*none*/, AdwToolbarStyle style);
// void adw_toolbar_view_set_top_bar_style (::AdwToolbarView* self /*none*/, ::AdwToolbarStyle style);
GI_INLINE_DECL void set_top_bar_style (Adw::ToolbarStyle style) noexcept;

gi::property_proxy<gint, base::ToolbarViewBase> property_bottom_bar_height()
{ return gi::property_proxy<gint, base::ToolbarViewBase> (*this, "bottom-bar-height"); }
const gi::property_proxy<gint, base::ToolbarViewBase> property_bottom_bar_height() const
{ return gi::property_proxy<gint, base::ToolbarViewBase> (*this, "bottom-bar-height"); }

gi::property_proxy<Adw::ToolbarStyle, base::ToolbarViewBase> property_bottom_bar_style()
{ return gi::property_proxy<Adw::ToolbarStyle, base::ToolbarViewBase> (*this, "bottom-bar-style"); }
const gi::property_proxy<Adw::ToolbarStyle, base::ToolbarViewBase> property_bottom_bar_style() const
{ return gi::property_proxy<Adw::ToolbarStyle, base::ToolbarViewBase> (*this, "bottom-bar-style"); }

gi::property_proxy<Gtk::Widget, base::ToolbarViewBase> property_content()
{ return gi::property_proxy<Gtk::Widget, base::ToolbarViewBase> (*this, "content"); }
const gi::property_proxy<Gtk::Widget, base::ToolbarViewBase> property_content() const
{ return gi::property_proxy<Gtk::Widget, base::ToolbarViewBase> (*this, "content"); }

gi::property_proxy<bool, base::ToolbarViewBase> property_extend_content_to_bottom_edge()
{ return gi::property_proxy<bool, base::ToolbarViewBase> (*this, "extend-content-to-bottom-edge"); }
const gi::property_proxy<bool, base::ToolbarViewBase> property_extend_content_to_bottom_edge() const
{ return gi::property_proxy<bool, base::ToolbarViewBase> (*this, "extend-content-to-bottom-edge"); }

gi::property_proxy<bool, base::ToolbarViewBase> property_extend_content_to_top_edge()
{ return gi::property_proxy<bool, base::ToolbarViewBase> (*this, "extend-content-to-top-edge"); }
const gi::property_proxy<bool, base::ToolbarViewBase> property_extend_content_to_top_edge() const
{ return gi::property_proxy<bool, base::ToolbarViewBase> (*this, "extend-content-to-top-edge"); }

gi::property_proxy<bool, base::ToolbarViewBase> property_reveal_bottom_bars()
{ return gi::property_proxy<bool, base::ToolbarViewBase> (*this, "reveal-bottom-bars"); }
const gi::property_proxy<bool, base::ToolbarViewBase> property_reveal_bottom_bars() const
{ return gi::property_proxy<bool, base::ToolbarViewBase> (*this, "reveal-bottom-bars"); }

gi::property_proxy<bool, base::ToolbarViewBase> property_reveal_top_bars()
{ return gi::property_proxy<bool, base::ToolbarViewBase> (*this, "reveal-top-bars"); }
const gi::property_proxy<bool, base::ToolbarViewBase> property_reveal_top_bars() const
{ return gi::property_proxy<bool, base::ToolbarViewBase> (*this, "reveal-top-bars"); }

gi::property_proxy<gint, base::ToolbarViewBase> property_top_bar_height()
{ return gi::property_proxy<gint, base::ToolbarViewBase> (*this, "top-bar-height"); }
const gi::property_proxy<gint, base::ToolbarViewBase> property_top_bar_height() const
{ return gi::property_proxy<gint, base::ToolbarViewBase> (*this, "top-bar-height"); }

gi::property_proxy<Adw::ToolbarStyle, base::ToolbarViewBase> property_top_bar_style()
{ return gi::property_proxy<Adw::ToolbarStyle, base::ToolbarViewBase> (*this, "top-bar-style"); }
const gi::property_proxy<Adw::ToolbarStyle, base::ToolbarViewBase> property_top_bar_style() const
{ return gi::property_proxy<Adw::ToolbarStyle, base::ToolbarViewBase> (*this, "top-bar-style"); }

}; // class

} // namespace base

} // namespace Adw

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<adw/toolbarview_extra_def.hpp>)
#include <adw/toolbarview_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<adw/toolbarview_extra.hpp>)
#include <adw/toolbarview_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Adw {

class ToolbarView : public GI_ADW_TOOLBARVIEW_BASE
{ typedef GI_ADW_TOOLBARVIEW_BASE super_type; using super_type::super_type; };

} // namespace Adw

template<> struct declare_cpptype_of<::AdwToolbarView>
{ typedef Adw::ToolbarView type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Adw {

namespace impl {

namespace internal {


class ToolbarViewClassDef
{
typedef ToolbarViewClassDef self;
public:
typedef Adw::ToolbarView instance_type;
typedef ::AdwToolbarViewClass class_type;


struct TypeInitData;

protected:
GI_INLINE_DECL ~ToolbarViewClassDef() = default;
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );


};

GI_CLASS_IMPL_BEGIN


class ToolbarViewClass: public detail::ClassTemplate<Adw::impl::internal::ToolbarViewClassDef, Gtk::impl::internal::WidgetClass>
{
friend class internal::ToolbarViewClassDef;
typedef ToolbarViewClass self;
typedef detail::ClassTemplate<Adw::impl::internal::ToolbarViewClassDef, Gtk::impl::internal::WidgetClass> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types



};


struct ToolbarViewClassDef::TypeInitData
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

using ToolbarViewImpl = detail::ObjectImpl<ToolbarView, internal::ToolbarViewClass>;

} // namespace impl

} // namespace Adw

} // namespace repository

} // namespace gi

#endif
