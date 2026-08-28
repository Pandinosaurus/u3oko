/**
\file       check-state-funcs.cpp
\author     Erashov Anton erashov2026@proton.me
\date       14.08.2026
*/
#include "../utility-lib-includes_int.hpp"
#include "check-state-funcs.hpp"

namespace libs::utility::checks
{
auto
assert_hard (bool cond, std::string_view info, std::source_location place) -> void
{
  // U3_ASSERT (cond, info);
}


auto
assert_soft (bool cond, std::string_view info, std::source_location place) -> void
{
  // U3_ASSERT_SOFT (cond, info);
}


auto
throw_exception (std::string_view info, std::source_location place) -> void
{
  U3_THROW_EXCEPT (STOLOG (info));
}


auto
throw_if (bool cond, std::string_view info, std::source_location place) -> void
{
  U3_THROW_IF (cond, STOLOG (info));
}


auto
throw_ifn (bool cond, std::string_view info, std::source_location place) -> void
{
  U3_THROW_IF (cond, STOLOG (info));
}


auto
test (bool cond, std::string_view info, std::source_location place) -> void
{
  U3_TEST (cond, STOLOG (info));
}


auto
mark (std::string_view info, std::source_location place) -> void
{
  U3_MARK (STOLOG (info));
}


auto
mark_i64 (std::string_view, std::source_location place) -> void
{
}


auto
mark_todo (std::string_view, std::source_location place) -> void
{
}
}   // namespace libs::utility::checks
