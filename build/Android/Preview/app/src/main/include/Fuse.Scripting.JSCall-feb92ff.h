// This file was generated based on '/Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Scripting/0.47.7/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Scripting{struct JSCallback__ActionClosure;}}}

namespace g{
namespace Fuse{
namespace Scripting{

// private sealed class JSCallback.ActionClosure :395
// {
uType* JSCallback__ActionClosure_typeof();
void JSCallback__ActionClosure__ctor__fn(JSCallback__ActionClosure* __this, uDelegate* action);
void JSCallback__ActionClosure__New1_fn(uDelegate* action, JSCallback__ActionClosure** __retval);
void JSCallback__ActionClosure__Run_fn(JSCallback__ActionClosure* __this, uArray* args, uObject** __retval);

struct JSCallback__ActionClosure : uObject
{
    uStrong<uDelegate*> _action;

    void ctor_(uDelegate* action);
    uObject* Run(uArray* args);
    static JSCallback__ActionClosure* New1(uDelegate* action);
};
// }

}}} // ::g::Fuse::Scripting
