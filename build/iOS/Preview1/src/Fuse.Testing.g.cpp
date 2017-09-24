// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Fuse.AppBase.h>
#include <Fuse.Diagnostic.h>
#include <Fuse.DiagnosticHandler.h>
#include <Fuse.Diagnostics.h>
#include <Fuse.Reactive.JavaScript.h>
#include <Fuse.Reactive.ThreadW-2c6de4b3.h>
#include <Fuse.Reactive.ThreadWorker.h>
#include <Fuse.RootViewport.h>
#include <Fuse.Scripting.Context.h>
#include <Fuse.Scripting.NativeCallback.h>
#include <Fuse.Scripting.NativeFunction.h>
#include <Fuse.Scripting.NativeMember.h>
#include <Fuse.Scripting.ScriptModule.h>
#include <Fuse.Testing.JavaScriptTest.h>
#include <Fuse.Testing.TestRoot-2f5bf060.h>
#include <Fuse.Testing.TestRoot-360e342e.h>
#include <Fuse.Testing.TestRootPanel.h>
#include <Fuse.Testing.TestRootViewport.h>
#include <Fuse.Testing.UnoTesti-f868a38f.h>
#include <Fuse.Testing.UnoTestingHelper.h>
#include <Fuse.Time.h>
#include <Fuse.UpdateManager.h>
#include <Fuse.Visual.h>
#include <Fuse.WrapException.h>
#include <Uno.Action.h>
#include <Uno.AggregateException.h>
#include <Uno.Application.h>
#include <Uno.Bool.h>
#include <Uno.Collections.IEnumerator.h>
#include <Uno.Collections.IEnumerator-1.h>
#include <Uno.Collections.List-1.h>
#include <Uno.Collections.List--251bdc7d.h>
#include <Uno.Collections.ReadO-235c1e0d.h>
#include <Uno.Diagnostics.Debug-5d778620.h>
#include <Uno.Double.h>
#include <Uno.Exception.h>
#include <Uno.Float.h>
#include <Uno.Float2.h>
#include <Uno.Int.h>
#include <Uno.Int2.h>
#include <Uno.Object.h>
#include <Uno.Platform.Window.h>
#include <Uno.String.h>
#include <Uno.Testing.Assert.h>
#include <Uno.Testing.Assertion-65eaa948.h>
#include <Uno.UX.NameTable.h>
#include <Uno.UX.Resource.h>
static uString* STRINGS[7];
static uType* TYPES[12];

namespace g{
namespace Fuse{
namespace Testing{

// /Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Testing/1.0.2/$.uno
// --------------------------------------------------------------------------------------

// public sealed class JavaScriptTest :46
// {
static void JavaScriptTest_build(uType* type)
{
    ::STRINGS[0] = uString::Const("try {\n"
        "");
    ::STRINGS[1] = uString::Const("\n"
        "} catch (err) {\n"
        "\tvar helper = require(\"FuseJS/Internal/UnoTestingHelper\");\n"
        "\thelper.testFailed(\"stack\" in err ? err.stack : err.message);\n"
        "}\n"
        "");
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Reactive::JavaScript_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Reactive::JavaScript_type, interface1),
        ::g::Fuse::IProperties_typeof(), offsetof(::g::Fuse::Reactive::JavaScript_type, interface2),
        ::g::Fuse::INotifyUnrooted_typeof(), offsetof(::g::Fuse::Reactive::JavaScript_type, interface3),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Reactive::JavaScript_type, interface4),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Reactive::JavaScript_type, interface5),
        ::g::Fuse::Scripting::IModuleProvider_typeof(), offsetof(::g::Fuse::Reactive::JavaScript_type, interface6),
        ::g::Fuse::Reactive::ValueForwarder__IValueListener_typeof(), offsetof(::g::Fuse::Reactive::JavaScript_type, interface7),
        ::g::Fuse::Node__ISiblingDataProvider_typeof(), offsetof(::g::Fuse::Reactive::JavaScript_type, interface8));
    type->SetFields(19);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)JavaScriptTest__New3_fn, 0, true, type, 1, ::g::Uno::UX::NameTable_typeof()));
}

