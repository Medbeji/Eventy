// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Fuse.Controls.Native.-144a8301.h>
#include <Fuse.Controls.Native.-5999be91.h>
#include <Fuse.Controls.Native.-737f180b.h>
#include <Fuse.Controls.Native.-ada75d53.h>
#include <Fuse.Controls.Native.-b47aa7c0.h>
#include <Fuse.Controls.Native.-ba5282a0.h>
#include <Fuse.Controls.Native.-bda9e869.h>
#include <Fuse.Controls.Native.-c20be635.h>
#include <Fuse.Controls.Native.-e48daf2f.h>
#include <Fuse.Visual.h>
#include <Uno.Bool.h>
#include <Uno.Double.h>

namespace g{
namespace Fuse{
namespace Controls{
namespace Native{
namespace iOS{

// /Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Controls.Native/0.47.7/ios/$.uno
// ---------------------------------------------------------------------------------------------------

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
    type = uClassType::New("Fuse.Controls.Native.iOS.Button", options);
    type->fp_build_ = Button_build;
    type->fp_ctor_ = (void*)Button__New1_fn;
    return type;
}

// public Button() :10
void Button__ctor__fn(Button* __this)
{
    __this->ctor_();
}

// public Button New() :10
void Button__New1_fn(Button** __retval)
{
    *__retval = Button::New1();
}

// public Button() [instance] :10
void Button::ctor_()
{
}

// public Button New() [static] :10
Button* Button::New1()
{
    Button* obj1 = (Button*)uNew(Button_typeof());
    obj1->ctor_();
    return obj1;
}
// }

// /Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Controls.Native/0.47.7/ios/$.uno
// ---------------------------------------------------------------------------------------------------

// public sealed extern class GraphicsView :384
// {
static void GraphicsView_build(uType* type)
{
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)GraphicsView__New1_fn, 0, true, type, 1, ::g::Fuse::Visual_typeof()));
}

uType* GraphicsView_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ObjectSize = sizeof(GraphicsView);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Controls.Native.iOS.GraphicsView", options);
    type->fp_build_ = GraphicsView_build;
    return type;
}

// public GraphicsView(Fuse.Visual host) :387
void GraphicsView__ctor__fn(GraphicsView* __this, ::g::Fuse::Visual* host)
{
    __this->ctor_(host);
}

// public GraphicsView New(Fuse.Visual host) :387
void GraphicsView__New1_fn(::g::Fuse::Visual* host, GraphicsView** __retval)
{
    *__retval = GraphicsView::New1(host);
}

// public GraphicsView(Fuse.Visual host) [instance] :387
void GraphicsView::ctor_(::g::Fuse::Visual* host)
{
}

// public GraphicsView New(Fuse.Visual host) [static] :387
GraphicsView* GraphicsView::New1(::g::Fuse::Visual* host)
{
    GraphicsView* obj1 = (GraphicsView*)uNew(GraphicsView_typeof());
    obj1->ctor_(host);
    return obj1;
}
// }

// /Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Controls.Native/0.47.7/ios/$.uno
// ---------------------------------------------------------------------------------------------------

// public sealed extern class ScrollView :1772
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
    type = uClassType::New("Fuse.Controls.Native.iOS.ScrollView", options);
    type->fp_build_ = ScrollView_build;
    return type;
}

// public ScrollView(Fuse.Controls.Native.IScrollViewHost host) :1775
void ScrollView__ctor__fn(ScrollView* __this, uObject* host)
{
    __this->ctor_(host);
}

// public ScrollView New(Fuse.Controls.Native.IScrollViewHost host) :1775
void ScrollView__New1_fn(uObject* host, ScrollView** __retval)
{
    *__retval = ScrollView::New1(host);
}

// public ScrollView(Fuse.Controls.Native.IScrollViewHost host) [instance] :1775
void ScrollView::ctor_(uObject* host)
{
}

// public ScrollView New(Fuse.Controls.Native.IScrollViewHost host) [static] :1775
ScrollView* ScrollView::New1(uObject* host)
{
    ScrollView* obj1 = (ScrollView*)uNew(ScrollView_typeof());
    obj1->ctor_(host);
    return obj1;
}
// }

