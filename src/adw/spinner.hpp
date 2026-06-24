// AUTO-GENERATED

#ifndef _GI_ADW_SPINNER_HPP_
#define _GI_ADW_SPINNER_HPP_


namespace gi {

namespace repository {

namespace Adw {


class Spinner;

namespace base {


#define GI_ADW_SPINNER_BASE base::SpinnerBase
class SpinnerBase : public Gtk::Widget
{
typedef Gtk::Widget super_type;
public:
typedef ::AdwSpinner BaseObjectType;

SpinnerBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return adw_spinner_get_type(); } 

// GtkWidget* /*none*/ adw_spinner_new ();
// ::AdwSpinner* /*none*/ adw_spinner_new ();
static GI_INLINE_DECL Adw::Spinner new_ () noexcept;

}; // class

} // namespace base

} // namespace Adw

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<adw/spinner_extra_def.hpp>)
#include <adw/spinner_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<adw/spinner_extra.hpp>)
#include <adw/spinner_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Adw {

class Spinner : public GI_ADW_SPINNER_BASE
{ typedef GI_ADW_SPINNER_BASE super_type; using super_type::super_type; };

} // namespace Adw

template<> struct declare_cpptype_of<::AdwSpinner>
{ typedef Adw::Spinner type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Adw {

namespace impl {

namespace internal {


class SpinnerClassDef
{
typedef SpinnerClassDef self;
public:
typedef Adw::Spinner instance_type;
typedef ::AdwSpinnerClass class_type;


struct TypeInitData;

protected:
GI_INLINE_DECL ~SpinnerClassDef() = default;
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );


};

GI_CLASS_IMPL_BEGIN


class SpinnerClass: public detail::ClassTemplate<Adw::impl::internal::SpinnerClassDef, Gtk::impl::internal::WidgetClass>
{
friend class internal::SpinnerClassDef;
typedef SpinnerClass self;
typedef detail::ClassTemplate<Adw::impl::internal::SpinnerClassDef, Gtk::impl::internal::WidgetClass> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types



};


struct SpinnerClassDef::TypeInitData
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

using SpinnerImpl = detail::ObjectImpl<Spinner, internal::SpinnerClass>;

} // namespace impl

} // namespace Adw

} // namespace repository

} // namespace gi

#endif
