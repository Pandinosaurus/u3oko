#pragma once
/**
\file       vals.hpp
\author     Anton Erashov /eai/ skype: ytkoduff; emails: erashov@uuusoft.com, erashov2004@yandex.ru
\date       05.09.2018
\copyright  www.uuusoft.com
\project    uuu_module_storage
\brief      empty brief
*/

namespace modules { namespace uuu_storage { namespace appl { namespace impl { namespace storage { namespace test { namespace consts {

using consts_val_type = int;

const consts_val_type max_count_session_data_files          = 1 * 1024 * 1024;        //< ����������� ���������� ������ ������ � ����� ������
const consts_val_type max_size_session_data_file            = 256 * 1024 * 1024;      //< ������������ ������ ������ ����� ������ ������ � ������
const consts_val_type max_count_fragments_session_data_file = 32 * 1024;              //< ������������ ���������� ���������� � ����� ����� ������ ���������� ������

const std::string name_seance_info_file    = "seance_state";      //< ��� ����� ��� ���������� ��������� ������ ������ � �����.
const std::string name_ext_index_data_file = "indx";              //< ��� ����� ��� ���������� �������� ������ �� ������ ����� ������.
const std::string name_ext_data_file       = "bin";               //< ��� ����� ��� ���������� ������.

}}}}}}}      // namespace modules::uuu_storage::appl::impl::storage::test::consts
