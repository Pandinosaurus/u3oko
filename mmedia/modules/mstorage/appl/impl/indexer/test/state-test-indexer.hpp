#pragma once
/**
\file       state-test-indexer.hpp
\author     Erashov Anton erashov2026@proton.me
\date       15.08.2018
*/

namespace modules::mstorage::appl::impl::indexer::test
{
class StateTestIndexer : public ::libs::events_storage::events::BaseStorageEvent
{
  friend class boost::serialization::access;

  protected:
  struct Acessor {
    explicit Acessor (int) {};
  };

  public:
  // ext types
  using objects_type = boost::unordered_flat_map< StateObject::TypeObjectId, StateObject >;

  U3_ADD_POINTERS_TO_SELF (StateTestIndexer)
  U3_ADD_MAKE_SHARED_THIS (StateTestIndexer)
  U3_ADD_DELETE_MOVE_COPY (StateTestIndexer)

  explicit StateTestIndexer (const Acessor& = Acessor (0));
  virtual ~StateTestIndexer () = default;

  static constexpr auto
  gen_get_mid () -> const IEvent::hid_type&
  {
    static constexpr const char*            chret = "modules/mstorage/appl/impl/indexer/test/state-test-indexer";
    static constexpr const IEvent::hid_type ret { chret };
    return ret;
  }

  objects_type objects_;   //<

  protected:
  virtual auto copy_int (const IEvent::craw_ptr) -> void override;

  private:
  // internal types
  U3_ADD_SUPER_CLASS (::libs::events_storage::events::BaseStorageEvent)

  friend class boost::serialization::access;

  template< class Archive >
  void serialize (Archive& arh, const std::uint32_t /* file_version */);

  // IEvent overrides
  virtual auto get_mid_int () const -> const ::libs::events::IEvent::hid_type& override;
  virtual auto clone_int (const ::libs::events::Deeps&) const -> ::libs::events::IEvent::ptr override;
};
}   // namespace modules::mstorage::appl::impl::indexer::test

U3_BOOST_CLASS_EXPORT_KEY (::modules::mstorage::appl::impl::indexer::test::StateTestIndexer);
