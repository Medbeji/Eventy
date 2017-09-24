// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Uno.Action.h>
#include <Uno.Bool.h>
#include <Uno.Collections.List-1.h>
#include <Uno.Collections.List--251bdc7d.h>
#include <Uno.Exception.h>
#include <Uno.Int.h>
#include <Uno.Object.h>
#include <Uno.String.h>
#include <Uno.Testing.Assert.h>
#include <Uno.Testing.Assertion-65eaa948.h>
#include <Uno.Testing.NamedTestMethod.h>
#include <Uno.Testing.Registry.h>
#include <Uno.Testing.TestAttribute.h>
static uString* STRINGS[2];
static uType* TYPES[2];

namespace g{
namespace Uno{
namespace Testing{

// /Users/medbeji/Library/Application Support/Fusetools/Packages/Uno.Testing/1.0.11/$.uno
// --------------------------------------------------------------------------------------

// public partial static class Assert :117
// {
// static Assert() :117
static void Assert__cctor__fn(uType* __type)
{
    Assert::maxStringLength_ = 300;
}

static void Assert_build(uType* type)
{
    ::STRINGS[0] = uString::Const("");
    type->SetFields(0,
        ::g::Uno::Int_typeof(), (uintptr_t)&::g::Uno::Testing::Assert::maxStringLength_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(1,
        new uFunction("Fail", NULL, (void*)Assert__Fail_fn, 0, true, uVoid_typeof(), 4, ::g::Uno::String_typeof(), ::g::Uno::String_typeof(), ::g::Uno::Int_typeof(), ::g::Uno::String_typeof()));
}

uClassType* Assert_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Uno.Testing.Assert", options);
    type->fp_build_ = Assert_build;
    type->fp_cctor_ = Assert__cctor__fn;
    return type;
}

// public static void Fail(string message, [string filePath], [int lineNumber], [string memberName]) :522
void Assert__Fail_fn(uString* message, uString* filePath, int* lineNumber, uString* memberName)
{
    Assert::Fail(message, filePath, *lineNumber, memberName);
}

int Assert::maxStringLength_;

// public static void Fail(string message, [string filePath], [int lineNumber], [string memberName]) [static] :522
void Assert::Fail(uString* message, uString* filePath, int lineNumber, uString* memberName)
{
    uStackFrame __("Uno.Testing.Assert", "Fail(string,[string],[int],[string])");
    Assert_typeof()->Init();
    U_THROW(::g::Uno::Testing::AssertionFailedException::New4(filePath, lineNumber, memberName, ::STRINGS[0/*""*/], message));
}
// }

// /Users/medbeji/Library/Application Support/Fusetools/Packages/Uno.Testing/1.0.11/$.uno
// --------------------------------------------------------------------------------------

// public sealed class AssertionFailedException :750
// {
static void AssertionFailedException_build(uType* type)
{
    type->SetFields(3,
        uObject_typeof(), offsetof(::g::Uno::Testing::AssertionFailedException, actual), 0,
        uObject_typeof(), offsetof(::g::Uno::Testing::AssertionFailedException, expected), 0,
        ::g::Uno::String_typeof(), offsetof(::g::Uno::Testing::AssertionFailedException, filename), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Uno::Testing::AssertionFailedException, line), 0,
        ::g::Uno::String_typeof(), offsetof(::g::Uno::Testing::AssertionFailedException, membername), 0);
    type->Reflection.SetFields(5,
        new uField("actual", 3),
        new uField("expected", 4),
        new uField("filename", 5),
        new uField("line", 6),
        new uField("membername", 7));
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)AssertionFailedException__New4_fn, 0, true, type, 5, ::g::Uno::String_typeof(), ::g::Uno::Int_typeof(), ::g::Uno::String_typeof(), ::g::Uno::String_typeof(), ::g::Uno::String_typeof()));
}

