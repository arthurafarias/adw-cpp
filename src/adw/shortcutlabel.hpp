// AUTO-GENERATED

#ifndef _GI_ADW_SHORTCUTLABEL_HPP_
#define _GI_ADW_SHORTCUTLABEL_HPP_


namespace gi {

namespace repository {

namespace Adw {


class ShortcutLabel;

namespace base {


#define GI_ADW_SHORTCUTLABEL_BASE base::ShortcutLabelBase
class ShortcutLabelBase : public Gtk::Widget
{
typedef Gtk::Widget super_type;
public:
typedef ::AdwShortcutLabel BaseObjectType;

ShortcutLabelBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return adw_shortcut_label_get_type(); } 

// GtkWidget* /*none*/ adw_shortcut_label_new (const char* accelerator /*none*/);
// ::AdwShortcutLabel* /*none*/ adw_shortcut_label_new (const char* accelerator /*none*/);
static GI_INLINE_DECL Adw::ShortcutLabel new_ (const gi::cstring_v accelerator) noexcept;

// const char* /*none*/ adw_shortcut_label_get_accelerator (AdwShortcutLabel* self /*none*/);
// const char* /*none*/ adw_shortcut_label_get_accelerator (::AdwShortcutLabel* self /*none*/);
GI_INLINE_DECL gi::cstring_v get_accelerator () noexcept;

// const char* /*none*/ adw_shortcut_label_get_disabled_text (AdwShortcutLabel* self /*none*/);
// const char* /*none*/ adw_shortcut_label_get_disabled_text (::AdwShortcutLabel* self /*none*/);
GI_INLINE_DECL gi::cstring_v get_disabled_text () noexcept;

// void adw_shortcut_label_set_accelerator (AdwShortcutLabel* self /*none*/, const char* accelerator /*none*/);
// void adw_shortcut_label_set_accelerator (::AdwShortcutLabel* self /*none*/, const char* accelerator /*none*/);
GI_INLINE_DECL void set_accelerator (const gi::cstring_v accelerator) noexcept;

// void adw_shortcut_label_set_disabled_text (AdwShortcutLabel* self /*none*/, const char* disabled_text /*none*/);
// void adw_shortcut_label_set_disabled_text (::AdwShortcutLabel* self /*none*/, const char* disabled_text /*none*/);
GI_INLINE_DECL void set_disabled_text (const gi::cstring_v disabled_text) noexcept;

gi::property_proxy<gi::cstring, base::ShortcutLabelBase> property_accelerator()
{ return gi::property_proxy<gi::cstring, base::ShortcutLabelBase> (*this, "accelerator"); }
const gi::property_proxy<gi::cstring, base::ShortcutLabelBase> property_accelerator() const
{ return gi::property_proxy<gi::cstring, base::ShortcutLabelBase> (*this, "accelerator"); }

gi::property_proxy<gi::cstring, base::ShortcutLabelBase> property_disabled_text()
{ return gi::property_proxy<gi::cstring, base::ShortcutLabelBase> (*this, "disabled-text"); }
const gi::property_proxy<gi::cstring, base::ShortcutLabelBase> property_disabled_text() const
{ return gi::property_proxy<gi::cstring, base::ShortcutLabelBase> (*this, "disabled-text"); }

}; // class

} // namespace base

} // namespace Adw

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<adw/shortcutlabel_extra_def.hpp>)
#include <adw/shortcutlabel_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<adw/shortcutlabel_extra.hpp>)
#include <adw/shortcutlabel_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Adw {

class ShortcutLabel : public GI_ADW_SHORTCUTLABEL_BASE
{ typedef GI_ADW_SHORTCUTLABEL_BASE super_type; using super_type::super_type; };

} // namespace Adw

template<> struct declare_cpptype_of<::AdwShortcutLabel>
{ typedef Adw::ShortcutLabel type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Adw {

namespace impl {

namespace internal {


class ShortcutLabelClassDef
{
typedef ShortcutLabelClassDef self;
public:
typedef Adw::ShortcutLabel instance_type;
typedef ::AdwShortcutLabelClass class_type;


struct TypeInitData;

protected:
GI_INLINE_DECL ~ShortcutLabelClassDef() = default;
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );


};

GI_CLASS_IMPL_BEGIN


class ShortcutLabelClass: public detail::ClassTemplate<Adw::impl::internal::ShortcutLabelClassDef, Gtk::impl::internal::WidgetClass>
{
friend class internal::ShortcutLabelClassDef;
typedef ShortcutLabelClass self;
typedef detail::ClassTemplate<Adw::impl::internal::ShortcutLabelClassDef, Gtk::impl::internal::WidgetClass> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types



};


struct ShortcutLabelClassDef::TypeInitData
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

using ShortcutLabelImpl = detail::ObjectImpl<ShortcutLabel, internal::ShortcutLabelClass>;

} // namespace impl

} // namespace Adw

} // namespace repository

} // namespace gi

#endif
