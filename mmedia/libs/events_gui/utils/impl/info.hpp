#pragma once
/**
\file       info.hpp
\author     Erashov Anton erashov2026@proton.me
\date       01.01.2017
*/

namespace libs::events_gui::utils::impl
{
struct Info {
  public:
  Info () = default;

  bool
  self_test () const
  {
    return true;
  }

  void
  reset ()
  {
    width_  = 0;
    height_ = 0;
  }

  std::int32_t width_ { 0 };    //<
  std::int32_t height_ { 0 };   //<

  private:
  friend class boost::serialization::access;

#if (U3_USE_BOOST_SERIALIZTION)
  template< class Archive >
  void
  serialize (Archive& arh, const std::uint32_t /* file_version */)
  {
    arh& BOOST_SERIALIZATION_NVP (width_);
    arh& BOOST_SERIALIZATION_NVP (height_);
  }
#endif
};
}   // namespace libs::events_gui::utils::impl
