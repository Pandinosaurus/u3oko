#pragma once
/**
\file       type-mem-var.hpp
\author     Anton Erashov /eai/ skype: ytkoduff; emails: erashov@uuusoft.com, erashov2004@yandex.ru
\date       12.08.2018
\copyright  www.uuusoft.com
\project    uuu_dbuffs
\brief      empty brief.
*/

namespace utils { namespace dbuffs {
/**
  \brief  ������������ ����� ����������, ������������ ��� �������� ��������� ������.
  */
enum struct TypeMemVar
{
  size_data   = 0,      //< ������ ������ � ������.
  offset_data = 1,      //< �������� ������ ������������ ������ ������.
  size_buffer = 2,      //< ������ ������ ������ ���������� ��� �����.
  max_bound   = 4       //< ������������ �������� ������� ���� ��� ����������� �������� ��� ����������.
};

}}      // namespace utils::dbuffs
