#pragma once
/**
\file       defines-marks.hpp
\author     Erashov Anton erashov2026@proton.me
\date       01.05.2018
*/

#if defined(U3_CNTRL_DEBUG) || defined(U3_CNTRL_RELEASE_ASSERT)

#  ifndef U3_MARK
#    define U3_MARK(u3def_info)                                                                          \
      {                                                                                                  \
        U3_XLOG_ASSERT (u3def_info + std::string (".....") + make_call_place_info (__FILE__, __LINE__)); \
      }
#  endif

#  ifndef U3_MARK_I64
#    define U3_MARK_I64 U3_MARK ("MARK-I64")
#  endif

#  ifndef U3_MARK_TODO
#    define U3_MARK_TODO U3_MARK ("MARK-TODO")
#  endif

#else
#  ifndef U3_MARK
#    define U3_MARK
#  endif

#  ifndef U3_MARK_I64
#    define U3_MARK_I64
#  endif

#  ifndef U3_MARK_TODO
#    define U3_MARK_TODO
#  endif
#endif
