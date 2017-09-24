// This file was generated based on '../../AppData/Local/Fusetools/Packages/Fuse.Reactive/0.46.1/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.INameListener.h>
#include <Fuse.Reactive.ContextBinding.h>
#include <Fuse.Scripting.IObserver.h>
#include <Uno.UX.IPropertyListener.h>
namespace g{namespace Fuse{namespace Reactive{struct DataBinding;}}}
namespace g{namespace Fuse{namespace Scripting{struct ListMirror;}}}
namespace g{namespace Fuse{namespace Scripting{struct Observable__Subscription;}}}
namespace g{namespace Fuse{namespace Triggers{struct BusyTask;}}}
namespace g{namespace Fuse{struct Node;}}
namespace g{namespace Uno{namespace UX{struct Property1;}}}
namespace g{namespace Uno{namespace UX{struct PropertyObject;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}

namespace g{
namespace Fuse{
namespace Reactive{

// public class DataBinding<T> :180
// {
struct DataBinding_type : ::g::Fuse::Reactive::ContextBinding_type
{
    ::g::Fuse::Scripting::IObserver interface0;
    ::g::Fuse::INameListener interface1;
    ::g::Uno::UX::IPropertyListener interface2;
    void(*fp_get_Clear)(::g::Fuse::Reactive::DataBinding*, bool*);
    void(*fp_PushValue)(::g::Fuse::Reactive::DataBinding*, uObject*);
    void(*fp_get_Read)(::g::Fuse::Reactive::DataBinding*, bool*);
    void(*fp_get_Write)(::g::Fuse::Reactive::DataBinding*, bool*);
};

DataBinding_type* DataBinding_typeof();
void DataBinding__ctor_2_fn(DataBinding* __this, ::g::Uno::UX::Property1* target, uString* key);
void DataBinding__Acceptor_fn(uType* __type, uObject* obj, bool* __retval);
void DataBinding__AddNameListener_fn(DataBinding* __this, uString* name);
void DataBinding__CleanupNameListener_fn(DataBinding* __this);
void DataBinding__get_Clear_fn(DataBinding* __this, bool* __retval);
void DataBinding__ClearFailed_fn(DataBinding* __this);
void DataBinding__ClearValue_fn(DataBinding* __this);
void DataBinding__FuseINameListenerOnNameChanged_fn(DataBinding* __this, ::g::Fuse::Node* obj, ::g::Uno::UX::Selector* name);
void DataBinding__FuseScriptingIObserverOnAdd_fn(DataBinding* __this, uObject* addedValue);
void DataBinding__FuseScriptingIObserverOnClear_fn(DataBinding* __this);
void DataBinding__FuseScriptingIObserverOnFailed_fn(DataBinding* __this, uString* message);
void DataBinding__FuseScriptingIObserverOnInsertAt_fn(DataBinding* __this, int* index, uObject* value);
void DataBinding__FuseScriptingIObserverOnNewAll_fn(DataBinding* __this, ::g::Fuse::Scripting::ListMirror* values);
void DataBinding__FuseScriptingIObserverOnNewAt_fn(DataBinding* __this, int* index, uObject* value);
void DataBinding__FuseScriptingIObserverOnRemoveAt_fn(DataBinding* __this, int* index);
void DataBinding__FuseScriptingIObserverOnSet_fn(DataBinding* __this, uObject* newValue);
void DataBinding__InvalidListOperation_fn(DataBinding* __this);
void DataBinding__MarkFailed_fn(DataBinding* __this, uString* message);
void DataBinding__New1_fn(uType* __type, ::g::Uno::UX::Property1* target, uString* key, DataBinding** __retval);
void DataBinding__NewValue_fn(DataBinding* __this, uObject* value);
void DataBinding__OnRooted_fn(DataBinding* __this);
void DataBinding__OnUnrooted_fn(DataBinding* __this);
void DataBinding__PushValue_fn(DataBinding* __this, uObject* newValue);
void DataBinding__get_Read_fn(DataBinding* __this, bool* __retval);
void DataBinding__SetTarget_fn(DataBinding* __this, void* value);
void DataBinding__get_Target_fn(DataBinding* __this, ::g::Uno::UX::Property1** __retval);
void DataBinding__set_Target_fn(DataBinding* __this, ::g::Uno::UX::Property1* value);
void DataBinding__ToSelector_fn(uType* __type, uObject* newValue, ::g::Uno::UX::Selector* __retval);
void DataBinding__TryPushAsMarshalledValue_fn(DataBinding* __this, uObject* newValue, bool* __retval);
void DataBinding__TryPushAsNodeName_fn(DataBinding* __this, uObject* newValue, bool* __retval);
void DataBinding__TryPushAsValue_fn(DataBinding* __this, uObject* newValue, bool* __retval);
void DataBinding__TypeToJSName_fn(uType* __type, uType* t, uString** __retval);
void DataBinding__UnoUXIPropertyListenerOnPropertyChanged_fn(DataBinding* __this, ::g::Uno::UX::PropertyObject* obj, ::g::Uno::UX::Selector* prop);
void DataBinding__get_Write_fn(DataBinding* __this, bool* __retval);

struct DataBinding : ::g::Fuse::Reactive::ContextBinding
{
    bool _allowMarshal;
    bool _allowNodeName;
    uStrong< ::g::Fuse::Triggers::BusyTask*> _busyTask;
    uStrong<uObject*> _currentValue;
    bool _nameListening;
    uStrong< ::g::Fuse::Scripting::Observable__Subscription*> _subscription;
    uStrong< ::g::Uno::UX::Property1*> _Target;