::g::Fuse::Reactive::JavaScript_type* JavaScriptTest_typeof()
{
    static uSStrong< ::g::Fuse::Reactive::JavaScript_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Reactive::JavaScript_typeof();
    options.FieldCount = 19;
    options.InterfaceCount = 9;
    options.ObjectSize = sizeof(JavaScriptTest);
    options.TypeSize = sizeof(::g::Fuse::Reactive::JavaScript_type);
    type = (::g::Fuse::Reactive::JavaScript_type*)uClassType::New("Fuse.Testing.JavaScriptTest", options);
    type->fp_build_ = JavaScriptTest_build;
    type->interface6.fp_GetModule = (void(*)(uObject*, ::g::Fuse::Scripting::Module**))::g::Fuse::Reactive::JavaScript__FuseScriptingIModuleProviderGetModule_fn;
    type->interface7.fp_NewValue = (void(*)(uObject*, uObject*))::g::Fuse::Reactive::JavaScript__FuseReactiveValueForwarderIValueListenerNewValue_fn;
    type->interface8.fp_get_Data = (void(*)(uObject*, uObject**))::g::Fuse::Reactive::JavaScript__FuseNodeISiblingDataProviderget_Data_fn;
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

// public JavaScriptTest(Uno.UX.NameTable nameTable) :49
void JavaScriptTest__ctor_4_fn(JavaScriptTest* __this, ::g::Uno::UX::NameTable* nameTable)
{
    __this->ctor_4(nameTable);
}

// public JavaScriptTest New(Uno.UX.NameTable nameTable) :49
void JavaScriptTest__New3_fn(::g::Uno::UX::NameTable* nameTable, JavaScriptTest** __retval)
{
    *__retval = JavaScriptTest::New3(nameTable);
}

// public JavaScriptTest(Uno.UX.NameTable nameTable) [instance] :49
void JavaScriptTest::ctor_4(::g::Uno::UX::NameTable* nameTable)
{
    uStackFrame __("Fuse.Testing.JavaScriptTest", ".ctor(Uno.UX.NameTable)");
    ctor_3(nameTable);
    uPtr(_scriptModule)->Preamble(::STRINGS[0/*"try {\n"*/]);
    uPtr(_scriptModule)->Postamble(::STRINGS[1/*"\n} catch (...*/]);
}

// public JavaScriptTest New(Uno.UX.NameTable nameTable) [static] :49
JavaScriptTest* JavaScriptTest::New3(::g::Uno::UX::NameTable* nameTable)
{
    JavaScriptTest* obj1 = (JavaScriptTest*)uNew(JavaScriptTest_typeof());
    obj1->ctor_4(nameTable);
    return obj1;
}
// }

// /Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Testing/1.0.2/$.uno
// --------------------------------------------------------------------------------------

// private enum TestRootPanel.StepFlags :205
uEnumType* TestRootPanel__StepFlags_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Testing.TestRootPanel.StepFlags", ::g::Uno::Int_typeof(), 3);
    type->SetLiterals(
        "None", 0LL,
        "WaitJS", 1LL,
        "IncrementFrame", 2LL);
    return type;
}

// /Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Testing/1.0.2/$.uno
// --------------------------------------------------------------------------------------

// private sealed class UnoTestingHelper.TestFailure :24
// {
static void UnoTestingHelper__TestFailure_build(uType* type)
{
    ::STRINGS[2] = uString::Const("/Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Testing/1.0.2/$.uno");
    ::STRINGS[3] = uString::Const("Fail");
    type->SetFields(0,
        ::g::Uno::String_typeof(), offsetof(::g::Fuse::Testing::UnoTestingHelper__TestFailure, _message), 0);
}

uType* UnoTestingHelper__TestFailure_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.ObjectSize = sizeof(UnoTestingHelper__TestFailure);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Testing.UnoTestingHelper.TestFailure", options);
    type->fp_build_ = UnoTestingHelper__TestFailure_build;
    return type;
}

// public TestFailure(string message) :27
void UnoTestingHelper__TestFailure__ctor__fn(UnoTestingHelper__TestFailure* __this, uString* message)
{
    __this->ctor_(message);
}

// public void Fail() :32
void UnoTestingHelper__TestFailure__Fail_fn(UnoTestingHelper__TestFailure* __this)
{
    __this->Fail();
}

// public TestFailure New(string message) :27
void UnoTestingHelper__TestFailure__New1_fn(uString* message, UnoTestingHelper__TestFailure** __retval)
{
    *__retval = UnoTestingHelper__TestFailure::New1(message);
}

// public TestFailure(string message) [instance] :27
void UnoTestingHelper__TestFailure::ctor_(uString* message)
{
    _message = message;
}

// public void Fail() [instance] :32
void UnoTestingHelper__TestFailure::Fail()
{
    uStackFrame __("Fuse.Testing.UnoTestingHelper.TestFailure", "Fail()");
    ::g::Uno::Testing::Assert::Fail(_message, ::STRINGS[2/*"/Users/medb...*/], 34, ::STRINGS[3/*"Fail"*/]);
}

// public TestFailure New(string message) [static] :27
UnoTestingHelper__TestFailure* UnoTestingHelper__TestFailure::New1(uString* message)
{
    UnoTestingHelper__TestFailure* obj1 = (UnoTestingHelper__TestFailure*)uNew(UnoTestingHelper__TestFailure_typeof());
    obj1->ctor_(message);
    return obj1;
}
// }

// /Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Testing/1.0.2/$.uno
// --------------------------------------------------------------------------------------

