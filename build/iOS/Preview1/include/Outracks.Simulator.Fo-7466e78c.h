// This file was generated based on /usr/local/share/uno/Packages/Outracks.Simulator.Common.Uno/0.0.0/common/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Outracks{namespace Simulator{struct ForgetAction1;}}}

namespace g{
namespace Outracks{
namespace Simulator{

// public sealed class ForgetAction<TArg1, TArg2> :79
// {
uType* ForgetAction1_typeof();
void ForgetAction1__ctor__fn(ForgetAction1* __this, uDelegate* action);
void ForgetAction1__Execute_fn(ForgetAction1* __this, void* arg1, void* arg2);
void ForgetAction1__New1_fn(uType* __type, uDelegate* action, ForgetAction1** __retval);

struct ForgetAction1 : uObject
{
    uStrong<uDelegate*> _action;

    void ctor_(uDelegate* action);
    template<class TArg1, class TArg2>
    void Execute(TArg1 arg1, TArg2 arg2) { ForgetAction1__Execute_fn(this, uConstrain(__type->T(0), arg1), uConstrain(__type->T(1), arg2)); }
    static ForgetAction1* New1(uType* __type, uDelegate* action);
};
// }

}}} // ::g::Outracks::Simulator
