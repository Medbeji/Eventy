// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Fuse.Elements.Element.h>
#include <Fuse.Elements.HitTestMode.h>
#include <Fuse.HitTestCallback.h>
#include <Fuse.HitTestContext.h>
#include <Fuse.HitTestResult.h>
#include <Fuse.Input.Pointer.h>
#include <Fuse.Input.PointerEventArgs.h>
#include <Fuse.Input.PointerMovedArgs.h>
#include <Fuse.Input.PointerMovedHandler.h>
#include <Fuse.Input.PointerPre-d85d5994.h>
#include <Fuse.Input.PointerPressedArgs.h>
#include <Fuse.Visual.h>
#include <Fuse.VisualEvent-2.h>
#include <Outracks.IBinaryMessage.h>
#include <Outracks.Simulator.Cl-49659bf2.h>
#include <Outracks.Simulator.Cl-9b13a41f.h>
#include <Outracks.UnoHost.Bina-58253e0.h>
#include <Outracks.UnoHost.Empt-1009c907.h>
#include <Outracks.UnoHost.FusionInterop.h>
#include <Outracks.UnoHost.HitTestQuery.h>
#include <Outracks.UnoHost.Memb-cc89c4ad.h>
#include <Outracks.UnoHost.Reflection.h>
#include <Outracks.UnoHost.TypeNotFound.h>
#include <Outracks.UnoHost.Unam-2f25db91.h>
#include <Uno.Action-1.h>
#include <Uno.Bool.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.Collections.List-1.h>
#include <Uno.Exception.h>
#include <Uno.IDisposable.h>
#include <Uno.Object.h>
#include <Uno.String.h>
static uString* STRINGS[7];
static uType* TYPES[5];

namespace g{
namespace Outracks{
namespace UnoHost{

// /usr/local/share/uno/Packages/Outracks.Simulator.Common.Uno/0.0.0/unohost.common/$.uno
// --------------------------------------------------------------------------------------

// public static class BinaryMessageInbox :11
// {
static void BinaryMessageInbox_build(uType* type)
{
    type->Reflection.SetFunctions(2,
        new uFunction("Receive", NULL, (void*)BinaryMessageInbox__Receive1_fn, 0, true, ::g::Uno::IDisposable_typeof(), 1, ::g::Uno::Action1_typeof()->MakeType(::g::Outracks::IBinaryMessage_typeof(), NULL)),
        new uFunction("Send", NULL, (void*)BinaryMessageInbox__Send_fn, 0, true, uVoid_typeof(), 1, ::g::Outracks::IBinaryMessage_typeof()));
}

uClassType* BinaryMessageInbox_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Outracks.UnoHost.BinaryMessageInbox", options);
    type->fp_build_ = BinaryMessageInbox_build;
    return type;
}

// public static extern Uno.IDisposable Receive(Uno.Action<Outracks.IBinaryMessage> onReceive) :17
void BinaryMessageInbox__Receive1_fn(uDelegate* onReceive, uObject** __retval)
{
    *__retval = BinaryMessageInbox::Receive1(onReceive);
}

// public static extern void Send(Outracks.IBinaryMessage message) :13
void BinaryMessageInbox__Send_fn(uObject* message)
{
    BinaryMessageInbox::Send(message);
}

// public static extern Uno.IDisposable Receive(Uno.Action<Outracks.IBinaryMessage> onReceive) [static] :17
uObject* BinaryMessageInbox::Receive1(uDelegate* onReceive)
{
    uStackFrame __("Outracks.UnoHost.BinaryMessageInbox", "Receive(Uno.Action<Outracks.IBinaryMessage>)");
    return (uObject*)::g::Outracks::UnoHost::EmptyDisposable::New1();
}

// public static extern void Send(Outracks.IBinaryMessage message) [static] :13
void BinaryMessageInbox::Send(uObject* message)
{
}
// }

// /usr/local/share/uno/Packages/Outracks.Simulator.Common.Uno/0.0.0/unohost.common/$.uno
// --------------------------------------------------------------------------------------

// internal sealed class EmptyDisposable :28
// {
static void EmptyDisposable_build(uType* type)
{
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(EmptyDisposable_type, interface0));
}

EmptyDisposable_type* EmptyDisposable_typeof()
{
    static uSStrong<EmptyDisposable_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(EmptyDisposable);
    options.TypeSize = sizeof(EmptyDisposable_type);
    type = (EmptyDisposable_type*)uClassType::New("Outracks.UnoHost.EmptyDisposable", options);
    type->fp_build_ = EmptyDisposable_build;
    type->fp_ctor_ = (void*)EmptyDisposable__New1_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))EmptyDisposable__Dispose_fn;
    return type;
}

