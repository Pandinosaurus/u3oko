#pragma once
/**
\file       ievent-module-impl.hpp
\author     Erashov Anton erashov2026@proton.me
\date       01.01.2026
*/

namespace modules::mevents::appl::impls
{
class IEventModuleImpl
{
  public:
  auto
  start () -> void
  {
    start_impl ();
  }

  auto
  stop () -> void
  {
    stop_impl ();
  }

  auto
  add_event2base (syn::IEvent::ptr& msg, syn::AddEvent2EventsMsg::raw_ptr props) -> void
  {
    add_event2base_impl (msg, props);
  }

  auto
  get_data_graphs (syn::IEvent::ptr& msg, syn::GetDataGraphsEventsMsg::raw_ptr props) -> void
  {
    get_data_graphs_impl (msg, props);
  }

  auto
  get_events_from_base (syn::IEvent::ptr& msg, syn::GetEventsFromBase::raw_ptr props) -> void
  {
    get_events_from_base_impl (msg, props);
  }

  private:
  virtual auto start_impl () -> void                                                                  = 0;
  virtual auto stop_impl () -> void                                                                   = 0;
  virtual auto add_event2base_impl (syn::IEvent::ptr&, syn::AddEvent2EventsMsg::raw_ptr) -> void      = 0;
  virtual auto get_data_graphs_impl (syn::IEvent::ptr&, syn::GetDataGraphsEventsMsg::raw_ptr) -> void = 0;
  virtual auto get_events_from_base_impl (syn::IEvent::ptr&, syn::GetEventsFromBase::raw_ptr) -> void = 0;
};
}   // namespace modules::mevents::appl::impls
