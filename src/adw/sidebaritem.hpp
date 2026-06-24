// AUTO-GENERATED

#ifndef _GI_ADW_SIDEBARITEM_HPP_
#define _GI_ADW_SIDEBARITEM_HPP_


namespace gi {

namespace repository {

namespace Adw {

class SidebarSection;

class SidebarItem;

namespace base {


#define GI_ADW_SIDEBARITEM_BASE base::SidebarItemBase
class SidebarItemBase : public GObject::Object
{
typedef GObject::Object super_type;
public:
typedef ::AdwSidebarItem BaseObjectType;

SidebarItemBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return adw_sidebar_item_get_type(); } 

// AdwSidebarItem* /*full*/ adw_sidebar_item_new (const char* title /*none*/);
// ::AdwSidebarItem* /*full*/ adw_sidebar_item_new (const char* title /*none*/);
static GI_INLINE_DECL Adw::SidebarItem new_ (const gi::cstring_v title) noexcept;

// gboolean adw_sidebar_item_get_drag_motion_activate (AdwSidebarItem* self /*none*/);
// gboolean adw_sidebar_item_get_drag_motion_activate (::AdwSidebarItem* self /*none*/);
GI_INLINE_DECL bool get_drag_motion_activate () noexcept;

// gboolean adw_sidebar_item_get_enabled (AdwSidebarItem* self /*none*/);
// gboolean adw_sidebar_item_get_enabled (::AdwSidebarItem* self /*none*/);
GI_INLINE_DECL bool get_enabled () noexcept;

// const char* /*none,nullable*/ adw_sidebar_item_get_icon_name (AdwSidebarItem* self /*none*/);
// const char* /*none,nullable*/ adw_sidebar_item_get_icon_name (::AdwSidebarItem* self /*none*/);
GI_INLINE_DECL gi::cstring_v get_icon_name () noexcept;

// GdkPaintable* /*none,nullable*/ adw_sidebar_item_get_icon_paintable (AdwSidebarItem* self /*none*/);
// ::GdkPaintable* /*none,nullable*/ adw_sidebar_item_get_icon_paintable (::AdwSidebarItem* self /*none*/);
GI_INLINE_DECL Gdk::Paintable get_icon_paintable () noexcept;

// guint adw_sidebar_item_get_index (AdwSidebarItem* self /*none*/);
// guint adw_sidebar_item_get_index (::AdwSidebarItem* self /*none*/);
GI_INLINE_DECL guint get_index () noexcept;

// AdwSidebarSection* /*none,nullable*/ adw_sidebar_item_get_section (AdwSidebarItem* self /*none*/);
// ::AdwSidebarSection* /*none,nullable*/ adw_sidebar_item_get_section (::AdwSidebarItem* self /*none*/);
GI_INLINE_DECL Adw::SidebarSection get_section () noexcept;

// guint adw_sidebar_item_get_section_index (AdwSidebarItem* self /*none*/);
// guint adw_sidebar_item_get_section_index (::AdwSidebarItem* self /*none*/);
GI_INLINE_DECL guint get_section_index () noexcept;

// const char* /*none,nullable*/ adw_sidebar_item_get_subtitle (AdwSidebarItem* self /*none*/);
// const char* /*none,nullable*/ adw_sidebar_item_get_subtitle (::AdwSidebarItem* self /*none*/);
GI_INLINE_DECL gi::cstring_v get_subtitle () noexcept;

// GtkWidget* /*none,nullable*/ adw_sidebar_item_get_suffix (AdwSidebarItem* self /*none*/);
// ::GtkWidget* /*none,nullable*/ adw_sidebar_item_get_suffix (::AdwSidebarItem* self /*none*/);
GI_INLINE_DECL Gtk::Widget get_suffix () noexcept;

// const char* /*none,nullable*/ adw_sidebar_item_get_title (AdwSidebarItem* self /*none*/);
// const char* /*none,nullable*/ adw_sidebar_item_get_title (::AdwSidebarItem* self /*none*/);
GI_INLINE_DECL gi::cstring_v get_title () noexcept;

// const char* /*none,nullable*/ adw_sidebar_item_get_tooltip (AdwSidebarItem* self /*none*/);
// const char* /*none,nullable*/ adw_sidebar_item_get_tooltip (::AdwSidebarItem* self /*none*/);
GI_INLINE_DECL gi::cstring_v get_tooltip () noexcept;

// gboolean adw_sidebar_item_get_use_underline (AdwSidebarItem* self /*none*/);
// gboolean adw_sidebar_item_get_use_underline (::AdwSidebarItem* self /*none*/);
GI_INLINE_DECL bool get_use_underline () noexcept;

// gboolean adw_sidebar_item_get_visible (AdwSidebarItem* self /*none*/);
// gboolean adw_sidebar_item_get_visible (::AdwSidebarItem* self /*none*/);
GI_INLINE_DECL bool get_visible () noexcept;

// void adw_sidebar_item_set_drag_motion_activate (AdwSidebarItem* self /*none*/, gboolean drag_motion_activate);
// void adw_sidebar_item_set_drag_motion_activate (::AdwSidebarItem* self /*none*/, gboolean drag_motion_activate);
GI_INLINE_DECL void set_drag_motion_activate (gboolean drag_motion_activate) noexcept;

// void adw_sidebar_item_set_enabled (AdwSidebarItem* self /*none*/, gboolean enabled);
// void adw_sidebar_item_set_enabled (::AdwSidebarItem* self /*none*/, gboolean enabled);
GI_INLINE_DECL void set_enabled (gboolean enabled) noexcept;

// void adw_sidebar_item_set_icon_name (AdwSidebarItem* self /*none*/, const char* icon_name /*none,nullable*/);
// void adw_sidebar_item_set_icon_name (::AdwSidebarItem* self /*none*/, const char* icon_name /*none,nullable*/);
GI_INLINE_DECL void set_icon_name (const gi::cstring_v icon_name) noexcept;
GI_INLINE_DECL void set_icon_name () noexcept;

// void adw_sidebar_item_set_icon_paintable (AdwSidebarItem* self /*none*/, GdkPaintable* paintable /*none,nullable*/);
// void adw_sidebar_item_set_icon_paintable (::AdwSidebarItem* self /*none*/, ::GdkPaintable* paintable /*none,nullable*/);
GI_INLINE_DECL void set_icon_paintable (Gdk::Paintable paintable) noexcept;
GI_INLINE_DECL void set_icon_paintable () noexcept;

// void adw_sidebar_item_set_subtitle (AdwSidebarItem* self /*none*/, const char* subtitle /*none,nullable*/);
// void adw_sidebar_item_set_subtitle (::AdwSidebarItem* self /*none*/, const char* subtitle /*none,nullable*/);
GI_INLINE_DECL void set_subtitle (const gi::cstring_v subtitle) noexcept;
GI_INLINE_DECL void set_subtitle () noexcept;

// void adw_sidebar_item_set_suffix (AdwSidebarItem* self /*none*/, GtkWidget* suffix /*none,nullable*/);
// void adw_sidebar_item_set_suffix (::AdwSidebarItem* self /*none*/, ::GtkWidget* suffix /*none,nullable*/);
GI_INLINE_DECL void set_suffix (Gtk::Widget suffix) noexcept;
GI_INLINE_DECL void set_suffix () noexcept;

// void adw_sidebar_item_set_title (AdwSidebarItem* self /*none*/, const char* title /*none,nullable*/);
// void adw_sidebar_item_set_title (::AdwSidebarItem* self /*none*/, const char* title /*none,nullable*/);
GI_INLINE_DECL void set_title (const gi::cstring_v title) noexcept;
GI_INLINE_DECL void set_title () noexcept;

// void adw_sidebar_item_set_tooltip (AdwSidebarItem* self /*none*/, const char* tooltip /*none,nullable*/);
// void adw_sidebar_item_set_tooltip (::AdwSidebarItem* self /*none*/, const char* tooltip /*none,nullable*/);
GI_INLINE_DECL void set_tooltip (const gi::cstring_v tooltip) noexcept;
GI_INLINE_DECL void set_tooltip () noexcept;

// void adw_sidebar_item_set_use_underline (AdwSidebarItem* self /*none*/, gboolean use_underline);
// void adw_sidebar_item_set_use_underline (::AdwSidebarItem* self /*none*/, gboolean use_underline);
GI_INLINE_DECL void set_use_underline (gboolean use_underline) noexcept;

// void adw_sidebar_item_set_visible (AdwSidebarItem* self /*none*/, gboolean visible);
// void adw_sidebar_item_set_visible (::AdwSidebarItem* self /*none*/, gboolean visible);
GI_INLINE_DECL void set_visible (gboolean visible) noexcept;

gi::property_proxy<bool, base::SidebarItemBase> property_drag_motion_activate()
{ return gi::property_proxy<bool, base::SidebarItemBase> (*this, "drag-motion-activate"); }
const gi::property_proxy<bool, base::SidebarItemBase> property_drag_motion_activate() const
{ return gi::property_proxy<bool, base::SidebarItemBase> (*this, "drag-motion-activate"); }

gi::property_proxy<bool, base::SidebarItemBase> property_enabled()
{ return gi::property_proxy<bool, base::SidebarItemBase> (*this, "enabled"); }
const gi::property_proxy<bool, base::SidebarItemBase> property_enabled() const
{ return gi::property_proxy<bool, base::SidebarItemBase> (*this, "enabled"); }

gi::property_proxy<gi::cstring, base::SidebarItemBase> property_icon_name()
{ return gi::property_proxy<gi::cstring, base::SidebarItemBase> (*this, "icon-name"); }
const gi::property_proxy<gi::cstring, base::SidebarItemBase> property_icon_name() const
{ return gi::property_proxy<gi::cstring, base::SidebarItemBase> (*this, "icon-name"); }

gi::property_proxy<Gdk::Paintable, base::SidebarItemBase> property_icon_paintable()
{ return gi::property_proxy<Gdk::Paintable, base::SidebarItemBase> (*this, "icon-paintable"); }
const gi::property_proxy<Gdk::Paintable, base::SidebarItemBase> property_icon_paintable() const
{ return gi::property_proxy<Gdk::Paintable, base::SidebarItemBase> (*this, "icon-paintable"); }

gi::property_proxy<Adw::SidebarSection, base::SidebarItemBase> property_section()
{ return gi::property_proxy<Adw::SidebarSection, base::SidebarItemBase> (*this, "section"); }
const gi::property_proxy<Adw::SidebarSection, base::SidebarItemBase> property_section() const
{ return gi::property_proxy<Adw::SidebarSection, base::SidebarItemBase> (*this, "section"); }

gi::property_proxy<gi::cstring, base::SidebarItemBase> property_subtitle()
{ return gi::property_proxy<gi::cstring, base::SidebarItemBase> (*this, "subtitle"); }
const gi::property_proxy<gi::cstring, base::SidebarItemBase> property_subtitle() const
{ return gi::property_proxy<gi::cstring, base::SidebarItemBase> (*this, "subtitle"); }

gi::property_proxy<Gtk::Widget, base::SidebarItemBase> property_suffix()
{ return gi::property_proxy<Gtk::Widget, base::SidebarItemBase> (*this, "suffix"); }
const gi::property_proxy<Gtk::Widget, base::SidebarItemBase> property_suffix() const
{ return gi::property_proxy<Gtk::Widget, base::SidebarItemBase> (*this, "suffix"); }

gi::property_proxy<gi::cstring, base::SidebarItemBase> property_title()
{ return gi::property_proxy<gi::cstring, base::SidebarItemBase> (*this, "title"); }
const gi::property_proxy<gi::cstring, base::SidebarItemBase> property_title() const
{ return gi::property_proxy<gi::cstring, base::SidebarItemBase> (*this, "title"); }

gi::property_proxy<gi::cstring, base::SidebarItemBase> property_tooltip()
{ return gi::property_proxy<gi::cstring, base::SidebarItemBase> (*this, "tooltip"); }
const gi::property_proxy<gi::cstring, base::SidebarItemBase> property_tooltip() const
{ return gi::property_proxy<gi::cstring, base::SidebarItemBase> (*this, "tooltip"); }

gi::property_proxy<bool, base::SidebarItemBase> property_use_underline()
{ return gi::property_proxy<bool, base::SidebarItemBase> (*this, "use-underline"); }
const gi::property_proxy<bool, base::SidebarItemBase> property_use_underline() const
{ return gi::property_proxy<bool, base::SidebarItemBase> (*this, "use-underline"); }

gi::property_proxy<bool, base::SidebarItemBase> property_visible()
{ return gi::property_proxy<bool, base::SidebarItemBase> (*this, "visible"); }
const gi::property_proxy<bool, base::SidebarItemBase> property_visible() const
{ return gi::property_proxy<bool, base::SidebarItemBase> (*this, "visible"); }

}; // class

} // namespace base

} // namespace Adw

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<adw/sidebaritem_extra_def.hpp>)
#include <adw/sidebaritem_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<adw/sidebaritem_extra.hpp>)
#include <adw/sidebaritem_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Adw {

