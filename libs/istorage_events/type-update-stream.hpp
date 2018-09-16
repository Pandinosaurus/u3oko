#pragma once
/**
\file       type-update-stream.hpp
\author     Anton Erashov /eai/ skype: ytkoduff; emails: erashov@uuusoft.com, erashov2004@yandex.ru
\date       24.07.2018
\copyright  www.uuusoft.com
\project    uuu_istorage_events
\brief      empty brief
*/

namespace libs { namespace istorage_events {
/**
\brief  ������������ ��������� �������� ��� ������� ������.
*/
enum struct TypeUpdateStream
{
  open               = 0,      //< ������� �����.
  close              = 1,      //< ������� ������������.
  check_and_get_info = 2,      //< ��������� �� ������������� � ������� ��������� ������, ���� �� ����������.
  change             = 3       //< �������� ��������� �������������.
};
/**
\brief  
*/
inline std::string
to_str (const TypeUpdateStream& _val)
{
  switch (_val)
    {
    case TypeUpdateStream::open:
      return "open";
    case TypeUpdateStream::close:
      return "close";
    case TypeUpdateStream::check_and_get_info:
      return "check_and_get_info";
    case TypeUpdateStream::change:
      return "change";
    }
  XULOG_WARNING ("unknown TypeUpdateStream val, " << UUU_ICAST_INT (_val));
  return "xxx";
}

}}      // namespace libs::istorage_events
