#pragma once
/**
\file       type-convert-accuracy.hpp
\author     Anton Erashov /eai/ skype: ytkoduff; emails: erashov@uuusoft.com, erashov2004@yandex.ru
\date       29.07.2018
\copyright  www.uuusoft.com
\project    uuu_ievents
\brief      ��������� ��������� ��� ����������� ����������� ������� �������-���������� �������� �����.
*/

namespace libs { namespace ievents { namespace props { namespace videos { namespace generics { namespace convert {
/**
  \brief  ������������ ��������� ������� ��������������� � ����� ������ ��������.
  */
enum struct TypeConvertAccuracy
{
  usual = 0,      //< �� ���������.
  fast  = 1,      //< ����� �������.
  best  = 2       //< ����� ������� ��������� ��������.
};

}}}}}}      // namespace libs::ievents::props::videos::generics::convert
