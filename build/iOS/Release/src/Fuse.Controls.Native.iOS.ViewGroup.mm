// This file was generated based on '../../AppData/Local/Fusetools/Packages/Fuse.Controls.Native/0.46.1/ios/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Fuse.Controls.Native.iOS.InputDispatch.h>
#include <Fuse.Controls.Native.iOS.View.h>
#include <Fuse.Controls.Native.iOS.ViewGroup.h>
#include <Fuse.Visual.h>
#include <ObjC.Object.h>
#include <UIKit/UIKit.h>
#include <Uno.Int.h>
#include <uObjC.Foreign.h>
#include <Uno.Float2.h>
static uType* TYPES[1];

namespace g{
namespace Fuse{
namespace Controls{
namespace Native{
namespace iOS{

// public sealed extern class ViewGroup :3760
// {
static void ViewGroup_build(uType* type)
{
    ::TYPES[0] = ::g::Fuse::Controls::Native::iOS::View_typeof();
    type->SetInterfaces(
        ::g::Fuse::Controls::Native::IView_typeof(), offsetof(ViewGroup_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(ViewGroup_type, interface1),
        ::g::Fuse::Controls::Native::IViewGroup_typeof(), offsetof(ViewGroup_type, interface2));
    type->SetFields(5,
        ::g::Fuse::Visual_typeof(), offsetof(::g::Fuse::Controls::Native::iOS::ViewGroup, _visual), 0);
}

ViewGroup_type* ViewGroup_typeof()
{
    static uSStrong<ViewGroup_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Controls::Native::iOS::ViewParent_typeof();
    options.FieldCount = 6;
    options.InterfaceCount = 3;
    options.ObjectSize = sizeof(ViewGroup);
    options.TypeSize = sizeof(ViewGroup_type);
    type = (ViewGroup_type*)uClassType::New("Fuse.Controls.Native.iOS.ViewGroup", options);
    type->fp_build_ = ViewGroup_build;
    type->fp_Dispose = (void(*)(::g::Fuse::Controls::Native::iOS::View*))ViewGroup__Dispose_fn;
    type->fp_NotifyChildNewSize = (void(*)(::g::Fuse::Controls::Native::iOS::ViewParent*, ::g::Fuse::Controls::Native::iOS::View*, ::g::Uno::Float2*))ViewGroup__NotifyChildNewSize_fn;
    type->interface2.fp_Add = (void(*)(uObject*, uObject*))ViewGroup__FuseControlsNativeIViewGroupAdd_fn;
    type->interface2.fp_Add1 = (void(*)(uObject*, uObject*, int*))ViewGroup__FuseControlsNativeIViewGroupAdd1_fn;
    type->interface2.fp_Remove = (void(*)(uObject*, uObject*))ViewGroup__FuseControlsNativeIViewGroupRemove_fn;
    type->interface2.fp_set_ClipToBounds = (void(*)(uObject*, bool*))::g::Fuse::Controls::Native::iOS::View__set_ClipToBounds_fn;
    type->interface2.fp_set_HitTestEnabled = (void(*)(uObject*, bool*))::g::Fuse::Controls::Native::iOS::View__set_HitTestEnabled_fn;
    type->interface0.fp_Show = (void(*)(uObject*))::g::Fuse::Controls::Native::iOS::View__Show_fn;
    type->interface0.fp_Hide = (void(*)(uObject*))::g::Fuse::Controls::Native::iOS::View__Hide_fn;
    type->interface0.fp_set_Transform = (void(*)(uObject*, ::g::Uno::Float4x4*))::g::Fuse::Controls::Native::iOS::View__set_Transform_fn;
    type->interface0.fp_set_Size = (void(*)(uObject*, ::g::Uno::Float2*))::g::Fuse::Controls::Native::iOS::View__set_Size_fn;
    type->interface0.fp_set_Opacity = (void(*)(uObject*, float*))::g::Fuse::Controls::Native::iOS::View__set_Opacity_fn;
    type->interface0.fp_set_Background = (void(*)(uObject*, ::g::Fuse::Drawing::Brush*))::g::Fuse::Controls::Native::iOS::View__set_Background_fn;
    type->interface1.fp_Dispose = (void(*)(uObject*))ViewGroup__Dispose_fn;
    return type;
}

// public ViewGroup(Fuse.Visual visual) :3765
void ViewGroup__ctor_2_fn(ViewGroup* __this, ::g::Fuse::Visual* visual)
{
    __this->ctor_2(visual);
}

// public void Add(Fuse.Controls.Native.iOS.View child) :3790
void ViewGroup__Add_fn(ViewGroup* __this, ::g::Fuse::Controls::Native::iOS::View* child)
{
    __this->Add(child);
}

// public void Add(Fuse.Controls.Native.iOS.View child, int index) :3796
void ViewGroup__Add1_fn(ViewGroup* __this, ::g::Fuse::Controls::Native::iOS::View* child, int* index)
{
    __this->Add1(child, *index);
}

// private static void Add(ObjC.Object parentHandle, ObjC.Object childHandle) :3809
void ViewGroup__Add2_fn(::g::ObjC::Object* parentHandle, ::g::ObjC::Object* childHandle)
{
    ViewGroup::Add2(parentHandle, childHandle);
}

// private static void Add(ObjC.Object parentHandle, ObjC.Object childHandle, int index) :3817
void ViewGroup__Add3_fn(::g::ObjC::Object* parentHandle, ::g::ObjC::Object* childHandle, int* index)
{
    ViewGroup::Add3(parentHandle, childHandle, *index);
}

// private static ObjC.Object Create() :3778
void ViewGroup__Create_fn(::g::ObjC::Object** __retval)
{
    *__retval = ViewGroup::Create();
}

// public override sealed void Dispose() :3771
void ViewGroup__Dispose_fn(ViewGroup* __this)
{
    ::g::Fuse::Controls::Native::iOS::View__Dispose_fn(__this);
    ::g::Fuse::Controls::Native::iOS::InputDispatch::RemoveListener(__this->_visual, __this->Handle());
}

// private void Fuse.Controls.Native.IViewGroup.Add(Fuse.Controls.Native.IView child) :3786
void ViewGroup__FuseControlsNativeIViewGroupAdd_fn(ViewGroup* __this, uObject* child)
{
    __this->Add(uCast< ::g::Fuse::Controls::Native::iOS::View*>(child, ::TYPES[0/*Fuse.Controls.Native.iOS.View*/]));
}

// private void Fuse.Controls.Native.IViewGroup.Add(Fuse.Controls.Native.IView child, int index) :3787
void ViewGroup__FuseControlsNativeIViewGroupAdd1_fn(ViewGroup* __this, uObject* child, int* index)
{
    int index_ = *index;
    __this->Add1(uCast< ::g::Fuse::Controls::Native::iOS::View*>(child, ::TYPES[0/*Fuse.Controls.Native.iOS.View*/]), index_);
}

// private void Fuse.Controls.Native.IViewGroup.Remove(Fuse.Controls.Native.IView child) :3788
void ViewGroup__FuseControlsNativeIViewGroupRemove_fn(ViewGroup* __this, uObject* child)
{
    __this->Remove(uCast< ::g::Fuse::Controls::Native::iOS::View*>(child, ::TYPES[0/*Fuse.Controls.Native.iOS.View*/]));
}

// public ViewGroup New(Fuse.Visual visual) :3765
void ViewGroup__New1_fn(::g::Fuse::Visual* visual, ViewGroup** __retval)
{
    *__retval = ViewGroup::New1(visual);
}

// public override sealed void NotifyChildNewSize(Fuse.Controls.Native.iOS.View child, float2 size) :3831
void ViewGroup__NotifyChildNewSize_fn(ViewGroup* __this, ::g::Fuse::Controls::Native::iOS::View* child, ::g::Uno::Float2* size)
{
}

// public void Remove(Fuse.Controls.Native.iOS.View child) :3802
void ViewGroup__Remove_fn(ViewGroup* __this, ::g::Fuse::Controls::Native::iOS::View* child)
{
    __this->Remove(child);
}

// private static void Remove(ObjC.Object childHandle) :3825
void ViewGroup__Remove1_fn(::g::ObjC::Object* childHandle)
{
    ViewGroup::Remove1(childHandle);
}

// public ViewGroup(Fuse.Visual visual) [instance] :3765
void ViewGroup::ctor_2(::g::Fuse::Visual* visual)
{
    ctor_1(ViewGroup::Create());
    _visual = visual;
    ::g::Fuse::Controls::Native::iOS::InputDispatch::AddListener(visual, Handle());
}

// public void Add(Fuse.Controls.Native.iOS.View child) [instance] :3790
void ViewGroup::Add(::g::Fuse::Controls::Native::iOS::View* child)
{
    uPtr(child)->Parent(this);
    ViewGroup::Add2(Handle(), child->Handle());
}

// public void Add(Fuse.Controls.Native.iOS.View child, int index) [instance] :3796
void ViewGroup::Add1(::g::Fuse::Controls::Native::iOS::View* child, int index)
{
    uPtr(child)->Parent(this);
    ViewGroup::Add3(Handle(), child->Handle(), index);
}

// public void Remove(Fuse.Controls.Native.iOS.View child) [instance] :3802
void ViewGroup::Remove(::g::Fuse::Controls::Native::iOS::View* child)
{
    ViewGroup::Remove1(uPtr(child)->Handle());
    child->Parent(NULL);
}

// private static void Add(ObjC.Object parentHandle, ObjC.Object childHandle) [static] :3809
void ViewGroup::Add2(::g::ObjC::Object* parentHandle, ::g::ObjC::Object* childHandle)
{
    @autoreleasepool
    {
        [] (::id parentHandle, ::id childHandle) -> void
        {
            ::UIView* parent =  (::UIView*)parentHandle;
            ::UIView* child =  (::UIView*)childHandle;
            [parent addSubview:child];
        } (::g::ObjC::Object::GetHandle(parentHandle), ::g::ObjC::Object::GetHandle(childHandle));
        
    }
    
}

// private static void Add(ObjC.Object parentHandle, ObjC.Object childHandle, int index) [static] :3817
void ViewGroup::Add3(::g::ObjC::Object* parentHandle, ::g::ObjC::Object* childHandle, int index)
{
    @autoreleasepool
    {
        [] (::id parentHandle, ::id childHandle, int index) -> void
        {
            ::UIView* parent =  (::UIView*)parentHandle;
            ::UIView* child =  (::UIView*)childHandle;
            [parent insertSubview:child atIndex:index];
        } (::g::ObjC::Object::GetHandle(parentHandle), ::g::ObjC::Object::GetHandle(childHandle), index);
        
    }
    
}

// private static ObjC.Object Create() [static] :3778
::g::ObjC::Object* ViewGroup::Create()
{
    @autoreleasepool
    {
        return ::g::ObjC::Object::Create([] () -> ::id
        {
            ::UIControl* control = [[::UIControl alloc] init];
            [control setOpaque:false];
            [control setMultipleTouchEnabled:true];
            return control;
        } ());
        
    }
    
}

// public ViewGroup New(Fuse.Visual visual) [static] :3765
ViewGroup* ViewGroup::New1(::g::Fuse::Visual* visual)
{
    ViewGroup* obj1 = (ViewGroup*)uNew(ViewGroup_typeof());
    obj1->ctor_2(visual);
    return obj1;
}

// private static void Remove(ObjC.Object childHandle) [static] :3825
void ViewGroup::Remove1(::g::ObjC::Object* childHandle)
{
    @autoreleasepool
    {
        [] (::id childHandle) -> void
        {
            ::UIView* child =  (::UIView*)childHandle;
            [child removeFromSuperview];
        } (::g::ObjC::Object::GetHandle(childHandle));
        
    }
    
}
// }

}}}}} // ::g::Fuse::Controls::Native::iOS
