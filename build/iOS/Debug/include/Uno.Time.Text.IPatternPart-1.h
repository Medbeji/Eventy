// This file was generated based on '/Users/medbeji/Library/Application Support/Fusetools/Packages/UnoCore/1.0.11/source/uno/time/text/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>

namespace g{
namespace Uno{
namespace Time{
namespace Text{

// internal abstract interface IPatternPart<T> :820
// {
uInterfaceType* IPatternPart_typeof();

struct IPatternPart
{
    void(*fp_Write)(uObject*, void*, uString**);
    template<class T>
    static uString* Write(const uInterface& __this, T value) { uString* __retval; return __this.VTable<IPatternPart>()->fp_Write(__this, uConstrain(__this->__type->GetBase(IPatternPart_typeof())->T(0), value), &__retval), __retval; }
    static void Write_ex(const uInterface& __this, void* value, uString** __retval) { __this.VTable<IPatternPart>()->fp_Write(__this, value, __retval); }
};
// }

}}}} // ::g::Uno::Time::Text
