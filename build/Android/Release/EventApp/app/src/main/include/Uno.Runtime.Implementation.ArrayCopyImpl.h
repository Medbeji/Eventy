// This file was generated based on '../../AppData/Local/Fusetools/Packages/UnoCore/0.46.1/source/uno/runtime/implementation/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Uno{namespace Runtime{namespace Implementation{struct ArrayCopyImpl;}}}}

namespace g{
namespace Uno{
namespace Runtime{
namespace Implementation{

// internal static class ArrayCopyImpl :9
// {
uClassType* ArrayCopyImpl_typeof();
void ArrayCopyImpl__Copy_fn(uType* __type, uArray* sourceArray, int* sourceIndex, uArray* destinationArray, int* destinationIndex, int* length);
void ArrayCopyImpl__ValidateArguments_fn(uType* __type, uArray* sourceArray, int* sourceIndex, uArray* destinationArray, int* destinationIndex, int* length);

struct ArrayCopyImpl : uObject
{
    static void Copy(uType* __type, uArray* sourceArray, int sourceIndex, uArray* destinationArray, int destinationIndex, int length);
    static void ValidateArguments(uType* __type, uArray* sourceArray, int sourceIndex, uArray* destinationArray, int destinationIndex, int length);
};
// }

}}}} // ::g::Uno::Runtime::Implementation
