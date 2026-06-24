// AUTO-GENERATED

#ifndef _GI_ADW_VIEWSTACK_HPP_
#define _GI_ADW_VIEWSTACK_HPP_


namespace gi {

namespace repository {

namespace Adw {

class ViewStackPage;

class ViewStack;

namespace base {


#define GI_ADW_VIEWSTACK_BASE base::ViewStackBase
class ViewStackBase : public Gtk::Widget
{
typedef Gtk::Widget super_type;
public:
typedef ::AdwViewStack BaseObjectType;

ViewStackBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return adw_view_stack_get_type(); } 

// GtkWidget* /*none*/ adw_view_stack_new ();
// ::AdwViewStack* /*none*/ adw_view_stack_new ();
static GI_INLINE_DECL Adw::ViewStack new_ () noexcept;

// AdwViewStackPage* /*none*/ adw_view_stack_add (AdwViewStack* self /*none*/, GtkWidget* child /*none*/);
// ::AdwViewStackPage* /*none*/ adw_view_stack_add (::AdwViewStack* self /*none*/, ::GtkWidget* child /*none*/);
GI_INLINE_DECL Adw::ViewStackPage add (Gtk::Widget child) noexcept;

// AdwViewStackPage* /*none*/ adw_view_stack_add_named (AdwViewStack* self /*none*/, GtkWidget* child /*none*/, const char* name /*none,nullable*/);
// ::AdwViewStackPage* /*none*/ adw_view_stack_add_named (::AdwViewStack* self /*none*/, ::GtkWidget* child /*none*/, const char* name /*none,nullable*/);
GI_INLINE_DECL Adw::ViewStackPage add_named (Gtk::Widget child, const gi::cstring_v name) noexcept;
GI_INLINE_DECL Adw::ViewStackPage add_named (Gtk::Widget child) noexcept;

// AdwViewStackPage* /*none*/ adw_view_stack_add_titled (AdwViewStack* self /*none*/, GtkWidget* child /*none*/, const char* name /*none,nullable*/, const char* title /*none*/);
// ::AdwViewStackPage* /*none*/ adw_view_stack_add_titled (::AdwViewStack* self /*none*/, ::GtkWidget* child /*none*/, const char* name /*none,nullable*/, const char* title /*none*/);
GI_INLINE_DECL Adw::ViewStackPage add_titled (Gtk::Widget child, const gi::cstring_v name, const gi::cstring_v title) noexcept;
GI_INLINE_DECL Adw::ViewStackPage add_titled (Gtk::Widget child, const gi::cstring_v title) noexcept;

// AdwViewStackPage* /*none*/ adw_view_stack_add_titled_with_icon (AdwViewStack* self /*none*/, GtkWidget* child /*none*/, const char* name /*none,nullable*/, const char* title /*none*/, const char* icon_name /*none*/);
// ::AdwViewStackPage* /*none*/ adw_view_stack_add_titled_with_icon (::AdwViewStack* self /*none*/, ::GtkWidget* child /*none*/, const char* name /*none,nullable*/, const char* title /*none*/, const char* icon_name /*none*/);
GI_INLINE_DECL Adw::ViewStackPage add_titled_with_icon (Gtk::Widget child, const gi::cstring_v name, const gi::cstring_v title, const gi::cstring_v icon_name) noexcept;
GI_INLINE_DECL Adw::ViewStackPage add_titled_with_icon (Gtk::Widget child, const gi::cstring_v title, const gi::cstring_v icon_name) noexcept;

// GtkWidget* /*none,nullable*/ adw_view_stack_get_child_by_name (AdwViewStack* self /*none*/, const char* name /*none*/);
// ::GtkWidget* /*none,nullable*/ adw_view_stack_get_child_by_name (::AdwViewStack* self /*none*/, const char* name /*none*/);
GI_INLINE_DECL Gtk::Widget get_child_by_name (const gi::cstring_v name) noexcept;

// gboolean adw_view_stack_get_enable_transitions (AdwViewStack* self /*none*/);
// gboolean adw_view_stack_get_enable_transitions (::AdwViewStack* self /*none*/);
GI_INLINE_DECL bool get_enable_transitions () noexcept;

// gboolean adw_view_stack_get_hhomogeneous (AdwViewStack* self /*none*/);
// gboolean adw_view_stack_get_hhomogeneous (::AdwViewStack* self /*none*/);
GI_INLINE_DECL bool get_hhomogeneous () noexcept;

// AdwViewStackPage* /*none*/ adw_view_stack_get_page (AdwViewStack* self /*none*/, GtkWidget* child /*none*/);
// ::AdwViewStackPage* /*none*/ adw_view_stack_get_page (::AdwViewStack* self /*none*/, ::GtkWidget* child /*none*/);
GI_INLINE_DECL Adw::ViewStackPage get_page (Gtk::Widget child) noexcept;

// GtkSelectionModel* /*full*/ adw_view_stack_get_pages (AdwViewStack* self /*none*/);
// ::GtkSelectionModel* /*full*/ adw_view_stack_get_pages (::AdwViewStack* self /*none*/);
GI_INLINE_DECL Gtk::SelectionModel get_pages () noexcept;

// guint adw_view_stack_get_transition_duration (AdwViewStack* self /*none*/);
// guint adw_view_stack_get_transition_duration (::AdwViewStack* self /*none*/);
GI_INLINE_DECL guint get_transition_duration () noexcept;

// gboolean adw_view_stack_get_transition_running (AdwViewStack* self /*none*/);
// gboolean adw_view_stack_get_transition_running (::AdwViewStack* self /*none*/);
GI_INLINE_DECL bool get_transition_running () noexcept;

// gboolean adw_view_stack_get_vhomogeneous (AdwViewStack* self /*none*/);
// gboolean adw_view_stack_get_vhomogeneous (::AdwViewStack* self /*none*/);
GI_INLINE_DECL bool get_vhomogeneous () noexcept;

// GtkWidget* /*none,nullable*/ adw_view_stack_get_visible_child (AdwViewStack* self /*none*/);
// ::GtkWidget* /*none,nullable*/ adw_view_stack_get_visible_child (::AdwViewStack* self /*none*/);
GI_INLINE_DECL Gtk::Widget get_visible_child () noexcept;

// const char* /*none,nullable*/ adw_view_stack_get_visible_child_name (AdwViewStack* self /*none*/);
// const char* /*none,nullable*/ adw_view_stack_get_visible_child_name (::AdwViewStack* self /*none*/);
GI_INLINE_DECL gi::cstring_v get_visible_child_name () noexcept;

// void adw_view_stack_remove (AdwViewStack* self /*none*/, GtkWidget* child /*none*/);
// void adw_view_stack_remove (::AdwViewStack* self /*none*/, ::GtkWidget* child /*none*/);
GI_INLINE_DECL void remove (Gtk::Widget child) noexcept;

// void adw_view_stack_set_enable_transitions (AdwViewStack* self /*none*/, gboolean enable_transitions);
// void adw_view_stack_set_enable_transitions (::AdwViewStack* self /*none*/, gboolean enable_transitions);
GI_INLINE_DECL void set_enable_transitions (gboolean enable_transitions) noexcept;

// void adw_view_stack_set_hhomogeneous (AdwViewStack* self /*none*/, gboolean hhomogeneous);
// void adw_view_stack_set_hhomogeneous (::AdwViewStack* self /*none*/, gboolean hhomogeneous);
GI_INLINE_DECL void set_hhomogeneous (gboolean hhomogeneous) noexcept;

// void adw_view_stack_set_transition_duration (AdwViewStack* self /*none*/, guint duration);
// void adw_view_stack_set_transition_duration (::AdwViewStack* self /*none*/, guint duration);
GI_INLINE_DECL void set_transition_duration (guint duration) noexcept;

// void adw_view_stack_set_vhomogeneous (AdwViewStack* self /*none*/, gboolean vhomogeneous);
// void adw_view_stack_set_vhomogeneous (::AdwViewStack* self /*none*/, gboolean vhomogeneous);
GI_INLINE_DECL void set_vhomogeneous (gboolean vhomogeneous) noexcept;

// void adw_view_stack_set_visible_child (AdwViewStack* self /*none*/, GtkWidget* child /*none*/);
// void adw_view_stack_set_visible_child (::AdwViewStack* self /*none*/, ::GtkWidget* child /*none*/);
GI_INLINE_DECL void set_visible_child (Gtk::Widget child) noexcept;

// void adw_view_stack_set_visible_child_name (AdwViewStack* self /*none*/, const char* name /*none*/);
// void adw_view_stack_set_visible_child_name (::AdwViewStack* self /*none*/, const char* name /*none*/);
GI_INLINE_DECL void set_visible_child_name (const gi::cstring_v name) noexcept;

gi::property_proxy<bool, base::ViewStackBase> property_enable_transitions()
{ return gi::property_proxy<bool, base::ViewStackBase> (*this, "enable-transitions"); }
const gi::property_proxy<bool, base::ViewStackBase> property_enable_transitions() const
{ return gi::property_proxy<bool, base::ViewStackBase> (*this, "enable-transitions"); }

gi::property_proxy<bool, base::ViewStackBase> property_hhomogeneous()
{ return gi::property_proxy<bool, base::ViewStackBase> (*this, "hhomogeneous"); }
const gi::property_proxy<bool, base::ViewStackBase> property_hhomogeneous() const
{ return gi::property_proxy<bool, base::ViewStackBase> (*this, "hhomogeneous"); }

gi::property_proxy<Gtk::SelectionModel, base::ViewStackBase> property_pages()
{ return gi::property_proxy<Gtk::SelectionModel, base::ViewStackBase> (*this, "pages"); }
const gi::property_proxy<Gtk::SelectionModel, base::ViewStackBase> property_pages() const
{ return gi::property_proxy<Gtk::SelectionModel, base::ViewStackBase> (*this, "pages"); }

gi::property_proxy<guint, base::ViewStackBase> property_transition_duration()
{ return gi::property_proxy<guint, base::ViewStackBase> (*this, "transition-duration"); }
const gi::property_proxy<guint, base::ViewStackBase> property_transition_duration() const
{ return gi::property_proxy<guint, base::ViewStackBase> (*this, "transition-duration"); }

gi::property_proxy<bool, base::ViewStackBase> property_transition_running()
{ return gi::property_proxy<bool, base::ViewStackBase> (*this, "transition-running"); }
const gi::property_proxy<bool, base::ViewStackBase> property_transition_running() const
{ return gi::property_proxy<bool, base::ViewStackBase> (*this, "transition-running"); }

gi::property_proxy<bool, base::ViewStackBase> property_vhomogeneous()
{ return gi::property_proxy<bool, base::ViewStackBase> (*this, "vhomogeneous"); }
const gi::property_proxy<bool, base::ViewStackBase> property_vhomogeneous() const
{ return gi::property_proxy<bool, base::ViewStackBase> (*this, "vhomogeneous"); }

gi::property_proxy<Gtk::Widget, base::ViewStackBase> property_visible_child()
{ return gi::property_proxy<Gtk::Widget, base::ViewStackBase> (*this, "visible-child"); }
const gi::property_proxy<Gtk::Widget, base::ViewStackBase> property_visible_child() const
{ return gi::property_proxy<Gtk::Widget, base::ViewStackBase> (*this, "visible-child"); }

gi::property_proxy<gi::cstring, base::ViewStackBase> property_visible_child_name()
{ return gi::property_proxy<gi::cstring, base::ViewStackBase> (*this, "visible-child-name"); }
const gi::property_proxy<gi::cstring, base::ViewStackBase> property_visible_child_name() const
{ return gi::property_proxy<gi::cstring, base::ViewStackBase> (*this, "visible-child-name"); }

}; // class

} // namespace base

} // namespace Adw

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<adw/viewstack_extra_def.hpp>)
#include <adw/viewstack_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<adw/viewstack_extra.hpp>)
#include <adw/viewstack_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Adw {

