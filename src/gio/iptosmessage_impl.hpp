// AUTO-GENERATED

#ifndef _GI_GIO_IPTOSMESSAGE_IMPL_HPP_
#define _GI_GIO_IPTOSMESSAGE_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gio {

namespace base {

// GSocketControlMessage* /*full*/ g_ip_tos_message_new (guint8 dscp, GEcnCodePoint ecn);
// ::GIPTosMessage* /*full*/ g_ip_tos_message_new (guint8 dscp, ::GEcnCodePoint ecn);
Gio::IPTosMessage base::IPTosMessageBase::new_ (guint8 dscp, Gio::EcnCodePoint ecn) noexcept
{
  typedef ::GIPTosMessage* (*call_wrap_t) (guint8 dscp, ::GEcnCodePoint ecn);
  call_wrap_t call_wrap_v = (call_wrap_t) g_ip_tos_message_new;
  auto ecn_to_c = gi::unwrap (ecn);
  auto dscp_to_c = dscp;
  auto _temp_ret = call_wrap_v ((guint8) (dscp_to_c), (::GEcnCodePoint) (ecn_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// guint8 g_ip_tos_message_get_dscp (GIPTosMessage* message /*none*/);
// guint8 g_ip_tos_message_get_dscp (::GIPTosMessage* message /*none*/);
guint8 base::IPTosMessageBase::get_dscp () noexcept
{
  typedef guint8 (*call_wrap_t) (::GIPTosMessage* message);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_ip_tos_message_get_dscp;
  auto _temp_ret = call_wrap_v ((::GIPTosMessage*) (gobj_()));
  return _temp_ret;
}

// GEcnCodePoint g_ip_tos_message_get_ecn (GIPTosMessage* message /*none*/);
// ::GEcnCodePoint g_ip_tos_message_get_ecn (::GIPTosMessage* message /*none*/);
Gio::EcnCodePoint base::IPTosMessageBase::get_ecn () noexcept
{
  typedef ::GEcnCodePoint (*call_wrap_t) (::GIPTosMessage* message);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_ip_tos_message_get_ecn;
  auto _temp_ret = call_wrap_v ((::GIPTosMessage*) (gobj_()));
  return gi::wrap (_temp_ret);
}


} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/iptosmessage_extra_def_impl.hpp>)
#include <gio/iptosmessage_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/iptosmessage_extra_impl.hpp>)
#include <gio/iptosmessage_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gio {

namespace impl {

namespace internal {

void IPTosMessageClassDef::class_init (gpointer class_struct, gpointer factory)
{
  ::GIPTosMessageClass *methods = (::GIPTosMessageClass *) class_struct;
  (void) methods;

  auto init_data = GI_MEMBER_INIT_DATA(TypeInitData, factory);
  (void) init_data;

}

} // namespace internal

} // namespace impl

} // namespace Gio

} // namespace repository

} // namespace gi

#endif
