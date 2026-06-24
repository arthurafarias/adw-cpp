#ifndef _GI_GLIB_SOURCE_EXTRA_DEF_HPP_
#define _GI_GLIB_SOURCE_EXTRA_DEF_HPP_

namespace gi
{
namespace repository
{
namespace GLib
{
namespace base
{
class SourceExtra : public GI_GLIB_SOURCE_BASE
{
  typedef GI_GLIB_SOURCE_BASE super_type;

public:
  using super_type::super_type;

  template<typename CallbackType>
  void set_callback(CallbackType callback) noexcept
  {
    auto callback_wrap_ = unwrap(std::move(callback), gi::scope_notified);
    g_source_set_callback(this->gobj_(),
        (GSourceFunc)(GCallback)&callback_wrap_->wrapper, callback_wrap_,
        &callback_wrap_->destroy);
  }
}; // class

#undef GI_GLIB_SOURCE_BASE
#define GI_GLIB_SOURCE_BASE base::SourceExtra

} // namespace base

} // namespace GLib

} // namespace repository

} // namespace gi

#endif
