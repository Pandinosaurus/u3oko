#pragma once
/**
\file       storage-module-syn.hpp
\date       23.07.2018
\author     Erashov Anton erashov2026@proton.me
*/

namespace modules::mstorage::appl::syn
{
using IEvent                     = ::libs::events::IEvent;
using PropertyStorageModuleEvent = ::libs::events_base::props::modules::storage::PropertyStorageModuleEvent;
using ChangeStateProcessEvent    = ::libs::events_base::runtime::state::ChangeStateProcessEvent;
using BuffEvent                  = ::libs::events_base::runtime::mem::BuffEvent;
using ZipDataEvent               = ::libs::events_base::runtime::mem::ZipDataEvent;
using MemResourceStorageEvent    = ::libs::events_storage::events::MemResourceStorageEvent;
using GetRuntimeInfo             = ::libs::events_storage::events::GetRuntimeInfo;
using GetObjects                 = ::libs::events_storage::events::GetObjects;
using GetStatisticInfo           = ::libs::events_storage::events::GetStatisticInfo;
using UpdateStream               = ::libs::events_storage::events::UpdateStream;
using WriteData                  = ::libs::events_storage::events::WriteData;
using ReadData                   = ::libs::events_storage::events::ReadData;
using StateProcessEventExt       = ::libs::ilink::appl::StateProcessEventExt;
using RuntimeStreamInfo          = ::libs::events_storage::events::RuntimeStreamInfo;
using StreamActions              = ::libs::events_storage::StreamActions;
using stream_id_type             = ::libs::events_storage::stream_id_type;
using ChangeStateSubSysLogEvent  = ::libs::events_log::events::ChangeStateSubSysLogEvent;
using PathInfo                   = ::libs::events_base::props::modules::storage::PathInfo;
using IBlockMem                  = ::libs::utility::mem::IBlockMem;
using TypeObjectId               = ::libs::events_storage::TypeObjectId;

namespace mids = ::libs::properties::vers::links::mids;
}   // namespace modules::mstorage::appl::syn
