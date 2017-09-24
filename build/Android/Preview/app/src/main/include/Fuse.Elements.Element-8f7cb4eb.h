// This file was generated based on '/Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Elements/0.47.7/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.IDisposable.h>
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Elements{struct Element__DefaultDisposable;}}}

namespace g{
namespace Fuse{
namespace Elements{

// private sealed extern class Element.DefaultDisposable :2674
// {
struct Element__DefaultDisposable_type : uType
{
    ::g::Uno::IDisposable interface0;
};

Element__DefaultDisposable_type* Element__DefaultDisposable_typeof();
void Element__DefaultDisposable__ctor__fn(Element__DefaultDisposable* __this);
void Element__DefaultDisposable__get_Instance_fn(uObject** __retval);
void Element__DefaultDisposable__New1_fn(Element__DefaultDisposable** __retval);
void Element__DefaultDisposable__UnoIDisposableDispose_fn(Element__DefaultDisposable* __this);

struct Element__DefaultDisposable : uObject
{
    static uSStrong<uObject*> _instance_;
    static uSStrong<uObject*>& _instance() { return _instance_; }

    void ctor_();
    static Element__DefaultDisposable* New1();
    static uObject* Instance();
};
// }

}}} // ::g::Fuse::Elements
