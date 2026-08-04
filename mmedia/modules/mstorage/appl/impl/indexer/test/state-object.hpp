#pragma once
/**
\file       state-object.hpp
\author     Erashov Anton erashov2026@proton.me
\date       15.08.2018
*/

namespace modules::mstorage::appl::impl::indexer::test
{
class StateObject final
{
  public:
  // ext types
  using streams_type = std::list< StateStream >;
  using TypeObjectId = ::libs::events_storage::TypeObjectId;

  StateObject ()          = default;
  virtual ~StateObject () = default;

  bool
  operator== (const StateObject& lv) const
  {
    return id_.val_ == lv.id_.val_;
  }

  TypeObjectId id_;        //<
  streams_type streams_;   //<

  private:
  friend class boost::serialization::access;

#if (U3_USE_BOOST_SERIALIZTION)
  template< class Archive >
  void
  serialize (Archive& arh, const std::uint32_t /* file_version */)
  {
    arh& BOOST_SERIALIZATION_NVP (id_);
    arh& BOOST_SERIALIZATION_NVP (streams_);
  }
#endif
};
}   // namespace modules::mstorage::appl::impl::indexer::test

namespace boost
{
template<>
struct hash< ::modules::mstorage::appl::impl::indexer::test::StateObject > {
  size_t
  operator() (const ::modules::mstorage::appl::impl::indexer::test::StateObject& val) const noexcept
  {
    return hash< typename ::modules::mstorage::appl::impl::indexer::test::StateObject::TypeObjectId > () (val.id_);
  }
};
}   // namespace boost
