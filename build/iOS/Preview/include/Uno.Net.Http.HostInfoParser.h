// This file was generated based on '/Users/medbeji/Library/Application Support/Fusetools/Packages/Uno.Net.Http/1.0.11/uriparsers/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Uno{namespace Collections{struct List;}}}
namespace g{namespace Uno{namespace Net{namespace Http{struct HostInfo;}}}}
namespace g{namespace Uno{namespace Net{namespace Http{struct HostInfoParser;}}}}

namespace g{
namespace Uno{
namespace Net{
namespace Http{

// public sealed class HostInfoParser :69
// {
uType* HostInfoParser_typeof();
void HostInfoParser__ctor__fn(HostInfoParser* __this);
void HostInfoParser__ExtractPort_fn(uString* portString, int* defaultPort, int* __retval);
void HostInfoParser__GetDafaultPort_fn(uString* scheme, int* __retval);
void HostInfoParser__IsHostValid_fn(uString* userInfo, bool* __retval);
void HostInfoParser__New1_fn(HostInfoParser** __retval);
void HostInfoParser__Parse_fn(uString* uriString, uString* scheme, int* endIdx, int* idx, ::g::Uno::Net::Http::HostInfo** __retval);

struct HostInfoParser : uObject
{
    static uSStrong< ::g::Uno::Collections::List*> _invalidChars_;
    static uSStrong< ::g::Uno::Collections::List*>& _invalidChars() { return HostInfoParser_typeof()->Init(), _invalidChars_; }

    void ctor_();
    static int ExtractPort(uString* portString, int defaultPort);
    static int GetDafaultPort(uString* scheme);
    static bool IsHostValid(uString* userInfo);
    static HostInfoParser* New1();
    static ::g::Uno::Net::Http::HostInfo* Parse(uString* uriString, uString* scheme, int endIdx, int* idx);
};
// }

}}}} // ::g::Uno::Net::Http