// public sealed class TestRootPanel :117
// {
static void TestRootPanel_build(uType* type)
{
    ::STRINGS[2] = uString::Const("/Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Testing/1.0.2/$.uno");
    ::STRINGS[4] = uString::Const("RunTest");
    ::TYPES[0] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Diagnostic_typeof(), NULL);
    ::TYPES[1] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL);
    ::TYPES[2] = ::g::Uno::Testing::AssertionFailedException_typeof();
    ::TYPES[3] = ::g::Uno::AggregateException_typeof();
    ::TYPES[4] = ::g::Uno::Collections::IEnumerator_typeof();
    ::TYPES[5] = ::g::Uno::Collections::IEnumerator1_typeof()->MakeType(::g::Uno::Exception_typeof(), NULL);
    ::TYPES[6] = ::g::Fuse::WrapException_typeof();
    ::TYPES[7] = ::g::Fuse::DiagnosticHandler_typeof();
    ::TYPES[8] = ::g::Uno::Exception_typeof();
    ::TYPES[9] = ::g::Uno::Collections::List__Enumerator_typeof()->MakeType(::g::Fuse::Diagnostic_typeof(), NULL);
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Controls::Panel_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface1),
        ::g::Fuse::IProperties_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface2),
        ::g::Fuse::INotifyUnrooted_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface3),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Controls::Panel_type, interface4),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Controls::Panel_type, interface5),
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL), offsetof(::g::Fuse::Controls::Panel_type, interface6),
        ::g::Uno::UX::IPropertyListener_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface7),
        ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/], offsetof(::g::Fuse::Controls::Panel_type, interface8),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL), offsetof(::g::Fuse::Controls::Panel_type, interface9),
        ::g::Fuse::Triggers::Actions::IShow_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface10),
        ::g::Fuse::Triggers::Actions::IHide_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface11),
        ::g::Fuse::Triggers::Actions::ICollapse_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface12),
        ::g::Fuse::IActualPlacement_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface13),
        ::g::Fuse::Animations::IResize_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface14),
        ::g::Fuse::Drawing::ISurfaceDrawable_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface15));
    type->SetFields(105,
        ::TYPES[0/*Uno.Collections.List<Fuse.Diagnostic>*/], offsetof(::g::Fuse::Testing::TestRootPanel, _errors), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Testing::TestRootPanel, _frameIncrement), 0,
        ::g::Fuse::Testing::TestRootViewport_typeof(), offsetof(::g::Fuse::Testing::TestRootPanel, _rootViewport), 0);
    type->Reflection.SetFunctions(2,
        new uFunction(".ctor", NULL, (void*)TestRootPanel__New4_fn, 0, true, type, 0),
        new uFunction("RunTest", NULL, (void*)TestRootPanel__RunTest_fn, 0, false, uVoid_typeof(), 0));
}

