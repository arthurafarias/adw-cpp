// AUTO-GENERATED

#ifndef _GI_GTK_SNAPSHOT_HPP_
#define _GI_GTK_SNAPSHOT_HPP_


namespace gi {

namespace repository {

namespace Gtk {

class StyleContext;

class Snapshot;

namespace base {


#define GI_GTK_SNAPSHOT_BASE base::SnapshotBase
class SnapshotBase : public Gdk::Snapshot
{
typedef Gdk::Snapshot super_type;
public:
typedef ::GI_PATCH_GtkSnapshot BaseObjectType;

SnapshotBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_snapshot_get_type(); } 

// GtkSnapshot* /*full*/ gtk_snapshot_new ();
// ::GI_PATCH_GtkSnapshot* /*full*/ gtk_snapshot_new ();
static GI_INLINE_DECL Gtk::Snapshot new_ () noexcept;

// void gtk_snapshot_append_border (GtkSnapshot* snapshot /*none*/, const GskRoundedRect* outline /*none*/, const float* border_width /*none*/, const GdkRGBA* border_color /*none*/);
// void gtk_snapshot_append_border (::GI_PATCH_GtkSnapshot* snapshot /*none*/, const ::GskRoundedRect* outline /*none*/, const gfloat* border_width /*none*/, const ::GdkRGBA** border_color /*none*/);
// SKIP; border_color in boxed array not supported (depth 1)

// cairo_t* /*full*/ gtk_snapshot_append_cairo (GtkSnapshot* snapshot /*none*/, const graphene_rect_t* bounds /*none*/);
// ::cairo_t* /*full*/ gtk_snapshot_append_cairo (::GI_PATCH_GtkSnapshot* snapshot /*none*/, const ::graphene_rect_t* bounds /*none*/);
GI_INLINE_DECL cairo::Context append_cairo (const Graphene::Rect_Ref bounds) noexcept;

// void gtk_snapshot_append_color (GtkSnapshot* snapshot /*none*/, const GdkRGBA* color /*none*/, const graphene_rect_t* bounds /*none*/);
// void gtk_snapshot_append_color (::GI_PATCH_GtkSnapshot* snapshot /*none*/, const ::GdkRGBA* color /*none*/, const ::graphene_rect_t* bounds /*none*/);
GI_INLINE_DECL void append_color (const Gdk::RGBA_Ref color, const Graphene::Rect_Ref bounds) noexcept;

// void gtk_snapshot_append_conic_gradient (GtkSnapshot* snapshot /*none*/, const graphene_rect_t* bounds /*none*/, const graphene_point_t* center /*none*/, float rotation, const GskColorStop* stops /*none*/, gsize n_stops);
// void gtk_snapshot_append_conic_gradient (::GI_PATCH_GtkSnapshot* snapshot /*none*/, const ::graphene_rect_t* bounds /*none*/, const ::graphene_point_t* center /*none*/, gfloat rotation, const ::GskColorStop** stops /*none*/, gsize n_stops);
// SKIP; stops in boxed array not supported (depth 1)

// void gtk_snapshot_append_fill (GtkSnapshot* snapshot /*none*/, GskPath* path /*none*/, GskFillRule fill_rule, const GdkRGBA* color /*none*/);
// void gtk_snapshot_append_fill (::GI_PATCH_GtkSnapshot* snapshot /*none*/, ::GskPath* path /*none*/, ::GskFillRule fill_rule, const ::GdkRGBA* color /*none*/);
GI_INLINE_DECL void append_fill (Gsk::Path_Ref path, Gsk::FillRule fill_rule, const Gdk::RGBA_Ref color) noexcept;

// void gtk_snapshot_append_inset_shadow (GtkSnapshot* snapshot /*none*/, const GskRoundedRect* outline /*none*/, const GdkRGBA* color /*none*/, float dx, float dy, float spread, float blur_radius);
// void gtk_snapshot_append_inset_shadow (::GI_PATCH_GtkSnapshot* snapshot /*none*/, const ::GskRoundedRect* outline /*none*/, const ::GdkRGBA* color /*none*/, gfloat dx, gfloat dy, gfloat spread, gfloat blur_radius);
GI_INLINE_DECL void append_inset_shadow (const Gsk::RoundedRect_Ref outline, const Gdk::RGBA_Ref color, gfloat dx, gfloat dy, gfloat spread, gfloat blur_radius) noexcept;

// void gtk_snapshot_append_layout (GtkSnapshot* snapshot /*none*/, PangoLayout* layout /*none*/, const GdkRGBA* color /*none*/);
// void gtk_snapshot_append_layout (::GI_PATCH_GtkSnapshot* snapshot /*none*/, ::PangoLayout* layout /*none*/, const ::GdkRGBA* color /*none*/);
GI_INLINE_DECL void append_layout (Pango::Layout layout, const Gdk::RGBA_Ref color) noexcept;

// void gtk_snapshot_append_linear_gradient (GtkSnapshot* snapshot /*none*/, const graphene_rect_t* bounds /*none*/, const graphene_point_t* start_point /*none*/, const graphene_point_t* end_point /*none*/, const GskColorStop* stops /*none*/, gsize n_stops);
// void gtk_snapshot_append_linear_gradient (::GI_PATCH_GtkSnapshot* snapshot /*none*/, const ::graphene_rect_t* bounds /*none*/, const ::graphene_point_t* start_point /*none*/, const ::graphene_point_t* end_point /*none*/, const ::GskColorStop** stops /*none*/, gsize n_stops);
// SKIP; stops in boxed array not supported (depth 1)

// void gtk_snapshot_append_node (GtkSnapshot* snapshot /*none*/, GskRenderNode* node /*none*/);
// void gtk_snapshot_append_node (::GI_PATCH_GtkSnapshot* snapshot /*none*/,  node /*none*/);
// SKIP; node type  not supported

// void gtk_snapshot_append_outset_shadow (GtkSnapshot* snapshot /*none*/, const GskRoundedRect* outline /*none*/, const GdkRGBA* color /*none*/, float dx, float dy, float spread, float blur_radius);
// void gtk_snapshot_append_outset_shadow (::GI_PATCH_GtkSnapshot* snapshot /*none*/, const ::GskRoundedRect* outline /*none*/, const ::GdkRGBA* color /*none*/, gfloat dx, gfloat dy, gfloat spread, gfloat blur_radius);
GI_INLINE_DECL void append_outset_shadow (const Gsk::RoundedRect_Ref outline, const Gdk::RGBA_Ref color, gfloat dx, gfloat dy, gfloat spread, gfloat blur_radius) noexcept;

// void gtk_snapshot_append_paste (GtkSnapshot* snapshot /*none*/, const graphene_rect_t* bounds /*none*/, gsize nth);
// void gtk_snapshot_append_paste (::GI_PATCH_GtkSnapshot* snapshot /*none*/, const ::graphene_rect_t* bounds /*none*/, gsize nth);
GI_INLINE_DECL void append_paste (const Graphene::Rect_Ref bounds, gsize nth) noexcept;

// void gtk_snapshot_append_radial_gradient (GtkSnapshot* snapshot /*none*/, const graphene_rect_t* bounds /*none*/, const graphene_point_t* center /*none*/, float hradius, float vradius, float start, float end, const GskColorStop* stops /*none*/, gsize n_stops);
// void gtk_snapshot_append_radial_gradient (::GI_PATCH_GtkSnapshot* snapshot /*none*/, const ::graphene_rect_t* bounds /*none*/, const ::graphene_point_t* center /*none*/, gfloat hradius, gfloat vradius, gfloat start, gfloat end, const ::GskColorStop** stops /*none*/, gsize n_stops);
// SKIP; stops in boxed array not supported (depth 1)

// void gtk_snapshot_append_repeating_linear_gradient (GtkSnapshot* snapshot /*none*/, const graphene_rect_t* bounds /*none*/, const graphene_point_t* start_point /*none*/, const graphene_point_t* end_point /*none*/, const GskColorStop* stops /*none*/, gsize n_stops);
// void gtk_snapshot_append_repeating_linear_gradient (::GI_PATCH_GtkSnapshot* snapshot /*none*/, const ::graphene_rect_t* bounds /*none*/, const ::graphene_point_t* start_point /*none*/, const ::graphene_point_t* end_point /*none*/, const ::GskColorStop** stops /*none*/, gsize n_stops);
// SKIP; stops in boxed array not supported (depth 1)

// void gtk_snapshot_append_repeating_radial_gradient (GtkSnapshot* snapshot /*none*/, const graphene_rect_t* bounds /*none*/, const graphene_point_t* center /*none*/, float hradius, float vradius, float start, float end, const GskColorStop* stops /*none*/, gsize n_stops);
// void gtk_snapshot_append_repeating_radial_gradient (::GI_PATCH_GtkSnapshot* snapshot /*none*/, const ::graphene_rect_t* bounds /*none*/, const ::graphene_point_t* center /*none*/, gfloat hradius, gfloat vradius, gfloat start, gfloat end, const ::GskColorStop** stops /*none*/, gsize n_stops);
// SKIP; stops in boxed array not supported (depth 1)

// void gtk_snapshot_append_scaled_texture (GtkSnapshot* snapshot /*none*/, GdkTexture* texture /*none*/, GskScalingFilter filter, const graphene_rect_t* bounds /*none*/);
// void gtk_snapshot_append_scaled_texture (::GI_PATCH_GtkSnapshot* snapshot /*none*/, ::GdkTexture* texture /*none*/, ::GskScalingFilter filter, const ::graphene_rect_t* bounds /*none*/);
GI_INLINE_DECL void append_scaled_texture (Gdk::Texture texture, Gsk::ScalingFilter filter, const Graphene::Rect_Ref bounds) noexcept;

// void gtk_snapshot_append_stroke (GtkSnapshot* snapshot /*none*/, GskPath* path /*none*/, const GskStroke* stroke /*none*/, const GdkRGBA* color /*none*/);
// void gtk_snapshot_append_stroke (::GI_PATCH_GtkSnapshot* snapshot /*none*/, ::GskPath* path /*none*/, const ::GskStroke* stroke /*none*/, const ::GdkRGBA* color /*none*/);
GI_INLINE_DECL void append_stroke (Gsk::Path_Ref path, const Gsk::Stroke_Ref stroke, const Gdk::RGBA_Ref color) noexcept;

// void gtk_snapshot_append_texture (GtkSnapshot* snapshot /*none*/, GdkTexture* texture /*none*/, const graphene_rect_t* bounds /*none*/);
// void gtk_snapshot_append_texture (::GI_PATCH_GtkSnapshot* snapshot /*none*/, ::GdkTexture* texture /*none*/, const ::graphene_rect_t* bounds /*none*/);
GI_INLINE_DECL void append_texture (Gdk::Texture texture, const Graphene::Rect_Ref bounds) noexcept;

// GskRenderNode* /*full,nullable*/ gtk_snapshot_free_to_node (GtkSnapshot* snapshot /*full*/);
//  /*full,nullable*/ gtk_snapshot_free_to_node (::GI_PATCH_GtkSnapshot* snapshot /*full*/);
// IGNORE; not introspectable,  type  not supported

// GdkPaintable* /*full,nullable*/ gtk_snapshot_free_to_paintable (GtkSnapshot* snapshot /*full*/, const graphene_size_t* size /*none,nullable*/);
// ::GdkPaintable* /*full,nullable*/ gtk_snapshot_free_to_paintable (::GI_PATCH_GtkSnapshot* snapshot /*full*/, const ::graphene_size_t* size /*none,nullable*/);
GI_INLINE_DECL Gdk::Paintable free_to_paintable (const Graphene::Size_Ref size) noexcept;
GI_INLINE_DECL Gdk::Paintable free_to_paintable () noexcept;

// void gtk_snapshot_gl_shader_pop_texture (GtkSnapshot* snapshot /*none*/);
// void gtk_snapshot_gl_shader_pop_texture (::GI_PATCH_GtkSnapshot* snapshot /*none*/);
GI_INLINE_DECL void gl_shader_pop_texture () noexcept;

// void gtk_snapshot_perspective (GtkSnapshot* snapshot /*none*/, float depth);
// void gtk_snapshot_perspective (::GI_PATCH_GtkSnapshot* snapshot /*none*/, gfloat depth);
GI_INLINE_DECL void perspective (gfloat depth) noexcept;

// void gtk_snapshot_pop (GtkSnapshot* snapshot /*none*/);
// void gtk_snapshot_pop (::GI_PATCH_GtkSnapshot* snapshot /*none*/);
GI_INLINE_DECL void pop () noexcept;

// void gtk_snapshot_push_blend (GtkSnapshot* snapshot /*none*/, GskBlendMode blend_mode);
// void gtk_snapshot_push_blend (::GI_PATCH_GtkSnapshot* snapshot /*none*/, ::GskBlendMode blend_mode);
GI_INLINE_DECL void push_blend (Gsk::BlendMode blend_mode) noexcept;

// void gtk_snapshot_push_blur (GtkSnapshot* snapshot /*none*/, double radius);
// void gtk_snapshot_push_blur (::GI_PATCH_GtkSnapshot* snapshot /*none*/, gdouble radius);
GI_INLINE_DECL void push_blur (gdouble radius) noexcept;

// void gtk_snapshot_push_clip (GtkSnapshot* snapshot /*none*/, const graphene_rect_t* bounds /*none*/);
// void gtk_snapshot_push_clip (::GI_PATCH_GtkSnapshot* snapshot /*none*/, const ::graphene_rect_t* bounds /*none*/);
GI_INLINE_DECL void push_clip (const Graphene::Rect_Ref bounds) noexcept;

// void gtk_snapshot_push_color_matrix (GtkSnapshot* snapshot /*none*/, const graphene_matrix_t* color_matrix /*none*/, const graphene_vec4_t* color_offset /*none*/);
// void gtk_snapshot_push_color_matrix (::GI_PATCH_GtkSnapshot* snapshot /*none*/, const ::graphene_matrix_t* color_matrix /*none*/, const ::graphene_vec4_t* color_offset /*none*/);
GI_INLINE_DECL void push_color_matrix (const Graphene::Matrix_Ref color_matrix, const Graphene::Vec4_Ref color_offset) noexcept;

// void gtk_snapshot_push_component_transfer (GtkSnapshot* snapshot /*none*/, const GskComponentTransfer* red /*none*/, const GskComponentTransfer* green /*none*/, const GskComponentTransfer* blue /*none*/, const GskComponentTransfer* alpha /*none*/);
// void gtk_snapshot_push_component_transfer (::GI_PATCH_GtkSnapshot* snapshot /*none*/, const ::GskComponentTransfer* red /*none*/, const ::GskComponentTransfer* green /*none*/, const ::GskComponentTransfer* blue /*none*/, const ::GskComponentTransfer* alpha /*none*/);
GI_INLINE_DECL void push_component_transfer (const Gsk::ComponentTransfer_Ref red, const Gsk::ComponentTransfer_Ref green, const Gsk::ComponentTransfer_Ref blue, const Gsk::ComponentTransfer_Ref alpha) noexcept;

// void gtk_snapshot_push_composite (GtkSnapshot* snapshot /*none*/, GskPorterDuff op);
// void gtk_snapshot_push_composite (::GI_PATCH_GtkSnapshot* snapshot /*none*/, ::GskPorterDuff op);
GI_INLINE_DECL void push_composite (Gsk::PorterDuff op) noexcept;

// void gtk_snapshot_push_copy (GtkSnapshot* snapshot /*none*/);
// void gtk_snapshot_push_copy (::GI_PATCH_GtkSnapshot* snapshot /*none*/);
GI_INLINE_DECL void push_copy () noexcept;

// void gtk_snapshot_push_cross_fade (GtkSnapshot* snapshot /*none*/, double progress);
// void gtk_snapshot_push_cross_fade (::GI_PATCH_GtkSnapshot* snapshot /*none*/, gdouble progress);
GI_INLINE_DECL void push_cross_fade (gdouble progress) noexcept;

// void gtk_snapshot_push_debug (GtkSnapshot* snapshot /*none*/, const char* message /*none*/,  ..._ /*none*/);
// void gtk_snapshot_push_debug (::GI_PATCH_GtkSnapshot* snapshot /*none*/, const char* message /*none*/,  ..._ /*none*/);
// IGNORE; not introspectable, varargs not supported

// void gtk_snapshot_push_fill (GtkSnapshot* snapshot /*none*/, GskPath* path /*none*/, GskFillRule fill_rule);
// void gtk_snapshot_push_fill (::GI_PATCH_GtkSnapshot* snapshot /*none*/, ::GskPath* path /*none*/, ::GskFillRule fill_rule);
GI_INLINE_DECL void push_fill (Gsk::Path_Ref path, Gsk::FillRule fill_rule) noexcept;

// void gtk_snapshot_push_gl_shader (GtkSnapshot* snapshot /*none*/, GskGLShader* shader /*none*/, const graphene_rect_t* bounds /*none*/, GBytes* take_args /*full*/);
// void gtk_snapshot_push_gl_shader (::GI_PATCH_GtkSnapshot* snapshot /*none*/,  shader /*none*/, const ::graphene_rect_t* bounds /*none*/, ::GBytes* take_args /*full*/);
// SKIP; shader type  not supported

// void gtk_snapshot_push_isolation (GtkSnapshot* snapshot /*none*/, GskIsolation features);
// void gtk_snapshot_push_isolation (::GI_PATCH_GtkSnapshot* snapshot /*none*/, ::GskIsolation features);
GI_INLINE_DECL void push_isolation (Gsk::Isolation features) noexcept;

// void gtk_snapshot_push_mask (GtkSnapshot* snapshot /*none*/, GskMaskMode mask_mode);
// void gtk_snapshot_push_mask (::GI_PATCH_GtkSnapshot* snapshot /*none*/, ::GskMaskMode mask_mode);
GI_INLINE_DECL void push_mask (Gsk::MaskMode mask_mode) noexcept;

// void gtk_snapshot_push_opacity (GtkSnapshot* snapshot /*none*/, double opacity);
// void gtk_snapshot_push_opacity (::GI_PATCH_GtkSnapshot* snapshot /*none*/, gdouble opacity);
GI_INLINE_DECL void push_opacity (gdouble opacity) noexcept;

// void gtk_snapshot_push_repeat (GtkSnapshot* snapshot /*none*/, const graphene_rect_t* bounds /*none*/, const graphene_rect_t* child_bounds /*none,nullable*/);
// void gtk_snapshot_push_repeat (::GI_PATCH_GtkSnapshot* snapshot /*none*/, const ::graphene_rect_t* bounds /*none*/, const ::graphene_rect_t* child_bounds /*none,nullable*/);
GI_INLINE_DECL void push_repeat (const Graphene::Rect_Ref bounds, const Graphene::Rect_Ref child_bounds) noexcept;
GI_INLINE_DECL void push_repeat (const Graphene::Rect_Ref bounds) noexcept;

// void gtk_snapshot_push_rounded_clip (GtkSnapshot* snapshot /*none*/, const GskRoundedRect* bounds /*none*/);
// void gtk_snapshot_push_rounded_clip (::GI_PATCH_GtkSnapshot* snapshot /*none*/, const ::GskRoundedRect* bounds /*none*/);
GI_INLINE_DECL void push_rounded_clip (const Gsk::RoundedRect_Ref bounds) noexcept;

// void gtk_snapshot_push_shadow (GtkSnapshot* snapshot /*none*/, const GskShadow* shadow /*none*/, gsize n_shadows);
// void gtk_snapshot_push_shadow (::GI_PATCH_GtkSnapshot* snapshot /*none*/, const ::GskShadow** shadow /*none*/, gsize n_shadows);
// SKIP; shadow in boxed array not supported (depth 1)

// void gtk_snapshot_push_stroke (GtkSnapshot* snapshot /*none*/, GskPath* path /*none*/, const GskStroke* stroke /*none*/);
// void gtk_snapshot_push_stroke (::GI_PATCH_GtkSnapshot* snapshot /*none*/, ::GskPath* path /*none*/, const ::GskStroke* stroke /*none*/);
GI_INLINE_DECL void push_stroke (Gsk::Path_Ref path, const Gsk::Stroke_Ref stroke) noexcept;

// void gtk_snapshot_render_background (GtkSnapshot* snapshot /*none*/, GtkStyleContext* context /*none*/, double x, double y, double width, double height);
// void gtk_snapshot_render_background (::GI_PATCH_GtkSnapshot* snapshot /*none*/, ::GtkStyleContext* context /*none*/, gdouble x, gdouble y, gdouble width, gdouble height);
GI_INLINE_DECL void render_background (Gtk::StyleContext context, gdouble x, gdouble y, gdouble width, gdouble height) noexcept;

// void gtk_snapshot_render_focus (GtkSnapshot* snapshot /*none*/, GtkStyleContext* context /*none*/, double x, double y, double width, double height);
// void gtk_snapshot_render_focus (::GI_PATCH_GtkSnapshot* snapshot /*none*/, ::GtkStyleContext* context /*none*/, gdouble x, gdouble y, gdouble width, gdouble height);
GI_INLINE_DECL void render_focus (Gtk::StyleContext context, gdouble x, gdouble y, gdouble width, gdouble height) noexcept;

// void gtk_snapshot_render_frame (GtkSnapshot* snapshot /*none*/, GtkStyleContext* context /*none*/, double x, double y, double width, double height);
// void gtk_snapshot_render_frame (::GI_PATCH_GtkSnapshot* snapshot /*none*/, ::GtkStyleContext* context /*none*/, gdouble x, gdouble y, gdouble width, gdouble height);
GI_INLINE_DECL void render_frame (Gtk::StyleContext context, gdouble x, gdouble y, gdouble width, gdouble height) noexcept;

// void gtk_snapshot_render_insertion_cursor (GtkSnapshot* snapshot /*none*/, GtkStyleContext* context /*none*/, double x, double y, PangoLayout* layout /*none*/, int index, PangoDirection direction);
// void gtk_snapshot_render_insertion_cursor (::GI_PATCH_GtkSnapshot* snapshot /*none*/, ::GtkStyleContext* context /*none*/, gdouble x, gdouble y, ::PangoLayout* layout /*none*/, gint index, ::PangoDirection direction);
GI_INLINE_DECL void render_insertion_cursor (Gtk::StyleContext context, gdouble x, gdouble y, Pango::Layout layout, gint index, Pango::Direction direction) noexcept;

// void gtk_snapshot_render_layout (GtkSnapshot* snapshot /*none*/, GtkStyleContext* context /*none*/, double x, double y, PangoLayout* layout /*none*/);
// void gtk_snapshot_render_layout (::GI_PATCH_GtkSnapshot* snapshot /*none*/, ::GtkStyleContext* context /*none*/, gdouble x, gdouble y, ::PangoLayout* layout /*none*/);
GI_INLINE_DECL void render_layout (Gtk::StyleContext context, gdouble x, gdouble y, Pango::Layout layout) noexcept;

// void gtk_snapshot_restore (GtkSnapshot* snapshot /*none*/);
// void gtk_snapshot_restore (::GI_PATCH_GtkSnapshot* snapshot /*none*/);
GI_INLINE_DECL void restore () noexcept;

// void gtk_snapshot_rotate (GtkSnapshot* snapshot /*none*/, float angle);
// void gtk_snapshot_rotate (::GI_PATCH_GtkSnapshot* snapshot /*none*/, gfloat angle);
GI_INLINE_DECL void rotate (gfloat angle) noexcept;

// void gtk_snapshot_rotate_3d (GtkSnapshot* snapshot /*none*/, float angle, const graphene_vec3_t* axis /*none*/);
// void gtk_snapshot_rotate_3d (::GI_PATCH_GtkSnapshot* snapshot /*none*/, gfloat angle, const ::graphene_vec3_t* axis /*none*/);
GI_INLINE_DECL void rotate_3d (gfloat angle, const Graphene::Vec3_Ref axis) noexcept;

// void gtk_snapshot_save (GtkSnapshot* snapshot /*none*/);
// void gtk_snapshot_save (::GI_PATCH_GtkSnapshot* snapshot /*none*/);
GI_INLINE_DECL void save () noexcept;

// void gtk_snapshot_scale (GtkSnapshot* snapshot /*none*/, float factor_x, float factor_y);
// void gtk_snapshot_scale (::GI_PATCH_GtkSnapshot* snapshot /*none*/, gfloat factor_x, gfloat factor_y);
GI_INLINE_DECL void scale (gfloat factor_x, gfloat factor_y) noexcept;

// void gtk_snapshot_scale_3d (GtkSnapshot* snapshot /*none*/, float factor_x, float factor_y, float factor_z);
// void gtk_snapshot_scale_3d (::GI_PATCH_GtkSnapshot* snapshot /*none*/, gfloat factor_x, gfloat factor_y, gfloat factor_z);
GI_INLINE_DECL void scale_3d (gfloat factor_x, gfloat factor_y, gfloat factor_z) noexcept;

// GskRenderNode* /*full,nullable*/ gtk_snapshot_to_node (GtkSnapshot* snapshot /*none*/);
//  /*full,nullable*/ gtk_snapshot_to_node (::GI_PATCH_GtkSnapshot* snapshot /*none*/);
// SKIP;  type  not supported

// GdkPaintable* /*full,nullable*/ gtk_snapshot_to_paintable (GtkSnapshot* snapshot /*none*/, const graphene_size_t* size /*none,nullable*/);
// ::GdkPaintable* /*full,nullable*/ gtk_snapshot_to_paintable (::GI_PATCH_GtkSnapshot* snapshot /*none*/, const ::graphene_size_t* size /*none,nullable*/);
GI_INLINE_DECL Gdk::Paintable to_paintable (const Graphene::Size_Ref size) noexcept;
GI_INLINE_DECL Gdk::Paintable to_paintable () noexcept;

// void gtk_snapshot_transform (GtkSnapshot* snapshot /*none*/, GskTransform* transform /*none,nullable*/);
// void gtk_snapshot_transform (::GI_PATCH_GtkSnapshot* snapshot /*none*/, ::GskTransform* transform /*none,nullable*/);
GI_INLINE_DECL void transform (Gsk::Transform_Ref transform) noexcept;
GI_INLINE_DECL void transform () noexcept;

// void gtk_snapshot_transform_matrix (GtkSnapshot* snapshot /*none*/, const graphene_matrix_t* matrix /*none*/);
// void gtk_snapshot_transform_matrix (::GI_PATCH_GtkSnapshot* snapshot /*none*/, const ::graphene_matrix_t* matrix /*none*/);
GI_INLINE_DECL void transform_matrix (const Graphene::Matrix_Ref matrix) noexcept;

// void gtk_snapshot_translate (GtkSnapshot* snapshot /*none*/, const graphene_point_t* point /*none*/);
// void gtk_snapshot_translate (::GI_PATCH_GtkSnapshot* snapshot /*none*/, const ::graphene_point_t* point /*none*/);
GI_INLINE_DECL void translate (const Graphene::Point_Ref point) noexcept;

// void gtk_snapshot_translate_3d (GtkSnapshot* snapshot /*none*/, const graphene_point3d_t* point /*none*/);
// void gtk_snapshot_translate_3d (::GI_PATCH_GtkSnapshot* snapshot /*none*/, const ::graphene_point3d_t* point /*none*/);
GI_INLINE_DECL void translate_3d (const Graphene::Point3D_Ref point) noexcept;

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/snapshot_extra_def.hpp>)
#include <gtk/snapshot_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/snapshot_extra.hpp>)
#include <gtk/snapshot_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class Snapshot : public GI_GTK_SNAPSHOT_BASE
{ typedef GI_GTK_SNAPSHOT_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GI_PATCH_GtkSnapshot>
{ typedef Gtk::Snapshot type; }; 

} // namespace repository

} // namespace gi

#endif
