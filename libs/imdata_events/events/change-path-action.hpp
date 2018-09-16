//This is an independent project of an individual developer. Dear PVS-Studio, please check it.
//PVS-Studio Static Code Analyzer for C, C++ and C#: http://www.viva64.com
#pragma once
/**
\file       change-path-action.hpp
\date       14.09.2018
\author     Anton Erashov /eai/ skype: ytkoduff; emails: erashov@uuusoft.com, erashov2004@yandex.ru
\copyright  www.uuusoft.com
\project    uuu_imdata_events
\brief      empty brief
*/

namespace libs { namespace imdata_events { namespace events {
/**
\brief  ������������ ��������� ��������, ������� ����� ���������� ��� ������� ������ ��������� ������.
*/
enum struct ChangePathAction
{
  get    = 0,      //< �������� ������ �������� ������ �� ��������� ������.
  add    = 1,      //< �������� ��������� ������ � ��������.
  remove = 2       //< ������� ��������� ������ �� ��������.
};

}}}      // namespace libs::imdata_events::events
