#pragma once
/**
\file       defines-set-target-cpu-attr.hpp
\author     Erashov Anton erashov2026@proton.me
\date       01.05.2018
\brief      Определение для уточнения типа процессора, под который собирается конкретная функция
*/

#ifndef U3_SET_TARGET_CPU

#  if defined(U3_COMPILER_MSC)
#    define U3_SET_TARGET_CPU(u3def_xcpu)
#  elif defined(U3_COMPILER_GNUC)
#    define U3_SET_TARGET_CPU(u3def_xcpu) [[gnu::target (#u3def_xcpu)]]
#  elif defined(U3_COMPILER_CLANG)
#    define U3_SET_TARGET_CPU(u3def_xcpu) [[gnu::target (#u3def_xcpu)]]
#  else
#    error "unknown compile"
#  endif

#endif
