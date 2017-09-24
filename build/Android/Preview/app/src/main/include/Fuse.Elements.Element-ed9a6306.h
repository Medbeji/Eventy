// This file was generated based on '/Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Elements/0.47.7/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.IDisposable.h>
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Elements{struct Element;}}}
namespace g{namespace Fuse{namespace Elements{struct Element__VisualDisappeared;}}}

namespace g{
namespace Fuse{
namespace Elements{

// private sealed extern class Element.VisualDisappeared :2793
// {
struct Element__VisualDisappeared_type : uType
{
    ::g::Uno::IDisposable interface0;
};

Element__VisualDisappeared_type* Element__VisualDisappeared_typeof();
void Element__VisualDisappeared__ctor__fn(Element__VisualDisappeared* __this, ::g::Fuse::Elements::Element* element, uDelegate* handler);
void Element__VisualDisappeared__New1_fn(::g::Fuse::Elements::Element* element, uDelegate* handler, Element__VisualDisappeared** __retval);
void Element__VisualDisappeared__UnoIDisposableDispose_fn(Element__VisualDisappeared* __this);

struct Element__VisualDisappeared : uObject
{
    uStrong< ::g::Fuse::Elements::Element*> _element;
    uStrong<uDelegate*> _handler;

    void ctor_(::g::Fuse::Elements::Element* element, uDelegate* handler);
    static Element__VisualDisappeared* New1(::g::Fuse::Elements::Element* element, uDelegate* handler);
};
// }

}}} // ::g::Fuse::Elements
