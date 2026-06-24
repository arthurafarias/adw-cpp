// AUTO-GENERATED

#ifndef _GI_GTK_SVG_HPP_
#define _GI_GTK_SVG_HPP_


namespace gi {

namespace repository {

namespace Gtk {

class SymbolicPaintable;

class Svg;

namespace base {


#define GI_GTK_SVG_BASE base::SvgBase
class SvgBase : public GObject::Object
{
typedef GObject::Object super_type;
public:
typedef ::GtkSvg BaseObjectType;

SvgBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_svg_get_type(); } 

GI_INLINE_DECL Gdk::Paintable interface_ (gi::interface_tag<Gdk::Paintable>);

GI_INLINE_DECL operator Gdk::Paintable ();

GI_INLINE_DECL Gtk::SymbolicPaintable interface_ (gi::interface_tag<Gtk::SymbolicPaintable>);

GI_INLINE_DECL operator Gtk::SymbolicPaintable ();

// GtkSvg* /*full*/ gtk_svg_new ();
// ::GtkSvg* /*full*/ gtk_svg_new ();
static GI_INLINE_DECL Gtk::Svg new_ () noexcept;

// GtkSvg* /*full*/ gtk_svg_new_from_bytes (GBytes* bytes /*none*/);
// ::GtkSvg* /*full*/ gtk_svg_new_from_bytes (::GBytes* bytes /*none*/);
static GI_INLINE_DECL Gtk::Svg new_from_bytes (GLib::Bytes_Ref bytes) noexcept;

// GtkSvg* /*full*/ gtk_svg_new_from_resource (const char* path /*none*/);
// ::GtkSvg* /*full*/ gtk_svg_new_from_resource (const char* path /*none*/);
static GI_INLINE_DECL Gtk::Svg new_from_resource (const gi::cstring_v path) noexcept;

// GtkSvgFeatures gtk_svg_get_features (GtkSvg* self /*none*/);
// ::GtkSvgFeatures gtk_svg_get_features (::GtkSvg* self /*none*/);
GI_INLINE_DECL Gtk::SvgFeatures get_features () noexcept;

// unsigned int gtk_svg_get_state (GtkSvg* self /*none*/);
// guint gtk_svg_get_state (::GtkSvg* self /*none*/);
GI_INLINE_DECL guint get_state () noexcept;

// const char** /*none,nullable*/ gtk_svg_get_state_names (GtkSvg* self /*none*/, unsigned int* length);
// const char** /*none,nullable*/ gtk_svg_get_state_names (::GtkSvg* self /*none*/, guint* length);
GI_INLINE_DECL gi::Collection<gi::ZTSpan, char*, gi::transfer_none_t> get_state_names (guint & length) noexcept;
GI_INLINE_DECL std::tuple<gi::Collection<gi::ZTSpan, char*, gi::transfer_none_t>, guint> get_state_names () noexcept;

// double gtk_svg_get_weight (GtkSvg* self /*none*/);
// gdouble gtk_svg_get_weight (::GtkSvg* self /*none*/);
GI_INLINE_DECL gdouble get_weight () noexcept;

// void gtk_svg_load_from_bytes (GtkSvg* self /*none*/, GBytes* bytes /*none*/);
// void gtk_svg_load_from_bytes (::GtkSvg* self /*none*/, ::GBytes* bytes /*none*/);
GI_INLINE_DECL void load_from_bytes (GLib::Bytes_Ref bytes) noexcept;

// void gtk_svg_load_from_resource (GtkSvg* self /*none*/, const char* path /*none*/);
// void gtk_svg_load_from_resource (::GtkSvg* self /*none*/, const char* path /*none*/);
GI_INLINE_DECL void load_from_resource (const gi::cstring_v path) noexcept;

// void gtk_svg_pause (GtkSvg* self /*none*/);
// void gtk_svg_pause (::GtkSvg* self /*none*/);
GI_INLINE_DECL void pause () noexcept;

// void gtk_svg_play (GtkSvg* self /*none*/);
// void gtk_svg_play (::GtkSvg* self /*none*/);
GI_INLINE_DECL void play () noexcept;

// GBytes* /*full*/ gtk_svg_serialize (GtkSvg* self /*none*/);
// ::GBytes* /*full*/ gtk_svg_serialize (::GtkSvg* self /*none*/);
GI_INLINE_DECL GLib::Bytes serialize () noexcept;

// void gtk_svg_set_features (GtkSvg* self /*none*/, GtkSvgFeatures features);
// void gtk_svg_set_features (::GtkSvg* self /*none*/, ::GtkSvgFeatures features);
GI_INLINE_DECL void set_features (Gtk::SvgFeatures features) noexcept;

// void gtk_svg_set_frame_clock (GtkSvg* self /*none*/, GdkFrameClock* clock /*none*/);
// void gtk_svg_set_frame_clock (::GtkSvg* self /*none*/, ::GdkFrameClock* clock /*none*/);
GI_INLINE_DECL void set_frame_clock (Gdk::FrameClock clock) noexcept;

// void gtk_svg_set_state (GtkSvg* self /*none*/, unsigned int state);
// void gtk_svg_set_state (::GtkSvg* self /*none*/, guint state);
GI_INLINE_DECL void set_state (guint state) noexcept;

// void gtk_svg_set_weight (GtkSvg* self /*none*/, double weight);
// void gtk_svg_set_weight (::GtkSvg* self /*none*/, gdouble weight);
GI_INLINE_DECL void set_weight (gdouble weight) noexcept;

// gboolean gtk_svg_write_to_file (GtkSvg* self /*none*/, const char* filename /*none*/, GError ** error);
// gboolean gtk_svg_write_to_file (::GtkSvg* self /*none*/, const char* filename /*none*/, GError ** error);
GI_INLINE_DECL bool write_to_file (const gi::cstring_v filename);
GI_INLINE_DECL bool write_to_file (const gi::cstring_v filename, GLib::Error * _error) noexcept;

gi::property_proxy<Gtk::SvgFeatures, base::SvgBase> property_features()
{ return gi::property_proxy<Gtk::SvgFeatures, base::SvgBase> (*this, "features"); }
const gi::property_proxy<Gtk::SvgFeatures, base::SvgBase> property_features() const
{ return gi::property_proxy<Gtk::SvgFeatures, base::SvgBase> (*this, "features"); }

gi::property_proxy<bool, base::SvgBase> property_playing()
{ return gi::property_proxy<bool, base::SvgBase> (*this, "playing"); }
const gi::property_proxy<bool, base::SvgBase> property_playing() const
{ return gi::property_proxy<bool, base::SvgBase> (*this, "playing"); }

gi::property_proxy<gi::cstring, base::SvgBase> property_resource()
{ return gi::property_proxy<gi::cstring, base::SvgBase> (*this, "resource"); }
const gi::property_proxy<gi::cstring, base::SvgBase> property_resource() const
{ return gi::property_proxy<gi::cstring, base::SvgBase> (*this, "resource"); }

gi::property_proxy<guint, base::SvgBase> property_state()
{ return gi::property_proxy<guint, base::SvgBase> (*this, "state"); }
const gi::property_proxy<guint, base::SvgBase> property_state() const
{ return gi::property_proxy<guint, base::SvgBase> (*this, "state"); }

gi::property_proxy<gdouble, base::SvgBase> property_weight()
{ return gi::property_proxy<gdouble, base::SvgBase> (*this, "weight"); }
const gi::property_proxy<gdouble, base::SvgBase> property_weight() const
{ return gi::property_proxy<gdouble, base::SvgBase> (*this, "weight"); }

// (signal) void error ( error /*none*/);
// (signal) void error (::GError* error /*none*/);
gi::signal_proxy<void(Gtk::Svg, GLib::Error_Ref error)> signal_error()
{ return gi::signal_proxy<void(Gtk::Svg, GLib::Error_Ref error)> (*this, "error"); }

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/svg_extra_def.hpp>)
#include <gtk/svg_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/svg_extra.hpp>)
#include <gtk/svg_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class Svg : public GI_GTK_SVG_BASE
{ typedef GI_GTK_SVG_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkSvg>
{ typedef Gtk::Svg type; }; 

} // namespace repository

} // namespace gi

#include "symbolicpaintable.hpp"

namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {


class SvgClassDef
{
typedef SvgClassDef self;
public:
typedef Gtk::Svg instance_type;
typedef ::GtkSvgClass class_type;


struct TypeInitData;

protected:
GI_INLINE_DECL ~SvgClassDef() = default;
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );


};

GI_CLASS_IMPL_BEGIN


class SvgClass: public detail::ClassTemplate<Gtk::impl::internal::SvgClassDef, GObject::impl::internal::ObjectClass, Gdk::impl::internal::PaintableInterfaceClassImpl, Gtk::impl::internal::SymbolicPaintableInterfaceClassImpl>
{
friend class internal::SvgClassDef;
typedef SvgClass self;
typedef detail::ClassTemplate<Gtk::impl::internal::SvgClassDef, GObject::impl::internal::ObjectClass, Gdk::impl::internal::PaintableInterfaceClassImpl, Gtk::impl::internal::SymbolicPaintableInterfaceClassImpl> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types
typedef Gdk::impl::internal::PaintableInterfaceClassImpl GdkPaintableInterface_type;
typedef Gtk::impl::internal::SymbolicPaintableInterfaceClassImpl GtkSymbolicPaintableInterface_type;



};


struct SvgClassDef::TypeInitData
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

using SvgImpl = detail::ObjectImpl<Svg, internal::SvgClass>;

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
