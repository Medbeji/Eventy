// This file was generated based on '/Users/medbeji/Library/Application Support/Fusetools/Packages/UnoCore/0.47.13/source/uno/io/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.IDisposable.h>
#include <Uno.IO.TextWriter.h>
namespace g{namespace Uno{namespace IO{struct Stream;}}}
namespace g{namespace Uno{namespace IO{struct StreamWriter;}}}

namespace g{
namespace Uno{
namespace IO{

// public sealed class StreamWriter :3153
// {
::g::Uno::IO::TextWriter_type* StreamWriter_typeof();
void StreamWriter__ctor_1_fn(StreamWriter* __this, ::g::Uno::IO::Stream* stream);
void StreamWriter__Close_fn(StreamWriter* __this);
void StreamWriter__Dispose1_fn(StreamWriter* __this, bool* disposing);
void StreamWriter__Flush_fn(StreamWriter* __this);
void StreamWriter__New1_fn(::g::Uno::IO::Stream* stream, StreamWriter** __retval);
void StreamWriter__Write13_fn(StreamWriter* __this, uArray* array, int* index, int* count);
void StreamWriter__Write1_fn(StreamWriter* __this, uChar* value);
void StreamWriter__Write3_fn(StreamWriter* __this, uArray* buffer, int* index, int* count);
void StreamWriter__Write9_fn(StreamWriter* __this, uString* value);

struct StreamWriter : ::g::Uno::IO::TextWriter
{
    uStrong<uArray*> _buffer;
    int _index;
    uStrong< ::g::Uno::IO::Stream*> _stream;

    void ctor_1(::g::Uno::IO::Stream* stream);
    void Write13(uArray* array, int index, int count);
    static StreamWriter* New1(::g::Uno::IO::Stream* stream);
};
// }

}}} // ::g::Uno::IO
