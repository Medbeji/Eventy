// This file was generated based on /usr/local/share/uno/Packages/Outracks.Simulator.Common.Uno/0.0.0/messages/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Outracks.IBinaryMessage.h>
#include <Outracks.Optional-1.h>
#include <Uno.Guid.h>
#include <Uno.Object.h>
namespace g{namespace Outracks{namespace Simulator{namespace Protocol{struct UpdateAttribute;}}}}
namespace g{namespace Outracks{namespace Simulator{struct ObjectIdentifier;}}}
namespace g{namespace Outracks{namespace Simulator{struct SourceReference;}}}
namespace g{namespace System{namespace IO{struct BinaryReader;}}}
namespace g{namespace System{namespace IO{struct BinaryWriter;}}}

namespace g{
namespace Outracks{
namespace Simulator{
namespace Protocol{

// public sealed class UpdateAttribute :828
// {
struct UpdateAttribute_type : uType
{
    ::g::Outracks::IBinaryMessage interface0;
};

UpdateAttribute_type* UpdateAttribute_typeof();
void UpdateAttribute__ctor__fn(UpdateAttribute* __this, ::g::Outracks::Simulator::ObjectIdentifier* obj, uString* property, ::g::Outracks::Optional1<uStrong<uString*> >* value, ::g::Outracks::Simulator::SourceReference* source);
void UpdateAttribute__get_Id_fn(UpdateAttribute* __this, ::g::Uno::Guid* __retval);
void UpdateAttribute__set_Id_fn(UpdateAttribute* __this, ::g::Uno::Guid* value);
void UpdateAttribute__New1_fn(::g::Outracks::Simulator::ObjectIdentifier* obj, uString* property, ::g::Outracks::Optional1<uStrong<uString*> >* value, ::g::Outracks::Simulator::SourceReference* source, UpdateAttribute** __retval);
void UpdateAttribute__get_Object_fn(UpdateAttribute* __this, ::g::Outracks::Simulator::ObjectIdentifier** __retval);
void UpdateAttribute__set_Object_fn(UpdateAttribute* __this, ::g::Outracks::Simulator::ObjectIdentifier* value);
void UpdateAttribute__get_Property_fn(UpdateAttribute* __this, uString** __retval);
void UpdateAttribute__set_Property_fn(UpdateAttribute* __this, uString* value);
void UpdateAttribute__ReadDataFrom_fn(::g::System::IO::BinaryReader* reader, UpdateAttribute** __retval);
void UpdateAttribute__get_Source_fn(UpdateAttribute* __this, ::g::Outracks::Simulator::SourceReference** __retval);
void UpdateAttribute__set_Source_fn(UpdateAttribute* __this, ::g::Outracks::Simulator::SourceReference* value);
void UpdateAttribute__ToString_fn(UpdateAttribute* __this, uString** __retval);
void UpdateAttribute__get_Type_fn(UpdateAttribute* __this, uString** __retval);
void UpdateAttribute__get_Value_fn(UpdateAttribute* __this, ::g::Outracks::Optional1<uStrong<uString*> >* __retval);
void UpdateAttribute__set_Value_fn(UpdateAttribute* __this, ::g::Outracks::Optional1<uStrong<uString*> >* value);
void UpdateAttribute__WriteDataTo_fn(UpdateAttribute* __this, ::g::System::IO::BinaryWriter* writer);

struct UpdateAttribute : uObject
{
    static uSStrong<uString*> MessageType_;
    static uSStrong<uString*>& MessageType() { return UpdateAttribute_typeof()->Init(), MessageType_; }
    ::g::Uno::Guid _Id;
    uStrong< ::g::Outracks::Simulator::ObjectIdentifier*> _Object;
    uStrong<uString*> _Property;
    uStrong< ::g::Outracks::Simulator::SourceReference*> _Source;
    uTField _Value() { return __type->Field(this, 4); }

    void ctor_(::g::Outracks::Simulator::ObjectIdentifier* obj, uString* property, ::g::Outracks::Optional1<uStrong<uString*> > value, ::g::Outracks::Simulator::SourceReference* source);
    ::g::Uno::Guid Id();
    void Id(::g::Uno::Guid value);
    ::g::Outracks::Simulator::ObjectIdentifier* Object();
    void Object(::g::Outracks::Simulator::ObjectIdentifier* value);
    uString* Property();
    void Property(uString* value);
    ::g::Outracks::Simulator::SourceReference* Source();
    void Source(::g::Outracks::Simulator::SourceReference* value);
    uString* Type();
    ::g::Outracks::Optional1<uStrong<uString*> > Value();
    void Value(::g::Outracks::Optional1<uStrong<uString*> > value);
    void WriteDataTo(::g::System::IO::BinaryWriter* writer);
    static UpdateAttribute* New1(::g::Outracks::Simulator::ObjectIdentifier* obj, uString* property, ::g::Outracks::Optional1<uStrong<uString*> > value, ::g::Outracks::Simulator::SourceReference* source);
    static UpdateAttribute* ReadDataFrom(::g::System::IO::BinaryReader* reader);
};
// }

}}}} // ::g::Outracks::Simulator::Protocol