class SidebarItem : public GI_ADW_SIDEBARITEM_BASE
{ typedef GI_ADW_SIDEBARITEM_BASE super_type; using super_type::super_type; };

} // namespace Adw

template<> struct declare_cpptype_of<::AdwSidebarItem>
{ typedef Adw::SidebarItem type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Adw {

namespace impl {

namespace internal {


class SidebarItemClassDef
{
typedef SidebarItemClassDef self;
public:
typedef Adw::SidebarItem instance_type;
typedef ::AdwSidebarItemClass class_type;


struct TypeInitData;

protected:
GI_INLINE_DECL ~SidebarItemClassDef() = default;
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );


};

GI_CLASS_IMPL_BEGIN


class SidebarItemClass: public detail::ClassTemplate<Adw::impl::internal::SidebarItemClassDef, GObject::impl::internal::ObjectClass>
{
friend class internal::SidebarItemClassDef;
typedef SidebarItemClass self;
typedef detail::ClassTemplate<Adw::impl::internal::SidebarItemClassDef, GObject::impl::internal::ObjectClass> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types



};


struct SidebarItemClassDef::TypeInitData
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

using SidebarItemImpl = detail::ObjectImpl<SidebarItem, internal::SidebarItemClass>;

} // namespace impl

} // namespace Adw

} // namespace repository

} // namespace gi

#endif
