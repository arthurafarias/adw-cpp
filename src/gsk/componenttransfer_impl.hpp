// AUTO-GENERATED

#ifndef _GI_GSK_COMPONENTTRANSFER_IMPL_HPP_
#define _GI_GSK_COMPONENTTRANSFER_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gsk {

namespace base {

// GskComponentTransfer* /*full*/ gsk_component_transfer_new_discrete (guint n, float* values /*none*/);
// ::GskComponentTransfer* /*full*/ gsk_component_transfer_new_discrete (guint n, gfloat* values /*none*/);
Gsk::ComponentTransfer base::ComponentTransferBase::new_discrete (guint n, const gfloat * values) noexcept
{
  typedef ::GskComponentTransfer* (*call_wrap_t) (guint n, gfloat* values);
  call_wrap_t call_wrap_v = (call_wrap_t) gsk_component_transfer_new_discrete;
  auto values_to_c = values;
  auto _temp_ret = call_wrap_v ((guint) (n), (gfloat*) (values_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// GskComponentTransfer* /*full*/ gsk_component_transfer_new_gamma (float amp, float exp, float ofs);
// ::GskComponentTransfer* /*full*/ gsk_component_transfer_new_gamma (gfloat amp, gfloat exp, gfloat ofs);
Gsk::ComponentTransfer base::ComponentTransferBase::new_gamma (gfloat amp, gfloat exp, gfloat ofs) noexcept
{
  typedef ::GskComponentTransfer* (*call_wrap_t) (gfloat amp, gfloat exp, gfloat ofs);
  call_wrap_t call_wrap_v = (call_wrap_t) gsk_component_transfer_new_gamma;
  auto ofs_to_c = ofs;
  auto exp_to_c = exp;
  auto amp_to_c = amp;
  auto _temp_ret = call_wrap_v ((gfloat) (amp_to_c), (gfloat) (exp_to_c), (gfloat) (ofs_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// GskComponentTransfer* /*full*/ gsk_component_transfer_new_identity ();
// ::GskComponentTransfer* /*full*/ gsk_component_transfer_new_identity ();
Gsk::ComponentTransfer base::ComponentTransferBase::new_identity () noexcept
{
  typedef ::GskComponentTransfer* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) gsk_component_transfer_new_identity;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// GskComponentTransfer* /*full*/ gsk_component_transfer_new_levels (float n);
// ::GskComponentTransfer* /*full*/ gsk_component_transfer_new_levels (gfloat n);
Gsk::ComponentTransfer base::ComponentTransferBase::new_levels (gfloat n) noexcept
{
  typedef ::GskComponentTransfer* (*call_wrap_t) (gfloat n);
  call_wrap_t call_wrap_v = (call_wrap_t) gsk_component_transfer_new_levels;
  auto n_to_c = n;
  auto _temp_ret = call_wrap_v ((gfloat) (n_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// GskComponentTransfer* /*full*/ gsk_component_transfer_new_linear (float m, float b);
// ::GskComponentTransfer* /*full*/ gsk_component_transfer_new_linear (gfloat m, gfloat b);
Gsk::ComponentTransfer base::ComponentTransferBase::new_linear (gfloat m, gfloat b) noexcept
{
  typedef ::GskComponentTransfer* (*call_wrap_t) (gfloat m, gfloat b);
  call_wrap_t call_wrap_v = (call_wrap_t) gsk_component_transfer_new_linear;
  auto b_to_c = b;
  auto m_to_c = m;
  auto _temp_ret = call_wrap_v ((gfloat) (m_to_c), (gfloat) (b_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// GskComponentTransfer* /*full*/ gsk_component_transfer_new_table (guint n, float* values /*none*/);
// ::GskComponentTransfer* /*full*/ gsk_component_transfer_new_table (guint n, gfloat* values /*none*/);
Gsk::ComponentTransfer base::ComponentTransferBase::new_table (guint n, const gfloat * values) noexcept
{
  typedef ::GskComponentTransfer* (*call_wrap_t) (guint n, gfloat* values);
  call_wrap_t call_wrap_v = (call_wrap_t) gsk_component_transfer_new_table;
  auto values_to_c = values;
  auto _temp_ret = call_wrap_v ((guint) (n), (gfloat*) (values_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// GskComponentTransfer* /*full*/ gsk_component_transfer_copy (const GskComponentTransfer* other /*none*/);
// ::GskComponentTransfer* /*full*/ gsk_component_transfer_copy (const ::GskComponentTransfer* other /*none*/);
Gsk::ComponentTransfer base::ComponentTransferBase::copy () const noexcept
{
  typedef ::GskComponentTransfer* (*call_wrap_t) (const ::GskComponentTransfer* other);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gsk_component_transfer_copy;
  auto _temp_ret = call_wrap_v ((const ::GskComponentTransfer*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// void gsk_component_transfer_free (GskComponentTransfer* self /*none*/);
// void gsk_component_transfer_free (::GskComponentTransfer* self /*none*/);
// IGNORE; marked ignore

// gboolean gsk_component_transfer_equal (gconstpointer self, gconstpointer other);
// gboolean gsk_component_transfer_equal (const void* self, const void* other);
bool base::ComponentTransferBase::equal (const void* self, const void* other) noexcept
{
  typedef gboolean (*call_wrap_t) (const void* self, const void* other);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gsk_component_transfer_equal;
  auto other_to_c = other;
  auto self_to_c = self;
  auto _temp_ret = call_wrap_v ((const void*) (self_to_c), (const void*) (other_to_c));
  return _temp_ret;
}


} // namespace base

} // namespace Gsk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gsk/componenttransfer_extra_def_impl.hpp>)
#include <gsk/componenttransfer_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gsk/componenttransfer_extra_impl.hpp>)
#include <gsk/componenttransfer_extra_impl.hpp>
#endif
#endif

#endif
