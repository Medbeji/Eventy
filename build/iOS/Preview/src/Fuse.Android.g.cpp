// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.FuseAndroidText-9d82b652.h>
#include <Fuse.Android.Blitter.h>
#include <Fuse.Android.RootGrap-9e25fcdc.h>
#include <Fuse.Android.RootGraphicsView.h>
#include <Fuse.Android.StatusBarConfig.h>
#include <Fuse.Controls.Native.-ca2427b3.h>
#include <Fuse.Visual.h>
#include <Uno.Bool.h>
#include <Uno.Buffer.h>
#include <Uno.Float.h>
#include <Uno.Float4.h>
#include <Uno.Float4x4.h>
#include <Uno.Graphics.BlendOperand.h>
#include <Uno.Graphics.BufferUsage.h>
#include <Uno.Graphics.PolygonFace.h>
#include <Uno.Graphics.SamplerState.h>
#include <Uno.Graphics.Texture2D.h>
#include <Uno.Graphics.VertexAt-4a875e1d.h>
#include <Uno.Graphics.VertexBuffer.h>
#include <Uno.Int.h>
#include <Uno.Object.h>
#include <Uno.Runtime.Implement-6e9df330.h>
#include <Uno.Runtime.Implement-81e7ab4c.h>
#include <Uno.String.h>
#include <Uno.UX.Template.h>
static uString* STRINGS[1];
static uType* TYPES[2];

