// This file was generated based on '/Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Nodes/0.47.7/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Fuse{struct Visual;}}
namespace g{namespace Fuse{struct VisualListCache;}}
namespace g{namespace Uno{namespace Collections{struct List;}}}

namespace g{
namespace Fuse{

// internal static class VisualListCache :903
// {
uClassType* VisualListCache_typeof();
void VisualListCache__Acquire_fn(::g::Uno::Collections::List** __retval);
void VisualListCache__Release_fn(::g::Uno::Collections::List* list);

struct VisualListCache : uObject
{
    static uSStrong< ::g::Uno::Collections::List*> _visualListCache_;
    static uSStrong< ::g::Uno::Collections::List*>& _visualListCache() { return VisualListCache_typeof()->Init(), _visualListCache_; }

    static ::g::Uno::Collections::List* Acquire();
    static void Release(::g::Uno::Collections::List* list);
};
// }

}} // ::g::Fuse
