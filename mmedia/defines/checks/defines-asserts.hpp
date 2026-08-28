#pragma once
/**
\file       defines-asserts.hpp
\author     Erashov Anton erashov2026@proton.me
\date       01.05.2018
*/

/// old shit
/// Функция для формирования текстового описания точки вызова (имя функции + номер строки)
/// \param[in]  file имя файла
/// \param[in]  line номер строки
/// \return     текстовое описание точки вызова
inline std::string
make_call_place_info (const char* file, std::int32_t line)
{
  std::string ret;

  ret.reserve (256);
  ret += file;
  ret += ":";
  ret += std::to_string (line);
  return ret;
}

/// Макрос для стандартной генерации исключения, в данной реализации используем исключение boost
#ifndef U3_THROW_EXCEPT
#  define U3_THROW_EXCEPT(u3def_param)                                     \
    {                                                                      \
      std::stringstream sexcpt;                                            \
      sexcpt << (u3def_param);                                             \
      BOOST_THROW_EXCEPTION (std::runtime_error (sexcpt.str ().c_str ())); \
    }
#endif

#if defined(U3_CNTRL_DEBUG) || defined(U3_CNTRL_RELEASE_ASSERT)

#  ifndef U3_ASSERT_IMPL
#    define U3_ASSERT_IMPL(u3def_cond, u3def_info, u3def_throw)                                          \
      if (!(u3def_cond))                                                                                 \
      {                                                                                                  \
        U3_XLOG_ASSERT (u3def_info + std::string (".....") + make_call_place_info (__FILE__, __LINE__)); \
        if (u3def_throw)                                                                                 \
        {                                                                                                \
          U3_THROW_EXCEPT (u3def_info);                                                                  \
        }                                                                                                \
      }
#  endif

#  ifndef U3_ASSERT
#    define U3_ASSERT(u3def_cond) U3_ASSERT_IMPL (u3def_cond, "ASSERT-HARD", true)
#  endif

#  ifndef U3_ASSERT_SOFT
#    define U3_ASSERT_SOFT(u3def_cond, u3def_info) U3_ASSERT_IMPL (u3def_cond, std::string ("ASSERT-SOFT: ") + u3def_info, false)
#  endif

#  ifndef U3_ASSERT_THROW
#    define U3_ASSERT_THROW(u3def_info)                                                                  \
      {                                                                                                  \
        U3_XLOG_ASSERT (u3def_info + std::string (".....") + make_call_place_info (__FILE__, __LINE__)); \
        U3_THROW_EXCEPT (u3def_info);                                                                    \
      }
#  endif

#else
#  ifndef U3_ASSERT
#    define U3_ASSERT(u3def_cond)
#  endif

#  ifndef U3_ASSERT_THROW
#    define U3_ASSERT_THROW(u3def_info)
#  endif
#endif
