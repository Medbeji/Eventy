// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Fuse.Animations.Anima-9f6f3909.h>
#include <Fuse.BasicTheme.SwitchBehavior.h>
#include <Fuse.Controls.ToggleControl.h>
#include <Fuse.Elements.Element.h>
#include <Fuse.Gestures.Clicker.h>
#include <Fuse.Gestures.Clicker-80b144c2.h>
#include <Fuse.Input.Pointer.h>
#include <Fuse.Input.PointerEventArgs.h>
#include <Fuse.Input.PointerMovedArgs.h>
#include <Fuse.Input.PointerMovedHandler.h>
#include <Fuse.Input.PointerPre-d85d5994.h>
#include <Fuse.Input.PointerPressedArgs.h>
#include <Fuse.Input.PointerRel-5863e73d.h>
#include <Fuse.Input.PointerReleasedArgs.h>
#include <Fuse.Node.h>
#include <Fuse.PlacedArgs.h>
#include <Fuse.PlacedHandler.h>
#include <Fuse.Visual.h>
#include <Fuse.VisualEvent-2.h>
#include <Uno.Action.h>
#include <Uno.Bool.h>
#include <Uno.Double.h>
#include <Uno.Exception.h>
#include <Uno.Float.h>
#include <Uno.Int.h>
#include <Uno.Math.h>
#include <Uno.Object.h>
#include <Uno.String.h>
#include <Uno.UX.ValueChangedArgs-1.h>
#include <Uno.UX.ValueChangedHandler-1.h>
static uString* STRINGS[1];
static uType* TYPES[9];

namespace g{
namespace Fuse{
namespace BasicTheme{

// /Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.BasicTheme/0.47.7/$.uno
// ------------------------------------------------------------------------------------------

// internal sealed class SwitchBehavior :113
// {
static void SwitchBehavior_build(uType* type)
{
    ::STRINGS[0] = uString::Const("SwitchBehavior must be rooted in a Switch");
    ::TYPES[0] = ::g::Uno::Action_typeof();
    ::TYPES[1] = ::g::Fuse::Controls::ToggleControl_typeof();
    ::TYPES[2] = ::g::Uno::UX::ValueChangedHandler_typeof()->MakeType(::g::Uno::Bool_typeof(), NULL);
    ::TYPES[3] = ::g::Fuse::Input::PointerPressedHandler_typeof();
    ::TYPES[4] = ::g::Fuse::Input::PointerMovedHandler_typeof();
    ::TYPES[5] = ::g::Fuse::Input::PointerReleasedHandler_typeof();
    ::TYPES[6] = ::g::Fuse::Gestures::ClickerEventHandler_typeof();
    ::TYPES[7] = ::g::Fuse::Elements::Element_typeof();
    ::TYPES[8] = ::g::Fuse::PlacedHandler_typeof();
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Triggers::Trigger_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Triggers::Trigger_type, interface1),
        ::g::Fuse::IProperties_typeof(), offsetof(::g::Fuse::Triggers::Trigger_type, interface2),
        ::g::Fuse::INotifyUnrooted_typeof(), offsetof(::g::Fuse::Triggers::Trigger_type, interface3),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Triggers::Trigger_type, interface4),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Triggers::Trigger_type, interface5),
        ::g::Fuse::Animations::IUnwrappedPlayerFeedback_typeof(), offsetof(::g::Fuse::Triggers::Trigger_type, interface6),
        ::g::Fuse::Animations::IBasePlayerFeedback_typeof(), offsetof(::g::Fuse::Triggers::Trigger_type, interface7));
    type->SetFields(29,
        ::TYPES[7/*Fuse.Elements.Element*/], offsetof(::g::Fuse::BasicTheme::SwitchBehavior, _bounds), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::BasicTheme::SwitchBehavior, _captured), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::BasicTheme::SwitchBehavior, _capturedIndex), 0,
        ::g::Fuse::Gestures::Clicker_typeof(), offsetof(::g::Fuse::BasicTheme::SwitchBehavior, _clicker), 0,
        ::g::Uno::Float2_typeof(), offsetof(::g::Fuse::BasicTheme::SwitchBehavior, _currentCoord), 0,
        ::g::Uno::Float2_typeof(), offsetof(::g::Fuse::BasicTheme::SwitchBehavior, _originalP), 0,
        ::g::Uno::Float2_typeof(), offsetof(::g::Fuse::BasicTheme::SwitchBehavior, _prevCoord), 0,
        ::TYPES[1/*Fuse.Controls.ToggleControl*/], offsetof(::g::Fuse::BasicTheme::SwitchBehavior, _switch), 0);
}

