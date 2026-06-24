// AUTO-GENERATED

#ifndef _GI_ADW_BOTTOMSHEET_HPP_
#define _GI_ADW_BOTTOMSHEET_HPP_


namespace gi {

namespace repository {

namespace Adw {

class Swipeable;

class BottomSheet;

namespace base {


#define GI_ADW_BOTTOMSHEET_BASE base::BottomSheetBase
class BottomSheetBase : public Gtk::Widget
{
typedef Gtk::Widget super_type;
public:
typedef ::AdwBottomSheet BaseObjectType;

BottomSheetBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return adw_bottom_sheet_get_type(); } 

GI_INLINE_DECL Adw::Swipeable interface_ (gi::interface_tag<Adw::Swipeable>);

GI_INLINE_DECL operator Adw::Swipeable ();

// GtkWidget* /*none*/ adw_bottom_sheet_new ();
// ::AdwBottomSheet* /*none*/ adw_bottom_sheet_new ();
static GI_INLINE_DECL Adw::BottomSheet new_ () noexcept;

// float adw_bottom_sheet_get_align (AdwBottomSheet* self /*none*/);
// gfloat adw_bottom_sheet_get_align (::AdwBottomSheet* self /*none*/);
GI_INLINE_DECL gfloat get_align () noexcept;

// GtkWidget* /*none,nullable*/ adw_bottom_sheet_get_bottom_bar (AdwBottomSheet* self /*none*/);
// ::GtkWidget* /*none,nullable*/ adw_bottom_sheet_get_bottom_bar (::AdwBottomSheet* self /*none*/);
GI_INLINE_DECL Gtk::Widget get_bottom_bar () noexcept;

// int adw_bottom_sheet_get_bottom_bar_height (AdwBottomSheet* self /*none*/);
// gint adw_bottom_sheet_get_bottom_bar_height (::AdwBottomSheet* self /*none*/);
GI_INLINE_DECL gint get_bottom_bar_height () noexcept;

// gboolean adw_bottom_sheet_get_can_close (AdwBottomSheet* self /*none*/);
// gboolean adw_bottom_sheet_get_can_close (::AdwBottomSheet* self /*none*/);
GI_INLINE_DECL bool get_can_close () noexcept;

// gboolean adw_bottom_sheet_get_can_open (AdwBottomSheet* self /*none*/);
// gboolean adw_bottom_sheet_get_can_open (::AdwBottomSheet* self /*none*/);
GI_INLINE_DECL bool get_can_open () noexcept;

// GtkWidget* /*none,nullable*/ adw_bottom_sheet_get_content (AdwBottomSheet* self /*none*/);
// ::GtkWidget* /*none,nullable*/ adw_bottom_sheet_get_content (::AdwBottomSheet* self /*none*/);
GI_INLINE_DECL Gtk::Widget get_content () noexcept;

// gboolean adw_bottom_sheet_get_full_width (AdwBottomSheet* self /*none*/);
// gboolean adw_bottom_sheet_get_full_width (::AdwBottomSheet* self /*none*/);
GI_INLINE_DECL bool get_full_width () noexcept;

// gboolean adw_bottom_sheet_get_modal (AdwBottomSheet* self /*none*/);
// gboolean adw_bottom_sheet_get_modal (::AdwBottomSheet* self /*none*/);
GI_INLINE_DECL bool get_modal () noexcept;

// gboolean adw_bottom_sheet_get_open (AdwBottomSheet* self /*none*/);
// gboolean adw_bottom_sheet_get_open (::AdwBottomSheet* self /*none*/);
GI_INLINE_DECL bool get_open () noexcept;

// gboolean adw_bottom_sheet_get_reveal_bottom_bar (AdwBottomSheet* self /*none*/);
// gboolean adw_bottom_sheet_get_reveal_bottom_bar (::AdwBottomSheet* self /*none*/);
GI_INLINE_DECL bool get_reveal_bottom_bar () noexcept;

// GtkWidget* /*none,nullable*/ adw_bottom_sheet_get_sheet (AdwBottomSheet* self /*none*/);
// ::GtkWidget* /*none,nullable*/ adw_bottom_sheet_get_sheet (::AdwBottomSheet* self /*none*/);
GI_INLINE_DECL Gtk::Widget get_sheet () noexcept;

// int adw_bottom_sheet_get_sheet_height (AdwBottomSheet* self /*none*/);
// gint adw_bottom_sheet_get_sheet_height (::AdwBottomSheet* self /*none*/);
GI_INLINE_DECL gint get_sheet_height () noexcept;

// gboolean adw_bottom_sheet_get_show_drag_handle (AdwBottomSheet* self /*none*/);
// gboolean adw_bottom_sheet_get_show_drag_handle (::AdwBottomSheet* self /*none*/);
GI_INLINE_DECL bool get_show_drag_handle () noexcept;

// void adw_bottom_sheet_set_align (AdwBottomSheet* self /*none*/, float align);
// void adw_bottom_sheet_set_align (::AdwBottomSheet* self /*none*/, gfloat align);
GI_INLINE_DECL void set_align (gfloat align) noexcept;

// void adw_bottom_sheet_set_bottom_bar (AdwBottomSheet* self /*none*/, GtkWidget* bottom_bar /*none,nullable*/);
// void adw_bottom_sheet_set_bottom_bar (::AdwBottomSheet* self /*none*/, ::GtkWidget* bottom_bar /*none,nullable*/);
GI_INLINE_DECL void set_bottom_bar (Gtk::Widget bottom_bar) noexcept;
GI_INLINE_DECL void set_bottom_bar () noexcept;

// void adw_bottom_sheet_set_can_close (AdwBottomSheet* self /*none*/, gboolean can_close);
// void adw_bottom_sheet_set_can_close (::AdwBottomSheet* self /*none*/, gboolean can_close);
GI_INLINE_DECL void set_can_close (gboolean can_close) noexcept;

// void adw_bottom_sheet_set_can_open (AdwBottomSheet* self /*none*/, gboolean can_open);
// void adw_bottom_sheet_set_can_open (::AdwBottomSheet* self /*none*/, gboolean can_open);
GI_INLINE_DECL void set_can_open (gboolean can_open) noexcept;

// void adw_bottom_sheet_set_content (AdwBottomSheet* self /*none*/, GtkWidget* content /*none,nullable*/);
// void adw_bottom_sheet_set_content (::AdwBottomSheet* self /*none*/, ::GtkWidget* content /*none,nullable*/);
GI_INLINE_DECL void set_content (Gtk::Widget content) noexcept;
GI_INLINE_DECL void set_content () noexcept;

// void adw_bottom_sheet_set_full_width (AdwBottomSheet* self /*none*/, gboolean full_width);
// void adw_bottom_sheet_set_full_width (::AdwBottomSheet* self /*none*/, gboolean full_width);
GI_INLINE_DECL void set_full_width (gboolean full_width) noexcept;

// void adw_bottom_sheet_set_modal (AdwBottomSheet* self /*none*/, gboolean modal);
// void adw_bottom_sheet_set_modal (::AdwBottomSheet* self /*none*/, gboolean modal);
GI_INLINE_DECL void set_modal (gboolean modal) noexcept;

// void adw_bottom_sheet_set_open (AdwBottomSheet* self /*none*/, gboolean open);
// void adw_bottom_sheet_set_open (::AdwBottomSheet* self /*none*/, gboolean open);
GI_INLINE_DECL void set_open (gboolean open) noexcept;

// void adw_bottom_sheet_set_reveal_bottom_bar (AdwBottomSheet* self /*none*/, gboolean reveal);
// void adw_bottom_sheet_set_reveal_bottom_bar (::AdwBottomSheet* self /*none*/, gboolean reveal);
GI_INLINE_DECL void set_reveal_bottom_bar (gboolean reveal) noexcept;

// void adw_bottom_sheet_set_sheet (AdwBottomSheet* self /*none*/, GtkWidget* sheet /*none,nullable*/);
// void adw_bottom_sheet_set_sheet (::AdwBottomSheet* self /*none*/, ::GtkWidget* sheet /*none,nullable*/);
GI_INLINE_DECL void set_sheet (Gtk::Widget sheet) noexcept;
GI_INLINE_DECL void set_sheet () noexcept;

// void adw_bottom_sheet_set_show_drag_handle (AdwBottomSheet* self /*none*/, gboolean show_drag_handle);
// void adw_bottom_sheet_set_show_drag_handle (::AdwBottomSheet* self /*none*/, gboolean show_drag_handle);
GI_INLINE_DECL void set_show_drag_handle (gboolean show_drag_handle) noexcept;

gi::property_proxy<gfloat, base::BottomSheetBase> property_align()
{ return gi::property_proxy<gfloat, base::BottomSheetBase> (*this, "align"); }
const gi::property_proxy<gfloat, base::BottomSheetBase> property_align() const
{ return gi::property_proxy<gfloat, base::BottomSheetBase> (*this, "align"); }

gi::property_proxy<Gtk::Widget, base::BottomSheetBase> property_bottom_bar()
{ return gi::property_proxy<Gtk::Widget, base::BottomSheetBase> (*this, "bottom-bar"); }
const gi::property_proxy<Gtk::Widget, base::BottomSheetBase> property_bottom_bar() const
{ return gi::property_proxy<Gtk::Widget, base::BottomSheetBase> (*this, "bottom-bar"); }

gi::property_proxy<gint, base::BottomSheetBase> property_bottom_bar_height()
{ return gi::property_proxy<gint, base::BottomSheetBase> (*this, "bottom-bar-height"); }
const gi::property_proxy<gint, base::BottomSheetBase> property_bottom_bar_height() const
{ return gi::property_proxy<gint, base::BottomSheetBase> (*this, "bottom-bar-height"); }

gi::property_proxy<bool, base::BottomSheetBase> property_can_close()
{ return gi::property_proxy<bool, base::BottomSheetBase> (*this, "can-close"); }
const gi::property_proxy<bool, base::BottomSheetBase> property_can_close() const
{ return gi::property_proxy<bool, base::BottomSheetBase> (*this, "can-close"); }

gi::property_proxy<bool, base::BottomSheetBase> property_can_open()
{ return gi::property_proxy<bool, base::BottomSheetBase> (*this, "can-open"); }
const gi::property_proxy<bool, base::BottomSheetBase> property_can_open() const
{ return gi::property_proxy<bool, base::BottomSheetBase> (*this, "can-open"); }

gi::property_proxy<Gtk::Widget, base::BottomSheetBase> property_content()
{ return gi::property_proxy<Gtk::Widget, base::BottomSheetBase> (*this, "content"); }
const gi::property_proxy<Gtk::Widget, base::BottomSheetBase> property_content() const
{ return gi::property_proxy<Gtk::Widget, base::BottomSheetBase> (*this, "content"); }

gi::property_proxy<bool, base::BottomSheetBase> property_full_width()
{ return gi::property_proxy<bool, base::BottomSheetBase> (*this, "full-width"); }
const gi::property_proxy<bool, base::BottomSheetBase> property_full_width() const
{ return gi::property_proxy<bool, base::BottomSheetBase> (*this, "full-width"); }

gi::property_proxy<bool, base::BottomSheetBase> property_modal()
{ return gi::property_proxy<bool, base::BottomSheetBase> (*this, "modal"); }
const gi::property_proxy<bool, base::BottomSheetBase> property_modal() const
{ return gi::property_proxy<bool, base::BottomSheetBase> (*this, "modal"); }

gi::property_proxy<bool, base::BottomSheetBase> property_open()
{ return gi::property_proxy<bool, base::BottomSheetBase> (*this, "open"); }
const gi::property_proxy<bool, base::BottomSheetBase> property_open() const
{ return gi::property_proxy<bool, base::BottomSheetBase> (*this, "open"); }

gi::property_proxy<bool, base::BottomSheetBase> property_reveal_bottom_bar()
{ return gi::property_proxy<bool, base::BottomSheetBase> (*this, "reveal-bottom-bar"); }
const gi::property_proxy<bool, base::BottomSheetBase> property_reveal_bottom_bar() const
{ return gi::property_proxy<bool, base::BottomSheetBase> (*this, "reveal-bottom-bar"); }

gi::property_proxy<Gtk::Widget, base::BottomSheetBase> property_sheet()
{ return gi::property_proxy<Gtk::Widget, base::BottomSheetBase> (*this, "sheet"); }
const gi::property_proxy<Gtk::Widget, base::BottomSheetBase> property_sheet() const
{ return gi::property_proxy<Gtk::Widget, base::BottomSheetBase> (*this, "sheet"); }

gi::property_proxy<gint, base::BottomSheetBase> property_sheet_height()
{ return gi::property_proxy<gint, base::BottomSheetBase> (*this, "sheet-height"); }
const gi::property_proxy<gint, base::BottomSheetBase> property_sheet_height() const
{ return gi::property_proxy<gint, base::BottomSheetBase> (*this, "sheet-height"); }

gi::property_proxy<bool, base::BottomSheetBase> property_show_drag_handle()
{ return gi::property_proxy<bool, base::BottomSheetBase> (*this, "show-drag-handle"); }
const gi::property_proxy<bool, base::BottomSheetBase> property_show_drag_handle() const
{ return gi::property_proxy<bool, base::BottomSheetBase> (*this, "show-drag-handle"); }

// (signal) void close-attempt ();
// (signal) void close-attempt ();
gi::signal_proxy<void(Adw::BottomSheet)> signal_close_attempt()
{ return gi::signal_proxy<void(Adw::BottomSheet)> (*this, "close-attempt"); }

}; // class

} // namespace base

} // namespace Adw

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<adw/bottomsheet_extra_def.hpp>)
#include <adw/bottomsheet_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<adw/bottomsheet_extra.hpp>)
#include <adw/bottomsheet_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Adw {

