#pragma once
/**
\file       defines-check-state.hpp
\author     Erashov Anton erashov2026@proton.me
\date       26.07.2016
\brief      Различные вспомогательные макросы для проверки состояний или результатов вызовов функций
*/

#ifdef U3_CNTRL_FORCE_SKIP_CHECK_CALL
#  ifndef U3_THROW_IF
#    define U3_THROW_IF(u3def_cond, u3def_minfo)
#  endif
#  ifndef U3_THROW_IFN
#    define U3_THROW_IFN(u3def_cond, u3def_minfo)
#  endif
#  ifndef U3_TEST
#    define U3_TEST(u3def_cond, u3def_mfino)
#  endif
#  ifndef U3_THROW_IMPL
#    define U3_THROW_IMPL(u3def_info)
#  endif
#  ifndef U3_TEST_IMPL
#    define U3_TEST_IMPL(u3def_info)
#  endif
#else

#  ifndef U3_THROW_IMPL
#    define U3_THROW_IMPL(u3def_info) U3_ASSERT_THROW (std::string ("CHECK-FAILED:") + u3def_info)
#  endif

#  define U3_THROW_IF(u3def_cond, u3def_minfo) \
    if (u3def_cond)                            \
    {                                          \
      U3_THROW_IMPL (u3def_minfo);             \
    }

#  define U3_THROW_IFN(u3def_cond, u3def_minfo) \
    if (!(u3def_cond))                          \
    {                                           \
      U3_THROW_IMPL (u3def_minfo);              \
    }

#  ifndef U3_TEST_IMPL
#    define U3_TEST_IMPL(u3def_info) U3_MARK (std::string ("TEST-FAILED:") + u3def_info)
#  endif

#  define U3_TEST(u3def_cond, u3def_minfo) \
    if (!(u3def_cond))                     \
    {                                      \
      U3_TEST_IMPL (u3def_minfo);          \
    }

#endif
