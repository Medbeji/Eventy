// This file was generated based on '/Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Nodes/0.47.7/input/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Float2.h>
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Input{struct Pointer__PointerRecord;}}}

namespace g{
namespace Fuse{
namespace Input{

// private sealed class Pointer.PointerRecord :1067
// {
uType* Pointer__PointerRecord_typeof();
void Pointer__PointerRecord__ctor__fn(Pointer__PointerRecord* __this);
void Pointer__PointerRecord__New1_fn(Pointer__PointerRecord** __retval);

struct Pointer__PointerRecord : uObject
{
    float DistanceMoved;
    double TimeAppeared;
    bool WasHandled;
    ::g::Uno::Float2 WindowPoint;

    void ctor_();
    static Pointer__PointerRecord* New1();
};
// }

}}} // ::g::Fuse::Input
