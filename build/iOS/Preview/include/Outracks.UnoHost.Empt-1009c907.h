// This file was generated based on /usr/local/share/uno/Packages/Outracks.Simulator.Common.Uno/0.0.0/unohost.common/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.IDisposable.h>
#include <Uno.Object.h>
namespace g{namespace Outracks{namespace UnoHost{struct EmptyDisposable;}}}

namespace g{
namespace Outracks{
namespace UnoHost{

// internal sealed class EmptyDisposable :28
// {
struct EmptyDisposable_type : uType
{
    ::g::Uno::IDisposable interface0;
};

EmptyDisposable_type* EmptyDisposable_typeof();
void EmptyDisposable__ctor__fn(EmptyDisposable* __this);
void EmptyDisposable__Dispose_fn(EmptyDisposable* __this);
void EmptyDisposable__New1_fn(EmptyDisposable** __retval);

struct EmptyDisposable : uObject
{
    void ctor_();
    void Dispose();
    static EmptyDisposable* New1();
};
// }

}}} // ::g::Outracks::UnoHost
