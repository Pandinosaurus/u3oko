/**
\file       block-mem.cpp
\date       01.08.2017
\author     Erashov Anton erashov2026@proton.me
*/
#include "../mems-includes_int.hpp"
#include "block-mem.hpp"

namespace utils::mems::impl
{
BlockMem::BlockMem (const size_type size)
{
  U3_THROW_IFN (size > 0, "BlockMem, zero size for alloc");
  details::u3alloc (::libs::utility::casts::reinterpret_cast_helper< void** > (&buf_), size);
  U3_THROW_IFN (buf_, "failed alloc buf");
  mem_size_ = size;
}


BlockMem::~BlockMem ()
{
  if (buf_)
  {
    details::u3free (::libs::utility::casts::reinterpret_cast_helper< void** > (&buf_));
    buf_      = nullptr;
    mem_size_ = 0;
  }
}


auto
BlockMem::get_int () -> std::uint8_t*
{
  U3_ASSERT (buf_);
  return buf_;
}


auto
BlockMem::get_int () const -> const std::uint8_t*
{
  U3_ASSERT (buf_);
  return buf_;
}


auto
BlockMem::get_capacity_int () const -> BlockMem::size_type
{
  return mem_size_;
}


auto
BlockMem::get_size_int () const -> BlockMem::size_type
{
  return data_size_;
}


void
BlockMem::set_size_int (BlockMem::size_type data_size)
{
  U3_ASSERT (buf_);
  U3_ASSERT (data_size_ <= mem_size_);
  U3_ASSERT (data_size <= mem_size_);
  data_size_ = data_size;
}


void
BlockMem::resize_int (const BlockMem::size_type size)
{
  if (size <= mem_size_)
  {
    data_size_ = 0;
    return;
  }

  mem_size_  = 0;
  data_size_ = 0;

  details::u3realloc (::libs::utility::casts::reinterpret_cast_helper< void** > (&buf_), size);
  U3_THROW_IFN (buf_, "failed alloc buf");
  mem_size_ = size;
}
}   // namespace utils::mems::impl
