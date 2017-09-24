// This file was generated based on '/Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Gestures/1.0.2/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IBase-d3bd6f2e.h>
#include <Fuse.Animations.IUnwr-594abe9.h>
#include <Fuse.Binding.h>
#include <Fuse.INotifyUnrooted.h>
#include <Fuse.IProperties.h>
#include <Fuse.Scripting.IScriptObject.h>
#include <Fuse.Triggers.WhileTrigger.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.UX.IPropertyListener.h>
namespace g{namespace Fuse{namespace Gestures{namespace Internal{struct SwipeRegion;}}}}
namespace g{namespace Fuse{namespace Gestures{struct SwipeGesture;}}}
namespace g{namespace Fuse{namespace Gestures{struct WhileSwiping;}}}
namespace g{namespace Uno{namespace UX{struct PropertyObject;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}

namespace g{
namespace Fuse{
namespace Gestures{

// public sealed class WhileSwiping :1514
// {
struct WhileSwiping_type : ::g::Fuse::Triggers::Trigger_type
{
    ::g::Uno::UX::IPropertyListener interface8;
};

WhileSwiping_type* WhileSwiping_typeof();
void WhileSwiping__ctor_6_fn(WhileSwiping* __this, ::g::Fuse::Gestures::SwipeGesture* source);
void WhileSwiping__New2_fn(::g::Fuse::Gestures::SwipeGesture* source, WhileSwiping** __retval);
void WhileSwiping__OnInProgressChanged_fn(WhileSwiping* __this, bool* inProgress);
void WhileSwiping__OnRooted_fn(WhileSwiping* __this);
void WhileSwiping__OnUnrooted_fn(WhileSwiping* __this);
void WhileSwiping__get_Source_fn(WhileSwiping* __this, ::g::Fuse::Gestures::SwipeGesture** __retval);
void WhileSwiping__set_Source_fn(WhileSwiping* __this, ::g::Fuse::Gestures::SwipeGesture* value);
void WhileSwiping__UnoUXIPropertyListenerOnPropertyChanged_fn(WhileSwiping* __this, ::g::Uno::UX::PropertyObject* sender, ::g::Uno::UX::Selector* prop);

struct WhileSwiping : ::g::Fuse::Triggers::WhileTrigger
{
    uStrong< ::g::Fuse::Gestures::Internal::SwipeRegion*> _region;
    uStrong< ::g::Fuse::Gestures::SwipeGesture*> _Source;

    void ctor_6(::g::Fuse::Gestures::SwipeGesture* source);
    void OnInProgressChanged(bool inProgress);
    ::g::Fuse::Gestures::SwipeGesture* Source();
    void Source(::g::Fuse::Gestures::SwipeGesture* value);
    static WhileSwiping* New2(::g::Fuse::Gestures::SwipeGesture* source);
};
// }

}}} // ::g::Fuse::Gestures