::g::Fuse::Controls::Panel_type* TestRootPanel_typeof()
{
    static uSStrong< ::g::Fuse::Controls::Panel_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Controls::Panel_typeof();
    options.FieldCount = 108;
    options.InterfaceCount = 16;
    options.ObjectSize = sizeof(TestRootPanel);
    options.TypeSize = sizeof(::g::Fuse::Controls::Panel_type);
    type = (::g::Fuse::Controls::Panel_type*)uClassType::New("Fuse.Testing.TestRootPanel", options);
    type->fp_build_ = TestRootPanel_build;
    type->fp_ctor_ = (void*)TestRootPanel__New4_fn;
    type->interface15.fp_Draw = (void(*)(uObject*, ::g::Fuse::Drawing::Surface*))::g::Fuse::Controls::Panel__FuseDrawingISurfaceDrawableDraw_fn;
    type->interface10.fp_Show = (void(*)(uObject*))::g::Fuse::Elements::Element__FuseTriggersActionsIShowShow_fn;
    type->interface12.fp_Collapse = (void(*)(uObject*))::g::Fuse::Elements::Element__FuseTriggersActionsICollapseCollapse_fn;
    type->interface11.fp_Hide = (void(*)(uObject*))::g::Fuse::Elements::Element__FuseTriggersActionsIHideHide_fn;
    type->interface14.fp_SetSize = (void(*)(uObject*, ::g::Uno::Float2*))::g::Fuse::Elements::Element__FuseAnimationsIResizeSetSize_fn;
    type->interface13.fp_get_ActualSize = (void(*)(uObject*, ::g::Uno::Float3*))::g::Fuse::Elements::Element__FuseIActualPlacementget_ActualSize_fn;
    type->interface13.fp_get_ActualPosition = (void(*)(uObject*, ::g::Uno::Float3*))::g::Fuse::Elements::Element__FuseIActualPlacementget_ActualPosition_fn;
    type->interface13.fp_add_Placed = (void(*)(uObject*, uDelegate*))::g::Fuse::Elements::Element__add_Placed_fn;
    type->interface13.fp_remove_Placed = (void(*)(uObject*, uDelegate*))::g::Fuse::Elements::Element__remove_Placed_fn;
    type->interface8.fp_Clear = (void(*)(uObject*))::g::Fuse::Visual__UnoCollectionsICollectionFuseNodeClear_fn;
    type->interface8.fp_Contains = (void(*)(uObject*, void*, bool*))::g::Fuse::Visual__UnoCollectionsICollectionFuseNodeContains_fn;
    type->interface6.fp_RemoveAt = (void(*)(uObject*, int*))::g::Fuse::Visual__UnoCollectionsIListFuseNodeRemoveAt_fn;
    type->interface9.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Visual__UnoCollectionsIEnumerableFuseNodeGetEnumerator_fn;
    type->interface8.fp_get_Count = (void(*)(uObject*, int*))::g::Fuse::Visual__UnoCollectionsICollectionFuseNodeget_Count_fn;
    type->interface6.fp_get_Item = (void(*)(uObject*, int*, uTRef))::g::Fuse::Visual__UnoCollectionsIListFuseNodeget_Item_fn;
    type->interface6.fp_Insert = (void(*)(uObject*, int*, void*))::g::Fuse::Visual__Insert1_fn;
    type->interface7.fp_OnPropertyChanged = (void(*)(uObject*, ::g::Uno::UX::PropertyObject*, ::g::Uno::UX::Selector*))::g::Fuse::Controls::Control__OnPropertyChanged2_fn;
    type->interface8.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Visual__Add1_fn;
    type->interface8.fp_Remove = (void(*)(uObject*, void*, bool*))::g::Fuse::Visual__Remove1_fn;
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

// public TestRootPanel() :123
void TestRootPanel__ctor_7_fn(TestRootPanel* __this)
{
    __this->ctor_7();
}

// private Uno.Testing.AssertionFailedException FindAssertionFailedException(Uno.Exception e) :134
void TestRootPanel__FindAssertionFailedException_fn(TestRootPanel* __this, ::g::Uno::Exception* e, ::g::Uno::Testing::AssertionFailedException** __retval)
{
    *__retval = __this->FindAssertionFailedException(e);
}

// private void IncrementFrameImpl([float elapsedTime], [Fuse.Testing.TestRootPanel.StepFlags flags]) :236
void TestRootPanel__IncrementFrameImpl_fn(TestRootPanel* __this, float* elapsedTime, int* flags)
{
    __this->IncrementFrameImpl(*elapsedTime, *flags);
}

// public TestRootPanel New() :123
void TestRootPanel__New4_fn(TestRootPanel** __retval)
{
    *__retval = TestRootPanel::New4();
}

// private void OnDiagnostic(Fuse.Diagnostic d) :196
void TestRootPanel__OnDiagnostic_fn(TestRootPanel* __this, ::g::Fuse::Diagnostic* d)
{
    __this->OnDiagnostic(d);
}

// internal Fuse.Testing.TestRootViewport get_RootViewport() :121
void TestRootPanel__get_RootViewport_fn(TestRootPanel* __this, ::g::Fuse::Testing::TestRootViewport** __retval)
{
    *__retval = __this->RootViewport();
}

// public void RunTest() :159
void TestRootPanel__RunTest_fn(TestRootPanel* __this)
{
    __this->RunTest();
}

// internal void StepFrameJS() :291
void TestRootPanel__StepFrameJS_fn(TestRootPanel* __this)
{
    __this->StepFrameJS();
}

// public TestRootPanel() [instance] :123
void TestRootPanel::ctor_7()
{
    uStackFrame __("Fuse.Testing.TestRootPanel", ".ctor()");
    _errors = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[0/*Uno.Collections.List<Fuse.Diagnostic>*/]));
    _frameIncrement = 0.0166666675f;
    ctor_6();
    SnapToPixels(false);
    _rootViewport = ::g::Fuse::Testing::TestRootViewport::New4(uPtr(::g::Uno::Application::Current1())->Window(), 1.0f);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(_rootViewport)->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), this);
    ::g::Fuse::Time::Init(0.0);
}

// private Uno.Testing.AssertionFailedException FindAssertionFailedException(Uno.Exception e) [instance] :134
::g::Uno::Testing::AssertionFailedException* TestRootPanel::FindAssertionFailedException(::g::Uno::Exception* e)
{
    uStackFrame __("Fuse.Testing.TestRootPanel", "FindAssertionFailedException(Uno.Exception)");
    ::g::Uno::Exception* ret5;
    ::g::Uno::Testing::AssertionFailedException* assertionFailedException = uAs< ::g::Uno::Testing::AssertionFailedException*>(e, ::TYPES[2/*Uno.Testing.AssertionFailedException*/]);

    if (assertionFailedException != NULL)
        return assertionFailedException;

    ::g::Uno::AggregateException* aggregateException = uAs< ::g::Uno::AggregateException*>(e, ::TYPES[3/*Uno.AggregateException*/]);

    if (aggregateException != NULL)

        for (uObject* enum1 = (uObject*)uPtr(uPtr(aggregateException)->InnerExceptions())->GetEnumerator(); ::g::Uno::Collections::IEnumerator::MoveNext(uInterface(uPtr(enum1), ::TYPES[4/*Uno.Collections.IEnumerator*/])); )
        {
            ::g::Uno::Exception* innerException = (::g::Uno::Collections::IEnumerator1::get_Current_ex(uInterface(uPtr(enum1), ::TYPES[5/*Uno.Collections.IEnumerator<Uno.Exception>*/]), &ret5), ret5);
            assertionFailedException = FindAssertionFailedException(innerException);

            if (assertionFailedException != NULL)
                return assertionFailedException;
        }

    ::g::Fuse::WrapException* wrapException = uAs< ::g::Fuse::WrapException*>(e, ::TYPES[6/*Fuse.WrapException*/]);

    if (wrapException != NULL)
        return FindAssertionFailedException(uPtr(wrapException)->InnerException());

    return NULL;
}

