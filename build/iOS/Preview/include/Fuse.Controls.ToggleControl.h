// This file was generated based on '/Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Controls.Primitives/1.0.2/togglecontrols/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IResize.h>
#include <Fuse.Binding.h>
#include <Fuse.Controls.Native.-ba5282a0.h>
#include <Fuse.Controls.Panel.h>
#include <Fuse.Drawing.ISurfaceDrawable.h>
#include <Fuse.IActualPlacement.h>
#include <Fuse.INotifyUnrooted.h>
#include <Fuse.IProperties.h>
#include <Fuse.Node.h>
#include <Fuse.Scripting.IScriptObject.h>
#include <Fuse.Triggers.Actions.IHide.h>
#include <Fuse.Triggers.Actions.IShow.h>
#include <Fuse.Triggers.Actions-b5190bae.h>
#include <Fuse.Triggers.Actions-ea70af1f.h>
#include <Fuse.Triggers.IValue-1.h>
#include <Uno.Bool.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.UX.IPropertyListener.h>
namespace g{namespace Fuse{namespace Controls{struct ToggleControl;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}

namespace g{
namespace Fuse{
namespace Controls{

// public class ToggleControl :66
// {
struct ToggleControl_type : ::g::Fuse::Controls::Panel_type
{
    ::g::Fuse::Triggers::IValue interface16;
    ::g::Fuse::Controls::Native::IToggleViewHost interface17;
    ::g::Fuse::Triggers::Actions::IToggleable interface18;
};

ToggleControl_type* ToggleControl_typeof();
void ToggleControl__ctor_7_fn(ToggleControl* __this);
void ToggleControl__FuseControlsNativeIToggleViewHostOnValueChanged_fn(ToggleControl* __this, bool* newValue);
void ToggleControl__New4_fn(ToggleControl** __retval);
void ToggleControl__OnValueChanged_fn(ToggleControl* __this, bool* value, uObject* origin);
void ToggleControl__PushPropertiesToNativeView_fn(ToggleControl* __this);
void ToggleControl__SetValue_fn(ToggleControl* __this, bool* value, uObject* origin);
void ToggleControl__Toggle_fn(ToggleControl* __this);
void ToggleControl__get_ToggleView_fn(ToggleControl* __this, uObject** __retval);
void ToggleControl__get_Value_fn(ToggleControl* __this, bool* __retval);
void ToggleControl__set_Value_fn(ToggleControl* __this, bool* value);
void ToggleControl__add_ValueChanged_fn(ToggleControl* __this, uDelegate* value);
void ToggleControl__remove_ValueChanged_fn(ToggleControl* __this, uDelegate* value);

struct ToggleControl : ::g::Fuse::Controls::Panel
{
    bool _value;
    static ::g::Uno::UX::Selector _valueName_;
    static ::g::Uno::UX::Selector& _valueName() { return ToggleControl_typeof()->Init(), _valueName_; }
    uStrong<uDelegate*> ValueChanged1;

    void ctor_7();
    void OnValueChanged(bool value, uObject* origin);
    void SetValue(bool value, uObject* origin);
    void Toggle();
    uObject* ToggleView();
    bool Value();
    void Value(bool value);
    void add_ValueChanged(uDelegate* value);
    void remove_ValueChanged(uDelegate* value);
    static ToggleControl* New4();
};
// }

}}} // ::g::Fuse::Controls
