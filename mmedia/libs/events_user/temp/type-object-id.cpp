#if 0
/**
\file       type-object-id.cpp
\author     Erashov Anton erashov2026@proton.me
\date       24.06.2022
*/
#  include "mmedia/includes/control-defines-includes.hpp"
#  include "mmedia/includes/includes.hpp"
#  include "events-user-includes_int.hpp"
#  include "type-object-id.hpp"

namespace libs::events_user
{
TypeObjectId::TypeObjectId (const id_type& val)
{
}


bool
TypeObjectId::is_valid () const
{
  return consts::empty_object_id == val_ ? false : true;
}


void
TypeObjectId::reset ()
{
  val_ = consts::empty_object_id;
}


bool
TypeObjectId::operator== (const TypeObjectId& obj) const
{
  return val_ == obj.val_;
}

#  if (U3_USE_BOOST_SERIALIZTION)
template< class Archive >
void
TypeObjectId::serialize (Archive& arh, const std::uint32_t /* file_version */)
{
  arh& BOOST_SERIALIZATION_NVP (val_);
}
#  endif
}   // namespace libs::events_user

U3_BOOST_CLASS_EXPORT_IMPLEMENT (::libs::events_user::TypeObjectId);
U3_BOOST_ADD_SERIALIZE_ARCH (::libs::events_user::TypeObjectId);
#endif
