// This file was generated based on /usr/local/share/uno/Packages/Outracks.Simulator.Client.Uno/0.1.0/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Outracks{namespace Simulator{namespace Client{struct BytecodeCache;}}}}
namespace g{namespace Outracks{namespace Simulator{namespace Protocol{struct BytecodeGenerated;}}}}
namespace g{namespace Outracks{template<class T>struct Optional1;}}

namespace g{
namespace Outracks{
namespace Simulator{
namespace Client{

// public static class BytecodeCache :820
// {
uClassType* BytecodeCache_typeof();
void BytecodeCache__get_CacheFileName_fn(uString** __retval);
void BytecodeCache__get_CachePath_fn(uString** __retval);
void BytecodeCache__get_FuseDataDirectory_fn(uString** __retval);
void BytecodeCache__Load_fn(::g::Outracks::Simulator::Protocol::BytecodeGenerated** __retval);
void BytecodeCache__get_ProjectHash_fn(uint32_t* __retval);
void BytecodeCache__Save_fn(::g::Outracks::Simulator::Protocol::BytecodeGenerated* reify);
void BytecodeCache__TryLoad_fn(::g::Outracks::Optional1<uStrong< ::g::Outracks::Simulator::Protocol::BytecodeGenerated*> >* __retval);
void BytecodeCache__TrySave_fn(::g::Outracks::Simulator::Protocol::BytecodeGenerated* reify);

struct BytecodeCache : uObject
{
    static ::g::Outracks::Simulator::Protocol::BytecodeGenerated* Load();
    static void Save(::g::Outracks::Simulator::Protocol::BytecodeGenerated* reify);
    static ::g::Outracks::Optional1<uStrong< ::g::Outracks::Simulator::Protocol::BytecodeGenerated*> > TryLoad();
    static void TrySave(::g::Outracks::Simulator::Protocol::BytecodeGenerated* reify);
    static uString* CacheFileName();
    static uString* CachePath();
    static uString* FuseDataDirectory();
    static uint32_t ProjectHash();
};
// }

}}}} // ::g::Outracks::Simulator::Client
