#pragma once
/**
\file       defines-boost-lib-serialize-to-archive.hpp
\date       01.08.2017
\author     Erashov Anton erashov2026@proton.me
\brief      Макросы для сериализации boost
*/

#if (U3_USE_BOOST_SERIALIZTION)

#  ifndef U3_BOOST_SERIALIZE_MAKE_NVP
#    define U3_BOOST_SERIALIZE_MAKE_NVP(u3def_xml_type, u3def_base) \
      boost::serialization::make_nvp (u3def_xml_type, boost::serialization::base_object< u3def_base > (*this));
#  endif


#  ifndef U3_BOOST_ADD_SERIALIZE_ARCH
#    define U3_BOOST_ADD_SERIALIZE_ARCH(u3def_param)                                                                                    \
      template void u3def_param::serialize< boost::archive::xml_iarchive > (boost::archive::xml_iarchive &, const std::uint32_t);       \
      template void u3def_param::serialize< boost::archive::xml_oarchive > (boost::archive::xml_oarchive &, const std::uint32_t);       \
      template void u3def_param::serialize< boost::archive::binary_iarchive > (boost::archive::binary_iarchive &, const std::uint32_t); \
      template void u3def_param::serialize< boost::archive::binary_oarchive > (boost::archive::binary_oarchive &, const std::uint32_t);
#  endif

#  ifndef U3_BOOST_CLASS_EXPORT_KEY
#    define U3_BOOST_CLASS_EXPORT_KEY(u3def_param) BOOST_CLASS_EXPORT_KEY (u3def_param)
#  endif

#  ifndef U3_BOOST_CLASS_TRACKING
#    define U3_BOOST_CLASS_TRACKING (u3def_param1, u3def_param2) BOOST_CLASS_TRACKING (u3def_param1, u3def_param2)
#  endif

#  ifndef U3_BOOST_CLASS_EXPORT_IMPLEMENT
#    define U3_BOOST_CLASS_EXPORT_IMPLEMENT(u3def_param) BOOST_CLASS_EXPORT_IMPLEMENT (u3def_param)
#  endif

#else

#  ifndef U3_BOOST_SERIALIZE_MAKE_NVP
#    define U3_BOOST_SERIALIZE_MAKE_NVP(u3def_xml_type, u3def_base)
#  endif

#  ifndef U3_BOOST_ADD_SERIALIZE_ARCH
#    define U3_BOOST_ADD_SERIALIZE_ARCH(u3def_param)
#  endif

#  ifndef U3_BOOST_CLASS_EXPORT_KEY
#    define U3_BOOST_CLASS_EXPORT_KEY(u3def_param)
#  endif

#  ifndef U3_BOOST_CLASS_TRACKING
#    define U3_BOOST_CLASS_TRACKING (u3def_param1, u3def_param2)
#  endif

#  ifndef U3_BOOST_CLASS_EXPORT_IMPLEMENT
#    define U3_BOOST_CLASS_EXPORT_IMPLEMENT(u3def_param)
#  endif

#endif
