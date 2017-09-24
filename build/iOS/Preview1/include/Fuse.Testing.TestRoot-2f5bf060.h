// This file was generated based on '/Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Testing/1.0.2/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.IDisposable.h>
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Testing{struct TestRootPanel;}}}
namespace g{namespace Fuse{namespace Testing{struct TestRootSingletonsGuard;}}}

namespace g{
namespace Fuse{
namespace Testing{

// internal sealed class TestRootSingletonsGuard :405
// {
struct TestRootSingletonsGuard_type : uType
{
    ::g::Uno::IDisposable interface0;
};

TestRootSingletonsGuard_type* TestRootSingletonsGuard_typeof();
void TestRootSingletonsGuard__ctor__fn(TestRootSingletonsGuard* __this, ::g::Fuse::Testing::TestRootPanel* trp);
void TestRootSingletonsGuard__Dispose_fn(TestRootSingletonsGuard* __this);
void TestRootSingletonsGuard__New1_fn(::g::Fuse::Testing::TestRootPanel* trp, TestRootSingletonsGuard** __retval);

struct TestRootSingletonsGuard : uObject
{
    void ctor_(::g::Fuse::Testing::TestRootPanel* trp);
    void Dispose();
    static TestRootSingletonsGuard* New1(::g::Fuse::Testing::TestRootPanel* trp);
};
// }

}}} // ::g::Fuse::Testing