// public generated EmptyDisposable() :28
void EmptyDisposable__ctor__fn(EmptyDisposable* __this)
{
    __this->ctor_();
}

// public void Dispose() :30
void EmptyDisposable__Dispose_fn(EmptyDisposable* __this)
{
    __this->Dispose();
}

// public generated EmptyDisposable New() :28
void EmptyDisposable__New1_fn(EmptyDisposable** __retval)
{
    *__retval = EmptyDisposable::New1();
}

// public generated EmptyDisposable() [instance] :28
void EmptyDisposable::ctor_()
{
}

// public void Dispose() [instance] :30
void EmptyDisposable::Dispose()
{
}

// public generated EmptyDisposable New() [static] :28
EmptyDisposable* EmptyDisposable::New1()
{
    EmptyDisposable* obj1 = (EmptyDisposable*)uNew(EmptyDisposable_typeof());
    obj1->ctor_();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Outracks.Simulator.Client.Uno/0.1.0/$.uno
// -----------------------------------------------------------------------

// public sealed class FusionInterop :17
// {
static void FusionInterop_build(uType* type)
{
    ::TYPES[0] = ::g::Fuse::HitTestCallback_typeof();
    ::TYPES[1] = ::g::Fuse::Elements::Element_typeof();
    ::TYPES[2] = ::g::Fuse::Input::PointerMovedHandler_typeof();
    ::TYPES[3] = ::g::Fuse::Input::PointerPressedHandler_typeof();
    type->SetFields(0,
        ::g::Uno::Action1_typeof()->MakeType(::g::Uno::Float2_typeof(), NULL), offsetof(::g::Outracks::UnoHost::FusionInterop, _handler), 0,
        uObject_typeof(), (uintptr_t)&::g::Outracks::UnoHost::FusionInterop::Content_, uFieldFlagsStatic);
    type->Reflection.SetFields(1,
        new uField("Content", 1));
    type->Reflection.SetFunctions(4,
        new uFunction("HitTest", NULL, (void*)FusionInterop__HitTest_fn, 0, true, ::g::Uno::Collections::IList_typeof()->MakeType(uObject_typeof(), NULL), 1, ::g::Uno::Float2_typeof()),
        new uFunction(".ctor", NULL, (void*)FusionInterop__New1_fn, 0, true, type, 0),
        new uFunction("OnPointerMoved", NULL, (void*)FusionInterop__OnPointerMoved_fn, 0, true, uVoid_typeof(), 2, uObject_typeof(), ::g::Uno::Action1_typeof()->MakeType(::g::Uno::Float2_typeof(), NULL)),
        new uFunction("OnPointerPressed", NULL, (void*)FusionInterop__OnPointerPressed_fn, 0, true, uVoid_typeof(), 2, uObject_typeof(), ::g::Uno::Action1_typeof()->MakeType(::g::Uno::Float2_typeof(), NULL)));
}

uType* FusionInterop_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ObjectSize = sizeof(FusionInterop);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Outracks.UnoHost.FusionInterop", options);
    type->fp_build_ = FusionInterop_build;
    type->fp_ctor_ = (void*)FusionInterop__New1_fn;
    return type;
}

// public generated FusionInterop() :17
void FusionInterop__ctor__fn(FusionInterop* __this)
{
    __this->ctor_();
}

// private void Handler(object sender, Fuse.Input.PointerMovedArgs args) :48
void FusionInterop__Handler_fn(FusionInterop* __this, uObject* sender, ::g::Fuse::Input::PointerMovedArgs* args)
{
    __this->Handler(sender, args);
}

// private void Handler(object sender, Fuse.Input.PointerPressedArgs args) :43
void FusionInterop__Handler1_fn(FusionInterop* __this, uObject* sender, ::g::Fuse::Input::PointerPressedArgs* args)
{
    __this->Handler1(sender, args);
}

