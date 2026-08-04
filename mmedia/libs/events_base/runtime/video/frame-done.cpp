/**
\file       frame-done.cpp
\date       01.05.2018
*/
#include "../../events-base-includes_int.hpp"
#include "frame-done.hpp"

namespace libs::events_base::runtime::video
{
FrameDone::FrameDone (const Acessor& pha)
{
}


auto
FrameDone::get_mid_int () const -> const ::libs::events::IEvent::hid_type&
{
  return FrameDone::gen_get_mid ();
}


auto
FrameDone::clone_int (const ::libs::events::Deeps& deep) const -> ::libs::events::IEvent::ptr
{
  return ::libs::events::deep_clone< FrameDone > (this, deep);
}


void
FrameDone::copy_int (const IEvent::craw_ptr src)
{
  const auto* dsrc = ::libs::iproperties::helpers::dbg_check_copy_event< FrameDone > (src);
  super::copy_int (src);
}

#if (U3_USE_BOOST_SERIALIZTION)
template< class Archive >
void
FrameDone::serialize (Archive& arh, const std::uint32_t /* file_version */)
{
  arh& U3_BOOST_SERIALIZE_MAKE_NVP ("olibsoevents_baseoruntimeoRuntimeEvent", super);

  self_correct ();
}
#endif
}   // namespace libs::events_base::runtime::video

U3_BOOST_CLASS_EXPORT_IMPLEMENT (::libs::events_base::runtime::video::FrameDone);
U3_BOOST_ADD_SERIALIZE_ARCH (::libs::events_base::runtime::video::FrameDone);
