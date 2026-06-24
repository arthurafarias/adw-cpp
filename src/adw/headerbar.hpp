// AUTO-GENERATED

#ifndef _GI_ADW_HEADERBAR_HPP_
#define _GI_ADW_HEADERBAR_HPP_


namespace gi {

namespace repository {

namespace Adw {


class HeaderBar;

namespace base {


#define GI_ADW_HEADERBAR_BASE base::HeaderBarBase
class HeaderBarBase : public Gtk::Widget
{
typedef Gtk::Widget super_type;
public:
typedef ::AdwHeaderBar BaseObjectType;

HeaderBarBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return adw_header_bar_get_type(); } 

// GtkWidget* /*none*/ adw_header_bar_new ();
// ::AdwHeaderBar* /*none*/ adw_header_bar_new ();
static GI_INLINE_DECL Adw::HeaderBar new_ () noexcept;

// AdwCenteringPolicy adw_header_bar_get_centering_policy (AdwHeaderBar* self /*none*/);
// ::AdwCenteringPolicy adw_header_bar_get_centering_policy (::AdwHeaderBar* self /*none*/);
GI_INLINE_DECL Adw::CenteringPolicy get_centering_policy () noexcept;

// const char* /*none,nullable*/ adw_header_bar_get_decoration_layout (AdwHeaderBar* self /*none*/);
// const char* /*none,nullable*/ adw_header_bar_get_decoration_layout (::AdwHeaderBar* self /*none*/);
GI_INLINE_DECL gi::cstring_v get_decoration_layout () noexcept;

// gboolean adw_header_bar_get_show_back_button (AdwHeaderBar* self /*none*/);
// gboolean adw_header_bar_get_show_back_button (::AdwHeaderBar* self /*none*/);
GI_INLINE_DECL bool get_show_back_button () noexcept;

// gboolean adw_header_bar_get_show_end_title_buttons (AdwHeaderBar* self /*none*/);
// gboolean adw_header_bar_get_show_end_title_buttons (::AdwHeaderBar* self /*none*/);
GI_INLINE_DECL bool get_show_end_title_buttons () noexcept;

// gboolean adw_header_bar_get_show_start_title_buttons (AdwHeaderBar* self /*none*/);
// gboolean adw_header_bar_get_show_start_title_buttons (::AdwHeaderBar* self /*none*/);
GI_INLINE_DECL bool get_show_start_title_buttons () noexcept;

// gboolean adw_header_bar_get_show_title (AdwHeaderBar* self /*none*/);
// gboolean adw_header_bar_get_show_title (::AdwHeaderBar* self /*none*/);
GI_INLINE_DECL bool get_show_title () noexcept;

// GtkWidget* /*none,nullable*/ adw_header_bar_get_title_widget (AdwHeaderBar* self /*none*/);
// ::GtkWidget* /*none,nullable*/ adw_header_bar_get_title_widget (::AdwHeaderBar* self /*none*/);
GI_INLINE_DECL Gtk::Widget get_title_widget () noexcept;

// void adw_header_bar_pack_end (AdwHeaderBar* self /*none*/, GtkWidget* child /*none*/);
// void adw_header_bar_pack_end (::AdwHeaderBar* self /*none*/, ::GtkWidget* child /*none*/);
GI_INLINE_DECL void pack_end (Gtk::Widget child) noexcept;

// void adw_header_bar_pack_start (AdwHeaderBar* self /*none*/, GtkWidget* child /*none*/);
// void adw_header_bar_pack_start (::AdwHeaderBar* self /*none*/, ::GtkWidget* child /*none*/);
GI_INLINE_DECL void pack_start (Gtk::Widget child) noexcept;

// void adw_header_bar_remove (AdwHeaderBar* self /*none*/, GtkWidget* child /*none*/);
// void adw_header_bar_remove (::AdwHeaderBar* self /*none*/, ::GtkWidget* child /*none*/);
GI_INLINE_DECL void remove (Gtk::Widget child) noexcept;

// void adw_header_bar_set_centering_policy (AdwHeaderBar* self /*none*/, AdwCenteringPolicy centering_policy);
// void adw_header_bar_set_centering_policy (::AdwHeaderBar* self /*none*/, ::AdwCenteringPolicy centering_policy);
GI_INLINE_DECL void set_centering_policy (Adw::CenteringPolicy centering_policy) noexcept;

// void adw_header_bar_set_decoration_layout (AdwHeaderBar* self /*none*/, const char* layout /*none,nullable*/);
// void adw_header_bar_set_decoration_layout (::AdwHeaderBar* self /*none*/, const char* layout /*none,nullable*/);
GI_INLINE_DECL void set_decoration_layout (const gi::cstring_v layout) noexcept;
GI_INLINE_DECL void set_decoration_layout () noexcept;

// void adw_header_bar_set_show_back_button (AdwHeaderBar* self /*none*/, gboolean show_back_button);
// void adw_header_bar_set_show_back_button (::AdwHeaderBar* self /*none*/, gboolean show_back_button);
GI_INLINE_DECL void set_show_back_button (gboolean show_back_button) noexcept;

// void adw_header_bar_set_show_end_title_buttons (AdwHeaderBar* self /*none*/, gboolean setting);
// void adw_header_bar_set_show_end_title_buttons (::AdwHeaderBar* self /*none*/, gboolean setting);
GI_INLINE_DECL void set_show_end_title_buttons (gboolean setting) noexcept;

// void adw_header_bar_set_show_start_title_buttons (AdwHeaderBar* self /*none*/, gboolean setting);
// void adw_header_bar_set_show_start_title_buttons (::AdwHeaderBar* self /*none*/, gboolean setting);
GI_INLINE_DECL void set_show_start_title_buttons (gboolean setting) noexcept;

// void adw_header_bar_set_show_title (AdwHeaderBar* self /*none*/, gboolean show_title);
// void adw_header_bar_set_show_title (::AdwHeaderBar* self /*none*/, gboolean show_title);
GI_INLINE_DECL void set_show_title (gboolean show_title) noexcept;

// void adw_header_bar_set_title_widget (AdwHeaderBar* self /*none*/, GtkWidget* title_widget /*none,nullable*/);
// void adw_header_bar_set_title_widget (::AdwHeaderBar* self /*none*/, ::GtkWidget* title_widget /*none,nullable*/);
GI_INLINE_DECL void set_title_widget (Gtk::Widget title_widget) noexcept;
GI_INLINE_DECL void set_title_widget () noexcept;

gi::property_proxy<Adw::CenteringPolicy, base::HeaderBarBase> property_centering_policy()
{ return gi::property_proxy<Adw::CenteringPolicy, base::HeaderBarBase> (*this, "centering-policy"); }
const gi::property_proxy<Adw::CenteringPolicy, base::HeaderBarBase> property_centering_policy() const
{ return gi::property_proxy<Adw::CenteringPolicy, base::HeaderBarBase> (*this, "centering-policy"); }

gi::property_proxy<gi::cstring, base::HeaderBarBase> property_decoration_layout()
{ return gi::property_proxy<gi::cstring, base::HeaderBarBase> (*this, "decoration-layout"); }
const gi::property_proxy<gi::cstring, base::HeaderBarBase> property_decoration_layout() const
{ return gi::property_proxy<gi::cstring, base::HeaderBarBase> (*this, "decoration-layout"); }

gi::property_proxy<bool, base::HeaderBarBase> property_show_back_button()
{ return gi::property_proxy<bool, base::HeaderBarBase> (*this, "show-back-button"); }
const gi::property_proxy<bool, base::HeaderBarBase> property_show_back_button() const
{ return gi::property_proxy<bool, base::HeaderBarBase> (*this, "show-back-button"); }

gi::property_proxy<bool, base::HeaderBarBase> property_show_end_title_buttons()
{ return gi::property_proxy<bool, base::HeaderBarBase> (*this, "show-end-title-buttons"); }
const gi::property_proxy<bool, base::HeaderBarBase> property_show_end_title_buttons() const
{ return gi::property_proxy<bool, base::HeaderBarBase> (*this, "show-end-title-buttons"); }

gi::property_proxy<bool, base::HeaderBarBase> property_show_start_title_buttons()
{ return gi::property_proxy<bool, base::HeaderBarBase> (*this, "show-start-title-buttons"); }
const gi::property_proxy<bool, base::HeaderBarBase> property_show_start_title_buttons() const
{ return gi::property_proxy<bool, base::HeaderBarBase> (*this, "show-start-title-buttons"); }

gi::property_proxy<bool, base::HeaderBarBase> property_show_title()
{ return gi::property_proxy<bool, base::HeaderBarBase> (*this, "show-title"); }
const gi::property_proxy<bool, base::HeaderBarBase> property_show_title() const
{ return gi::property_proxy<bool, base::HeaderBarBase> (*this, "show-title"); }

gi::property_proxy<Gtk::Widget, base::HeaderBarBase> property_title_widget()
{ return gi::property_proxy<Gtk::Widget, base::HeaderBarBase> (*this, "title-widget"); }
const gi::property_proxy<Gtk::Widget, base::HeaderBarBase> property_title_widget() const
{ return gi::property_proxy<Gtk::Widget, base::HeaderBarBase> (*this, "title-widget"); }

}; // class

} // namespace base

} // namespace Adw

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<adw/headerbar_extra_def.hpp>)
#include <adw/headerbar_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<adw/headerbar_extra.hpp>)
#include <adw/headerbar_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Adw {

