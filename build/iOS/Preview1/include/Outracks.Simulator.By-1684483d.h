// This file was generated based on /usr/local/share/uno/Packages/Outracks.Simulator.Common.Uno/0.0.0/bytecode/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Outracks.Simulator.By-683bc37a.h>
namespace g{namespace Outracks{namespace Simulator{namespace Bytecode{struct BlobLiteral;}}}}
namespace g{namespace System{namespace IO{struct BinaryReader;}}}
namespace g{namespace System{namespace IO{struct BinaryWriter;}}}

namespace g{
namespace Outracks{
namespace Simulator{
namespace Bytecode{

// public sealed class BlobLiteral :932
// {
::g::Outracks::Simulator::Bytecode::Literal_type* BlobLiteral_typeof();
void BlobLiteral__ctor_3_fn(BlobLiteral* __this, uArray* bytes);
void BlobLiteral__get_LiteralId_fn(BlobLiteral* __this, uChar* __retval);
void BlobLiteral__New1_fn(uArray* bytes, BlobLiteral** __retval);
void BlobLiteral__Read3_fn(::g::System::IO::BinaryReader* reader, BlobLiteral** __retval);
void BlobLiteral__ToString_fn(BlobLiteral* __this, uString** __retval);
void BlobLiteral__Write3_fn(BlobLiteral* blob, ::g::System::IO::BinaryWriter* writer);
void BlobLiteral__WriteLiteral_fn(BlobLiteral* __this, ::g::System::IO::BinaryWriter* writer);

struct BlobLiteral : ::g::Outracks::Simulator::Bytecode::Literal
{
    uStrong<uArray*> Bytes;

    void ctor_3(uArray* bytes);
    static BlobLiteral* New1(uArray* bytes);
    static BlobLiteral* Read3(::g::System::IO::BinaryReader* reader);
    static void Write3(BlobLiteral* blob, ::g::System::IO::BinaryWriter* writer);
};
// }

}}}} // ::g::Outracks::Simulator::Bytecode
