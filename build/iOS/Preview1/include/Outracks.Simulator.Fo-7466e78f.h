// This file was generated based on /usr/local/share/uno/Packages/Outracks.Simulator.Common.Uno/0.0.0/common/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Outracks{namespace Simulator{struct ForgetAction;}}}

namespace g{
namespace Outracks{
namespace Simulator{

// public sealed class ForgetAction<TArg1> :63
// {
uType* ForgetAction_typeof();
void ForgetAction__ctor__fn(ForgetAction* __this, uDelegate* action);
void ForgetAction__Execute_fn(ForgetAction* __this, void* arg1);
void ForgetAction__New1_fn(uType* __type, uDelegate* action, ForgetAction** __retval);

struct ForgetAction : uObject
{
    uStrong<uDelegate*> _action;

    void ctor_(uDelegate* action);
    template<class TArg1>
    void Execute(TArg1 arg1) { ForgetAction__Execute_fn(this, uConstrain(__type->T(0), arg1)); }
    static ForgetAction* New1(uType* __type, uDelegate* action);
};
// }

}}} // ::g::Outracks::Simulator
