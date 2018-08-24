#pragma once
/**
\file       type-time-stream.hpp
\author     Anton Erashov /eai/ skype: ytkoduff; emails: erashov@uuusoft.com, erashov2004@yandex.ru
\date       12.08.2018
\copyright  www.uuusoft.com
\project    uuu_istorage_events
\brief      empty brief
*/

namespace libs { namespace istorage_events {
/**
  \brief  
  */
enum struct TypeTimeStream
{
  exactly  = 0,      //< ������ �����.
  oldest   = 1,      //< ����� ������ �����. �.�. ��� ������ ������ ������ �������.
  youngest = 2       //< ����� ������ � �������. �.�. ��� ������ ������ ������ �������.
};


inline std::string
to_str (const TypeTimeStream& _val)
{
  switch (_val)
    {
    case TypeTimeStream::exactly:
      return "exactly";
    case TypeTimeStream::oldest:
      return "oldest";
    case TypeTimeStream::youngest:
      return "youngest";
    }
  XULOG_WARNING ("unknown type TypeTimeStream, " << UUU_ICAST_INT (_val));
  return "xxx";
}

}}      // namespace libs::istorage_events
