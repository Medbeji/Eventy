// This file was generated based on /usr/local/share/uno/Packages/Outracks.Simulator.Common.Uno/0.0.0/runtime/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.IDisposable.h>
#include <Uno.Object.h>
namespace g{namespace Outracks{namespace Simulator{namespace Runtime{struct ObjectTagRegistry__CurrentEach;}}}}
namespace g{namespace Uno{namespace Collections{struct List;}}}

namespace g{
namespace Outracks{
namespace Simulator{
namespace Runtime{

// private sealed class ObjectTagRegistry.CurrentEach :355
// {
struct ObjectTagRegistry__CurrentEach_type : uType
{
    ::g::Uno::IDisposable interface0;
};

ObjectTagRegistry__CurrentEach_type* ObjectTagRegistry__CurrentEach_typeof();
void ObjectTagRegistry__CurrentEach__ctor__fn(ObjectTagRegistry__CurrentEach* __this);
void ObjectTagRegistry__CurrentEach__Dispose_fn(ObjectTagRegistry__CurrentEach* __this);
void ObjectTagRegistry__CurrentEach__New1_fn(ObjectTagRegistry__CurrentEach** __retval);
void ObjectTagRegistry__CurrentEach__OnObjectCreated_fn(ObjectTagRegistry__CurrentEach* __this, uObject* obj);
void ObjectTagRegistry__CurrentEach__OnObjectCreated1_fn(ObjectTagRegistry__CurrentEach* __this, uString* id, uObject* obj);

struct ObjectTagRegistry__CurrentEach : uObject
{
    uStrong<uDelegate*> _func;
    uStrong< ::g::Uno::Collections::List*> _garbage;
    uStrong<uString*> _id;

    void ctor_();
    void Dispose();
    void OnObjectCreated(uObject* obj);
    void OnObjectCreated1(uString* id, uObject* obj);
    static ObjectTagRegistry__CurrentEach* New1();
};
// }

}}}} // ::g::Outracks::Simulator::Runtime
