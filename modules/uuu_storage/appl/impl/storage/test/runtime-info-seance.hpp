#pragma once
/**
\file       runtime-info-seance.hpp
\author     Anton Erashov /eai/ skype: ytkoduff; emails: erashov@uuusoft.com, erashov2004@yandex.ru
\date       05.09.2018
\copyright  www.uuusoft.com
\project    uuu_module_storage
\brief      empty brief
*/

namespace modules { namespace uuu_storage { namespace appl { namespace impl { namespace storage { namespace test {
/**
  \brief  ��������� ��� ����������� ����������, ����������� � ������ �������� ������.
  */
struct RuntimeInfoSeance
{
  RuntimeInfoSeance () :
    size_data_file_ (0)
  {}

  void
  reset ()
  {
    state_.reset ();
    cursor_.reset ();
    index_state_.reset ();
    data_file_.close ();
    size_data_file_ = 0;
    return;
  }

  StoredInfoSeance            state_;               //< �������� ��������� ����� ������ ��������� ������.
  IStorageImpl::id_chunk_type cursor_;              //< ��������� �� ������� ������� ������/������, ��������� � ������� ��������� ������.
  IndexDataFileState          index_state_;         //< ������� ��������� ���������� ��������� � ������� ������ ������ ������� ������ ��������� ������.
  std::ofstream               data_file_;           //< �������� ���� ������ ������ ��������� ������.
  std::size_t                 size_data_file_;      //< ������� ������ ����� ������ ������. ������������ ��� �������� �������� �������� ������������ ���������.
};

}}}}}}      // namespace modules::uuu_storage::appl::impl::storage::test
