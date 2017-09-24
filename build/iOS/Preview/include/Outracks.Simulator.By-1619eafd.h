// This file was generated based on /usr/local/share/uno/Packages/Outracks.Simulator.Common.Uno/0.0.0/bytecode/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Outracks.Optional-1.h>
#include <Outracks.Simulator.By-f2188f8.h>
namespace g{namespace Outracks{namespace Simulator{namespace Bytecode{struct NoOperation;}}}}
namespace g{namespace System{namespace IO{struct BinaryReader;}}}
namespace g{namespace System{namespace IO{struct BinaryWriter;}}}

namespace g{
namespace Outracks{
namespace Simulator{
namespace Bytecode{

// public sealed class NoOperation :1674
// {
::g::Outracks::Simulator::Bytecode::Statement_type* NoOperation_typeof();
void NoOperation__ctor_1_fn(NoOperation* __this, ::g::Outracks::Optional1<uStrong<uString*> >* description);
void NoOperation__New1_fn(::g::Outracks::Optional1<uStrong<uString*> >* description, NoOperation** __retval);
void NoOperation__Read1_fn(::g::System::IO::BinaryReader* reader, NoOperation** __retval);
void NoOperation__get_StatementId_fn(NoOperation* __this, uChar* __retval);
void NoOperation__ToString_fn(NoOperation* __this, uString** __retval);
void NoOperation__WriteStatement_fn(NoOperation* __this, ::g::System::IO::BinaryWriter* writer);

struct NoOperation : ::g::Outracks::Simulator::Bytecode::Statement
{
    uTField Description() { return __type->Field(this, 0); }

    void ctor_1(::g::Outracks::Optional1<uStrong<uString*> > description);
    static NoOperation* New1(::g::Outracks::Optional1<uStrong<uString*> > description);
    static NoOperation* Read1(::g::System::IO::BinaryReader* reader);
};
// }

}}}} // ::g::Outracks::Simulator::Bytecode
