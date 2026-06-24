// AUTO-GENERATED

#ifndef _GI_GTK_GRAPHICSOFFLOAD_HPP_
#define _GI_GTK_GRAPHICSOFFLOAD_HPP_

#include "widget.hpp"

namespace gi {

namespace repository {

namespace Gtk {

class Widget;

class GraphicsOffload;

namespace base {


#define GI_GTK_GRAPHICSOFFLOAD_BASE base::GraphicsOffloadBase
class GraphicsOffloadBase : public Gtk::Widget
{
typedef Gtk::Widget super_type;
public:
typedef ::GtkGraphicsOffload BaseObjectType;

GraphicsOffloadBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_graphics_offload_get_type(); } 

// GtkWidget* /*none*/ gtk_graphics_offload_new (GtkWidget* child /*none,nullable*/);
// ::GtkGraphicsOffload* /*none*/ gtk_graphics_offload_new (::GtkWidget* child /*none,nullable*/);
static GI_INLINE_DECL Gtk::GraphicsOffload new_ (Gtk::Widget child) noexcept;
static GI_INLINE_DECL Gtk::GraphicsOffload new_ () noexcept;

// gboolean gtk_graphics_offload_get_black_background (GtkGraphicsOffload* self /*none*/);
// gboolean gtk_graphics_offload_get_black_background (::GtkGraphicsOffload* self /*none*/);
GI_INLINE_DECL bool get_black_background () noexcept;

// GtkWidget* /*none,nullable*/ gtk_graphics_offload_get_child (GtkGraphicsOffload* self /*none*/);
// ::GtkWidget* /*none,nullable*/ gtk_graphics_offload_get_child (::GtkGraphicsOffload* self /*none*/);
GI_INLINE_DECL Gtk::Widget get_child () noexcept;

// GtkGraphicsOffloadEnabled gtk_graphics_offload_get_enabled (GtkGraphicsOffload* self /*none*/);
// ::GtkGraphicsOffloadEnabled gtk_graphics_offload_get_enabled (::GtkGraphicsOffload* self /*none*/);
GI_INLINE_DECL Gtk::GraphicsOffloadEnabled get_enabled () noexcept;

// void gtk_graphics_offload_set_black_background (GtkGraphicsOffload* self /*none*/, gboolean value);
// void gtk_graphics_offload_set_black_background (::GtkGraphicsOffload* self /*none*/, gboolean value);
GI_INLINE_DECL void set_black_background (gboolean value) noexcept;

// void gtk_graphics_offload_set_child (GtkGraphicsOffload* self /*none*/, GtkWidget* child /*none,nullable*/);
// void gtk_graphics_offload_set_child (::GtkGraphicsOffload* self /*none*/, ::GtkWidget* child /*none,nullable*/);
GI_INLINE_DECL void set_child (Gtk::Widget child) noexcept;
GI_INLINE_DECL void set_child () noexcept;

// void gtk_graphics_offload_set_enabled (GtkGraphicsOffload* self /*none*/, GtkGraphicsOffloadEnabled enabled);
// void gtk_graphics_offload_set_enabled (::GtkGraphicsOffload* self /*none*/, ::GtkGraphicsOffloadEnabled enabled);
GI_INLINE_DECL void set_enabled (Gtk::GraphicsOffloadEnabled enabled) noexcept;

gi::property_proxy<bool, base::GraphicsOffloadBase> property_black_background()
{ return gi::property_proxy<bool, base::GraphicsOffloadBase> (*this, "black-background"); }
const gi::property_proxy<bool, base::GraphicsOffloadBase> property_black_background() const
{ return gi::property_proxy<bool, base::GraphicsOffloadBase> (*this, "black-background"); }

gi::property_proxy<Gtk::Widget, base::GraphicsOffloadBase> property_child()
{ return gi::property_proxy<Gtk::Widget, base::GraphicsOffloadBase> (*this, "child"); }
const gi::property_proxy<Gtk::Widget, base::GraphicsOffloadBase> property_child() const
{ return gi::property_proxy<Gtk::Widget, base::GraphicsOffloadBase> (*this, "child"); }

gi::property_proxy<Gtk::GraphicsOffloadEnabled, base::GraphicsOffloadBase> property_enabled()
{ return gi::property_proxy<Gtk::GraphicsOffloadEnabled, base::GraphicsOffloadBase> (*this, "enabled"); }
const gi::property_proxy<Gtk::GraphicsOffloadEnabled, base::GraphicsOffloadBase> property_enabled() const
{ return gi::property_proxy<Gtk::GraphicsOffloadEnabled, base::GraphicsOffloadBase> (*this, "enabled"); }

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/graphicsoffload_extra_def.hpp>)
#include <gtk/graphicsoffload_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/graphicsoffload_extra.hpp>)
#include <gtk/graphicsoffload_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class GraphicsOffload : public GI_GTK_GRAPHICSOFFLOAD_BASE
{ typedef GI_GTK_GRAPHICSOFFLOAD_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkGraphicsOffload>
{ typedef Gtk::GraphicsOffload type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {


class GraphicsOffloadClassDef
{
typedef GraphicsOffloadClassDef self;
public:
typedef Gtk::GraphicsOffload instance_type;
typedef ::GtkGraphicsOffloadClass class_type;


struct TypeInitData;

protected:
GI_INLINE_DECL ~GraphicsOffloadClassDef() = default;
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );


};

GI_CLASS_IMPL_BEGIN


class GraphicsOffloadClass: public detail::ClassTemplate<Gtk::impl::internal::GraphicsOffloadClassDef, Gtk::impl::internal::WidgetClass>
{
friend class internal::GraphicsOffloadClassDef;
typedef GraphicsOffloadClass self;
typedef detail::ClassTemplate<Gtk::impl::internal::GraphicsOffloadClassDef, Gtk::impl::internal::WidgetClass> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types



};


struct GraphicsOffloadClassDef::TypeInitData
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

using GraphicsOffloadImpl = detail::ObjectImpl<GraphicsOffload, internal::GraphicsOffloadClass>;

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
