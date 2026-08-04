#pragma once
/**
\file       state-record.hpp
\author     Erashov Anton erashov2026@proton.me
\date       15.08.2018
*/

namespace modules::mstorage::appl::impl::indexer::test
{
class StateRecord final
{
  public:
  // ext types
  using id_chunk_type    = IStorageImpl::id_chunk_type;
  using time_record_type = ::libs::events_storage::StreamTimes;

  StateRecord ()          = default;
  virtual ~StateRecord () = default;

  id_chunk_type    id_;      //<
  time_record_type start_;   //<
  time_record_type stop_;    //<

  private:
  friend class boost::serialization::access;

#if (U3_USE_BOOST_SERIALIZTION)
  template< class Archive >
  void
  serialize (Archive& arh, const std::uint32_t /* file_version */)
  {
    arh& BOOST_SERIALIZATION_NVP (id_);
    arh& BOOST_SERIALIZATION_NVP (start_);
    arh& BOOST_SERIALIZATION_NVP (stop_);
  }
#endif
};
}   // namespace modules::mstorage::appl::impl::indexer::test
