// This file was generated based on /usr/local/share/uno/Packages/Outracks.Simulator.Common.Uno/0.0.0/runtime/reflection/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Outracks.Simulator.Ru-4ebc9cf3.h>
#include <Uno.Object.h>
namespace g{namespace Outracks{namespace Simulator{namespace Runtime{struct CppEvent;}}}}

namespace g{
namespace Outracks{
namespace Simulator{
namespace Runtime{

// internal sealed extern class CppEvent :414
// {
struct CppEvent_type : uType
{
    ::g::Outracks::Simulator::Runtime::IEvent interface0;
};

CppEvent_type* CppEvent_typeof();
void CppEvent__ctor__fn(CppEvent* __this, uType* declaringType, uType* type, uString* name);
void CppEvent__get_AddMethod_fn(CppEvent* __this, uObject** __retval);
void CppEvent__get_DeclaringType_fn(CppEvent* __this, uType** __retval);
void CppEvent__New1_fn(uType* declaringType, uType* type, uString* name, CppEvent** __retval);
void CppEvent__get_RemoveMethod_fn(CppEvent* __this, uObject** __retval);

struct CppEvent : uObject
{
    uStrong<uType*> _declaringType;
    uStrong<uString*> _name;
    uStrong<uType*> _type;

    void ctor_(uType* declaringType, uType* type, uString* name);
    uObject* AddMethod();
    uType* DeclaringType();
    uObject* RemoveMethod();
    static CppEvent* New1(uType* declaringType, uType* type, uString* name);
};
// }

}}}} // ::g::Outracks::Simulator::Runtime
