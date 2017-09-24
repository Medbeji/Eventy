// This file was generated based on /usr/local/share/uno/Packages/Outracks.Simulator.Common.Uno/0.0.0/common/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Outracks{namespace Simulator{struct ImmutableList;}}}
namespace g{namespace Outracks{namespace Simulator{struct List;}}}
namespace g{namespace Outracks{template<class T>struct Optional1;}}
namespace g{namespace System{namespace IO{struct BinaryReader;}}}
namespace g{namespace System{namespace IO{struct BinaryWriter;}}}

namespace g{
namespace Outracks{
namespace Simulator{

// public static class List :239
// {
uClassType* List_typeof();
void List__Create_fn(uType* __type, uArray* elements, ::g::Outracks::Simulator::ImmutableList** __retval);
void List__Read_fn(uType* __type, ::g::System::IO::BinaryReader* reader, uDelegate* elementReader, ::g::Outracks::Simulator::ImmutableList** __retval);
void List__ReadImmutableList_fn(uType* __type, ::g::System::IO::BinaryReader* reader, uDelegate* elementReader, ::g::Outracks::Simulator::ImmutableList** __retval);
void List__ToImmutableList_fn(uType* __type, uObject* self, ::g::Outracks::Simulator::ImmutableList** __retval);
void List__ToList_fn(uType* __type, void* element, ::g::Outracks::Simulator::ImmutableList** __retval);
void List__Write_fn(uType* __type, ::g::Outracks::Simulator::ImmutableList* array, ::g::System::IO::BinaryWriter* writer, uDelegate* elementWriter);
void List__Write1_fn(uType* __type, ::g::System::IO::BinaryWriter* writer, ::g::Outracks::Simulator::ImmutableList* array, uDelegate* elementWriter);
void List__Write2_fn(uType* __type, ::g::System::IO::BinaryWriter* writer, uObject* array, uDelegate* elementWriter);
void List__WriteImmutableList_fn(::g::System::IO::BinaryWriter* writer, uObject* elements, uDelegate* writeElement);

struct List : uObject
{
    static ::g::Outracks::Simulator::ImmutableList* Create(uType* __type, uArray* elements);
    static ::g::Outracks::Simulator::ImmutableList* Read(uType* __type, ::g::System::IO::BinaryReader* reader, uDelegate* elementReader);
    static ::g::Outracks::Simulator::ImmutableList* ReadImmutableList(uType* __type, ::g::System::IO::BinaryReader* reader, uDelegate* elementReader);
    static ::g::Outracks::Simulator::ImmutableList* ToImmutableList(uType* __type, uObject* self);
    template<class T>
    static ::g::Outracks::Simulator::ImmutableList* ToList(uType* __type, ::g::Outracks::Optional1<T> element);
    static void Write(uType* __type, ::g::Outracks::Simulator::ImmutableList* array, ::g::System::IO::BinaryWriter* writer, uDelegate* elementWriter);
    static void Write1(uType* __type, ::g::System::IO::BinaryWriter* writer, ::g::Outracks::Simulator::ImmutableList* array, uDelegate* elementWriter);
    static void Write2(uType* __type, ::g::System::IO::BinaryWriter* writer, uObject* array, uDelegate* elementWriter);
    static void WriteImmutableList(::g::System::IO::BinaryWriter* writer, uObject* elements, uDelegate* writeElement);
};

}}} // ::g::Outracks::Simulator

#include <Outracks.Optional-1.h>
#include <Uno.Object.h>

namespace g{
namespace Outracks{
namespace Simulator{

template<class T>
::g::Outracks::Simulator::ImmutableList* List::ToList(uType* __type, ::g::Outracks::Optional1<T> element) { ::g::Outracks::Simulator::ImmutableList* __retval; return List__ToList_fn(__type, uConstrain(::g::Outracks::Optional1_typeof()->MakeType(__type->U(0), NULL), element), &__retval), __retval; }
// }

}}} // ::g::Outracks::Simulator
