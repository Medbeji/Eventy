// This file was generated based on '/Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Scripting/0.47.7/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Scripting{struct FactoryClosure;}}}
namespace g{namespace Uno{namespace Threading{struct Promise;}}}

namespace g{
namespace Fuse{
namespace Scripting{

// internal sealed class FactoryClosure<T> :1275
// {
uType* FactoryClosure_typeof();
void FactoryClosure__ctor__fn(FactoryClosure* __this, uDelegate* factory, uArray* args, ::g::Uno::Threading::Promise* promise);
void FactoryClosure__New1_fn(uType* __type, uDelegate* factory, uArray* args, ::g::Uno::Threading::Promise* promise, FactoryClosure** __retval);
void FactoryClosure__Run_fn(FactoryClosure* __this);

struct FactoryClosure : uObject
{
    uStrong<uArray*> _args;
    uStrong<uDelegate*> _factory;
    uStrong< ::g::Uno::Threading::Promise*> _promise;

    void ctor_(uDelegate* factory, uArray* args, ::g::Uno::Threading::Promise* promise);
    void Run();
    static FactoryClosure* New1(uType* __type, uDelegate* factory, uArray* args, ::g::Uno::Threading::Promise* promise);
};
// }

}}} // ::g::Fuse::Scripting
