// AUTO-GENERATED

#ifndef _GI_ADW_TOGGLE_HPP_
#define _GI_ADW_TOGGLE_HPP_


namespace gi {

namespace repository {

namespace Adw {


class Toggle;

namespace base {


#define GI_ADW_TOGGLE_BASE base::ToggleBase
class ToggleBase : public GObject::Object
{
typedef GObject::Object super_type;
public:
typedef ::AdwToggle BaseObjectType;

ToggleBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return adw_toggle_get_type(); } 

// AdwToggle* /*full*/ adw_toggle_new ();
// ::AdwToggle* /*full*/ adw_toggle_new ();
static GI_INLINE_DECL Adw::Toggle new_ () noexcept;

// GtkWidget* /*none,nullable*/ adw_toggle_get_child (AdwToggle* self /*none*/);
// ::GtkWidget* /*none,nullable*/ adw_toggle_get_child (::AdwToggle* self /*none*/);
GI_INLINE_DECL Gtk::Widget get_child () noexcept;

// const char* /*none*/ adw_toggle_get_description (AdwToggle* self /*none*/);
// const char* /*none*/ adw_toggle_get_description (::AdwToggle* self /*none*/);
GI_INLINE_DECL gi::cstring_v get_description () noexcept;

// gboolean adw_toggle_get_enabled (AdwToggle* self /*none*/);
// gboolean adw_toggle_get_enabled (::AdwToggle* self /*none*/);
GI_INLINE_DECL bool get_enabled () noexcept;

// const char* /*none,nullable*/ adw_toggle_get_icon_name (AdwToggle* self /*none*/);
// const char* /*none,nullable*/ adw_toggle_get_icon_name (::AdwToggle* self /*none*/);
GI_INLINE_DECL gi::cstring_v get_icon_name () noexcept;

// guint adw_toggle_get_index (AdwToggle* self /*none*/);
// guint adw_toggle_get_index (::AdwToggle* self /*none*/);
GI_INLINE_DECL guint get_index () noexcept;

// const char* /*none,nullable*/ adw_toggle_get_label (AdwToggle* self /*none*/);
// const char* /*none,nullable*/ adw_toggle_get_label (::AdwToggle* self /*none*/);
GI_INLINE_DECL gi::cstring_v get_label () noexcept;

// const char* /*none*/ adw_toggle_get_name (AdwToggle* self /*none*/);
// const char* /*none*/ adw_toggle_get_name (::AdwToggle* self /*none*/);
GI_INLINE_DECL gi::cstring_v get_name () noexcept;

// const char* /*none*/ adw_toggle_get_tooltip (AdwToggle* self /*none*/);
// const char* /*none*/ adw_toggle_get_tooltip (::AdwToggle* self /*none*/);
GI_INLINE_DECL gi::cstring_v get_tooltip () noexcept;

// gboolean adw_toggle_get_use_underline (AdwToggle* self /*none*/);
// gboolean adw_toggle_get_use_underline (::AdwToggle* self /*none*/);
GI_INLINE_DECL bool get_use_underline () noexcept;

// void adw_toggle_set_child (AdwToggle* self /*none*/, GtkWidget* child /*none,nullable*/);
// void adw_toggle_set_child (::AdwToggle* self /*none*/, ::GtkWidget* child /*none,nullable*/);
GI_INLINE_DECL void set_child (Gtk::Widget child) noexcept;
GI_INLINE_DECL void set_child () noexcept;

// void adw_toggle_set_description (AdwToggle* self /*none*/, const char* description /*none*/);
// void adw_toggle_set_description (::AdwToggle* self /*none*/, const char* description /*none*/);
GI_INLINE_DECL void set_description (const gi::cstring_v description) noexcept;

// void adw_toggle_set_enabled (AdwToggle* self /*none*/, gboolean enabled);
// void adw_toggle_set_enabled (::AdwToggle* self /*none*/, gboolean enabled);
GI_INLINE_DECL void set_enabled (gboolean enabled) noexcept;

// void adw_toggle_set_icon_name (AdwToggle* self /*none*/, const char* icon_name /*none,nullable*/);
// void adw_toggle_set_icon_name (::AdwToggle* self /*none*/, const char* icon_name /*none,nullable*/);
GI_INLINE_DECL void set_icon_name (const gi::cstring_v icon_name) noexcept;
GI_INLINE_DECL void set_icon_name () noexcept;

// void adw_toggle_set_label (AdwToggle* self /*none*/, const char* label /*none,nullable*/);
// void adw_toggle_set_label (::AdwToggle* self /*none*/, const char* label /*none,nullable*/);
GI_INLINE_DECL void set_label (const gi::cstring_v label) noexcept;
GI_INLINE_DECL void set_label () noexcept;

// void adw_toggle_set_name (AdwToggle* self /*none*/, const char* name /*none,nullable*/);
// void adw_toggle_set_name (::AdwToggle* self /*none*/, const char* name /*none,nullable*/);
GI_INLINE_DECL void set_name (const gi::cstring_v name) noexcept;
GI_INLINE_DECL void set_name () noexcept;

// void adw_toggle_set_tooltip (AdwToggle* self /*none*/, const char* tooltip /*none*/);
// void adw_toggle_set_tooltip (::AdwToggle* self /*none*/, const char* tooltip /*none*/);
GI_INLINE_DECL void set_tooltip (const gi::cstring_v tooltip) noexcept;

// void adw_toggle_set_use_underline (AdwToggle* self /*none*/, gboolean use_underline);
// void adw_toggle_set_use_underline (::AdwToggle* self /*none*/, gboolean use_underline);
GI_INLINE_DECL void set_use_underline (gboolean use_underline) noexcept;

gi::property_proxy<Gtk::Widget, base::ToggleBase> property_child()
{ return gi::property_proxy<Gtk::Widget, base::ToggleBase> (*this, "child"); }
const gi::property_proxy<Gtk::Widget, base::ToggleBase> property_child() const
{ return gi::property_proxy<Gtk::Widget, base::ToggleBase> (*this, "child"); }

gi::property_proxy<gi::cstring, base::ToggleBase> property_description()
{ return gi::property_proxy<gi::cstring, base::ToggleBase> (*this, "description"); }
const gi::property_proxy<gi::cstring, base::ToggleBase> property_description() const
{ return gi::property_proxy<gi::cstring, base::ToggleBase> (*this, "description"); }

gi::property_proxy<bool, base::ToggleBase> property_enabled()
{ return gi::property_proxy<bool, base::ToggleBase> (*this, "enabled"); }
const gi::property_proxy<bool, base::ToggleBase> property_enabled() const
{ return gi::property_proxy<bool, base::ToggleBase> (*this, "enabled"); }

gi::property_proxy<gi::cstring, base::ToggleBase> property_icon_name()
{ return gi::property_proxy<gi::cstring, base::ToggleBase> (*this, "icon-name"); }
const gi::property_proxy<gi::cstring, base::ToggleBase> property_icon_name() const
{ return gi::property_proxy<gi::cstring, base::ToggleBase> (*this, "icon-name"); }

gi::property_proxy<gi::cstring, base::ToggleBase> property_label()
{ return gi::property_proxy<gi::cstring, base::ToggleBase> (*this, "label"); }
const gi::property_proxy<gi::cstring, base::ToggleBase> property_label() const
{ return gi::property_proxy<gi::cstring, base::ToggleBase> (*this, "label"); }

gi::property_proxy<gi::cstring, base::ToggleBase> property_name()
{ return gi::property_proxy<gi::cstring, base::ToggleBase> (*this, "name"); }
const gi::property_proxy<gi::cstring, base::ToggleBase> property_name() const
{ return gi::property_proxy<gi::cstring, base::ToggleBase> (*this, "name"); }

gi::property_proxy<gi::cstring, base::ToggleBase> property_tooltip()
{ return gi::property_proxy<gi::cstring, base::ToggleBase> (*this, "tooltip"); }
const gi::property_proxy<gi::cstring, base::ToggleBase> property_tooltip() const
{ return gi::property_proxy<gi::cstring, base::ToggleBase> (*this, "tooltip"); }

gi::property_proxy<bool, base::ToggleBase> property_use_underline()
{ return gi::property_proxy<bool, base::ToggleBase> (*this, "use-underline"); }
const gi::property_proxy<bool, base::ToggleBase> property_use_underline() const
{ return gi::property_proxy<bool, base::ToggleBase> (*this, "use-underline"); }

}; // class

} // namespace base

} // namespace Adw

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<adw/toggle_extra_def.hpp>)
#include <adw/toggle_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<adw/toggle_extra.hpp>)
#include <adw/toggle_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Adw {

class Toggle : public GI_ADW_TOGGLE_BASE
{ typedef GI_ADW_TOGGLE_BASE super_type; using super_type::super_type; };

} // namespace Adw

template<> struct declare_cpptype_of<::AdwToggle>
{ typedef Adw::Toggle type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Adw {

namespace impl {

namespace internal {


class ToggleClassDef
{
typedef ToggleClassDef self;
public:
typedef Adw::Toggle instance_type;
typedef ::AdwToggleClass class_type;


struct TypeInitData;

protected:
GI_INLINE_DECL ~ToggleClassDef() = default;
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );


};

GI_CLASS_IMPL_BEGIN


class ToggleClass: public detail::ClassTemplate<Adw::impl::internal::ToggleClassDef, GObject::impl::internal::ObjectClass>
{
friend class internal::ToggleClassDef;
typedef ToggleClass self;
typedef detail::ClassTemplate<Adw::impl::internal::ToggleClassDef, GObject::impl::internal::ObjectClass> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types



};


struct ToggleClassDef::TypeInitData
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

using ToggleImpl = detail::ObjectImpl<Toggle, internal::ToggleClass>;

} // namespace impl

} // namespace Adw

} // namespace repository

} // namespace gi

#endif
