#pragma once
/**
\file       test-indexer-impl.hpp
\author     Erashov Anton erashov2026@proton.me
\date       25.07.2018
*/

namespace modules::mstorage::appl::impl::indexer::test
{
class TestIndexerImpl final : public IIndexerImpl
{
  public:
  TestIndexerImpl () = default;
  virtual ~TestIndexerImpl ();

  private:
  //  IIndexerImpl overrides
  virtual void get_objects_int (std::vector< syn::TypeObjectId >& objs) override;
  virtual void set_info_int (const syn::PathInfo::craw_ptr info) override;
  virtual bool change_state_int (const ImplRuns& state) override;
  virtual void update_stream_int (syn::UpdateStream::raw_ptr) override;

  void update_path ();
  void load_state ();
  void save_state ();
  void open_stream (syn::UpdateStream::raw_ptr);
  void close_stream (syn::UpdateStream::raw_ptr);

  StateTestIndexer::ptr state_ { std::make_shared< StateTestIndexer > () };   //<
  bool                  state_saved_ { true };                                //<
  syn::PathInfo         info_;                                                //<
  std::string           root_path_;                                           //<
};
}   // namespace modules::mstorage::appl::impl::indexer::test
