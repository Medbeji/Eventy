// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Fuse.Controls.Native.-454aa827.h>
#include <Fuse.Controls.Native.-51b6e8e5.h>
#include <Fuse.Controls.Native.-5999be91.h>
#include <Fuse.Controls.Native.-737f180b.h>
#include <Fuse.Controls.Native.-9abb3393.h>
#include <Fuse.Controls.Native.-ba5282a0.h>
#include <Fuse.Controls.Native.-c67cabe.h>
#include <Fuse.Controls.Native.-ca2427b3.h>
#include <Fuse.Controls.Native.-cb7bb609.h>
#include <Fuse.Controls.Native.-dd7dd49d.h>
#include <Fuse.Controls.Native.-fb992a16.h>
#include <Uno.Bool.h>
#include <Uno.Double.h>

namespace g{
namespace Fuse{
namespace Controls{
namespace Native{
namespace Android{

// /Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Controls.Native/1.0.2/android/$.uno
// ------------------------------------------------------------------------------------------------------

// public sealed extern class Button :8
// {
static void Button_build(uType* type)
{
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)Button__New1_fn, 0, true, type, 0));
}

uType* Button_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ObjectSize = sizeof(Button);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Controls.Native.Android.Button", options);
    type->fp_build_ = Button_build;
    type->fp_ctor_ = (void*)Button__New1_fn;
    return type;
}

// public generated Button() :8
void Button__ctor__fn(Button* __this)
{
    __this->ctor_();
}

// public generated Button New() :8
void Button__New1_fn(Button** __retval)
{
    *__retval = Button::New1();
}

// public generated Button() [instance] :8
void Button::ctor_()
{
}

// public generated Button New() [static] :8
Button* Button::New1()
{
    Button* obj1 = (Button*)uNew(Button_typeof());
    obj1->ctor_();
    return obj1;
}
// }

// /Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Controls.Native/1.0.2/android/$.uno
// ------------------------------------------------------------------------------------------------------

// public abstract extern class GraphicsViewBase :142
// {
static void GraphicsViewBase_build(uType* type)
{
}

uType* GraphicsViewBase_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ObjectSize = sizeof(GraphicsViewBase);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Controls.Native.Android.GraphicsViewBase", options);
    type->fp_build_ = GraphicsViewBase_build;
    return type;
}

// protected generated GraphicsViewBase() :142
void GraphicsViewBase__ctor__fn(GraphicsViewBase* __this)
{
    __this->ctor_();
}

// protected generated GraphicsViewBase() [instance] :142
void GraphicsViewBase::ctor_()
{
}
// }

// /Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Controls.Native/1.0.2/android/$.uno
// ------------------------------------------------------------------------------------------------------

// public sealed extern class ScrollView :1200
// {
static void ScrollView_build(uType* type)
{
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)ScrollView__New1_fn, 0, true, type, 1, ::g::Fuse::Controls::Native::IScrollViewHost_typeof()));
}

uType* ScrollView_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ObjectSize = sizeof(ScrollView);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Controls.Native.Android.ScrollView", options);
    type->fp_build_ = ScrollView_build;
    return type;
}

// public ScrollView(Fuse.Controls.Native.IScrollViewHost host) :1203
void ScrollView__ctor__fn(ScrollView* __this, uObject* host)
{
    __this->ctor_(host);
}

// public ScrollView New(Fuse.Controls.Native.IScrollViewHost host) :1203
void ScrollView__New1_fn(uObject* host, ScrollView** __retval)
{
    *__retval = ScrollView::New1(host);
}

// public ScrollView(Fuse.Controls.Native.IScrollViewHost host) [instance] :1203
void ScrollView::ctor_(uObject* host)
{
}

// public ScrollView New(Fuse.Controls.Native.IScrollViewHost host) [static] :1203
ScrollView* ScrollView::New1(uObject* host)
{
    ScrollView* obj1 = (ScrollView*)uNew(ScrollView_typeof());
    obj1->ctor_(host);
    return obj1;
}
// }

