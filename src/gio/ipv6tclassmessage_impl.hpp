// AUTO-GENERATED

#ifndef _GI_GIO_IPV6TCLASSMESSAGE_IMPL_HPP_
#define _GI_GIO_IPV6TCLASSMESSAGE_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gio {

namespace base {

// GSocketControlMessage* /*full*/ g_ipv6_tclass_message_new (guint8 dscp, GEcnCodePoint ecn);
// ::GIPv6TclassMessage* /*full*/ g_ipv6_tclass_message_new (guint8 dscp, ::GEcnCodePoint ecn);
Gio::IPv6TclassMessage base::IPv6TclassMessageBase::new_ (guint8 dscp, Gio::EcnCodePoint ecn) noexcept
{
  typedef ::GIPv6TclassMessage* (*call_wrap_t) (guint8 dscp, ::GEcnCodePoint ecn);
  call_wrap_t call_wrap_v = (call_wrap_t) g_ipv6_tclass_message_new;
  auto ecn_to_c = gi::unwrap (ecn);
  auto dscp_to_c = dscp;
  auto _temp_ret = call_wrap_v ((guint8) (dscp_to_c), (::GEcnCodePoint) (ecn_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// guint8 g_ipv6_tclass_message_get_dscp (GIPv6TclassMessage* message /*none*/);
// guint8 g_ipv6_tclass_message_get_dscp (::GIPv6TclassMessage* message /*none*/);
guint8 base::IPv6TclassMessageBase::get_dscp () noexcept
{
  typedef guint8 (*call_wrap_t) (::GIPv6TclassMessage* message);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_ipv6_tclass_message_get_dscp;
  auto _temp_ret = call_wrap_v ((::GIPv6TclassMessage*) (gobj_()));
  return _temp_ret;
}

// GEcnCodePoint g_ipv6_tclass_message_get_ecn (GIPv6TclassMessage* message /*none*/);
// ::GEcnCodePoint g_ipv6_tclass_message_get_ecn (::GIPv6TclassMessage* message /*none*/);
Gio::EcnCodePoint base::IPv6TclassMessageBase::get_ecn () noexcept
{
  typedef ::GEcnCodePoint (*call_wrap_t) (::GIPv6TclassMessage* message);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_ipv6_tclass_message_get_ecn;
  auto _temp_ret = call_wrap_v ((::GIPv6TclassMessage*) (gobj_()));
  return gi::wrap (_temp_ret);
}


} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/ipv6tclassmessage_extra_def_impl.hpp>)
#include <gio/ipv6tclassmessage_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/ipv6tclassmessage_extra_impl.hpp>)
#include <gio/ipv6tclassmessage_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gio {

namespace impl {

namespace internal {

void IPv6TclassMessageClassDef::class_init (gpointer class_struct, gpointer factory)
{
  ::GIPv6TclassMessageClass *methods = (::GIPv6TclassMessageClass *) class_struct;
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
