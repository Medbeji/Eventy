// This file was generated based on '/Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Controls.Native/1.0.2/ios/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Fuse.Controls.Native.-4016d338.h>
#include <Fuse.Controls.Native.-ba5282a0.h>
#include <Fuse.Controls.Native.-e48daf2f.h>
#include <Fuse.Controls.Native.-e502cdf1.h>
#include <Fuse.Controls.Native.iOS.View.h>
#include <ObjC.Object.h>
#include <UIKit/UIKit.h>
#include <Uno.Action-2.h>
#include <Uno.Bool.h>
#include <uObjC.Foreign.h>
static uType* TYPES[3];

namespace g{
namespace Fuse{
namespace Controls{
namespace Native{
namespace iOS{

// public sealed extern class Switch :2320
// {
static void Switch_build(uType* type)
{
    ::TYPES[0] = ::g::Uno::Action2_typeof()->MakeType(::g::ObjC::Object_typeof(), ::g::ObjC::Object_typeof(), NULL);
    ::TYPES[1] = ::g::Uno::IDisposable_typeof();
    ::TYPES[2] = ::g::Fuse::Controls::Native::IToggleViewHost_typeof();
    type->SetInterfaces(
        ::TYPES[1/*Uno.IDisposable*/], offsetof(Switch_type, interface0),
        ::g::Fuse::Controls::Native::IView_typeof(), offsetof(Switch_type, interface1),
        ::g::Fuse::Controls::Native::ILeafView_typeof(), offsetof(Switch_type, interface2),
        ::g::Fuse::Controls::Native::IToggleView_typeof(), offsetof(Switch_type, interface3));
    type->SetFields(7,
        ::TYPES[2/*Fuse.Controls.Native.IToggleViewHost*/], offsetof(::g::Fuse::Controls::Native::iOS::Switch, _host), 0,
        ::TYPES[1/*Uno.IDisposable*/], offsetof(::g::Fuse::Controls::Native::iOS::Switch, _valueChangedEvent), 0);
    type->Reflection.SetFunctions(2,
        new uFunction(".ctor", NULL, (void*)Switch__New3_fn, 0, true, type, 1, ::TYPES[2/*Fuse.Controls.Native.IToggleViewHost*/]),
        new uFunction("set_Value", NULL, (void*)Switch__set_Value_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Bool_typeof()));
}

Switch_type* Switch_typeof()
{
    static uSStrong<Switch_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Controls::Native::iOS::LeafView_typeof();
    options.FieldCount = 9;
    options.InterfaceCount = 4;
    options.ObjectSize = sizeof(Switch);
    options.TypeSize = sizeof(Switch_type);
    type = (Switch_type*)uClassType::New("Fuse.Controls.Native.iOS.Switch", options);
    type->fp_build_ = Switch_build;
    type->fp_Dispose = (void(*)(::g::Fuse::Controls::Native::ViewHandle*))Switch__Dispose_fn;
    type->interface3.fp_set_Value = (void(*)(uObject*, bool*))Switch__set_Value_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))Switch__Dispose_fn;
    return type;
}

// public Switch(Fuse.Controls.Native.IToggleViewHost host) :2332
void Switch__ctor_5_fn(Switch* __this, uObject* host)
{
    __this->ctor_5(host);
}

// private static ObjC.Object Create() :2352
void Switch__Create_fn(::g::ObjC::Object** __retval)
{
    *__retval = Switch::Create();
}

// public override sealed void Dispose() :2338
void Switch__Dispose_fn(Switch* __this)
{
    uStackFrame __("Fuse.Controls.Native.iOS.Switch", "Dispose()");
    __this->_host = NULL;
    ::g::Uno::IDisposable::Dispose(uInterface(uPtr(__this->_valueChangedEvent), ::TYPES[1/*Uno.IDisposable*/]));
    __this->_valueChangedEvent = NULL;
    ::g::Fuse::Controls::Native::ViewHandle__Dispose_fn(__this);
}

// private static bool GetValue(ObjC.Object handle) :2358
void Switch__GetValue_fn(::g::ObjC::Object* handle, bool* __retval)
{
    *__retval = Switch::GetValue(handle);
}

// public Switch New(Fuse.Controls.Native.IToggleViewHost host) :2332
void Switch__New3_fn(uObject* host, Switch** __retval)
{
    *__retval = Switch::New3(host);
}

// private void OnValueChanged(ObjC.Object sender, ObjC.Object uiEvent) :2346
void Switch__OnValueChanged_fn(Switch* __this, ::g::ObjC::Object* sender, ::g::ObjC::Object* uiEvent)
{
    __this->OnValueChanged(sender, uiEvent);
}

// private static void SetValue(ObjC.Object handle, bool value) :2365
void Switch__SetValue_fn(::g::ObjC::Object* handle, bool* value)
{
    Switch::SetValue(handle, *value);
}

// public void set_Value(bool value) :2325
void Switch__set_Value_fn(Switch* __this, bool* value)
{
    __this->Value(*value);
}

// public Switch(Fuse.Controls.Native.IToggleViewHost host) [instance] :2332
void Switch::ctor_5(uObject* host)
{
    uStackFrame __("Fuse.Controls.Native.iOS.Switch", ".ctor(Fuse.Controls.Native.IToggleViewHost)");
    ctor_4(Switch::Create());
    _host = host;
    _valueChangedEvent = ::g::Fuse::Controls::Native::iOS::UIControlEvent::AddValueChangedCallback(Handle(), uDelegate::New(::TYPES[0/*Uno.Action<ObjC.Object, ObjC.Object>*/], (void*)Switch__OnValueChanged_fn, this));
}

// private void OnValueChanged(ObjC.Object sender, ObjC.Object uiEvent) [instance] :2346
void Switch::OnValueChanged(::g::ObjC::Object* sender, ::g::ObjC::Object* uiEvent)
{
    uStackFrame __("Fuse.Controls.Native.iOS.Switch", "OnValueChanged(ObjC.Object,ObjC.Object)");
    ::g::Fuse::Controls::Native::IToggleViewHost::OnValueChanged(uInterface(uPtr(_host), ::TYPES[2/*Fuse.Controls.Native.IToggleViewHost*/]), Switch::GetValue(Handle()));
}

// public void set_Value(bool value) [instance] :2325
void Switch::Value(bool value)
{
    Switch::SetValue(Handle(), value);
}

// private static ObjC.Object Create() [static] :2352
::g::ObjC::Object* Switch::Create()
{
    @autoreleasepool
    {
        return ::g::ObjC::Object::Create([] () -> ::id
        {
            return [[::UISwitch alloc] init];
        } ());
        
    }
    
}

// private static bool GetValue(ObjC.Object handle) [static] :2358
bool Switch::GetValue(::g::ObjC::Object* handle)
{
    @autoreleasepool
    {
        return [] (::id handle) -> bool
        {
            ::UISwitch* sw = (::UISwitch*)handle;
            return [sw isOn];
        } (::g::ObjC::Object::GetHandle(handle));
        
    }
    
}

// public Switch New(Fuse.Controls.Native.IToggleViewHost host) [static] :2332
Switch* Switch::New3(uObject* host)
{
    Switch* obj1 = (Switch*)uNew(Switch_typeof());
    obj1->ctor_5(host);
    return obj1;
}

// private static void SetValue(ObjC.Object handle, bool value) [static] :2365
void Switch::SetValue(::g::ObjC::Object* handle, bool value)
{
    @autoreleasepool
    {
        [] (::id handle, bool value) -> void
        {
            ::UISwitch* sw = (::UISwitch*)handle;
            [sw setOn:value];
        } (::g::ObjC::Object::GetHandle(handle), value);
        
    }
    
}
// }

}}}}} // ::g::Fuse::Controls::Native::iOS
