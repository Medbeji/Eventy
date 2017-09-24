// This file was generated based on '../../AppData/Local/Fusetools/Packages/Fuse.Android/0.46.1/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.AppBase.h>
namespace g{namespace Fuse{namespace Controls{struct GraphicsView;}}}
namespace g{namespace Fuse{struct App;}}
namespace g{namespace Fuse{struct Node;}}
namespace g{namespace Uno{namespace Platform{struct TimerEventArgs;}}}

namespace g{
namespace Fuse{

// public abstract extern class App :563
// {
::g::Fuse::AppBase_type* App_typeof();
void App__ctor_3_fn(App* __this);
void App__get_Children_fn(App* __this, uObject** __retval);
void App__OnTick_fn(App* __this, uObject* sender, ::g::Uno::Platform::TimerEventArgs* args);
void App__PropagateBackground_fn(App* __this);
void App__get_RootGraphicsView_fn(App* __this, ::g::Fuse::Controls::GraphicsView** __retval);

struct App : ::g::Fuse::AppBase
{
    uStrong< ::g::Fuse::Controls::GraphicsView*> _graphicsView;

    void ctor_3();
    void OnTick(uObject* sender, ::g::Uno::Platform::TimerEventArgs* args);
    void PropagateBackground();
    ::g::Fuse::Controls::GraphicsView* RootGraphicsView();
};
// }

}} // ::g::Fuse
