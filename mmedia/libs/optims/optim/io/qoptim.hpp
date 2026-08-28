#pragma once
/**
\file       qoptim.hpp
\author     Erashov Anton erashov2026@proton.me
\date       01.01.2017
*/

namespace libs::optim::io
{
/// Структура для запроса алгоритма из библиотеки по идентификатору
struct qoptim final {
  explicit qoptim (const std::string& id = "") :
    id_ (id)
  {
  }

  ~qoptim () = default;

  void
  check () const
  {
    U3_THROW_IF (id_.empty (), "empty id");
  }

  std::string id_ = {};   //<
};
}   // namespace libs::optim::io
