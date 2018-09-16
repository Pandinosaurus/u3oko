#pragma once
/**
\file       syn_types.hpp
\author     Anton Erashov /eai/ skype: ytkoduff; emails: erashov@uuusoft.com, erashov2004@yandex.ru
\date       01.01.2017
\copyright  www.uuusoft.com
\project    uuu_detect_move
\brief      ���������� ����������� ��������� ��� ����� ������� ������.
*/

namespace dlls { namespace detectors { namespace detect_move {
//  syn
using ::libs::optim::io::MCallInfo;
using ::libs::optim::mcalls::CallerImpl;
using ::libs::optim::mcalls::InfoMFunct;
using ::libs::icore::impl::var1::obj::FilterInfo;
using ::libs::icore::impl::var1::obj::dll::TransformInfo;
using ::libs::icore::impl::var1::obj::PointFilter;
using ::libs::icore::impl::var1::obj::dll::CallInterfInfo;
using ::libs::icore::impl::var1::obj::ConnectInfo;
using ::utils::dbuffs::video::IVideoBuff;
using ::utils::dbuffs::video::consts::offs::off_buff_type;
using ::libs::events::IEvent;
using ::libs::ievents::props::videos::gens::diff::VideoDiffProp;
using ::libs::ievents::props::videos::generic::morph::VideoMorphologyProp;
using ::libs::ievents::props::videos::generic::morph::MorphBuffInfo;
using ::libs::ievents::props::videos::generic::morph::MorphOperationParams;
using ::libs::ievents::props::videos::generic::morph::MorphOperationType;
using ::libs::ievents::props::videos::gens::diff::InfoBuffVideoDiffProp;
using ::libs::ievents::props::videos::generics::detect::VideoDetectProp;
using ::dlls::gens::vgen_diff::lib::DiffImpl;
using ::dlls::gens::vgen_mops::lib::MopsImpl;

using TBuff2Info   = std::pair<off_buff_type, InfoBuffVideoDiffProp>;
using OffBuff2Info = std::pair<off_buff_type, ::libs::ievents::props::videos::generic::morph::MorphBuffInfo>;

}}}      // namespace dlls::detectors::detect_move