// public static Uno.Collections.IList<object> HitTest(float2 point) :53
void FusionInterop__HitTest_fn(::g::Uno::Float2* point, uObject** __retval)
{
    *__retval = FusionInterop::HitTest(*point);
}

// public generated FusionInterop New() :17
void FusionInterop__New1_fn(FusionInterop** __retval)
{
    *__retval = FusionInterop::New1();
}

// public static void OnPointerMoved(object obj, Uno.Action<float2> handler) :31
void FusionInterop__OnPointerMoved_fn(uObject* obj, uDelegate* handler)
{
    FusionInterop::OnPointerMoved(obj, handler);
}

// public static void OnPointerPressed(object obj, Uno.Action<float2> handler) :21
void FusionInterop__OnPointerPressed_fn(uObject* obj, uDelegate* handler)
{
    FusionInterop::OnPointerPressed(obj, handler);
}

uSStrong<uObject*> FusionInterop::Content_;

// public generated FusionInterop() [instance] :17
void FusionInterop::ctor_()
{
}

// private void Handler(object sender, Fuse.Input.PointerMovedArgs args) [instance] :48
void FusionInterop::Handler(uObject* sender, ::g::Fuse::Input::PointerMovedArgs* args)
{
    uStackFrame __("Outracks.UnoHost.FusionInterop", "Handler(object,Fuse.Input.PointerMovedArgs)");
    uPtr(_handler)->InvokeVoid(uCRef(uPtr(args)->WindowPoint()));
}

// private void Handler(object sender, Fuse.Input.PointerPressedArgs args) [instance] :43
void FusionInterop::Handler1(uObject* sender, ::g::Fuse::Input::PointerPressedArgs* args)
{
    uStackFrame __("Outracks.UnoHost.FusionInterop", "Handler(object,Fuse.Input.PointerPressedArgs)");
    uPtr(_handler)->InvokeVoid(uCRef(uPtr(args)->WindowPoint()));
}

// public static Uno.Collections.IList<object> HitTest(float2 point) [static] :53
uObject* FusionInterop::HitTest(::g::Uno::Float2 point)
{
    uStackFrame __("Outracks.UnoHost.FusionInterop", "HitTest(float2)");
    ::g::Outracks::Simulator::Client::FakeApp* visual = ::g::Outracks::Simulator::Client::Context::App();
    ::g::Outracks::UnoHost::HitTestQuery* query = ::g::Outracks::UnoHost::HitTestQuery::New1();
    ::g::Fuse::HitTestContext* args = ::g::Fuse::HitTestContext::New1(point, uDelegate::New(::TYPES[0/*Fuse.HitTestCallback*/], (void*)::g::Outracks::UnoHost::HitTestQuery__Select_fn, query));
    uPtr(visual)->HitTest(args);
    args->Dispose();
    return (uObject*)query->HitObjects;
}

// public generated FusionInterop New() [static] :17
FusionInterop* FusionInterop::New1()
{
    FusionInterop* obj3 = (FusionInterop*)uNew(FusionInterop_typeof());
    obj3->ctor_();
    return obj3;
}

// public static void OnPointerMoved(object obj, Uno.Action<float2> handler) [static] :31
void FusionInterop::OnPointerMoved(uObject* obj, uDelegate* handler)
{
    uStackFrame __("Outracks.UnoHost.FusionInterop", "OnPointerMoved(object,Uno.Action<float2>)");
    FusionInterop* collection2;
    ::g::Fuse::Elements::Element* visual = uAs< ::g::Fuse::Elements::Element*>(obj, ::TYPES[1/*Fuse.Elements.Element*/]);

    if (visual == NULL)
        return;

    uPtr(visual)->HitTestMode(2);
    ::g::Fuse::VisualEvent__AddHandler_fn(uPtr(::g::Fuse::Input::Pointer::Moved()), visual, uDelegate::New(::TYPES[2/*Fuse.Input.PointerMovedHandler*/], (void*)FusionInterop__Handler_fn, uPtr((collection2 = FusionInterop::New1(), uPtr(collection2)->_handler = handler, collection2))));
}

