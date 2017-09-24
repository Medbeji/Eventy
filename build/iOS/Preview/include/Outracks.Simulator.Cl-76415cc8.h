// This file was generated based on /usr/local/share/uno/Packages/Outracks.Simulator.Client.Uno/0.1.0/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Outracks{namespace Simulator{namespace Client{struct State;}}}}
namespace g{namespace Uno{struct Exception;}}

namespace g{
namespace Outracks{
namespace Simulator{
namespace Client{

// internal abstract class State :254
// {
struct State_type : uType
{
    void(*fp_OnEnterState)(::g::Outracks::Simulator::Client::State*, ::g::Outracks::Simulator::Client::State**);
    void(*fp_OnException)(::g::Outracks::Simulator::Client::State*, ::g::Uno::Exception*, ::g::Outracks::Simulator::Client::State**);
    void(*fp_OnLeaveState)(::g::Outracks::Simulator::Client::State*);
    void(*fp_OnUpdate)(::g::Outracks::Simulator::Client::State*, ::g::Outracks::Simulator::Client::State**);
};

State_type* State_typeof();
void State__ctor__fn(State* __this);
void State__OnEnterState_fn(State* __this, State** __retval);
void State__OnLeaveState_fn(State* __this);
void State__OnUpdate_fn(State* __this, State** __retval);

struct State : uObject
{
    void ctor_();
    State* OnEnterState() { State* __retval; return (((State_type*)__type)->fp_OnEnterState)(this, &__retval), __retval; }
    State* OnException(::g::Uno::Exception* e) { State* __retval; return (((State_type*)__type)->fp_OnException)(this, e, &__retval), __retval; }
    void OnLeaveState() { (((State_type*)__type)->fp_OnLeaveState)(this); }
    State* OnUpdate() { State* __retval; return (((State_type*)__type)->fp_OnUpdate)(this, &__retval), __retval; }
    static State* OnEnterState(State* __this) { State* __retval; return State__OnEnterState_fn(__this, &__retval), __retval; }
    static void OnLeaveState(State* __this) { State__OnLeaveState_fn(__this); }
    static State* OnUpdate(State* __this) { State* __retval; return State__OnUpdate_fn(__this, &__retval), __retval; }
};
// }

}}}} // ::g::Outracks::Simulator::Client
