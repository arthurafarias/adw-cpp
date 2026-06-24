// AUTO-GENERATED

#ifndef _GI_GTK_SNAPSHOT_IMPL_HPP_
#define _GI_GTK_SNAPSHOT_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

// GtkSnapshot* /*full*/ gtk_snapshot_new ();
// ::GI_PATCH_GtkSnapshot* /*full*/ gtk_snapshot_new ();
Gtk::Snapshot base::SnapshotBase::new_ () noexcept
{
  typedef ::GI_PATCH_GtkSnapshot* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_snapshot_new;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// void gtk_snapshot_append_border (GtkSnapshot* snapshot /*none*/, const GskRoundedRect* outline /*none*/, const float* border_width /*none*/, const GdkRGBA* border_color /*none*/);
// void gtk_snapshot_append_border (::GI_PATCH_GtkSnapshot* snapshot /*none*/, const ::GskRoundedRect* outline /*none*/, const gfloat* border_width /*none*/, const ::GdkRGBA** border_color /*none*/);
// SKIP; border_color in boxed array not supported (depth 1)

// cairo_t* /*full*/ gtk_snapshot_append_cairo (GtkSnapshot* snapshot /*none*/, const graphene_rect_t* bounds /*none*/);
// ::cairo_t* /*full*/ gtk_snapshot_append_cairo (::GI_PATCH_GtkSnapshot* snapshot /*none*/, const ::graphene_rect_t* bounds /*none*/);
cairo::Context base::SnapshotBase::append_cairo (const Graphene::Rect_Ref bounds) noexcept
{
  typedef ::cairo_t* (*call_wrap_t) (::GI_PATCH_GtkSnapshot* snapshot, const ::graphene_rect_t* bounds);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_snapshot_append_cairo;
  auto bounds_to_c = gi::unwrap (bounds, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GI_PATCH_GtkSnapshot*) (gobj_()), (const ::graphene_rect_t*) (bounds_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// void gtk_snapshot_append_color (GtkSnapshot* snapshot /*none*/, const GdkRGBA* color /*none*/, const graphene_rect_t* bounds /*none*/);
// void gtk_snapshot_append_color (::GI_PATCH_GtkSnapshot* snapshot /*none*/, const ::GdkRGBA* color /*none*/, const ::graphene_rect_t* bounds /*none*/);
void base::SnapshotBase::append_color (const Gdk::RGBA_Ref color, const Graphene::Rect_Ref bounds) noexcept
{
  typedef void (*call_wrap_t) (::GI_PATCH_GtkSnapshot* snapshot, const ::GdkRGBA* color, const ::graphene_rect_t* bounds);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_snapshot_append_color;
  auto bounds_to_c = gi::unwrap (bounds, gi::transfer_none);
  auto color_to_c = gi::unwrap (color, gi::transfer_none);
  call_wrap_v ((::GI_PATCH_GtkSnapshot*) (gobj_()), (const ::GdkRGBA*) (color_to_c), (const ::graphene_rect_t*) (bounds_to_c));
}

// void gtk_snapshot_append_conic_gradient (GtkSnapshot* snapshot /*none*/, const graphene_rect_t* bounds /*none*/, const graphene_point_t* center /*none*/, float rotation, const GskColorStop* stops /*none*/, gsize n_stops);
// void gtk_snapshot_append_conic_gradient (::GI_PATCH_GtkSnapshot* snapshot /*none*/, const ::graphene_rect_t* bounds /*none*/, const ::graphene_point_t* center /*none*/, gfloat rotation, const ::GskColorStop** stops /*none*/, gsize n_stops);
// SKIP; stops in boxed array not supported (depth 1)

// void gtk_snapshot_append_fill (GtkSnapshot* snapshot /*none*/, GskPath* path /*none*/, GskFillRule fill_rule, const GdkRGBA* color /*none*/);
// void gtk_snapshot_append_fill (::GI_PATCH_GtkSnapshot* snapshot /*none*/, ::GskPath* path /*none*/, ::GskFillRule fill_rule, const ::GdkRGBA* color /*none*/);
void base::SnapshotBase::append_fill (Gsk::Path_Ref path, Gsk::FillRule fill_rule, const Gdk::RGBA_Ref color) noexcept
{
  typedef void (*call_wrap_t) (::GI_PATCH_GtkSnapshot* snapshot, ::GskPath* path, ::GskFillRule fill_rule, const ::GdkRGBA* color);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_snapshot_append_fill;
  auto color_to_c = gi::unwrap (color, gi::transfer_none);
  auto fill_rule_to_c = gi::unwrap (fill_rule);
  auto path_to_c = gi::unwrap (path, gi::transfer_none);
  call_wrap_v ((::GI_PATCH_GtkSnapshot*) (gobj_()), (::GskPath*) (path_to_c), (::GskFillRule) (fill_rule_to_c), (const ::GdkRGBA*) (color_to_c));
}

// void gtk_snapshot_append_inset_shadow (GtkSnapshot* snapshot /*none*/, const GskRoundedRect* outline /*none*/, const GdkRGBA* color /*none*/, float dx, float dy, float spread, float blur_radius);
// void gtk_snapshot_append_inset_shadow (::GI_PATCH_GtkSnapshot* snapshot /*none*/, const ::GskRoundedRect* outline /*none*/, const ::GdkRGBA* color /*none*/, gfloat dx, gfloat dy, gfloat spread, gfloat blur_radius);
void base::SnapshotBase::append_inset_shadow (const Gsk::RoundedRect_Ref outline, const Gdk::RGBA_Ref color, gfloat dx, gfloat dy, gfloat spread, gfloat blur_radius) noexcept
{
  typedef void (*call_wrap_t) (::GI_PATCH_GtkSnapshot* snapshot, const ::GskRoundedRect* outline, const ::GdkRGBA* color, gfloat dx, gfloat dy, gfloat spread, gfloat blur_radius);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_snapshot_append_inset_shadow;
  auto blur_radius_to_c = blur_radius;
  auto spread_to_c = spread;
  auto dy_to_c = dy;
  auto dx_to_c = dx;
  auto color_to_c = gi::unwrap (color, gi::transfer_none);
  auto outline_to_c = gi::unwrap (outline, gi::transfer_none);
  call_wrap_v ((::GI_PATCH_GtkSnapshot*) (gobj_()), (const ::GskRoundedRect*) (outline_to_c), (const ::GdkRGBA*) (color_to_c), (gfloat) (dx_to_c), (gfloat) (dy_to_c), (gfloat) (spread_to_c), (gfloat) (blur_radius_to_c));
}

// void gtk_snapshot_append_layout (GtkSnapshot* snapshot /*none*/, PangoLayout* layout /*none*/, const GdkRGBA* color /*none*/);
// void gtk_snapshot_append_layout (::GI_PATCH_GtkSnapshot* snapshot /*none*/, ::PangoLayout* layout /*none*/, const ::GdkRGBA* color /*none*/);
void base::SnapshotBase::append_layout (Pango::Layout layout, const Gdk::RGBA_Ref color) noexcept
{
  typedef void (*call_wrap_t) (::GI_PATCH_GtkSnapshot* snapshot, ::PangoLayout* layout, const ::GdkRGBA* color);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_snapshot_append_layout;
  auto color_to_c = gi::unwrap (color, gi::transfer_none);
  auto layout_to_c = gi::unwrap (layout, gi::transfer_none);
  call_wrap_v ((::GI_PATCH_GtkSnapshot*) (gobj_()), (::PangoLayout*) (layout_to_c), (const ::GdkRGBA*) (color_to_c));
}

// void gtk_snapshot_append_linear_gradient (GtkSnapshot* snapshot /*none*/, const graphene_rect_t* bounds /*none*/, const graphene_point_t* start_point /*none*/, const graphene_point_t* end_point /*none*/, const GskColorStop* stops /*none*/, gsize n_stops);
// void gtk_snapshot_append_linear_gradient (::GI_PATCH_GtkSnapshot* snapshot /*none*/, const ::graphene_rect_t* bounds /*none*/, const ::graphene_point_t* start_point /*none*/, const ::graphene_point_t* end_point /*none*/, const ::GskColorStop** stops /*none*/, gsize n_stops);
// SKIP; stops in boxed array not supported (depth 1)

// void gtk_snapshot_append_node (GtkSnapshot* snapshot /*none*/, GskRenderNode* node /*none*/);
// void gtk_snapshot_append_node (::GI_PATCH_GtkSnapshot* snapshot /*none*/,  node /*none*/);
// SKIP; node type  not supported

// void gtk_snapshot_append_outset_shadow (GtkSnapshot* snapshot /*none*/, const GskRoundedRect* outline /*none*/, const GdkRGBA* color /*none*/, float dx, float dy, float spread, float blur_radius);
// void gtk_snapshot_append_outset_shadow (::GI_PATCH_GtkSnapshot* snapshot /*none*/, const ::GskRoundedRect* outline /*none*/, const ::GdkRGBA* color /*none*/, gfloat dx, gfloat dy, gfloat spread, gfloat blur_radius);
void base::SnapshotBase::append_outset_shadow (const Gsk::RoundedRect_Ref outline, const Gdk::RGBA_Ref color, gfloat dx, gfloat dy, gfloat spread, gfloat blur_radius) noexcept
{
  typedef void (*call_wrap_t) (::GI_PATCH_GtkSnapshot* snapshot, const ::GskRoundedRect* outline, const ::GdkRGBA* color, gfloat dx, gfloat dy, gfloat spread, gfloat blur_radius);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_snapshot_append_outset_shadow;
  auto blur_radius_to_c = blur_radius;
  auto spread_to_c = spread;
  auto dy_to_c = dy;
  auto dx_to_c = dx;
  auto color_to_c = gi::unwrap (color, gi::transfer_none);
  auto outline_to_c = gi::unwrap (outline, gi::transfer_none);
  call_wrap_v ((::GI_PATCH_GtkSnapshot*) (gobj_()), (const ::GskRoundedRect*) (outline_to_c), (const ::GdkRGBA*) (color_to_c), (gfloat) (dx_to_c), (gfloat) (dy_to_c), (gfloat) (spread_to_c), (gfloat) (blur_radius_to_c));
}

// void gtk_snapshot_append_paste (GtkSnapshot* snapshot /*none*/, const graphene_rect_t* bounds /*none*/, gsize nth);
// void gtk_snapshot_append_paste (::GI_PATCH_GtkSnapshot* snapshot /*none*/, const ::graphene_rect_t* bounds /*none*/, gsize nth);
void base::SnapshotBase::append_paste (const Graphene::Rect_Ref bounds, gsize nth) noexcept
{
  typedef void (*call_wrap_t) (::GI_PATCH_GtkSnapshot* snapshot, const ::graphene_rect_t* bounds, gsize nth);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_snapshot_append_paste;
  auto nth_to_c = nth;
  auto bounds_to_c = gi::unwrap (bounds, gi::transfer_none);
  call_wrap_v ((::GI_PATCH_GtkSnapshot*) (gobj_()), (const ::graphene_rect_t*) (bounds_to_c), (gsize) (nth_to_c));
}

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
void base::SnapshotBase::append_scaled_texture (Gdk::Texture texture, Gsk::ScalingFilter filter, const Graphene::Rect_Ref bounds) noexcept
{
  typedef void (*call_wrap_t) (::GI_PATCH_GtkSnapshot* snapshot, ::GdkTexture* texture, ::GskScalingFilter filter, const ::graphene_rect_t* bounds);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_snapshot_append_scaled_texture;
  auto bounds_to_c = gi::unwrap (bounds, gi::transfer_none);
  auto filter_to_c = gi::unwrap (filter);
  auto texture_to_c = gi::unwrap (texture, gi::transfer_none);
  call_wrap_v ((::GI_PATCH_GtkSnapshot*) (gobj_()), (::GdkTexture*) (texture_to_c), (::GskScalingFilter) (filter_to_c), (const ::graphene_rect_t*) (bounds_to_c));
}

// void gtk_snapshot_append_stroke (GtkSnapshot* snapshot /*none*/, GskPath* path /*none*/, const GskStroke* stroke /*none*/, const GdkRGBA* color /*none*/);
// void gtk_snapshot_append_stroke (::GI_PATCH_GtkSnapshot* snapshot /*none*/, ::GskPath* path /*none*/, const ::GskStroke* stroke /*none*/, const ::GdkRGBA* color /*none*/);
void base::SnapshotBase::append_stroke (Gsk::Path_Ref path, const Gsk::Stroke_Ref stroke, const Gdk::RGBA_Ref color) noexcept
{
  typedef void (*call_wrap_t) (::GI_PATCH_GtkSnapshot* snapshot, ::GskPath* path, const ::GskStroke* stroke, const ::GdkRGBA* color);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_snapshot_append_stroke;
  auto color_to_c = gi::unwrap (color, gi::transfer_none);
  auto stroke_to_c = gi::unwrap (stroke, gi::transfer_none);
  auto path_to_c = gi::unwrap (path, gi::transfer_none);
  call_wrap_v ((::GI_PATCH_GtkSnapshot*) (gobj_()), (::GskPath*) (path_to_c), (const ::GskStroke*) (stroke_to_c), (const ::GdkRGBA*) (color_to_c));
}

// void gtk_snapshot_append_texture (GtkSnapshot* snapshot /*none*/, GdkTexture* texture /*none*/, const graphene_rect_t* bounds /*none*/);
// void gtk_snapshot_append_texture (::GI_PATCH_GtkSnapshot* snapshot /*none*/, ::GdkTexture* texture /*none*/, const ::graphene_rect_t* bounds /*none*/);
void base::SnapshotBase::append_texture (Gdk::Texture texture, const Graphene::Rect_Ref bounds) noexcept
{
  typedef void (*call_wrap_t) (::GI_PATCH_GtkSnapshot* snapshot, ::GdkTexture* texture, const ::graphene_rect_t* bounds);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_snapshot_append_texture;
  auto bounds_to_c = gi::unwrap (bounds, gi::transfer_none);
  auto texture_to_c = gi::unwrap (texture, gi::transfer_none);
  call_wrap_v ((::GI_PATCH_GtkSnapshot*) (gobj_()), (::GdkTexture*) (texture_to_c), (const ::graphene_rect_t*) (bounds_to_c));
}

// GskRenderNode* /*full,nullable*/ gtk_snapshot_free_to_node (GtkSnapshot* snapshot /*full*/);
//  /*full,nullable*/ gtk_snapshot_free_to_node (::GI_PATCH_GtkSnapshot* snapshot /*full*/);
// IGNORE; not introspectable,  type  not supported

// GdkPaintable* /*full,nullable*/ gtk_snapshot_free_to_paintable (GtkSnapshot* snapshot /*full*/, const graphene_size_t* size /*none,nullable*/);
// ::GdkPaintable* /*full,nullable*/ gtk_snapshot_free_to_paintable (::GI_PATCH_GtkSnapshot* snapshot /*full*/, const ::graphene_size_t* size /*none,nullable*/);
Gdk::Paintable base::SnapshotBase::free_to_paintable (const Graphene::Size_Ref size) noexcept
{
  typedef ::GdkPaintable* (*call_wrap_t) (::GI_PATCH_GtkSnapshot* snapshot, const ::graphene_size_t* size);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_snapshot_free_to_paintable;
  auto size_to_c = gi::unwrap (size, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GI_PATCH_GtkSnapshot*) (gobj_()), (const ::graphene_size_t*) (size_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}
Gdk::Paintable base::SnapshotBase::free_to_paintable () noexcept
{
  typedef ::GdkPaintable* (*call_wrap_t) (::GI_PATCH_GtkSnapshot* snapshot, const ::graphene_size_t* size);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_snapshot_free_to_paintable;
  auto size_to_c = nullptr;
  auto _temp_ret = call_wrap_v ((::GI_PATCH_GtkSnapshot*) (gobj_()), (const ::graphene_size_t*) (size_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// void gtk_snapshot_gl_shader_pop_texture (GtkSnapshot* snapshot /*none*/);
// void gtk_snapshot_gl_shader_pop_texture (::GI_PATCH_GtkSnapshot* snapshot /*none*/);
void base::SnapshotBase::gl_shader_pop_texture () noexcept
{
  typedef void (*call_wrap_t) (::GI_PATCH_GtkSnapshot* snapshot);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_snapshot_gl_shader_pop_texture;
  call_wrap_v ((::GI_PATCH_GtkSnapshot*) (gobj_()));
}

// void gtk_snapshot_perspective (GtkSnapshot* snapshot /*none*/, float depth);
// void gtk_snapshot_perspective (::GI_PATCH_GtkSnapshot* snapshot /*none*/, gfloat depth);
void base::SnapshotBase::perspective (gfloat depth) noexcept
{
  typedef void (*call_wrap_t) (::GI_PATCH_GtkSnapshot* snapshot, gfloat depth);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_snapshot_perspective;
  auto depth_to_c = depth;
  call_wrap_v ((::GI_PATCH_GtkSnapshot*) (gobj_()), (gfloat) (depth_to_c));
}

// void gtk_snapshot_pop (GtkSnapshot* snapshot /*none*/);
// void gtk_snapshot_pop (::GI_PATCH_GtkSnapshot* snapshot /*none*/);
void base::SnapshotBase::pop () noexcept
{
  typedef void (*call_wrap_t) (::GI_PATCH_GtkSnapshot* snapshot);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_snapshot_pop;
  call_wrap_v ((::GI_PATCH_GtkSnapshot*) (gobj_()));
}

// void gtk_snapshot_push_blend (GtkSnapshot* snapshot /*none*/, GskBlendMode blend_mode);
// void gtk_snapshot_push_blend (::GI_PATCH_GtkSnapshot* snapshot /*none*/, ::GskBlendMode blend_mode);
void base::SnapshotBase::push_blend (Gsk::BlendMode blend_mode) noexcept
{
  typedef void (*call_wrap_t) (::GI_PATCH_GtkSnapshot* snapshot, ::GskBlendMode blend_mode);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_snapshot_push_blend;
  auto blend_mode_to_c = gi::unwrap (blend_mode);
  call_wrap_v ((::GI_PATCH_GtkSnapshot*) (gobj_()), (::GskBlendMode) (blend_mode_to_c));
}

// void gtk_snapshot_push_blur (GtkSnapshot* snapshot /*none*/, double radius);
// void gtk_snapshot_push_blur (::GI_PATCH_GtkSnapshot* snapshot /*none*/, gdouble radius);
void base::SnapshotBase::push_blur (gdouble radius) noexcept
{
  typedef void (*call_wrap_t) (::GI_PATCH_GtkSnapshot* snapshot, gdouble radius);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_snapshot_push_blur;
  auto radius_to_c = radius;
  call_wrap_v ((::GI_PATCH_GtkSnapshot*) (gobj_()), (gdouble) (radius_to_c));
}

// void gtk_snapshot_push_clip (GtkSnapshot* snapshot /*none*/, const graphene_rect_t* bounds /*none*/);
// void gtk_snapshot_push_clip (::GI_PATCH_GtkSnapshot* snapshot /*none*/, const ::graphene_rect_t* bounds /*none*/);
void base::SnapshotBase::push_clip (const Graphene::Rect_Ref bounds) noexcept
{
  typedef void (*call_wrap_t) (::GI_PATCH_GtkSnapshot* snapshot, const ::graphene_rect_t* bounds);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_snapshot_push_clip;
  auto bounds_to_c = gi::unwrap (bounds, gi::transfer_none);
  call_wrap_v ((::GI_PATCH_GtkSnapshot*) (gobj_()), (const ::graphene_rect_t*) (bounds_to_c));
}

// void gtk_snapshot_push_color_matrix (GtkSnapshot* snapshot /*none*/, const graphene_matrix_t* color_matrix /*none*/, const graphene_vec4_t* color_offset /*none*/);
// void gtk_snapshot_push_color_matrix (::GI_PATCH_GtkSnapshot* snapshot /*none*/, const ::graphene_matrix_t* color_matrix /*none*/, const ::graphene_vec4_t* color_offset /*none*/);
void base::SnapshotBase::push_color_matrix (const Graphene::Matrix_Ref color_matrix, const Graphene::Vec4_Ref color_offset) noexcept
{
  typedef void (*call_wrap_t) (::GI_PATCH_GtkSnapshot* snapshot, const ::graphene_matrix_t* color_matrix, const ::graphene_vec4_t* color_offset);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_snapshot_push_color_matrix;
  auto color_offset_to_c = gi::unwrap (color_offset, gi::transfer_none);
  auto color_matrix_to_c = gi::unwrap (color_matrix, gi::transfer_none);
  call_wrap_v ((::GI_PATCH_GtkSnapshot*) (gobj_()), (const ::graphene_matrix_t*) (color_matrix_to_c), (const ::graphene_vec4_t*) (color_offset_to_c));
}

// void gtk_snapshot_push_component_transfer (GtkSnapshot* snapshot /*none*/, const GskComponentTransfer* red /*none*/, const GskComponentTransfer* green /*none*/, const GskComponentTransfer* blue /*none*/, const GskComponentTransfer* alpha /*none*/);
// void gtk_snapshot_push_component_transfer (::GI_PATCH_GtkSnapshot* snapshot /*none*/, const ::GskComponentTransfer* red /*none*/, const ::GskComponentTransfer* green /*none*/, const ::GskComponentTransfer* blue /*none*/, const ::GskComponentTransfer* alpha /*none*/);
void base::SnapshotBase::push_component_transfer (const Gsk::ComponentTransfer_Ref red, const Gsk::ComponentTransfer_Ref green, const Gsk::ComponentTransfer_Ref blue, const Gsk::ComponentTransfer_Ref alpha) noexcept
{
  typedef void (*call_wrap_t) (::GI_PATCH_GtkSnapshot* snapshot, const ::GskComponentTransfer* red, const ::GskComponentTransfer* green, const ::GskComponentTransfer* blue, const ::GskComponentTransfer* alpha);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_snapshot_push_component_transfer;
  auto alpha_to_c = gi::unwrap (alpha, gi::transfer_none);
  auto blue_to_c = gi::unwrap (blue, gi::transfer_none);
  auto green_to_c = gi::unwrap (green, gi::transfer_none);
  auto red_to_c = gi::unwrap (red, gi::transfer_none);
  call_wrap_v ((::GI_PATCH_GtkSnapshot*) (gobj_()), (const ::GskComponentTransfer*) (red_to_c), (const ::GskComponentTransfer*) (green_to_c), (const ::GskComponentTransfer*) (blue_to_c), (const ::GskComponentTransfer*) (alpha_to_c));
}

// void gtk_snapshot_push_composite (GtkSnapshot* snapshot /*none*/, GskPorterDuff op);
// void gtk_snapshot_push_composite (::GI_PATCH_GtkSnapshot* snapshot /*none*/, ::GskPorterDuff op);
void base::SnapshotBase::push_composite (Gsk::PorterDuff op) noexcept
{
  typedef void (*call_wrap_t) (::GI_PATCH_GtkSnapshot* snapshot, ::GskPorterDuff op);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_snapshot_push_composite;
  auto op_to_c = gi::unwrap (op);
  call_wrap_v ((::GI_PATCH_GtkSnapshot*) (gobj_()), (::GskPorterDuff) (op_to_c));
}

// void gtk_snapshot_push_copy (GtkSnapshot* snapshot /*none*/);
// void gtk_snapshot_push_copy (::GI_PATCH_GtkSnapshot* snapshot /*none*/);
void base::SnapshotBase::push_copy () noexcept
{
  typedef void (*call_wrap_t) (::GI_PATCH_GtkSnapshot* snapshot);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_snapshot_push_copy;
  call_wrap_v ((::GI_PATCH_GtkSnapshot*) (gobj_()));
}

// void gtk_snapshot_push_cross_fade (GtkSnapshot* snapshot /*none*/, double progress);
// void gtk_snapshot_push_cross_fade (::GI_PATCH_GtkSnapshot* snapshot /*none*/, gdouble progress);
void base::SnapshotBase::push_cross_fade (gdouble progress) noexcept
{
  typedef void (*call_wrap_t) (::GI_PATCH_GtkSnapshot* snapshot, gdouble progress);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_snapshot_push_cross_fade;
  auto progress_to_c = progress;
  call_wrap_v ((::GI_PATCH_GtkSnapshot*) (gobj_()), (gdouble) (progress_to_c));
}

// void gtk_snapshot_push_debug (GtkSnapshot* snapshot /*none*/, const char* message /*none*/,  ..._ /*none*/);
// void gtk_snapshot_push_debug (::GI_PATCH_GtkSnapshot* snapshot /*none*/, const char* message /*none*/,  ..._ /*none*/);
// IGNORE; not introspectable, varargs not supported

// void gtk_snapshot_push_fill (GtkSnapshot* snapshot /*none*/, GskPath* path /*none*/, GskFillRule fill_rule);
// void gtk_snapshot_push_fill (::GI_PATCH_GtkSnapshot* snapshot /*none*/, ::GskPath* path /*none*/, ::GskFillRule fill_rule);
void base::SnapshotBase::push_fill (Gsk::Path_Ref path, Gsk::FillRule fill_rule) noexcept
{
  typedef void (*call_wrap_t) (::GI_PATCH_GtkSnapshot* snapshot, ::GskPath* path, ::GskFillRule fill_rule);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_snapshot_push_fill;
  auto fill_rule_to_c = gi::unwrap (fill_rule);
  auto path_to_c = gi::unwrap (path, gi::transfer_none);
  call_wrap_v ((::GI_PATCH_GtkSnapshot*) (gobj_()), (::GskPath*) (path_to_c), (::GskFillRule) (fill_rule_to_c));
}

// void gtk_snapshot_push_gl_shader (GtkSnapshot* snapshot /*none*/, GskGLShader* shader /*none*/, const graphene_rect_t* bounds /*none*/, GBytes* take_args /*full*/);
// void gtk_snapshot_push_gl_shader (::GI_PATCH_GtkSnapshot* snapshot /*none*/,  shader /*none*/, const ::graphene_rect_t* bounds /*none*/, ::GBytes* take_args /*full*/);
// SKIP; shader type  not supported

// void gtk_snapshot_push_isolation (GtkSnapshot* snapshot /*none*/, GskIsolation features);
// void gtk_snapshot_push_isolation (::GI_PATCH_GtkSnapshot* snapshot /*none*/, ::GskIsolation features);
void base::SnapshotBase::push_isolation (Gsk::Isolation features) noexcept
{
  typedef void (*call_wrap_t) (::GI_PATCH_GtkSnapshot* snapshot, ::GskIsolation features);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_snapshot_push_isolation;
  auto features_to_c = gi::unwrap (features);
  call_wrap_v ((::GI_PATCH_GtkSnapshot*) (gobj_()), (::GskIsolation) (features_to_c));
}

// void gtk_snapshot_push_mask (GtkSnapshot* snapshot /*none*/, GskMaskMode mask_mode);
// void gtk_snapshot_push_mask (::GI_PATCH_GtkSnapshot* snapshot /*none*/, ::GskMaskMode mask_mode);
void base::SnapshotBase::push_mask (Gsk::MaskMode mask_mode) noexcept
{
  typedef void (*call_wrap_t) (::GI_PATCH_GtkSnapshot* snapshot, ::GskMaskMode mask_mode);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_snapshot_push_mask;
  auto mask_mode_to_c = gi::unwrap (mask_mode);
  call_wrap_v ((::GI_PATCH_GtkSnapshot*) (gobj_()), (::GskMaskMode) (mask_mode_to_c));
}

// void gtk_snapshot_push_opacity (GtkSnapshot* snapshot /*none*/, double opacity);
// void gtk_snapshot_push_opacity (::GI_PATCH_GtkSnapshot* snapshot /*none*/, gdouble opacity);
void base::SnapshotBase::push_opacity (gdouble opacity) noexcept
{
  typedef void (*call_wrap_t) (::GI_PATCH_GtkSnapshot* snapshot, gdouble opacity);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_snapshot_push_opacity;
  auto opacity_to_c = opacity;
  call_wrap_v ((::GI_PATCH_GtkSnapshot*) (gobj_()), (gdouble) (opacity_to_c));
}

// void gtk_snapshot_push_repeat (GtkSnapshot* snapshot /*none*/, const graphene_rect_t* bounds /*none*/, const graphene_rect_t* child_bounds /*none,nullable*/);
// void gtk_snapshot_push_repeat (::GI_PATCH_GtkSnapshot* snapshot /*none*/, const ::graphene_rect_t* bounds /*none*/, const ::graphene_rect_t* child_bounds /*none,nullable*/);
void base::SnapshotBase::push_repeat (const Graphene::Rect_Ref bounds, const Graphene::Rect_Ref child_bounds) noexcept
{
  typedef void (*call_wrap_t) (::GI_PATCH_GtkSnapshot* snapshot, const ::graphene_rect_t* bounds, const ::graphene_rect_t* child_bounds);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_snapshot_push_repeat;
  auto child_bounds_to_c = gi::unwrap (child_bounds, gi::transfer_none);
  auto bounds_to_c = gi::unwrap (bounds, gi::transfer_none);
  call_wrap_v ((::GI_PATCH_GtkSnapshot*) (gobj_()), (const ::graphene_rect_t*) (bounds_to_c), (const ::graphene_rect_t*) (child_bounds_to_c));
}
void base::SnapshotBase::push_repeat (const Graphene::Rect_Ref bounds) noexcept
{
  typedef void (*call_wrap_t) (::GI_PATCH_GtkSnapshot* snapshot, const ::graphene_rect_t* bounds, const ::graphene_rect_t* child_bounds);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_snapshot_push_repeat;
  auto child_bounds_to_c = nullptr;
  auto bounds_to_c = gi::unwrap (bounds, gi::transfer_none);
  call_wrap_v ((::GI_PATCH_GtkSnapshot*) (gobj_()), (const ::graphene_rect_t*) (bounds_to_c), (const ::graphene_rect_t*) (child_bounds_to_c));
}

// void gtk_snapshot_push_rounded_clip (GtkSnapshot* snapshot /*none*/, const GskRoundedRect* bounds /*none*/);
// void gtk_snapshot_push_rounded_clip (::GI_PATCH_GtkSnapshot* snapshot /*none*/, const ::GskRoundedRect* bounds /*none*/);
void base::SnapshotBase::push_rounded_clip (const Gsk::RoundedRect_Ref bounds) noexcept
{
  typedef void (*call_wrap_t) (::GI_PATCH_GtkSnapshot* snapshot, const ::GskRoundedRect* bounds);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_snapshot_push_rounded_clip;
  auto bounds_to_c = gi::unwrap (bounds, gi::transfer_none);
  call_wrap_v ((::GI_PATCH_GtkSnapshot*) (gobj_()), (const ::GskRoundedRect*) (bounds_to_c));
}

// void gtk_snapshot_push_shadow (GtkSnapshot* snapshot /*none*/, const GskShadow* shadow /*none*/, gsize n_shadows);
// void gtk_snapshot_push_shadow (::GI_PATCH_GtkSnapshot* snapshot /*none*/, const ::GskShadow** shadow /*none*/, gsize n_shadows);
// SKIP; shadow in boxed array not supported (depth 1)

// void gtk_snapshot_push_stroke (GtkSnapshot* snapshot /*none*/, GskPath* path /*none*/, const GskStroke* stroke /*none*/);
// void gtk_snapshot_push_stroke (::GI_PATCH_GtkSnapshot* snapshot /*none*/, ::GskPath* path /*none*/, const ::GskStroke* stroke /*none*/);
void base::SnapshotBase::push_stroke (Gsk::Path_Ref path, const Gsk::Stroke_Ref stroke) noexcept
{
  typedef void (*call_wrap_t) (::GI_PATCH_GtkSnapshot* snapshot, ::GskPath* path, const ::GskStroke* stroke);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_snapshot_push_stroke;
  auto stroke_to_c = gi::unwrap (stroke, gi::transfer_none);
  auto path_to_c = gi::unwrap (path, gi::transfer_none);
  call_wrap_v ((::GI_PATCH_GtkSnapshot*) (gobj_()), (::GskPath*) (path_to_c), (const ::GskStroke*) (stroke_to_c));
}

// void gtk_snapshot_render_background (GtkSnapshot* snapshot /*none*/, GtkStyleContext* context /*none*/, double x, double y, double width, double height);
// void gtk_snapshot_render_background (::GI_PATCH_GtkSnapshot* snapshot /*none*/, ::GtkStyleContext* context /*none*/, gdouble x, gdouble y, gdouble width, gdouble height);
void base::SnapshotBase::render_background (Gtk::StyleContext context, gdouble x, gdouble y, gdouble width, gdouble height) noexcept
{
  typedef void (*call_wrap_t) (::GI_PATCH_GtkSnapshot* snapshot, ::GtkStyleContext* context, gdouble x, gdouble y, gdouble width, gdouble height);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_snapshot_render_background;
  auto height_to_c = height;
  auto width_to_c = width;
  auto y_to_c = y;
  auto x_to_c = x;
  auto context_to_c = gi::unwrap (context, gi::transfer_none);
  call_wrap_v ((::GI_PATCH_GtkSnapshot*) (gobj_()), (::GtkStyleContext*) (context_to_c), (gdouble) (x_to_c), (gdouble) (y_to_c), (gdouble) (width_to_c), (gdouble) (height_to_c));
}

// void gtk_snapshot_render_focus (GtkSnapshot* snapshot /*none*/, GtkStyleContext* context /*none*/, double x, double y, double width, double height);
// void gtk_snapshot_render_focus (::GI_PATCH_GtkSnapshot* snapshot /*none*/, ::GtkStyleContext* context /*none*/, gdouble x, gdouble y, gdouble width, gdouble height);
void base::SnapshotBase::render_focus (Gtk::StyleContext context, gdouble x, gdouble y, gdouble width, gdouble height) noexcept
{
  typedef void (*call_wrap_t) (::GI_PATCH_GtkSnapshot* snapshot, ::GtkStyleContext* context, gdouble x, gdouble y, gdouble width, gdouble height);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_snapshot_render_focus;
  auto height_to_c = height;
  auto width_to_c = width;
  auto y_to_c = y;
  auto x_to_c = x;
  auto context_to_c = gi::unwrap (context, gi::transfer_none);
  call_wrap_v ((::GI_PATCH_GtkSnapshot*) (gobj_()), (::GtkStyleContext*) (context_to_c), (gdouble) (x_to_c), (gdouble) (y_to_c), (gdouble) (width_to_c), (gdouble) (height_to_c));
}

// void gtk_snapshot_render_frame (GtkSnapshot* snapshot /*none*/, GtkStyleContext* context /*none*/, double x, double y, double width, double height);
// void gtk_snapshot_render_frame (::GI_PATCH_GtkSnapshot* snapshot /*none*/, ::GtkStyleContext* context /*none*/, gdouble x, gdouble y, gdouble width, gdouble height);
void base::SnapshotBase::render_frame (Gtk::StyleContext context, gdouble x, gdouble y, gdouble width, gdouble height) noexcept
{
  typedef void (*call_wrap_t) (::GI_PATCH_GtkSnapshot* snapshot, ::GtkStyleContext* context, gdouble x, gdouble y, gdouble width, gdouble height);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_snapshot_render_frame;
  auto height_to_c = height;
  auto width_to_c = width;
  auto y_to_c = y;
  auto x_to_c = x;
  auto context_to_c = gi::unwrap (context, gi::transfer_none);
  call_wrap_v ((::GI_PATCH_GtkSnapshot*) (gobj_()), (::GtkStyleContext*) (context_to_c), (gdouble) (x_to_c), (gdouble) (y_to_c), (gdouble) (width_to_c), (gdouble) (height_to_c));
}

// void gtk_snapshot_render_insertion_cursor (GtkSnapshot* snapshot /*none*/, GtkStyleContext* context /*none*/, double x, double y, PangoLayout* layout /*none*/, int index, PangoDirection direction);
// void gtk_snapshot_render_insertion_cursor (::GI_PATCH_GtkSnapshot* snapshot /*none*/, ::GtkStyleContext* context /*none*/, gdouble x, gdouble y, ::PangoLayout* layout /*none*/, gint index, ::PangoDirection direction);
void base::SnapshotBase::render_insertion_cursor (Gtk::StyleContext context, gdouble x, gdouble y, Pango::Layout layout, gint index, Pango::Direction direction) noexcept
{
  typedef void (*call_wrap_t) (::GI_PATCH_GtkSnapshot* snapshot, ::GtkStyleContext* context, gdouble x, gdouble y, ::PangoLayout* layout, gint index, ::PangoDirection direction);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_snapshot_render_insertion_cursor;
  auto direction_to_c = gi::unwrap (direction);
  auto index_to_c = index;
  auto layout_to_c = gi::unwrap (layout, gi::transfer_none);
  auto y_to_c = y;
  auto x_to_c = x;
  auto context_to_c = gi::unwrap (context, gi::transfer_none);
  call_wrap_v ((::GI_PATCH_GtkSnapshot*) (gobj_()), (::GtkStyleContext*) (context_to_c), (gdouble) (x_to_c), (gdouble) (y_to_c), (::PangoLayout*) (layout_to_c), (gint) (index_to_c), (::PangoDirection) (direction_to_c));
}

// void gtk_snapshot_render_layout (GtkSnapshot* snapshot /*none*/, GtkStyleContext* context /*none*/, double x, double y, PangoLayout* layout /*none*/);
// void gtk_snapshot_render_layout (::GI_PATCH_GtkSnapshot* snapshot /*none*/, ::GtkStyleContext* context /*none*/, gdouble x, gdouble y, ::PangoLayout* layout /*none*/);
void base::SnapshotBase::render_layout (Gtk::StyleContext context, gdouble x, gdouble y, Pango::Layout layout) noexcept
{
  typedef void (*call_wrap_t) (::GI_PATCH_GtkSnapshot* snapshot, ::GtkStyleContext* context, gdouble x, gdouble y, ::PangoLayout* layout);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_snapshot_render_layout;
  auto layout_to_c = gi::unwrap (layout, gi::transfer_none);
  auto y_to_c = y;
  auto x_to_c = x;
  auto context_to_c = gi::unwrap (context, gi::transfer_none);
  call_wrap_v ((::GI_PATCH_GtkSnapshot*) (gobj_()), (::GtkStyleContext*) (context_to_c), (gdouble) (x_to_c), (gdouble) (y_to_c), (::PangoLayout*) (layout_to_c));
}

// void gtk_snapshot_restore (GtkSnapshot* snapshot /*none*/);
// void gtk_snapshot_restore (::GI_PATCH_GtkSnapshot* snapshot /*none*/);
void base::SnapshotBase::restore () noexcept
{
  typedef void (*call_wrap_t) (::GI_PATCH_GtkSnapshot* snapshot);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_snapshot_restore;
  call_wrap_v ((::GI_PATCH_GtkSnapshot*) (gobj_()));
}

// void gtk_snapshot_rotate (GtkSnapshot* snapshot /*none*/, float angle);
// void gtk_snapshot_rotate (::GI_PATCH_GtkSnapshot* snapshot /*none*/, gfloat angle);
void base::SnapshotBase::rotate (gfloat angle) noexcept
{
  typedef void (*call_wrap_t) (::GI_PATCH_GtkSnapshot* snapshot, gfloat angle);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_snapshot_rotate;
  auto angle_to_c = angle;
  call_wrap_v ((::GI_PATCH_GtkSnapshot*) (gobj_()), (gfloat) (angle_to_c));
}

// void gtk_snapshot_rotate_3d (GtkSnapshot* snapshot /*none*/, float angle, const graphene_vec3_t* axis /*none*/);
// void gtk_snapshot_rotate_3d (::GI_PATCH_GtkSnapshot* snapshot /*none*/, gfloat angle, const ::graphene_vec3_t* axis /*none*/);
void base::SnapshotBase::rotate_3d (gfloat angle, const Graphene::Vec3_Ref axis) noexcept
{
  typedef void (*call_wrap_t) (::GI_PATCH_GtkSnapshot* snapshot, gfloat angle, const ::graphene_vec3_t* axis);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_snapshot_rotate_3d;
  auto axis_to_c = gi::unwrap (axis, gi::transfer_none);
  auto angle_to_c = angle;
  call_wrap_v ((::GI_PATCH_GtkSnapshot*) (gobj_()), (gfloat) (angle_to_c), (const ::graphene_vec3_t*) (axis_to_c));
}

// void gtk_snapshot_save (GtkSnapshot* snapshot /*none*/);
// void gtk_snapshot_save (::GI_PATCH_GtkSnapshot* snapshot /*none*/);
void base::SnapshotBase::save () noexcept
{
  typedef void (*call_wrap_t) (::GI_PATCH_GtkSnapshot* snapshot);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_snapshot_save;
  call_wrap_v ((::GI_PATCH_GtkSnapshot*) (gobj_()));
}

// void gtk_snapshot_scale (GtkSnapshot* snapshot /*none*/, float factor_x, float factor_y);
// void gtk_snapshot_scale (::GI_PATCH_GtkSnapshot* snapshot /*none*/, gfloat factor_x, gfloat factor_y);
void base::SnapshotBase::scale (gfloat factor_x, gfloat factor_y) noexcept
{
  typedef void (*call_wrap_t) (::GI_PATCH_GtkSnapshot* snapshot, gfloat factor_x, gfloat factor_y);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_snapshot_scale;
  auto factor_y_to_c = factor_y;
  auto factor_x_to_c = factor_x;
  call_wrap_v ((::GI_PATCH_GtkSnapshot*) (gobj_()), (gfloat) (factor_x_to_c), (gfloat) (factor_y_to_c));
}

// void gtk_snapshot_scale_3d (GtkSnapshot* snapshot /*none*/, float factor_x, float factor_y, float factor_z);
// void gtk_snapshot_scale_3d (::GI_PATCH_GtkSnapshot* snapshot /*none*/, gfloat factor_x, gfloat factor_y, gfloat factor_z);
void base::SnapshotBase::scale_3d (gfloat factor_x, gfloat factor_y, gfloat factor_z) noexcept
{
  typedef void (*call_wrap_t) (::GI_PATCH_GtkSnapshot* snapshot, gfloat factor_x, gfloat factor_y, gfloat factor_z);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_snapshot_scale_3d;
  auto factor_z_to_c = factor_z;
  auto factor_y_to_c = factor_y;
  auto factor_x_to_c = factor_x;
  call_wrap_v ((::GI_PATCH_GtkSnapshot*) (gobj_()), (gfloat) (factor_x_to_c), (gfloat) (factor_y_to_c), (gfloat) (factor_z_to_c));
}

// GskRenderNode* /*full,nullable*/ gtk_snapshot_to_node (GtkSnapshot* snapshot /*none*/);
//  /*full,nullable*/ gtk_snapshot_to_node (::GI_PATCH_GtkSnapshot* snapshot /*none*/);
// SKIP;  type  not supported

// GdkPaintable* /*full,nullable*/ gtk_snapshot_to_paintable (GtkSnapshot* snapshot /*none*/, const graphene_size_t* size /*none,nullable*/);
// ::GdkPaintable* /*full,nullable*/ gtk_snapshot_to_paintable (::GI_PATCH_GtkSnapshot* snapshot /*none*/, const ::graphene_size_t* size /*none,nullable*/);
Gdk::Paintable base::SnapshotBase::to_paintable (const Graphene::Size_Ref size) noexcept
{
  typedef ::GdkPaintable* (*call_wrap_t) (::GI_PATCH_GtkSnapshot* snapshot, const ::graphene_size_t* size);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_snapshot_to_paintable;
  auto size_to_c = gi::unwrap (size, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GI_PATCH_GtkSnapshot*) (gobj_()), (const ::graphene_size_t*) (size_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}
Gdk::Paintable base::SnapshotBase::to_paintable () noexcept
{
  typedef ::GdkPaintable* (*call_wrap_t) (::GI_PATCH_GtkSnapshot* snapshot, const ::graphene_size_t* size);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_snapshot_to_paintable;
  auto size_to_c = nullptr;
  auto _temp_ret = call_wrap_v ((::GI_PATCH_GtkSnapshot*) (gobj_()), (const ::graphene_size_t*) (size_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// void gtk_snapshot_transform (GtkSnapshot* snapshot /*none*/, GskTransform* transform /*none,nullable*/);
// void gtk_snapshot_transform (::GI_PATCH_GtkSnapshot* snapshot /*none*/, ::GskTransform* transform /*none,nullable*/);
void base::SnapshotBase::transform (Gsk::Transform_Ref transform) noexcept
{
  typedef void (*call_wrap_t) (::GI_PATCH_GtkSnapshot* snapshot, ::GskTransform* transform);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_snapshot_transform;
  auto transform_to_c = gi::unwrap (transform, gi::transfer_none);
  call_wrap_v ((::GI_PATCH_GtkSnapshot*) (gobj_()), (::GskTransform*) (transform_to_c));
}
void base::SnapshotBase::transform () noexcept
{
  typedef void (*call_wrap_t) (::GI_PATCH_GtkSnapshot* snapshot, ::GskTransform* transform);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_snapshot_transform;
  auto transform_to_c = nullptr;
  call_wrap_v ((::GI_PATCH_GtkSnapshot*) (gobj_()), (::GskTransform*) (transform_to_c));
}

// void gtk_snapshot_transform_matrix (GtkSnapshot* snapshot /*none*/, const graphene_matrix_t* matrix /*none*/);
// void gtk_snapshot_transform_matrix (::GI_PATCH_GtkSnapshot* snapshot /*none*/, const ::graphene_matrix_t* matrix /*none*/);
void base::SnapshotBase::transform_matrix (const Graphene::Matrix_Ref matrix) noexcept
{
  typedef void (*call_wrap_t) (::GI_PATCH_GtkSnapshot* snapshot, const ::graphene_matrix_t* matrix);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_snapshot_transform_matrix;
  auto matrix_to_c = gi::unwrap (matrix, gi::transfer_none);
  call_wrap_v ((::GI_PATCH_GtkSnapshot*) (gobj_()), (const ::graphene_matrix_t*) (matrix_to_c));
}

// void gtk_snapshot_translate (GtkSnapshot* snapshot /*none*/, const graphene_point_t* point /*none*/);
// void gtk_snapshot_translate (::GI_PATCH_GtkSnapshot* snapshot /*none*/, const ::graphene_point_t* point /*none*/);
void base::SnapshotBase::translate (const Graphene::Point_Ref point) noexcept
{
  typedef void (*call_wrap_t) (::GI_PATCH_GtkSnapshot* snapshot, const ::graphene_point_t* point);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_snapshot_translate;
  auto point_to_c = gi::unwrap (point, gi::transfer_none);
  call_wrap_v ((::GI_PATCH_GtkSnapshot*) (gobj_()), (const ::graphene_point_t*) (point_to_c));
}

// void gtk_snapshot_translate_3d (GtkSnapshot* snapshot /*none*/, const graphene_point3d_t* point /*none*/);
// void gtk_snapshot_translate_3d (::GI_PATCH_GtkSnapshot* snapshot /*none*/, const ::graphene_point3d_t* point /*none*/);
void base::SnapshotBase::translate_3d (const Graphene::Point3D_Ref point) noexcept
{
  typedef void (*call_wrap_t) (::GI_PATCH_GtkSnapshot* snapshot, const ::graphene_point3d_t* point);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_snapshot_translate_3d;
  auto point_to_c = gi::unwrap (point, gi::transfer_none);
  call_wrap_v ((::GI_PATCH_GtkSnapshot*) (gobj_()), (const ::graphene_point3d_t*) (point_to_c));
}


} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/snapshot_extra_def_impl.hpp>)
#include <gtk/snapshot_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/snapshot_extra_impl.hpp>)
#include <gtk/snapshot_extra_impl.hpp>
#endif
#endif

#endif