// public static void OnPointerPressed(object obj, Uno.Action<float2> handler) [static] :21
void FusionInterop::OnPointerPressed(uObject* obj, uDelegate* handler)
{
    uStackFrame __("Outracks.UnoHost.FusionInterop", "OnPointerPressed(object,Uno.Action<float2>)");
    FusionInterop* collection1;
    ::g::Fuse::Elements::Element* visual = uAs< ::g::Fuse::Elements::Element*>(obj, ::TYPES[1/*Fuse.Elements.Element*/]);

    if (visual == NULL)
        return;

    uPtr(visual)->HitTestMode(2);
    ::g::Fuse::VisualEvent__AddHandler_fn(uPtr(::g::Fuse::Input::Pointer::Pressed()), visual, uDelegate::New(::TYPES[3/*Fuse.Input.PointerPressedHandler*/], (void*)FusionInterop__Handler1_fn, uPtr((collection1 = FusionInterop::New1(), uPtr(collection1)->_handler = handler, collection1))));
}
// }

// /usr/local/share/uno/Packages/Outracks.Simulator.Client.Uno/0.1.0/$.uno
// -----------------------------------------------------------------------

// internal sealed class HitTestQuery :64
// {
static void HitTestQuery_build(uType* type)
{
    ::TYPES[4] = ::g::Uno::Collections::List_typeof()->MakeType(uObject_typeof(), NULL);
    type->SetFields(0,
        ::TYPES[4/*Uno.Collections.List<object>*/], offsetof(::g::Outracks::UnoHost::HitTestQuery, HitObjects), 0);
}

uType* HitTestQuery_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.ObjectSize = sizeof(HitTestQuery);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Outracks.UnoHost.HitTestQuery", options);
    type->fp_build_ = HitTestQuery_build;
    type->fp_ctor_ = (void*)HitTestQuery__New1_fn;
    return type;
}

// public generated HitTestQuery() :64
void HitTestQuery__ctor__fn(HitTestQuery* __this)
{
    __this->ctor_();
}

// public generated HitTestQuery New() :64
void HitTestQuery__New1_fn(HitTestQuery** __retval)
{
    *__retval = HitTestQuery::New1();
}

// public void Select(Fuse.HitTestResult result) :67
void HitTestQuery__Select_fn(HitTestQuery* __this, ::g::Fuse::HitTestResult* result)
{
    __this->Select(result);
}

// public generated HitTestQuery() [instance] :64
void HitTestQuery::ctor_()
{
    HitObjects = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[4/*Uno.Collections.List<object>*/]));
}

// public void Select(Fuse.HitTestResult result) [instance] :67
void HitTestQuery::Select(::g::Fuse::HitTestResult* result)
{
    uStackFrame __("Outracks.UnoHost.HitTestQuery", "Select(Fuse.HitTestResult)");
    ::g::Uno::Collections::List__Add_fn(uPtr(HitObjects), uPtr(result)->HitObject());
}

// public generated HitTestQuery New() [static] :64
HitTestQuery* HitTestQuery::New1()
{
    HitTestQuery* obj1 = (HitTestQuery*)uNew(HitTestQuery_typeof());
    obj1->ctor_();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Outracks.Simulator.Common.Uno/0.0.0/unohost.common/$.uno
// --------------------------------------------------------------------------------------

// public sealed class MemberNotFound :48
// {
static void MemberNotFound_build(uType* type)
{
    ::STRINGS[0] = uString::Const("Member '");
    ::STRINGS[1] = uString::Const("' could not be found on object of type '");
    ::STRINGS[2] = uString::Const("'");
    type->SetFields(3,
        ::g::Uno::String_typeof(), offsetof(::g::Outracks::UnoHost::MemberNotFound, Member), 0,
        ::g::Uno::String_typeof(), offsetof(::g::Outracks::UnoHost::MemberNotFound, Type), 0);
    type->Reflection.SetFields(2,
        new uField("Member", 3),
        new uField("Type", 4));
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)MemberNotFound__New4_fn, 0, true, type, 2, ::g::Uno::String_typeof(), ::g::Uno::String_typeof()));
}