class BottomSheet : public GI_ADW_BOTTOMSHEET_BASE
{ typedef GI_ADW_BOTTOMSHEET_BASE super_type; using super_type::super_type; };

} // namespace Adw

template<> struct declare_cpptype_of<::AdwBottomSheet>
{ typedef Adw::BottomSheet type; }; 

} // namespace repository

} // namespace gi

#include "swipeable.hpp"

namespace gi {

namespace repository {

namespace Adw {

namespace impl {

namespace internal {


class BottomSheetClassDef
{
typedef BottomSheetClassDef self;
public:
typedef Adw::BottomSheet instance_type;
typedef ::AdwBottomSheetClass class_type;


struct TypeInitData;

protected:
GI_INLINE_DECL ~BottomSheetClassDef() = default;
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );


};

GI_CLASS_IMPL_BEGIN


class BottomSheetClass: public detail::ClassTemplate<Adw::impl::internal::BottomSheetClassDef, Gtk::impl::internal::WidgetClass, Adw::impl::internal::SwipeableInterfaceClassImpl>
{
friend class internal::BottomSheetClassDef;
typedef BottomSheetClass self;
typedef detail::ClassTemplate<Adw::impl::internal::BottomSheetClassDef, Gtk::impl::internal::WidgetClass, Adw::impl::internal::SwipeableInterfaceClassImpl> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types
typedef Adw::impl::internal::SwipeableInterfaceClassImpl AdwSwipeableInterface_type;



};


struct BottomSheetClassDef::TypeInitData
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

using BottomSheetImpl = detail::ObjectImpl<BottomSheet, internal::BottomSheetClass>;

} // namespace impl

} // namespace Adw

} // namespace repository

} // namespace gi

#endif
