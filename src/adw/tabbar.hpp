// AUTO-GENERATED

#ifndef _GI_ADW_TABBAR_HPP_
#define _GI_ADW_TABBAR_HPP_


namespace gi {

namespace repository {

namespace Adw {

class TabPage;
class TabView;

class TabBar;

namespace base {


#define GI_ADW_TABBAR_BASE base::TabBarBase
class TabBarBase : public Gtk::Widget
{
typedef Gtk::Widget super_type;
public:
typedef ::AdwTabBar BaseObjectType;

TabBarBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return adw_tab_bar_get_type(); } 

// AdwTabBar* /*none*/ adw_tab_bar_new ();
// ::AdwTabBar* /*none*/ adw_tab_bar_new ();
static GI_INLINE_DECL Adw::TabBar new_ () noexcept;

// gboolean adw_tab_bar_get_autohide (AdwTabBar* self /*none*/);
// gboolean adw_tab_bar_get_autohide (::AdwTabBar* self /*none*/);
GI_INLINE_DECL bool get_autohide () noexcept;

// GtkWidget* /*none,nullable*/ adw_tab_bar_get_end_action_widget (AdwTabBar* self /*none*/);
// ::GtkWidget* /*none,nullable*/ adw_tab_bar_get_end_action_widget (::AdwTabBar* self /*none*/);
GI_INLINE_DECL Gtk::Widget get_end_action_widget () noexcept;

// gboolean adw_tab_bar_get_expand_tabs (AdwTabBar* self /*none*/);
// gboolean adw_tab_bar_get_expand_tabs (::AdwTabBar* self /*none*/);
GI_INLINE_DECL bool get_expand_tabs () noexcept;

// GdkDragAction adw_tab_bar_get_extra_drag_preferred_action (AdwTabBar* self /*none*/);
// ::GdkDragAction adw_tab_bar_get_extra_drag_preferred_action (::AdwTabBar* self /*none*/);
GI_INLINE_DECL Gdk::DragAction get_extra_drag_preferred_action () noexcept;

// gboolean adw_tab_bar_get_extra_drag_preload (AdwTabBar* self /*none*/);
// gboolean adw_tab_bar_get_extra_drag_preload (::AdwTabBar* self /*none*/);
GI_INLINE_DECL bool get_extra_drag_preload () noexcept;

// gboolean adw_tab_bar_get_inverted (AdwTabBar* self /*none*/);
// gboolean adw_tab_bar_get_inverted (::AdwTabBar* self /*none*/);
GI_INLINE_DECL bool get_inverted () noexcept;

// gboolean adw_tab_bar_get_is_overflowing (AdwTabBar* self /*none*/);
// gboolean adw_tab_bar_get_is_overflowing (::AdwTabBar* self /*none*/);
GI_INLINE_DECL bool get_is_overflowing () noexcept;

// GtkWidget* /*none,nullable*/ adw_tab_bar_get_start_action_widget (AdwTabBar* self /*none*/);
// ::GtkWidget* /*none,nullable*/ adw_tab_bar_get_start_action_widget (::AdwTabBar* self /*none*/);
GI_INLINE_DECL Gtk::Widget get_start_action_widget () noexcept;

// gboolean adw_tab_bar_get_tabs_revealed (AdwTabBar* self /*none*/);
// gboolean adw_tab_bar_get_tabs_revealed (::AdwTabBar* self /*none*/);
GI_INLINE_DECL bool get_tabs_revealed () noexcept;

// AdwTabView* /*none,nullable*/ adw_tab_bar_get_view (AdwTabBar* self /*none*/);
// ::AdwTabView* /*none,nullable*/ adw_tab_bar_get_view (::AdwTabBar* self /*none*/);
GI_INLINE_DECL Adw::TabView get_view () noexcept;

// void adw_tab_bar_set_autohide (AdwTabBar* self /*none*/, gboolean autohide);
// void adw_tab_bar_set_autohide (::AdwTabBar* self /*none*/, gboolean autohide);
GI_INLINE_DECL void set_autohide (gboolean autohide) noexcept;

// void adw_tab_bar_set_end_action_widget (AdwTabBar* self /*none*/, GtkWidget* widget /*none,nullable*/);
// void adw_tab_bar_set_end_action_widget (::AdwTabBar* self /*none*/, ::GtkWidget* widget /*none,nullable*/);
GI_INLINE_DECL void set_end_action_widget (Gtk::Widget widget) noexcept;
GI_INLINE_DECL void set_end_action_widget () noexcept;

// void adw_tab_bar_set_expand_tabs (AdwTabBar* self /*none*/, gboolean expand_tabs);
// void adw_tab_bar_set_expand_tabs (::AdwTabBar* self /*none*/, gboolean expand_tabs);
GI_INLINE_DECL void set_expand_tabs (gboolean expand_tabs) noexcept;

// void adw_tab_bar_set_extra_drag_preload (AdwTabBar* self /*none*/, gboolean preload);
// void adw_tab_bar_set_extra_drag_preload (::AdwTabBar* self /*none*/, gboolean preload);
GI_INLINE_DECL void set_extra_drag_preload (gboolean preload) noexcept;

// void adw_tab_bar_set_inverted (AdwTabBar* self /*none*/, gboolean inverted);
// void adw_tab_bar_set_inverted (::AdwTabBar* self /*none*/, gboolean inverted);
GI_INLINE_DECL void set_inverted (gboolean inverted) noexcept;

// void adw_tab_bar_set_start_action_widget (AdwTabBar* self /*none*/, GtkWidget* widget /*none,nullable*/);
// void adw_tab_bar_set_start_action_widget (::AdwTabBar* self /*none*/, ::GtkWidget* widget /*none,nullable*/);
GI_INLINE_DECL void set_start_action_widget (Gtk::Widget widget) noexcept;
GI_INLINE_DECL void set_start_action_widget () noexcept;

// void adw_tab_bar_set_view (AdwTabBar* self /*none*/, AdwTabView* view /*none,nullable*/);
// void adw_tab_bar_set_view (::AdwTabBar* self /*none*/, ::AdwTabView* view /*none,nullable*/);
GI_INLINE_DECL void set_view (Adw::TabView view) noexcept;
GI_INLINE_DECL void set_view () noexcept;

// void adw_tab_bar_setup_extra_drop_target (AdwTabBar* self /*none*/, GdkDragAction actions, GType* types /*none,nullable*/, gsize n_types);
// void adw_tab_bar_setup_extra_drop_target (::AdwTabBar* self /*none*/, ::GdkDragAction actions, GType* types /*none,nullable*/, gsize n_types);
GI_INLINE_DECL void setup_extra_drop_target (Gdk::DragAction actions, const GType * types, gsize n_types) noexcept;

gi::property_proxy<bool, base::TabBarBase> property_autohide()
{ return gi::property_proxy<bool, base::TabBarBase> (*this, "autohide"); }
const gi::property_proxy<bool, base::TabBarBase> property_autohide() const
{ return gi::property_proxy<bool, base::TabBarBase> (*this, "autohide"); }

gi::property_proxy<Gtk::Widget, base::TabBarBase> property_end_action_widget()
{ return gi::property_proxy<Gtk::Widget, base::TabBarBase> (*this, "end-action-widget"); }
const gi::property_proxy<Gtk::Widget, base::TabBarBase> property_end_action_widget() const
{ return gi::property_proxy<Gtk::Widget, base::TabBarBase> (*this, "end-action-widget"); }

gi::property_proxy<bool, base::TabBarBase> property_expand_tabs()
{ return gi::property_proxy<bool, base::TabBarBase> (*this, "expand-tabs"); }
const gi::property_proxy<bool, base::TabBarBase> property_expand_tabs() const
{ return gi::property_proxy<bool, base::TabBarBase> (*this, "expand-tabs"); }

gi::property_proxy<Gdk::DragAction, base::TabBarBase> property_extra_drag_preferred_action()
{ return gi::property_proxy<Gdk::DragAction, base::TabBarBase> (*this, "extra-drag-preferred-action"); }
const gi::property_proxy<Gdk::DragAction, base::TabBarBase> property_extra_drag_preferred_action() const
{ return gi::property_proxy<Gdk::DragAction, base::TabBarBase> (*this, "extra-drag-preferred-action"); }

gi::property_proxy<bool, base::TabBarBase> property_extra_drag_preload()
{ return gi::property_proxy<bool, base::TabBarBase> (*this, "extra-drag-preload"); }
const gi::property_proxy<bool, base::TabBarBase> property_extra_drag_preload() const
{ return gi::property_proxy<bool, base::TabBarBase> (*this, "extra-drag-preload"); }

gi::property_proxy<bool, base::TabBarBase> property_inverted()
{ return gi::property_proxy<bool, base::TabBarBase> (*this, "inverted"); }
const gi::property_proxy<bool, base::TabBarBase> property_inverted() const
{ return gi::property_proxy<bool, base::TabBarBase> (*this, "inverted"); }

gi::property_proxy<bool, base::TabBarBase> property_is_overflowing()
{ return gi::property_proxy<bool, base::TabBarBase> (*this, "is-overflowing"); }
const gi::property_proxy<bool, base::TabBarBase> property_is_overflowing() const
{ return gi::property_proxy<bool, base::TabBarBase> (*this, "is-overflowing"); }

gi::property_proxy<Gtk::Widget, base::TabBarBase> property_start_action_widget()
{ return gi::property_proxy<Gtk::Widget, base::TabBarBase> (*this, "start-action-widget"); }
const gi::property_proxy<Gtk::Widget, base::TabBarBase> property_start_action_widget() const
{ return gi::property_proxy<Gtk::Widget, base::TabBarBase> (*this, "start-action-widget"); }

gi::property_proxy<bool, base::TabBarBase> property_tabs_revealed()
{ return gi::property_proxy<bool, base::TabBarBase> (*this, "tabs-revealed"); }
const gi::property_proxy<bool, base::TabBarBase> property_tabs_revealed() const
{ return gi::property_proxy<bool, base::TabBarBase> (*this, "tabs-revealed"); }

gi::property_proxy<Adw::TabView, base::TabBarBase> property_view()
{ return gi::property_proxy<Adw::TabView, base::TabBarBase> (*this, "view"); }
const gi::property_proxy<Adw::TabView, base::TabBarBase> property_view() const
{ return gi::property_proxy<Adw::TabView, base::TabBarBase> (*this, "view"); }

// (signal) gboolean extra-drag-drop ( page /*none*/,  value /*none*/);
// (signal) gboolean extra-drag-drop (::AdwTabPage* page /*none*/, ::GValue* value /*none*/);
gi::signal_proxy<bool(Adw::TabBar, Adw::TabPage page, GObject::Value_Ref value)> signal_extra_drag_drop()
{ return gi::signal_proxy<bool(Adw::TabBar, Adw::TabPage page, GObject::Value_Ref value)> (*this, "extra-drag-drop"); }

// (signal)  extra-drag-value ( page /*none*/,  value /*none,nullable*/);
// (signal) ::GdkDragAction extra-drag-value (::AdwTabPage* page /*none*/, ::GValue* value /*none,nullable*/);
gi::signal_proxy<Gdk::DragAction(Adw::TabBar, Adw::TabPage page, GObject::Value_Ref value)> signal_extra_drag_value()
{ return gi::signal_proxy<Gdk::DragAction(Adw::TabBar, Adw::TabPage page, GObject::Value_Ref value)> (*this, "extra-drag-value"); }

}; // class

} // namespace base

} // namespace Adw

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<adw/tabbar_extra_def.hpp>)
#include <adw/tabbar_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<adw/tabbar_extra.hpp>)
#include <adw/tabbar_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Adw {

class TabBar : public GI_ADW_TABBAR_BASE
{ typedef GI_ADW_TABBAR_BASE super_type; using super_type::super_type; };

} // namespace Adw

template<> struct declare_cpptype_of<::AdwTabBar>
{ typedef Adw::TabBar type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Adw {

namespace impl {

namespace internal {


class TabBarClassDef
{
typedef TabBarClassDef self;
public:
typedef Adw::TabBar instance_type;
typedef ::AdwTabBarClass class_type;


struct TypeInitData;

protected:
GI_INLINE_DECL ~TabBarClassDef() = default;
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );


};

GI_CLASS_IMPL_BEGIN


class TabBarClass: public detail::ClassTemplate<Adw::impl::internal::TabBarClassDef, Gtk::impl::internal::WidgetClass>
{
friend class internal::TabBarClassDef;
typedef TabBarClass self;
typedef detail::ClassTemplate<Adw::impl::internal::TabBarClassDef, Gtk::impl::internal::WidgetClass> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types



};


struct TabBarClassDef::TypeInitData
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

using TabBarImpl = detail::ObjectImpl<TabBar, internal::TabBarClass>;

} // namespace impl

} // namespace Adw

} // namespace repository

} // namespace gi

#endif