::g::Uno::Exception_type* MemberNotFound_typeof()
{
    static uSStrong< ::g::Uno::Exception_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::Exception_typeof();
    options.FieldCount = 5;
    options.ObjectSize = sizeof(MemberNotFound);
    options.TypeSize = sizeof(::g::Uno::Exception_type);
    type = (::g::Uno::Exception_type*)uClassType::New("Outracks.UnoHost.MemberNotFound", options);
    type->fp_build_ = MemberNotFound_build;
    return type;
}

// public MemberNotFound(string type, string member) :53
void MemberNotFound__ctor_3_fn(MemberNotFound* __this, uString* type, uString* member)
{
    __this->ctor_3(type, member);
}

// public MemberNotFound New(string type, string member) :53
void MemberNotFound__New4_fn(uString* type, uString* member, MemberNotFound** __retval)
{
    *__retval = MemberNotFound::New4(type, member);
}

// public MemberNotFound(string type, string member) [instance] :53
void MemberNotFound::ctor_3(uString* type, uString* member)
{
    ctor_1(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::STRINGS[0/*"Member '"*/], member), ::STRINGS[1/*"' could not...*/]), type), ::STRINGS[2/*"'"*/]));
    Type = type;
    Member = member;
}

// public MemberNotFound New(string type, string member) [static] :53
MemberNotFound* MemberNotFound::New4(uString* type, uString* member)
{
    MemberNotFound* obj1 = (MemberNotFound*)uNew(MemberNotFound_typeof());
    obj1->ctor_3(type, member);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Outracks.Simulator.Common.Uno/0.0.0/unohost.common/$.uno
// --------------------------------------------------------------------------------------

// public static class Reflection :88
// {
static void Reflection_build(uType* type)
{
    type->Reflection.SetFunctions(12,
        new uFunction("AddEventHandler", NULL, (void*)Reflection__AddEventHandler_fn, 0, true, uVoid_typeof(), 3, uObject_typeof(), ::g::Uno::String_typeof(), uObject_typeof()),
        new uFunction("CallDynamic", NULL, (void*)Reflection__CallDynamic_fn, 0, true, uObject_typeof(), 3, uObject_typeof(), ::g::Uno::String_typeof(), uObject_typeof()->Array()),
        new uFunction("CallStatic", NULL, (void*)Reflection__CallStatic_fn, 0, true, uObject_typeof(), 3, ::g::Uno::String_typeof(), ::g::Uno::String_typeof(), uObject_typeof()->Array()),
        new uFunction("CreateDelegate", NULL, (void*)Reflection__CreateDelegate_fn, 0, true, uObject_typeof(), 4, uObject_typeof(), ::g::Uno::String_typeof(), ::g::Uno::String_typeof()->Array(), ::g::Uno::String_typeof()),
        new uFunction("GetEnumValue", NULL, (void*)Reflection__GetEnumValue_fn, 0, true, uObject_typeof(), 2, ::g::Uno::String_typeof(), ::g::Uno::String_typeof()),
        new uFunction("GetPropertyValue", NULL, (void*)Reflection__GetPropertyValue_fn, 0, true, uObject_typeof(), 2, uObject_typeof(), ::g::Uno::String_typeof()),
        new uFunction("GetStaticPropertyOrFieldValue", NULL, (void*)Reflection__GetStaticPropertyOrFieldValue_fn, 0, true, uObject_typeof(), 2, ::g::Uno::String_typeof(), ::g::Uno::String_typeof()),
        new uFunction("Instantiate", NULL, (void*)Reflection__Instantiate_fn, 0, true, uObject_typeof(), 2, ::g::Uno::String_typeof(), uObject_typeof()->Array()),
        new uFunction("IsSubtype", NULL, (void*)Reflection__IsSubtype_fn, 0, true, ::g::Uno::Bool_typeof(), 2, uObject_typeof(), ::g::Uno::String_typeof()),
        new uFunction("IsType", NULL, (void*)Reflection__IsType_fn, 0, true, ::g::Uno::Bool_typeof(), 2, uObject_typeof(), ::g::Uno::String_typeof()),
        new uFunction("RemoveEventHandler", NULL, (void*)Reflection__RemoveEventHandler_fn, 0, true, uVoid_typeof(), 3, uObject_typeof(), ::g::Uno::String_typeof(), uObject_typeof()),
        new uFunction("SetPropertyValue", NULL, (void*)Reflection__SetPropertyValue_fn, 0, true, uVoid_typeof(), 3, uObject_typeof(), ::g::Uno::String_typeof(), uObject_typeof()));
}

uClassType* Reflection_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Outracks.UnoHost.Reflection", options);
    type->fp_build_ = Reflection_build;
    return type;
}

