#pragma once
/**
\file       stored-info-seance.hpp
\author     Anton Erashov /eai/ skype: ytkoduff; emails: erashov@uuusoft.com, erashov2004@yandex.ru
\date       06.09.2018
\copyright  www.uuusoft.com
\project    uuu_module_storage
\brief      empty brief
*/

namespace modules { namespace uuu_storage { namespace appl { namespace impl { namespace storage { namespace test {
/**
  \brief  ��������� ��� ����������� ����������, ����������� � ������ �������� ������.
  */
struct StoredInfoSeance
{
  StoredInfoSeance () :
    count_data_files_ (0)
  {}

  void
  reset ()
  {
    count_data_files_ = 0;
    id_.clear ();
    return;
  }

  IStorageImpl::seance_type id_;                    //< ������������� ������, ���������, ������������ ��� �������� ���������.
  int                       count_data_files_;      //< ���������� ������ � ������� � ������.


  private:
  friend class boost::serialization::access;

  template <class Archive>
  void
  serialize (Archive& ar, const unsigned int /* file_version */)
  {
    ar& BOOST_SERIALIZATION_NVP (id_);
    ar& BOOST_SERIALIZATION_NVP (count_data_files_);
    return;
  }
};

}}}}}}      // namespace modules::uuu_storage::appl::impl::storage::test