class ViewStack : public GI_ADW_VIEWSTACK_BASE
{ typedef GI_ADW_VIEWSTACK_BASE super_type; using super_type::super_type; };

} // namespace Adw

template<> struct declare_cpptype_of<::AdwViewStack>
{ typedef Adw::ViewStack type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Adw {

namespace impl {

namespace internal {


class ViewStackClassDef
{
typedef ViewStackClassDef self;
public:
typedef Adw::ViewStack instance_type;
typedef ::AdwViewStackClass class_type;


struct TypeInitData;

protected:
GI_INLINE_DECL ~ViewStackClassDef() = default;
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );


};

GI_CLASS_IMPL_BEGIN


class ViewStackClass: public detail::ClassTemplate<Adw::impl::internal::ViewStackClassDef, Gtk::impl::internal::WidgetClass>
{
friend class internal::ViewStackClassDef;
typedef ViewStackClass self;
typedef detail::ClassTemplate<Adw::impl::internal::ViewStackClassDef, Gtk::impl::internal::WidgetClass> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types



};


struct ViewStackClassDef::TypeInitData
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

using ViewStackImpl = detail::ObjectImpl<ViewStack, internal::ViewStackClass>;

} // namespace impl

} // namespace Adw

} // namespace repository

} // namespace gi

#endif