// private void IncrementFrameImpl([float elapsedTime], [Fuse.Testing.TestRootPanel.StepFlags flags]) [instance] :236
void TestRootPanel::IncrementFrameImpl(float elapsedTime, int flags)
{
    uStackFrame __("Fuse.Testing.TestRootPanel", "IncrementFrameImpl([float],[Fuse.Testing.TestRootPanel.StepFlags])");

    if (elapsedTime < 0.0f)
        elapsedTime = _frameIncrement;

    if ((flags & 1) == 1)
    {
        ::g::Fuse::Reactive::ThreadWorker* w = ::g::Fuse::Reactive::JavaScript::Worker();

        if (w != NULL)
            uPtr(w)->WaitIdle();
    }

    ::g::Fuse::Time::Set(::g::Fuse::Time::FrameTime() + (double)elapsedTime);
    ::g::Fuse::UpdateManager::Update();

    if ((flags & 2) == 2)
        ::g::Fuse::UpdateManager::IncreaseFrameIndex();
}

// private void OnDiagnostic(Fuse.Diagnostic d) [instance] :196
void TestRootPanel::OnDiagnostic(::g::Fuse::Diagnostic* d)
{
    uStackFrame __("Fuse.Testing.TestRootPanel", "OnDiagnostic(Fuse.Diagnostic)");

    if (uPtr(d)->UnoType() == 3)
        ::g::Uno::Collections::List__Add_fn(uPtr(_errors), d);
}

// internal Fuse.Testing.TestRootViewport get_RootViewport() [instance] :121
::g::Fuse::Testing::TestRootViewport* TestRootPanel::RootViewport()
{
    return _rootViewport;
}

// public void RunTest() [instance] :159
void TestRootPanel::RunTest()
{
    uStackFrame __("Fuse.Testing.TestRootPanel", "RunTest()");
    ::g::Uno::Collections::List__Enumerator<uStrong< ::g::Fuse::Diagnostic*> > ret7;
    ::g::Fuse::Testing::TestRootSingletonsGuard* guard = ::g::Fuse::Testing::TestRootSingletonsGuard::New1(this);

    {
        const auto __finally_fun = [&]()
        {
            ::g::Fuse::Diagnostics::remove_DiagnosticReported(uDelegate::New(::TYPES[7/*Fuse.DiagnosticHandler*/], (void*)TestRootPanel__OnDiagnostic_fn, this));
        };

        const uFinally<decltype(__finally_fun)> __f(__finally_fun);
        ::g::Fuse::Diagnostics::add_DiagnosticReported(uDelegate::New(::TYPES[7/*Fuse.DiagnosticHandler*/], (void*)TestRootPanel__OnDiagnostic_fn, this));
        uPtr(_rootViewport)->Resize(::g::Uno::Float2__op_Implicit1(::g::Uno::Int2__New2(800, 600)));
        PerformLayout1(::g::Uno::Float2__op_Implicit1(::g::Uno::Int2__New2(800, 600)));

        try
        {
            StepFrameJS();
        }
        catch (const uThrowable& __t)
        {
            ::g::Uno::Exception* e = __t.Exception;
            ::g::Uno::Testing::AssertionFailedException* assertionFailedException = FindAssertionFailedException(e);

            if (assertionFailedException != NULL)
                U_THROW(assertionFailedException);
            else
                throw __t;
        }
    }

    for (::g::Uno::Collections::List__Enumerator<uStrong< ::g::Fuse::Diagnostic*> > enum2 = (::g::Uno::Collections::List__GetEnumerator_fn(uPtr(_errors), &ret7), ret7); enum2.MoveNext(::TYPES[9/*Uno.Collections.List<Fuse.Diagnostic>.Enumerator*/]); )
    {
        ::g::Fuse::Diagnostic* e1 = enum2.Current(::TYPES[9/*Uno.Collections.List<Fuse.Diagnostic>.Enumerator*/]);
        ::g::Uno::Testing::Assert::Fail(uPtr(e1)->ToString(), ::STRINGS[2/*"/Users/medb...*/], 190, ::STRINGS[4/*"RunTest"*/]);
    }

    guard->Dispose();
}

// internal void StepFrameJS() [instance] :291
void TestRootPanel::StepFrameJS()
{
    uStackFrame __("Fuse.Testing.TestRootPanel", "StepFrameJS()");
    ::g::Fuse::Reactive::ThreadWorker__Fence* fence = uPtr(::g::Fuse::Reactive::JavaScript::Worker())->PostFence();
    bool loop = true;

    while (loop)
    {
        loop = !uPtr(fence)->IsSignaled();
        IncrementFrameImpl(_frameIncrement, 3);
    }
}

