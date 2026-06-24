// AUTO-GENERATED

#ifndef _GI_ADW_SHORTCUTSDIALOG_HPP_
#define _GI_ADW_SHORTCUTSDIALOG_HPP_

#include "dialog.hpp"

namespace gi {

namespace repository {

namespace Adw {

class ShortcutsSection;

class ShortcutsDialog;

namespace base {


#define GI_ADW_SHORTCUTSDIALOG_BASE base::ShortcutsDialogBase
class ShortcutsDialogBase : public Adw::Dialog
{
typedef Adw::Dialog super_type;
public:
typedef ::AdwShortcutsDialog BaseObjectType;

ShortcutsDialogBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return adw_shortcuts_dialog_get_type(); } 

// AdwDialog* /*none*/ adw_shortcuts_dialog_new ();
// ::AdwShortcutsDialog* /*none*/ adw_shortcuts_dialog_new ();
static GI_INLINE_DECL Adw::ShortcutsDialog new_ () noexcept;

// void adw_shortcuts_dialog_add (AdwShortcutsDialog* self /*none*/, AdwShortcutsSection* section /*full*/);
// void adw_shortcuts_dialog_add (::AdwShortcutsDialog* self /*none*/, ::AdwShortcutsSection* section /*full*/);
GI_INLINE_DECL void add (Adw::ShortcutsSection section) noexcept;

}; // class

} // namespace base

} // namespace Adw

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<adw/shortcutsdialog_extra_def.hpp>)
#include <adw/shortcutsdialog_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<adw/shortcutsdialog_extra.hpp>)
#include <adw/shortcutsdialog_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Adw {

class ShortcutsDialog : public GI_ADW_SHORTCUTSDIALOG_BASE
{ typedef GI_ADW_SHORTCUTSDIALOG_BASE super_type; using super_type::super_type; };

} // namespace Adw

template<> struct declare_cpptype_of<::AdwShortcutsDialog>
{ typedef Adw::ShortcutsDialog type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Adw {

namespace impl {

namespace internal {


class ShortcutsDialogClassDef
{
typedef ShortcutsDialogClassDef self;
public:
typedef Adw::ShortcutsDialog instance_type;
typedef ::AdwShortcutsDialogClass class_type;


struct TypeInitData;

protected:
GI_INLINE_DECL ~ShortcutsDialogClassDef() = default;
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );


};

GI_CLASS_IMPL_BEGIN


class ShortcutsDialogClass: public detail::ClassTemplate<Adw::impl::internal::ShortcutsDialogClassDef, Adw::impl::internal::DialogClass>
{
friend class internal::ShortcutsDialogClassDef;
typedef ShortcutsDialogClass self;
typedef detail::ClassTemplate<Adw::impl::internal::ShortcutsDialogClassDef, Adw::impl::internal::DialogClass> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types



};


struct ShortcutsDialogClassDef::TypeInitData
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

using ShortcutsDialogImpl = detail::ObjectImpl<ShortcutsDialog, internal::ShortcutsDialogClass>;

} // namespace impl

} // namespace Adw

} // namespace repository

} // namespace gi

#endif
