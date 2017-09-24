// This file was generated based on '/Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Testing/1.0.2/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Binding.h>
#include <Fuse.ICommonViewport.h>
#include <Fuse.INotifyUnrooted.h>
#include <Fuse.IProperties.h>
#include <Fuse.IRenderViewport.h>
#include <Fuse.IViewport.h>
#include <Fuse.Node.h>
#include <Fuse.RootViewport.h>
#include <Fuse.Scripting.IScriptObject.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.IDisposable.h>
#include <Uno.UX.IPropertyListener.h>
namespace g{namespace Fuse{namespace Testing{struct TestRootViewport;}}}
namespace g{namespace Uno{namespace Platform{struct Window;}}}
namespace g{namespace Uno{struct Float2;}}

namespace g{
namespace Fuse{
namespace Testing{

// internal sealed class TestRootViewport :86
// {
struct TestRootViewport_type : ::g::Fuse::RootViewport_type
{
    ::g::Fuse::IRenderViewport interface13;
};

TestRootViewport_type* TestRootViewport_typeof();
void TestRootViewport__ctor_5_fn(TestRootViewport* __this, ::g::Uno::Platform::Window* window, float* pixelsPerPoint);
void TestRootViewport__New4_fn(::g::Uno::Platform::Window* window, float* pixelsPerPoint, TestRootViewport** __retval);
void TestRootViewport__Resize_fn(TestRootViewport* __this, ::g::Uno::Float2* size);

struct TestRootViewport : ::g::Fuse::RootViewport
{
    void ctor_5(::g::Uno::Platform::Window* window, float pixelsPerPoint);
    void Resize(::g::Uno::Float2 size);
    static TestRootViewport* New4(::g::Uno::Platform::Window* window, float pixelsPerPoint);
};
// }

}}} // ::g::Fuse::Testing