::g::Uno::Exception_type* AssertionFailedException_typeof()
{
    static uSStrong< ::g::Uno::Exception_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::Exception_typeof();
    options.FieldCount = 8;
    options.ObjectSize = sizeof(AssertionFailedException);
    options.TypeSize = sizeof(::g::Uno::Exception_type);
    type = (::g::Uno::Exception_type*)uClassType::New("Uno.Testing.AssertionFailedException", options);
    type->fp_build_ = AssertionFailedException_build;
    return type;
}

// public AssertionFailedException(string filename, int line, string membername, string expected, string actual) :758
void AssertionFailedException__ctor_3_fn(AssertionFailedException* __this, uString* filename1, int* line1, uString* membername1, uString* expected1, uString* actual1)
{
    __this->ctor_3(filename1, *line1, membername1, expected1, actual1);
}

// public AssertionFailedException New(string filename, int line, string membername, string expected, string actual) :758
void AssertionFailedException__New4_fn(uString* filename1, int* line1, uString* membername1, uString* expected1, uString* actual1, AssertionFailedException** __retval)
{
    *__retval = AssertionFailedException::New4(filename1, *line1, membername1, expected1, actual1);
}

// public AssertionFailedException(string filename, int line, string membername, string expected, string actual) [instance] :758
void AssertionFailedException::ctor_3(uString* filename1, int line1, uString* membername1, uString* expected1, uString* actual1)
{
    ctor_();
    filename = filename1;
    line = line1;
    membername = membername1;
    expected = expected1;
    actual = actual1;
}

// public AssertionFailedException New(string filename, int line, string membername, string expected, string actual) [static] :758
AssertionFailedException* AssertionFailedException::New4(uString* filename1, int line1, uString* membername1, uString* expected1, uString* actual1)
{
    AssertionFailedException* obj1 = (AssertionFailedException*)uNew(AssertionFailedException_typeof());
    obj1->ctor_3(filename1, line1, membername1, expected1, actual1);
    return obj1;
}
// }

// /Users/medbeji/Library/Application Support/Fusetools/Packages/Uno.Testing/1.0.11/$.uno
// --------------------------------------------------------------------------------------

// public sealed class NamedTestMethod :892
// {
static void NamedTestMethod_build(uType* type)
{
    type->SetFields(0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Uno::Testing::NamedTestMethod, Ignore), 0,
        ::g::Uno::String_typeof(), offsetof(::g::Uno::Testing::NamedTestMethod, IgnoreReason), 0,
        ::g::Uno::Action_typeof(), offsetof(::g::Uno::Testing::NamedTestMethod, Method), 0,
        ::g::Uno::String_typeof(), offsetof(::g::Uno::Testing::NamedTestMethod, Name), 0);
    type->Reflection.SetFields(4,
        new uField("Ignore", 0),
        new uField("IgnoreReason", 1),
        new uField("Method", 2),
        new uField("Name", 3));
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)NamedTestMethod__New1_fn, 0, true, type, 4, ::g::Uno::Action_typeof(), ::g::Uno::String_typeof(), ::g::Uno::Bool_typeof(), ::g::Uno::String_typeof()));
}

uType* NamedTestMethod_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 4;
    options.ObjectSize = sizeof(NamedTestMethod);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.Testing.NamedTestMethod", options);
    type->fp_build_ = NamedTestMethod_build;
    return type;
}

// public NamedTestMethod(Uno.Action method, string name, bool ignore, string ignoreReason) :901
void NamedTestMethod__ctor__fn(NamedTestMethod* __this, uDelegate* method, uString* name, bool* ignore, uString* ignoreReason)
{
    __this->ctor_(method, name, *ignore, ignoreReason);
}

// public NamedTestMethod New(Uno.Action method, string name, bool ignore, string ignoreReason) :901
void NamedTestMethod__New1_fn(uDelegate* method, uString* name, bool* ignore, uString* ignoreReason, NamedTestMethod** __retval)
{
    *__retval = NamedTestMethod::New1(method, name, *ignore, ignoreReason);
}

