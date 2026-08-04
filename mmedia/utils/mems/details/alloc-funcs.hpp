#pragma once
/**
\file       alloc-funcs.hpp
\author     Erashov Anton erashov2026@proton.me
\date       01.01.2017
*/

namespace utils::mems::details
{
extern "C" BOOST_SYMBOL_EXPORT auto u3free (void**) -> void;
extern "C" BOOST_SYMBOL_EXPORT auto u3alloc (void**, const std::size_t) -> void;
extern "C" BOOST_SYMBOL_EXPORT auto u3realloc (void**, const std::size_t) -> void;
}   // namespace utils::mems::details
