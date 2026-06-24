// AUTO-GENERATED

#ifndef _GI_ADW_TABPAGE_HPP_
#define _GI_ADW_TABPAGE_HPP_


namespace gi {

namespace repository {

namespace Adw {


class TabPage;

namespace base {


#define GI_ADW_TABPAGE_BASE base::TabPageBase
class TabPageBase : public GObject::Object
{
typedef GObject::Object super_type;
public:
typedef ::AdwTabPage BaseObjectType;

TabPageBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return adw_tab_page_get_type(); } 

GI_INLINE_DECL Gtk::Accessible interface_ (gi::interface_tag<Gtk::Accessible>);

GI_INLINE_DECL operator Gtk::Accessible ();

// GtkWidget* /*none*/ adw_tab_page_get_child (AdwTabPage* self /*none*/);
// ::GtkWidget* /*none*/ adw_tab_page_get_child (::AdwTabPage* self /*none*/);
GI_INLINE_DECL Gtk::Widget get_child () noexcept;

// GIcon* /*none,nullable*/ adw_tab_page_get_icon (AdwTabPage* self /*none*/);
// ::GIcon* /*none,nullable*/ adw_tab_page_get_icon (::AdwTabPage* self /*none*/);
GI_INLINE_DECL Gio::Icon get_icon () noexcept;

// gboolean adw_tab_page_get_indicator_activatable (AdwTabPage* self /*none*/);
// gboolean adw_tab_page_get_indicator_activatable (::AdwTabPage* self /*none*/);
GI_INLINE_DECL bool get_indicator_activatable () noexcept;

// GIcon* /*none,nullable*/ adw_tab_page_get_indicator_icon (AdwTabPage* self /*none*/);
// ::GIcon* /*none,nullable*/ adw_tab_page_get_indicator_icon (::AdwTabPage* self /*none*/);
GI_INLINE_DECL Gio::Icon get_indicator_icon () noexcept;

// const char* /*none*/ adw_tab_page_get_indicator_tooltip (AdwTabPage* self /*none*/);
// const char* /*none*/ adw_tab_page_get_indicator_tooltip (::AdwTabPage* self /*none*/);
GI_INLINE_DECL gi::cstring_v get_indicator_tooltip () noexcept;

// const char* /*none,nullable*/ adw_tab_page_get_keyword (AdwTabPage* self /*none*/);
// const char* /*none,nullable*/ adw_tab_page_get_keyword (::AdwTabPage* self /*none*/);
GI_INLINE_DECL gi::cstring_v get_keyword () noexcept;

// gboolean adw_tab_page_get_live_thumbnail (AdwTabPage* self /*none*/);
// gboolean adw_tab_page_get_live_thumbnail (::AdwTabPage* self /*none*/);
GI_INLINE_DECL bool get_live_thumbnail () noexcept;

// gboolean adw_tab_page_get_loading (AdwTabPage* self /*none*/);
// gboolean adw_tab_page_get_loading (::AdwTabPage* self /*none*/);
GI_INLINE_DECL bool get_loading () noexcept;

// gboolean adw_tab_page_get_needs_attention (AdwTabPage* self /*none*/);
// gboolean adw_tab_page_get_needs_attention (::AdwTabPage* self /*none*/);
GI_INLINE_DECL bool get_needs_attention () noexcept;

// AdwTabPage* /*none,nullable*/ adw_tab_page_get_parent (AdwTabPage* self /*none*/);
// ::AdwTabPage* /*none,nullable*/ adw_tab_page_get_parent (::AdwTabPage* self /*none*/);
GI_INLINE_DECL Adw::TabPage get_parent () noexcept;

// gboolean adw_tab_page_get_pinned (AdwTabPage* self /*none*/);
// gboolean adw_tab_page_get_pinned (::AdwTabPage* self /*none*/);
GI_INLINE_DECL bool get_pinned () noexcept;

// gboolean adw_tab_page_get_selected (AdwTabPage* self /*none*/);
// gboolean adw_tab_page_get_selected (::AdwTabPage* self /*none*/);
GI_INLINE_DECL bool get_selected () noexcept;

// float adw_tab_page_get_thumbnail_xalign (AdwTabPage* self /*none*/);
// gfloat adw_tab_page_get_thumbnail_xalign (::AdwTabPage* self /*none*/);
GI_INLINE_DECL gfloat get_thumbnail_xalign () noexcept;

// float adw_tab_page_get_thumbnail_yalign (AdwTabPage* self /*none*/);
// gfloat adw_tab_page_get_thumbnail_yalign (::AdwTabPage* self /*none*/);
GI_INLINE_DECL gfloat get_thumbnail_yalign () noexcept;

// const char* /*none*/ adw_tab_page_get_title (AdwTabPage* self /*none*/);
// const char* /*none*/ adw_tab_page_get_title (::AdwTabPage* self /*none*/);
GI_INLINE_DECL gi::cstring_v get_title () noexcept;

// const char* /*none,nullable*/ adw_tab_page_get_tooltip (AdwTabPage* self /*none*/);
// const char* /*none,nullable*/ adw_tab_page_get_tooltip (::AdwTabPage* self /*none*/);
GI_INLINE_DECL gi::cstring_v get_tooltip () noexcept;

// void adw_tab_page_invalidate_thumbnail (AdwTabPage* self /*none*/);
// void adw_tab_page_invalidate_thumbnail (::AdwTabPage* self /*none*/);
GI_INLINE_DECL void invalidate_thumbnail () noexcept;

// void adw_tab_page_set_icon (AdwTabPage* self /*none*/, GIcon* icon /*none,nullable*/);
// void adw_tab_page_set_icon (::AdwTabPage* self /*none*/, ::GIcon* icon /*none,nullable*/);
GI_INLINE_DECL void set_icon (Gio::Icon icon) noexcept;
GI_INLINE_DECL void set_icon () noexcept;

// void adw_tab_page_set_indicator_activatable (AdwTabPage* self /*none*/, gboolean activatable);
// void adw_tab_page_set_indicator_activatable (::AdwTabPage* self /*none*/, gboolean activatable);
GI_INLINE_DECL void set_indicator_activatable (gboolean activatable) noexcept;

// void adw_tab_page_set_indicator_icon (AdwTabPage* self /*none*/, GIcon* indicator_icon /*none,nullable*/);
// void adw_tab_page_set_indicator_icon (::AdwTabPage* self /*none*/, ::GIcon* indicator_icon /*none,nullable*/);
GI_INLINE_DECL void set_indicator_icon (Gio::Icon indicator_icon) noexcept;
GI_INLINE_DECL void set_indicator_icon () noexcept;

// void adw_tab_page_set_indicator_tooltip (AdwTabPage* self /*none*/, const char* tooltip /*none*/);
// void adw_tab_page_set_indicator_tooltip (::AdwTabPage* self /*none*/, const char* tooltip /*none*/);
GI_INLINE_DECL void set_indicator_tooltip (const gi::cstring_v tooltip) noexcept;

// void adw_tab_page_set_keyword (AdwTabPage* self /*none*/, const char* keyword /*none*/);
// void adw_tab_page_set_keyword (::AdwTabPage* self /*none*/, const char* keyword /*none*/);
GI_INLINE_DECL void set_keyword (const gi::cstring_v keyword) noexcept;

// void adw_tab_page_set_live_thumbnail (AdwTabPage* self /*none*/, gboolean live_thumbnail);
// void adw_tab_page_set_live_thumbnail (::AdwTabPage* self /*none*/, gboolean live_thumbnail);
GI_INLINE_DECL void set_live_thumbnail (gboolean live_thumbnail) noexcept;

// void adw_tab_page_set_loading (AdwTabPage* self /*none*/, gboolean loading);
// void adw_tab_page_set_loading (::AdwTabPage* self /*none*/, gboolean loading);
GI_INLINE_DECL void set_loading (gboolean loading) noexcept;

// void adw_tab_page_set_needs_attention (AdwTabPage* self /*none*/, gboolean needs_attention);
// void adw_tab_page_set_needs_attention (::AdwTabPage* self /*none*/, gboolean needs_attention);
GI_INLINE_DECL void set_needs_attention (gboolean needs_attention) noexcept;

// void adw_tab_page_set_thumbnail_xalign (AdwTabPage* self /*none*/, float xalign);
// void adw_tab_page_set_thumbnail_xalign (::AdwTabPage* self /*none*/, gfloat xalign);
GI_INLINE_DECL void set_thumbnail_xalign (gfloat xalign) noexcept;

// void adw_tab_page_set_thumbnail_yalign (AdwTabPage* self /*none*/, float yalign);
// void adw_tab_page_set_thumbnail_yalign (::AdwTabPage* self /*none*/, gfloat yalign);
GI_INLINE_DECL void set_thumbnail_yalign (gfloat yalign) noexcept;

// void adw_tab_page_set_title (AdwTabPage* self /*none*/, const char* title /*none*/);
// void adw_tab_page_set_title (::AdwTabPage* self /*none*/, const char* title /*none*/);
GI_INLINE_DECL void set_title (const gi::cstring_v title) noexcept;

// void adw_tab_page_set_tooltip (AdwTabPage* self /*none*/, const char* tooltip /*none*/);
// void adw_tab_page_set_tooltip (::AdwTabPage* self /*none*/, const char* tooltip /*none*/);
GI_INLINE_DECL void set_tooltip (const gi::cstring_v tooltip) noexcept;

gi::property_proxy<Gtk::Widget, base::TabPageBase> property_child()
{ return gi::property_proxy<Gtk::Widget, base::TabPageBase> (*this, "child"); }
const gi::property_proxy<Gtk::Widget, base::TabPageBase> property_child() const
{ return gi::property_proxy<Gtk::Widget, base::TabPageBase> (*this, "child"); }

gi::property_proxy<Gio::Icon, base::TabPageBase> property_icon()
{ return gi::property_proxy<Gio::Icon, base::TabPageBase> (*this, "icon"); }
const gi::property_proxy<Gio::Icon, base::TabPageBase> property_icon() const
{ return gi::property_proxy<Gio::Icon, base::TabPageBase> (*this, "icon"); }

gi::property_proxy<bool, base::TabPageBase> property_indicator_activatable()
{ return gi::property_proxy<bool, base::TabPageBase> (*this, "indicator-activatable"); }
const gi::property_proxy<bool, base::TabPageBase> property_indicator_activatable() const
{ return gi::property_proxy<bool, base::TabPageBase> (*this, "indicator-activatable"); }

gi::property_proxy<Gio::Icon, base::TabPageBase> property_indicator_icon()
{ return gi::property_proxy<Gio::Icon, base::TabPageBase> (*this, "indicator-icon"); }
const gi::property_proxy<Gio::Icon, base::TabPageBase> property_indicator_icon() const
{ return gi::property_proxy<Gio::Icon, base::TabPageBase> (*this, "indicator-icon"); }

gi::property_proxy<gi::cstring, base::TabPageBase> property_indicator_tooltip()
{ return gi::property_proxy<gi::cstring, base::TabPageBase> (*this, "indicator-tooltip"); }
const gi::property_proxy<gi::cstring, base::TabPageBase> property_indicator_tooltip() const
{ return gi::property_proxy<gi::cstring, base::TabPageBase> (*this, "indicator-tooltip"); }

gi::property_proxy<gi::cstring, base::TabPageBase> property_keyword()
{ return gi::property_proxy<gi::cstring, base::TabPageBase> (*this, "keyword"); }
const gi::property_proxy<gi::cstring, base::TabPageBase> property_keyword() const
{ return gi::property_proxy<gi::cstring, base::TabPageBase> (*this, "keyword"); }

gi::property_proxy<bool, base::TabPageBase> property_live_thumbnail()
{ return gi::property_proxy<bool, base::TabPageBase> (*this, "live-thumbnail"); }
const gi::property_proxy<bool, base::TabPageBase> property_live_thumbnail() const
{ return gi::property_proxy<bool, base::TabPageBase> (*this, "live-thumbnail"); }

gi::property_proxy<bool, base::TabPageBase> property_loading()
{ return gi::property_proxy<bool, base::TabPageBase> (*this, "loading"); }
const gi::property_proxy<bool, base::TabPageBase> property_loading() const
{ return gi::property_proxy<bool, base::TabPageBase> (*this, "loading"); }

gi::property_proxy<bool, base::TabPageBase> property_needs_attention()
{ return gi::property_proxy<bool, base::TabPageBase> (*this, "needs-attention"); }
const gi::property_proxy<bool, base::TabPageBase> property_needs_attention() const
{ return gi::property_proxy<bool, base::TabPageBase> (*this, "needs-attention"); }

gi::property_proxy<Adw::TabPage, base::TabPageBase> property_parent()
{ return gi::property_proxy<Adw::TabPage, base::TabPageBase> (*this, "parent"); }
const gi::property_proxy<Adw::TabPage, base::TabPageBase> property_parent() const
{ return gi::property_proxy<Adw::TabPage, base::TabPageBase> (*this, "parent"); }

gi::property_proxy<bool, base::TabPageBase> property_pinned()
{ return gi::property_proxy<bool, base::TabPageBase> (*this, "pinned"); }
const gi::property_proxy<bool, base::TabPageBase> property_pinned() const
{ return gi::property_proxy<bool, base::TabPageBase> (*this, "pinned"); }

gi::property_proxy<bool, base::TabPageBase> property_selected()
{ return gi::property_proxy<bool, base::TabPageBase> (*this, "selected"); }
const gi::property_proxy<bool, base::TabPageBase> property_selected() const
{ return gi::property_proxy<bool, base::TabPageBase> (*this, "selected"); }

gi::property_proxy<gfloat, base::TabPageBase> property_thumbnail_xalign()
{ return gi::property_proxy<gfloat, base::TabPageBase> (*this, "thumbnail-xalign"); }
const gi::property_proxy<gfloat, base::TabPageBase> property_thumbnail_xalign() const
{ return gi::property_proxy<gfloat, base::TabPageBase> (*this, "thumbnail-xalign"); }

gi::property_proxy<gfloat, base::TabPageBase> property_thumbnail_yalign()
{ return gi::property_proxy<gfloat, base::TabPageBase> (*this, "thumbnail-yalign"); }
const gi::property_proxy<gfloat, base::TabPageBase> property_thumbnail_yalign() const
{ return gi::property_proxy<gfloat, base::TabPageBase> (*this, "thumbnail-yalign"); }

gi::property_proxy<gi::cstring, base::TabPageBase> property_title()
{ return gi::property_proxy<gi::cstring, base::TabPageBase> (*this, "title"); }
const gi::property_proxy<gi::cstring, base::TabPageBase> property_title() const
{ return gi::property_proxy<gi::cstring, base::TabPageBase> (*this, "title"); }

gi::property_proxy<gi::cstring, base::TabPageBase> property_tooltip()
{ return gi::property_proxy<gi::cstring, base::TabPageBase> (*this, "tooltip"); }
const gi::property_proxy<gi::cstring, base::TabPageBase> property_tooltip() const
{ return gi::property_proxy<gi::cstring, base::TabPageBase> (*this, "tooltip"); }

}; // class

} // namespace base

} // namespace Adw

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<adw/tabpage_extra_def.hpp>)
#include <adw/tabpage_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<adw/tabpage_extra.hpp>)
#include <adw/tabpage_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Adw {

