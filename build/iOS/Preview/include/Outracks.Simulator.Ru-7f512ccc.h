// This file was generated based on /usr/local/share/uno/Packages/Outracks.Simulator.Common.Uno/0.0.0/runtime/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Outracks{namespace Simulator{namespace Runtime{struct ObjectTagRegistry;}}}}
namespace g{namespace Outracks{namespace Simulator{namespace Runtime{struct ObjectTagRegistry__CurrentEach;}}}}
namespace g{namespace Uno{namespace Collections{struct Dictionary;}}}
namespace g{namespace Uno{namespace Collections{struct List;}}}

namespace g{
namespace Outracks{
namespace Simulator{
namespace Runtime{

// public static class ObjectTagRegistry :222
// {
uClassType* ObjectTagRegistry_typeof();
void ObjectTagRegistry__Clear_fn();
void ObjectTagRegistry__DisposeAndUnregister_fn(uString* tag);
void ObjectTagRegistry__Each_fn(uString* tag, uDelegate* func, uObject** __retval);
void ObjectTagRegistry__GetFirstObjectWithTag_fn(uString* tag, uObject** __retval);
void ObjectTagRegistry__GetObjectsWithTag_fn(uString* tag, uObject** __retval);
void ObjectTagRegistry__GetTagHash_fn(uObject* obj, uString** __retval);
void ObjectTagRegistry__add_OnObjectTagRegistered_fn(uDelegate* value);
void ObjectTagRegistry__remove_OnObjectTagRegistered_fn(uDelegate* value);
void ObjectTagRegistry__RegisterObjectTag_fn(uObject* obj, uString* tagHash, uObject** __retval);
void ObjectTagRegistry__get_TagToObjects_fn(::g::Uno::Collections::Dictionary** __retval);
void ObjectTagRegistry__TryExecuteOnObjectsWithTag_fn(uString* tag, uDelegate* action);

struct ObjectTagRegistry : uObject
{
    static uSStrong< ::g::Uno::Collections::List*> _eaches_;
    static uSStrong< ::g::Uno::Collections::List*>& _eaches() { return ObjectTagRegistry_typeof()->Init(), _eaches_; }
    static uSStrong< ::g::Uno::Collections::Dictionary*> _tagToObjects_;
    static uSStrong< ::g::Uno::Collections::Dictionary*>& _tagToObjects() { return ObjectTagRegistry_typeof()->Init(), _tagToObjects_; }
    static int _visualId_;
    static int& _visualId() { return ObjectTagRegistry_typeof()->Init(), _visualId_; }
    static uSStrong< ::g::Uno::Collections::Dictionary*> ObjectToTag_;
    static uSStrong< ::g::Uno::Collections::Dictionary*>& ObjectToTag() { return ObjectTagRegistry_typeof()->Init(), ObjectToTag_; }
    static uSStrong<uDelegate*> OnObjectTagRegistered1_;
    static uSStrong<uDelegate*>& OnObjectTagRegistered1() { return ObjectTagRegistry_typeof()->Init(), OnObjectTagRegistered1_; }

    static void Clear();
    static void DisposeAndUnregister(uString* tag);
    static uObject* Each(uString* tag, uDelegate* func);
    static uObject* GetFirstObjectWithTag(uString* tag);
    static uObject* GetObjectsWithTag(uString* tag);
    static uString* GetTagHash(uObject* obj);
    static uObject* RegisterObjectTag(uObject* obj, uString* tagHash);
    static void TryExecuteOnObjectsWithTag(uString* tag, uDelegate* action);
    static ::g::Uno::Collections::Dictionary* TagToObjects();
    static void add_OnObjectTagRegistered(uDelegate* value);
    static void remove_OnObjectTagRegistered(uDelegate* value);
};
// }

}}}} // ::g::Outracks::Simulator::Runtime
