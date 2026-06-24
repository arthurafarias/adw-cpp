// AUTO-GENERATED

#ifndef _GI_ADW_AVATAR_HPP_
#define _GI_ADW_AVATAR_HPP_


namespace gi {

namespace repository {

namespace Adw {


class Avatar;

namespace base {


#define GI_ADW_AVATAR_BASE base::AvatarBase
class AvatarBase : public Gtk::Widget
{
typedef Gtk::Widget super_type;
public:
typedef ::AdwAvatar BaseObjectType;

AvatarBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return adw_avatar_get_type(); } 

// GtkWidget* /*none*/ adw_avatar_new (int size, const char* text /*none,nullable*/, gboolean show_initials);
// ::AdwAvatar* /*none*/ adw_avatar_new (gint size, const char* text /*none,nullable*/, gboolean show_initials);
static GI_INLINE_DECL Adw::Avatar new_ (gint size, const gi::cstring_v text, gboolean show_initials) noexcept;
static GI_INLINE_DECL Adw::Avatar new_ (gint size, gboolean show_initials) noexcept;

// GdkTexture* /*full*/ adw_avatar_draw_to_texture (AdwAvatar* self /*none*/, int scale_factor);
// ::GdkTexture* /*full*/ adw_avatar_draw_to_texture (::AdwAvatar* self /*none*/, gint scale_factor);
GI_INLINE_DECL Gdk::Texture draw_to_texture (gint scale_factor) noexcept;

// GdkPaintable* /*none,nullable*/ adw_avatar_get_custom_image (AdwAvatar* self /*none*/);
// ::GdkPaintable* /*none,nullable*/ adw_avatar_get_custom_image (::AdwAvatar* self /*none*/);
GI_INLINE_DECL Gdk::Paintable get_custom_image () noexcept;

// const char* /*none,nullable*/ adw_avatar_get_icon_name (AdwAvatar* self /*none*/);
// const char* /*none,nullable*/ adw_avatar_get_icon_name (::AdwAvatar* self /*none*/);
GI_INLINE_DECL gi::cstring_v get_icon_name () noexcept;

// gboolean adw_avatar_get_show_initials (AdwAvatar* self /*none*/);
// gboolean adw_avatar_get_show_initials (::AdwAvatar* self /*none*/);
GI_INLINE_DECL bool get_show_initials () noexcept;

// int adw_avatar_get_size (AdwAvatar* self /*none*/);
// gint adw_avatar_get_size (::AdwAvatar* self /*none*/);
GI_INLINE_DECL gint get_size () noexcept;

// const char* /*none,nullable*/ adw_avatar_get_text (AdwAvatar* self /*none*/);
// const char* /*none,nullable*/ adw_avatar_get_text (::AdwAvatar* self /*none*/);
GI_INLINE_DECL gi::cstring_v get_text () noexcept;

// void adw_avatar_set_custom_image (AdwAvatar* self /*none*/, GdkPaintable* custom_image /*none,nullable*/);
// void adw_avatar_set_custom_image (::AdwAvatar* self /*none*/, ::GdkPaintable* custom_image /*none,nullable*/);
GI_INLINE_DECL void set_custom_image (Gdk::Paintable custom_image) noexcept;
GI_INLINE_DECL void set_custom_image () noexcept;

// void adw_avatar_set_icon_name (AdwAvatar* self /*none*/, const char* icon_name /*none,nullable*/);
// void adw_avatar_set_icon_name (::AdwAvatar* self /*none*/, const char* icon_name /*none,nullable*/);
GI_INLINE_DECL void set_icon_name (const gi::cstring_v icon_name) noexcept;
GI_INLINE_DECL void set_icon_name () noexcept;

// void adw_avatar_set_show_initials (AdwAvatar* self /*none*/, gboolean show_initials);
// void adw_avatar_set_show_initials (::AdwAvatar* self /*none*/, gboolean show_initials);
GI_INLINE_DECL void set_show_initials (gboolean show_initials) noexcept;

// void adw_avatar_set_size (AdwAvatar* self /*none*/, int size);
// void adw_avatar_set_size (::AdwAvatar* self /*none*/, gint size);
GI_INLINE_DECL void set_size (gint size) noexcept;

// void adw_avatar_set_text (AdwAvatar* self /*none*/, const char* text /*none,nullable*/);
// void adw_avatar_set_text (::AdwAvatar* self /*none*/, const char* text /*none,nullable*/);
GI_INLINE_DECL void set_text (const gi::cstring_v text) noexcept;
GI_INLINE_DECL void set_text () noexcept;

gi::property_proxy<Gdk::Paintable, base::AvatarBase> property_custom_image()
{ return gi::property_proxy<Gdk::Paintable, base::AvatarBase> (*this, "custom-image"); }
const gi::property_proxy<Gdk::Paintable, base::AvatarBase> property_custom_image() const
{ return gi::property_proxy<Gdk::Paintable, base::AvatarBase> (*this, "custom-image"); }

gi::property_proxy<gi::cstring, base::AvatarBase> property_icon_name()
{ return gi::property_proxy<gi::cstring, base::AvatarBase> (*this, "icon-name"); }
const gi::property_proxy<gi::cstring, base::AvatarBase> property_icon_name() const
{ return gi::property_proxy<gi::cstring, base::AvatarBase> (*this, "icon-name"); }

gi::property_proxy<bool, base::AvatarBase> property_show_initials()
{ return gi::property_proxy<bool, base::AvatarBase> (*this, "show-initials"); }
const gi::property_proxy<bool, base::AvatarBase> property_show_initials() const
{ return gi::property_proxy<bool, base::AvatarBase> (*this, "show-initials"); }

gi::property_proxy<gint, base::AvatarBase> property_size()
{ return gi::property_proxy<gint, base::AvatarBase> (*this, "size"); }
const gi::property_proxy<gint, base::AvatarBase> property_size() const
{ return gi::property_proxy<gint, base::AvatarBase> (*this, "size"); }

gi::property_proxy<gi::cstring, base::AvatarBase> property_text()
{ return gi::property_proxy<gi::cstring, base::AvatarBase> (*this, "text"); }
const gi::property_proxy<gi::cstring, base::AvatarBase> property_text() const
{ return gi::property_proxy<gi::cstring, base::AvatarBase> (*this, "text"); }

}; // class

} // namespace base

} // namespace Adw

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<adw/avatar_extra_def.hpp>)
#include <adw/avatar_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<adw/avatar_extra.hpp>)
#include <adw/avatar_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Adw {

class Avatar : public GI_ADW_AVATAR_BASE
{ typedef GI_ADW_AVATAR_BASE super_type; using super_type::super_type; };

} // namespace Adw

template<> struct declare_cpptype_of<::AdwAvatar>
{ typedef Adw::Avatar type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Adw {

namespace impl {

namespace internal {


class AvatarClassDef
{
typedef AvatarClassDef self;
public:
typedef Adw::Avatar instance_type;
typedef ::AdwAvatarClass class_type;


struct TypeInitData;

protected:
GI_INLINE_DECL ~AvatarClassDef() = default;
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );


};

GI_CLASS_IMPL_BEGIN


class AvatarClass: public detail::ClassTemplate<Adw::impl::internal::AvatarClassDef, Gtk::impl::internal::WidgetClass>
{
friend class internal::AvatarClassDef;
typedef AvatarClass self;
typedef detail::ClassTemplate<Adw::impl::internal::AvatarClassDef, Gtk::impl::internal::WidgetClass> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types



};


struct AvatarClassDef::TypeInitData
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

using AvatarImpl = detail::ObjectImpl<Avatar, internal::AvatarClass>;

} // namespace impl

} // namespace Adw

} // namespace repository

} // namespace gi

#endif
