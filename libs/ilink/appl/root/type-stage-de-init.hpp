#pragma once
/**
\file       type-stage-de-init.hpp
\author     Anton Erashov /eai/ skype: ytkoduff; emails: erashov@uuusoft.com, erashov2004@yandex.ru
\date       20.07.2018
\copyright  www.uuusoft.com
\project    uuu_ilink
\brief      empty brief
*/

namespace libs { namespace ilink { namespace appl { namespace root {
/**
  \brief  ������ ���������� �������� ������.
  */
enum struct TypeStageDeInit
{
  send_stop_msg2allmost_all = 0,      //< ������ ������ - ������� ��������� ���� ���� ������� (�������� ��������  ������ �����������).
  wait_stop_data_module     = 1,      //< �������� ��������� ������ ��������� ������.
  wait_stop_gui_module      = 2,      //< �������� ��������� ������ GUI.
  wait_stop_rtp_module      = 3,      //< �������� ��������� ������ ???.
  wait_stop_storage_module  = 4,      //< �������� ��������� ������ ???.
  wait_stop_events_module   = 5,      //< �������� ��������� ������ �������.
  send_stop_msg2log_module  = 6,      //< ������� ��������� ���� ������ �����������.
  wait_stop_log_module      = 7,      //< �������� ��������� ������ �����������.
  wait_stop_http_module     = 8,      //< �������� ��������� ������ HTTP �������.
  done                      = 9       //< ��������� ��������.
};

}}}}      // namespace libs::ilink::appl::root