// /Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Controls.Native/0.47.7/ios/$.uno
// ---------------------------------------------------------------------------------------------------

// public sealed extern class Slider :2136
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
    type = (Slider_type*)uClassType::New("Fuse.Controls.Native.iOS.Slider", options);
    type->fp_build_ = Slider_build;
    type->interface0.fp_set_Progress = (void(*)(uObject*, double*))Slider__set_Progress_fn;
    return type;
}

// public Slider(Fuse.Controls.Native.IRangeViewHost host) :2141
void Slider__ctor__fn(Slider* __this, uObject* host)
{
    __this->ctor_(host);
}

// public Slider New(Fuse.Controls.Native.IRangeViewHost host) :2141
void Slider__New1_fn(uObject* host, Slider** __retval)
{
    *__retval = Slider::New1(host);
}

// public void set_Progress(double value) :2138
void Slider__set_Progress_fn(Slider* __this, double* value)
{
    __this->Progress(*value);
}

// public Slider(Fuse.Controls.Native.IRangeViewHost host) [instance] :2141
void Slider::ctor_(uObject* host)
{
}

// public void set_Progress(double value) [instance] :2138
void Slider::Progress(double value)
{
}

// public Slider New(Fuse.Controls.Native.IRangeViewHost host) [static] :2141
Slider* Slider::New1(uObject* host)
{
    Slider* obj1 = (Slider*)uNew(Slider_typeof());
    obj1->ctor_(host);
    return obj1;
}
// }

// /Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Controls.Native/0.47.7/ios/$.uno
// ---------------------------------------------------------------------------------------------------

// public sealed extern class Switch :2216
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
    type = (Switch_type*)uClassType::New("Fuse.Controls.Native.iOS.Switch", options);
    type->fp_build_ = Switch_build;
    type->interface0.fp_set_Value = (void(*)(uObject*, bool*))Switch__set_Value_fn;
    return type;
}

// public Switch(Fuse.Controls.Native.IToggleViewHost host) :2222
void Switch__ctor__fn(Switch* __this, uObject* host)
{
    __this->ctor_(host);
}

// public void set_Host(Fuse.Controls.Native.IToggleViewHost value) :2219
void Switch__set_Host_fn(Switch* __this, uObject* value)
{
    __this->Host(value);
}

// public Switch New(Fuse.Controls.Native.IToggleViewHost host) :2222
void Switch__New1_fn(uObject* host, Switch** __retval)
{
    *__retval = Switch::New1(host);
}

// public void set_Value(bool value) :2218
void Switch__set_Value_fn(Switch* __this, bool* value)
{
    __this->Value(*value);
}

// public Switch(Fuse.Controls.Native.IToggleViewHost host) [instance] :2222
void Switch::ctor_(uObject* host)
{
}

// public void set_Host(Fuse.Controls.Native.IToggleViewHost value) [instance] :2219
void Switch::Host(uObject* value)
{
}

// public void set_Value(bool value) [instance] :2218
void Switch::Value(bool value)
{
}

// public Switch New(Fuse.Controls.Native.IToggleViewHost host) [static] :2222
Switch* Switch::New1(uObject* host)
{
    Switch* obj1 = (Switch*)uNew(Switch_typeof());
    obj1->ctor_(host);
    return obj1;
}
// }

// /Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Controls.Native/0.47.7/ios/$.uno
// ---------------------------------------------------------------------------------------------------

// public sealed extern class TextView :3057
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
    type = uClassType::New("Fuse.Controls.Native.iOS.TextView", options);
    type->fp_build_ = TextView_build;
    type->fp_ctor_ = (void*)TextView__New1_fn;
    return type;
}

// public generated TextView() :3057
void TextView__ctor__fn(TextView* __this)
{
    __this->ctor_();
}

// public generated TextView New() :3057
void TextView__New1_fn(TextView** __retval)
{
    *__retval = TextView::New1();
}

// public generated TextView() [instance] :3057
void TextView::ctor_()
{
}

// public generated TextView New() [static] :3057
TextView* TextView::New1()
{
    TextView* obj1 = (TextView*)uNew(TextView_typeof());
    obj1->ctor_();
    return obj1;
}
// }

}}}}} // ::g::Fuse::Controls::Native::iOS
