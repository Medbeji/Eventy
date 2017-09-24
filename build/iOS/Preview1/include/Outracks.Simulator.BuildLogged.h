// This file was generated based on /usr/local/share/uno/Packages/Outracks.Simulator.Common.Uno/0.0.0/messages/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Outracks.IBinaryMessage.h>
#include <Outracks.Optional-1.h>
#include <Uno.Guid.h>
#include <Uno.Object.h>
namespace g{namespace Outracks{namespace Simulator{struct BuildLogged;}}}
namespace g{namespace System{namespace IO{struct BinaryReader;}}}
namespace g{namespace System{namespace IO{struct BinaryWriter;}}}

namespace g{
namespace Outracks{
namespace Simulator{

// public sealed class BuildLogged :108
// {
struct BuildLogged_type : uType
{
    ::g::Outracks::IBinaryMessage interface0;
};

BuildLogged_type* BuildLogged_typeof();
void BuildLogged__ctor__fn(BuildLogged* __this);
void BuildLogged__ctor_1_fn(BuildLogged* __this, uString* text, ::g::Outracks::Optional1<int>* color, ::g::Uno::Guid* buildId);
void BuildLogged__get_BuildId_fn(BuildLogged* __this, ::g::Uno::Guid* __retval);
void BuildLogged__set_BuildId_fn(BuildLogged* __this, ::g::Uno::Guid* value);
void BuildLogged__get_Color_fn(BuildLogged* __this, ::g::Outracks::Optional1<int>* __retval);
void BuildLogged__set_Color_fn(BuildLogged* __this, ::g::Outracks::Optional1<int>* value);
void BuildLogged__New1_fn(BuildLogged** __retval);
void BuildLogged__New2_fn(uString* text, ::g::Outracks::Optional1<int>* color, ::g::Uno::Guid* buildId, BuildLogged** __retval);
void BuildLogged__ReadDataFrom_fn(::g::System::IO::BinaryReader* reader, BuildLogged** __retval);
void BuildLogged__get_Text_fn(BuildLogged* __this, uString** __retval);
void BuildLogged__set_Text_fn(BuildLogged* __this, uString* value);
void BuildLogged__ToString_fn(BuildLogged* __this, uString** __retval);
void BuildLogged__get_Type_fn(BuildLogged* __this, uString** __retval);
void BuildLogged__WriteDataTo_fn(BuildLogged* __this, ::g::System::IO::BinaryWriter* writer);

struct BuildLogged : uObject
{
    static uSStrong<uString*> MessageType_;
    static uSStrong<uString*>& MessageType() { return BuildLogged_typeof()->Init(), MessageType_; }
    ::g::Uno::Guid _BuildId;
    uTField _Color() { return __type->Field(this, 1); }
    uStrong<uString*> _Text;

    void ctor_();
    void ctor_1(uString* text, ::g::Outracks::Optional1<int> color, ::g::Uno::Guid buildId);
    ::g::Uno::Guid BuildId();
    void BuildId(::g::Uno::Guid value);
    ::g::Outracks::Optional1<int> Color();
    void Color(::g::Outracks::Optional1<int> value);
    uString* Text();
    void Text(uString* value);
    uString* Type();
    void WriteDataTo(::g::System::IO::BinaryWriter* writer);
    static BuildLogged* New1();
    static BuildLogged* New2(uString* text, ::g::Outracks::Optional1<int> color, ::g::Uno::Guid buildId);
    static BuildLogged* ReadDataFrom(::g::System::IO::BinaryReader* reader);
};
// }

}}} // ::g::Outracks::Simulator
