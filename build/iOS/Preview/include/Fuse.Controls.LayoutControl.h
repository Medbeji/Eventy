// This file was generated based on '/Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Controls.Panels/1.0.2/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IResize.h>
#include <Fuse.Binding.h>
#include <Fuse.Controls.Control.h>
#include <Fuse.IActualPlacement.h>
#include <Fuse.INotifyUnrooted.h>
#include <Fuse.IProperties.h>
#include <Fuse.Node.h>
#include <Fuse.Scripting.IScriptObject.h>
#include <Fuse.Triggers.Actions.IHide.h>
#include <Fuse.Triggers.Actions.IShow.h>
#include <Fuse.Triggers.Actions-ea70af1f.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.UX.IPropertyListener.h>
namespace g{namespace Fuse{namespace Controls{struct LayoutControl;}}}
namespace g{namespace Fuse{namespace Controls{struct LayoutControlSurface;}}}
namespace g{namespace Fuse{namespace Drawing{struct Surface;}}}
namespace g{namespace Fuse{namespace Elements{struct Element;}}}
namespace g{namespace Fuse{namespace Layouts{struct Layout;}}}
namespace g{namespace Fuse{struct LayoutParams;}}
namespace g{namespace Fuse{struct Visual;}}
namespace g{namespace Uno{struct Float2;}}

namespace g{
namespace Fuse{
namespace Controls{

// public partial class LayoutControl :990
// {
::g::Fuse::Controls::Control_type* LayoutControl_typeof();
void LayoutControl__ctor_5_fn(LayoutControl* __this);
void LayoutControl__ArrangePaddingBox_fn(LayoutControl* __this, ::g::Fuse::LayoutParams* lp);
void LayoutControl__GetContentSize_fn(LayoutControl* __this, ::g::Fuse::LayoutParams* lp, ::g::Uno::Float2* __retval);
void LayoutControl__GetLayoutMaster_fn(::g::Fuse::Elements::Element* elm, ::g::Fuse::Elements::Element** __retval);
void LayoutControl__IsMarginBoxDependent_fn(LayoutControl* __this, ::g::Fuse::Visual* child, int* __retval);
void LayoutControl__ISurfaceDrawableDraw_fn(LayoutControl* __this, ::g::Fuse::Drawing::Surface* surface);
void LayoutControl__get_Layout_fn(LayoutControl* __this, ::g::Fuse::Layouts::Layout** __retval);
void LayoutControl__set_Layout_fn(LayoutControl* __this, ::g::Fuse::Layouts::Layout* value);
void LayoutControl__get_LayoutSurface_fn(LayoutControl* __this, ::g::Fuse::Drawing::Surface** __retval);
void LayoutControl__New2_fn(LayoutControl** __retval);
void LayoutControl__OnChildAdded_fn(LayoutControl* __this, ::g::Fuse::Node* elm);
void LayoutControl__OnChildRemoved_fn(LayoutControl* __this, ::g::Fuse::Node* elm);
void LayoutControl__OnRooted_fn(LayoutControl* __this);
void LayoutControl__OnUnrooted_fn(LayoutControl* __this);
void LayoutControl__SetLayoutMaster_fn(::g::Fuse::Elements::Element* elm, ::g::Fuse::Elements::Element* master);
void LayoutControl__SurfaceRooted_fn(LayoutControl* __this, bool* require);
void LayoutControl__SurfaceUnrooted_fn(LayoutControl* __this);

struct LayoutControl : ::g::Fuse::Controls::Control
{
    uStrong< ::g::Fuse::Layouts::Layout*> _layout;
    uStrong< ::g::Fuse::Controls::LayoutControlSurface*> _surface;

    void ctor_5();
    void ISurfaceDrawableDraw(::g::Fuse::Drawing::Surface* surface);
    ::g::Fuse::Layouts::Layout* Layout();
    void Layout(::g::Fuse::Layouts::Layout* value);
    ::g::Fuse::Drawing::Surface* LayoutSurface();
    void SurfaceRooted(bool require);
    void SurfaceUnrooted();
    static ::g::Fuse::Elements::Element* GetLayoutMaster(::g::Fuse::Elements::Element* elm);
    static LayoutControl* New2();
    static void SetLayoutMaster(::g::Fuse::Elements::Element* elm, ::g::Fuse::Elements::Element* master);
};
// }

}}} // ::g::Fuse::Controls
