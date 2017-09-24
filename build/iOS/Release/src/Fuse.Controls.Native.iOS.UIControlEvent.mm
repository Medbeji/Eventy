// This file was generated based on '../../AppData/Local/Fusetools/Packages/Fuse.Controls.Native/0.46.1/ios/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Fuse.Controls.Native.iOS.UIControlEvent.h>
#include <iOS/Helpers.h>
#include <ObjC.Object.h>
#include <UIKit/UIKit.h>
#include <Uno.Action-2.h>
#include <Uno.Int.h>
#include <uObjC.Foreign.h>

namespace g{
namespace Fuse{
namespace Controls{
namespace Native{
namespace iOS{

// internal sealed extern class UIControlEvent :3433
// {
static void UIControlEvent_build(uType* type)
{
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(UIControlEvent_type, interface0));
    type->SetFields(0,
        ::g::ObjC::Object_typeof(), offsetof(::g::Fuse::Controls::Native::iOS::UIControlEvent, _handle), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::Controls::Native::iOS::UIControlEvent, _type), 0,
        ::g::ObjC::Object_typeof(), offsetof(::g::Fuse::Controls::Native::iOS::UIControlEvent, _uiControl), 0);
}

UIControlEvent_type* UIControlEvent_typeof()
{
    static uSStrong<UIControlEvent_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(UIControlEvent);
    options.TypeSize = sizeof(UIControlEvent_type);
    type = (UIControlEvent_type*)uClassType::New("Fuse.Controls.Native.iOS.UIControlEvent", options);
    type->fp_build_ = UIControlEvent_build;
    type->interface0.fp_Dispose = (void(*)(uObject*))UIControlEvent__UnoIDisposableDispose_fn;
    return type;
}

// private UIControlEvent(ObjC.Object uiControl, Uno.Action<ObjC.Object, ObjC.Object> handler, int type) :3449
void UIControlEvent__ctor__fn(UIControlEvent* __this, ::g::ObjC::Object* uiControl, uDelegate* handler, int* type)
{
    __this->ctor_(uiControl, handler, *type);
}

// public static Uno.IDisposable AddAllEditingEventsCallback(ObjC.Object uiControl, Uno.Action<ObjC.Object, ObjC.Object> handler) :3440
void UIControlEvent__AddAllEditingEventsCallback_fn(::g::ObjC::Object* uiControl, uDelegate* handler, uObject** __retval)
{
    *__retval = UIControlEvent::AddAllEditingEventsCallback(uiControl, handler);
}

// private static ObjC.Object Create(ObjC.Object uiControl, Uno.Action<ObjC.Object, ObjC.Object> handler, int type) :3457
void UIControlEvent__Create_fn(::g::ObjC::Object* uiControl, uDelegate* handler, int* type, ::g::ObjC::Object** __retval)
{
    *__retval = UIControlEvent::Create(uiControl, handler, *type);
}

// private UIControlEvent New(ObjC.Object uiControl, Uno.Action<ObjC.Object, ObjC.Object> handler, int type) :3449
void UIControlEvent__New1_fn(::g::ObjC::Object* uiControl, uDelegate* handler, int* type, UIControlEvent** __retval)
{
    *__retval = UIControlEvent::New1(uiControl, handler, *type);
}

// private static void RemoveHandler(ObjC.Object uiControl, ObjC.Object eventHandler, int type) :3474
void UIControlEvent__RemoveHandler_fn(::g::ObjC::Object* uiControl, ::g::ObjC::Object* eventHandler, int* type)
{
    UIControlEvent::RemoveHandler(uiControl, eventHandler, *type);
}

// private void Uno.IDisposable.Dispose() :3466
void UIControlEvent__UnoIDisposableDispose_fn(UIControlEvent* __this)
{
    UIControlEvent::RemoveHandler(__this->_uiControl, __this->_handle, __this->_type);
    __this->_handle = NULL;
    __this->_uiControl = NULL;
}

// private UIControlEvent(ObjC.Object uiControl, Uno.Action<ObjC.Object, ObjC.Object> handler, int type) [instance] :3449
void UIControlEvent::ctor_(::g::ObjC::Object* uiControl, uDelegate* handler, int type)
{
    _handle = UIControlEvent::Create(uiControl, handler, type);
    _uiControl = uiControl;
    _type = type;
}

// public static Uno.IDisposable AddAllEditingEventsCallback(ObjC.Object uiControl, Uno.Action<ObjC.Object, ObjC.Object> handler) [static] :3440
uObject* UIControlEvent::AddAllEditingEventsCallback(::g::ObjC::Object* uiControl, uDelegate* handler)
{
    return (uObject*)UIControlEvent::New1(uiControl, handler, (int)UIControlEventAllEditingEvents);
}

// private static ObjC.Object Create(ObjC.Object uiControl, Uno.Action<ObjC.Object, ObjC.Object> handler, int type) [static] :3457
::g::ObjC::Object* UIControlEvent::Create(::g::ObjC::Object* uiControl, uDelegate* handler, int type)
{
    @autoreleasepool
    {
        return ::g::ObjC::Object::Create([] (::id uiControl, ::uObjC::Function<void, ::id, ::id> handler, int type) -> ::id
        {
            UIControlEventHandler* h = [[UIControlEventHandler alloc] init];
            [h setCallback:handler];
            ::UIControl* control = (::UIControl*)uiControl;
            [control addTarget:h action:@selector(action:forEvent:) forControlEvents:(UIControlEvents)type];
            return h;
        } (::g::ObjC::Object::GetHandle(uiControl), [] (id<UnoObject> __delegateRef) -> ::uObjC::Function<void, ::id, ::id>
        {
            return __delegateRef == nil ? (::uObjC::Function<void, ::id, ::id>)nil : (^ void (::id arg1, ::id arg2)
            {
                ::uForeignPool __foreignPool;
                uDelegate* __unoDelegate = (uDelegate*)__delegateRef.unoObject;
                __unoDelegate->Invoke(2, ::g::ObjC::Object::Create(arg1), ::g::ObjC::Object::Create(arg2));
                
            });
        } ([::StrongUnoObject strongUnoObjectWithUnoObject: handler]), type));
        
    }
    
}

// private UIControlEvent New(ObjC.Object uiControl, Uno.Action<ObjC.Object, ObjC.Object> handler, int type) [static] :3449
UIControlEvent* UIControlEvent::New1(::g::ObjC::Object* uiControl, uDelegate* handler, int type)
{
    UIControlEvent* obj1 = (UIControlEvent*)uNew(UIControlEvent_typeof());
    obj1->ctor_(uiControl, handler, type);
    return obj1;
}

// private static void RemoveHandler(ObjC.Object uiControl, ObjC.Object eventHandler, int type) [static] :3474
void UIControlEvent::RemoveHandler(::g::ObjC::Object* uiControl, ::g::ObjC::Object* eventHandler, int type)
{
    @autoreleasepool
    {
        [] (::id uiControl, ::id eventHandler, int type) -> void
        {
            UIControlEventHandler* h = (UIControlEventHandler*)eventHandler;
            ::UIControl* control = (::UIControl*)uiControl;
            [control removeTarget:h action:@selector(action:forEvent:) forControlEvents:(UIControlEvents)type];
        } (::g::ObjC::Object::GetHandle(uiControl), ::g::ObjC::Object::GetHandle(eventHandler), type);
        
    }
    
}
// }

}}}}} // ::g::Fuse::Controls::Native::iOS