// public static void AddEventHandler(object instance, string member, object handlerDelegate) :100
void Reflection__AddEventHandler_fn(uObject* instance, uString* member, uObject* handlerDelegate)
{
    Reflection::AddEventHandler(instance, member, handlerDelegate);
}

// public static object CallDynamic(object instance, string methodName, object[] arguments) :92
void Reflection__CallDynamic_fn(uObject* instance, uString* methodName, uArray* arguments, uObject** __retval)
{
    *__retval = Reflection::CallDynamic(instance, methodName, arguments);
}

// public static object CallStatic(string typeName, string methodName, object[] arguments) :93
void Reflection__CallStatic_fn(uString* typeName, uString* methodName, uArray* arguments, uObject** __retval)
{
    *__retval = Reflection::CallStatic(typeName, methodName, arguments);
}

// public static object CreateDelegate(object instance, string method, string[] argumentTypes, string delegateTypeName) :99
void Reflection__CreateDelegate_fn(uObject* instance, uString* method, uArray* argumentTypes, uString* delegateTypeName, uObject** __retval)
{
    *__retval = Reflection::CreateDelegate(instance, method, argumentTypes, delegateTypeName);
}

// public static object GetEnumValue(string enumType, string valueName) :106
void Reflection__GetEnumValue_fn(uString* enumType, uString* valueName, uObject** __retval)
{
    *__retval = Reflection::GetEnumValue(enumType, valueName);
}

// public static object GetPropertyValue(object instance, string propertyName) :96
void Reflection__GetPropertyValue_fn(uObject* instance, uString* propertyName, uObject** __retval)
{
    *__retval = Reflection::GetPropertyValue(instance, propertyName);
}

// public static object GetStaticPropertyOrFieldValue(string typeName, string memberName) :97
void Reflection__GetStaticPropertyOrFieldValue_fn(uString* typeName, uString* memberName, uObject** __retval)
{
    *__retval = Reflection::GetStaticPropertyOrFieldValue(typeName, memberName);
}

// public static object Instantiate(string typeName, object[] args) :90
void Reflection__Instantiate_fn(uString* typeName, uArray* args, uObject** __retval)
{
    *__retval = Reflection::Instantiate(typeName, args);
}

// public static bool IsSubtype(object obj, string typeName) :103
void Reflection__IsSubtype_fn(uObject* obj, uString* typeName, bool* __retval)
{
    *__retval = Reflection::IsSubtype(obj, typeName);
}

// public static bool IsType(object obj, string typeName) :104
void Reflection__IsType_fn(uObject* obj, uString* typeName, bool* __retval)
{
    *__retval = Reflection::IsType(obj, typeName);
}

// public static void RemoveEventHandler(object instance, string member, object handlerDelegate) :101
void Reflection__RemoveEventHandler_fn(uObject* instance, uString* member, uObject* handlerDelegate)
{
    Reflection::RemoveEventHandler(instance, member, handlerDelegate);
}

// public static void SetPropertyValue(object instance, string propertyName, object value) :95
void Reflection__SetPropertyValue_fn(uObject* instance, uString* propertyName, uObject* value)
{
    Reflection::SetPropertyValue(instance, propertyName, value);
}

// public static void AddEventHandler(object instance, string member, object handlerDelegate) [static] :100
void Reflection::AddEventHandler(uObject* instance, uString* member, uObject* handlerDelegate)
{
    uStackFrame __("Outracks.UnoHost.Reflection", "AddEventHandler(object,string,object)");
    U_THROW(::g::Uno::Exception::New1());
}

// public static object CallDynamic(object instance, string methodName, object[] arguments) [static] :92
uObject* Reflection::CallDynamic(uObject* instance, uString* methodName, uArray* arguments)
{
    uStackFrame __("Outracks.UnoHost.Reflection", "CallDynamic(object,string,object[])");
    U_THROW(::g::Uno::Exception::New1());
}

