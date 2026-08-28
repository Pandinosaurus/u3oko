#pragma once
/**
\file       vgen-mops-syn.hpp
\date       01.08.2017
\author     Erashov Anton erashov2026@proton.me
*/

namespace dlls::gens::vgen_mops::syn
{
using off_buf2info_type   = std::pair< ::utils::dbufs::video::consts::offs::off_buf_type, ::libs::events_base::props::videos::generic::morph::MorphBuffInfo >;
using VideoMorphologyProp = ::libs::events_base::props::videos::generic::morph::VideoMorphologyProp;
using TransformInfo       = ::libs::icore::impl::base::obj::dll::TransformInfo;
using CallInterfInfo      = ::libs::icore::impl::base::obj::dll::CallInterfInfo;
using FilterInfo          = ::libs::icore::impl::base::obj::FilterInfo;
using ConnectInfo         = ::libs::icore::impl::base::obj::ConnectInfo;
using ProxyBuf            = ::libs::optim::io::ProxyBuf;
using IEvent              = ::libs::events::IEvent;
using AddEvent2EventsMsg  = ::libs::events_msg::events::AddEvent2EventsMsg;
}   // namespace dlls::gens::vgen_mops::syn
