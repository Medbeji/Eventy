// This file was generated based on '/Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Drawing.Surface/1.0.2/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Fuse{namespace Drawing{struct Surface;}}}
namespace g{namespace Fuse{namespace Drawing{struct SurfaceManager;}}}
namespace g{namespace Fuse{struct Node;}}
namespace g{namespace Uno{namespace Collections{struct Dictionary;}}}

namespace g{
namespace Fuse{
namespace Drawing{

// public static class SurfaceManager :3798
// {
uClassType* SurfaceManager_typeof();
void SurfaceManager__Create_fn(uObject* owner, ::g::Fuse::Drawing::Surface** __retval);
void SurfaceManager__Find_fn(::g::Fuse::Node* source, ::g::Fuse::Drawing::Surface** __retval);
void SurfaceManager__FindImpl_fn(::g::Fuse::Node* source, bool* create, ::g::Fuse::Drawing::Surface** __retval);
void SurfaceManager__FindOrCreate_fn(::g::Fuse::Node* source, ::g::Fuse::Drawing::Surface** __retval);
void SurfaceManager__Release_fn(uObject* owner, ::g::Fuse::Drawing::Surface* c);

struct SurfaceManager : uObject
{
    static uSStrong< ::g::Uno::Collections::Dictionary*> _owners_;
    static uSStrong< ::g::Uno::Collections::Dictionary*>& _owners() { return SurfaceManager_typeof()->Init(), _owners_; }

    static ::g::Fuse::Drawing::Surface* Create(uObject* owner);
    static ::g::Fuse::Drawing::Surface* Find(::g::Fuse::Node* source);
    static ::g::Fuse::Drawing::Surface* FindImpl(::g::Fuse::Node* source, bool create);
    static ::g::Fuse::Drawing::Surface* FindOrCreate(::g::Fuse::Node* source);
    static void Release(uObject* owner, ::g::Fuse::Drawing::Surface* c);
};
// }

}}} // ::g::Fuse::Drawing