// public static object CallStatic(string typeName, string methodName, object[] arguments) [static] :93
uObject* Reflection::CallStatic(uString* typeName, uString* methodName, uArray* arguments)
{
    uStackFrame __("Outracks.UnoHost.Reflection", "CallStatic(string,string,object[])");
    U_THROW(::g::Uno::Exception::New1());
}

// public static object CreateDelegate(object instance, string method, string[] argumentTypes, string delegateTypeName) [static] :99
uObject* Reflection::CreateDelegate(uObject* instance, uString* method, uArray* argumentTypes, uString* delegateTypeName)
{
    uStackFrame __("Outracks.UnoHost.Reflection", "CreateDelegate(object,string,string[],string)");
    U_THROW(::g::Uno::Exception::New1());
}

// public static object GetEnumValue(string enumType, string valueName) [static] :106
uObject* Reflection::GetEnumValue(uString* enumType, uString* valueName)
{
    uStackFrame __("Outracks.UnoHost.Reflection", "GetEnumValue(string,string)");
    U_THROW(::g::Uno::Exception::New1());
}

// public static object GetPropertyValue(object instance, string propertyName) [static] :96
uObject* Reflection::GetPropertyValue(uObject* instance, uString* propertyName)
{
    uStackFrame __("Outracks.UnoHost.Reflection", "GetPropertyValue(object,string)");
    U_THROW(::g::Uno::Exception::New1());
}

// public static object GetStaticPropertyOrFieldValue(string typeName, string memberName) [static] :97
uObject* Reflection::GetStaticPropertyOrFieldValue(uString* typeName, uString* memberName)
{
    uStackFrame __("Outracks.UnoHost.Reflection", "GetStaticPropertyOrFieldValue(string,string)");
    U_THROW(::g::Uno::Exception::New1());
}

// public static object Instantiate(string typeName, object[] args) [static] :90
uObject* Reflection::Instantiate(uString* typeName, uArray* args)
{
    uStackFrame __("Outracks.UnoHost.Reflection", "Instantiate(string,object[])");
    U_THROW(::g::Uno::Exception::New1());
}

// public static bool IsSubtype(object obj, string typeName) [static] :103
bool Reflection::IsSubtype(uObject* obj, uString* typeName)
{
    uStackFrame __("Outracks.UnoHost.Reflection", "IsSubtype(object,string)");
    U_THROW(::g::Uno::Exception::New1());
}

// public static bool IsType(object obj, string typeName) [static] :104
bool Reflection::IsType(uObject* obj, uString* typeName)
{
    uStackFrame __("Outracks.UnoHost.Reflection", "IsType(object,string)");
    U_THROW(::g::Uno::Exception::New1());
}

// public static void RemoveEventHandler(object instance, string member, object handlerDelegate) [static] :101
void Reflection::RemoveEventHandler(uObject* instance, uString* member, uObject* handlerDelegate)
{
    uStackFrame __("Outracks.UnoHost.Reflection", "RemoveEventHandler(object,string,object)");
    U_THROW(::g::Uno::Exception::New1());
}

// public static void SetPropertyValue(object instance, string propertyName, object value) [static] :95
void Reflection::SetPropertyValue(uObject* instance, uString* propertyName, uObject* value)
{
    uStackFrame __("Outracks.UnoHost.Reflection", "SetPropertyValue(object,string,object)");
    U_THROW(::g::Uno::Exception::New1());
}
// }

// /usr/local/share/uno/Packages/Outracks.Simulator.Common.Uno/0.0.0/unohost.common/$.uno
// --------------------------------------------------------------------------------------

// public sealed class TypeNotFound :62
// {
static void TypeNotFound_build(uType* type)
{
    ::STRINGS[3] = uString::Const("Type '");
    ::STRINGS[4] = uString::Const("' could not be found (recompile required?)");
    type->SetFields(3,
        ::g::Uno::String_typeof(), offsetof(::g::Outracks::UnoHost::TypeNotFound, Type), 0);
    type->Reflection.SetFields(1,
        new uField("Type", 3));
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)TypeNotFound__New4_fn, 0, true, type, 1, ::g::Uno::String_typeof()));
}

