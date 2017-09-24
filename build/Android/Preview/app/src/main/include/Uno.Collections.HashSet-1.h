// This file was generated based on '/Users/medbeji/Library/Application Support/Fusetools/Packages/UnoCore/0.47.13/source/uno/collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Object.h>
namespace g{namespace Uno{namespace Collections{struct Dictionary;}}}
namespace g{namespace Uno{namespace Collections{struct HashSet;}}}
namespace g{namespace Uno{namespace Collections{template<class T>struct HashSet__Enumerator;}}}

namespace g{
namespace Uno{
namespace Collections{

// public sealed class HashSet<T> :533
// {
struct HashSet_type : uType
{
    ::g::Uno::Collections::IEnumerable interface0;
};

HashSet_type* HashSet_typeof();
void HashSet__ctor__fn(HashSet* __this);
void HashSet__ctor_1_fn(HashSet* __this, uObject* items);
void HashSet__Add_fn(HashSet* __this, void* item, bool* __retval);
void HashSet__Clear_fn(HashSet* __this);
void HashSet__Contains_fn(HashSet* __this, void* item, bool* __retval);
void HashSet__get_Count_fn(HashSet* __this, int* __retval);
void HashSet__GetEnumerator_fn(HashSet* __this, uTRef __retval);
void HashSet__GetEnumerator_boxed_fn(HashSet* __this, uObject** __retval);
void HashSet__New1_fn(uType* __type, HashSet** __retval);
void HashSet__New2_fn(uType* __type, uObject* items, HashSet** __retval);
void HashSet__Remove_fn(HashSet* __this, void* item, bool* __retval);
void HashSet__SetEquals_fn(HashSet* __this, uObject* that, bool* __retval);

struct HashSet : uObject
{
    uStrong< ::g::Uno::Collections::Dictionary*> _map;

    void ctor_();
    void ctor_1(uObject* items);
    template<class T>
    bool Add(T item) { bool __retval; return HashSet__Add_fn(this, uConstrain(__type->T(0), item), &__retval), __retval; }
    void Clear();
    template<class T>
    bool Contains(T item) { bool __retval; return HashSet__Contains_fn(this, uConstrain(__type->T(0), item), &__retval), __retval; }
    int Count();
    template<class T>
    HashSet__Enumerator<T> GetEnumerator();
    uObject* GetEnumerator_boxed();
    template<class T>
    bool Remove(T item) { bool __retval; return HashSet__Remove_fn(this, uConstrain(__type->T(0), item), &__retval), __retval; }
    bool SetEquals(uObject* that);
    static HashSet* New1(uType* __type);
    static HashSet* New2(uType* __type, uObject* items);
};

}}} // ::g::Uno::Collections

#include <Uno.Collections.HashS-aaabdf6f.h>

namespace g{
namespace Uno{
namespace Collections{

template<class T>
HashSet__Enumerator<T> HashSet::GetEnumerator() { HashSet__Enumerator<T> __retval; return HashSet__GetEnumerator_fn(this, &__retval), __retval; }
// }

}}} // ::g::Uno::Collections
