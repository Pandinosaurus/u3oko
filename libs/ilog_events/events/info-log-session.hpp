#pragma once
/**
\file       info-log-session.hpp
\author     Anton Erashov /eai/ skype: ytkoduff; emails: erashov@uuusoft.com, erashov2004@yandex.ru
\date       09.09.2018
\copyright  www.uuusoft.com
\project    uuu_ilog_events
\brief    
*/

namespace libs { namespace ilog_events { namespace events {
/**
\brief  ???
*/
struct InfoLogSession
{
  // ext types
  using data_session_type = std::string;      //< ������ ������.

  InfoLogSession () :
    off_ (0), size_ (0)
  {}


  template <class Archive>
  void
  serialize (Archive& ar, const unsigned int /* file_version */)
  {
    ar& BOOST_SERIALIZATION_NVP (data_);
    ar& BOOST_SERIALIZATION_NVP (off_);
    ar& BOOST_SERIALIZATION_NVP (size_);
    return;
  }

  data_session_type data_;      //< �������� ������ ������.
  int               off_;       //< �������� ��������� � ������.
  int               size_;      //< ������������ ������ ��������� � ������. 0 - �� �����������.
};

}}}      // namespace libs::ilog_events::events
