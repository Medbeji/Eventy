// This file was generated based on '../../AppData/Local/Fusetools/Packages/Fuse.Drawing/0.46.1/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Scripting.Marshal.IConverter.h>
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Drawing{struct BrushConverter;}}}

namespace g{
namespace Fuse{
namespace Drawing{

// public sealed class BrushConverter :87
// {
struct BrushConverter_type : uType
{
    ::g::Fuse::Scripting::Marshal__IConverter interface0;
};

BrushConverter_type* BrushConverter_typeof();
void BrushConverter__ctor__fn(BrushConverter* __this);
void BrushConverter__CanConvert_fn(BrushConverter* __this, uType* t, bool* __retval);
void BrushConverter__New1_fn(BrushConverter** __retval);
void BrushConverter__TryConvert_fn(BrushConverter* __this, uType* t, uObject* o, uObject** __retval);

struct BrushConverter : uObject
{
    void ctor_();
    bool CanConvert(uType* t);
    uObject* TryConvert(uType* t, uObject* o);
    static BrushConverter* New1();
};
// }

}}} // ::g::Fuse::Drawing
