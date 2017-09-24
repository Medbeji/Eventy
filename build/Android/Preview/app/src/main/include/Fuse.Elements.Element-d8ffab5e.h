// This file was generated based on '/Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Elements/0.47.7/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Float4x4.h>
#include <Uno.IDisposable.h>
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Elements{struct Element;}}}
namespace g{namespace Fuse{namespace Elements{struct Element__TransformChanged;}}}
namespace g{namespace Uno{struct EventArgs;}}

namespace g{
namespace Fuse{
namespace Elements{

// private sealed extern class Element.TransformChanged :2692
// {
struct Element__TransformChanged_type : uType
{
    ::g::Uno::IDisposable interface0;
};

Element__TransformChanged_type* Element__TransformChanged_typeof();
void Element__TransformChanged__ctor__fn(Element__TransformChanged* __this, ::g::Fuse::Elements::Element* element, uDelegate* handler);
void Element__TransformChanged__New1_fn(::g::Fuse::Elements::Element* element, uDelegate* handler, Element__TransformChanged** __retval);
void Element__TransformChanged__OnWorldTransformInvalidated_fn(Element__TransformChanged* __this, uObject* sender, ::g::Uno::EventArgs* args);
void Element__TransformChanged__UnoIDisposableDispose_fn(Element__TransformChanged* __this);

struct Element__TransformChanged : uObject
{
    uStrong< ::g::Fuse::Elements::Element*> _element;
    uStrong<uDelegate*> _handler;

    void ctor_(::g::Fuse::Elements::Element* element, uDelegate* handler);
    void OnWorldTransformInvalidated(uObject* sender, ::g::Uno::EventArgs* args);
    static Element__TransformChanged* New1(::g::Fuse::Elements::Element* element, uDelegate* handler);
};
// }

}}} // ::g::Fuse::Elements
