#pragma once
/**
\file       test-indexer-vals.hpp
\author     Erashov Anton erashov2026@proton.me
\date       15.08.2018
*/

namespace modules::mstorage::appl::impl::indexer::test
{
inline constexpr std::size_t max_count_records_per_seance = 100 * 1024;   //<
inline constexpr std::size_t max_count_seances_per_object = 1 * 256;      //<
}   // namespace modules::mstorage::appl::impl::indexer::test
