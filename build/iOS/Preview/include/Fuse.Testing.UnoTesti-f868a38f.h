// This file was generated based on '/Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Testing/1.0.2/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Testing{struct UnoTestingHelper__TestFailure;}}}

namespace g{
namespace Fuse{
namespace Testing{

// private sealed class UnoTestingHelper.TestFailure :24
// {
uType* UnoTestingHelper__TestFailure_typeof();
void UnoTestingHelper__TestFailure__ctor__fn(UnoTestingHelper__TestFailure* __this, uString* message);
void UnoTestingHelper__TestFailure__Fail_fn(UnoTestingHelper__TestFailure* __this);
void UnoTestingHelper__TestFailure__New1_fn(uString* message, UnoTestingHelper__TestFailure** __retval);

struct UnoTestingHelper__TestFailure : uObject
{
    uStrong<uString*> _message;

    void ctor_(uString* message);
    void Fail();
    static UnoTestingHelper__TestFailure* New1(uString* message);
};
// }

}}} // ::g::Fuse::Testing
