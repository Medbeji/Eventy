// This file was generated based on '/Users/medbeji/Library/Application Support/Fusetools/Packages/Uno.Threading/1.0.11/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Threading.ThreadP-77c81928.h>
namespace g{namespace Uno{namespace Threading{struct ThreadPool__ParameterizedWorkItem;}}}

namespace g{
namespace Uno{
namespace Threading{

// private sealed class ThreadPool.ParameterizedWorkItem<TState> :1099
// {
::g::Uno::Threading::ThreadPool__WorkItem_type* ThreadPool__ParameterizedWorkItem_typeof();
void ThreadPool__ParameterizedWorkItem__Invoke_fn(ThreadPool__ParameterizedWorkItem* __this);

struct ThreadPool__ParameterizedWorkItem : ::g::Uno::Threading::ThreadPool__WorkItem
{
    uStrong<uDelegate*> _action;
    uTField _state() { return __type->Field(this, 1); }
};
// }

}}} // ::g::Uno::Threading
