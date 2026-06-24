// AUTO-GENERATED

#ifndef _GI_GSK__ENUMS_HPP_
#define _GI_GSK__ENUMS_HPP_

namespace gi {

namespace repository {

namespace Gsk {

enum class BlendMode : std::underlying_type<GskBlendMode>::type {
  DEFAULT_ = GSK_BLEND_MODE_DEFAULT,
  MULTIPLY_ = GSK_BLEND_MODE_MULTIPLY,
  SCREEN_ = GSK_BLEND_MODE_SCREEN,
  OVERLAY_ = GSK_BLEND_MODE_OVERLAY,
  DARKEN_ = GSK_BLEND_MODE_DARKEN,
  LIGHTEN_ = GSK_BLEND_MODE_LIGHTEN,
  COLOR_DODGE_ = GSK_BLEND_MODE_COLOR_DODGE,
  COLOR_BURN_ = GSK_BLEND_MODE_COLOR_BURN,
  HARD_LIGHT_ = GSK_BLEND_MODE_HARD_LIGHT,
  SOFT_LIGHT_ = GSK_BLEND_MODE_SOFT_LIGHT,
  DIFFERENCE_ = GSK_BLEND_MODE_DIFFERENCE,
  EXCLUSION_ = GSK_BLEND_MODE_EXCLUSION,
  COLOR_ = GSK_BLEND_MODE_COLOR,
  HUE_ = GSK_BLEND_MODE_HUE,
  SATURATION_ = GSK_BLEND_MODE_SATURATION,
  LUMINOSITY_ = GSK_BLEND_MODE_LUMINOSITY,
};

} // namespace Gsk

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gsk::BlendMode>
{ typedef GskBlendMode type; }; 
template<> struct declare_cpptype_of<GskBlendMode>
{ typedef Gsk::BlendMode type; }; 

template<> struct declare_gtype_of<Gsk::BlendMode>
{ static GType get_type() { return gsk_blend_mode_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gsk {

enum class Corner : std::underlying_type<GskCorner>::type {
  TOP_LEFT_ = GSK_CORNER_TOP_LEFT,
  TOP_RIGHT_ = GSK_CORNER_TOP_RIGHT,
  BOTTOM_RIGHT_ = GSK_CORNER_BOTTOM_RIGHT,
  BOTTOM_LEFT_ = GSK_CORNER_BOTTOM_LEFT,
};

} // namespace Gsk

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gsk::Corner>
{ typedef GskCorner type; }; 
template<> struct declare_cpptype_of<GskCorner>
{ typedef Gsk::Corner type; }; 

template<> struct declare_gtype_of<Gsk::Corner>
{ static GType get_type() { return gsk_corner_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gsk {

enum class FillRule : std::underlying_type<GskFillRule>::type {
  WINDING_ = GSK_FILL_RULE_WINDING,
  EVEN_ODD_ = GSK_FILL_RULE_EVEN_ODD,
};

} // namespace Gsk

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gsk::FillRule>
{ typedef GskFillRule type; }; 
template<> struct declare_cpptype_of<GskFillRule>
{ typedef Gsk::FillRule type; }; 

template<> struct declare_gtype_of<Gsk::FillRule>
{ static GType get_type() { return gsk_fill_rule_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gsk {

enum class LineCap : std::underlying_type<GskLineCap>::type {
  BUTT_ = GSK_LINE_CAP_BUTT,
  ROUND_ = GSK_LINE_CAP_ROUND,
  SQUARE_ = GSK_LINE_CAP_SQUARE,
};

} // namespace Gsk

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gsk::LineCap>
{ typedef GskLineCap type; }; 
template<> struct declare_cpptype_of<GskLineCap>
{ typedef Gsk::LineCap type; }; 

template<> struct declare_gtype_of<Gsk::LineCap>
{ static GType get_type() { return gsk_line_cap_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gsk {

enum class LineJoin : std::underlying_type<GskLineJoin>::type {
  MITER_ = GSK_LINE_JOIN_MITER,
  ROUND_ = GSK_LINE_JOIN_ROUND,
  BEVEL_ = GSK_LINE_JOIN_BEVEL,
};

} // namespace Gsk

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gsk::LineJoin>
{ typedef GskLineJoin type; }; 
template<> struct declare_cpptype_of<GskLineJoin>
{ typedef Gsk::LineJoin type; }; 

template<> struct declare_gtype_of<Gsk::LineJoin>
{ static GType get_type() { return gsk_line_join_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gsk {

enum class MaskMode : std::underlying_type<GskMaskMode>::type {
  ALPHA_ = GSK_MASK_MODE_ALPHA,
  INVERTED_ALPHA_ = GSK_MASK_MODE_INVERTED_ALPHA,
  LUMINANCE_ = GSK_MASK_MODE_LUMINANCE,
  INVERTED_LUMINANCE_ = GSK_MASK_MODE_INVERTED_LUMINANCE,
};

} // namespace Gsk

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gsk::MaskMode>
{ typedef GskMaskMode type; }; 
template<> struct declare_cpptype_of<GskMaskMode>
{ typedef Gsk::MaskMode type; }; 

template<> struct declare_gtype_of<Gsk::MaskMode>
{ static GType get_type() { return gsk_mask_mode_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gsk {

enum class PathDirection : std::underlying_type<GskPathDirection>::type {
  FROM_START_ = GSK_PATH_FROM_START,
  TO_START_ = GSK_PATH_TO_START,
  TO_END_ = GSK_PATH_TO_END,
  FROM_END_ = GSK_PATH_FROM_END,
};

} // namespace Gsk

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gsk::PathDirection>
{ typedef GskPathDirection type; }; 
template<> struct declare_cpptype_of<GskPathDirection>
{ typedef Gsk::PathDirection type; }; 

template<> struct declare_gtype_of<Gsk::PathDirection>
{ static GType get_type() { return gsk_path_direction_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gsk {

enum class PathIntersection : std::underlying_type<GskPathIntersection>::type {
  NONE_ = GSK_PATH_INTERSECTION_NONE,
  NORMAL_ = GSK_PATH_INTERSECTION_NORMAL,
  START_ = GSK_PATH_INTERSECTION_START,
  END_ = GSK_PATH_INTERSECTION_END,
};

} // namespace Gsk

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gsk::PathIntersection>
{ typedef GskPathIntersection type; }; 
template<> struct declare_cpptype_of<GskPathIntersection>
{ typedef Gsk::PathIntersection type; }; 

template<> struct declare_gtype_of<Gsk::PathIntersection>
{ static GType get_type() { return gsk_path_intersection_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gsk {

enum class PathOperation : std::underlying_type<GskPathOperation>::type {
  MOVE_ = GSK_PATH_MOVE,
  CLOSE_ = GSK_PATH_CLOSE,
  LINE_ = GSK_PATH_LINE,
  QUAD_ = GSK_PATH_QUAD,
  CUBIC_ = GSK_PATH_CUBIC,
  CONIC_ = GSK_PATH_CONIC,
};

} // namespace Gsk

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gsk::PathOperation>
{ typedef GskPathOperation type; }; 
template<> struct declare_cpptype_of<GskPathOperation>
{ typedef Gsk::PathOperation type; }; 

template<> struct declare_gtype_of<Gsk::PathOperation>
{ static GType get_type() { return gsk_path_operation_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gsk {

enum class PorterDuff : std::underlying_type<GskPorterDuff>::type {
  SOURCE_ = GSK_PORTER_DUFF_SOURCE,
  DEST_ = GSK_PORTER_DUFF_DEST,
  SOURCE_OVER_DEST_ = GSK_PORTER_DUFF_SOURCE_OVER_DEST,
  DEST_OVER_SOURCE_ = GSK_PORTER_DUFF_DEST_OVER_SOURCE,
  SOURCE_IN_DEST_ = GSK_PORTER_DUFF_SOURCE_IN_DEST,
  DEST_IN_SOURCE_ = GSK_PORTER_DUFF_DEST_IN_SOURCE,
  SOURCE_OUT_DEST_ = GSK_PORTER_DUFF_SOURCE_OUT_DEST,
  DEST_OUT_SOURCE_ = GSK_PORTER_DUFF_DEST_OUT_SOURCE,
  SOURCE_ATOP_DEST_ = GSK_PORTER_DUFF_SOURCE_ATOP_DEST,
  DEST_ATOP_SOURCE_ = GSK_PORTER_DUFF_DEST_ATOP_SOURCE,
  XOR_ = GSK_PORTER_DUFF_XOR,
  CLEAR_ = GSK_PORTER_DUFF_CLEAR,
};

} // namespace Gsk

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gsk::PorterDuff>
{ typedef GskPorterDuff type; }; 
template<> struct declare_cpptype_of<GskPorterDuff>
{ typedef Gsk::PorterDuff type; }; 

template<> struct declare_gtype_of<Gsk::PorterDuff>
{ static GType get_type() { return gsk_porter_duff_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gsk {

enum class RenderNodeType : std::underlying_type<GskRenderNodeType>::type {
  NOT_A_RENDER_NODE_ = GSK_NOT_A_RENDER_NODE,
  CONTAINER_NODE_ = GSK_CONTAINER_NODE,
  CAIRO_NODE_ = GSK_CAIRO_NODE,
  COLOR_NODE_ = GSK_COLOR_NODE,
  LINEAR_GRADIENT_NODE_ = GSK_LINEAR_GRADIENT_NODE,
  REPEATING_LINEAR_GRADIENT_NODE_ = GSK_REPEATING_LINEAR_GRADIENT_NODE,
  RADIAL_GRADIENT_NODE_ = GSK_RADIAL_GRADIENT_NODE,
  REPEATING_RADIAL_GRADIENT_NODE_ = GSK_REPEATING_RADIAL_GRADIENT_NODE,
  CONIC_GRADIENT_NODE_ = GSK_CONIC_GRADIENT_NODE,
  BORDER_NODE_ = GSK_BORDER_NODE,
  TEXTURE_NODE_ = GSK_TEXTURE_NODE,
  INSET_SHADOW_NODE_ = GSK_INSET_SHADOW_NODE,
  OUTSET_SHADOW_NODE_ = GSK_OUTSET_SHADOW_NODE,
  TRANSFORM_NODE_ = GSK_TRANSFORM_NODE,
  OPACITY_NODE_ = GSK_OPACITY_NODE,
  COLOR_MATRIX_NODE_ = GSK_COLOR_MATRIX_NODE,
  REPEAT_NODE_ = GSK_REPEAT_NODE,
  CLIP_NODE_ = GSK_CLIP_NODE,
  ROUNDED_CLIP_NODE_ = GSK_ROUNDED_CLIP_NODE,
  SHADOW_NODE_ = GSK_SHADOW_NODE,
  BLEND_NODE_ = GSK_BLEND_NODE,
  CROSS_FADE_NODE_ = GSK_CROSS_FADE_NODE,
  TEXT_NODE_ = GSK_TEXT_NODE,
  BLUR_NODE_ = GSK_BLUR_NODE,
  DEBUG_NODE_ = GSK_DEBUG_NODE,
  GL_SHADER_NODE_ = GSK_GL_SHADER_NODE,
  TEXTURE_SCALE_NODE_ = GSK_TEXTURE_SCALE_NODE,
  MASK_NODE_ = GSK_MASK_NODE,
  FILL_NODE_ = GSK_FILL_NODE,
  STROKE_NODE_ = GSK_STROKE_NODE,
  SUBSURFACE_NODE_ = GSK_SUBSURFACE_NODE,
  COMPONENT_TRANSFER_NODE_ = GSK_COMPONENT_TRANSFER_NODE,
  COPY_NODE_ = GSK_COPY_NODE,
  PASTE_NODE_ = GSK_PASTE_NODE,
  COMPOSITE_NODE_ = GSK_COMPOSITE_NODE,
  ISOLATION_NODE_ = GSK_ISOLATION_NODE,
  DISPLACEMENT_NODE_ = GSK_DISPLACEMENT_NODE,
  ARITHMETIC_NODE_ = GSK_ARITHMETIC_NODE,
};

} // namespace Gsk

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gsk::RenderNodeType>
{ typedef GskRenderNodeType type; }; 
template<> struct declare_cpptype_of<GskRenderNodeType>
{ typedef Gsk::RenderNodeType type; }; 

template<> struct declare_gtype_of<Gsk::RenderNodeType>
{ static GType get_type() { return gsk_render_node_type_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gsk {

enum class ScalingFilter : std::underlying_type<GskScalingFilter>::type {
  LINEAR_ = GSK_SCALING_FILTER_LINEAR,
  NEAREST_ = GSK_SCALING_FILTER_NEAREST,
  TRILINEAR_ = GSK_SCALING_FILTER_TRILINEAR,
};

} // namespace Gsk

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gsk::ScalingFilter>
{ typedef GskScalingFilter type; }; 
template<> struct declare_cpptype_of<GskScalingFilter>
{ typedef Gsk::ScalingFilter type; }; 

template<> struct declare_gtype_of<Gsk::ScalingFilter>
{ static GType get_type() { return gsk_scaling_filter_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gsk {

enum class SerializationError : std::underlying_type<GskSerializationError>::type {
  UNSUPPORTED_FORMAT_ = GSK_SERIALIZATION_UNSUPPORTED_FORMAT,
  UNSUPPORTED_VERSION_ = GSK_SERIALIZATION_UNSUPPORTED_VERSION,
  INVALID_DATA_ = GSK_SERIALIZATION_INVALID_DATA,
};

} // namespace Gsk

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gsk::SerializationError>
{ typedef GskSerializationError type; }; 
template<> struct declare_cpptype_of<GskSerializationError>
{ typedef Gsk::SerializationError type; }; 

template<> struct declare_gtype_of<Gsk::SerializationError>
{ static GType get_type() { return gsk_serialization_error_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gsk {

enum class TransformCategory : std::underlying_type<GskTransformCategory>::type {
  UNKNOWN_ = GSK_TRANSFORM_CATEGORY_UNKNOWN,
  ANY_ = GSK_TRANSFORM_CATEGORY_ANY,
  _3D = GSK_TRANSFORM_CATEGORY_3D,
  _2D = GSK_TRANSFORM_CATEGORY_2D,
  _2D_AFFINE = GSK_TRANSFORM_CATEGORY_2D_AFFINE,
  _2D_TRANSLATE = GSK_TRANSFORM_CATEGORY_2D_TRANSLATE,
  IDENTITY_ = GSK_TRANSFORM_CATEGORY_IDENTITY,
};

} // namespace Gsk

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gsk::TransformCategory>
{ typedef GskTransformCategory type; }; 
template<> struct declare_cpptype_of<GskTransformCategory>
{ typedef Gsk::TransformCategory type; }; 

template<> struct declare_gtype_of<Gsk::TransformCategory>
{ static GType get_type() { return gsk_transform_category_get_type(); } };


} // namespace repository

} // namespace gi


#endif
