// AUTO-GENERATED

#ifndef _GI_ADW_STYLEMANAGER_HPP_
#define _GI_ADW_STYLEMANAGER_HPP_


namespace gi {

namespace repository {

namespace Adw {


class StyleManager;

namespace base {


#define GI_ADW_STYLEMANAGER_BASE base::StyleManagerBase
class StyleManagerBase : public GObject::Object
{
typedef GObject::Object super_type;
public:
typedef ::AdwStyleManager BaseObjectType;

StyleManagerBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return adw_style_manager_get_type(); } 

// AdwStyleManager* /*none*/ adw_style_manager_get_default ();
// ::AdwStyleManager* /*none*/ adw_style_manager_get_default ();
static GI_INLINE_DECL Adw::StyleManager get_default () noexcept;

// AdwStyleManager* /*none*/ adw_style_manager_get_for_display (GdkDisplay* display /*none*/);
// ::AdwStyleManager* /*none*/ adw_style_manager_get_for_display (::GdkDisplay* display /*none*/);
static GI_INLINE_DECL Adw::StyleManager get_for_display (Gdk::Display display) noexcept;

// AdwAccentColor adw_style_manager_get_accent_color (AdwStyleManager* self /*none*/);
// ::AdwAccentColor adw_style_manager_get_accent_color (::AdwStyleManager* self /*none*/);
GI_INLINE_DECL Adw::AccentColor get_accent_color () noexcept;

// GdkRGBA* /*full*/ adw_style_manager_get_accent_color_rgba (AdwStyleManager* self /*none*/);
// ::GdkRGBA* /*full*/ adw_style_manager_get_accent_color_rgba (::AdwStyleManager* self /*none*/);
GI_INLINE_DECL Gdk::RGBA get_accent_color_rgba () noexcept;

// AdwColorScheme adw_style_manager_get_color_scheme (AdwStyleManager* self /*none*/);
// ::AdwColorScheme adw_style_manager_get_color_scheme (::AdwStyleManager* self /*none*/);
GI_INLINE_DECL Adw::ColorScheme get_color_scheme () noexcept;

// gboolean adw_style_manager_get_dark (AdwStyleManager* self /*none*/);
// gboolean adw_style_manager_get_dark (::AdwStyleManager* self /*none*/);
GI_INLINE_DECL bool get_dark () noexcept;

// GdkDisplay* /*none,nullable*/ adw_style_manager_get_display (AdwStyleManager* self /*none*/);
// ::GdkDisplay* /*none,nullable*/ adw_style_manager_get_display (::AdwStyleManager* self /*none*/);
GI_INLINE_DECL Gdk::Display get_display () noexcept;

// const char* /*none*/ adw_style_manager_get_document_font_name (AdwStyleManager* self /*none*/);
// const char* /*none*/ adw_style_manager_get_document_font_name (::AdwStyleManager* self /*none*/);
GI_INLINE_DECL gi::cstring_v get_document_font_name () noexcept;

// gboolean adw_style_manager_get_high_contrast (AdwStyleManager* self /*none*/);
// gboolean adw_style_manager_get_high_contrast (::AdwStyleManager* self /*none*/);
GI_INLINE_DECL bool get_high_contrast () noexcept;

// const char* /*none*/ adw_style_manager_get_monospace_font_name (AdwStyleManager* self /*none*/);
// const char* /*none*/ adw_style_manager_get_monospace_font_name (::AdwStyleManager* self /*none*/);
GI_INLINE_DECL gi::cstring_v get_monospace_font_name () noexcept;

// gboolean adw_style_manager_get_system_supports_accent_colors (AdwStyleManager* self /*none*/);
// gboolean adw_style_manager_get_system_supports_accent_colors (::AdwStyleManager* self /*none*/);
GI_INLINE_DECL bool get_system_supports_accent_colors () noexcept;

// gboolean adw_style_manager_get_system_supports_color_schemes (AdwStyleManager* self /*none*/);
// gboolean adw_style_manager_get_system_supports_color_schemes (::AdwStyleManager* self /*none*/);
GI_INLINE_DECL bool get_system_supports_color_schemes () noexcept;

// void adw_style_manager_set_color_scheme (AdwStyleManager* self /*none*/, AdwColorScheme color_scheme);
// void adw_style_manager_set_color_scheme (::AdwStyleManager* self /*none*/, ::AdwColorScheme color_scheme);
GI_INLINE_DECL void set_color_scheme (Adw::ColorScheme color_scheme) noexcept;

gi::property_proxy<Adw::AccentColor, base::StyleManagerBase> property_accent_color()
{ return gi::property_proxy<Adw::AccentColor, base::StyleManagerBase> (*this, "accent-color"); }
const gi::property_proxy<Adw::AccentColor, base::StyleManagerBase> property_accent_color() const
{ return gi::property_proxy<Adw::AccentColor, base::StyleManagerBase> (*this, "accent-color"); }

gi::property_proxy<Gdk::RGBA, base::StyleManagerBase> property_accent_color_rgba()
{ return gi::property_proxy<Gdk::RGBA, base::StyleManagerBase> (*this, "accent-color-rgba"); }
const gi::property_proxy<Gdk::RGBA, base::StyleManagerBase> property_accent_color_rgba() const
{ return gi::property_proxy<Gdk::RGBA, base::StyleManagerBase> (*this, "accent-color-rgba"); }

gi::property_proxy<Adw::ColorScheme, base::StyleManagerBase> property_color_scheme()
{ return gi::property_proxy<Adw::ColorScheme, base::StyleManagerBase> (*this, "color-scheme"); }
const gi::property_proxy<Adw::ColorScheme, base::StyleManagerBase> property_color_scheme() const
{ return gi::property_proxy<Adw::ColorScheme, base::StyleManagerBase> (*this, "color-scheme"); }

gi::property_proxy<bool, base::StyleManagerBase> property_dark()
{ return gi::property_proxy<bool, base::StyleManagerBase> (*this, "dark"); }
const gi::property_proxy<bool, base::StyleManagerBase> property_dark() const
{ return gi::property_proxy<bool, base::StyleManagerBase> (*this, "dark"); }

gi::property_proxy<Gdk::Display, base::StyleManagerBase> property_display()
{ return gi::property_proxy<Gdk::Display, base::StyleManagerBase> (*this, "display"); }
const gi::property_proxy<Gdk::Display, base::StyleManagerBase> property_display() const
{ return gi::property_proxy<Gdk::Display, base::StyleManagerBase> (*this, "display"); }

gi::property_proxy<gi::cstring, base::StyleManagerBase> property_document_font_name()
{ return gi::property_proxy<gi::cstring, base::StyleManagerBase> (*this, "document-font-name"); }
const gi::property_proxy<gi::cstring, base::StyleManagerBase> property_document_font_name() const
{ return gi::property_proxy<gi::cstring, base::StyleManagerBase> (*this, "document-font-name"); }

gi::property_proxy<bool, base::StyleManagerBase> property_high_contrast()
{ return gi::property_proxy<bool, base::StyleManagerBase> (*this, "high-contrast"); }
const gi::property_proxy<bool, base::StyleManagerBase> property_high_contrast() const
{ return gi::property_proxy<bool, base::StyleManagerBase> (*this, "high-contrast"); }

gi::property_proxy<gi::cstring, base::StyleManagerBase> property_monospace_font_name()
{ return gi::property_proxy<gi::cstring, base::StyleManagerBase> (*this, "monospace-font-name"); }
const gi::property_proxy<gi::cstring, base::StyleManagerBase> property_monospace_font_name() const
{ return gi::property_proxy<gi::cstring, base::StyleManagerBase> (*this, "monospace-font-name"); }

gi::property_proxy<bool, base::StyleManagerBase> property_system_supports_accent_colors()
{ return gi::property_proxy<bool, base::StyleManagerBase> (*this, "system-supports-accent-colors"); }
const gi::property_proxy<bool, base::StyleManagerBase> property_system_supports_accent_colors() const
{ return gi::property_proxy<bool, base::StyleManagerBase> (*this, "system-supports-accent-colors"); }

gi::property_proxy<bool, base::StyleManagerBase> property_system_supports_color_schemes()
{ return gi::property_proxy<bool, base::StyleManagerBase> (*this, "system-supports-color-schemes"); }
const gi::property_proxy<bool, base::StyleManagerBase> property_system_supports_color_schemes() const
{ return gi::property_proxy<bool, base::StyleManagerBase> (*this, "system-supports-color-schemes"); }

}; // class

} // namespace base

} // namespace Adw

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<adw/stylemanager_extra_def.hpp>)
#include <adw/stylemanager_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<adw/stylemanager_extra.hpp>)
#include <adw/stylemanager_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Adw {

