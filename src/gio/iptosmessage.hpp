// AUTO-GENERATED

#ifndef _GI_GIO_IPTOSMESSAGE_HPP_
#define _GI_GIO_IPTOSMESSAGE_HPP_

#include "socketcontrolmessage.hpp"

namespace gi {

namespace repository {

namespace Gio {


class IPTosMessage;

namespace base {


#define GI_GIO_IPTOSMESSAGE_BASE base::IPTosMessageBase
class IPTosMessageBase : public Gio::SocketControlMessage
{
typedef Gio::SocketControlMessage super_type;
public:
typedef ::GIPTosMessage BaseObjectType;

IPTosMessageBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return g_ip_tos_message_get_type(); } 

// GSocketControlMessage* /*full*/ g_ip_tos_message_new (guint8 dscp, GEcnCodePoint ecn);
// ::GIPTosMessage* /*full*/ g_ip_tos_message_new (guint8 dscp, ::GEcnCodePoint ecn);
static GI_INLINE_DECL Gio::IPTosMessage new_ (guint8 dscp, Gio::EcnCodePoint ecn) noexcept;

// guint8 g_ip_tos_message_get_dscp (GIPTosMessage* message /*none*/);
// guint8 g_ip_tos_message_get_dscp (::GIPTosMessage* message /*none*/);
GI_INLINE_DECL guint8 get_dscp () noexcept;

// GEcnCodePoint g_ip_tos_message_get_ecn (GIPTosMessage* message /*none*/);
// ::GEcnCodePoint g_ip_tos_message_get_ecn (::GIPTosMessage* message /*none*/);
GI_INLINE_DECL Gio::EcnCodePoint get_ecn () noexcept;

}; // class

} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/iptosmessage_extra_def.hpp>)
#include <gio/iptosmessage_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/iptosmessage_extra.hpp>)
#include <gio/iptosmessage_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gio {

class IPTosMessage : public GI_GIO_IPTOSMESSAGE_BASE
{ typedef GI_GIO_IPTOSMESSAGE_BASE super_type; using super_type::super_type; };

} // namespace Gio

template<> struct declare_cpptype_of<::GIPTosMessage>
{ typedef Gio::IPTosMessage type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gio {

namespace impl {

namespace internal {


class IPTosMessageClassDef
{
typedef IPTosMessageClassDef self;
public:
typedef Gio::IPTosMessage instance_type;
typedef ::GIPTosMessageClass class_type;


struct TypeInitData;

protected:
GI_INLINE_DECL ~IPTosMessageClassDef() = default;
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );


};

GI_CLASS_IMPL_BEGIN


class IPTosMessageClass: public detail::ClassTemplate<Gio::impl::internal::IPTosMessageClassDef, Gio::impl::internal::SocketControlMessageClass>
{
friend class internal::IPTosMessageClassDef;
typedef IPTosMessageClass self;
typedef detail::ClassTemplate<Gio::impl::internal::IPTosMessageClassDef, Gio::impl::internal::SocketControlMessageClass> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types



};


struct IPTosMessageClassDef::TypeInitData
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

using IPTosMessageImpl = detail::ObjectImpl<IPTosMessage, internal::IPTosMessageClass>;

} // namespace impl

} // namespace Gio

} // namespace repository

} // namespace gi

#endif
