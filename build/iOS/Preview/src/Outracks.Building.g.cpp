// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Outracks.Building.Bui-7641c626.h>
#include <Outracks.Building.BuildFailed.h>
#include <Outracks.Building.Use-5a04599a.h>
#include <Uno.Exception.h>
#include <Uno.String.h>
static uString* STRINGS[2];

namespace g{
namespace Outracks{
namespace Building{

// /usr/local/share/uno/Packages/Outracks.Simulator.Common.Uno/0.0.0/exceptions/$.uno
// ----------------------------------------------------------------------------------

// public sealed class BuildCanceledException :42
// {
static void BuildCanceledException_build(uType* type)
{
    ::STRINGS[0] = uString::Const("Build was canceled");
    type->SetFields(3);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)BuildCanceledException__New4_fn, 0, true, type, 0));
}

::g::Uno::Exception_type* BuildCanceledException_typeof()
{
    static uSStrong< ::g::Uno::Exception_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::Exception_typeof();
    options.FieldCount = 3;
    options.ObjectSize = sizeof(BuildCanceledException);
    options.TypeSize = sizeof(::g::Uno::Exception_type);
    type = (::g::Uno::Exception_type*)uClassType::New("Outracks.Building.BuildCanceledException", options);
    type->fp_build_ = BuildCanceledException_build;
    type->fp_ctor_ = (void*)BuildCanceledException__New4_fn;
    return type;
}

// public BuildCanceledException() :44
void BuildCanceledException__ctor_3_fn(BuildCanceledException* __this)
{
    __this->ctor_3();
}

// public BuildCanceledException New() :44
void BuildCanceledException__New4_fn(BuildCanceledException** __retval)
{
    *__retval = BuildCanceledException::New4();
}

// public BuildCanceledException() [instance] :44
void BuildCanceledException::ctor_3()
{
    ctor_1(::STRINGS[0/*"Build was c...*/]);
}

// public BuildCanceledException New() [static] :44
BuildCanceledException* BuildCanceledException::New4()
{
    BuildCanceledException* obj1 = (BuildCanceledException*)uNew(BuildCanceledException_typeof());
    obj1->ctor_3();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Outracks.Simulator.Common.Uno/0.0.0/exceptions/$.uno
// ----------------------------------------------------------------------------------

// public abstract class BuildFailed :8
// {
static void BuildFailed_build(uType* type)
{
    type->SetFields(3);
}

::g::Uno::Exception_type* BuildFailed_typeof()
{
    static uSStrong< ::g::Uno::Exception_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::Exception_typeof();
    options.FieldCount = 3;
    options.ObjectSize = sizeof(BuildFailed);
    options.TypeSize = sizeof(::g::Uno::Exception_type);
    type = (::g::Uno::Exception_type*)uClassType::New("Outracks.Building.BuildFailed", options);
    type->fp_build_ = BuildFailed_build;
    return type;
}

// protected BuildFailed(string reason, [Uno.Exception innerException]) :10
void BuildFailed__ctor_3_fn(BuildFailed* __this, uString* reason, ::g::Uno::Exception* innerException)
{
    __this->ctor_3(reason, innerException);
}

// protected BuildFailed(string reason, [Uno.Exception innerException]) [instance] :10
void BuildFailed::ctor_3(uString* reason, ::g::Uno::Exception* innerException)
{
    ctor_2(reason, innerException);
}
// }

// /usr/local/share/uno/Packages/Outracks.Simulator.Common.Uno/0.0.0/exceptions/$.uno
// ----------------------------------------------------------------------------------

// public sealed class UserCodeContainsErrors :101
// {
static void UserCodeContainsErrors_build(uType* type)
{
    ::STRINGS[1] = uString::Const("Errors were encountered while building the project");
    type->SetFields(3);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)UserCodeContainsErrors__New4_fn, 0, true, type, 0));
}

::g::Uno::Exception_type* UserCodeContainsErrors_typeof()
{
    static uSStrong< ::g::Uno::Exception_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Outracks::Building::BuildFailed_typeof();
    options.FieldCount = 3;
    options.ObjectSize = sizeof(UserCodeContainsErrors);
    options.TypeSize = sizeof(::g::Uno::Exception_type);
    type = (::g::Uno::Exception_type*)uClassType::New("Outracks.Building.UserCodeContainsErrors", options);
    type->fp_build_ = UserCodeContainsErrors_build;
    type->fp_ctor_ = (void*)UserCodeContainsErrors__New4_fn;
    return type;
}

// public UserCodeContainsErrors() :104
void UserCodeContainsErrors__ctor_4_fn(UserCodeContainsErrors* __this)
{
    __this->ctor_4();
}

// public UserCodeContainsErrors New() :104
void UserCodeContainsErrors__New4_fn(UserCodeContainsErrors** __retval)
{
    *__retval = UserCodeContainsErrors::New4();
}

// public UserCodeContainsErrors() [instance] :104
void UserCodeContainsErrors::ctor_4()
{
    ctor_3(::STRINGS[1/*"Errors were...*/], NULL);
}

// public UserCodeContainsErrors New() [static] :104
UserCodeContainsErrors* UserCodeContainsErrors::New4()
{
    UserCodeContainsErrors* obj1 = (UserCodeContainsErrors*)uNew(UserCodeContainsErrors_typeof());
    obj1->ctor_4();
    return obj1;
}
// }

}}} // ::g::Outracks::Building