// public NamedTestMethod(Uno.Action method, string name, bool ignore, string ignoreReason) [instance] :901
void NamedTestMethod::ctor_(uDelegate* method, uString* name, bool ignore, uString* ignoreReason)
{
    Method = method;
    Name = name;
    Ignore = ignore;
    IgnoreReason = ignoreReason;
}

// public NamedTestMethod New(Uno.Action method, string name, bool ignore, string ignoreReason) [static] :901
NamedTestMethod* NamedTestMethod::New1(uDelegate* method, uString* name, bool ignore, uString* ignoreReason)
{
    NamedTestMethod* obj1 = (NamedTestMethod*)uNew(NamedTestMethod_typeof());
    obj1->ctor_(method, name, ignore, ignoreReason);
    return obj1;
}
// }

// /Users/medbeji/Library/Application Support/Fusetools/Packages/Uno.Testing/1.0.11/$.uno
// --------------------------------------------------------------------------------------

// public sealed class Registry :919
// {
static void Registry_build(uType* type)
{
    ::STRINGS[1] = uString::Const("Could not find test ");
    ::TYPES[0] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Uno::Testing::NamedTestMethod_typeof(), NULL);
    ::TYPES[1] = ::g::Uno::Collections::List__Enumerator_typeof()->MakeType(::g::Uno::Testing::NamedTestMethod_typeof(), NULL);
    type->SetFields(0,
        ::TYPES[0/*Uno.Collections.List<Uno.Testing.NamedTestMethod>*/], offsetof(::g::Uno::Testing::Registry, tests), 0);
    type->Reflection.SetFunctions(5,
        new uFunction("Add", NULL, (void*)Registry__Add_fn, 0, false, uVoid_typeof(), 4, ::g::Uno::Action_typeof(), ::g::Uno::String_typeof(), ::g::Uno::Bool_typeof(), ::g::Uno::String_typeof()),
        new uFunction("get_Count", NULL, (void*)Registry__get_Count_fn, 0, false, ::g::Uno::Int_typeof(), 0),
        new uFunction("FindTest", NULL, (void*)Registry__FindTest_fn, 0, false, ::g::Uno::Testing::NamedTestMethod_typeof(), 1, ::g::Uno::String_typeof()),
        new uFunction("get_Item", NULL, (void*)Registry__get_Item_fn, 0, false, ::g::Uno::Testing::NamedTestMethod_typeof(), 1, ::g::Uno::Int_typeof()),
        new uFunction(".ctor", NULL, (void*)Registry__New1_fn, 0, true, type, 0));
}

uType* Registry_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.ObjectSize = sizeof(Registry);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.Testing.Registry", options);
    type->fp_build_ = Registry_build;
    type->fp_ctor_ = (void*)Registry__New1_fn;
    return type;
}

// public generated Registry() :919
void Registry__ctor__fn(Registry* __this)
{
    __this->ctor_();
}

// public void Add(Uno.Action method, string name, bool ignore, string ignoreReason) :923
void Registry__Add_fn(Registry* __this, uDelegate* method, uString* name, bool* ignore, uString* ignoreReason)
{
    __this->Add(method, name, *ignore, ignoreReason);
}

// public int get_Count() :928
void Registry__get_Count_fn(Registry* __this, int* __retval)
{
    *__retval = __this->Count();
}

// public Uno.Testing.NamedTestMethod FindTest(string testName) :931
void Registry__FindTest_fn(Registry* __this, uString* testName, ::g::Uno::Testing::NamedTestMethod** __retval)
{
    *__retval = __this->FindTest(testName);
}

// public Uno.Testing.NamedTestMethod get_Item(int index) :929
void Registry__get_Item_fn(Registry* __this, int* index, ::g::Uno::Testing::NamedTestMethod** __retval)
{
    *__retval = __this->Item(*index);
}

// public generated Registry New() :919
void Registry__New1_fn(Registry** __retval)
{
    *__retval = Registry::New1();
}

