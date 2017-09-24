// This file was generated based on /usr/local/share/uno/Packages/Outracks.Simulator.Client.Uno/0.1.0/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Float4.h>
#include <Uno.Object.h>
namespace g{namespace Fuse{struct Node;}}
namespace g{namespace Outracks{namespace Simulator{namespace Client{struct FakeApp;}}}}
namespace g{namespace Outracks{namespace Simulator{namespace Client{struct UserAppState;}}}}
namespace g{namespace Uno{namespace UX{struct Resource;}}}

namespace g{
namespace Outracks{
namespace Simulator{
namespace Client{

// internal sealed class UserAppState :1872
// {
uType* UserAppState_typeof();
void UserAppState__ctor__fn(UserAppState* __this, ::g::Uno::Float4* background, uArray* children, uArray* resources, ::g::Uno::Float4* clearColor);
void UserAppState__ApplyTo_fn(UserAppState* __this, ::g::Outracks::Simulator::Client::FakeApp* app);
void UserAppState__get_Default_fn(UserAppState** __retval);
void UserAppState__set_Default_fn(UserAppState* value);
void UserAppState__New1_fn(::g::Uno::Float4* background, uArray* children, uArray* resources, ::g::Uno::Float4* clearColor, UserAppState** __retval);
void UserAppState__Save_fn(::g::Outracks::Simulator::Client::FakeApp* app, UserAppState** __retval);
void UserAppState__SequenceEquals_fn(uType* __type, uObject* left, uArray* right, bool* __retval);
void UserAppState__SetIfNotEqual_fn(uType* __type, uObject* list, uArray* elements);
void UserAppState__SetSequence_fn(uType* __type, uObject* list, uArray* elements);

struct UserAppState : uObject
{
    ::g::Uno::Float4 Background;
    uStrong<uArray*> Children;
    ::g::Uno::Float4 ClearColor;
    uStrong<uArray*> Resources;
    static uSStrong<UserAppState*> _Default_;
    static uSStrong<UserAppState*>& _Default() { return _Default_; }

    void ctor_(::g::Uno::Float4 background, uArray* children, uArray* resources, ::g::Uno::Float4 clearColor);
    void ApplyTo(::g::Outracks::Simulator::Client::FakeApp* app);
    static UserAppState* New1(::g::Uno::Float4 background, uArray* children, uArray* resources, ::g::Uno::Float4 clearColor);
    static UserAppState* Save(::g::Outracks::Simulator::Client::FakeApp* app);
    static bool SequenceEquals(uType* __type, uObject* left, uArray* right);
    static void SetIfNotEqual(uType* __type, uObject* list, uArray* elements);
    static void SetSequence(uType* __type, uObject* list, uArray* elements);
    static UserAppState* Default();
    static void Default(UserAppState* value);
};
// }

}}}} // ::g::Outracks::Simulator::Client
