// This file was generated based on /Users/medbeji/Documents/event-app/event-app/build/Android/Preview/preamble/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <Outracks.Simulator.Ge-6f9cb169.h>
#include <Outracks.Simulator.Re-1ec3b4dc.h>
#include <Outracks.Simulator.Re-383a4076.h>
#include <Outracks.Simulator.Re-504ff637.h>
#include <Outracks.Simulator.Ru-34926e08.h>
#include <Uno.Func-1.h>
#include <Uno.Int.h>
#include <Uno.IO.Bundle.h>
#include <Uno.Net.IPAddress.h>
#include <Uno.Net.IPEndPoint.h>
#include <Uno.String.h>
static uString* STRINGS[4];
static uType* TYPES[3];

namespace g{
namespace Outracks{
namespace Simulator{

// public sealed class GeneratedApplication :217
// {
static void GeneratedApplication_build(uType* type)
{
    ::STRINGS[0] = uString::Const("192.168.43.170");
    ::STRINGS[1] = uString::Const("127.0.0.1");
    ::STRINGS[2] = uString::Const("/Users/medbeji/Documents/event-app/event-app/EventApp.unoproj");
    ::STRINGS[3] = uString::Const("EventApp");
    ::TYPES[0] = ::g::Uno::Net::IPEndPoint_typeof()->Array();
    ::TYPES[1] = ::g::Uno::Func_typeof()->MakeType(::g::Uno::IO::Bundle_typeof(), NULL);
    ::TYPES[2] = ::g::Uno::String_typeof()->Array();
    type->SetInterfaces(
        ::g::Fuse::IProperties_typeof(), offsetof(::g::Outracks::Simulator::Application_type, interface0),
        ::g::Fuse::Input::IPointerEventResponder_typeof(), offsetof(::g::Outracks::Simulator::Application_type, interface1));
    type->SetFields(16);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)GeneratedApplication__New2_fn, 0, true, type, 0));
}

::g::Outracks::Simulator::Application_type* GeneratedApplication_typeof()
{
    static uSStrong< ::g::Outracks::Simulator::Application_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Outracks::Simulator::Application_typeof();
    options.FieldCount = 16;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(GeneratedApplication);
    options.TypeSize = sizeof(::g::Outracks::Simulator::Application_type);
    type = (::g::Outracks::Simulator::Application_type*)uClassType::New("Outracks.Simulator.GeneratedApplication", options);
    type->fp_build_ = GeneratedApplication_build;
    type->fp_ctor_ = (void*)GeneratedApplication__New2_fn;
    type->interface1.fp_OnPointerPressed = (void(*)(uObject*, ::g::Fuse::Input::PointerPressedArgs*))::g::Outracks::Simulator::Application__OnPointerPressed_fn;
    type->interface1.fp_OnPointerMoved = (void(*)(uObject*, ::g::Fuse::Input::PointerMovedArgs*))::g::Outracks::Simulator::Application__OnPointerMoved_fn;
    type->interface1.fp_OnPointerReleased = (void(*)(uObject*, ::g::Fuse::Input::PointerReleasedArgs*))::g::Outracks::Simulator::Application__OnPointerReleased_fn;
    type->interface1.fp_OnPointerWheelMoved = (void(*)(uObject*, ::g::Fuse::Input::PointerWheelMovedArgs*))::g::Outracks::Simulator::Application__OnPointerWheelMoved_fn;
    type->interface0.fp_get_Properties = (void(*)(uObject*, ::g::Fuse::Properties**))::g::Fuse::AppBase__get_Properties_fn;
    return type;
}

// public GeneratedApplication() :220
void GeneratedApplication__ctor_5_fn(GeneratedApplication* __this)
{
    __this->ctor_5();
}

// private static Uno.IO.Bundle GetBundle() :228
void GeneratedApplication__GetBundle_fn(::g::Uno::IO::Bundle** __retval)
{
    *__retval = GeneratedApplication::GetBundle();
}

// public GeneratedApplication New() :220
void GeneratedApplication__New2_fn(GeneratedApplication** __retval)
{
    *__retval = GeneratedApplication::New2();
}

// public GeneratedApplication() [instance] :220
void GeneratedApplication::ctor_5()
{
    uStackFrame __("Outracks.Simulator.GeneratedApplication", ".ctor()");
    ctor_4(uArray::Init< ::g::Uno::Net::IPEndPoint*>(::TYPES[0/*Uno.Net.IPEndPoint[]*/], 2, (::g::Uno::Net::IPEndPoint*)::g::Uno::Net::IPEndPoint::New1(::g::Uno::Net::IPAddress::Parse(::STRINGS[0/*"192.168.43....*/]), 12124), (::g::Uno::Net::IPEndPoint*)::g::Uno::Net::IPEndPoint::New1(::g::Uno::Net::IPAddress::Parse(::STRINGS[1/*"127.0.0.1"*/]), 12124)), ::STRINGS[2/*"/Users/medb...*/], uDelegate::New(::TYPES[1/*Uno.Func<Uno.IO.Bundle>*/], (void*)GeneratedApplication__GetBundle_fn), uArray::Init<uString*>(::TYPES[2/*string[]*/], 0));
    Reflection((uObject*)::g::Outracks::Simulator::Reflection::Native::NativeReflection::New1((uObject*)::g::Outracks::Simulator::Reflection::Native::SimpleTypeMap::New1()));
}

// private static Uno.IO.Bundle GetBundle() [static] :228
::g::Uno::IO::Bundle* GeneratedApplication::GetBundle()
{
    uStackFrame __("Outracks.Simulator.GeneratedApplication", "GetBundle()");
    return ::g::Uno::IO::Bundle::Get(::STRINGS[3/*"EventApp"*/]);
}

// public GeneratedApplication New() [static] :220
GeneratedApplication* GeneratedApplication::New2()
{
    GeneratedApplication* obj1 = (GeneratedApplication*)uNew(GeneratedApplication_typeof());
    obj1->ctor_5();
    return obj1;
}
// }

}}} // ::g::Outracks::Simulator
