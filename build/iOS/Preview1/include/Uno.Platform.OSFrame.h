// This file was generated based on '/Users/medbeji/Library/Application Support/Fusetools/Packages/UnoCore/1.0.11/source/uno/platform/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Uno{namespace Platform{struct OSFrame;}}}
namespace Xli { class Window; }

namespace g{
namespace Uno{
namespace Platform{

// public class OSFrame :781
// {
uType* OSFrame_typeof();
void OSFrame__ctor__fn(OSFrame* __this);
void OSFrame__New1_fn(OSFrame** __retval);
void OSFrame__add_Resized_fn(OSFrame* __this, uDelegate* value);
void OSFrame__remove_Resized_fn(OSFrame* __this, uDelegate* value);

struct OSFrame : uObject
{
    void* _handle;
    uStrong<uDelegate*> Resized1;

    void ctor_();
    void add_Resized(uDelegate* value);
    void remove_Resized(uDelegate* value);
    static OSFrame* New1();
};
// }

}}} // ::g::Uno::Platform