// /Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Controls.Native/1.0.2/android/$.uno
// ------------------------------------------------------------------------------------------------------

// public sealed extern class Slider :1516
// {
static void Slider_build(uType* type)
{
    type->SetInterfaces(
        ::g::Fuse::Controls::Native::IRangeView_typeof(), offsetof(Slider_type, interface0));
    type->Reflection.SetFunctions(2,
        new uFunction(".ctor", NULL, (void*)Slider__New1_fn, 0, true, type, 1, ::g::Fuse::Controls::Native::IRangeViewHost_typeof()),
        new uFunction("set_Progress", NULL, (void*)Slider__set_Progress_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Double_typeof()));
}

Slider_type* Slider_typeof()
{
    static uSStrong<Slider_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(Slider);
    options.TypeSize = sizeof(Slider_type);
    type = (Slider_type*)uClassType::New("Fuse.Controls.Native.Android.Slider", options);
    type->fp_build_ = Slider_build;
    type->interface0.fp_set_Progress = (void(*)(uObject*, double*))Slider__set_Progress_fn;
    return type;
}

// public Slider(Fuse.Controls.Native.IRangeViewHost host) :1521
void Slider__ctor__fn(Slider* __this, uObject* host)
{
    __this->ctor_(host);
}

// public Slider New(Fuse.Controls.Native.IRangeViewHost host) :1521
void Slider__New1_fn(uObject* host, Slider** __retval)
{
    *__retval = Slider::New1(host);
}

// public void set_Progress(double value) :1518
void Slider__set_Progress_fn(Slider* __this, double* value)
{
    __this->Progress(*value);
}

// public Slider(Fuse.Controls.Native.IRangeViewHost host) [instance] :1521
void Slider::ctor_(uObject* host)
{
}

// public void set_Progress(double value) [instance] :1518
void Slider::Progress(double value)
{
}

// public Slider New(Fuse.Controls.Native.IRangeViewHost host) [static] :1521
Slider* Slider::New1(uObject* host)
{
    Slider* obj1 = (Slider*)uNew(Slider_typeof());
    obj1->ctor_(host);
    return obj1;
}
// }

// /Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Controls.Native/1.0.2/android/$.uno
// ------------------------------------------------------------------------------------------------------

// public sealed extern class SurfaceView :1589
// {
static void SurfaceView_build(uType* type)
{
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)SurfaceView__New1_fn, 0, true, type, 0));
}

uType* SurfaceView_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Controls::Native::Android::GraphicsViewBase_typeof();
    options.ObjectSize = sizeof(SurfaceView);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Controls.Native.Android.SurfaceView", options);
    type->fp_build_ = SurfaceView_build;
    type->fp_ctor_ = (void*)SurfaceView__New1_fn;
    return type;
}

// public generated SurfaceView() :1589
void SurfaceView__ctor_1_fn(SurfaceView* __this)
{
    __this->ctor_1();
}

// public generated SurfaceView New() :1589
void SurfaceView__New1_fn(SurfaceView** __retval)
{
    *__retval = SurfaceView::New1();
}

// public generated SurfaceView() [instance] :1589
void SurfaceView::ctor_1()
{
    ctor_();
}

