#pragma once
/**
\file       type-direction-stream.hpp
\author     Anton Erashov /eai/ skype: ytkoduff; emails: erashov@uuusoft.com, erashov2004@yandex.ru
\date       24.07.2018
\copyright  www.uuusoft.com
\project    uuu_istorage_events
\brief      empty brief
*/

namespace libs { namespace istorage_events {
/**
brief   ������������ ��������� ����������� ������ �������
*/
enum struct TypeDirectionStream
{
  unknown  = 0,      //< �� ���������. ������������ ��� ������.
  forward  = 1,      //< �������� ������.
  backward = 2       //< �������� �����.
};


inline std::string
to_str (const TypeDirectionStream& _val)
{
  switch (_val)
    {
    case TypeDirectionStream::unknown:
      return "unknown";
    case TypeDirectionStream::backward:
      return "backward";
    case TypeDirectionStream::forward:
      return "forward";
    }
  XULOG_WARNING ("unknown type TypeDirectionStream, " << UUU_ICAST_INT (_val));
  return "xxx";
}

}}      // namespace libs::istorage_events
