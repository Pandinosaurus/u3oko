#pragma once
/**
\file       action-for-list-logs.hpp
\author     Anton Erashov /eai/ skype: ytkoduff; emails: erashov@uuusoft.com, erashov2004@yandex.ru
\date       09.09.2018
\copyright  www.uuusoft.com
\project    uuu_ilog_events
\brief    
*/

namespace libs { namespace ilog_events { namespace events {
/**
\brief  ������������ ��������� ��������, ������� ����� ���������� ��� ������� ������ �����������
*/
enum struct ActionForListLogs
{
  get_sessions    = 0,      //< �������� ������ ������ �����������.
  delete_sessions = 1       //< ������� ��������� ������ ������ �����������.
};
/**
\brief
*/
inline std::string
to_str (const ActionForListLogs& _act)
{
  switch (_act)
    {
    case ActionForListLogs::get_sessions:
      return "get sessions";
    case ActionForListLogs::delete_sessions:
      return "delete sessions";
    default:
      UASSERT_SIGNAL ("unknown ActionForListLogs");
      break;
    }
  return "???";
}

}}}      // namespace libs::ilog_events::events
