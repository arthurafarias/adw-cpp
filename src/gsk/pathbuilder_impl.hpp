// AUTO-GENERATED

#ifndef _GI_GSK_PATHBUILDER_IMPL_HPP_
#define _GI_GSK_PATHBUILDER_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gsk {

namespace base {

// GskPathBuilder* /*full*/ gsk_path_builder_new ();
// ::GskPathBuilder* /*full*/ gsk_path_builder_new ();
Gsk::PathBuilder base::PathBuilderBase::new_ () noexcept
{
  typedef ::GskPathBuilder* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) gsk_path_builder_new;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// void gsk_path_builder_add_cairo_path (GskPathBuilder* self /*none*/, const cairo_path_t* path /*none*/);
// void gsk_path_builder_add_cairo_path (::GskPathBuilder* self /*none*/, const  path /*none*/);
// SKIP; path type  not supported

// void gsk_path_builder_add_circle (GskPathBuilder* self /*none*/, const graphene_point_t* center /*none*/, float radius);
// void gsk_path_builder_add_circle (::GskPathBuilder* self /*none*/, const ::graphene_point_t* center /*none*/, gfloat radius);
void base::PathBuilderBase::add_circle (const Graphene::Point_Ref center, gfloat radius) noexcept
{
  typedef void (*call_wrap_t) (::GskPathBuilder* self, const ::graphene_point_t* center, gfloat radius);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gsk_path_builder_add_circle;
  auto radius_to_c = radius;
  auto center_to_c = gi::unwrap (center, gi::transfer_none);
  call_wrap_v ((::GskPathBuilder*) (gobj_()), (const ::graphene_point_t*) (center_to_c), (gfloat) (radius_to_c));
}

// void gsk_path_builder_add_layout (GskPathBuilder* self /*none*/, PangoLayout* layout /*none*/);
// void gsk_path_builder_add_layout (::GskPathBuilder* self /*none*/, ::PangoLayout* layout /*none*/);
void base::PathBuilderBase::add_layout (Pango::Layout layout) noexcept
{
  typedef void (*call_wrap_t) (::GskPathBuilder* self, ::PangoLayout* layout);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gsk_path_builder_add_layout;
  auto layout_to_c = gi::unwrap (layout, gi::transfer_none);
  call_wrap_v ((::GskPathBuilder*) (gobj_()), (::PangoLayout*) (layout_to_c));
}

// void gsk_path_builder_add_path (GskPathBuilder* self /*none*/, GskPath* path /*none*/);
// void gsk_path_builder_add_path (::GskPathBuilder* self /*none*/, ::GskPath* path /*none*/);
void base::PathBuilderBase::add_path (Gsk::Path_Ref path) noexcept
{
  typedef void (*call_wrap_t) (::GskPathBuilder* self, ::GskPath* path);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gsk_path_builder_add_path;
  auto path_to_c = gi::unwrap (path, gi::transfer_none);
  call_wrap_v ((::GskPathBuilder*) (gobj_()), (::GskPath*) (path_to_c));
}

// void gsk_path_builder_add_rect (GskPathBuilder* self /*none*/, const graphene_rect_t* rect /*none*/);
// void gsk_path_builder_add_rect (::GskPathBuilder* self /*none*/, const ::graphene_rect_t* rect /*none*/);
void base::PathBuilderBase::add_rect (const Graphene::Rect_Ref rect) noexcept
{
  typedef void (*call_wrap_t) (::GskPathBuilder* self, const ::graphene_rect_t* rect);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gsk_path_builder_add_rect;
  auto rect_to_c = gi::unwrap (rect, gi::transfer_none);
  call_wrap_v ((::GskPathBuilder*) (gobj_()), (const ::graphene_rect_t*) (rect_to_c));
}

// void gsk_path_builder_add_reverse_path (GskPathBuilder* self /*none*/, GskPath* path /*none*/);
// void gsk_path_builder_add_reverse_path (::GskPathBuilder* self /*none*/, ::GskPath* path /*none*/);
void base::PathBuilderBase::add_reverse_path (Gsk::Path_Ref path) noexcept
{
  typedef void (*call_wrap_t) (::GskPathBuilder* self, ::GskPath* path);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gsk_path_builder_add_reverse_path;
  auto path_to_c = gi::unwrap (path, gi::transfer_none);
  call_wrap_v ((::GskPathBuilder*) (gobj_()), (::GskPath*) (path_to_c));
}

// void gsk_path_builder_add_rounded_rect (GskPathBuilder* self /*none*/, const GskRoundedRect* rect /*none*/);
// void gsk_path_builder_add_rounded_rect (::GskPathBuilder* self /*none*/, const ::GskRoundedRect* rect /*none*/);
void base::PathBuilderBase::add_rounded_rect (const Gsk::RoundedRect_Ref rect) noexcept
{
  typedef void (*call_wrap_t) (::GskPathBuilder* self, const ::GskRoundedRect* rect);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gsk_path_builder_add_rounded_rect;
  auto rect_to_c = gi::unwrap (rect, gi::transfer_none);
  call_wrap_v ((::GskPathBuilder*) (gobj_()), (const ::GskRoundedRect*) (rect_to_c));
}

// void gsk_path_builder_add_segment (GskPathBuilder* self /*none*/, GskPath* path /*none*/, const GskPathPoint* start /*none*/, const GskPathPoint* end /*none*/);
// void gsk_path_builder_add_segment (::GskPathBuilder* self /*none*/, ::GskPath* path /*none*/, const ::GskPathPoint* start /*none*/, const ::GskPathPoint* end /*none*/);
void base::PathBuilderBase::add_segment (Gsk::Path_Ref path, const Gsk::PathPoint_Ref start, const Gsk::PathPoint_Ref end) noexcept
{
  typedef void (*call_wrap_t) (::GskPathBuilder* self, ::GskPath* path, const ::GskPathPoint* start, const ::GskPathPoint* end);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gsk_path_builder_add_segment;
  auto end_to_c = gi::unwrap (end, gi::transfer_none);
  auto start_to_c = gi::unwrap (start, gi::transfer_none);
  auto path_to_c = gi::unwrap (path, gi::transfer_none);
  call_wrap_v ((::GskPathBuilder*) (gobj_()), (::GskPath*) (path_to_c), (const ::GskPathPoint*) (start_to_c), (const ::GskPathPoint*) (end_to_c));
}

// void gsk_path_builder_arc_to (GskPathBuilder* self /*none*/, float x1, float y1, float x2, float y2);
// void gsk_path_builder_arc_to (::GskPathBuilder* self /*none*/, gfloat x1, gfloat y1, gfloat x2, gfloat y2);
void base::PathBuilderBase::arc_to (gfloat x1, gfloat y1, gfloat x2, gfloat y2) noexcept
{
  typedef void (*call_wrap_t) (::GskPathBuilder* self, gfloat x1, gfloat y1, gfloat x2, gfloat y2);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gsk_path_builder_arc_to;
  auto y2_to_c = y2;
  auto x2_to_c = x2;
  auto y1_to_c = y1;
  auto x1_to_c = x1;
  call_wrap_v ((::GskPathBuilder*) (gobj_()), (gfloat) (x1_to_c), (gfloat) (y1_to_c), (gfloat) (x2_to_c), (gfloat) (y2_to_c));
}

// void gsk_path_builder_close (GskPathBuilder* self /*none*/);
// void gsk_path_builder_close (::GskPathBuilder* self /*none*/);
void base::PathBuilderBase::close () noexcept
{
  typedef void (*call_wrap_t) (::GskPathBuilder* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gsk_path_builder_close;
  call_wrap_v ((::GskPathBuilder*) (gobj_()));
}

// void gsk_path_builder_conic_to (GskPathBuilder* self /*none*/, float x1, float y1, float x2, float y2, float weight);
// void gsk_path_builder_conic_to (::GskPathBuilder* self /*none*/, gfloat x1, gfloat y1, gfloat x2, gfloat y2, gfloat weight);
void base::PathBuilderBase::conic_to (gfloat x1, gfloat y1, gfloat x2, gfloat y2, gfloat weight) noexcept
{
  typedef void (*call_wrap_t) (::GskPathBuilder* self, gfloat x1, gfloat y1, gfloat x2, gfloat y2, gfloat weight);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gsk_path_builder_conic_to;
  auto weight_to_c = weight;
  auto y2_to_c = y2;
  auto x2_to_c = x2;
  auto y1_to_c = y1;
  auto x1_to_c = x1;
  call_wrap_v ((::GskPathBuilder*) (gobj_()), (gfloat) (x1_to_c), (gfloat) (y1_to_c), (gfloat) (x2_to_c), (gfloat) (y2_to_c), (gfloat) (weight_to_c));
}

// void gsk_path_builder_cubic_to (GskPathBuilder* self /*none*/, float x1, float y1, float x2, float y2, float x3, float y3);
// void gsk_path_builder_cubic_to (::GskPathBuilder* self /*none*/, gfloat x1, gfloat y1, gfloat x2, gfloat y2, gfloat x3, gfloat y3);
void base::PathBuilderBase::cubic_to (gfloat x1, gfloat y1, gfloat x2, gfloat y2, gfloat x3, gfloat y3) noexcept
{
  typedef void (*call_wrap_t) (::GskPathBuilder* self, gfloat x1, gfloat y1, gfloat x2, gfloat y2, gfloat x3, gfloat y3);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gsk_path_builder_cubic_to;
  auto y3_to_c = y3;
  auto x3_to_c = x3;
  auto y2_to_c = y2;
  auto x2_to_c = x2;
  auto y1_to_c = y1;
  auto x1_to_c = x1;
  call_wrap_v ((::GskPathBuilder*) (gobj_()), (gfloat) (x1_to_c), (gfloat) (y1_to_c), (gfloat) (x2_to_c), (gfloat) (y2_to_c), (gfloat) (x3_to_c), (gfloat) (y3_to_c));
}

// GskPath* /*full*/ gsk_path_builder_free_to_path (GskPathBuilder* self /*full*/);
// ::GskPath* /*full*/ gsk_path_builder_free_to_path (::GskPathBuilder* self /*full*/);
Gsk::Path base::PathBuilderBase::free_to_path () noexcept
{
  typedef ::GskPath* (*call_wrap_t) (::GskPathBuilder* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gsk_path_builder_free_to_path;
  auto _temp_ret = call_wrap_v ((::GskPathBuilder*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// const graphene_point_t* /*none*/ gsk_path_builder_get_current_point (GskPathBuilder* self /*none*/);
// const ::graphene_point_t* /*none*/ gsk_path_builder_get_current_point (::GskPathBuilder* self /*none*/);
Graphene::Point_Ref base::PathBuilderBase::get_current_point () noexcept
{
  typedef const ::graphene_point_t* (*call_wrap_t) (::GskPathBuilder* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gsk_path_builder_get_current_point;
  auto _temp_ret = call_wrap_v ((::GskPathBuilder*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// void gsk_path_builder_html_arc_to (GskPathBuilder* self /*none*/, float x1, float y1, float x2, float y2, float radius);
// void gsk_path_builder_html_arc_to (::GskPathBuilder* self /*none*/, gfloat x1, gfloat y1, gfloat x2, gfloat y2, gfloat radius);
void base::PathBuilderBase::html_arc_to (gfloat x1, gfloat y1, gfloat x2, gfloat y2, gfloat radius) noexcept
{
  typedef void (*call_wrap_t) (::GskPathBuilder* self, gfloat x1, gfloat y1, gfloat x2, gfloat y2, gfloat radius);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gsk_path_builder_html_arc_to;
  auto radius_to_c = radius;
  auto y2_to_c = y2;
  auto x2_to_c = x2;
  auto y1_to_c = y1;
  auto x1_to_c = x1;
  call_wrap_v ((::GskPathBuilder*) (gobj_()), (gfloat) (x1_to_c), (gfloat) (y1_to_c), (gfloat) (x2_to_c), (gfloat) (y2_to_c), (gfloat) (radius_to_c));
}

// void gsk_path_builder_line_to (GskPathBuilder* self /*none*/, float x, float y);
// void gsk_path_builder_line_to (::GskPathBuilder* self /*none*/, gfloat x, gfloat y);
void base::PathBuilderBase::line_to (gfloat x, gfloat y) noexcept
{
  typedef void (*call_wrap_t) (::GskPathBuilder* self, gfloat x, gfloat y);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gsk_path_builder_line_to;
  auto y_to_c = y;
  auto x_to_c = x;
  call_wrap_v ((::GskPathBuilder*) (gobj_()), (gfloat) (x_to_c), (gfloat) (y_to_c));
}

// void gsk_path_builder_move_to (GskPathBuilder* self /*none*/, float x, float y);
// void gsk_path_builder_move_to (::GskPathBuilder* self /*none*/, gfloat x, gfloat y);
void base::PathBuilderBase::move_to (gfloat x, gfloat y) noexcept
{
  typedef void (*call_wrap_t) (::GskPathBuilder* self, gfloat x, gfloat y);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gsk_path_builder_move_to;
  auto y_to_c = y;
  auto x_to_c = x;
  call_wrap_v ((::GskPathBuilder*) (gobj_()), (gfloat) (x_to_c), (gfloat) (y_to_c));
}

// void gsk_path_builder_quad_to (GskPathBuilder* self /*none*/, float x1, float y1, float x2, float y2);
// void gsk_path_builder_quad_to (::GskPathBuilder* self /*none*/, gfloat x1, gfloat y1, gfloat x2, gfloat y2);
void base::PathBuilderBase::quad_to (gfloat x1, gfloat y1, gfloat x2, gfloat y2) noexcept
{
  typedef void (*call_wrap_t) (::GskPathBuilder* self, gfloat x1, gfloat y1, gfloat x2, gfloat y2);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gsk_path_builder_quad_to;
  auto y2_to_c = y2;
  auto x2_to_c = x2;
  auto y1_to_c = y1;
  auto x1_to_c = x1;
  call_wrap_v ((::GskPathBuilder*) (gobj_()), (gfloat) (x1_to_c), (gfloat) (y1_to_c), (gfloat) (x2_to_c), (gfloat) (y2_to_c));
}

// GskPathBuilder* /*none*/ gsk_path_builder_ref (GskPathBuilder* self /*none*/);
// ::GskPathBuilder* /*none*/ gsk_path_builder_ref (::GskPathBuilder* self /*none*/);
// IGNORE; marked ignore

// void gsk_path_builder_rel_arc_to (GskPathBuilder* self /*none*/, float x1, float y1, float x2, float y2);
// void gsk_path_builder_rel_arc_to (::GskPathBuilder* self /*none*/, gfloat x1, gfloat y1, gfloat x2, gfloat y2);
void base::PathBuilderBase::rel_arc_to (gfloat x1, gfloat y1, gfloat x2, gfloat y2) noexcept
{
  typedef void (*call_wrap_t) (::GskPathBuilder* self, gfloat x1, gfloat y1, gfloat x2, gfloat y2);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gsk_path_builder_rel_arc_to;
  auto y2_to_c = y2;
  auto x2_to_c = x2;
  auto y1_to_c = y1;
  auto x1_to_c = x1;
  call_wrap_v ((::GskPathBuilder*) (gobj_()), (gfloat) (x1_to_c), (gfloat) (y1_to_c), (gfloat) (x2_to_c), (gfloat) (y2_to_c));
}

// void gsk_path_builder_rel_conic_to (GskPathBuilder* self /*none*/, float x1, float y1, float x2, float y2, float weight);
// void gsk_path_builder_rel_conic_to (::GskPathBuilder* self /*none*/, gfloat x1, gfloat y1, gfloat x2, gfloat y2, gfloat weight);
void base::PathBuilderBase::rel_conic_to (gfloat x1, gfloat y1, gfloat x2, gfloat y2, gfloat weight) noexcept
{
  typedef void (*call_wrap_t) (::GskPathBuilder* self, gfloat x1, gfloat y1, gfloat x2, gfloat y2, gfloat weight);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gsk_path_builder_rel_conic_to;
  auto weight_to_c = weight;
  auto y2_to_c = y2;
  auto x2_to_c = x2;
  auto y1_to_c = y1;
  auto x1_to_c = x1;
  call_wrap_v ((::GskPathBuilder*) (gobj_()), (gfloat) (x1_to_c), (gfloat) (y1_to_c), (gfloat) (x2_to_c), (gfloat) (y2_to_c), (gfloat) (weight_to_c));
}

// void gsk_path_builder_rel_cubic_to (GskPathBuilder* self /*none*/, float x1, float y1, float x2, float y2, float x3, float y3);
// void gsk_path_builder_rel_cubic_to (::GskPathBuilder* self /*none*/, gfloat x1, gfloat y1, gfloat x2, gfloat y2, gfloat x3, gfloat y3);
void base::PathBuilderBase::rel_cubic_to (gfloat x1, gfloat y1, gfloat x2, gfloat y2, gfloat x3, gfloat y3) noexcept
{
  typedef void (*call_wrap_t) (::GskPathBuilder* self, gfloat x1, gfloat y1, gfloat x2, gfloat y2, gfloat x3, gfloat y3);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gsk_path_builder_rel_cubic_to;
  auto y3_to_c = y3;
  auto x3_to_c = x3;
  auto y2_to_c = y2;
  auto x2_to_c = x2;
  auto y1_to_c = y1;
  auto x1_to_c = x1;
  call_wrap_v ((::GskPathBuilder*) (gobj_()), (gfloat) (x1_to_c), (gfloat) (y1_to_c), (gfloat) (x2_to_c), (gfloat) (y2_to_c), (gfloat) (x3_to_c), (gfloat) (y3_to_c));
}

// void gsk_path_builder_rel_html_arc_to (GskPathBuilder* self /*none*/, float x1, float y1, float x2, float y2, float radius);
// void gsk_path_builder_rel_html_arc_to (::GskPathBuilder* self /*none*/, gfloat x1, gfloat y1, gfloat x2, gfloat y2, gfloat radius);
void base::PathBuilderBase::rel_html_arc_to (gfloat x1, gfloat y1, gfloat x2, gfloat y2, gfloat radius) noexcept
{
  typedef void (*call_wrap_t) (::GskPathBuilder* self, gfloat x1, gfloat y1, gfloat x2, gfloat y2, gfloat radius);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gsk_path_builder_rel_html_arc_to;
  auto radius_to_c = radius;
  auto y2_to_c = y2;
  auto x2_to_c = x2;
  auto y1_to_c = y1;
  auto x1_to_c = x1;
  call_wrap_v ((::GskPathBuilder*) (gobj_()), (gfloat) (x1_to_c), (gfloat) (y1_to_c), (gfloat) (x2_to_c), (gfloat) (y2_to_c), (gfloat) (radius_to_c));
}

// void gsk_path_builder_rel_line_to (GskPathBuilder* self /*none*/, float x, float y);
// void gsk_path_builder_rel_line_to (::GskPathBuilder* self /*none*/, gfloat x, gfloat y);
void base::PathBuilderBase::rel_line_to (gfloat x, gfloat y) noexcept
{
  typedef void (*call_wrap_t) (::GskPathBuilder* self, gfloat x, gfloat y);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gsk_path_builder_rel_line_to;
  auto y_to_c = y;
  auto x_to_c = x;
  call_wrap_v ((::GskPathBuilder*) (gobj_()), (gfloat) (x_to_c), (gfloat) (y_to_c));
}

// void gsk_path_builder_rel_move_to (GskPathBuilder* self /*none*/, float x, float y);
// void gsk_path_builder_rel_move_to (::GskPathBuilder* self /*none*/, gfloat x, gfloat y);
void base::PathBuilderBase::rel_move_to (gfloat x, gfloat y) noexcept
{
  typedef void (*call_wrap_t) (::GskPathBuilder* self, gfloat x, gfloat y);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gsk_path_builder_rel_move_to;
  auto y_to_c = y;
  auto x_to_c = x;
  call_wrap_v ((::GskPathBuilder*) (gobj_()), (gfloat) (x_to_c), (gfloat) (y_to_c));
}

// void gsk_path_builder_rel_quad_to (GskPathBuilder* self /*none*/, float x1, float y1, float x2, float y2);
// void gsk_path_builder_rel_quad_to (::GskPathBuilder* self /*none*/, gfloat x1, gfloat y1, gfloat x2, gfloat y2);
void base::PathBuilderBase::rel_quad_to (gfloat x1, gfloat y1, gfloat x2, gfloat y2) noexcept
{
  typedef void (*call_wrap_t) (::GskPathBuilder* self, gfloat x1, gfloat y1, gfloat x2, gfloat y2);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gsk_path_builder_rel_quad_to;
  auto y2_to_c = y2;
  auto x2_to_c = x2;
  auto y1_to_c = y1;
  auto x1_to_c = x1;
  call_wrap_v ((::GskPathBuilder*) (gobj_()), (gfloat) (x1_to_c), (gfloat) (y1_to_c), (gfloat) (x2_to_c), (gfloat) (y2_to_c));
}

// void gsk_path_builder_rel_svg_arc_to (GskPathBuilder* self /*none*/, float rx, float ry, float x_axis_rotation, gboolean large_arc, gboolean positive_sweep, float x, float y);
// void gsk_path_builder_rel_svg_arc_to (::GskPathBuilder* self /*none*/, gfloat rx, gfloat ry, gfloat x_axis_rotation, gboolean large_arc, gboolean positive_sweep, gfloat x, gfloat y);
void base::PathBuilderBase::rel_svg_arc_to (gfloat rx, gfloat ry, gfloat x_axis_rotation, gboolean large_arc, gboolean positive_sweep, gfloat x, gfloat y) noexcept
{
  typedef void (*call_wrap_t) (::GskPathBuilder* self, gfloat rx, gfloat ry, gfloat x_axis_rotation, gboolean large_arc, gboolean positive_sweep, gfloat x, gfloat y);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gsk_path_builder_rel_svg_arc_to;
  auto y_to_c = y;
  auto x_to_c = x;
  auto positive_sweep_to_c = positive_sweep;
  auto large_arc_to_c = large_arc;
  auto x_axis_rotation_to_c = x_axis_rotation;
  auto ry_to_c = ry;
  auto rx_to_c = rx;
  call_wrap_v ((::GskPathBuilder*) (gobj_()), (gfloat) (rx_to_c), (gfloat) (ry_to_c), (gfloat) (x_axis_rotation_to_c), (gboolean) (large_arc_to_c), (gboolean) (positive_sweep_to_c), (gfloat) (x_to_c), (gfloat) (y_to_c));
}

// void gsk_path_builder_svg_arc_to (GskPathBuilder* self /*none*/, float rx, float ry, float x_axis_rotation, gboolean large_arc, gboolean positive_sweep, float x, float y);
// void gsk_path_builder_svg_arc_to (::GskPathBuilder* self /*none*/, gfloat rx, gfloat ry, gfloat x_axis_rotation, gboolean large_arc, gboolean positive_sweep, gfloat x, gfloat y);
void base::PathBuilderBase::svg_arc_to (gfloat rx, gfloat ry, gfloat x_axis_rotation, gboolean large_arc, gboolean positive_sweep, gfloat x, gfloat y) noexcept
{
  typedef void (*call_wrap_t) (::GskPathBuilder* self, gfloat rx, gfloat ry, gfloat x_axis_rotation, gboolean large_arc, gboolean positive_sweep, gfloat x, gfloat y);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gsk_path_builder_svg_arc_to;
  auto y_to_c = y;
  auto x_to_c = x;
  auto positive_sweep_to_c = positive_sweep;
  auto large_arc_to_c = large_arc;
  auto x_axis_rotation_to_c = x_axis_rotation;
  auto ry_to_c = ry;
  auto rx_to_c = rx;
  call_wrap_v ((::GskPathBuilder*) (gobj_()), (gfloat) (rx_to_c), (gfloat) (ry_to_c), (gfloat) (x_axis_rotation_to_c), (gboolean) (large_arc_to_c), (gboolean) (positive_sweep_to_c), (gfloat) (x_to_c), (gfloat) (y_to_c));
}

// GskPath* /*full*/ gsk_path_builder_to_path (GskPathBuilder* self /*none*/);
// ::GskPath* /*full*/ gsk_path_builder_to_path (::GskPathBuilder* self /*none*/);
Gsk::Path base::PathBuilderBase::to_path () noexcept
{
  typedef ::GskPath* (*call_wrap_t) (::GskPathBuilder* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gsk_path_builder_to_path;
  auto _temp_ret = call_wrap_v ((::GskPathBuilder*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// void gsk_path_builder_unref (GskPathBuilder* self /*none*/);
// void gsk_path_builder_unref (::GskPathBuilder* self /*none*/);
// IGNORE; marked ignore


} // namespace base

} // namespace Gsk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gsk/pathbuilder_extra_def_impl.hpp>)
#include <gsk/pathbuilder_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gsk/pathbuilder_extra_impl.hpp>)
#include <gsk/pathbuilder_extra_impl.hpp>
#endif
#endif

#endif
