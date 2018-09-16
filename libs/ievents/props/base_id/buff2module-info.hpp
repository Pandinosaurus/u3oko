#pragma once
/**
\file       buff2module-info.hpp
\author     Anton Erashov /eai/ skype: ytkoduff; emails: erashov@uuusoft.com, erashov2004@yandex.ru
\date       14.09.2018
\copyright  www.uuusoft.com
\project    uuu_ievents
\brief      empty brief
*/

namespace libs { namespace ievents { namespace props { namespace base_id {
// syn
using id_link_module_type = std::string;
using source_name_type    = std::string;
/**
\brief  ����������, ����� ������� � ���� ���������� ���������� ����� � �������.
*/
struct Buff2ModuleInfo
{
  // ext types
  UUU_THIS_TYPE_HAS_POINTERS_TO_SELF (Buff2ModuleInfo);

  Buff2ModuleInfo () :
    fps_ (0.0f),
    indx_buff_ (::utils::dbuffs::video::consts::offs::invalid)
  {}

  float               fps_;            //< ������� �������� ������. 0 - �� ������������.
  off_buff_type       indx_buff_;      //< ������ ������-���������.
  id_link_module_type module_;         //< ������������� ������, � ������� ��������� �������� ������ �����.

  private:
  friend class boost::serialization::access;

  template <class Archive>
  void
  serialize (Archive& ar, const unsigned int /* file_version */)
  {
    ar& BOOST_SERIALIZATION_NVP (fps_);
    ar& BOOST_SERIALIZATION_NVP (indx_buff_);
    ar& BOOST_SERIALIZATION_NVP (module_);
    return;
  }
};

}}}}      // namespace libs::ievents::props::base_id
