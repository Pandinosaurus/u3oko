#pragma once
/**
\file       test-event-module-impl.hpp
\author     Erashov Anton erashov2026@proton.me
\date       01.01.2026
*/

namespace modules::mevents::appl::impls::test
{
class TestEventModuleImpl : public IEventModuleImpl
{
  public:
  private:
  auto
  start_impl () -> void override
  {
  }

  auto
  stop_impl () -> void override
  {
  }

  auto
  add_event2base_impl (syn::IEvent::ptr&, syn::AddEvent2EventsMsg::raw_ptr) -> void override
  {
  }

  auto
  get_data_graphs_impl (syn::IEvent::ptr&, syn::GetDataGraphsEventsMsg::raw_ptr) -> void override
  {
  }

  auto
  get_events_from_base_impl (syn::IEvent::ptr&, syn::GetEventsFromBase::raw_ptr) -> void override
  {
  }
};
}   // namespace modules::mevents::appl::impls::test
