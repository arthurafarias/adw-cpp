// AUTO-GENERATED

#ifndef _GI_GSK_COMPONENTTRANSFER_HPP_
#define _GI_GSK_COMPONENTTRANSFER_HPP_


namespace gi {

namespace repository {

namespace Gsk {

class ComponentTransfer_Ref;

class ComponentTransfer;

namespace base {


#define GI_GSK_COMPONENTTRANSFER_BASE base::ComponentTransferBase
class ComponentTransferBase : public gi::detail::GBoxedWrapperBase<ComponentTransferBase, ::GskComponentTransfer>
{
typedef gi::detail::GBoxedWrapperBase<ComponentTransferBase, ::GskComponentTransfer> super_type;
public:

ComponentTransferBase (std::nullptr_t = nullptr) : super_type() {}

static GType get_type_ () G_GNUC_CONST { return gsk_component_transfer_get_type(); } 

// GskComponentTransfer* /*full*/ gsk_component_transfer_new_discrete (guint n, float* values /*none*/);
// ::GskComponentTransfer* /*full*/ gsk_component_transfer_new_discrete (guint n, gfloat* values /*none*/);
static GI_INLINE_DECL Gsk::ComponentTransfer new_discrete (guint n, const gfloat * values) noexcept;

// GskComponentTransfer* /*full*/ gsk_component_transfer_new_gamma (float amp, float exp, float ofs);
// ::GskComponentTransfer* /*full*/ gsk_component_transfer_new_gamma (gfloat amp, gfloat exp, gfloat ofs);
static GI_INLINE_DECL Gsk::ComponentTransfer new_gamma (gfloat amp, gfloat exp, gfloat ofs) noexcept;

// GskComponentTransfer* /*full*/ gsk_component_transfer_new_identity ();
// ::GskComponentTransfer* /*full*/ gsk_component_transfer_new_identity ();
static GI_INLINE_DECL Gsk::ComponentTransfer new_identity () noexcept;

// GskComponentTransfer* /*full*/ gsk_component_transfer_new_levels (float n);
// ::GskComponentTransfer* /*full*/ gsk_component_transfer_new_levels (gfloat n);
static GI_INLINE_DECL Gsk::ComponentTransfer new_levels (gfloat n) noexcept;

// GskComponentTransfer* /*full*/ gsk_component_transfer_new_linear (float m, float b);
// ::GskComponentTransfer* /*full*/ gsk_component_transfer_new_linear (gfloat m, gfloat b);
static GI_INLINE_DECL Gsk::ComponentTransfer new_linear (gfloat m, gfloat b) noexcept;

// GskComponentTransfer* /*full*/ gsk_component_transfer_new_table (guint n, float* values /*none*/);
// ::GskComponentTransfer* /*full*/ gsk_component_transfer_new_table (guint n, gfloat* values /*none*/);
static GI_INLINE_DECL Gsk::ComponentTransfer new_table (guint n, const gfloat * values) noexcept;

// GskComponentTransfer* /*full*/ gsk_component_transfer_copy (const GskComponentTransfer* other /*none*/);
// ::GskComponentTransfer* /*full*/ gsk_component_transfer_copy (const ::GskComponentTransfer* other /*none*/);
GI_INLINE_DECL Gsk::ComponentTransfer copy () const noexcept;

// void gsk_component_transfer_free (GskComponentTransfer* self /*none*/);
// void gsk_component_transfer_free (::GskComponentTransfer* self /*none*/);
// IGNORE; marked ignore

// gboolean gsk_component_transfer_equal (gconstpointer self, gconstpointer other);
// gboolean gsk_component_transfer_equal (const void* self, const void* other);
static GI_INLINE_DECL bool equal (const void* self, const void* other) noexcept;

}; // class

} // namespace base

} // namespace Gsk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gsk/componenttransfer_extra_def.hpp>)
#include <gsk/componenttransfer_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gsk/componenttransfer_extra.hpp>)
#include <gsk/componenttransfer_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gsk {

class ComponentTransfer_Ref;

class ComponentTransfer : public gi::detail::GBoxedWrapper<ComponentTransfer, ::GskComponentTransfer, GI_GSK_COMPONENTTRANSFER_BASE, ComponentTransfer_Ref>
{ typedef gi::detail::GBoxedWrapper<ComponentTransfer, ::GskComponentTransfer, GI_GSK_COMPONENTTRANSFER_BASE, ComponentTransfer_Ref> super_type; using super_type::super_type; };


class ComponentTransfer_Ref : public gi::detail::GBoxedRefWrapper<ComponentTransfer, ::GskComponentTransfer, GI_GSK_COMPONENTTRANSFER_BASE>
{ typedef gi::detail::GBoxedRefWrapper<ComponentTransfer, ::GskComponentTransfer, GI_GSK_COMPONENTTRANSFER_BASE> super_type; using super_type::super_type; };

} // namespace Gsk

template<> struct declare_cpptype_of<::GskComponentTransfer>
{ typedef Gsk::ComponentTransfer type; }; 

} // namespace repository

} // namespace gi

#endif
