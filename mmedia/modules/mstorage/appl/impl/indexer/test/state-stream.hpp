#pragma once
/**
\file       state-stream.hpp
\author     Erashov Anton erashov2026@proton.me
\date       15.08.2018
*/

namespace modules::mstorage::appl::impl::indexer::test
{
class StateStream
{
  public:
  // ext types
  using records_type     = std::list< StateRecord >;
  using stream_id_type   = ::libs::events_storage::stream_id_type;
  using time_stream_type = ::libs::events_storage::StreamTimes;

  explicit StateStream (const stream_id_type& id = ::libs::events_storage::consts::empty_stream_id) :
    id_ (id)
  {
  }

  virtual ~StateStream () = default;

  stream_id_type id_ { ::libs::events_storage::consts::empty_stream_id };   //<
  records_type   records_;                                                  //<

  const time_stream_type*
  get_start () const
  {
    if (records_.empty ())
    {
      return nullptr;
    }

    return &records_.front ().start_;
  }

  const time_stream_type*
  get_stop () const
  {
    if (records_.empty ())
    {
      return nullptr;
    }

    return &records_.back ().stop_;
  }

  private:
  friend class boost::serialization::access;

#if (U3_USE_BOOST_SERIALIZTION)
  template< class Archive >
  void
  serialize (Archive& arh, const std::uint32_t /* file_version */)
  {
    arh& BOOST_SERIALIZATION_NVP (records_);
    arh& BOOST_SERIALIZATION_NVP (id_);
  }
#endif
};
}   // namespace modules::mstorage::appl::impl::indexer::test
