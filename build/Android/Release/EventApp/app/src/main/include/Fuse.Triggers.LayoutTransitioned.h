// This file was generated based on '../../AppData/Local/Fusetools/Packages/Fuse.Elements/0.46.1/triggers/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Triggers.LayoutTransitionedArgs.h>
#include <Fuse.Triggers.LayoutTransitionedHandler.h>
#include <Fuse.VisualEvent-2.h>
namespace g{namespace Fuse{namespace Triggers{struct LayoutTransitioned;}}}

namespace g{
namespace Fuse{
namespace Triggers{

// internal sealed class LayoutTransitioned :17
// {
::g::Fuse::VisualEvent_type* LayoutTransitioned_typeof();
void LayoutTransitioned__ctor_1_fn(LayoutTransitioned* __this);
void LayoutTransitioned__Invoke_fn(LayoutTransitioned* __this, uDelegate* handler, uObject* sender, ::g::Fuse::Triggers::LayoutTransitionedArgs* args);
void LayoutTransitioned__New1_fn(LayoutTransitioned** __retval);

struct LayoutTransitioned : ::g::Fuse::VisualEvent
{
    void ctor_1();
    static LayoutTransitioned* New1();
};
// }

}}} // ::g::Fuse::Triggers