namespace g{
namespace Fuse{
namespace Android{

// /Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Android.TextRenderer/1.0.2/$.uno
// ---------------------------------------------------------------------------------------------------

// internal sealed class Blitter :353
// {
// static Blitter() :353
static void Blitter__cctor__fn(uType* __type)
{
    Blitter::Singleton_ = Blitter::New1();
}

static void Blitter_build(uType* type)
{
    ::TYPES[0] = ::g::Uno::Float2_typeof()->Array();
    type->SetFields(0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall_typeof(), offsetof(::g::Fuse::Android::Blitter, _draw_67760dd9), 0,
        ::g::Uno::Graphics::VertexBuffer_typeof(), offsetof(::g::Fuse::Android::Blitter, Blit_v_67760dd9_3_4_1), 0,
        ::TYPES[0/*float2[]*/], offsetof(::g::Fuse::Android::Blitter, Blit_verts_67760dd9_3_3_5), 0,
        type, (uintptr_t)&::g::Fuse::Android::Blitter::Singleton_, uFieldFlagsStatic);
}

uType* Blitter_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 4;
    options.ObjectSize = sizeof(Blitter);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Android.Blitter", options);
    type->fp_build_ = Blitter_build;
    type->fp_ctor_ = (void*)Blitter__New1_fn;
    type->fp_cctor_ = Blitter__cctor__fn;
    return type;
}

// public generated Blitter() :353
void Blitter__ctor__fn(Blitter* __this)
{
    __this->ctor_();
}

// public void Blit(texture2D vt, float2 pos, float2 size, float4x4 localToClipTransform) :357
void Blitter__Blit_fn(Blitter* __this, ::g::Uno::Graphics::Texture2D* vt, ::g::Uno::Float2* pos, ::g::Uno::Float2* size, ::g::Uno::Float4x4* localToClipTransform)
{
    __this->Blit(vt, *pos, *size, *localToClipTransform);
}

// private generated void init_DrawCalls() :353
void Blitter__init_DrawCalls_fn(Blitter* __this)
{
    __this->init_DrawCalls();
}

// public generated Blitter New() :353
void Blitter__New1_fn(Blitter** __retval)
{
    *__retval = Blitter::New1();
}

uSStrong<Blitter*> Blitter::Singleton_;

// public generated Blitter() [instance] :353
void Blitter::ctor_()
{
    init_DrawCalls();
}

// public void Blit(texture2D vt, float2 pos, float2 size, float4x4 localToClipTransform) [instance] :357
void Blitter::Blit(::g::Uno::Graphics::Texture2D* vt, ::g::Uno::Float2 pos, ::g::Uno::Float2 size, ::g::Uno::Float4x4 localToClipTransform)
{
    uStackFrame __("Fuse.Android.Blitter", "Blit(texture2D,float2,float2,float4x4)");
    _draw_67760dd9.BlendEnabled(true);
    _draw_67760dd9.DepthTestEnabled(false);
    _draw_67760dd9.CullFace(0);
    _draw_67760dd9.BlendSrcAlpha(7);
    _draw_67760dd9.BlendDstRgb(3);
    _draw_67760dd9.Use();
    _draw_67760dd9.Attrib1(0, 2, Blit_v_67760dd9_3_4_1, 8, 0);
    _draw_67760dd9.Uniform2(1, size);
    _draw_67760dd9.Uniform2(2, pos);
    _draw_67760dd9.Uniform12(3, localToClipTransform);
    _draw_67760dd9.Sampler3(4, vt, ::g::Uno::Graphics::SamplerState__LinearClamp());
    _draw_67760dd9.DrawArrays(uPtr(Blit_verts_67760dd9_3_3_5)->Length());
}

// private generated void init_DrawCalls() [instance] :353
void Blitter::init_DrawCalls()
{
    uStackFrame __("Fuse.Android.Blitter", "init_DrawCalls()");
    uArray* verts_67760dd9_3_3_0 = uArray::Init< ::g::Uno::Float2>(::TYPES[0/*float2[]*/], 6, ::g::Uno::Float2__New2(0.0f, 0.0f), ::g::Uno::Float2__New2(1.0f, 0.0f), ::g::Uno::Float2__New2(1.0f, 1.0f), ::g::Uno::Float2__New2(0.0f, 0.0f), ::g::Uno::Float2__New2(1.0f, 1.0f), ::g::Uno::Float2__New2(0.0f, 1.0f));
    Blit_v_67760dd9_3_4_1 = ::g::Uno::Graphics::VertexBuffer::New2(::g::Uno::Runtime::Implementation::Internal::BufferConverters::ToBuffer3(verts_67760dd9_3_3_0), 0);
    Blit_verts_67760dd9_3_3_5 = verts_67760dd9_3_3_0;
    _draw_67760dd9 = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New1(::g::FuseAndroidTextRenderer_bundle::Blitter83cfc6f0());
}

// public generated Blitter New() [static] :353
Blitter* Blitter::New1()
{
    Blitter* obj1 = (Blitter*)uNew(Blitter_typeof());
    obj1->ctor_();
    return obj1;
}
// }

// /Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Android/1.0.2/.uno/ux11/$.uno
// ------------------------------------------------------------------------------------------------

// public partial sealed class RootGraphicsView :6
// {
// static RootGraphicsView() :27
static void RootGraphicsView__cctor_4_fn(uType* __type)
{
}

static void RootGraphicsView_build(uType* type)
{
    ::TYPES[1] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Uno::UX::Template_typeof(), NULL);
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Controls::GraphicsView_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Controls::GraphicsView_type, interface1),
        ::g::Fuse::IProperties_typeof(), offsetof(::g::Fuse::Controls::GraphicsView_type, interface2),
        ::g::Fuse::INotifyUnrooted_typeof(), offsetof(::g::Fuse::Controls::GraphicsView_type, interface3),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Controls::GraphicsView_type, interface4),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Controls::GraphicsView_type, interface5),
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL), offsetof(::g::Fuse::Controls::GraphicsView_type, interface6),
        ::g::Uno::UX::IPropertyListener_typeof(), offsetof(::g::Fuse::Controls::GraphicsView_type, interface7),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL), offsetof(::g::Fuse::Controls::GraphicsView_type, interface8),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL), offsetof(::g::Fuse::Controls::GraphicsView_type, interface9),
        ::g::Fuse::Triggers::Actions::IShow_typeof(), offsetof(::g::Fuse::Controls::GraphicsView_type, interface10),
        ::g::Fuse::Triggers::Actions::IHide_typeof(), offsetof(::g::Fuse::Controls::GraphicsView_type, interface11),
        ::g::Fuse::Triggers::Actions::ICollapse_typeof(), offsetof(::g::Fuse::Controls::GraphicsView_type, interface12),
        ::g::Fuse::IActualPlacement_typeof(), offsetof(::g::Fuse::Controls::GraphicsView_type, interface13),
        ::g::Fuse::Animations::IResize_typeof(), offsetof(::g::Fuse::Controls::GraphicsView_type, interface14),
        ::g::Fuse::IViewport_typeof(), offsetof(::g::Fuse::Controls::GraphicsView_type, interface15),
        ::g::Fuse::IRenderViewport_typeof(), offsetof(::g::Fuse::Controls::GraphicsView_type, interface16),
        ::g::Fuse::Elements::ITreeRenderer_typeof(), offsetof(::g::Fuse::Controls::GraphicsView_type, interface17),
        ::g::Fuse::Controls::IProxyHost_typeof(), offsetof(::g::Fuse::Controls::GraphicsView_type, interface18),
        ::g::Fuse::ICommonViewport_typeof(), offsetof(::g::Fuse::Controls::GraphicsView_type, interface19));
    type->SetFields(105);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)RootGraphicsView__New4_fn, 0, true, type, 0));
}

