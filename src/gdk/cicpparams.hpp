// AUTO-GENERATED

#ifndef _GI_GDK_CICPPARAMS_HPP_
#define _GI_GDK_CICPPARAMS_HPP_


namespace gi {

namespace repository {

namespace Gdk {

class ColorState;
class ColorState_Ref;

class CicpParams;

namespace base {


#define GI_GDK_CICPPARAMS_BASE base::CicpParamsBase
class CicpParamsBase : public GObject::Object
{
typedef GObject::Object super_type;
public:
typedef ::GdkCicpParams BaseObjectType;

CicpParamsBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gdk_cicp_params_get_type(); } 

// GdkCicpParams* /*full*/ gdk_cicp_params_new ();
// ::GdkCicpParams* /*full*/ gdk_cicp_params_new ();
static GI_INLINE_DECL Gdk::CicpParams new_ () noexcept;

// GdkColorState* /*full*/ gdk_cicp_params_build_color_state (GdkCicpParams* self /*none*/, GError ** error);
// ::GdkColorState* /*full*/ gdk_cicp_params_build_color_state (::GdkCicpParams* self /*none*/, GError ** error);
GI_INLINE_DECL Gdk::ColorState build_color_state ();
GI_INLINE_DECL Gdk::ColorState build_color_state (GLib::Error * _error) noexcept;

// guint gdk_cicp_params_get_color_primaries (GdkCicpParams* self /*none*/);
// guint gdk_cicp_params_get_color_primaries (::GdkCicpParams* self /*none*/);
GI_INLINE_DECL guint get_color_primaries () noexcept;

// guint gdk_cicp_params_get_matrix_coefficients (GdkCicpParams* self /*none*/);
// guint gdk_cicp_params_get_matrix_coefficients (::GdkCicpParams* self /*none*/);
GI_INLINE_DECL guint get_matrix_coefficients () noexcept;

// GdkCicpRange gdk_cicp_params_get_range (GdkCicpParams* self /*none*/);
// ::GdkCicpRange gdk_cicp_params_get_range (::GdkCicpParams* self /*none*/);
GI_INLINE_DECL Gdk::CicpRange get_range () noexcept;

// guint gdk_cicp_params_get_transfer_function (GdkCicpParams* self /*none*/);
// guint gdk_cicp_params_get_transfer_function (::GdkCicpParams* self /*none*/);
GI_INLINE_DECL guint get_transfer_function () noexcept;

// void gdk_cicp_params_set_color_primaries (GdkCicpParams* self /*none*/, guint color_primaries);
// void gdk_cicp_params_set_color_primaries (::GdkCicpParams* self /*none*/, guint color_primaries);
GI_INLINE_DECL void set_color_primaries (guint color_primaries) noexcept;

// void gdk_cicp_params_set_matrix_coefficients (GdkCicpParams* self /*none*/, guint matrix_coefficients);
// void gdk_cicp_params_set_matrix_coefficients (::GdkCicpParams* self /*none*/, guint matrix_coefficients);
GI_INLINE_DECL void set_matrix_coefficients (guint matrix_coefficients) noexcept;

// void gdk_cicp_params_set_range (GdkCicpParams* self /*none*/, GdkCicpRange range);
// void gdk_cicp_params_set_range (::GdkCicpParams* self /*none*/, ::GdkCicpRange range);
GI_INLINE_DECL void set_range (Gdk::CicpRange range) noexcept;

// void gdk_cicp_params_set_transfer_function (GdkCicpParams* self /*none*/, guint transfer_function);
// void gdk_cicp_params_set_transfer_function (::GdkCicpParams* self /*none*/, guint transfer_function);
GI_INLINE_DECL void set_transfer_function (guint transfer_function) noexcept;

gi::property_proxy<guint, base::CicpParamsBase> property_color_primaries()
{ return gi::property_proxy<guint, base::CicpParamsBase> (*this, "color-primaries"); }
const gi::property_proxy<guint, base::CicpParamsBase> property_color_primaries() const
{ return gi::property_proxy<guint, base::CicpParamsBase> (*this, "color-primaries"); }

gi::property_proxy<guint, base::CicpParamsBase> property_matrix_coefficients()
{ return gi::property_proxy<guint, base::CicpParamsBase> (*this, "matrix-coefficients"); }
const gi::property_proxy<guint, base::CicpParamsBase> property_matrix_coefficients() const
{ return gi::property_proxy<guint, base::CicpParamsBase> (*this, "matrix-coefficients"); }

gi::property_proxy<Gdk::CicpRange, base::CicpParamsBase> property_range()
{ return gi::property_proxy<Gdk::CicpRange, base::CicpParamsBase> (*this, "range"); }
const gi::property_proxy<Gdk::CicpRange, base::CicpParamsBase> property_range() const
{ return gi::property_proxy<Gdk::CicpRange, base::CicpParamsBase> (*this, "range"); }

gi::property_proxy<guint, base::CicpParamsBase> property_transfer_function()
{ return gi::property_proxy<guint, base::CicpParamsBase> (*this, "transfer-function"); }
const gi::property_proxy<guint, base::CicpParamsBase> property_transfer_function() const
{ return gi::property_proxy<guint, base::CicpParamsBase> (*this, "transfer-function"); }

}; // class

} // namespace base

} // namespace Gdk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gdk/cicpparams_extra_def.hpp>)
#include <gdk/cicpparams_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gdk/cicpparams_extra.hpp>)
#include <gdk/cicpparams_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gdk {

class CicpParams : public GI_GDK_CICPPARAMS_BASE
{ typedef GI_GDK_CICPPARAMS_BASE super_type; using super_type::super_type; };

} // namespace Gdk

template<> struct declare_cpptype_of<::GdkCicpParams>
{ typedef Gdk::CicpParams type; }; 

} // namespace repository

} // namespace gi

#endif
