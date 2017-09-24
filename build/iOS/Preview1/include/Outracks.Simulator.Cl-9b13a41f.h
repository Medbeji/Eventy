// This file was generated based on /usr/local/share/uno/Packages/Outracks.Simulator.Client.Uno/0.1.0/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IResize.h>
#include <Fuse.Binding.h>
#include <Fuse.Controls.Panel.h>
#include <Fuse.Drawing.ISurfaceDrawable.h>
#include <Fuse.IActualPlacement.h>
#include <Fuse.INotifyUnrooted.h>
#include <Fuse.IProperties.h>
#include <Fuse.Node.h>
#include <Fuse.Scripting.IScriptObject.h>
#include <Fuse.Triggers.Actions.IHide.h>
#include <Fuse.Triggers.Actions.IShow.h>
#include <Fuse.Triggers.Actions-ea70af1f.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.UX.IPropertyListener.h>
namespace g{namespace Fuse{struct App;}}
namespace g{namespace Outracks{namespace Simulator{namespace Client{struct FakeApp;}}}}
namespace g{namespace Uno{namespace UX{struct Resource;}}}
namespace g{namespace Uno{struct Float4;}}

namespace g{
namespace Outracks{
namespace Simulator{
namespace Client{

// public sealed class FakeApp :1178
// {
::g::Fuse::Controls::Panel_type* FakeApp_typeof();
void FakeApp__ctor_7_fn(FakeApp* __this, ::g::Fuse::App* app);
void FakeApp__get_Background1_fn(FakeApp* __this, ::g::Uno::Float4* __retval);
void FakeApp__set_Background1_fn(FakeApp* __this, ::g::Uno::Float4* value);
void FakeApp__get_ClearColor_fn(FakeApp* __this, ::g::Uno::Float4* __retval);
void FakeApp__set_ClearColor_fn(FakeApp* __this, ::g::Uno::Float4* value);
void FakeApp__New4_fn(::g::Fuse::App* app, FakeApp** __retval);
void FakeApp__get_Resources1_fn(FakeApp* __this, uObject** __retval);

struct FakeApp : ::g::Fuse::Controls::Panel
{
    uStrong< ::g::Fuse::App*> _app;

    void ctor_7(::g::Fuse::App* app);
    ::g::Uno::Float4 Background1();
    void Background1(::g::Uno::Float4 value);
    ::g::Uno::Float4 ClearColor();
    void ClearColor(::g::Uno::Float4 value);
    uObject* Resources1();
    static FakeApp* New4(::g::Fuse::App* app);
};
// }

}}}} // ::g::Outracks::Simulator::Client