class StyleManager : public GI_ADW_STYLEMANAGER_BASE
{ typedef GI_ADW_STYLEMANAGER_BASE super_type; using super_type::super_type; };

} // namespace Adw

template<> struct declare_cpptype_of<::AdwStyleManager>
{ typedef Adw::StyleManager type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Adw {

namespace impl {

namespace internal {


class StyleManagerClassDef
{
typedef StyleManagerClassDef self;
public:
typedef Adw::StyleManager instance_type;
typedef ::AdwStyleManagerClass class_type;


struct TypeInitData;

protected:
GI_INLINE_DECL ~StyleManagerClassDef() = default;
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );


};

GI_CLASS_IMPL_BEGIN


class StyleManagerClass: public detail::ClassTemplate<Adw::impl::internal::StyleManagerClassDef, GObject::impl::internal::ObjectClass>
{
friend class internal::StyleManagerClassDef;
typedef StyleManagerClass self;
typedef detail::ClassTemplate<Adw::impl::internal::StyleManagerClassDef, GObject::impl::internal::ObjectClass> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types



};


struct StyleManagerClassDef::TypeInitData
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

using StyleManagerImpl = detail::ObjectImpl<StyleManager, internal::StyleManagerClass>;

} // namespace impl

} // namespace Adw

} // namespace repository

} // namespace gi

#endif