::g::Fuse::Controls::GraphicsView_type* RootGraphicsView_typeof()
{
    static uSStrong< ::g::Fuse::Controls::GraphicsView_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Controls::GraphicsView_typeof();
    options.FieldCount = 105;
    options.InterfaceCount = 20;
    options.ObjectSize = sizeof(RootGraphicsView);
    options.TypeSize = sizeof(::g::Fuse::Controls::GraphicsView_type);
    type = (::g::Fuse::Controls::GraphicsView_type*)uClassType::New("Fuse.Android.RootGraphicsView", options);
    type->fp_build_ = RootGraphicsView_build;
    type->fp_ctor_ = (void*)RootGraphicsView__New4_fn;
    type->fp_cctor_ = RootGraphicsView__cctor_4_fn;
    type->interface18.fp_Insert = (void(*)(uObject*, ::g::Fuse::Controls::Native::ViewHandle*))::g::Fuse::Controls::GraphicsView__FuseControlsIProxyHostInsert_fn;
    type->interface18.fp_Remove = (void(*)(uObject*, ::g::Fuse::Controls::Native::ViewHandle*))::g::Fuse::Controls::GraphicsView__FuseControlsIProxyHostRemove_fn;
    type->interface17.fp_RootingStarted = (void(*)(uObject*, ::g::Fuse::Elements::Element*))::g::Fuse::Controls::GraphicsView__FuseElementsITreeRendererRootingStarted_fn;
    type->interface17.fp_Rooted = (void(*)(uObject*, ::g::Fuse::Elements::Element*))::g::Fuse::Controls::GraphicsView__FuseElementsITreeRendererRooted_fn;
    type->interface17.fp_Unrooted = (void(*)(uObject*, ::g::Fuse::Elements::Element*))::g::Fuse::Controls::GraphicsView__FuseElementsITreeRendererUnrooted_fn;
    type->interface17.fp_BackgroundChanged = (void(*)(uObject*, ::g::Fuse::Elements::Element*, ::g::Fuse::Drawing::Brush*))::g::Fuse::Controls::GraphicsView__FuseElementsITreeRendererBackgroundChanged_fn;
    type->interface17.fp_TransformChanged = (void(*)(uObject*, ::g::Fuse::Elements::Element*))::g::Fuse::Controls::GraphicsView__FuseElementsITreeRendererTransformChanged_fn;
    type->interface17.fp_Placed = (void(*)(uObject*, ::g::Fuse::Elements::Element*))::g::Fuse::Controls::GraphicsView__FuseElementsITreeRendererPlaced_fn;
    type->interface17.fp_IsVisibleChanged = (void(*)(uObject*, ::g::Fuse::Elements::Element*, bool*))::g::Fuse::Controls::GraphicsView__FuseElementsITreeRendererIsVisibleChanged_fn;
    type->interface17.fp_IsEnabledChanged = (void(*)(uObject*, ::g::Fuse::Elements::Element*, bool*))::g::Fuse::Controls::GraphicsView__FuseElementsITreeRendererIsEnabledChanged_fn;
    type->interface17.fp_OpacityChanged = (void(*)(uObject*, ::g::Fuse::Elements::Element*, float*))::g::Fuse::Controls::GraphicsView__FuseElementsITreeRendererOpacityChanged_fn;
    type->interface17.fp_ClipToBoundsChanged = (void(*)(uObject*, ::g::Fuse::Elements::Element*, bool*))::g::Fuse::Controls::GraphicsView__FuseElementsITreeRendererClipToBoundsChanged_fn;
    type->interface17.fp_HitTestModeChanged = (void(*)(uObject*, ::g::Fuse::Elements::Element*, bool*))::g::Fuse::Controls::GraphicsView__FuseElementsITreeRendererHitTestModeChanged_fn;
    type->interface17.fp_ZOrderChanged = (void(*)(uObject*, ::g::Fuse::Elements::Element*, ::g::Uno::Collections::List*))::g::Fuse::Controls::GraphicsView__FuseElementsITreeRendererZOrderChanged_fn;
    type->interface17.fp_Measure = (void(*)(uObject*, ::g::Fuse::Elements::Element*, ::g::Fuse::LayoutParams*, ::g::Uno::Float2*, bool*))::g::Fuse::Controls::GraphicsView__FuseElementsITreeRendererMeasure_fn;
    type->interface18.fp_get_WorldTransformInverse = (void(*)(uObject*, ::g::Uno::Float4x4*))::g::Fuse::Controls::GraphicsView__FuseControlsIProxyHostget_WorldTransformInverse_fn;
    type->interface15.fp_PointToWorldRay = (void(*)(uObject*, ::g::Uno::Float2*, ::g::Uno::Geometry::Ray*))::g::Fuse::Controls::GraphicsView__PointToWorldRay_fn;
    type->interface15.fp_WorldToLocalRay = (void(*)(uObject*, uObject*, ::g::Uno::Geometry::Ray*, ::g::Fuse::Visual*, ::g::Uno::Geometry::Ray*))::g::Fuse::Controls::GraphicsView__WorldToLocalRay_fn;
    type->interface16.fp_get_ProjectionTransform = (void(*)(uObject*, ::g::Uno::Float4x4*))::g::Fuse::Controls::GraphicsView__get_ProjectionTransform_fn;
    type->interface16.fp_get_ViewProjectionTransform = (void(*)(uObject*, ::g::Uno::Float4x4*))::g::Fuse::Controls::GraphicsView__get_ViewProjectionTransform_fn;
    type->interface16.fp_get_ViewOrigin = (void(*)(uObject*, ::g::Uno::Float3*))::g::Fuse::Controls::GraphicsView__get_ViewOrigin_fn;
    type->interface16.fp_get_ViewRange = (void(*)(uObject*, ::g::Uno::Float2*))::g::Fuse::Controls::GraphicsView__get_ViewRange_fn;
    type->interface19.fp_get_PixelsPerPoint = (void(*)(uObject*, float*))::g::Fuse::Controls::GraphicsView__get_PixelsPerPoint_fn;
    type->interface19.fp_get_Size = (void(*)(uObject*, ::g::Uno::Float2*))::g::Fuse::Controls::GraphicsView__get_Size_fn;
    type->interface19.fp_get_PixelSize = (void(*)(uObject*, ::g::Uno::Float2*))::g::Fuse::Controls::GraphicsView__get_PixelSize_fn;
    type->interface19.fp_get_ViewTransform = (void(*)(uObject*, ::g::Uno::Float4x4*))::g::Fuse::Controls::GraphicsView__get_ViewTransform_fn;
    type->interface10.fp_Show = (void(*)(uObject*))::g::Fuse::Elements::Element__FuseTriggersActionsIShowShow_fn;
    type->interface12.fp_Collapse = (void(*)(uObject*))::g::Fuse::Elements::Element__FuseTriggersActionsICollapseCollapse_fn;
    type->interface11.fp_Hide = (void(*)(uObject*))::g::Fuse::Elements::Element__FuseTriggersActionsIHideHide_fn;
    type->interface14.fp_SetSize = (void(*)(uObject*, ::g::Uno::Float2*))::g::Fuse::Elements::Element__FuseAnimationsIResizeSetSize_fn;
    type->interface13.fp_get_ActualSize = (void(*)(uObject*, ::g::Uno::Float3*))::g::Fuse::Elements::Element__FuseIActualPlacementget_ActualSize_fn;
    type->interface13.fp_get_ActualPosition = (void(*)(uObject*, ::g::Uno::Float3*))::g::Fuse::Elements::Element__FuseIActualPlacementget_ActualPosition_fn;
    type->interface13.fp_add_Placed = (void(*)(uObject*, uDelegate*))::g::Fuse::Elements::Element__add_Placed_fn;
    type->interface13.fp_remove_Placed = (void(*)(uObject*, uDelegate*))::g::Fuse::Elements::Element__remove_Placed_fn;
    type->interface8.fp_Clear = (void(*)(uObject*))::g::Fuse::Visual__UnoCollectionsICollectionFuseNodeClear_fn;
    type->interface8.fp_Contains = (void(*)(uObject*, void*, bool*))::g::Fuse::Visual__UnoCollectionsICollectionFuseNodeContains_fn;
    type->interface6.fp_RemoveAt = (void(*)(uObject*, int*))::g::Fuse::Visual__UnoCollectionsIListFuseNodeRemoveAt_fn;
    type->interface9.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Visual__UnoCollectionsIEnumerableFuseNodeGetEnumerator_fn;
    type->interface8.fp_get_Count = (void(*)(uObject*, int*))::g::Fuse::Visual__UnoCollectionsICollectionFuseNodeget_Count_fn;
    type->interface6.fp_get_Item = (void(*)(uObject*, int*, uTRef))::g::Fuse::Visual__UnoCollectionsIListFuseNodeget_Item_fn;
    type->interface6.fp_Insert = (void(*)(uObject*, int*, void*))::g::Fuse::Visual__Insert1_fn;
    type->interface7.fp_OnPropertyChanged = (void(*)(uObject*, ::g::Uno::UX::PropertyObject*, ::g::Uno::UX::Selector*))::g::Fuse::Controls::Control__OnPropertyChanged2_fn;
    type->interface8.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Visual__Add1_fn;
    type->interface8.fp_Remove = (void(*)(uObject*, void*, bool*))::g::Fuse::Visual__Remove1_fn;
    type->interface4.fp_Clear = (void(*)(uObject*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingClear_fn;
    type->interface4.fp_Contains = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingContains_fn;
    type->interface0.fp_RemoveAt = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsIListFuseBindingRemoveAt_fn;
    type->interface5.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Node__UnoCollectionsIEnumerableFuseBindingGetEnumerator_fn;
    type->interface1.fp_SetScriptObject = (void(*)(uObject*, uObject*, ::g::Fuse::Scripting::Context*))::g::Fuse::Node__FuseScriptingIScriptObjectSetScriptObject_fn;
    type->interface4.fp_get_Count = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingget_Count_fn;
    type->interface0.fp_get_Item = (void(*)(uObject*, int*, uTRef))::g::Fuse::Node__UnoCollectionsIListFuseBindingget_Item_fn;
    type->interface1.fp_get_ScriptObject = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptObject_fn;
    type->interface1.fp_get_ScriptContext = (void(*)(uObject*, ::g::Fuse::Scripting::Context**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptContext_fn;
    type->interface3.fp_add_Unrooted = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__FuseINotifyUnrootedadd_Unrooted_fn;
    type->interface3.fp_remove_Unrooted = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__FuseINotifyUnrootedremove_Unrooted_fn;
    type->interface0.fp_Insert = (void(*)(uObject*, int*, void*))::g::Fuse::Node__Insert_fn;
    type->interface2.fp_get_Properties = (void(*)(uObject*, ::g::Fuse::Properties**))::g::Fuse::Node__get_Properties_fn;
    type->interface4.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Node__Add_fn;
    type->interface4.fp_Remove = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__Remove_fn;
    return type;
}

// public RootGraphicsView() :31
void RootGraphicsView__ctor_7_fn(RootGraphicsView* __this)
{
    __this->ctor_7();
}

// private void InitializeUX() :35
void RootGraphicsView__InitializeUX1_fn(RootGraphicsView* __this)
{
    __this->InitializeUX1();
}

// public RootGraphicsView New() :31
void RootGraphicsView__New4_fn(RootGraphicsView** __retval)
{
    *__retval = RootGraphicsView::New4();
}

// public RootGraphicsView() [instance] :31
void RootGraphicsView::ctor_7()
{
    uStackFrame __("Fuse.Android.RootGraphicsView", ".ctor()");
    ctor_6();
    InitializeUX1();
}

// private void InitializeUX() [instance] :35
void RootGraphicsView::InitializeUX1()
{
    uStackFrame __("Fuse.Android.RootGraphicsView", "InitializeUX()");
    RootGraphicsView__Template* AndroidAppearance = RootGraphicsView__Template::New2(this, this);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Templates()), ::TYPES[1/*Uno.Collections.ICollection<Uno.UX.Template>*/]), AndroidAppearance);
}

// public RootGraphicsView New() [static] :31
RootGraphicsView* RootGraphicsView::New4()
{
    RootGraphicsView* obj1 = (RootGraphicsView*)uNew(RootGraphicsView_typeof());
    obj1->ctor_7();
    return obj1;
}
// }

// /Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Android/1.0.2/$.uno
// --------------------------------------------------------------------------------------

// public sealed class StatusBarConfig :84
// {
// static StatusBarConfig() :84
static void StatusBarConfig__cctor_1_fn(uType* __type)
{
    StatusBarConfig::_isVisible_ = true;
}

static void StatusBarConfig_build(uType* type)
{
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Node_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Node_type, interface1),
        ::g::Fuse::IProperties_typeof(), offsetof(::g::Fuse::Node_type, interface2),
        ::g::Fuse::INotifyUnrooted_typeof(), offsetof(::g::Fuse::Node_type, interface3),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Node_type, interface4),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Node_type, interface5));
    type->SetFields(13,
        ::g::Uno::Bool_typeof(), (uintptr_t)&::g::Fuse::Android::StatusBarConfig::_isVisible_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(5,
        new uFunction("get_Color", NULL, (void*)StatusBarConfig__get_Color_fn, 0, false, ::g::Uno::Float4_typeof(), 0),
        new uFunction("set_Color", NULL, (void*)StatusBarConfig__set_Color_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float4_typeof()),
        new uFunction("get_IsVisible", NULL, (void*)StatusBarConfig__get_IsVisible_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("set_IsVisible", NULL, (void*)StatusBarConfig__set_IsVisible_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Bool_typeof()),
        new uFunction(".ctor", NULL, (void*)StatusBarConfig__New2_fn, 0, true, type, 0));
}

::g::Fuse::Node_type* StatusBarConfig_typeof()
{
    static uSStrong< ::g::Fuse::Node_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Behavior_typeof();
    options.FieldCount = 14;
    options.InterfaceCount = 6;
    options.ObjectSize = sizeof(StatusBarConfig);
    options.TypeSize = sizeof(::g::Fuse::Node_type);
    type = (::g::Fuse::Node_type*)uClassType::New("Fuse.Android.StatusBarConfig", options);
    type->fp_build_ = StatusBarConfig_build;
    type->fp_ctor_ = (void*)StatusBarConfig__New2_fn;
    type->fp_cctor_ = StatusBarConfig__cctor_1_fn;
    type->interface4.fp_Clear = (void(*)(uObject*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingClear_fn;
    type->interface4.fp_Contains = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingContains_fn;
    type->interface0.fp_RemoveAt = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsIListFuseBindingRemoveAt_fn;
    type->interface5.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Node__UnoCollectionsIEnumerableFuseBindingGetEnumerator_fn;
    type->interface1.fp_SetScriptObject = (void(*)(uObject*, uObject*, ::g::Fuse::Scripting::Context*))::g::Fuse::Node__FuseScriptingIScriptObjectSetScriptObject_fn;
    type->interface4.fp_get_Count = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingget_Count_fn;
    type->interface0.fp_get_Item = (void(*)(uObject*, int*, uTRef))::g::Fuse::Node__UnoCollectionsIListFuseBindingget_Item_fn;
    type->interface1.fp_get_ScriptObject = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptObject_fn;
    type->interface1.fp_get_ScriptContext = (void(*)(uObject*, ::g::Fuse::Scripting::Context**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptContext_fn;
    type->interface3.fp_add_Unrooted = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__FuseINotifyUnrootedadd_Unrooted_fn;
    type->interface3.fp_remove_Unrooted = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__FuseINotifyUnrootedremove_Unrooted_fn;
    type->interface0.fp_Insert = (void(*)(uObject*, int*, void*))::g::Fuse::Node__Insert_fn;
    type->interface2.fp_get_Properties = (void(*)(uObject*, ::g::Fuse::Properties**))::g::Fuse::Node__get_Properties_fn;
    type->interface4.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Node__Add_fn;
    type->interface4.fp_Remove = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__Remove_fn;
    return type;
}

// public generated StatusBarConfig() :84
void StatusBarConfig__ctor_3_fn(StatusBarConfig* __this)
{
    __this->ctor_3();
}

// public float4 get_Color() :99
void StatusBarConfig__get_Color_fn(StatusBarConfig* __this, ::g::Uno::Float4* __retval)
{
    *__retval = __this->Color();
}

// public void set_Color(float4 value) :106
void StatusBarConfig__set_Color_fn(StatusBarConfig* __this, ::g::Uno::Float4* value)
{
    __this->Color(*value);
}

// public bool get_IsVisible() :120
void StatusBarConfig__get_IsVisible_fn(StatusBarConfig* __this, bool* __retval)
{
    *__retval = __this->IsVisible();
}

// public void set_IsVisible(bool value) :121
void StatusBarConfig__set_IsVisible_fn(StatusBarConfig* __this, bool* value)
{
    __this->IsVisible(*value);
}

// public generated StatusBarConfig New() :84
void StatusBarConfig__New2_fn(StatusBarConfig** __retval)
{
    *__retval = StatusBarConfig::New2();
}

bool StatusBarConfig::_isVisible_;

// public generated StatusBarConfig() [instance] :84
void StatusBarConfig::ctor_3()
{
    ctor_2();
}

// public float4 get_Color() [instance] :99
::g::Uno::Float4 StatusBarConfig::Color()
{
    return ::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 1.0f);
}

// public void set_Color(float4 value) [instance] :106
void StatusBarConfig::Color(::g::Uno::Float4 value)
{
}

// public bool get_IsVisible() [instance] :120
bool StatusBarConfig::IsVisible()
{
    return StatusBarConfig::_isVisible();
}

// public void set_IsVisible(bool value) [instance] :121
void StatusBarConfig::IsVisible(bool value)
{
    StatusBarConfig::_isVisible() = value;
}

// public generated StatusBarConfig New() [static] :84
StatusBarConfig* StatusBarConfig::New2()
{
    StatusBarConfig* obj1 = (StatusBarConfig*)uNew(StatusBarConfig_typeof());
    obj1->ctor_3();
    return obj1;
}
// }

// /Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Android/1.0.2/.uno/ux11/$.uno
// ------------------------------------------------------------------------------------------------

// public partial sealed class RootGraphicsView.Template :9
// {
// static Template() :18
static void RootGraphicsView__Template__cctor__fn(uType* __type)
{
}

static void RootGraphicsView__Template_build(uType* type)
{
    ::STRINGS[0] = uString::Const("AndroidAppearance");
    type->SetFields(2,
        ::g::Fuse::Android::RootGraphicsView_typeof(), offsetof(::g::Fuse::Android::RootGraphicsView__Template, __parent1), uFieldFlagsWeak,
        ::g::Fuse::Android::RootGraphicsView_typeof(), offsetof(::g::Fuse::Android::RootGraphicsView__Template, __parentInstance1), uFieldFlagsWeak);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)RootGraphicsView__Template__New2_fn, 0, true, type, 2, ::g::Fuse::Android::RootGraphicsView_typeof(), ::g::Fuse::Android::RootGraphicsView_typeof()));
}

::g::Uno::UX::Template_type* RootGraphicsView__Template_typeof()
{
    static uSStrong< ::g::Uno::UX::Template_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Template_typeof();
    options.FieldCount = 4;
    options.ObjectSize = sizeof(RootGraphicsView__Template);
    options.TypeSize = sizeof(::g::Uno::UX::Template_type);
    type = (::g::Uno::UX::Template_type*)uClassType::New("Fuse.Android.RootGraphicsView.Template", options);
    type->fp_build_ = RootGraphicsView__Template_build;
    type->fp_cctor_ = RootGraphicsView__Template__cctor__fn;
    type->fp_New1 = (void(*)(::g::Uno::UX::Template*, uObject**))RootGraphicsView__Template__New1_fn;
    return type;
}

// public Template(Fuse.Android.RootGraphicsView parent, Fuse.Android.RootGraphicsView parentInstance) :13
void RootGraphicsView__Template__ctor_1_fn(RootGraphicsView__Template* __this, ::g::Fuse::Android::RootGraphicsView* parent, ::g::Fuse::Android::RootGraphicsView* parentInstance)
{
    __this->ctor_1(parent, parentInstance);
}

// public override sealed object New() :21
void RootGraphicsView__Template__New1_fn(RootGraphicsView__Template* __this, uObject** __retval)
{
    ::g::Fuse::Controls::Native::Android::SurfaceView* __self1 = ::g::Fuse::Controls::Native::Android::SurfaceView::New1();
    return *__retval = __self1, void();
}

// public Template New(Fuse.Android.RootGraphicsView parent, Fuse.Android.RootGraphicsView parentInstance) :13
void RootGraphicsView__Template__New2_fn(::g::Fuse::Android::RootGraphicsView* parent, ::g::Fuse::Android::RootGraphicsView* parentInstance, RootGraphicsView__Template** __retval)
{
    *__retval = RootGraphicsView__Template::New2(parent, parentInstance);
}

// public Template(Fuse.Android.RootGraphicsView parent, Fuse.Android.RootGraphicsView parentInstance) [instance] :13
void RootGraphicsView__Template::ctor_1(::g::Fuse::Android::RootGraphicsView* parent, ::g::Fuse::Android::RootGraphicsView* parentInstance)
{
    ctor_(::STRINGS[0/*"AndroidAppe...*/], false);
    __parent1 = parent;
    __parentInstance1 = parentInstance;
}

// public Template New(Fuse.Android.RootGraphicsView parent, Fuse.Android.RootGraphicsView parentInstance) [static] :13
RootGraphicsView__Template* RootGraphicsView__Template::New2(::g::Fuse::Android::RootGraphicsView* parent, ::g::Fuse::Android::RootGraphicsView* parentInstance)
{
    RootGraphicsView__Template* obj1 = (RootGraphicsView__Template*)uNew(RootGraphicsView__Template_typeof());
    obj1->ctor_1(parent, parentInstance);
    return obj1;
}
// }

}}} // ::g::Fuse::Android