::g::Fuse::Triggers::Trigger_type* SwitchBehavior_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Trigger_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Triggers::Trigger_typeof();
    options.FieldCount = 37;
    options.InterfaceCount = 8;
    options.ObjectSize = sizeof(SwitchBehavior);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Trigger_type);
    type = (::g::Fuse::Triggers::Trigger_type*)uClassType::New("Fuse.BasicTheme.SwitchBehavior", options);
    type->fp_build_ = SwitchBehavior_build;
    type->fp_ctor_ = (void*)SwitchBehavior__New2_fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Node*))SwitchBehavior__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Node*))SwitchBehavior__OnUnrooted_fn;
    type->interface7.fp_OnPlaybackDone = (void(*)(uObject*, uObject*))::g::Fuse::Triggers::Trigger__FuseAnimationsIBasePlayerFeedbackOnPlaybackDone_fn;
    type->interface7.fp_OnStable = (void(*)(uObject*, uObject*))::g::Fuse::Triggers::Trigger__FuseAnimationsIBasePlayerFeedbackOnStable_fn;
    type->interface6.fp_OnProgressUpdated = (void(*)(uObject*, uObject*, double*, double*, int*))::g::Fuse::Triggers::Trigger__FuseAnimationsIUnwrappedPlayerFeedbackOnProgressUpdated_fn;
    type->interface4.fp_Clear = (void(*)(uObject*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingClear_fn;
    type->interface4.fp_Contains = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingContains_fn;
    type->interface0.fp_RemoveAt = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsIListFuseBindingRemoveAt_fn;
    type->interface5.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Node__UnoCollectionsIEnumerableFuseBindingGetEnumerator_fn;
    type->interface1.fp_SetScriptObject = (void(*)(uObject*, uObject*, ::g::Fuse::Scripting::Context*))::g::Fuse::Node__FuseScriptingIScriptObjectSetScriptObject_fn;
    type->interface4.fp_get_Count = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingget_Count_fn;
    type->interface0.fp_get_Item = (void(*)(uObject*, int*, uTRef))::g::Fuse::Node__UnoCollectionsIListFuseBindingget_Item_fn;
    type->interface1.fp_get_ScriptObject = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptObject_fn;
    type->interface1.fp_get_ScriptContext = (void(*)(uObject*, ::g::Fuse::Scripting::Context**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptContext_fn;
    type->interface3.fp_add_Unrooted = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__FuseINotifyUnrootedadd_Unrooted_fn;
    type->interface3.fp_remove_Unrooted = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__FuseINotifyUnrootedremove_Unrooted_fn;
    type->interface0.fp_Insert = (void(*)(uObject*, int*, void*))::g::Fuse::Node__Insert_fn;
    type->interface2.fp_get_Properties = (void(*)(uObject*, ::g::Fuse::Properties**))::g::Fuse::Node__get_Properties_fn;
    type->interface4.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Node__Add_fn;
    type->interface4.fp_Remove = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__Remove_fn;
    return type;
}

// public generated SwitchBehavior() :113
void SwitchBehavior__ctor_5_fn(SwitchBehavior* __this)
{
    __this->ctor_5();
}

// public Fuse.Elements.Element get_Bounds() :120
void SwitchBehavior__get_Bounds_fn(SwitchBehavior* __this, ::g::Fuse::Elements::Element** __retval)
{
    *__retval = __this->Bounds();
}

// public void set_Bounds(Fuse.Elements.Element value) :121
void SwitchBehavior__set_Bounds_fn(SwitchBehavior* __this, ::g::Fuse::Elements::Element* value)
{
    __this->Bounds(value);
}

// public generated SwitchBehavior New() :113
void SwitchBehavior__New2_fn(SwitchBehavior** __retval)
{
    *__retval = SwitchBehavior::New2();
}

// private void OnCaptureLost() :200
void SwitchBehavior__OnCaptureLost_fn(SwitchBehavior* __this)
{
    __this->OnCaptureLost();
}

// private void OnPlaced(object sender, Fuse.PlacedArgs args) :178
void SwitchBehavior__OnPlaced_fn(SwitchBehavior* __this, uObject* sender, ::g::Fuse::PlacedArgs* args)
{
    __this->OnPlaced(sender, args);
}

// private void OnPointerMoved(object sender, Fuse.Input.PointerMovedArgs args) :206
void SwitchBehavior__OnPointerMoved_fn(SwitchBehavior* __this, uObject* sender, ::g::Fuse::Input::PointerMovedArgs* args)
{
    __this->OnPointerMoved(sender, args);
}

// private void OnPointerPressed(object sender, Fuse.Input.PointerPressedArgs args) :187
void SwitchBehavior__OnPointerPressed_fn(SwitchBehavior* __this, uObject* sender, ::g::Fuse::Input::PointerPressedArgs* args)
{
    __this->OnPointerPressed(sender, args);
}

// private void OnPointerReleased(object sender, Fuse.Input.PointerReleasedArgs args) :242
void SwitchBehavior__OnPointerReleased_fn(SwitchBehavior* __this, uObject* sender, ::g::Fuse::Input::PointerReleasedArgs* args)
{
    __this->OnPointerReleased(sender, args);
}

// private void OnPointerTapped(object a, int tapCount) :251
void SwitchBehavior__OnPointerTapped_fn(SwitchBehavior* __this, uObject* a, int* tapCount)
{
    __this->OnPointerTapped(a, *tapCount);
}

// protected override sealed void OnRooted() :125
void SwitchBehavior__OnRooted_fn(SwitchBehavior* __this)
{
    uStackFrame __("Fuse.BasicTheme.SwitchBehavior", "OnRooted()");
    ::g::Fuse::Triggers::Trigger__OnRooted_fn(__this);
    __this->_switch = uAs< ::g::Fuse::Controls::ToggleControl*>(__this->Parent(), ::TYPES[1/*Fuse.Controls.ToggleControl*/]);

    if (__this->_switch == NULL)
        U_THROW(::g::Uno::Exception::New2(::STRINGS[0/*"SwitchBehav...*/]));

    uPtr(__this->_switch)->add_ValueChanged(uDelegate::New(::TYPES[2/*Uno.UX.ValueChangedHandler<bool>*/], (void*)SwitchBehavior__OnValueChanged_fn, __this));
    ::g::Fuse::VisualEvent__AddHandler_fn(uPtr(::g::Fuse::Input::Pointer::Pressed()), __this->_switch, uDelegate::New(::TYPES[3/*Fuse.Input.PointerPressedHandler*/], (void*)SwitchBehavior__OnPointerPressed_fn, __this));
    ::g::Fuse::VisualEvent__AddHandler_fn(uPtr(::g::Fuse::Input::Pointer::Moved()), __this->_switch, uDelegate::New(::TYPES[4/*Fuse.Input.PointerMovedHandler*/], (void*)SwitchBehavior__OnPointerMoved_fn, __this));
    ::g::Fuse::VisualEvent__AddHandler_fn(uPtr(::g::Fuse::Input::Pointer::Released()), __this->_switch, uDelegate::New(::TYPES[5/*Fuse.Input.PointerReleasedHandler*/], (void*)SwitchBehavior__OnPointerReleased_fn, __this));
    __this->_clicker = ::g::Fuse::Gestures::Clicker::AttachClicker(__this->_switch);
    uPtr(__this->_clicker)->add_TappedEvent(uDelegate::New(::TYPES[6/*Fuse.Gestures.ClickerEventHandler*/], (void*)SwitchBehavior__OnPointerTapped_fn, __this));

    if (__this->Bounds() == NULL)
        __this->Bounds(uAs< ::g::Fuse::Elements::Element*>(__this->_switch, ::TYPES[7/*Fuse.Elements.Element*/]));

    if (uPtr(__this->_switch)->Value())
        __this->Activate(NULL);
}

// protected override sealed void OnUnrooted() :148
void SwitchBehavior__OnUnrooted_fn(SwitchBehavior* __this)
{
    uStackFrame __("Fuse.BasicTheme.SwitchBehavior", "OnUnrooted()");
    uPtr(__this->_switch)->remove_ValueChanged(uDelegate::New(::TYPES[2/*Uno.UX.ValueChangedHandler<bool>*/], (void*)SwitchBehavior__OnValueChanged_fn, __this));
    ::g::Fuse::VisualEvent__RemoveHandler_fn(uPtr(::g::Fuse::Input::Pointer::Pressed()), __this->_switch, uDelegate::New(::TYPES[3/*Fuse.Input.PointerPressedHandler*/], (void*)SwitchBehavior__OnPointerPressed_fn, __this));
    ::g::Fuse::VisualEvent__RemoveHandler_fn(uPtr(::g::Fuse::Input::Pointer::Moved()), __this->_switch, uDelegate::New(::TYPES[4/*Fuse.Input.PointerMovedHandler*/], (void*)SwitchBehavior__OnPointerMoved_fn, __this));
    ::g::Fuse::VisualEvent__RemoveHandler_fn(uPtr(::g::Fuse::Input::Pointer::Released()), __this->_switch, uDelegate::New(::TYPES[5/*Fuse.Input.PointerReleasedHandler*/], (void*)SwitchBehavior__OnPointerReleased_fn, __this));
    uPtr(__this->_switch)->remove_Placed(uDelegate::New(::TYPES[8/*Fuse.PlacedHandler*/], (void*)SwitchBehavior__OnPlaced_fn, __this));
    uPtr(__this->_clicker)->remove_TappedEvent(uDelegate::New(::TYPES[6/*Fuse.Gestures.ClickerEventHandler*/], (void*)SwitchBehavior__OnPointerTapped_fn, __this));
    uPtr(__this->_clicker)->Detach();
    __this->_clicker = NULL;
    __this->_switch = NULL;
    __this->Bounds(NULL);
    ::g::Fuse::Input::Pointer::ReleaseCapture(__this);
    ::g::Fuse::Triggers::Trigger__OnUnrooted_fn(__this);
}

// private void OnValueChanged(object sender, Uno.UX.ValueChangedArgs<bool> args) :258
void SwitchBehavior__OnValueChanged_fn(SwitchBehavior* __this, uObject* sender, ::g::Uno::UX::ValueChangedArgs* args)
{
    __this->OnValueChanged(sender, args);
}

// private bool ReleaseCapture() :232
void SwitchBehavior__ReleaseCapture_fn(SwitchBehavior* __this, bool* __retval)
{
    *__retval = __this->ReleaseCapture();
}

// private float2 get_Size() :172
void SwitchBehavior__get_Size_fn(SwitchBehavior* __this, ::g::Uno::Float2* __retval)
{
    *__retval = __this->Size();
}

// public generated SwitchBehavior() [instance] :113
void SwitchBehavior::ctor_5()
{
    ctor_4();
}

// public Fuse.Elements.Element get_Bounds() [instance] :120
::g::Fuse::Elements::Element* SwitchBehavior::Bounds()
{
    return _bounds;
}

// public void set_Bounds(Fuse.Elements.Element value) [instance] :121
void SwitchBehavior::Bounds(::g::Fuse::Elements::Element* value)
{
    _bounds = value;
}

// private void OnCaptureLost() [instance] :200
void SwitchBehavior::OnCaptureLost()
{
    uStackFrame __("Fuse.BasicTheme.SwitchBehavior", "OnCaptureLost()");
    _captured = false;
    PlayEnd(uPtr(_switch)->Value(), NULL);
}

// private void OnPlaced(object sender, Fuse.PlacedArgs args) [instance] :178
void SwitchBehavior::OnPlaced(uObject* sender, ::g::Fuse::PlacedArgs* args)
{
    uStackFrame __("Fuse.BasicTheme.SwitchBehavior", "OnPlaced(object,Fuse.PlacedArgs)");
    PlayEnd(uPtr(_switch)->Value(), NULL);
}

// private void OnPointerMoved(object sender, Fuse.Input.PointerMovedArgs args) [instance] :206
void SwitchBehavior::OnPointerMoved(uObject* sender, ::g::Fuse::Input::PointerMovedArgs* args)
{
    uStackFrame __("Fuse.BasicTheme.SwitchBehavior", "OnPointerMoved(object,Fuse.Input.PointerMovedArgs)");

    if (_captured)
    {
        if (!uPtr(args)->IsHardCapturedTo(this))
        {
            if (::g::Uno::Math::Abs1(_originalP.X - uPtr(_switch)->WindowToLocal(uPtr(args)->WindowPoint()).X) > 10.0f)
            {
                if (!uPtr(args)->TryHardCapture(this, uDelegate::New(::TYPES[0/*Uno.Action*/], (void*)SwitchBehavior__OnCaptureLost_fn, this), NULL))
                {
                    OnCaptureLost();
                    return;
                }
            }
        }

        _prevCoord = _currentCoord;
        _currentCoord = uPtr(_switch)->WindowToLocal(uPtr(args)->WindowPoint());
        ::g::Uno::Float2 delta = ::g::Uno::Float2__op_Subtraction2(_currentCoord, _prevCoord);
        float p = delta.X / Size().X;
        Seek(Progress() + (double)p, uPtr(_switch)->Value() ? 1 : 0);
    }
}

// private void OnPointerPressed(object sender, Fuse.Input.PointerPressedArgs args) [instance] :187
void SwitchBehavior::OnPointerPressed(uObject* sender, ::g::Fuse::Input::PointerPressedArgs* args)
{
    uStackFrame __("Fuse.BasicTheme.SwitchBehavior", "OnPointerPressed(object,Fuse.Input.PointerPressedArgs)");

    if (_captured)
        return;

    if (uPtr(args)->TrySoftCapture(this, uDelegate::New(::TYPES[0/*Uno.Action*/], (void*)SwitchBehavior__OnCaptureLost_fn, this), NULL))
    {
        _captured = true;
        _capturedIndex = uPtr(args)->PointIndex();
        _originalP = (_prevCoord = (_currentCoord = uPtr(_switch)->WindowToLocal(args->WindowPoint())));
    }
}

// private void OnPointerReleased(object sender, Fuse.Input.PointerReleasedArgs args) [instance] :242
void SwitchBehavior::OnPointerReleased(uObject* sender, ::g::Fuse::Input::PointerReleasedArgs* args)
{
    uStackFrame __("Fuse.BasicTheme.SwitchBehavior", "OnPointerReleased(object,Fuse.Input.PointerReleasedArgs)");

    if (ReleaseCapture())
    {
        uPtr(_switch)->Value(Progress() >= 0.5);
        PlayEnd(uPtr(_switch)->Value(), NULL);
    }
}

// private void OnPointerTapped(object a, int tapCount) [instance] :251
void SwitchBehavior::OnPointerTapped(uObject* a, int tapCount)
{
    uStackFrame __("Fuse.BasicTheme.SwitchBehavior", "OnPointerTapped(object,int)");
    ReleaseCapture();
    uPtr(_switch)->Value(!uPtr(_switch)->Value());
    PlayEnd(uPtr(_switch)->Value(), NULL);
}

// private void OnValueChanged(object sender, Uno.UX.ValueChangedArgs<bool> args) [instance] :258
void SwitchBehavior::OnValueChanged(uObject* sender, ::g::Uno::UX::ValueChangedArgs* args)
{
    uStackFrame __("Fuse.BasicTheme.SwitchBehavior", "OnValueChanged(object,Uno.UX.ValueChangedArgs<bool>)");
    bool ret2;
    PlayEnd((::g::Uno::UX::ValueChangedArgs__get_Value_fn(uPtr(args), &ret2), ret2), NULL);
}

// private bool ReleaseCapture() [instance] :232
bool SwitchBehavior::ReleaseCapture()
{
    uStackFrame __("Fuse.BasicTheme.SwitchBehavior", "ReleaseCapture()");

    if (!_captured)
        return false;

    ::g::Fuse::Input::Pointer::ReleaseCapture(this);
    _captured = false;
    return true;
}

// private float2 get_Size() [instance] :172
::g::Uno::Float2 SwitchBehavior::Size()
{
    uStackFrame __("Fuse.BasicTheme.SwitchBehavior", "get_Size()");
    return uPtr(_bounds)->ActualSize();
}

// public generated SwitchBehavior New() [static] :113
SwitchBehavior* SwitchBehavior::New2()
{
    SwitchBehavior* obj1 = (SwitchBehavior*)uNew(SwitchBehavior_typeof());
    obj1->ctor_5();
    return obj1;
}
// }

}}} // ::g::Fuse::BasicTheme
