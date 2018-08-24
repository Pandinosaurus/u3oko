#pragma once
/**
\file       type-action-stream.hpp
\author     Anton Erashov /eai/ skype: ytkoduff; emails: erashov@uuusoft.com, erashov2004@yandex.ru
\date       21.08.2018
\copyright  www.uuusoft.com
\project    uuu_istorage_events
\brief      empty brief
*/

namespace libs { namespace istorage_events {
/**
  \brief  ������������ ��������� �������� � ������ ������.
  */
enum struct TypeActionStream
{
  read         = 0,      //< ����� ����� �������� ������ ������.
  write        = 1,      //< ����� ����� �������� ������ ������.
  modification = 2       //< ����� ����� �������� ��������/������/������.
};

inline std::string
to_str (const TypeActionStream& _val)
{
  switch (_val)
    {
    case TypeActionStream::read:
      return "read";
    case TypeActionStream::write:
      return "write";
    case TypeActionStream::modification:
      return "modification";
    }
  XULOG_WARNING ("unknown TypeActionStream val, " << UUU_ICAST_INT (_val));
  return "xxx";
}

}}      // namespace libs::istorage_events