class TabPage : public GI_ADW_TABPAGE_BASE
{ typedef GI_ADW_TABPAGE_BASE super_type; using super_type::super_type; };

} // namespace Adw

template<> struct declare_cpptype_of<::AdwTabPage>
{ typedef Adw::TabPage type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Adw {

namespace impl {

namespace internal {


class TabPageClassDef
{
typedef TabPageClassDef self;
public:
typedef Adw::TabPage instance_type;
typedef ::AdwTabPageClass class_type;


struct TypeInitData;

protected:
GI_INLINE_DECL ~TabPageClassDef() = default;
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );


};

GI_CLASS_IMPL_BEGIN


class TabPageClass: public detail::ClassTemplate<Adw::impl::internal::TabPageClassDef, GObject::impl::internal::ObjectClass, Gtk::impl::internal::AccessibleInterfaceClassImpl>
{
friend class internal::TabPageClassDef;
typedef TabPageClass self;
typedef detail::ClassTemplate<Adw::impl::internal::TabPageClassDef, GObject::impl::internal::ObjectClass, Gtk::impl::internal::AccessibleInterfaceClassImpl> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types
typedef Gtk::impl::internal::AccessibleInterfaceClassImpl GtkAccessibleInterface_type;



};


struct TabPageClassDef::TypeInitData
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

using TabPageImpl = detail::ObjectImpl<TabPage, internal::TabPageClass>;

} // namespace impl

} // namespace Adw

} // namespace repository

} // namespace gi

#endif
