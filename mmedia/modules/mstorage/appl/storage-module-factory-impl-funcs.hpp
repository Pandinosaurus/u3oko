#pragma once
/**
\file       storage-module-factory-impl-funcs.hpp
\date       11.08.2018
\author     Erashov Anton erashov2026@proton.me
*/

namespace modules::mstorage::appl
{
inline impl::IStorageImpl::ptr
get_storage_impl ()
{
  return std::make_shared< impl::storage::test::TestStorageImpl > ("test path2data");
}

inline impl::IIndexerImpl::ptr
get_indexer_impl ()
{
#if (U3_COMMERCIAL_PART == 1)
  return std::make_shared< impl::indexer::sqlite::SqliteIndexerImpl > ();
#else
  return std::make_shared< impl::indexer::test::TestIndexerImpl > ();
#endif
}
}   // namespace modules::mstorage::appl