::g::Uno::Exception_type* TypeNotFound_typeof()
{
    static uSStrong< ::g::Uno::Exception_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::Exception_typeof();
    options.FieldCount = 4;
    options.ObjectSize = sizeof(TypeNotFound);
    options.TypeSize = sizeof(::g::Uno::Exception_type);
    type = (::g::Uno::Exception_type*)uClassType::New("Outracks.UnoHost.TypeNotFound", options);
    type->fp_build_ = TypeNotFound_build;
    return type;
}

// public TypeNotFound(string type) :66
void TypeNotFound__ctor_3_fn(TypeNotFound* __this, uString* type)
{
    __this->ctor_3(type);
}

// public TypeNotFound New(string type) :66
void TypeNotFound__New4_fn(uString* type, TypeNotFound** __retval)
{
    *__retval = TypeNotFound::New4(type);
}

// public TypeNotFound(string type) [instance] :66
void TypeNotFound::ctor_3(uString* type)
{
    ctor_1(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::STRINGS[3/*"Type '"*/], type), ::STRINGS[4/*"' could not...*/]));
    Type = type;
}

// public TypeNotFound New(string type) [static] :66
TypeNotFound* TypeNotFound::New4(uString* type)
{
    TypeNotFound* obj1 = (TypeNotFound*)uNew(TypeNotFound_typeof());
    obj1->ctor_3(type);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Outracks.Simulator.Common.Uno/0.0.0/unohost.common/$.uno
// --------------------------------------------------------------------------------------

// public sealed class UnambiguousMethodNotFound :74
// {
static void UnambiguousMethodNotFound_build(uType* type)
{
    ::STRINGS[5] = uString::Const("Call to '");
    ::STRINGS[6] = uString::Const("' method is ambigious on object of type '");
    ::STRINGS[2] = uString::Const("'");
    type->SetFields(3,
        ::g::Uno::String_typeof(), offsetof(::g::Outracks::UnoHost::UnambiguousMethodNotFound, Member), 0,
        ::g::Uno::String_typeof(), offsetof(::g::Outracks::UnoHost::UnambiguousMethodNotFound, Type), 0);
    type->Reflection.SetFields(2,
        new uField("Member", 3),
        new uField("Type", 4));
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)UnambiguousMethodNotFound__New4_fn, 0, true, type, 2, ::g::Uno::String_typeof(), ::g::Uno::String_typeof()));
}

::g::Uno::Exception_type* UnambiguousMethodNotFound_typeof()
{
    static uSStrong< ::g::Uno::Exception_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::Exception_typeof();
    options.FieldCount = 5;
    options.ObjectSize = sizeof(UnambiguousMethodNotFound);
    options.TypeSize = sizeof(::g::Uno::Exception_type);
    type = (::g::Uno::Exception_type*)uClassType::New("Outracks.UnoHost.UnambiguousMethodNotFound", options);
    type->fp_build_ = UnambiguousMethodNotFound_build;
    return type;
}

// public UnambiguousMethodNotFound(string type, string member) :79
void UnambiguousMethodNotFound__ctor_3_fn(UnambiguousMethodNotFound* __this, uString* type, uString* member)
{
    __this->ctor_3(type, member);
}

// public UnambiguousMethodNotFound New(string type, string member) :79
void UnambiguousMethodNotFound__New4_fn(uString* type, uString* member, UnambiguousMethodNotFound** __retval)
{
    *__retval = UnambiguousMethodNotFound::New4(type, member);
}

// public UnambiguousMethodNotFound(string type, string member) [instance] :79
void UnambiguousMethodNotFound::ctor_3(uString* type, uString* member)
{
    ctor_1(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::STRINGS[5/*"Call to '"*/], member), ::STRINGS[6/*"' method is...*/]), type), ::STRINGS[2/*"'"*/]));
    Type = type;
    Member = member;
}

// public UnambiguousMethodNotFound New(string type, string member) [static] :79
UnambiguousMethodNotFound* UnambiguousMethodNotFound::New4(uString* type, uString* member)
{
    UnambiguousMethodNotFound* obj1 = (UnambiguousMethodNotFound*)uNew(UnambiguousMethodNotFound_typeof());
    obj1->ctor_3(type, member);
    return obj1;
}
// }

}}} // ::g::Outracks::UnoHost
