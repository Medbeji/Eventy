// This file was generated based on '/Users/medbeji/Library/Application Support/Fusetools/Packages/UnoCore/1.0.11/source/uno/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Platform.CoreApp.h>
namespace g{namespace Uno{namespace Platform{struct Window;}}}
namespace g{namespace Uno{struct Application;}}

namespace g{
namespace Uno{

// public abstract extern class Application :72
// {
uType* Application_typeof();
void Application__ctor_1_fn(Application* __this);
void Application__get_Current1_fn(Application** __retval);
void Application__get_Window_fn(Application* __this, ::g::Uno::Platform::Window** __retval);
void Application__set_Window_fn(Application* __this, ::g::Uno::Platform::Window* value);

struct Application : ::g::Uno::Platform::CoreApp
{
    uStrong< ::g::Uno::Platform::Window*> _Window;

    void ctor_1();
    ::g::Uno::Platform::Window* Window();
    void Window(::g::Uno::Platform::Window* value);
    static Application* Current1();
};
// }

}} // ::g::Uno
