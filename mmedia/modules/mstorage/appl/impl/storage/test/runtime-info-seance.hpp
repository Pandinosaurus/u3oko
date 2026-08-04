#pragma once
/**
\file       runtime-info-seance.hpp
\author     Erashov Anton erashov2026@proton.me
\date       05.09.2018
*/

namespace modules::mstorage::appl::impl::storage::test
{
struct RuntimeInfoSeance final {
  // U3_ADD_DELETE_MOVE_COPY (RuntimeInfoSeance)

  RuntimeInfoSeance () = default;

  ~RuntimeInfoSeance ()
  {
    reset ();
  }

  RuntimeInfoSeance (const RuntimeInfoSeance&)            = delete;
  RuntimeInfoSeance& operator= (const RuntimeInfoSeance&) = delete;

  RuntimeInfoSeance (RuntimeInfoSeance&& rhv)
  {
    std::swap (state_, rhv.state_);
    std::swap (cursor_, rhv.cursor_);
    std::swap (index_state_, rhv.index_state_);
    std::swap (data_file_, rhv.data_file_);
    std::swap (size_data_file_, rhv.size_data_file_);
  }

  void
  reset ()
  {
    state_.reset ();
    cursor_.reset ();
    index_state_.reset ();
    data_file_.close ();
    size_data_file_ = 0;
  }

  StoredInfoSeance            state_;                //<
  IStorageImpl::id_chunk_type cursor_;               //<
  IndexDataFileState          index_state_;          //<
  std::ofstream               data_file_;            //<
  std::uint64_t               size_data_file_ = 0;   //<
};
}   // namespace modules::mstorage::appl::impl::storage::test
