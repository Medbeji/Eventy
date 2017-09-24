// This file was generated based on '/Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Designer/0.47.7/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Fuse{namespace Designer{struct UnoHostInterface;}}}
namespace g{namespace Uno{struct Float4x4;}}
namespace g{namespace Uno{struct Rect;}}

namespace g{
namespace Fuse{
namespace Designer{

// public static extern class UnoHostInterface :142
// {
uClassType* UnoHostInterface_typeof();
void UnoHostInterface__OnVisualAppeared_fn(uObject* obj, uDelegate* handler, uObject** __retval);
void UnoHostInterface__OnVisualBoundsChanged_fn(uObject* obj, uDelegate* handler, uObject** __retval);
void UnoHostInterface__OnVisualDisappeared_fn(uObject* obj, uDelegate* handler, uObject** __retval);
void UnoHostInterface__OnVisualTransformChanged_fn(uObject* obj, uDelegate* handler, uObject** __retval);

struct UnoHostInterface : uObject
{
    static uSStrong<uDelegate*> VisualAppearedFactory_;
    static uSStrong<uDelegate*>& VisualAppearedFactory() { return VisualAppearedFactory_; }
    static uSStrong<uDelegate*> VisualBoundsChangedFactory_;
    static uSStrong<uDelegate*>& VisualBoundsChangedFactory() { return VisualBoundsChangedFactory_; }
    static uSStrong<uDelegate*> VisualDisappearedFactory_;
    static uSStrong<uDelegate*>& VisualDisappearedFactory() { return VisualDisappearedFactory_; }
    static uSStrong<uDelegate*> VisualTransformChangedFactory_;
    static uSStrong<uDelegate*>& VisualTransformChangedFactory() { return VisualTransformChangedFactory_; }

    static uObject* OnVisualAppeared(uObject* obj, uDelegate* handler);
    static uObject* OnVisualBoundsChanged(uObject* obj, uDelegate* handler);
    static uObject* OnVisualDisappeared(uObject* obj, uDelegate* handler);
    static uObject* OnVisualTransformChanged(uObject* obj, uDelegate* handler);
};
// }

}}} // ::g::Fuse::Designer
