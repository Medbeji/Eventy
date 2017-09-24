// This file was generated based on /usr/local/share/uno/Packages/Outracks.Simulator.Client.Uno/0.1.0/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Outracks{namespace Simulator{namespace Client{struct Context;}}}}
namespace g{namespace Outracks{namespace Simulator{namespace Client{struct FakeApp;}}}}
namespace g{namespace Uno{namespace Net{struct IPEndPoint;}}}

namespace g{
namespace Outracks{
namespace Simulator{
namespace Client{

// public static class Context :919
// {
uClassType* Context_typeof();
void Context__get_App_fn(::g::Outracks::Simulator::Client::FakeApp** __retval);
void Context__set_App_fn(::g::Outracks::Simulator::Client::FakeApp* value);
void Context__get_Defines_fn(uArray** __retval);
void Context__set_Defines_fn(uArray* value);
void Context__get_InputMode_fn(int* __retval);
void Context__set_InputMode_fn(int* value);
void Context__get_Project_fn(uString** __retval);
void Context__set_Project_fn(uString* value);
void Context__get_ProxyEndpoints_fn(uArray** __retval);
void Context__set_ProxyEndpoints_fn(uArray* value);
void Context__get_Reflection_fn(uObject** __retval);
void Context__set_Reflection_fn(uObject* value);
void Context__SetApp_fn(::g::Outracks::Simulator::Client::FakeApp* app);
void Context__SetGlobals_fn(uArray* proxyEndpoints, uString* project, uArray* defines);

struct Context : uObject
{
    static uSStrong< ::g::Outracks::Simulator::Client::FakeApp*> _App_;
    static uSStrong< ::g::Outracks::Simulator::Client::FakeApp*>& _App() { return _App_; }
    static uSStrong<uArray*> _Defines_;
    static uSStrong<uArray*>& _Defines() { return _Defines_; }
    static int _InputMode_;
    static int& _InputMode() { return _InputMode_; }
    static uSStrong<uString*> _Project_;
    static uSStrong<uString*>& _Project() { return _Project_; }
    static uSStrong<uArray*> _ProxyEndpoints_;
    static uSStrong<uArray*>& _ProxyEndpoints() { return _ProxyEndpoints_; }
    static uSStrong<uObject*> _Reflection_;
    static uSStrong<uObject*>& _Reflection() { return _Reflection_; }

    static void SetApp(::g::Outracks::Simulator::Client::FakeApp* app);
    static void SetGlobals(uArray* proxyEndpoints, uString* project, uArray* defines);
    static ::g::Outracks::Simulator::Client::FakeApp* App();
    static void App(::g::Outracks::Simulator::Client::FakeApp* value);
    static uArray* Defines();
    static void Defines(uArray* value);
    static int InputMode();
    static void InputMode(int value);
    static uString* Project();
    static void Project(uString* value);
    static uArray* ProxyEndpoints();
    static void ProxyEndpoints(uArray* value);
    static uObject* Reflection();
    static void Reflection(uObject* value);
};
// }

}}}} // ::g::Outracks::Simulator::Client
