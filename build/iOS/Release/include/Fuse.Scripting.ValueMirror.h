// This file was generated based on '../../AppData/Local/Fusetools/Packages/FuseCore/0.46.1/scripting/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Scripting{struct ValueMirror;}}}

namespace g{
namespace Fuse{
namespace Scripting{

// public abstract class ValueMirror :2637
// {
struct ValueMirror_type : uType
{
    void(*fp_Unsubscribe)(::g::Fuse::Scripting::ValueMirror*);
};

ValueMirror_type* ValueMirror_typeof();
void ValueMirror__ctor__fn(ValueMirror* __this, uObject* raw);
void ValueMirror__get_Raw_fn(ValueMirror* __this, uObject** __retval);
void ValueMirror__Unbox_fn(uObject* obj, uObject** __retval);
void ValueMirror__Unsubscribe1_fn(uObject* obj);

struct ValueMirror : uObject
{
    uStrong<uObject*> _raw;

    void ctor_(uObject* raw);
    uObject* Raw();
    void Unsubscribe() { (((ValueMirror_type*)__type)->fp_Unsubscribe)(this); }
    static uObject* Unbox(uObject* obj);
    static void Unsubscribe1(uObject* obj);
};
// }

}}} // ::g::Fuse::Scripting
