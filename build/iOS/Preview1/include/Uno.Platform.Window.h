// This file was generated based on '/Users/medbeji/Library/Application Support/Fusetools/Packages/UnoCore/1.0.11/source/uno/platform/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Platform.OSFrame.h>
namespace g{namespace Uno{namespace Platform{struct KeyEventArgs;}}}
namespace g{namespace Uno{namespace Platform{struct TextInputEventArgs;}}}
namespace g{namespace Uno{namespace Platform{struct TimerEventArgs;}}}
namespace g{namespace Uno{namespace Platform{struct Window;}}}
namespace g{namespace Uno{struct Int2;}}

namespace g{
namespace Uno{
namespace Platform{

// public sealed extern class Window :812
// {
uType* Window_typeof();
void Window__ctor_1_fn(Window* __this);
void Window__get_ClientSize_fn(Window* __this, ::g::Uno::Int2* __retval);
void Window__set_ClientSize_fn(Window* __this, ::g::Uno::Int2* value);
void Window__Close_fn(Window* __this);
void Window__get_Fullscreen_fn(Window* __this, bool* __retval);
void Window__set_Fullscreen_fn(Window* __this, bool* value);
void Window__add_GotFocus_fn(Window* __this, uDelegate* value);
void Window__remove_GotFocus_fn(Window* __this, uDelegate* value);
void Window__get_IsTextInputActive_fn(Window* __this, bool* __retval);
void Window__add_KeyboardResized_fn(Window* __this, uDelegate* value);
void Window__remove_KeyboardResized_fn(Window* __this, uDelegate* value);
void Window__add_KeyPressed_fn(Window* __this, uDelegate* value);
void Window__remove_KeyPressed_fn(Window* __this, uDelegate* value);
void Window__add_KeyReleased_fn(Window* __this, uDelegate* value);
void Window__remove_KeyReleased_fn(Window* __this, uDelegate* value);
void Window__add_LostFocus_fn(Window* __this, uDelegate* value);
void Window__remove_LostFocus_fn(Window* __this, uDelegate* value);
void Window__New2_fn(Window** __retval);
void Window__OnGotFocus_fn(Window* __this, int* newState);
void Window__OnLostFocus_fn(Window* __this, int* newState);
void Window__OnTick_fn(Window* __this, uObject* sender, ::g::Uno::Platform::TimerEventArgs* args);
void Window__get_PointerCursor_fn(Window* __this, int* __retval);
void Window__set_PointerCursor_fn(Window* __this, int* value);
void Window__add_TextInput_fn(Window* __this, uDelegate* value);
void Window__remove_TextInput_fn(Window* __this, uDelegate* value);
void Window__get_Title_fn(Window* __this, uString** __retval);
void Window__set_Title_fn(Window* __this, uString* value);
void Window__add_Updating_fn(Window* __this, uDelegate* value);
void Window__remove_Updating_fn(Window* __this, uDelegate* value);

struct Window : ::g::Uno::Platform::OSFrame
{
    uStrong<uDelegate*> GotFocus1;
    uStrong<uDelegate*> KeyboardResized1;
    uStrong<uDelegate*> LostFocus1;
    uStrong<uDelegate*> TextInput1;
    uStrong<uDelegate*> Updating1;

    void ctor_1();
    ::g::Uno::Int2 ClientSize();
    void ClientSize(::g::Uno::Int2 value);
    void Close();
    bool Fullscreen();
    void Fullscreen(bool value);
    void add_GotFocus(uDelegate* value);
    void remove_GotFocus(uDelegate* value);
    bool IsTextInputActive();
    void add_KeyboardResized(uDelegate* value);
    void remove_KeyboardResized(uDelegate* value);
    void add_KeyPressed(uDelegate* value);
    void remove_KeyPressed(uDelegate* value);
    void add_KeyReleased(uDelegate* value);
    void remove_KeyReleased(uDelegate* value);
    void add_LostFocus(uDelegate* value);
    void remove_LostFocus(uDelegate* value);
    void OnGotFocus(int newState);
    void OnLostFocus(int newState);
    void OnTick(uObject* sender, ::g::Uno::Platform::TimerEventArgs* args);
    int PointerCursor();
    void PointerCursor(int value);
    void add_TextInput(uDelegate* value);
    void remove_TextInput(uDelegate* value);
    uString* Title();
    void Title(uString* value);
    void add_Updating(uDelegate* value);
    void remove_Updating(uDelegate* value);
    static Window* New2();
};
// }

}}} // ::g::Uno::Platform
