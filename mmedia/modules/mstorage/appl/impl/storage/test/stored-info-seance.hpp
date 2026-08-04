#pragma once
/**
\file       stored-info-seance.hpp
\author     Erashov Anton erashov2026@proton.me
\date       06.09.2018
*/

namespace modules::mstorage::appl::impl::storage::test
{
struct StoredInfoSeance final {
  StoredInfoSeance () = default;

  void
  reset ()
  {
    count_data_files_ = 0;
    id_.clear ();
  }

  IStorageImpl::seance_type id_;                     //<
  std::uint64_t             count_data_files_ = 0;   //<

  private:
  friend class boost::serialization::access;

#if (U3_USE_BOOST_SERIALIZTION)
  template< class Archive >
  void
  serialize (Archive& arh, const std::uint32_t /* file_version */)
  {
    arh& BOOST_SERIALIZATION_NVP (id_);
    arh& BOOST_SERIALIZATION_NVP (count_data_files_);
  }
#endif
};
}   // namespace modules::mstorage::appl::impl::storage::test