// public generated Registry() [instance] :919
void Registry::ctor_()
{
    tests = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[0/*Uno.Collections.List<Uno.Testing.NamedTestMethod>*/]));
}

// public void Add(Uno.Action method, string name, bool ignore, string ignoreReason) [instance] :923
void Registry::Add(uDelegate* method, uString* name, bool ignore, uString* ignoreReason)
{
    uStackFrame __("Uno.Testing.Registry", "Add(Uno.Action,string,bool,string)");
    ::g::Uno::Collections::List__Add_fn(uPtr(tests), ::g::Uno::Testing::NamedTestMethod::New1(method, name, ignore, ignoreReason));
}

// public int get_Count() [instance] :928
int Registry::Count()
{
    uStackFrame __("Uno.Testing.Registry", "get_Count()");
    return uPtr(tests)->Count();
}

// public Uno.Testing.NamedTestMethod FindTest(string testName) [instance] :931
::g::Uno::Testing::NamedTestMethod* Registry::FindTest(uString* testName)
{
    uStackFrame __("Uno.Testing.Registry", "FindTest(string)");
    ::g::Uno::Collections::List__Enumerator<uStrong< ::g::Uno::Testing::NamedTestMethod*> > ret3;

    for (::g::Uno::Collections::List__Enumerator<uStrong< ::g::Uno::Testing::NamedTestMethod*> > enum1 = (::g::Uno::Collections::List__GetEnumerator_fn(uPtr(tests), &ret3), ret3); enum1.MoveNext(::TYPES[1/*Uno.Collections.List<Uno.Testing.NamedTestMethod>.Enumerator*/]); )
    {
        ::g::Uno::Testing::NamedTestMethod* t = enum1.Current(::TYPES[1/*Uno.Collections.List<Uno.Testing.NamedTestMethod>.Enumerator*/]);

        if (::g::Uno::String::op_Equality(uPtr(t)->Name, testName))
            return t;
    }

    U_THROW(::g::Uno::Exception::New2(::g::Uno::String::op_Addition2(::STRINGS[1/*"Could not f...*/], testName)));
}

// public Uno.Testing.NamedTestMethod get_Item(int index) [instance] :929
::g::Uno::Testing::NamedTestMethod* Registry::Item(int index)
{
    uStackFrame __("Uno.Testing.Registry", "get_Item(int)");
    ::g::Uno::Testing::NamedTestMethod* ret4;
    return (::g::Uno::Collections::List__get_Item_fn(uPtr(tests), uCRef<int>(index), &ret4), ret4);
}

// public generated Registry New() [static] :919
Registry* Registry::New1()
{
    Registry* obj2 = (Registry*)uNew(Registry_typeof());
    obj2->ctor_();
    return obj2;
}
// }

// /Users/medbeji/Library/Application Support/Fusetools/Packages/Uno.Testing/1.0.11/$.uno
// --------------------------------------------------------------------------------------

// public sealed class TestAttribute :1068
// {
static void TestAttribute_build(uType* type)
{
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)TestAttribute__New1_fn, 0, true, type, 0));
}

uType* TestAttribute_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::Attribute_typeof();
    options.ObjectSize = sizeof(TestAttribute);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.Testing.TestAttribute", options);
    type->fp_build_ = TestAttribute_build;
    type->fp_ctor_ = (void*)TestAttribute__New1_fn;
    return type;
}

// public generated TestAttribute() :1068
void TestAttribute__ctor_1_fn(TestAttribute* __this)
{
    __this->ctor_1();
}

// public generated TestAttribute New() :1068
void TestAttribute__New1_fn(TestAttribute** __retval)
{
    *__retval = TestAttribute::New1();
}

// public generated TestAttribute() [instance] :1068
void TestAttribute::ctor_1()
{
    ctor_();
}

// public generated TestAttribute New() [static] :1068
TestAttribute* TestAttribute::New1()
{
    TestAttribute* obj1 = (TestAttribute*)uNew(TestAttribute_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

}}} // ::g::Uno::Testing