// public TestRootPanel New() [static] :123
TestRootPanel* TestRootPanel::New4()
{
    TestRootPanel* obj4 = (TestRootPanel*)uNew(TestRootPanel_typeof());
    obj4->ctor_7();
    return obj4;
}
// }

// /Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Testing/1.0.2/$.uno
// --------------------------------------------------------------------------------------

// internal sealed class TestRootSingletonsGuard :405
// {
static void TestRootSingletonsGuard_build(uType* type)
{
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(TestRootSingletonsGuard_type, interface0));
}

TestRootSingletonsGuard_type* TestRootSingletonsGuard_typeof()
{
    static uSStrong<TestRootSingletonsGuard_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(TestRootSingletonsGuard);
    options.TypeSize = sizeof(TestRootSingletonsGuard_type);
    type = (TestRootSingletonsGuard_type*)uClassType::New("Fuse.Testing.TestRootSingletonsGuard", options);
    type->fp_build_ = TestRootSingletonsGuard_build;
    type->interface0.fp_Dispose = (void(*)(uObject*))TestRootSingletonsGuard__Dispose_fn;
    return type;
}

// internal TestRootSingletonsGuard(Fuse.Testing.TestRootPanel trp) :407
void TestRootSingletonsGuard__ctor__fn(TestRootSingletonsGuard* __this, ::g::Fuse::Testing::TestRootPanel* trp)
{
    __this->ctor_(trp);
}

// public void Dispose() :412
void TestRootSingletonsGuard__Dispose_fn(TestRootSingletonsGuard* __this)
{
    __this->Dispose();
}

// internal TestRootSingletonsGuard New(Fuse.Testing.TestRootPanel trp) :407
void TestRootSingletonsGuard__New1_fn(::g::Fuse::Testing::TestRootPanel* trp, TestRootSingletonsGuard** __retval)
{
    *__retval = TestRootSingletonsGuard::New1(trp);
}

// internal TestRootSingletonsGuard(Fuse.Testing.TestRootPanel trp) [instance] :407
void TestRootSingletonsGuard::ctor_(::g::Fuse::Testing::TestRootPanel* trp)
{
    uStackFrame __("Fuse.Testing.TestRootSingletonsGuard", ".ctor(Fuse.Testing.TestRootPanel)");
    ::g::Fuse::AppBase::TestSetRootViewport(uPtr(trp)->RootViewport());
}

// public void Dispose() [instance] :412
void TestRootSingletonsGuard::Dispose()
{
    ::g::Fuse::AppBase::TestSetRootViewport(NULL);
}

// internal TestRootSingletonsGuard New(Fuse.Testing.TestRootPanel trp) [static] :407
TestRootSingletonsGuard* TestRootSingletonsGuard::New1(::g::Fuse::Testing::TestRootPanel* trp)
{
    TestRootSingletonsGuard* obj1 = (TestRootSingletonsGuard*)uNew(TestRootSingletonsGuard_typeof());
    obj1->ctor_(trp);
    return obj1;
}
// }

// /Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Testing/1.0.2/$.uno
// --------------------------------------------------------------------------------------

// internal sealed class TestRootViewport :86
// {
static void TestRootViewport_build(uType* type)
{
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(TestRootViewport_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(TestRootViewport_type, interface1),
        ::g::Fuse::IProperties_typeof(), offsetof(TestRootViewport_type, interface2),
        ::g::Fuse::INotifyUnrooted_typeof(), offsetof(TestRootViewport_type, interface3),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(TestRootViewport_type, interface4),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(TestRootViewport_type, interface5),
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL), offsetof(TestRootViewport_type, interface6),
        ::g::Uno::UX::IPropertyListener_typeof(), offsetof(TestRootViewport_type, interface7),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL), offsetof(TestRootViewport_type, interface8),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL), offsetof(TestRootViewport_type, interface9),
        ::g::Fuse::IViewport_typeof(), offsetof(TestRootViewport_type, interface10),
        ::g::Uno::IDisposable_typeof(), offsetof(TestRootViewport_type, interface11),
        ::g::Fuse::ICommonViewport_typeof(), offsetof(TestRootViewport_type, interface12),
        ::g::Fuse::IRenderViewport_typeof(), offsetof(TestRootViewport_type, interface13));
    type->SetFields(64);
}

