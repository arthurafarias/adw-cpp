// AUTO-GENERATED

#ifndef _GI_GDK_DMABUFTEXTURE_HPP_
#define _GI_GDK_DMABUFTEXTURE_HPP_

#include "texture.hpp"

namespace gi {

namespace repository {

namespace Gdk {


class DmabufTexture;

namespace base {


#define GI_GDK_DMABUFTEXTURE_BASE base::DmabufTextureBase
class DmabufTextureBase : public Gdk::Texture
{
typedef Gdk::Texture super_type;
public:
typedef ::GdkDmabufTexture BaseObjectType;

DmabufTextureBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gdk_dmabuf_texture_get_type(); } 

}; // class

} // namespace base

} // namespace Gdk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gdk/dmabuftexture_extra_def.hpp>)
#include <gdk/dmabuftexture_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gdk/dmabuftexture_extra.hpp>)
#include <gdk/dmabuftexture_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gdk {

class DmabufTexture : public GI_GDK_DMABUFTEXTURE_BASE
{ typedef GI_GDK_DMABUFTEXTURE_BASE super_type; using super_type::super_type; };

} // namespace Gdk

template<> struct declare_cpptype_of<::GdkDmabufTexture>
{ typedef Gdk::DmabufTexture type; }; 

} // namespace repository

} // namespace gi

#endif
