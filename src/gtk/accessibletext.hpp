// AUTO-GENERATED

#ifndef _GI_GTK_ACCESSIBLETEXT_HPP_
#define _GI_GTK_ACCESSIBLETEXT_HPP_


namespace gi {

namespace repository {

namespace Gtk {

class AccessibleTextRange;
class AccessibleTextRange_Ref;

class AccessibleText;

namespace base {


#define GI_GTK_ACCESSIBLETEXT_BASE base::AccessibleTextBase
class AccessibleTextBase : public gi::InterfaceBase
{
typedef gi::InterfaceBase super_type;
public:
typedef ::GtkAccessibleText BaseObjectType;

AccessibleTextBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_accessible_text_get_type(); } 

// void gtk_accessible_text_update_caret_position (GtkAccessibleText* self /*none*/);
// void gtk_accessible_text_update_caret_position (::GtkAccessibleText* self /*none*/);
GI_INLINE_DECL void update_caret_position () noexcept;

// void gtk_accessible_text_update_contents (GtkAccessibleText* self /*none*/, GtkAccessibleTextContentChange change, unsigned int start, unsigned int end);
// void gtk_accessible_text_update_contents (::GtkAccessibleText* self /*none*/, ::GtkAccessibleTextContentChange change, guint start, guint end);
GI_INLINE_DECL void update_contents (Gtk::AccessibleTextContentChange change, guint start, guint end) noexcept;

// void gtk_accessible_text_update_selection_bound (GtkAccessibleText* self /*none*/);
// void gtk_accessible_text_update_selection_bound (::GtkAccessibleText* self /*none*/);
GI_INLINE_DECL void update_selection_bound () noexcept;

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/accessibletext_extra_def.hpp>)
#include <gtk/accessibletext_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/accessibletext_extra.hpp>)
#include <gtk/accessibletext_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class AccessibleText : public GI_GTK_ACCESSIBLETEXT_BASE
{ typedef GI_GTK_ACCESSIBLETEXT_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkAccessibleText>
{ typedef Gtk::AccessibleText type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {


class AccessibleTextInterfaceDef
{
typedef AccessibleTextInterfaceDef self;
public:
typedef Gtk::AccessibleText instance_type;
typedef ::GtkAccessibleTextInterface interface_type;

using GI_MEMBER_CHECK_CONFLICT(get_caret_position) = self;
using GI_MEMBER_CHECK_CONFLICT(get_contents) = self;
using GI_MEMBER_CHECK_CONFLICT(get_contents_at) = self;
using GI_MEMBER_CHECK_CONFLICT(get_default_attributes) = self;
using GI_MEMBER_CHECK_CONFLICT(get_extents) = self;
using GI_MEMBER_CHECK_CONFLICT(get_offset) = self;
using GI_MEMBER_CHECK_CONFLICT(set_caret_position) = self;
using GI_MEMBER_CHECK_CONFLICT(set_selection) = self;

struct TypeInitData;

protected:
GI_INLINE_DECL ~AccessibleTextInterfaceDef() = default;
static GI_INLINE_DECL void interface_init (gpointer interface_struct, gpointer );

// gboolean AccessibleText::get_attributes (GtkAccessibleText* self /*none*/, unsigned int offset, gsize* n_ranges, GtkAccessibleTextRange** ranges /*container,out,opt*/, char*** attribute_names /*full,out,opt*/, char*** attribute_values /*full,out,opt*/);
// gboolean AccessibleText::get_attributes (::GtkAccessibleText* self /*none*/, guint offset, gsize* n_ranges, ::GtkAccessibleTextRange*** ranges /*container,out,opt*/, char*** attribute_names /*full,out,opt*/, char*** attribute_values /*full,out,opt*/);
// SKIP; ranges out boxed array not supported (depth 2)

// unsigned int AccessibleText::get_caret_position (GtkAccessibleText* self /*none*/);
// guint AccessibleText::get_caret_position (::GtkAccessibleText* self /*none*/);
virtual guint get_caret_position_ () noexcept = 0;

// GBytes* /*full*/ AccessibleText::get_contents (GtkAccessibleText* self /*none*/, unsigned int start, unsigned int end);
// ::GBytes* /*full*/ AccessibleText::get_contents (::GtkAccessibleText* self /*none*/, guint start, guint end);
virtual GLib::Bytes get_contents_ (guint start, guint end) noexcept = 0;

// GBytes* /*full*/ AccessibleText::get_contents_at (GtkAccessibleText* self /*none*/, unsigned int offset, GtkAccessibleTextGranularity granularity, unsigned int* start, unsigned int* end);
// ::GBytes* /*full*/ AccessibleText::get_contents_at (::GtkAccessibleText* self /*none*/, guint offset, ::GtkAccessibleTextGranularity granularity, guint* start, guint* end);
virtual GLib::Bytes get_contents_at_ (guint offset, Gtk::AccessibleTextGranularity granularity, guint & start, guint & end) noexcept = 0;

// void AccessibleText::get_default_attributes (GtkAccessibleText* self /*none*/, char*** attribute_names /*full,out,opt*/, char*** attribute_values /*full,out,opt*/);
// void AccessibleText::get_default_attributes (::GtkAccessibleText* self /*none*/, char*** attribute_names /*full,out,opt*/, char*** attribute_values /*full,out,opt*/);
virtual void get_default_attributes_ (gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t> & attribute_names, gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t> & attribute_values) noexcept = 0;

// gboolean AccessibleText::get_extents (GtkAccessibleText* self /*none*/, unsigned int start, unsigned int end, graphene_rect_t* extents /*none*/);
// gboolean AccessibleText::get_extents (::GtkAccessibleText* self /*none*/, guint start, guint end, ::graphene_rect_t* extents /*none*/);
virtual bool get_extents_ (guint start, guint end, Graphene::Rect_Ref extents) noexcept = 0;

// gboolean AccessibleText::get_offset (GtkAccessibleText* self /*none*/, const graphene_point_t* point /*none*/, unsigned int* offset);
// gboolean AccessibleText::get_offset (::GtkAccessibleText* self /*none*/, const ::graphene_point_t* point /*none*/, guint* offset);
virtual bool get_offset_ (const Graphene::Point_Ref point, guint & offset) noexcept = 0;

// gboolean AccessibleText::get_selection (GtkAccessibleText* self /*none*/, gsize* n_ranges, GtkAccessibleTextRange** ranges /*container,out,opt*/);
// gboolean AccessibleText::get_selection (::GtkAccessibleText* self /*none*/, gsize* n_ranges, ::GtkAccessibleTextRange*** ranges /*container,out,opt*/);
// SKIP; ranges out boxed array not supported (depth 2)

// gboolean AccessibleText::set_caret_position (GtkAccessibleText* self /*none*/, unsigned int offset);
// gboolean AccessibleText::set_caret_position (::GtkAccessibleText* self /*none*/, guint offset);
virtual bool set_caret_position_ (guint offset) noexcept = 0;

// gboolean AccessibleText::set_selection (GtkAccessibleText* self /*none*/, gsize i, GtkAccessibleTextRange* range /*none*/);
// gboolean AccessibleText::set_selection (::GtkAccessibleText* self /*none*/, gsize i, ::GtkAccessibleTextRange* range /*none*/);
virtual bool set_selection_ (gsize i, Gtk::AccessibleTextRange_Ref range) noexcept = 0;


};

using AccessibleTextImpl = detail::InterfaceImpl<AccessibleTextInterfaceDef>;

class AccessibleTextInterfaceClassImpl: public detail::InterfaceClassImpl<AccessibleTextImpl>
{
friend class internal::AccessibleTextInterfaceDef;
typedef AccessibleTextInterfaceClassImpl self;
typedef detail::InterfaceClassImpl<AccessibleTextImpl> super;

protected:
using super::super;

// gboolean AccessibleText::get_attributes (GtkAccessibleText* self /*none*/, unsigned int offset, gsize* n_ranges, GtkAccessibleTextRange** ranges /*container,out,opt*/, char*** attribute_names /*full,out,opt*/, char*** attribute_values /*full,out,opt*/);
// gboolean AccessibleText::get_attributes (::GtkAccessibleText* self /*none*/, guint offset, gsize* n_ranges, ::GtkAccessibleTextRange*** ranges /*container,out,opt*/, char*** attribute_names /*full,out,opt*/, char*** attribute_values /*full,out,opt*/);
// SKIP; ranges out boxed array not supported (depth 2)

// unsigned int AccessibleText::get_caret_position (GtkAccessibleText* self /*none*/);
// guint AccessibleText::get_caret_position (::GtkAccessibleText* self /*none*/);
GI_INLINE_DECL guint get_caret_position_ () noexcept override;

// GBytes* /*full*/ AccessibleText::get_contents (GtkAccessibleText* self /*none*/, unsigned int start, unsigned int end);
// ::GBytes* /*full*/ AccessibleText::get_contents (::GtkAccessibleText* self /*none*/, guint start, guint end);
GI_INLINE_DECL GLib::Bytes get_contents_ (guint start, guint end) noexcept override;

// GBytes* /*full*/ AccessibleText::get_contents_at (GtkAccessibleText* self /*none*/, unsigned int offset, GtkAccessibleTextGranularity granularity, unsigned int* start, unsigned int* end);
// ::GBytes* /*full*/ AccessibleText::get_contents_at (::GtkAccessibleText* self /*none*/, guint offset, ::GtkAccessibleTextGranularity granularity, guint* start, guint* end);
GI_INLINE_DECL GLib::Bytes get_contents_at_ (guint offset, Gtk::AccessibleTextGranularity granularity, guint & start, guint & end) noexcept override;

// void AccessibleText::get_default_attributes (GtkAccessibleText* self /*none*/, char*** attribute_names /*full,out,opt*/, char*** attribute_values /*full,out,opt*/);
// void AccessibleText::get_default_attributes (::GtkAccessibleText* self /*none*/, char*** attribute_names /*full,out,opt*/, char*** attribute_values /*full,out,opt*/);
GI_INLINE_DECL void get_default_attributes_ (gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t> & attribute_names, gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t> & attribute_values) noexcept override;

// gboolean AccessibleText::get_extents (GtkAccessibleText* self /*none*/, unsigned int start, unsigned int end, graphene_rect_t* extents /*none*/);
// gboolean AccessibleText::get_extents (::GtkAccessibleText* self /*none*/, guint start, guint end, ::graphene_rect_t* extents /*none*/);
GI_INLINE_DECL bool get_extents_ (guint start, guint end, Graphene::Rect_Ref extents) noexcept override;

// gboolean AccessibleText::get_offset (GtkAccessibleText* self /*none*/, const graphene_point_t* point /*none*/, unsigned int* offset);
// gboolean AccessibleText::get_offset (::GtkAccessibleText* self /*none*/, const ::graphene_point_t* point /*none*/, guint* offset);
GI_INLINE_DECL bool get_offset_ (const Graphene::Point_Ref point, guint & offset) noexcept override;

// gboolean AccessibleText::get_selection (GtkAccessibleText* self /*none*/, gsize* n_ranges, GtkAccessibleTextRange** ranges /*container,out,opt*/);
// gboolean AccessibleText::get_selection (::GtkAccessibleText* self /*none*/, gsize* n_ranges, ::GtkAccessibleTextRange*** ranges /*container,out,opt*/);
// SKIP; ranges out boxed array not supported (depth 2)

// gboolean AccessibleText::set_caret_position (GtkAccessibleText* self /*none*/, unsigned int offset);
// gboolean AccessibleText::set_caret_position (::GtkAccessibleText* self /*none*/, guint offset);
GI_INLINE_DECL bool set_caret_position_ (guint offset) noexcept override;

// gboolean AccessibleText::set_selection (GtkAccessibleText* self /*none*/, gsize i, GtkAccessibleTextRange* range /*none*/);
// gboolean AccessibleText::set_selection (::GtkAccessibleText* self /*none*/, gsize i, ::GtkAccessibleTextRange* range /*none*/);
GI_INLINE_DECL bool set_selection_ (gsize i, Gtk::AccessibleTextRange_Ref range) noexcept override;


};


struct AccessibleTextInterfaceDef::TypeInitData
{
  GI_MEMBER_DEFINE(AccessibleTextInterfaceClassImpl, get_caret_position)
  GI_MEMBER_DEFINE(AccessibleTextInterfaceClassImpl, get_contents)
  GI_MEMBER_DEFINE(AccessibleTextInterfaceClassImpl, get_contents_at)
  GI_MEMBER_DEFINE(AccessibleTextInterfaceClassImpl, get_default_attributes)
  GI_MEMBER_DEFINE(AccessibleTextInterfaceClassImpl, get_extents)
  GI_MEMBER_DEFINE(AccessibleTextInterfaceClassImpl, get_offset)
  GI_MEMBER_DEFINE(AccessibleTextInterfaceClassImpl, set_caret_position)
  GI_MEMBER_DEFINE(AccessibleTextInterfaceClassImpl, set_selection)

template<typename SubClass>
constexpr static TypeInitData factory()
{
  using DefData = detail::DefinitionData<SubClass, TypeInitData>;
  return {
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, get_caret_position),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, get_contents),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, get_contents_at),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, get_default_attributes),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, get_extents),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, get_offset),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, set_caret_position),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, set_selection)
  };
}
};
} // namespace internal

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