// public generated SurfaceView New() [static] :1589
SurfaceView* SurfaceView::New1()
{
    SurfaceView* obj1 = (SurfaceView*)uNew(SurfaceView_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// /Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Controls.Native/1.0.2/android/$.uno
// ------------------------------------------------------------------------------------------------------

// public sealed extern class Switch :1653
// {
static void Switch_build(uType* type)
{
    type->SetInterfaces(
        ::g::Fuse::Controls::Native::IToggleView_typeof(), offsetof(Switch_type, interface0));
    type->Reflection.SetFunctions(3,
        new uFunction("set_Host", NULL, (void*)Switch__set_Host_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Controls::Native::IToggleViewHost_typeof()),
        new uFunction(".ctor", NULL, (void*)Switch__New1_fn, 0, true, type, 1, ::g::Fuse::Controls::Native::IToggleViewHost_typeof()),
        new uFunction("set_Value", NULL, (void*)Switch__set_Value_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Bool_typeof()));
}

Switch_type* Switch_typeof()
{
    static uSStrong<Switch_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(Switch);
    options.TypeSize = sizeof(Switch_type);
    type = (Switch_type*)uClassType::New("Fuse.Controls.Native.Android.Switch", options);
    type->fp_build_ = Switch_build;
    type->interface0.fp_set_Value = (void(*)(uObject*, bool*))Switch__set_Value_fn;
    return type;
}

// public Switch(Fuse.Controls.Native.IToggleViewHost host) :1659
void Switch__ctor__fn(Switch* __this, uObject* host)
{
    __this->ctor_(host);
}

// public void set_Host(Fuse.Controls.Native.IToggleViewHost value) :1656
void Switch__set_Host_fn(Switch* __this, uObject* value)
{
    __this->Host(value);
}

// public Switch New(Fuse.Controls.Native.IToggleViewHost host) :1659
void Switch__New1_fn(uObject* host, Switch** __retval)
{
    *__retval = Switch::New1(host);
}

// public void set_Value(bool value) :1655
void Switch__set_Value_fn(Switch* __this, bool* value)
{
    __this->Value(*value);
}

// public Switch(Fuse.Controls.Native.IToggleViewHost host) [instance] :1659
void Switch::ctor_(uObject* host)
{
}

// public void set_Host(Fuse.Controls.Native.IToggleViewHost value) [instance] :1656
void Switch::Host(uObject* value)
{
}

// public void set_Value(bool value) [instance] :1655
void Switch::Value(bool value)
{
}

// public Switch New(Fuse.Controls.Native.IToggleViewHost host) [static] :1659
Switch* Switch::New1(uObject* host)
{
    Switch* obj1 = (Switch*)uNew(Switch_typeof());
    obj1->ctor_(host);
    return obj1;
}
// }

// /Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Controls.Native/1.0.2/android/$.uno
// ------------------------------------------------------------------------------------------------------

// public sealed extern class TextureView :2351
// {
static void TextureView_build(uType* type)
{
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)TextureView__New1_fn, 0, true, type, 0));
}

uType* TextureView_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Controls::Native::Android::GraphicsViewBase_typeof();
    options.ObjectSize = sizeof(TextureView);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Controls.Native.Android.TextureView", options);
    type->fp_build_ = TextureView_build;
    type->fp_ctor_ = (void*)TextureView__New1_fn;
    return type;
}

// public generated TextureView() :2351
void TextureView__ctor_1_fn(TextureView* __this)
{
    __this->ctor_1();
}

// public generated TextureView New() :2351
void TextureView__New1_fn(TextureView** __retval)
{
    *__retval = TextureView::New1();
}

// public generated TextureView() [instance] :2351
void TextureView::ctor_1()
{
    ctor_();
}

// public generated TextureView New() [static] :2351
TextureView* TextureView::New1()
{
    TextureView* obj1 = (TextureView*)uNew(TextureView_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// /Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Controls.Native/1.0.2/android/$.uno
// ------------------------------------------------------------------------------------------------------

// public sealed extern class TextView :2407
// {
static void TextView_build(uType* type)
{
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)TextView__New1_fn, 0, true, type, 0));
}

uType* TextView_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ObjectSize = sizeof(TextView);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Controls.Native.Android.TextView", options);
    type->fp_build_ = TextView_build;
    type->fp_ctor_ = (void*)TextView__New1_fn;
    return type;
}

// public generated TextView() :2407
void TextView__ctor__fn(TextView* __this)
{
    __this->ctor_();
}

// public generated TextView New() :2407
void TextView__New1_fn(TextView** __retval)
{
    *__retval = TextView::New1();
}

// public generated TextView() [instance] :2407
void TextView::ctor_()
{
}

// public generated TextView New() [static] :2407
TextView* TextView::New1()
{
    TextView* obj1 = (TextView*)uNew(TextView_typeof());
    obj1->ctor_();
    return obj1;
}
// }

}}}}} // ::g::Fuse::Controls::Native::Android
