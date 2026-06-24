// AUTO-GENERATED

#ifndef _GI_GIO_IPV6TCLASSMESSAGE_HPP_
#define _GI_GIO_IPV6TCLASSMESSAGE_HPP_

#include "socketcontrolmessage.hpp"

namespace gi {

namespace repository {

namespace Gio {


class IPv6TclassMessage;

namespace base {


#define GI_GIO_IPV6TCLASSMESSAGE_BASE base::IPv6TclassMessageBase
class IPv6TclassMessageBase : public Gio::SocketControlMessage
{
typedef Gio::SocketControlMessage super_type;
public:
typedef ::GIPv6TclassMessage BaseObjectType;

IPv6TclassMessageBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return g_ipv6_tclass_message_get_type(); } 

// GSocketControlMessage* /*full*/ g_ipv6_tclass_message_new (guint8 dscp, GEcnCodePoint ecn);
// ::GIPv6TclassMessage* /*full*/ g_ipv6_tclass_message_new (guint8 dscp, ::GEcnCodePoint ecn);
static GI_INLINE_DECL Gio::IPv6TclassMessage new_ (guint8 dscp, Gio::EcnCodePoint ecn) noexcept;

// guint8 g_ipv6_tclass_message_get_dscp (GIPv6TclassMessage* message /*none*/);
// guint8 g_ipv6_tclass_message_get_dscp (::GIPv6TclassMessage* message /*none*/);
GI_INLINE_DECL guint8 get_dscp () noexcept;

// GEcnCodePoint g_ipv6_tclass_message_get_ecn (GIPv6TclassMessage* message /*none*/);
// ::GEcnCodePoint g_ipv6_tclass_message_get_ecn (::GIPv6TclassMessage* message /*none*/);
GI_INLINE_DECL Gio::EcnCodePoint get_ecn () noexcept;

}; // class

} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/ipv6tclassmessage_extra_def.hpp>)
#include <gio/ipv6tclassmessage_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/ipv6tclassmessage_extra.hpp>)
#include <gio/ipv6tclassmessage_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gio {

class IPv6TclassMessage : public GI_GIO_IPV6TCLASSMESSAGE_BASE
{ typedef GI_GIO_IPV6TCLASSMESSAGE_BASE super_type; using super_type::super_type; };

} // namespace Gio

template<> struct declare_cpptype_of<::GIPv6TclassMessage>
{ typedef Gio::IPv6TclassMessage type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gio {

namespace impl {

namespace internal {


class IPv6TclassMessageClassDef
{
typedef IPv6TclassMessageClassDef self;
public:
typedef Gio::IPv6TclassMessage instance_type;
typedef ::GIPv6TclassMessageClass class_type;


struct TypeInitData;

protected:
GI_INLINE_DECL ~IPv6TclassMessageClassDef() = default;
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );


};

GI_CLASS_IMPL_BEGIN


class IPv6TclassMessageClass: public detail::ClassTemplate<Gio::impl::internal::IPv6TclassMessageClassDef, Gio::impl::internal::SocketControlMessageClass>
{
friend class internal::IPv6TclassMessageClassDef;
typedef IPv6TclassMessageClass self;
typedef detail::ClassTemplate<Gio::impl::internal::IPv6TclassMessageClassDef, Gio::impl::internal::SocketControlMessageClass> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types



};


struct IPv6TclassMessageClassDef::TypeInitData
{

template<typename SubClass>
constexpr static TypeInitData factory()
{
  // using DefData = detail::DefinitionData<SubClass, TypeInitData>;
  return {

  };
}
};
} // namespace internal

GI_CLASS_IMPL_END

using IPv6TclassMessageImpl = detail::ObjectImpl<IPv6TclassMessage, internal::IPv6TclassMessageClass>;

} // namespace impl

} // namespace Gio

} // namespace repository

} // namespace gi

#endif
