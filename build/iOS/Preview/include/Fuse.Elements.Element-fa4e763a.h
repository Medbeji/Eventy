// This file was generated based on '/Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Elements/1.0.2/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Float4x4.h>
#include <Uno.IDisposable.h>
#include <Uno.Object.h>
#include <Uno.Rect.h>
namespace g{namespace Fuse{namespace Elements{struct Element;}}}
namespace g{namespace Fuse{namespace Elements{struct Element__VisualAppeared;}}}

namespace g{
namespace Fuse{
namespace Elements{

// private sealed extern class Element.VisualAppeared :2781
// {
struct Element__VisualAppeared_type : uType
{
    ::g::Uno::IDisposable interface0;
};

Element__VisualAppeared_type* Element__VisualAppeared_typeof();
void Element__VisualAppeared__ctor__fn(Element__VisualAppeared* __this, ::g::Fuse::Elements::Element* element, uDelegate* handler);
void Element__VisualAppeared__New1_fn(::g::Fuse::Elements::Element* element, uDelegate* handler, Element__VisualAppeared** __retval);
void Element__VisualAppeared__OnRooted_fn(Element__VisualAppeared* __this);
void Element__VisualAppeared__UnoIDisposableDispose_fn(Element__VisualAppeared* __this);

struct Element__VisualAppeared : uObject
{
    uStrong< ::g::Fuse::Elements::Element*> _element;
    uStrong<uDelegate*> _handler;

    void ctor_(::g::Fuse::Elements::Element* element, uDelegate* handler);
    void OnRooted();
    static Element__VisualAppeared* New1(::g::Fuse::Elements::Element* element, uDelegate* handler);
};
// }

}}} // ::g::Fuse::Elements
