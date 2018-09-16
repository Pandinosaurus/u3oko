#pragma once
/**
\file       out-channel-info.hpp
\author     Anton Erashov /eai/ skype: ytkoduff; emails: erashov@uuusoft.com, erashov2004@yandex.ru
\date       14.09.2018
\copyright  www.uuusoft.com
\project    uuu_ievents
\brief      empty brief
*/
namespace libs { namespace ievents { namespace props { namespace mix_mul { namespace consts {

const int max_input_points  = 16;      //< �������� ���������� ����� ����������
const int max_output_points = 16;      //< ???

}}}}}      // namespace libs::ievents::props::mix_mul::consts

namespace libs { namespace ievents { namespace props { namespace mix_mul {
/**
\brief  ��������� ��������� � ������ �������� ������ �������-��������� ������.
*/
struct OutChannelInfo
{
  OutChannelInfo ()
  {}

  std::vector<::libs::events::buff::EventBuffsInfo> srcs2dsts_;      //< ������ ������� ���������� ��� ������� ���������� ������ �������� �����.


  private:
  friend class boost::serialization::access;

  template <class Archive>
  void
  serialize (Archive& ar, const unsigned int /* file_version */)
  {
    ar& BOOST_SERIALIZATION_NVP (srcs2dsts_);
    return;
  }
};

}}}}      // namespace libs::ievents::props::mix_mul
