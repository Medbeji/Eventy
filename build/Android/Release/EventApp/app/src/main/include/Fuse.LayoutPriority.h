// This file was generated based on '../../AppData/Local/Fusetools/Packages/FuseCore/0.46.1/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Fuse{struct LayoutPriority;}}

namespace g{
namespace Fuse{

// public static class LayoutPriority :10547
// {
uClassType* LayoutPriority_typeof();

struct LayoutPriority : uObject
{
    static int Later_;
    static int& Later() { return LayoutPriority_typeof()->Init(), Later_; }
    static int Placement_;
    static int& Placement() { return LayoutPriority_typeof()->Init(), Placement_; }
    static int Post_;
    static int& Post() { return LayoutPriority_typeof()->Init(), Post_; }
};
// }

}} // ::g::Fuse
