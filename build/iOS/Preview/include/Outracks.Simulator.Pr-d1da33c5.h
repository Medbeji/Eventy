// This file was generated based on /usr/local/share/uno/Packages/Outracks.Simulator.Common.Uno/0.0.0/messages/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Outracks{namespace Simulator{namespace Protocol{struct UxFileContents;}}}}
namespace g{namespace System{namespace IO{struct BinaryReader;}}}
namespace g{namespace System{namespace IO{struct BinaryWriter;}}}

namespace g{
namespace Outracks{
namespace Simulator{
namespace Protocol{

// public sealed class UxFileContents :680
// {
uType* UxFileContents_typeof();
void UxFileContents__ctor__fn(UxFileContents* __this);
void UxFileContents__get_Contents_fn(UxFileContents* __this, uString** __retval);
void UxFileContents__set_Contents_fn(UxFileContents* __this, uString* value);
void UxFileContents__New1_fn(UxFileContents** __retval);
void UxFileContents__get_Path_fn(UxFileContents* __this, uString** __retval);
void UxFileContents__set_Path_fn(UxFileContents* __this, uString* value);
void UxFileContents__Read_fn(::g::System::IO::BinaryReader* reader, UxFileContents** __retval);
void UxFileContents__Write_fn(UxFileContents* str, ::g::System::IO::BinaryWriter* writer);

struct UxFileContents : uObject
{
    uStrong<uString*> _Contents;
    uStrong<uString*> _Path;

    void ctor_();
    uString* Contents();
    void Contents(uString* value);
    uString* Path();
    void Path(uString* value);
    static UxFileContents* New1();
    static UxFileContents* Read(::g::System::IO::BinaryReader* reader);
    static void Write(UxFileContents* str, ::g::System::IO::BinaryWriter* writer);
};
// }

}}}} // ::g::Outracks::Simulator::Protocol
