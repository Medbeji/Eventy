// This file was generated based on '.uno/ux11/EventApp.unoproj.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.UX.Property-1.h>
#include <Uno.UX.Value.h>
namespace g{namespace Uno{namespace UX{struct BinaryOperator;}}}
namespace g{namespace Uno{namespace UX{struct PropertyObject;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct EventApp_UnoUXBinaryOperator_Right_Property;}

namespace g{

// internal sealed class EventApp_UnoUXBinaryOperator_Right_Property :64
// {
::g::Uno::UX::Property1_type* EventApp_UnoUXBinaryOperator_Right_Property_typeof();
void EventApp_UnoUXBinaryOperator_Right_Property__ctor_2_fn(EventApp_UnoUXBinaryOperator_Right_Property* __this, ::g::Uno::UX::BinaryOperator* obj, ::g::Uno::UX::Selector* name);
void EventApp_UnoUXBinaryOperator_Right_Property__Get_fn(EventApp_UnoUXBinaryOperator_Right_Property* __this, ::g::Uno::UX::Value** __retval);
void EventApp_UnoUXBinaryOperator_Right_Property__New1_fn(::g::Uno::UX::BinaryOperator* obj, ::g::Uno::UX::Selector* name, EventApp_UnoUXBinaryOperator_Right_Property** __retval);
void EventApp_UnoUXBinaryOperator_Right_Property__get_Object_fn(EventApp_UnoUXBinaryOperator_Right_Property* __this, ::g::Uno::UX::PropertyObject** __retval);
void EventApp_UnoUXBinaryOperator_Right_Property__Set_fn(EventApp_UnoUXBinaryOperator_Right_Property* __this, ::g::Uno::UX::Value* v, uObject* origin);
void EventApp_UnoUXBinaryOperator_Right_Property__get_SupportsOriginSetter_fn(EventApp_UnoUXBinaryOperator_Right_Property* __this, bool* __retval);

struct EventApp_UnoUXBinaryOperator_Right_Property : ::g::Uno::UX::Property1
{
    uStrong< ::g::Uno::UX::BinaryOperator*> _obj;

    void ctor_2(::g::Uno::UX::BinaryOperator* obj, ::g::Uno::UX::Selector name);
    static EventApp_UnoUXBinaryOperator_Right_Property* New1(::g::Uno::UX::BinaryOperator* obj, ::g::Uno::UX::Selector name);
};
// }

} // ::g
