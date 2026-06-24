// AUTO-GENERATED

#ifndef _GI_ADW_BANNER_HPP_
#define _GI_ADW_BANNER_HPP_


namespace gi {

namespace repository {

namespace Adw {


class Banner;

namespace base {


#define GI_ADW_BANNER_BASE base::BannerBase
class BannerBase : public Gtk::Widget
{
typedef Gtk::Widget super_type;
public:
typedef ::AdwBanner BaseObjectType;

BannerBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return adw_banner_get_type(); } 

GI_INLINE_DECL Gtk::Actionable interface_ (gi::interface_tag<Gtk::Actionable>);

GI_INLINE_DECL operator Gtk::Actionable ();

// GtkWidget* /*none*/ adw_banner_new (const char* title /*none*/);
// ::AdwBanner* /*none*/ adw_banner_new (const char* title /*none*/);
static GI_INLINE_DECL Adw::Banner new_ (const gi::cstring_v title) noexcept;

// const char* /*none,nullable*/ adw_banner_get_button_label (AdwBanner* self /*none*/);
// const char* /*none,nullable*/ adw_banner_get_button_label (::AdwBanner* self /*none*/);
GI_INLINE_DECL gi::cstring_v get_button_label () noexcept;

// AdwBannerButtonStyle adw_banner_get_button_style (AdwBanner* self /*none*/);
// ::AdwBannerButtonStyle adw_banner_get_button_style (::AdwBanner* self /*none*/);
GI_INLINE_DECL Adw::BannerButtonStyle get_button_style () noexcept;

// gboolean adw_banner_get_revealed (AdwBanner* self /*none*/);
// gboolean adw_banner_get_revealed (::AdwBanner* self /*none*/);
GI_INLINE_DECL bool get_revealed () noexcept;

// const char* /*none*/ adw_banner_get_title (AdwBanner* self /*none*/);
// const char* /*none*/ adw_banner_get_title (::AdwBanner* self /*none*/);
GI_INLINE_DECL gi::cstring_v get_title () noexcept;

// gboolean adw_banner_get_use_markup (AdwBanner* self /*none*/);
// gboolean adw_banner_get_use_markup (::AdwBanner* self /*none*/);
GI_INLINE_DECL bool get_use_markup () noexcept;

// void adw_banner_set_button_label (AdwBanner* self /*none*/, const char* label /*none,nullable*/);
// void adw_banner_set_button_label (::AdwBanner* self /*none*/, const char* label /*none,nullable*/);
GI_INLINE_DECL void set_button_label (const gi::cstring_v label) noexcept;
GI_INLINE_DECL void set_button_label () noexcept;

// void adw_banner_set_button_style (AdwBanner* self /*none*/, AdwBannerButtonStyle style);
// void adw_banner_set_button_style (::AdwBanner* self /*none*/, ::AdwBannerButtonStyle style);
GI_INLINE_DECL void set_button_style (Adw::BannerButtonStyle style) noexcept;

// void adw_banner_set_revealed (AdwBanner* self /*none*/, gboolean revealed);
// void adw_banner_set_revealed (::AdwBanner* self /*none*/, gboolean revealed);
GI_INLINE_DECL void set_revealed (gboolean revealed) noexcept;

// void adw_banner_set_title (AdwBanner* self /*none*/, const char* title /*none*/);
// void adw_banner_set_title (::AdwBanner* self /*none*/, const char* title /*none*/);
GI_INLINE_DECL void set_title (const gi::cstring_v title) noexcept;

// void adw_banner_set_use_markup (AdwBanner* self /*none*/, gboolean use_markup);
// void adw_banner_set_use_markup (::AdwBanner* self /*none*/, gboolean use_markup);
GI_INLINE_DECL void set_use_markup (gboolean use_markup) noexcept;

gi::property_proxy<gi::cstring, base::BannerBase> property_button_label()
{ return gi::property_proxy<gi::cstring, base::BannerBase> (*this, "button-label"); }
const gi::property_proxy<gi::cstring, base::BannerBase> property_button_label() const
{ return gi::property_proxy<gi::cstring, base::BannerBase> (*this, "button-label"); }

gi::property_proxy<Adw::BannerButtonStyle, base::BannerBase> property_button_style()
{ return gi::property_proxy<Adw::BannerButtonStyle, base::BannerBase> (*this, "button-style"); }
const gi::property_proxy<Adw::BannerButtonStyle, base::BannerBase> property_button_style() const
{ return gi::property_proxy<Adw::BannerButtonStyle, base::BannerBase> (*this, "button-style"); }

gi::property_proxy<bool, base::BannerBase> property_revealed()
{ return gi::property_proxy<bool, base::BannerBase> (*this, "revealed"); }
const gi::property_proxy<bool, base::BannerBase> property_revealed() const
{ return gi::property_proxy<bool, base::BannerBase> (*this, "revealed"); }

gi::property_proxy<gi::cstring, base::BannerBase> property_title()
{ return gi::property_proxy<gi::cstring, base::BannerBase> (*this, "title"); }
const gi::property_proxy<gi::cstring, base::BannerBase> property_title() const
{ return gi::property_proxy<gi::cstring, base::BannerBase> (*this, "title"); }

gi::property_proxy<bool, base::BannerBase> property_use_markup()
{ return gi::property_proxy<bool, base::BannerBase> (*this, "use-markup"); }
const gi::property_proxy<bool, base::BannerBase> property_use_markup() const
{ return gi::property_proxy<bool, base::BannerBase> (*this, "use-markup"); }

// (signal) void button-clicked ();
// (signal) void button-clicked ();
gi::signal_proxy<void(Adw::Banner)> signal_button_clicked()
{ return gi::signal_proxy<void(Adw::Banner)> (*this, "button-clicked"); }

}; // class

} // namespace base

} // namespace Adw

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<adw/banner_extra_def.hpp>)
#include <adw/banner_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<adw/banner_extra.hpp>)
#include <adw/banner_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Adw {

class Banner : public GI_ADW_BANNER_BASE
{ typedef GI_ADW_BANNER_BASE super_type; using super_type::super_type; };

} // namespace Adw

template<> struct declare_cpptype_of<::AdwBanner>
{ typedef Adw::Banner type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Adw {

namespace impl {

namespace internal {


class BannerClassDef
{
typedef BannerClassDef self;
public:
typedef Adw::Banner instance_type;
typedef ::AdwBannerClass class_type;


struct TypeInitData;

protected:
GI_INLINE_DECL ~BannerClassDef() = default;
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );


};

GI_CLASS_IMPL_BEGIN


class BannerClass: public detail::ClassTemplate<Adw::impl::internal::BannerClassDef, Gtk::impl::internal::WidgetClass, Gtk::impl::internal::ActionableInterfaceClassImpl>
{
friend class internal::BannerClassDef;
typedef BannerClass self;
typedef detail::ClassTemplate<Adw::impl::internal::BannerClassDef, Gtk::impl::internal::WidgetClass, Gtk::impl::internal::ActionableInterfaceClassImpl> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types
typedef Gtk::impl::internal::ActionableInterfaceClassImpl GtkActionableInterface_type;



};


struct BannerClassDef::TypeInitData
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

using BannerImpl = detail::ObjectImpl<Banner, internal::BannerClass>;

} // namespace impl

} // namespace Adw

} // namespace repository

} // namespace gi

#endif
