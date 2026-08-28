#pragma once
/**
\file       icore-proxy.hpp
\date       15.04.2022
\author     Erashov Anton erashov2026@proton.me
*/
#include "mmedia/libs/icore/impl/base/obj/dll/create-impl-func-type.hpp"   // REFACT

namespace libs::proxy
{
auto get_create_data_path_module_func (const std::string& plib_id) -> std::function< libs::icore::impl::base::obj::dll::create_impl_func_type >;
}   // namespace libs::proxy
