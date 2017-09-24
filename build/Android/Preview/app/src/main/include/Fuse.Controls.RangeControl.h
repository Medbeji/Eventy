// This file was generated based on '/Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Controls.Primitives/0.47.7/rangecontrols/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IResize.h>
#include <Fuse.Binding.h>
#include <Fuse.Controls.Native.-5999be91.h>
#include <Fuse.Controls.Panel.h>
#include <Fuse.IActualPlacement.h>
#include <Fuse.INotifyUnrooted.h>
#include <Fuse.IProperties.h>
#include <Fuse.Node.h>
#include <Fuse.Scripting.IScriptObject.h>
#include <Fuse.Triggers.Actions.IHide.h>
#include <Fuse.Triggers.Actions.IShow.h>
#include <Fuse.Triggers.Actions-ea70af1f.h>
#include <Fuse.Triggers.IProgress.h>
#include <Fuse.Triggers.IValue-1.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.Double.h>
#include <Uno.UX.IPropertyListener.h>
namespace g{namespace Fuse{namespace Controls{struct RangeControl;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}

namespace g{
namespace Fuse{
namespace Controls{

// public class RangeControl :561
// {
struct RangeControl_type : ::g::Fuse::Controls::Control_type
{
    ::g::Fuse::Triggers::IProgress interface15;
    ::g::Fuse::Triggers::IValue interface16;
    ::g::Fuse::Controls::Native::IRangeViewHost interface17;
};

RangeControl_type* RangeControl_typeof();
void RangeControl__ctor_7_fn(RangeControl* __this);
void RangeControl__ClampToRange_fn(RangeControl* __this, double* v, double* __retval);
void RangeControl__FuseControlsNativeIRangeViewHostOnProgressChanged_fn(RangeControl* __this, double* newProgress);
void RangeControl__get_Maximum_fn(RangeControl* __this, double* __retval);
void RangeControl__set_Maximum_fn(RangeControl* __this, double* value);
void RangeControl__get_Minimum_fn(RangeControl* __this, double* __retval);
void RangeControl__set_Minimum_fn(RangeControl* __this, double* value);
void RangeControl__New4_fn(RangeControl** __retval);
void RangeControl__OnProgressChanged_fn(RangeControl* __this);
void RangeControl__OnRangeChanged_fn(RangeControl* __this);
void RangeControl__OnValueChanged_fn(RangeControl* __this, double* value, uObject* origin);
void RangeControl__get_Progress_fn(RangeControl* __this, double* __retval);
void RangeControl__set_Progress_fn(RangeControl* __this, double* value);
void RangeControl__add_ProgressChanged_fn(RangeControl* __this, uDelegate* value);
void RangeControl__remove_ProgressChanged_fn(RangeControl* __this, uDelegate* value);
void RangeControl__PushPropertiesToNativeView_fn(RangeControl* __this);
void RangeControl__get_RangeView_fn(RangeControl* __this, uObject** __retval);
void RangeControl__get_RelativeUserStep_fn(RangeControl* __this, double* __retval);
void RangeControl__set_RelativeUserStep_fn(RangeControl* __this, double* value);
void RangeControl__get_RelativeValue_fn(RangeControl* __this, double* __retval);
void RangeControl__set_RelativeValue_fn(RangeControl* __this, double* value);
void RangeControl__SetValue_fn(RangeControl* __this, double* value, uObject* origin);
void RangeControl__get_UserStep_fn(RangeControl* __this, double* __retval);
void RangeControl__set_UserStep_fn(RangeControl* __this, double* value);
void RangeControl__get_Value_fn(RangeControl* __this, double* __retval);
void RangeControl__set_Value_fn(RangeControl* __this, double* value);
void RangeControl__add_ValueChanged_fn(RangeControl* __this, uDelegate* value);
void RangeControl__remove_ValueChanged_fn(RangeControl* __this, uDelegate* value);
void RangeControl__ValueFromRelative_fn(RangeControl* __this, double* relative, double* __retval);
void RangeControl__ValueToRelative_fn(RangeControl* __this, double* value, double* __retval);

struct RangeControl : ::g::Fuse::Controls::Panel
{
    double _maximum;
    double _minimum;
    static ::g::Uno::UX::Selector _progressName_;
    static ::g::Uno::UX::Selector& _progressName() { return RangeControl_typeof()->Init(), _progressName_; }
    double _userStep;
    double _value;
    static ::g::Uno::UX::Selector _valueName_;
    static ::g::Uno::UX::Selector& _valueName() { return RangeControl_typeof()->Init(), _valueName_; }
    uStrong<uDelegate*> ValueChanged1;

    void ctor_7();
    double ClampToRange(double v);
    double Maximum();
    void Maximum(double value);
    double Minimum();
    void Minimum(double value);
    void OnProgressChanged();
    void OnRangeChanged();
    void OnValueChanged(double value, uObject* origin);
    double Progress();
    void Progress(double value);
    void add_ProgressChanged(uDelegate* value);
    void remove_ProgressChanged(uDelegate* value);
    uObject* RangeView();
    double RelativeUserStep();
    void RelativeUserStep(double value);
    double RelativeValue();
    void RelativeValue(double value);
    void SetValue(double value, uObject* origin);
    double UserStep();
    void UserStep(double value);
    double Value();
    void Value(double value);
    void add_ValueChanged(uDelegate* value);
    void remove_ValueChanged(uDelegate* value);
    double ValueFromRelative(double relative);
    double ValueToRelative(double value);
    static RangeControl* New4();
};
// }

}}} // ::g::Fuse::Controls
