// This file was generated based on '/Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Elements/1.0.2/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.IDisposable.h>
#include <Uno.Object.h>
#include <Uno.Rect.h>
namespace g{namespace Fuse{namespace Elements{struct Element;}}}
namespace g{namespace Fuse{namespace Elements{struct Element__BoundsChanged;}}}
namespace g{namespace Fuse{struct PlacedArgs;}}

namespace g{
namespace Fuse{
namespace Elements{

// private sealed extern class Element.BoundsChanged :2748
// {
struct Element__BoundsChanged_type : uType
{
    ::g::Uno::IDisposable interface0;
};

Element__BoundsChanged_type* Element__BoundsChanged_typeof();
void Element__BoundsChanged__ctor__fn(Element__BoundsChanged* __this, ::g::Fuse::Elements::Element* element, uDelegate* handler);
void Element__BoundsChanged__New1_fn(::g::Fuse::Elements::Element* element, uDelegate* handler, Element__BoundsChanged** __retval);
void Element__BoundsChanged__OnPlaced_fn(Element__BoundsChanged* __this, uObject* sender, ::g::Fuse::PlacedArgs* args);
void Element__BoundsChanged__UnoIDisposableDispose_fn(Element__BoundsChanged* __this);

struct Element__BoundsChanged : uObject
{
    uStrong< ::g::Fuse::Elements::Element*> _element;
    uStrong<uDelegate*> _handler;

    void ctor_(::g::Fuse::Elements::Element* element, uDelegate* handler);
    void OnPlaced(uObject* sender, ::g::Fuse::PlacedArgs* args);
    static Element__BoundsChanged* New1(::g::Fuse::Elements::Element* element, uDelegate* handler);
};
// }

}}} // ::g::Fuse::Elements
