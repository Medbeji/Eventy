// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Fuse.Elements.Element.h>
#include <Fuse.Elements.UX.HeightFunction.h>
#include <Fuse.Elements.UX.LayoutFunction.h>
#include <Fuse.Elements.UX.WidthFunction.h>
#include <Fuse.Elements.UX.XFunction.h>
#include <Fuse.Elements.UX.YFunction.h>
#include <Fuse.PlacedArgs.h>
#include <Fuse.PlacedHandler.h>
#include <Uno.Bool.h>
#include <Uno.Float.h>
#include <Uno.Float2.h>
#include <Uno.Object.h>
#include <Uno.Type.h>
#include <Uno.UX.IPropertyListener.h>
#include <Uno.UX.Property.h>
#include <Uno.UX.Value.h>
static uType* TYPES[1];

namespace g{
namespace Fuse{
namespace Elements{
namespace UX{

// C:\Users\nour\AppData\Local\Fusetools\Packages\Fuse.Elements\0.46.1\ux\$.uno
// ----------------------------------------------------------------------------

// public sealed class HeightFunction :77
// {
static void HeightFunction_build(uType* type)
{
    type->SetFields(5);
}

::g::Fuse::Elements::UX::LayoutFunction_type* HeightFunction_typeof()
{
    static uSStrong< ::g::Fuse::Elements::UX::LayoutFunction_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Elements::UX::LayoutFunction_typeof();
    options.FieldCount = 5;
    options.ObjectSize = sizeof(HeightFunction);
    options.TypeSize = sizeof(::g::Fuse::Elements::UX::LayoutFunction_type);
    type = (::g::Fuse::Elements::UX::LayoutFunction_type*)uClassType::New("Fuse.Elements.UX.HeightFunction", options);
    type->fp_build_ = HeightFunction_build;
    type->fp_OnPlaced = (void(*)(::g::Fuse::Elements::UX::LayoutFunction*, uObject*, ::g::Fuse::PlacedArgs*))HeightFunction__OnPlaced_fn;
    return type;
}

// protected override sealed void OnPlaced(object sender, Fuse.PlacedArgs args) :79
void HeightFunction__OnPlaced_fn(HeightFunction* __this, uObject* sender, ::g::Fuse::PlacedArgs* args)
{
    __this->SetValue(::g::Uno::UX::Value::op_Implicit2(uPtr(args)->NewSize().Y));
}
// }

// C:\Users\nour\AppData\Local\Fusetools\Packages\Fuse.Elements\0.46.1\ux\$.uno
// ----------------------------------------------------------------------------

// public abstract class LayoutFunction :8
// {
static void LayoutFunction_build(uType* type)
{
    ::TYPES[0] = ::g::Fuse::PlacedHandler_typeof();
    type->SetFields(1,
        ::g::Fuse::Elements::Element_typeof(), offsetof(::g::Fuse::Elements::UX::LayoutFunction, _elm), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Elements::UX::LayoutFunction, _hasValue), 0,
        ::g::Uno::UX::Property_typeof(), offsetof(::g::Fuse::Elements::UX::LayoutFunction, _target), 0,
        ::g::Uno::UX::Value_typeof(), offsetof(::g::Fuse::Elements::UX::LayoutFunction, _value), 0);
}

LayoutFunction_type* LayoutFunction_typeof()
{
    static uSStrong<LayoutFunction_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Binding_typeof();
    options.FieldCount = 5;
    options.ObjectSize = sizeof(LayoutFunction);
    options.TypeSize = sizeof(LayoutFunction_type);
    type = (LayoutFunction_type*)uClassType::New("Fuse.Elements.UX.LayoutFunction", options);
    type->fp_build_ = LayoutFunction_build;
    type->fp_OnRooted = (void(*)(::g::Fuse::Binding*))LayoutFunction__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Binding*))LayoutFunction__OnUnrooted_fn;
    return type;
}

// protected generated LayoutFunction() :8
void LayoutFunction__ctor_1_fn(LayoutFunction* __this)
{
    __this->ctor_1();
}

// public Fuse.Elements.Element get_Element() :24
void LayoutFunction__get_Element_fn(LayoutFunction* __this, ::g::Fuse::Elements::Element** __retval)
{
    *__retval = __this->Element();
}

// public void set_Element(Fuse.Elements.Element value) :25
void LayoutFunction__set_Element_fn(LayoutFunction* __this, ::g::Fuse::Elements::Element* value)
{
    __this->Element(value);
}

// protected override sealed void OnRooted() :36
void LayoutFunction__OnRooted_fn(LayoutFunction* __this)
{
    if (__this->_elm != NULL)
        uPtr(__this->_elm)->add_Placed(uDelegate::New(::TYPES[0/*Fuse.PlacedHandler*/], __this, offsetof(LayoutFunction_type, fp_OnPlaced)));
}

// protected override sealed void OnUnrooted() :41
void LayoutFunction__OnUnrooted_fn(LayoutFunction* __this)
{
    if (__this->_elm != NULL)
        uPtr(__this->_elm)->remove_Placed(uDelegate::New(::TYPES[0/*Fuse.PlacedHandler*/], __this, offsetof(LayoutFunction_type, fp_OnPlaced)));

    __this->_hasValue = false;
}

// protected void Push() :59
void LayoutFunction__Push_fn(LayoutFunction* __this)
{
    __this->Push();
}

// protected void SetValue(Uno.UX.Value value) :52
void LayoutFunction__SetValue_fn(LayoutFunction* __this, ::g::Uno::UX::Value* value)
{
    __this->SetValue(value);
}

// public Uno.UX.Property get_Target() :13
void LayoutFunction__get_Target_fn(LayoutFunction* __this, ::g::Uno::UX::Property** __retval)
{
    *__retval = __this->Target();
}

// public void set_Target(Uno.UX.Property value) :14
void LayoutFunction__set_Target_fn(LayoutFunction* __this, ::g::Uno::UX::Property* value)
{
    __this->Target(value);
}

// protected generated LayoutFunction() [instance] :8
void LayoutFunction::ctor_1()
{
    ctor_();
}

// public Fuse.Elements.Element get_Element() [instance] :24
::g::Fuse::Elements::Element* LayoutFunction::Element()
{
    return _elm;
}

// public void set_Element(Fuse.Elements.Element value) [instance] :25
void LayoutFunction::Element(::g::Fuse::Elements::Element* value)
{
    if (_elm != value)
    {
        if ((_elm != NULL) && IsRooted())
            uPtr(_elm)->remove_Placed(uDelegate::New(::TYPES[0/*Fuse.PlacedHandler*/], this, offsetof(LayoutFunction_type, fp_OnPlaced)));

        _elm = value;

        if ((_elm != NULL) && IsRooted())
            uPtr(_elm)->add_Placed(uDelegate::New(::TYPES[0/*Fuse.PlacedHandler*/], this, offsetof(LayoutFunction_type, fp_OnPlaced)));
    }
}

// protected void Push() [instance] :59
void LayoutFunction::Push()
{
    if (_hasValue && (Target() != NULL))
        uPtr(Target())->SetAsObject(::g::Uno::UX::Value::Cast(uPtr(Target())->PropertyType(), _value), NULL);
}

// protected void SetValue(Uno.UX.Value value) [instance] :52
void LayoutFunction::SetValue(::g::Uno::UX::Value* value)
{
    _hasValue = true;
    _value = value;
    Push();
}

// public Uno.UX.Property get_Target() [instance] :13
::g::Uno::UX::Property* LayoutFunction::Target()
{
    return _target;
}

// public void set_Target(Uno.UX.Property value) [instance] :14
void LayoutFunction::Target(::g::Uno::UX::Property* value)
{
    _target = value;
    Push();
}
// }

// C:\Users\nour\AppData\Local\Fusetools\Packages\Fuse.Elements\0.46.1\ux\$.uno
// ----------------------------------------------------------------------------

// public sealed class WidthFunction :68
// {
static void WidthFunction_build(uType* type)
{
    type->SetFields(5);
}

::g::Fuse::Elements::UX::LayoutFunction_type* WidthFunction_typeof()
{
    static uSStrong< ::g::Fuse::Elements::UX::LayoutFunction_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Elements::UX::LayoutFunction_typeof();
    options.FieldCount = 5;
    options.ObjectSize = sizeof(WidthFunction);
    options.TypeSize = sizeof(::g::Fuse::Elements::UX::LayoutFunction_type);
    type = (::g::Fuse::Elements::UX::LayoutFunction_type*)uClassType::New("Fuse.Elements.UX.WidthFunction", options);
    type->fp_build_ = WidthFunction_build;
    type->fp_ctor_ = (void*)WidthFunction__New1_fn;
    type->fp_OnPlaced = (void(*)(::g::Fuse::Elements::UX::LayoutFunction*, uObject*, ::g::Fuse::PlacedArgs*))WidthFunction__OnPlaced_fn;
    return type;
}

// public generated WidthFunction() :68
void WidthFunction__ctor_2_fn(WidthFunction* __this)
{
    __this->ctor_2();
}

// public generated WidthFunction New() :68
void WidthFunction__New1_fn(WidthFunction** __retval)
{
    *__retval = WidthFunction::New1();
}

// protected override sealed void OnPlaced(object sender, Fuse.PlacedArgs args) :70
void WidthFunction__OnPlaced_fn(WidthFunction* __this, uObject* sender, ::g::Fuse::PlacedArgs* args)
{
    __this->SetValue(::g::Uno::UX::Value::op_Implicit2(uPtr(args)->NewSize().X));
}

// public generated WidthFunction() [instance] :68
void WidthFunction::ctor_2()
{
    ctor_1();
}

// public generated WidthFunction New() [static] :68
WidthFunction* WidthFunction::New1()
{
    WidthFunction* obj1 = (WidthFunction*)uNew(WidthFunction_typeof());
    obj1->ctor_2();
    return obj1;
}
// }

// C:\Users\nour\AppData\Local\Fusetools\Packages\Fuse.Elements\0.46.1\ux\$.uno
// ----------------------------------------------------------------------------

// public sealed class XFunction :86
// {
static void XFunction_build(uType* type)
{
    type->SetFields(5);
}

::g::Fuse::Elements::UX::LayoutFunction_type* XFunction_typeof()
{
    static uSStrong< ::g::Fuse::Elements::UX::LayoutFunction_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Elements::UX::LayoutFunction_typeof();
    options.FieldCount = 5;
    options.ObjectSize = sizeof(XFunction);
    options.TypeSize = sizeof(::g::Fuse::Elements::UX::LayoutFunction_type);
    type = (::g::Fuse::Elements::UX::LayoutFunction_type*)uClassType::New("Fuse.Elements.UX.XFunction", options);
    type->fp_build_ = XFunction_build;
    type->fp_OnPlaced = (void(*)(::g::Fuse::Elements::UX::LayoutFunction*, uObject*, ::g::Fuse::PlacedArgs*))XFunction__OnPlaced_fn;
    return type;
}

// protected override sealed void OnPlaced(object sender, Fuse.PlacedArgs args) :88
void XFunction__OnPlaced_fn(XFunction* __this, uObject* sender, ::g::Fuse::PlacedArgs* args)
{
    __this->SetValue(::g::Uno::UX::Value::op_Implicit2(uPtr(args)->NewPosition().X));
}
// }

// C:\Users\nour\AppData\Local\Fusetools\Packages\Fuse.Elements\0.46.1\ux\$.uno
// ----------------------------------------------------------------------------

// public sealed class YFunction :95
// {
static void YFunction_build(uType* type)
{
    type->SetFields(5);
}

::g::Fuse::Elements::UX::LayoutFunction_type* YFunction_typeof()
{
    static uSStrong< ::g::Fuse::Elements::UX::LayoutFunction_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Elements::UX::LayoutFunction_typeof();
    options.FieldCount = 5;
    options.ObjectSize = sizeof(YFunction);
    options.TypeSize = sizeof(::g::Fuse::Elements::UX::LayoutFunction_type);
    type = (::g::Fuse::Elements::UX::LayoutFunction_type*)uClassType::New("Fuse.Elements.UX.YFunction", options);
    type->fp_build_ = YFunction_build;
    type->fp_OnPlaced = (void(*)(::g::Fuse::Elements::UX::LayoutFunction*, uObject*, ::g::Fuse::PlacedArgs*))YFunction__OnPlaced_fn;
    return type;
}

// protected override sealed void OnPlaced(object sender, Fuse.PlacedArgs args) :97
void YFunction__OnPlaced_fn(YFunction* __this, uObject* sender, ::g::Fuse::PlacedArgs* args)
{
    __this->SetValue(::g::Uno::UX::Value::op_Implicit2(uPtr(args)->NewPosition().Y));
}
// }

}}}} // ::g::Fuse::Elements::UX
