// This file was generated based on '/Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Navigation/1.0.2/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Navigation.IPage-2d3977f2.h>
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Navigation{struct NavigationPageProxy;}}}
namespace g{namespace Fuse{struct Visual;}}

namespace g{
namespace Fuse{
namespace Navigation{

// public sealed class NavigationPageProxy :1010
// {
struct NavigationPageProxy_type : uType
{
    ::g::Fuse::Navigation::IPagePropertyListener interface0;
};

NavigationPageProxy_type* NavigationPageProxy_typeof();
void NavigationPageProxy__ctor__fn(NavigationPageProxy* __this, uDelegate* ready, uDelegate* unready);
void NavigationPageProxy__FuseNavigationIPagePropertyListenerPageChanged_fn(NavigationPageProxy* __this, ::g::Fuse::Visual* n);
void NavigationPageProxy__get_Navigation_fn(NavigationPageProxy* __this, uObject** __retval);
void NavigationPageProxy__New1_fn(uDelegate* ready, uDelegate* unready, NavigationPageProxy** __retval);
void NavigationPageProxy__OnPageRootingCompleted_fn(NavigationPageProxy* __this);
void NavigationPageProxy__get_Page_fn(NavigationPageProxy* __this, ::g::Fuse::Visual** __retval);
void NavigationPageProxy__set_Page_fn(NavigationPageProxy* __this, ::g::Fuse::Visual* value);
void NavigationPageProxy__Rooted_fn(NavigationPageProxy* __this, ::g::Fuse::Visual* source);
void NavigationPageProxy__Unrooted_fn(NavigationPageProxy* __this);

struct NavigationPageProxy : uObject
{
    uStrong<uObject*> _navigation;
    uStrong< ::g::Fuse::Visual*> _pageBind;
    uStrong<uDelegate*> _ready;
    uStrong< ::g::Fuse::Visual*> _source;
    uStrong<uDelegate*> _unready;
    bool _waitRootingCompleted;
    uStrong< ::g::Fuse::Visual*> _Page;

    void ctor_(uDelegate* ready, uDelegate* unready);
    uObject* Navigation();
    void OnPageRootingCompleted();
    ::g::Fuse::Visual* Page();
    void Page(::g::Fuse::Visual* value);
    void Rooted(::g::Fuse::Visual* source);
    void Unrooted();
    static NavigationPageProxy* New1(uDelegate* ready, uDelegate* unready);
};
// }

}}} // ::g::Fuse::Navigation