class HeaderBar : public GI_ADW_HEADERBAR_BASE
{ typedef GI_ADW_HEADERBAR_BASE super_type; using super_type::super_type; };

} // namespace Adw

template<> struct declare_cpptype_of<::AdwHeaderBar>
{ typedef Adw::HeaderBar type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Adw {

namespace impl {

namespace internal {


class HeaderBarClassDef
{
typedef HeaderBarClassDef self;
public:
typedef Adw::HeaderBar instance_type;
typedef ::AdwHeaderBarClass class_type;


struct TypeInitData;

protected:
GI_INLINE_DECL ~HeaderBarClassDef() = default;
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );


};

GI_CLASS_IMPL_BEGIN


class HeaderBarClass: public detail::ClassTemplate<Adw::impl::internal::HeaderBarClassDef, Gtk::impl::internal::WidgetClass>
{
friend class internal::HeaderBarClassDef;
typedef HeaderBarClass self;
typedef detail::ClassTemplate<Adw::impl::internal::HeaderBarClassDef, Gtk::impl::internal::WidgetClass> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types



};


struct HeaderBarClassDef::TypeInitData
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

using HeaderBarImpl = detail::ObjectImpl<HeaderBar, internal::HeaderBarClass>;

} // namespace impl

} // namespace Adw

} // namespace repository

} // namespace gi

#endif