    void ctor_2(::g::Uno::UX::Property1* target, uString* key);
    void AddNameListener(uString* name);
    void CleanupNameListener();
    bool Clear() { bool __retval; return (((DataBinding_type*)__type)->fp_get_Clear)(this, &__retval), __retval; }
    void ClearFailed();
    void ClearValue();
    void InvalidListOperation();
    void MarkFailed(uString* message);
    void PushValue(uObject* newValue) { (((DataBinding_type*)__type)->fp_PushValue)(this, newValue); }
    bool Read() { bool __retval; return (((DataBinding_type*)__type)->fp_get_Read)(this, &__retval), __retval; }
    template<class T>
    void SetTarget(T value) { DataBinding__SetTarget_fn(this, uConstrain(__type->GetBase(DataBinding_typeof())->T(0), value)); }
    ::g::Uno::UX::Property1* Target();
    void Target(::g::Uno::UX::Property1* value);
    bool TryPushAsMarshalledValue(uObject* newValue);
    bool TryPushAsNodeName(uObject* newValue);
    bool TryPushAsValue(uObject* newValue);
    bool Write() { bool __retval; return (((DataBinding_type*)__type)->fp_get_Write)(this, &__retval), __retval; }
    static bool Acceptor(uType* __type, uObject* obj);
    static DataBinding* New1(uType* __type, ::g::Uno::UX::Property1* target, uString* key);
    static void PushValue(DataBinding* __this, uObject* newValue) { DataBinding__PushValue_fn(__this, newValue); }
    static ::g::Uno::UX::Selector ToSelector(uType* __type, uObject* newValue);
    static uString* TypeToJSName(uType* __type, uType* t);
    static bool Clear(DataBinding* __this) { bool __retval; return DataBinding__get_Clear_fn(__this, &__retval), __retval; }
    static bool Read(DataBinding* __this) { bool __retval; return DataBinding__get_Read_fn(__this, &__retval), __retval; }
    static bool Write(DataBinding* __this) { bool __retval; return DataBinding__get_Write_fn(__this, &__retval), __retval; }
};
// }

}}} // ::g::Fuse::Reactive
