/**
\file       yuy2_y16_base.cpp
\author     Erashov Anton erashov2026@proton.me
\date       01.11.2016
*/
#include "mmedia/includes/control-defines-includes.hpp"
#include "mmedia/includes/includes.hpp"
#include "mmedia/libs/optims/optim_convert/includes_int.hpp"
#include "yuy2_y16.hpp"
#include "yuy2_y16_int.hpp"

namespace libs::optim::convert::yuy2_y16
{
void
get_params (
  ::libs::optim::io::MCallInfo&       info,
  const ::libs::optim::io::ProxyBuf** yuy2,
  ::libs::optim::io::ProxyBuf**       y16)
{
  U3_THROW_IF (1 == info.srcs_.size (), "src not equal 1");
  U3_THROW_IF (1 == info.dsts_.size (), "dst not equal 1");

  *yuy2 = &info.srcs_[0];
  *y16  = &info.dsts_[0];

  U3_THROW_IF (*yuy2, "empty yuy2");
  U3_THROW_IF (y16, "empty y16");

  (*yuy2)->check ("yuy2 libs::optim::convert::yuy2_y16");
  (*y16)->check ("y16 libs::optim::convert::yuy2_y16");
}
}   // namespace libs::optim::convert::yuy2_y16
