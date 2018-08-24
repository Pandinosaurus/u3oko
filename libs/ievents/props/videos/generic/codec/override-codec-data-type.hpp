#pragma once
/**
\file       override-codec-data-type.hpp
\author     Anton Erashov /eai/ skype: ytkoduff; emails: erashov@uuusoft.com, erashov2004@yandex.ru
\date       29.07.2018
\copyright  www.uuusoft.com
\project    uuu_ievents
\brief      ���������� ������� �� ���������� �����������.
*/

namespace libs { namespace ievents { namespace props { namespace videos { namespace generics { namespace codec {
/**
\brief  ������������ ��������� ��������� ������ ������ ��� �����������.
*/
enum struct OverrideCodecDataType
{
  allways_write      = 0,      //< ������ ������������ ������� ������.
  write_if_not_empty = 1,      //< ������������ ������ ������� ������.
  write_if_empty     = 2       //< ������ ������, ������ ���� ����� ���������� ������.
};

}}}}}}      // namespace libs::ievents::props::videos::generics::codec
