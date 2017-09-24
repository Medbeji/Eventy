// This file was generated based on '/Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Scripting.V8/0.47.7/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <include/V8Simple.h>
#include <Uno.h>
namespace g{namespace Fuse{namespace Scripting{namespace V8{namespace Simple{struct Debug;}}}}}

namespace g{
namespace Fuse{
namespace Scripting{
namespace V8{
namespace Simple{

// internal static extern class Debug :1188
// {
uClassType* Debug_typeof();
void Debug__ProcessMessages_fn(::JSContext** context);
void Debug__SendCommand_fn(::JSContext** context, uString* command, int* length);

struct Debug : uObject
{
    static void ProcessMessages(::JSContext* context);
    static void SendCommand(::JSContext* context, uString* command, int length);
};
// }

}}}}} // ::g::Fuse::Scripting::V8::Simple
