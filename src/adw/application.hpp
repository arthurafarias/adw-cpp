// AUTO-GENERATED

#ifndef _GI_ADW_APPLICATION_HPP_
#define _GI_ADW_APPLICATION_HPP_


namespace gi {

namespace repository {

namespace Adw {

class StyleManager;

class Application;

namespace base {


#define GI_ADW_APPLICATION_BASE base::ApplicationBase
class ApplicationBase : public Gtk::Application
{
typedef Gtk::Application super_type;
public:
typedef ::AdwApplication BaseObjectType;

ApplicationBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return adw_application_get_type(); } 

// AdwApplication* /*full*/ adw_application_new (const char* application_id /*none,nullable*/, GApplicationFlags flags);
// ::AdwApplication* /*full*/ adw_application_new (const char* application_id /*none,nullable*/, ::GApplicationFlags flags);
static GI_INLINE_DECL Adw::Application new_ (const gi::cstring_v application_id, Gio::ApplicationFlags flags) noexcept;
static GI_INLINE_DECL Adw::Application new_ (Gio::ApplicationFlags flags) noexcept;

// AdwStyleManager* /*none*/ adw_application_get_style_manager (AdwApplication* self /*none*/);
// ::AdwStyleManager* /*none*/ adw_application_get_style_manager (::AdwApplication* self /*none*/);
GI_INLINE_DECL Adw::StyleManager get_style_manager () noexcept;

gi::property_proxy<Adw::StyleManager, base::ApplicationBase> property_style_manager()
{ return gi::property_proxy<Adw::StyleManager, base::ApplicationBase> (*this, "style-manager"); }
const gi::property_proxy<Adw::StyleManager, base::ApplicationBase> property_style_manager() const
{ return gi::property_proxy<Adw::StyleManager, base::ApplicationBase> (*this, "style-manager"); }

}; // class

} // namespace base

} // namespace Adw

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<adw/application_extra_def.hpp>)
#include <adw/application_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<adw/application_extra.hpp>)
#include <adw/application_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Adw {

class Application : public GI_ADW_APPLICATION_BASE
{ typedef GI_ADW_APPLICATION_BASE super_type; using super_type::super_type; };

} // namespace Adw

template<> struct declare_cpptype_of<::AdwApplication>
{ typedef Adw::Application type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Adw {

namespace impl {

namespace internal {


class ApplicationClassDef
{
typedef ApplicationClassDef self;
public:
typedef Adw::Application instance_type;
typedef ::AdwApplicationClass class_type;


struct TypeInitData;

protected:
GI_INLINE_DECL ~ApplicationClassDef() = default;
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );


};

GI_CLASS_IMPL_BEGIN


class ApplicationClass: public detail::ClassTemplate<Adw::impl::internal::ApplicationClassDef, Gtk::impl::internal::ApplicationClass>
{
friend class internal::ApplicationClassDef;
typedef ApplicationClass self;
typedef detail::ClassTemplate<Adw::impl::internal::ApplicationClassDef, Gtk::impl::internal::ApplicationClass> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types



};


struct ApplicationClassDef::TypeInitData
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

using ApplicationImpl = detail::ObjectImpl<Application, internal::ApplicationClass>;

} // namespace impl

} // namespace Adw

} // namespace repository

} // namespace gi

#endif
