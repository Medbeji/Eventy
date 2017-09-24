// This file was generated based on '/Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Controls.Native/1.0.2/android/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Controls.Native.-b1307a12.h>
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Controls{namespace Native{namespace Android{struct Switch;}}}}}

namespace g{
namespace Fuse{
namespace Controls{
namespace Native{
namespace Android{

// public sealed extern class Switch :1653
// {
struct Switch_type : uType
{
    ::g::Fuse::Controls::Native::IToggleView interface0;
};

Switch_type* Switch_typeof();
void Switch__ctor__fn(Switch* __this, uObject* host);
void Switch__set_Host_fn(Switch* __this, uObject* value);
void Switch__New1_fn(uObject* host, Switch** __retval);
void Switch__set_Value_fn(Switch* __this, bool* value);

struct Switch : uObject
{
    void ctor_(uObject* host);
    void Host(uObject* value);
    void Value(bool value);
    static Switch* New1(uObject* host);
};
// }

}}}}} // ::g::Fuse::Controls::Native::Android
