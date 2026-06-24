// AUTO-GENERATED

#ifndef _GI_GSK_VULKANRENDERER_HPP_
#define _GI_GSK_VULKANRENDERER_HPP_

#include "renderer.hpp"

namespace gi {

namespace repository {

namespace Gsk {


class VulkanRenderer;

namespace base {


#define GI_GSK_VULKANRENDERER_BASE base::VulkanRendererBase
class VulkanRendererBase : public Gsk::Renderer
{
typedef Gsk::Renderer super_type;
public:
typedef ::GskVulkanRenderer BaseObjectType;

VulkanRendererBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gsk_vulkan_renderer_get_type(); } 

// GskRenderer* /*full*/ gsk_vulkan_renderer_new ();
// ::GskVulkanRenderer* /*full*/ gsk_vulkan_renderer_new ();
static GI_INLINE_DECL Gsk::VulkanRenderer new_ () noexcept;

}; // class

} // namespace base

} // namespace Gsk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gsk/vulkanrenderer_extra_def.hpp>)
#include <gsk/vulkanrenderer_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gsk/vulkanrenderer_extra.hpp>)
#include <gsk/vulkanrenderer_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gsk {

class VulkanRenderer : public GI_GSK_VULKANRENDERER_BASE
{ typedef GI_GSK_VULKANRENDERER_BASE super_type; using super_type::super_type; };

} // namespace Gsk

template<> struct declare_cpptype_of<::GskVulkanRenderer>
{ typedef Gsk::VulkanRenderer type; }; 

} // namespace repository

} // namespace gi

#endif
