// AUTO-GENERATED

#ifndef _GI_ADW_LAYOUTSLOT_HPP_
#define _GI_ADW_LAYOUTSLOT_HPP_


namespace gi {

namespace repository {

namespace Adw {


class LayoutSlot;

namespace base {


#define GI_ADW_LAYOUTSLOT_BASE base::LayoutSlotBase
class LayoutSlotBase : public Gtk::Widget
{
typedef Gtk::Widget super_type;
public:
typedef ::AdwLayoutSlot BaseObjectType;

LayoutSlotBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return adw_layout_slot_get_type(); } 

// GtkWidget* /*none*/ adw_layout_slot_new (const char* id /*none*/);
// ::AdwLayoutSlot* /*none*/ adw_layout_slot_new (const char* id /*none*/);
static GI_INLINE_DECL Adw::LayoutSlot new_ (const gi::cstring_v id) noexcept;

// const char* /*none*/ adw_layout_slot_get_slot_id (AdwLayoutSlot* self /*none*/);
// const char* /*none*/ adw_layout_slot_get_slot_id (::AdwLayoutSlot* self /*none*/);
GI_INLINE_DECL gi::cstring_v get_slot_id () noexcept;

gi::property_proxy<gi::cstring, base::LayoutSlotBase> property_id()
{ return gi::property_proxy<gi::cstring, base::LayoutSlotBase> (*this, "id"); }
const gi::property_proxy<gi::cstring, base::LayoutSlotBase> property_id() const
{ return gi::property_proxy<gi::cstring, base::LayoutSlotBase> (*this, "id"); }

}; // class

} // namespace base

} // namespace Adw

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<adw/layoutslot_extra_def.hpp>)
#include <adw/layoutslot_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<adw/layoutslot_extra.hpp>)
#include <adw/layoutslot_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Adw {

class LayoutSlot : public GI_ADW_LAYOUTSLOT_BASE
{ typedef GI_ADW_LAYOUTSLOT_BASE super_type; using super_type::super_type; };

} // namespace Adw

template<> struct declare_cpptype_of<::AdwLayoutSlot>
{ typedef Adw::LayoutSlot type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Adw {

namespace impl {

namespace internal {


class LayoutSlotClassDef
{
typedef LayoutSlotClassDef self;
public:
typedef Adw::LayoutSlot instance_type;
typedef ::AdwLayoutSlotClass class_type;


struct TypeInitData;

protected:
GI_INLINE_DECL ~LayoutSlotClassDef() = default;
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );


};

GI_CLASS_IMPL_BEGIN


class LayoutSlotClass: public detail::ClassTemplate<Adw::impl::internal::LayoutSlotClassDef, Gtk::impl::internal::WidgetClass>
{
friend class internal::LayoutSlotClassDef;
typedef LayoutSlotClass self;
typedef detail::ClassTemplate<Adw::impl::internal::LayoutSlotClassDef, Gtk::impl::internal::WidgetClass> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types



};


struct LayoutSlotClassDef::TypeInitData
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

using LayoutSlotImpl = detail::ObjectImpl<LayoutSlot, internal::LayoutSlotClass>;

} // namespace impl

} // namespace Adw

} // namespace repository

} // namespace gi

#endif