TestRootViewport_type* TestRootViewport_typeof()
{
    static uSStrong<TestRootViewport_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::RootViewport_typeof();
    options.FieldCount = 64;
    options.InterfaceCount = 14;
    options.ObjectSize = sizeof(TestRootViewport);
    options.TypeSize = sizeof(TestRootViewport_type);
    type = (TestRootViewport_type*)uClassType::New("Fuse.Testing.TestRootViewport", options);
    type->fp_build_ = TestRootViewport_build;
    type->interface13.fp_get_ProjectionTransform = (void(*)(uObject*, ::g::Uno::Float4x4*))::g::Fuse::RootViewport__get_ProjectionTransform_fn;
    type->interface13.fp_get_ViewProjectionTransform = (void(*)(uObject*, ::g::Uno::Float4x4*))::g::Fuse::RootViewport__get_ViewProjectionTransform_fn;
    type->interface13.fp_get_ViewOrigin = (void(*)(uObject*, ::g::Uno::Float3*))::g::Fuse::RootViewport__get_ViewOrigin_fn;
    type->interface13.fp_get_ViewRange = (void(*)(uObject*, ::g::Uno::Float2*))::g::Fuse::RootViewport__get_ViewRange_fn;
    type->interface12.fp_get_PixelsPerPoint = (void(*)(uObject*, float*))::g::Fuse::RootViewport__get_PixelsPerPoint_fn;
    type->interface12.fp_get_Size = (void(*)(uObject*, ::g::Uno::Float2*))::g::Fuse::RootViewport__get_Size_fn;
    type->interface12.fp_get_PixelSize = (void(*)(uObject*, ::g::Uno::Float2*))::g::Fuse::RootViewport__get_PixelSize_fn;
    type->interface12.fp_get_ViewTransform = (void(*)(uObject*, ::g::Uno::Float4x4*))::g::Fuse::RootViewport__get_ViewTransform_fn;
    type->interface11.fp_Dispose = (void(*)(uObject*))::g::Fuse::RootViewport__UnoIDisposableDispose_fn;
    type->interface10.fp_PointToWorldRay = (void(*)(uObject*, ::g::Uno::Float2*, ::g::Uno::Geometry::Ray*))::g::Fuse::RootViewport__PointToWorldRay_fn;
    type->interface10.fp_WorldToLocalRay = (void(*)(uObject*, uObject*, ::g::Uno::Geometry::Ray*, ::g::Fuse::Visual*, ::g::Uno::Geometry::Ray*))::g::Fuse::RootViewport__WorldToLocalRay_fn;
    type->interface8.fp_Clear = (void(*)(uObject*))::g::Fuse::Visual__UnoCollectionsICollectionFuseNodeClear_fn;
    type->interface8.fp_Contains = (void(*)(uObject*, void*, bool*))::g::Fuse::Visual__UnoCollectionsICollectionFuseNodeContains_fn;
    type->interface6.fp_RemoveAt = (void(*)(uObject*, int*))::g::Fuse::Visual__UnoCollectionsIListFuseNodeRemoveAt_fn;
    type->interface9.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Visual__UnoCollectionsIEnumerableFuseNodeGetEnumerator_fn;
    type->interface8.fp_get_Count = (void(*)(uObject*, int*))::g::Fuse::Visual__UnoCollectionsICollectionFuseNodeget_Count_fn;
    type->interface6.fp_get_Item = (void(*)(uObject*, int*, uTRef))::g::Fuse::Visual__UnoCollectionsIListFuseNodeget_Item_fn;
    type->interface6.fp_Insert = (void(*)(uObject*, int*, void*))::g::Fuse::Visual__Insert1_fn;
    type->interface7.fp_OnPropertyChanged = (void(*)(uObject*, ::g::Uno::UX::PropertyObject*, ::g::Uno::UX::Selector*))::g::Fuse::Visual__OnPropertyChanged2_fn;
    type->interface8.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Visual__Add1_fn;
    type->interface8.fp_Remove = (void(*)(uObject*, void*, bool*))::g::Fuse::Visual__Remove1_fn;
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

// public extern TestRootViewport(Uno.Platform.Window window, [float pixelsPerPoint]) :96
void TestRootViewport__ctor_5_fn(TestRootViewport* __this, ::g::Uno::Platform::Window* window, float* pixelsPerPoint)
{
    __this->ctor_5(window, *pixelsPerPoint);
}

// public extern TestRootViewport New(Uno.Platform.Window window, [float pixelsPerPoint]) :96
void TestRootViewport__New4_fn(::g::Uno::Platform::Window* window, float* pixelsPerPoint, TestRootViewport** __retval)
{
    *__retval = TestRootViewport::New4(window, *pixelsPerPoint);
}

// internal void Resize(float2 size) :101
void TestRootViewport__Resize_fn(TestRootViewport* __this, ::g::Uno::Float2* size)
{
    __this->Resize(*size);
}

// public extern TestRootViewport(Uno.Platform.Window window, [float pixelsPerPoint]) [instance] :96
void TestRootViewport::ctor_5(::g::Uno::Platform::Window* window, float pixelsPerPoint)
{
    uStackFrame __("Fuse.Testing.TestRootViewport", ".ctor(Uno.Platform.Window,[float])");
    ctor_3();
    OverrideSize(::g::Uno::Float2__New1(100.0f), pixelsPerPoint, pixelsPerPoint);
}

// internal void Resize(float2 size) [instance] :101
void TestRootViewport::Resize(::g::Uno::Float2 size)
{
    uStackFrame __("Fuse.Testing.TestRootViewport", "Resize(float2)");
    OverrideSize(size, PixelsPerPoint(), PixelsPerOSPoint());
    OnResized(NULL, NULL);
}

// public extern TestRootViewport New(Uno.Platform.Window window, [float pixelsPerPoint]) [static] :96
TestRootViewport* TestRootViewport::New4(::g::Uno::Platform::Window* window, float pixelsPerPoint)
{
    TestRootViewport* obj1 = (TestRootViewport*)uNew(TestRootViewport_typeof());
    obj1->ctor_5(window, pixelsPerPoint);
    return obj1;
}
// }

// /Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Testing/1.0.2/$.uno
// --------------------------------------------------------------------------------------

// public sealed class UnoTestingHelper :12
// {
static void UnoTestingHelper_build(uType* type)
{
    ::STRINGS[5] = uString::Const("FuseJS/Internal/UnoTestingHelper");
    ::STRINGS[6] = uString::Const("testFailed");
    ::TYPES[10] = ::g::Fuse::Scripting::NativeCallback_typeof();
    ::TYPES[11] = ::g::Uno::Action_typeof();
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Fuse::Scripting::NativeModule_type, interface0),
        ::g::Fuse::Scripting::IModuleProvider_typeof(), offsetof(::g::Fuse::Scripting::NativeModule_type, interface1));
    type->SetFields(4,
        type, (uintptr_t)&::g::Fuse::Testing::UnoTestingHelper::_instance_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)UnoTestingHelper__New2_fn, 0, true, type, 0));
}

