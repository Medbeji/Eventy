// This file was generated based on '/Users/medbeji/Library/Application Support/Fusetools/Packages/UnoCore/0.47.13/source/uno/platform/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.EventArgs.h>
namespace g{namespace Uno{namespace Platform{struct ClosingEventArgs;}}}

namespace g{
namespace Uno{
namespace Platform{

// public sealed class ClosingEventArgs :326
// {
uType* ClosingEventArgs_typeof();
void ClosingEventArgs__ctor_1_fn(ClosingEventArgs* __this);
void ClosingEventArgs__get_Cancel_fn(ClosingEventArgs* __this, bool* __retval);
void ClosingEventArgs__set_Cancel_fn(ClosingEventArgs* __this, bool* value);
void ClosingEventArgs__New2_fn(ClosingEventArgs** __retval);

struct ClosingEventArgs : ::g::Uno::EventArgs
{
    bool _Cancel;

    void ctor_1();
    bool Cancel();
    void Cancel(bool value);
    static ClosingEventArgs* New2();
};
// }

}}} // ::g::Uno::Platform