::g::Fuse::Scripting::NativeModule_type* UnoTestingHelper_typeof()
{
    static uSStrong< ::g::Fuse::Scripting::NativeModule_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Scripting::NativeModule_typeof();
    options.FieldCount = 5;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(UnoTestingHelper);
    options.TypeSize = sizeof(::g::Fuse::Scripting::NativeModule_type);
    type = (::g::Fuse::Scripting::NativeModule_type*)uClassType::New("Fuse.Testing.UnoTestingHelper", options);
    type->fp_build_ = UnoTestingHelper_build;
    type->fp_ctor_ = (void*)UnoTestingHelper__New2_fn;
    type->interface1.fp_GetModule = (void(*)(uObject*, ::g::Fuse::Scripting::Module**))::g::Fuse::Scripting::NativeModule__FuseScriptingIModuleProviderGetModule_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))::g::Fuse::Scripting::Module__Dispose_fn;
    return type;
}

// public UnoTestingHelper() :15
void UnoTestingHelper__ctor_2_fn(UnoTestingHelper* __this)
{
    __this->ctor_2();
}

// public UnoTestingHelper New() :15
void UnoTestingHelper__New2_fn(UnoTestingHelper** __retval)
{
    *__retval = UnoTestingHelper::New2();
}

// private static object TestFailed(Fuse.Scripting.Context c, object[] args) :38
void UnoTestingHelper__TestFailed_fn(::g::Fuse::Scripting::Context* c, uArray* args, uObject** __retval)
{
    *__retval = UnoTestingHelper::TestFailed(c, args);
}

uSStrong<UnoTestingHelper*> UnoTestingHelper::_instance_;

// public UnoTestingHelper() [instance] :15
void UnoTestingHelper::ctor_2()
{
    uStackFrame __("Fuse.Testing.UnoTestingHelper", ".ctor()");
    ctor_1();

    if (UnoTestingHelper::_instance_ != NULL)
        return;

    ::g::Uno::UX::Resource::SetGlobalKey(UnoTestingHelper::_instance_ = this, ::STRINGS[5/*"FuseJS/Inte...*/]);
    AddMember(::g::Fuse::Scripting::NativeFunction::New1(::STRINGS[6/*"testFailed"*/], uDelegate::New(::TYPES[10/*Fuse.Scripting.NativeCallback*/], (void*)UnoTestingHelper__TestFailed_fn)));
}

// public UnoTestingHelper New() [static] :15
UnoTestingHelper* UnoTestingHelper::New2()
{
    UnoTestingHelper* obj1 = (UnoTestingHelper*)uNew(UnoTestingHelper_typeof());
    obj1->ctor_2();
    return obj1;
}

// private static object TestFailed(Fuse.Scripting.Context c, object[] args) [static] :38
uObject* UnoTestingHelper::TestFailed(::g::Fuse::Scripting::Context* c, uArray* args)
{
    uStackFrame __("Fuse.Testing.UnoTestingHelper", "TestFailed(Fuse.Scripting.Context,object[])");
    uString* message = ::g::Uno::Object::ToString(uPtr(uPtr(args)->Strong<uObject*>(0)));
    ::g::Fuse::UpdateManager::PostAction(uDelegate::New(::TYPES[11/*Uno.Action*/], (void*)UnoTestingHelper__TestFailure__Fail_fn, UnoTestingHelper__TestFailure::New1(message)));
    return NULL;
}
// }

}}} // ::g::Fuse::Testing
