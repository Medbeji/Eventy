// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.FuseControls_bundle.h>
#include <_root.FuseElements_bundle.h>
#include <Fuse.Animations.IResizeMode.h>
#include <Fuse.CacheFramebuffer.h>
#include <Fuse.Designer.UnoHostInterface.h>
#include <Fuse.Diagnostics.h>
#include <Fuse.DrawContext.h>
#include <Fuse.Drawing.Brush.h>
#include <Fuse.Effects.Effect.h>
#include <Fuse.Effects.EffectType.h>
#include <Fuse.Elements.Alignment.h>
#include <Fuse.Elements.AlignmentHelpers.h>
#include <Fuse.Elements.AspectConstraint.h>
#include <Fuse.Elements.BoxPlacement.h>
#include <Fuse.Elements.BoxSizi-fa66d301.h>
#include <Fuse.Elements.BoxSizing.h>
#include <Fuse.Elements.Cache.h>
#include <Fuse.Elements.CacheHelper.h>
#include <Fuse.Elements.CacheTile.h>
#include <Fuse.Elements.CachingMode.h>
#include <Fuse.Elements.DisplayHelpers.h>
#include <Fuse.Elements.Element.h>
#include <Fuse.Elements.Element-484ece7c.h>
#include <Fuse.Elements.Element-566ff6b4.h>
#include <Fuse.Elements.Element-59dc4556.h>
#include <Fuse.Elements.Element-8f7cb4eb.h>
#include <Fuse.Elements.Element-a1baee23.h>
#include <Fuse.Elements.ElementAtlas.h>
#include <Fuse.Elements.ElementBatch.h>
#include <Fuse.Elements.ElementBatcher.h>
#include <Fuse.Elements.Element-bc8d2ebe.h>
#include <Fuse.Elements.Element-bd497d56.h>
#include <Fuse.Elements.Element-d8ffab5e.h>
#include <Fuse.Elements.Element-e8906a44.h>
#include <Fuse.Elements.Element-ed9a6306.h>
#include <Fuse.Elements.Element-fa4e763a.h>
#include <Fuse.Elements.Element-fe817708.h>
#include <Fuse.Elements.Explici-eeebbf6e.h>
#include <Fuse.Elements.FillAsp-a553d320.h>
#include <Fuse.Elements.HeightFunction.h>
#include <Fuse.Elements.HitTestMode.h>
#include <Fuse.Elements.IElemen-894a094d.h>
#include <Fuse.Elements.Interac-8b35c528.h>
#include <Fuse.Elements.ITransformOrigin.h>
#include <Fuse.Elements.ITreeRenderer.h>
#include <Fuse.Elements.LayoutF-af39d8b.h>
#include <Fuse.Elements.LayoutFunction.h>
#include <Fuse.Elements.LayoutM-516f33ff.h>
#include <Fuse.Elements.LayoutM-76ecc3eb.h>
#include <Fuse.Elements.LayoutMasterAttr.h>
#include <Fuse.Elements.LayoutMasterMode.h>
#include <Fuse.Elements.LimitBoxSizing.h>
#include <Fuse.Elements.NoImpli-72cd78f3.h>
#include <Fuse.Elements.Optiona-b611048b.h>
#include <Fuse.Elements.Perspec-cd6b1b54.h>
#include <Fuse.Elements.Preplac-74864b4.h>
#include <Fuse.Elements.PreplacementArgs.h>
#include <Fuse.Elements.SimpleAlignment.h>
#include <Fuse.Elements.SingleV-c7c3ef9e.h>
#include <Fuse.Elements.Standar-ab3ec62c.h>
#include <Fuse.Elements.StretchDirection.h>
#include <Fuse.Elements.StretchMode.h>
#include <Fuse.Elements.StretchSizing.h>
#include <Fuse.Elements.Transfo-26c51bd7.h>
#include <Fuse.Elements.Transfo-2f50f509.h>
#include <Fuse.Elements.Transfo-734866e8.h>
#include <Fuse.Elements.Transfo-8a441c48.h>
#include <Fuse.Elements.TransformOrigins.h>
#include <Fuse.Elements.Transla-61b329fc.h>
#include <Fuse.Elements.Transla-62df642a.h>
#include <Fuse.Elements.Transla-71e7c74f.h>
#include <Fuse.Elements.Transla-8cfe1f5d.h>
#include <Fuse.Elements.Transla-c8f7e37e.h>
#include <Fuse.Elements.Transla-e4a67fe3.h>
#include <Fuse.Elements.TranslationModes.h>
#include <Fuse.Elements.Viewport.h>
#include <Fuse.Elements.ViewportMode.h>
#include <Fuse.Elements.Visibility.h>
#include <Fuse.Elements.WidthFunction.h>
#include <Fuse.Elements.XFunction.h>
#include <Fuse.Elements.YFunction.h>
#include <Fuse.FastMatrix.h>
#include <Fuse.FastProperty1.h>
#include <Fuse.FixedViewport.h>
#include <Fuse.FramebufferPool.h>
#include <Fuse.FrustumViewport.h>
#include <Fuse.HitTestContext.h>
#include <Fuse.IActualPlacement.h>
#include <Fuse.ICommonViewport.h>
#include <Fuse.IFrustum.h>
#include <Fuse.InheritViewport.h>
#include <Fuse.Internal.RectPacker.h>
#include <Fuse.InvalidateLayoutReason.h>
#include <Fuse.IRenderViewport.h>
#include <Fuse.IScalingMode.h>
#include <Fuse.ITransformRelative.h>
#include <Fuse.ITranslationMode.h>
#include <Fuse.IViewport.h>
#include <Fuse.LayoutDependent.h>
#include <Fuse.LayoutParams.h>
#include <Fuse.LayoutPriority.h>
#include <Fuse.Node.h>
#include <Fuse.OrthographicFrustum.h>
#include <Fuse.PerspectiveFrustum.h>
#include <Fuse.PlacedArgs.h>
#include <Fuse.PlacedHandler.h>
#include <Fuse.Platform.SystemUI.h>
#include <Fuse.Properties.h>
#include <Fuse.PropertyHandle.h>
#include <Fuse.Reactive.Expression.h>
#include <Fuse.Reactive.IContext.h>
#include <Fuse.Reactive.IListener.h>
#include <Fuse.Reactive.UnaryOperator.h>
#include <Fuse.RelativeTransform-1.h>
#include <Fuse.Resources.DisposalManager.h>
#include <Fuse.RootViewport.h>
#include <Fuse.Scaling.h>
#include <Fuse.Translation.h>
#include <Fuse.UpdateManager.h>
#include <Fuse.UpdateStage.h>
#include <Fuse.ViewportHelpers.h>
#include <Fuse.Visual.h>
#include <Fuse.Visual.HitTestTr-39a91efd.h>
#include <Fuse.VisualBounds.h>
#include <Uno.Action.h>
#include <Uno.Action-1.h>
#include <Uno.Action-2.h>
#include <Uno.Bool.h>
#include <Uno.Buffer.h>
#include <Uno.Collections.Linke-712f9f5e.h>
#include <Uno.Collections.LinkedList-1.h>
#include <Uno.Collections.List-1.h>
#include <Uno.Collections.List--251bdc7d.h>
#include <Uno.Delegate.h>
#include <Uno.Diagnostics.Debug.h>
#include <Uno.Diagnostics.Debug-5d778620.h>
#include <Uno.Double.h>
#include <Uno.EventArgs.h>
#include <Uno.EventHandler.h>
#include <Uno.Exception.h>
#include <Uno.Float.h>
#include <Uno.Float2.h>
#include <Uno.Float3.h>
#include <Uno.Float4.h>
#include <Uno.Float4x4.h>
#include <Uno.Func-3.h>
#include <Uno.Geometry.Ray.h>
#include <Uno.Graphics.BlendOperand.h>
#include <Uno.Graphics.BufferUsage.h>
#include <Uno.Graphics.DeviceBuffer.h>
#include <Uno.Graphics.Format.h>
#include <Uno.Graphics.Framebuffer.h>
#include <Uno.Graphics.FramebufferFlags.h>
#include <Uno.Graphics.IndexBuffer.h>
#include <Uno.Graphics.IndexType.h>
#include <Uno.Graphics.PolygonFace.h>
#include <Uno.Graphics.RenderTarget.h>
#include <Uno.Graphics.SamplerState.h>
#include <Uno.Graphics.Texture2D.h>
#include <Uno.Graphics.VertexAt-4a875e1d.h>
#include <Uno.Graphics.VertexBuffer.h>
#include <Uno.IDisposable.h>
#include <Uno.Int.h>
#include <Uno.Int2.h>
#include <Uno.Math.h>
#include <Uno.Matrix.h>
#include <Uno.Object.h>
#include <Uno.Rect.h>
#include <Uno.Recti.h>
#include <Uno.Runtime.Implement-6e9df330.h>
#include <Uno.Runtime.Implement-81e7ab4c.h>
#include <Uno.String.h>
#include <Uno.UShort.h>
#include <Uno.UX.IPropertyListener.h>
#include <Uno.UX.PropertyObject.h>
#include <Uno.UX.Selector.h>
#include <Uno.UX.Size.h>
#include <Uno.UX.Size2.h>
#include <Uno.UX.Unit.h>
#include <Uno.Vector.h>
static uString* STRINGS[28];
static uType* TYPES[64];

namespace g{
namespace Fuse{
namespace Elements{

// /Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Elements/1.0.2/$.uno
// ---------------------------------------------------------------------------------------

// public enum Alignment :2891
uEnumType* Alignment_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Elements.Alignment", ::g::Uno::Int_typeof(), 16);
    type->SetLiterals(
        "Default", 0LL,
        "Left", 1LL,
        "HorizontalCenter", 2LL,
        "Right", 3LL,
        "Top", 4LL,
        "VerticalCenter", 8LL,
        "Bottom", 12LL,
        "TopLeft", 5LL,
        "TopCenter", 6LL,
        "TopRight", 7LL,
        "CenterLeft", 9LL,
        "Center", 10LL,
        "CenterRight", 11LL,
        "BottomLeft", 13LL,
        "BottomCenter", 14LL,
        "BottomRight", 15LL);
    return type;
}

// /Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Elements/1.0.2/$.uno
// ---------------------------------------------------------------------------------------

// public static class AlignmentHelpers :2942
// {
static void AlignmentHelpers_build(uType* type)
{
    type->Reflection.SetFunctions(3,
        new uFunction("GetAnchor", NULL, (void*)AlignmentHelpers__GetAnchor_fn, 0, true, ::g::Uno::Float2_typeof(), 1, ::g::Fuse::Elements::Alignment_typeof()),
        new uFunction("GetHorizontalAlign", NULL, (void*)AlignmentHelpers__GetHorizontalAlign_fn, 0, true, ::g::Fuse::Elements::Alignment_typeof(), 1, ::g::Fuse::Elements::Alignment_typeof()),
        new uFunction("GetVerticalAlign", NULL, (void*)AlignmentHelpers__GetVerticalAlign_fn, 0, true, ::g::Fuse::Elements::Alignment_typeof(), 1, ::g::Fuse::Elements::Alignment_typeof()));
}

uClassType* AlignmentHelpers_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Elements.AlignmentHelpers", options);
    type->fp_build_ = AlignmentHelpers_build;
    return type;
}

// public static float2 GetAnchor(Fuse.Elements.Alignment a) :2953
void AlignmentHelpers__GetAnchor_fn(int* a, ::g::Uno::Float2* __retval)
{
    *__retval = AlignmentHelpers::GetAnchor(*a);
}

// public static Fuse.Elements.Alignment GetHorizontalAlign(Fuse.Elements.Alignment a) :2948
void AlignmentHelpers__GetHorizontalAlign_fn(int* a, int* __retval)
{
    *__retval = AlignmentHelpers::GetHorizontalAlign(*a);
}

// internal static Fuse.Elements.SimpleAlignment GetHorizontalSimpleAlign(Fuse.Elements.Alignment a) :2976
void AlignmentHelpers__GetHorizontalSimpleAlign_fn(int* a, int* __retval)
{
    *__retval = AlignmentHelpers::GetHorizontalSimpleAlign(*a);
}

// internal static Fuse.Elements.OptionalSimpleAlignment GetHorizontalSimpleAlignOptional(Fuse.Elements.Alignment a) :2998
void AlignmentHelpers__GetHorizontalSimpleAlignOptional_fn(int* a, int* __retval)
{
    *__retval = AlignmentHelpers::GetHorizontalSimpleAlignOptional(*a);
}

// public static Fuse.Elements.Alignment GetVerticalAlign(Fuse.Elements.Alignment a) :2944
void AlignmentHelpers__GetVerticalAlign_fn(int* a, int* __retval)
{
    *__retval = AlignmentHelpers::GetVerticalAlign(*a);
}

// internal static Fuse.Elements.SimpleAlignment GetVerticalSimpleAlign(Fuse.Elements.Alignment a) :2966
void AlignmentHelpers__GetVerticalSimpleAlign_fn(int* a, int* __retval)
{
    *__retval = AlignmentHelpers::GetVerticalSimpleAlign(*a);
}

// internal static Fuse.Elements.OptionalSimpleAlignment GetVerticalSimpleAlignOptional(Fuse.Elements.Alignment a) :2986
void AlignmentHelpers__GetVerticalSimpleAlignOptional_fn(int* a, int* __retval)
{
    *__retval = AlignmentHelpers::GetVerticalSimpleAlignOptional(*a);
}

// public static float2 GetAnchor(Fuse.Elements.Alignment a) [static] :2953
::g::Uno::Float2 AlignmentHelpers::GetAnchor(int a)
{
    int h = AlignmentHelpers::GetHorizontalAlign(a);
    float x = (h == 1) ? 0.0f : (h == 3) ? 1.0f : 0.5f;
    int v = AlignmentHelpers::GetVerticalAlign(a);
    float y = (v == 4) ? 0.0f : (v == 12) ? 1.0f : 0.5f;
    return ::g::Uno::Float2__New2(x, y);
}

// public static Fuse.Elements.Alignment GetHorizontalAlign(Fuse.Elements.Alignment a) [static] :2948
int AlignmentHelpers::GetHorizontalAlign(int a)
{
    return a & 3;
}

// internal static Fuse.Elements.SimpleAlignment GetHorizontalSimpleAlign(Fuse.Elements.Alignment a) [static] :2976
int AlignmentHelpers::GetHorizontalSimpleAlign(int a)
{
    int raw = AlignmentHelpers::GetHorizontalAlign(a);

    if (raw == 3)
        return 2;

    if (raw == 2)
        return 1;

    return 0;
}

// internal static Fuse.Elements.OptionalSimpleAlignment GetHorizontalSimpleAlignOptional(Fuse.Elements.Alignment a) [static] :2998
int AlignmentHelpers::GetHorizontalSimpleAlignOptional(int a)
{
    int raw = AlignmentHelpers::GetHorizontalAlign(a);

    if (raw == 1)
        return 1;

    if (raw == 2)
        return 2;

    if (raw == 3)
        return 3;

    return 0;
}

// public static Fuse.Elements.Alignment GetVerticalAlign(Fuse.Elements.Alignment a) [static] :2944
int AlignmentHelpers::GetVerticalAlign(int a)
{
    return a & 12;
}

// internal static Fuse.Elements.SimpleAlignment GetVerticalSimpleAlign(Fuse.Elements.Alignment a) [static] :2966
int AlignmentHelpers::GetVerticalSimpleAlign(int a)
{
    int raw = AlignmentHelpers::GetVerticalAlign(a);

    if (raw == 12)
        return 2;

    if (raw == 8)
        return 1;

    return 0;
}

// internal static Fuse.Elements.OptionalSimpleAlignment GetVerticalSimpleAlignOptional(Fuse.Elements.Alignment a) [static] :2986
int AlignmentHelpers::GetVerticalSimpleAlignOptional(int a)
{
    int raw = AlignmentHelpers::GetVerticalAlign(a);

    if (raw == 4)
        return 1;

    if (raw == 8)
        return 2;

    if (raw == 12)
        return 3;

    return 0;
}
// }

// /Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Elements/1.0.2/$.uno
// ---------------------------------------------------------------------------------------

// private sealed class TransformOrigins.AnchorOrigin :2455
// {
static void TransformOrigins__AnchorOrigin_build(uType* type)
{
    type->SetInterfaces(
        ::g::Fuse::Elements::ITransformOrigin_typeof(), offsetof(TransformOrigins__AnchorOrigin_type, interface0));
}

TransformOrigins__AnchorOrigin_type* TransformOrigins__AnchorOrigin_typeof()
{
    static uSStrong<TransformOrigins__AnchorOrigin_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(TransformOrigins__AnchorOrigin);
    options.TypeSize = sizeof(TransformOrigins__AnchorOrigin_type);
    type = (TransformOrigins__AnchorOrigin_type*)uClassType::New("Fuse.Elements.TransformOrigins.AnchorOrigin", options);
    type->fp_build_ = TransformOrigins__AnchorOrigin_build;
    type->fp_ctor_ = (void*)TransformOrigins__AnchorOrigin__New1_fn;
    type->interface0.fp_GetOffset = (void(*)(uObject*, ::g::Fuse::Elements::Element*, ::g::Uno::Float3*))TransformOrigins__AnchorOrigin__GetOffset_fn;
    return type;
}

// public generated AnchorOrigin() :2455
void TransformOrigins__AnchorOrigin__ctor__fn(TransformOrigins__AnchorOrigin* __this)
{
    __this->ctor_();
}

// public float3 GetOffset(Fuse.Elements.Element elm) :2457
void TransformOrigins__AnchorOrigin__GetOffset_fn(TransformOrigins__AnchorOrigin* __this, ::g::Fuse::Elements::Element* elm, ::g::Uno::Float3* __retval)
{
    *__retval = __this->GetOffset(elm);
}

// public generated AnchorOrigin New() :2455
void TransformOrigins__AnchorOrigin__New1_fn(TransformOrigins__AnchorOrigin** __retval)
{
    *__retval = TransformOrigins__AnchorOrigin::New1();
}

// public generated AnchorOrigin() [instance] :2455
void TransformOrigins__AnchorOrigin::ctor_()
{
}

// public float3 GetOffset(Fuse.Elements.Element elm) [instance] :2457
::g::Uno::Float3 TransformOrigins__AnchorOrigin::GetOffset(::g::Fuse::Elements::Element* elm)
{
    uStackFrame __("Fuse.Elements.TransformOrigins.AnchorOrigin", "GetOffset(Fuse.Elements.Element)");
    return ::g::Uno::Float3__New4(uPtr(elm)->ActualAnchor(), 0.0f);
}

// public generated AnchorOrigin New() [static] :2455
TransformOrigins__AnchorOrigin* TransformOrigins__AnchorOrigin::New1()
{
    TransformOrigins__AnchorOrigin* obj1 = (TransformOrigins__AnchorOrigin*)uNew(TransformOrigins__AnchorOrigin_typeof());
    obj1->ctor_();
    return obj1;
}
// }

// /Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Elements/1.0.2/$.uno
// ---------------------------------------------------------------------------------------

// public enum AspectConstraint :9
uEnumType* AspectConstraint_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Elements.AspectConstraint", ::g::Uno::Int_typeof(), 4);
    type->SetLiterals(
        "None", 0LL,
        "Preserve", 1LL,
        "Trim", 2LL,
        "PreserveTrim", 3LL);
    return type;
}

// /Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Elements/1.0.2/$.uno
// ---------------------------------------------------------------------------------------

// private sealed extern class Element.BoundsChanged :2748
// {
static void Element__BoundsChanged_build(uType* type)
{
    ::TYPES[0] = ::g::Fuse::PlacedHandler_typeof();
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(Element__BoundsChanged_type, interface0));
    type->SetFields(0,
        ::g::Fuse::Elements::Element_typeof(), offsetof(::g::Fuse::Elements::Element__BoundsChanged, _element), 0,
        ::g::Uno::Action1_typeof()->MakeType(::g::Uno::Rect_typeof(), NULL), offsetof(::g::Fuse::Elements::Element__BoundsChanged, _handler), 0);
}

Element__BoundsChanged_type* Element__BoundsChanged_typeof()
{
    static uSStrong<Element__BoundsChanged_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(Element__BoundsChanged);
    options.TypeSize = sizeof(Element__BoundsChanged_type);
    type = (Element__BoundsChanged_type*)uClassType::New("Fuse.Elements.Element.BoundsChanged", options);
    type->fp_build_ = Element__BoundsChanged_build;
    type->interface0.fp_Dispose = (void(*)(uObject*))Element__BoundsChanged__UnoIDisposableDispose_fn;
    return type;
}

// public BoundsChanged(Fuse.Elements.Element element, Uno.Action<Uno.Rect> handler) :2753
void Element__BoundsChanged__ctor__fn(Element__BoundsChanged* __this, ::g::Fuse::Elements::Element* element, uDelegate* handler)
{
    __this->ctor_(element, handler);
}

// public BoundsChanged New(Fuse.Elements.Element element, Uno.Action<Uno.Rect> handler) :2753
void Element__BoundsChanged__New1_fn(::g::Fuse::Elements::Element* element, uDelegate* handler, Element__BoundsChanged** __retval)
{
    *__retval = Element__BoundsChanged::New1(element, handler);
}

// private void OnPlaced(object sender, Fuse.PlacedArgs args) :2761
void Element__BoundsChanged__OnPlaced_fn(Element__BoundsChanged* __this, uObject* sender, ::g::Fuse::PlacedArgs* args)
{
    __this->OnPlaced(sender, args);
}

// private void Uno.IDisposable.Dispose() :2766
void Element__BoundsChanged__UnoIDisposableDispose_fn(Element__BoundsChanged* __this)
{
    uStackFrame __("Fuse.Elements.Element.BoundsChanged", "Uno.IDisposable.Dispose()");
    uPtr(__this->_element)->remove_Placed(uDelegate::New(::TYPES[0/*Fuse.PlacedHandler*/], (void*)Element__BoundsChanged__OnPlaced_fn, __this));
    __this->_element = NULL;
    __this->_handler = NULL;
}

// public BoundsChanged(Fuse.Elements.Element element, Uno.Action<Uno.Rect> handler) [instance] :2753
void Element__BoundsChanged::ctor_(::g::Fuse::Elements::Element* element, uDelegate* handler)
{
    uStackFrame __("Fuse.Elements.Element.BoundsChanged", ".ctor(Fuse.Elements.Element,Uno.Action<Uno.Rect>)");
    _element = element;
    _handler = handler;
    uPtr(_handler)->InvokeVoid(uCRef(::g::Uno::Rect__New2(uPtr(_element)->ActualPosition(), uPtr(_element)->ActualSize())));
    uPtr(_element)->add_Placed(uDelegate::New(::TYPES[0/*Fuse.PlacedHandler*/], (void*)Element__BoundsChanged__OnPlaced_fn, this));
}

// private void OnPlaced(object sender, Fuse.PlacedArgs args) [instance] :2761
void Element__BoundsChanged::OnPlaced(uObject* sender, ::g::Fuse::PlacedArgs* args)
{
    uStackFrame __("Fuse.Elements.Element.BoundsChanged", "OnPlaced(object,Fuse.PlacedArgs)");
    uPtr(_handler)->InvokeVoid(uCRef(::g::Uno::Rect__New2(uPtr(args)->NewPosition(), uPtr(args)->NewSize())));
}

// public BoundsChanged New(Fuse.Elements.Element element, Uno.Action<Uno.Rect> handler) [static] :2753
Element__BoundsChanged* Element__BoundsChanged::New1(::g::Fuse::Elements::Element* element, uDelegate* handler)
{
    Element__BoundsChanged* obj1 = (Element__BoundsChanged*)uNew(Element__BoundsChanged_typeof());
    obj1->ctor_(element, handler);
    return obj1;
}
// }

// /Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Elements/1.0.2/$.uno
// ---------------------------------------------------------------------------------------

// private sealed class TransformOrigins.BoxCenter :2460
// {
static void TransformOrigins__BoxCenter_build(uType* type)
{
    type->SetInterfaces(
        ::g::Fuse::Elements::ITransformOrigin_typeof(), offsetof(TransformOrigins__BoxCenter_type, interface0));
    type->SetFields(0,
        ::g::Uno::Float2_typeof(), offsetof(::g::Fuse::Elements::TransformOrigins__BoxCenter, Depth), 0);
}

TransformOrigins__BoxCenter_type* TransformOrigins__BoxCenter_typeof()
{
    static uSStrong<TransformOrigins__BoxCenter_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(TransformOrigins__BoxCenter);
    options.TypeSize = sizeof(TransformOrigins__BoxCenter_type);
    type = (TransformOrigins__BoxCenter_type*)uClassType::New("Fuse.Elements.TransformOrigins.BoxCenter", options);
    type->fp_build_ = TransformOrigins__BoxCenter_build;
    type->fp_ctor_ = (void*)TransformOrigins__BoxCenter__New1_fn;
    type->interface0.fp_GetOffset = (void(*)(uObject*, ::g::Fuse::Elements::Element*, ::g::Uno::Float3*))TransformOrigins__BoxCenter__GetOffset_fn;
    return type;
}

// public generated BoxCenter() :2460
void TransformOrigins__BoxCenter__ctor__fn(TransformOrigins__BoxCenter* __this)
{
    __this->ctor_();
}

// public float3 GetOffset(Fuse.Elements.Element elm) :2464
void TransformOrigins__BoxCenter__GetOffset_fn(TransformOrigins__BoxCenter* __this, ::g::Fuse::Elements::Element* elm, ::g::Uno::Float3* __retval)
{
    *__retval = __this->GetOffset(elm);
}

// public generated BoxCenter New() :2460
void TransformOrigins__BoxCenter__New1_fn(TransformOrigins__BoxCenter** __retval)
{
    *__retval = TransformOrigins__BoxCenter::New1();
}

// public generated BoxCenter() [instance] :2460
void TransformOrigins__BoxCenter::ctor_()
{
}

// public float3 GetOffset(Fuse.Elements.Element elm) [instance] :2464
::g::Uno::Float3 TransformOrigins__BoxCenter::GetOffset(::g::Fuse::Elements::Element* elm)
{
    uStackFrame __("Fuse.Elements.TransformOrigins.BoxCenter", "GetOffset(Fuse.Elements.Element)");
    float depth = ::g::Uno::Vector::Dot(Depth, uPtr(elm)->ActualSize());
    ::g::Uno::Float3 q = ::g::Uno::Float3__New4(::g::Uno::Float2__op_Division1(elm->ActualSize(), 2.0f), depth / 2.0f);
    return q;
}

// public generated BoxCenter New() [static] :2460
TransformOrigins__BoxCenter* TransformOrigins__BoxCenter::New1()
{
    TransformOrigins__BoxCenter* obj1 = (TransformOrigins__BoxCenter*)uNew(TransformOrigins__BoxCenter_typeof());
    obj1->ctor_();
    return obj1;
}
// }

// /Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Elements/1.0.2/$.uno
// ---------------------------------------------------------------------------------------

// public struct BoxPlacement :159
// {
static void BoxPlacement_build(uType* type)
{
    type->SetFields(0,
        ::g::Uno::Float2_typeof(), offsetof(::g::Fuse::Elements::BoxPlacement, MarginBox), 0,
        ::g::Uno::Float2_typeof(), offsetof(::g::Fuse::Elements::BoxPlacement, Position), 0,
        ::g::Uno::Float2_typeof(), offsetof(::g::Fuse::Elements::BoxPlacement, Size), 0);
    type->Reflection.SetFields(3,
        new uField("MarginBox", 0),
        new uField("Position", 1),
        new uField("Size", 2));
}

uStructType* BoxPlacement_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.ValueSize = sizeof(BoxPlacement);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Fuse.Elements.BoxPlacement", options);
    type->fp_build_ = BoxPlacement_build;
    return type;
}
// }

// /Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Elements/1.0.2/$.uno
// ---------------------------------------------------------------------------------------

// internal abstract class BoxSizing :169
// {
static void BoxSizing_build(uType* type)
{
}

BoxSizing_type* BoxSizing_typeof()
{
    static uSStrong<BoxSizing_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ObjectSize = sizeof(BoxSizing);
    options.TypeSize = sizeof(BoxSizing_type);
    type = (BoxSizing_type*)uClassType::New("Fuse.Elements.BoxSizing", options);
    type->fp_build_ = BoxSizing_build;
    type->fp_IsContentRelativeSize = BoxSizing__IsContentRelativeSize_fn;
    type->fp_RequestLayout = BoxSizing__RequestLayout_fn;
    return type;
}

// protected generated BoxSizing() :169
void BoxSizing__ctor__fn(BoxSizing* __this)
{
    __this->ctor_();
}

// protected void EffectiveAnchor(Fuse.Elements.Element element, Fuse.Elements.SimpleAlignment halign, Fuse.Elements.SimpleAlignment valign, Uno.UX.Size2& anchor) :256
void BoxSizing__EffectiveAnchor_fn(BoxSizing* __this, ::g::Fuse::Elements::Element* element, int* halign, int* valign, ::g::Uno::UX::Size2* anchor)
{
    __this->EffectiveAnchor(element, *halign, *valign, anchor);
}

// protected Fuse.Elements.SimpleAlignment EffectiveHorizontalAlignment(Fuse.Elements.Element element) :213
void BoxSizing__EffectiveHorizontalAlignment_fn(BoxSizing* __this, ::g::Fuse::Elements::Element* element, int* __retval)
{
    *__retval = __this->EffectiveHorizontalAlignment(element);
}

// protected Fuse.Elements.SimpleAlignment EffectiveVerticalAlignment(Fuse.Elements.Element element) :230
void BoxSizing__EffectiveVerticalAlignment_fn(BoxSizing* __this, ::g::Fuse::Elements::Element* element, int* __retval)
{
    *__retval = __this->EffectiveVerticalAlignment(element);
}

// protected Fuse.LayoutParams GetConstraints(Fuse.Elements.Element element, Fuse.LayoutParams lp, [Fuse.Elements.BoxSizing.ConstraintFlags flags]) :274
void BoxSizing__GetConstraints_fn(BoxSizing* __this, ::g::Fuse::Elements::Element* element, ::g::Fuse::LayoutParams* lp, int* flags, ::g::Fuse::LayoutParams* __retval)
{
    *__retval = __this->GetConstraints(element, *lp, *flags);
}

// public virtual Fuse.LayoutDependent IsContentRelativeSize(Fuse.Elements.Element element) :187
void BoxSizing__IsContentRelativeSize_fn(BoxSizing* __this, ::g::Fuse::Elements::Element* element, int* __retval)
{
    return *__retval = 4, void();
}

// public virtual void RequestLayout(Fuse.Elements.Element element) :185
void BoxSizing__RequestLayout_fn(BoxSizing* __this, ::g::Fuse::Elements::Element* element)
{
}

// protected float SimpleToAnchor(Fuse.Elements.SimpleAlignment align) :247
void BoxSizing__SimpleToAnchor_fn(BoxSizing* __this, int* align, float* __retval)
{
    *__retval = __this->SimpleToAnchor(*align);
}

// protected float UnitSize(Fuse.Elements.Element element, Uno.UX.Size value, float relative, bool hasRelative, bool& known) :193
void BoxSizing__UnitSize_fn(BoxSizing* __this, ::g::Fuse::Elements::Element* element, ::g::Uno::UX::Size* value, float* relative, bool* hasRelative, bool* known, float* __retval)
{
    *__retval = __this->UnitSize(element, *value, *relative, *hasRelative, known);
}

// protected generated BoxSizing() [instance] :169
void BoxSizing::ctor_()
{
}

// protected void EffectiveAnchor(Fuse.Elements.Element element, Fuse.Elements.SimpleAlignment halign, Fuse.Elements.SimpleAlignment valign, Uno.UX.Size2& anchor) [instance] :256
void BoxSizing::EffectiveAnchor(::g::Fuse::Elements::Element* element, int halign, int valign, ::g::Uno::UX::Size2* anchor)
{
    uStackFrame __("Fuse.Elements.BoxSizing", "EffectiveAnchor(Fuse.Elements.Element,Fuse.Elements.SimpleAlignment,Fuse.Elements.SimpleAlignment,Uno.UX.Size2&)");

    if (uPtr(element)->HasBit(4096))
    {
        *anchor = uPtr(element)->Anchor();
        return;
    }

    *anchor = ::g::Uno::UX::Size2__New1(::g::Uno::UX::Size__New1(SimpleToAnchor(halign), 4), ::g::Uno::UX::Size__New1(SimpleToAnchor(valign), 4));
}

// protected Fuse.Elements.SimpleAlignment EffectiveHorizontalAlignment(Fuse.Elements.Element element) [instance] :213
int BoxSizing::EffectiveHorizontalAlignment(::g::Fuse::Elements::Element* element)
{
    uStackFrame __("Fuse.Elements.BoxSizing", "EffectiveHorizontalAlignment(Fuse.Elements.Element)");
    int raw = ::g::Fuse::Elements::AlignmentHelpers::GetHorizontalAlign(uPtr(element)->Alignment());

    if (raw == 1)
        return 0;

    if (raw == 3)
        return 2;

    if (raw == 2)
        return 1;

    if (element->HasBit(16384))
        return 0;

    return 1;
}

// protected Fuse.Elements.SimpleAlignment EffectiveVerticalAlignment(Fuse.Elements.Element element) [instance] :230
int BoxSizing::EffectiveVerticalAlignment(::g::Fuse::Elements::Element* element)
{
    uStackFrame __("Fuse.Elements.BoxSizing", "EffectiveVerticalAlignment(Fuse.Elements.Element)");
    int raw = ::g::Fuse::Elements::AlignmentHelpers::GetVerticalAlign(uPtr(element)->Alignment());

    if (raw == 4)
        return 0;

    if (raw == 12)
        return 2;

    if (raw == 8)
        return 1;

    if (element->HasBit(32768))
        return 0;

    return 1;
}

// protected Fuse.LayoutParams GetConstraints(Fuse.Elements.Element element, Fuse.LayoutParams lp, [Fuse.Elements.BoxSizing.ConstraintFlags flags]) [instance] :274
::g::Fuse::LayoutParams BoxSizing::GetConstraints(::g::Fuse::Elements::Element* element, ::g::Fuse::LayoutParams lp, int flags)
{
    uStackFrame __("Fuse.Elements.BoxSizing", "GetConstraints(Fuse.Elements.Element,Fuse.LayoutParams,[Fuse.Elements.BoxSizing.ConstraintFlags])");
    ::g::Fuse::LayoutParams c = ::g::Fuse::LayoutParams__CreateEmpty();
    bool known = false;

    if (!uPtr(element)->Width().IsAuto())
    {
        float x = UnitSize(element, uPtr(element)->Width(), lp.RelativeX(), lp.HasRelativeX(), &known);

        if (known)
            c.SetX(x);
    }
    else if ((lp.HasX() && (::g::Fuse::Elements::AlignmentHelpers::GetHorizontalAlign(uPtr(element)->Alignment()) == 0)) && !uPtr(element)->HasBit(16384))
        c.SetX(lp.X());

    if (!uPtr(element)->Height().IsAuto())
    {
        float y = UnitSize(element, uPtr(element)->Height(), lp.RelativeY(), lp.HasRelativeY(), &known);

        if (known)
            c.SetY(y);
    }
    else if ((lp.HasY() && (::g::Fuse::Elements::AlignmentHelpers::GetVerticalAlign(uPtr(element)->Alignment()) == 0)) && !uPtr(element)->HasBit(32768))
        c.SetY(lp.Y());

    known = false;
    ::g::Uno::UX::Size limit = ::g::Uno::UX::Size__op_Implicit1(0);

    if (uPtr(element)->HasBit(256))
    {
        limit = uPtr(element)->MaxWidth();
        known = true;
    }
    else if (((flags & 2) == 2) && uPtr(element)->Width().IsAuto())
    {
        limit = ::g::Uno::UX::Size__op_Implicit(lp.X());
        known = lp.HasX();
    }

    if (known)
    {
        float mx = UnitSize(element, limit, lp.RelativeX(), lp.HasRelativeX(), &known);

        if (known)
            c.ConstrainMaxX(mx);
    }

    known = false;

    if (uPtr(element)->HasBit(512))
    {
        limit = uPtr(element)->MaxHeight();
        known = true;
    }
    else if (((flags & 2) == 2) && uPtr(element)->Height().IsAuto())
    {
        limit = ::g::Uno::UX::Size__op_Implicit(lp.Y());
        known = lp.HasY();
    }

    if (known)
    {
        float my = UnitSize(element, limit, lp.RelativeY(), lp.HasRelativeY(), &known);

        if (known)
            c.ConstrainMaxY(my);
    }

    if (uPtr(element)->HasBit(64))
    {
        float mn = UnitSize(element, uPtr(element)->MinWidth(), lp.RelativeX(), lp.HasRelativeX(), &known);

        if (known)
            c.ConstrainMinX(mn);
    }

    if (uPtr(element)->HasBit(128))
    {
        float mn1 = UnitSize(element, uPtr(element)->MinHeight(), lp.RelativeY(), lp.HasRelativeY(), &known);

        if (known)
            c.ConstrainMinY(mn1);
    }

    return c;
}

// protected float SimpleToAnchor(Fuse.Elements.SimpleAlignment align) [instance] :247
float BoxSizing::SimpleToAnchor(int align)
{
    if (align == 0)
        return 0.0f;

    if (align == 2)
        return 100.0f;

    return 50.0f;
}

// protected float UnitSize(Fuse.Elements.Element element, Uno.UX.Size value, float relative, bool hasRelative, bool& known) [instance] :193
float BoxSizing::UnitSize(::g::Fuse::Elements::Element* element, ::g::Uno::UX::Size value, float relative, bool hasRelative, bool* known)
{
    uStackFrame __("Fuse.Elements.BoxSizing", "UnitSize(Fuse.Elements.Element,Uno.UX.Size,float,bool,bool&)");
    *known = true;
    int u = value.DetermineUnit();

    if (u == 2)
        return value.Value;

    if (u == 3)
        return value.Value / uPtr(element)->AbsoluteZoom();

    if (hasRelative)
        return (value.Value * relative) / 100.0f;

    *known = false;
    return 0.0f;
}
// }

// /Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Elements/1.0.2/$.uno
// ---------------------------------------------------------------------------------------

// public enum Element.BoxSizingMode :1939
uEnumType* Element__BoxSizingMode_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Elements.Element.BoxSizingMode", ::g::Uno::Int_typeof(), 5);
    type->SetLiterals(
        "Standard", 0LL,
        "NoImplicitMax", 1LL,
        "Limit", 2LL,
        "LayoutMaster", 3LL,
        "FillAspect", 4LL);
    return type;
}

// /Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Elements/1.0.2/caching/$.uno
// -----------------------------------------------------------------------------------------------

// internal partial sealed class Cache :10
// {
// static Cache() :10
static void Cache__cctor__fn(uType* __type)
{
    Cache::cacheHelper_ = ::g::Fuse::Elements::CacheHelper::New1();
}

static void Cache_build(uType* type)
{
    ::TYPES[1] = ::g::Fuse::RootViewport_typeof();
    ::TYPES[2] = ::g::Fuse::Elements::CacheTile_typeof()->Array();
    type->SetFields(0,
        ::g::Uno::Recti_typeof(), offsetof(::g::Fuse::Elements::Cache, _cacheRect), 0,
        ::TYPES[2/*Fuse.Elements.CacheTile[]*/], offsetof(::g::Fuse::Elements::Cache, _cacheTiles), 0,
        ::g::Fuse::Elements::Element_typeof(), offsetof(::g::Fuse::Elements::Cache, _element), uFieldFlagsWeak,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Elements::Cache, _isValid), 0,
        ::g::Fuse::Elements::CacheHelper_typeof(), (uintptr_t)&::g::Fuse::Elements::Cache::cacheHelper_, uFieldFlagsStatic);
}

uType* Cache_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 5;
    options.ObjectSize = sizeof(Cache);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Elements.Cache", options);
    type->fp_build_ = Cache_build;
    type->fp_cctor_ = Cache__cctor__fn;
    return type;
}

// public Cache(Fuse.Elements.Element elm) :129
void Cache__ctor__fn(Cache* __this, ::g::Fuse::Elements::Element* elm)
{
    __this->ctor_(elm);
}

// private void Blit(Fuse.DrawContext dc, float opacity) :281
void Cache__Blit_fn(Cache* __this, ::g::Fuse::DrawContext* dc, float* opacity)
{
    __this->Blit(dc, *opacity);
}

// public Fuse.Elements.CacheTile[] get_CacheTiles() :127
void Cache__get_CacheTiles_fn(Cache* __this, uArray** __retval)
{
    *__retval = __this->CacheTiles();
}

// internal float4x4 CalculateCompositMatrix(Fuse.DrawContext dc, Uno.Recti cachingRect) :192
void Cache__CalculateCompositMatrix_fn(Cache* __this, ::g::Fuse::DrawContext* dc, ::g::Uno::Recti* cachingRect, ::g::Uno::Float4x4* __retval)
{
    *__retval = __this->CalculateCompositMatrix(dc, *cachingRect);
}

// internal static Uno.Recti ConservativelySnapToCoveringIntegers(Uno.Rect r) :161
void Cache__ConservativelySnapToCoveringIntegers_fn(::g::Uno::Rect* r, ::g::Uno::Recti* __retval)
{
    *__retval = Cache::ConservativelySnapToCoveringIntegers(*r);
}

// internal bool DrawCached(Fuse.DrawContext dc) :140
void Cache__DrawCached_fn(Cache* __this, ::g::Fuse::DrawContext* dc, bool* __retval)
{
    *__retval = __this->DrawCached(dc);
}

// internal void DrawHeuristically(Fuse.DrawContext dc) :149
void Cache__DrawHeuristically_fn(Cache* __this, ::g::Fuse::DrawContext* dc)
{
    __this->DrawHeuristically(dc);
}

// private bool GetCachePreference(Fuse.DrawContext dc) :14
void Cache__GetCachePreference_fn(Cache* __this, ::g::Fuse::DrawContext* dc, bool* __retval)
{
    *__retval = __this->GetCachePreference(dc);
}

// private bool GetCachePreferenceCore(Fuse.DrawContext dc) :68
void Cache__GetCachePreferenceCore_fn(Cache* __this, ::g::Fuse::DrawContext* dc, bool* __retval)
{
    *__retval = __this->GetCachePreferenceCore(dc);
}

// internal bool GetCachingRect(Fuse.DrawContext dc, Uno.Recti& rect) :173
void Cache__GetCachingRect_fn(Cache* __this, ::g::Fuse::DrawContext* dc, ::g::Uno::Recti* rect, bool* __retval)
{
    *__retval = __this->GetCachingRect(dc, rect);
}

// internal static bool GetCachingRect(Fuse.Elements.Element elm, Uno.Recti& rect) :178
void Cache__GetCachingRect1_fn(::g::Fuse::Elements::Element* elm, ::g::Uno::Recti* rect, bool* __retval)
{
    *__retval = Cache::GetCachingRect1(elm, rect);
}

// internal void Invalidate() :135
void Cache__Invalidate_fn(Cache* __this)
{
    __this->Invalidate();
}

// internal int get_MaxTileSize() :198
void Cache__get_MaxTileSize_fn(Cache* __this, int* __retval)
{
    *__retval = __this->MaxTileSize();
}

// public Cache New(Fuse.Elements.Element elm) :129
void Cache__New1_fn(::g::Fuse::Elements::Element* elm, Cache** __retval)
{
    *__retval = Cache::New1(elm);
}

// private bool PinAndValidate(Fuse.DrawContext dc) :200
void Cache__PinAndValidate_fn(Cache* __this, ::g::Fuse::DrawContext* dc, bool* __retval)
{
    *__retval = __this->PinAndValidate(dc);
}

// private void Repaint(Fuse.DrawContext dc, Fuse.Elements.CacheTile tile) :256
void Cache__Repaint_fn(Cache* __this, ::g::Fuse::DrawContext* dc, ::g::Fuse::Elements::CacheTile* tile)
{
    __this->Repaint(dc, *tile);
}

// private void Unpin() :248
void Cache__Unpin_fn(Cache* __this)
{
    __this->Unpin();
}

uSStrong< ::g::Fuse::Elements::CacheHelper*> Cache::cacheHelper_;

// public Cache(Fuse.Elements.Element elm) [instance] :129
void Cache::ctor_(::g::Fuse::Elements::Element* elm)
{
    uStackFrame __("Fuse.Elements.Cache", ".ctor(Fuse.Elements.Element)");
    _element = elm;

    if (_element == NULL)
        U_THROW(::g::Uno::Exception::New1());
}

// private void Blit(Fuse.DrawContext dc, float opacity) [instance] :281
void Cache::Blit(::g::Fuse::DrawContext* dc, float opacity)
{
    uStackFrame __("Fuse.Elements.Cache", "Blit(Fuse.DrawContext,float)");
    uPtr(Cache::cacheHelper())->Blit(dc, this, opacity);
}

// public Fuse.Elements.CacheTile[] get_CacheTiles() [instance] :127
uArray* Cache::CacheTiles()
{
    return _cacheTiles;
}

// internal float4x4 CalculateCompositMatrix(Fuse.DrawContext dc, Uno.Recti cachingRect) [instance] :192
::g::Uno::Float4x4 Cache::CalculateCompositMatrix(::g::Fuse::DrawContext* dc, ::g::Uno::Recti cachingRect)
{
    uStackFrame __("Fuse.Elements.Cache", "CalculateCompositMatrix(Fuse.DrawContext,Uno.Recti)");
    ::g::Uno::Float4x4 translation = ::g::Uno::Matrix::Translation((float)cachingRect.Left / uPtr(_element)->AbsoluteZoom(), (float)cachingRect.Top / uPtr(_element)->AbsoluteZoom(), 0.0f);
    return ::g::Uno::Matrix::Mul8(translation, uPtr(_element)->WorldTransform());
}

// internal bool DrawCached(Fuse.DrawContext dc) [instance] :140
bool Cache::DrawCached(::g::Fuse::DrawContext* dc)
{
    uStackFrame __("Fuse.Elements.Cache", "DrawCached(Fuse.DrawContext)");

    if (!PinAndValidate(dc))
        return false;

    Blit(dc, uPtr(_element)->Opacity());
    Unpin();
    return true;
}

// internal void DrawHeuristically(Fuse.DrawContext dc) [instance] :149
void Cache::DrawHeuristically(::g::Fuse::DrawContext* dc)
{
    uStackFrame __("Fuse.Elements.Cache", "DrawHeuristically(Fuse.DrawContext)");

    if (GetCachePreference(dc))
        DrawCached(dc);
    else
        uPtr(_element)->CompositEffects(dc);
}

// private bool GetCachePreference(Fuse.DrawContext dc) [instance] :14
bool Cache::GetCachePreference(::g::Fuse::DrawContext* dc)
{
    uStackFrame __("Fuse.Elements.Cache", "GetCachePreference(Fuse.DrawContext)");
    ::g::Uno::Recti cachingRect;

    if (!GetCachingRect(dc, &cachingRect))
        return false;

    switch (uPtr(_element)->CachingMode())
    {
        case 2:
            return false;
        case 1:
            return true;
    }

    if (((double)cachingRect.Size().X > ((double)uPtr(uPtr(dc)->RenderTarget())->Size().X * 1.2)) || ((double)cachingRect.Size().Y > ((double)uPtr(uPtr(dc)->RenderTarget())->Size().Y * 1.2)))
        return false;

    if (uIs((::g::Fuse::Visual*)uPtr(_element)->Parent(), ::TYPES[1/*Fuse.RootViewport*/]))
        ;
    else if (uPtr(_element)->Parent() == NULL)
        return GetCachePreferenceCore(dc);
    else
    {
        if (uPtr(_element)->DrawCost() > 1.0)
            return GetCachePreferenceCore(dc);
        else
            ;
    }

    return false;
}

// private bool GetCachePreferenceCore(Fuse.DrawContext dc) [instance] :68
bool Cache::GetCachePreferenceCore(::g::Fuse::DrawContext* dc)
{
    uStackFrame __("Fuse.Elements.Cache", "GetCachePreferenceCore(Fuse.DrawContext)");

    if (uPtr(_element)->ValidFrameCount() > 0)
    {
        if (!uPtr(dc)->IsCaching())
            return true;
        else
            ;
    }
    else
        ;

    return false;
}

// internal bool GetCachingRect(Fuse.DrawContext dc, Uno.Recti& rect) [instance] :173
bool Cache::GetCachingRect(::g::Fuse::DrawContext* dc, ::g::Uno::Recti* rect)
{
    uStackFrame __("Fuse.Elements.Cache", "GetCachingRect(Fuse.DrawContext,Uno.Recti&)");
    return Cache::GetCachingRect1(_element, rect);
}

// internal void Invalidate() [instance] :135
void Cache::Invalidate()
{
    _isValid = false;
}

// internal int get_MaxTileSize() [instance] :198
int Cache::MaxTileSize()
{
    return ::g::Uno::Graphics::Texture2D::MaxSize();
}

// private bool PinAndValidate(Fuse.DrawContext dc) [instance] :200
bool Cache::PinAndValidate(::g::Fuse::DrawContext* dc)
{
    uStackFrame __("Fuse.Elements.Cache", "PinAndValidate(Fuse.DrawContext)");
    ::g::Uno::Recti cacheRect;

    if (!GetCachingRect(dc, &cacheRect))
        return false;

    if (!::g::Uno::Recti__Equals2(cacheRect, _cacheRect))
    {
        int numTilesX = ((cacheRect.Size().X + MaxTileSize()) - 1) / MaxTileSize();
        int numTilesY = ((cacheRect.Size().Y + MaxTileSize()) - 1) / MaxTileSize();
        int numTiles = numTilesX * numTilesY;

        if ((_cacheTiles == NULL) || (numTiles != uPtr(_cacheTiles)->Length()))
            _cacheTiles = uArray::New(::TYPES[2/*Fuse.Elements.CacheTile[]*/], numTiles);

        for (int y = 0; y < numTilesY; ++y)

            for (int x = 0; x < numTilesX; ++x)
            {
                int tile = x + (y * numTilesX);
                ::g::Uno::Int2 Position = ::g::Uno::Int2__New2(x * MaxTileSize(), y * MaxTileSize());
                uPtr(_cacheTiles)->Item< ::g::Fuse::Elements::CacheTile>(tile)._rect = ::g::Uno::Recti__New1(cacheRect.Left + Position.X, cacheRect.Top + Position.Y, (cacheRect.Left + Position.X) + ::g::Uno::Math::Min8(cacheRect.Size().X - Position.X, MaxTileSize()), (cacheRect.Top + Position.Y) + ::g::Uno::Math::Min8(cacheRect.Size().Y - Position.Y, MaxTileSize()));
            }
    }

    for (int i = 0; i < uPtr(_cacheTiles)->Length(); ++i)
    {
        uPtr(_cacheTiles)->Item< ::g::Fuse::Elements::CacheTile>(i).EnsureHasFramebuffer();
        uPtr(_cacheTiles)->Item< ::g::Fuse::Elements::CacheTile>(i)._compositMatrix = CalculateCompositMatrix(dc, uPtr(_cacheTiles)->Item< ::g::Fuse::Elements::CacheTile>(i)._rect);
        uPtr(uPtr(_cacheTiles)->Item< ::g::Fuse::Elements::CacheTile>(i)._framebuffer)->Pin();

        if (!uPtr(uPtr(_cacheTiles)->Item< ::g::Fuse::Elements::CacheTile>(i)._framebuffer)->IsContentValid() || !_isValid)
            Repaint(dc, uPtr(_cacheTiles)->Item< ::g::Fuse::Elements::CacheTile>(i));
    }

    _isValid = true;
    return true;
}

// private void Repaint(Fuse.DrawContext dc, Fuse.Elements.CacheTile tile) [instance] :256
void Cache::Repaint(::g::Fuse::DrawContext* dc, ::g::Fuse::Elements::CacheTile tile)
{
    uStackFrame __("Fuse.Elements.Cache", "Repaint(Fuse.DrawContext,Fuse.Elements.CacheTile)");
    ::g::Fuse::OrthographicFrustum* collection4;
    collection4 = ::g::Fuse::OrthographicFrustum::New1();
    ::g::Uno::Float2 ind5 = ::g::Uno::Float2__op_Division1(::g::Uno::Float2__New2((float)tile._rect.Minimum().X, (float)tile._rect.Minimum().Y), uPtr(_element)->AbsoluteZoom());
    uPtr(collection4)->Origin(ind5);
    ;
    ::g::Uno::Float2 ind6 = ::g::Uno::Float2__op_Division1(::g::Uno::Float2__New2((float)tile._rect.Size().X, (float)tile._rect.Size().Y), uPtr(_element)->AbsoluteZoom());
    uPtr(collection4)->Size(ind6);
    ;
    ::g::Uno::Float4x4 ind7 = uPtr(_element)->WorldTransformInverse();
    uPtr(collection4)->LocalFromWorld(ind7);
    ;
    ::g::Fuse::OrthographicFrustum* cc = collection4;
    bool oldIsCaching = uPtr(dc)->IsCaching();
    dc->IsCaching(true);
    dc->PushRenderTargetFrustum(uPtr(tile._framebuffer)->Framebuffer(), (uObject*)cc);
    dc->Clear(::g::Uno::Float4__New1(0.0f), 1.0f);
    uPtr(_element)->CompositEffects(dc);
    dc->PopRenderTargetFrustum();
    dc->IsCaching(oldIsCaching);
}

// private void Unpin() [instance] :248
void Cache::Unpin()
{
    uStackFrame __("Fuse.Elements.Cache", "Unpin()");
    uArray* array1;
    int index2;
    int length3;

    for (array1 = _cacheTiles, index2 = 0, length3 = uPtr(array1)->Length(); index2 < length3; ++index2)
    {
        ::g::Fuse::Elements::CacheTile tile = uPtr(array1)->Item< ::g::Fuse::Elements::CacheTile>(index2);
        uPtr(tile._framebuffer)->Unpin(true);
    }
}

// internal static Uno.Recti ConservativelySnapToCoveringIntegers(Uno.Rect r) [static] :161
::g::Uno::Recti Cache::ConservativelySnapToCoveringIntegers(::g::Uno::Rect r)
{
    Cache_typeof()->Init();
    ::g::Uno::Int2 origin = ::g::Uno::Int2__op_Explicit(::g::Uno::Math::Floor2(r.LeftTop()));
    ::g::Uno::Int2 size = ::g::Uno::Int2__op_Explicit(::g::Uno::Math::Ceil2(::g::Uno::Float2__op_Addition1(::g::Uno::Float2__op_Subtraction2(r.RightBottom(), r.LeftTop()), 0.01f)));
    return ::g::Uno::Recti__New1(origin.X, origin.Y, (origin.X + size.X) + 1, (origin.Y + size.Y) + 1);
}

// internal static bool GetCachingRect(Fuse.Elements.Element elm, Uno.Recti& rect) [static] :178
bool Cache::GetCachingRect1(::g::Fuse::Elements::Element* elm, ::g::Uno::Recti* rect)
{
    uStackFrame __("Fuse.Elements.Cache", "GetCachingRect(Fuse.Elements.Element,Uno.Recti&)");
    Cache_typeof()->Init();
    ::g::Fuse::VisualBounds* bounds = uPtr(elm)->RenderBoundsWithEffects();

    if (uPtr(bounds)->IsInfinite() || uPtr(bounds)->IsEmpty())
    {
        *rect = ::g::Uno::Recti__New1(0, 0, 0, 0);
        return false;
    }

    *rect = ::g::Uno::Recti__Inflate(Cache::ConservativelySnapToCoveringIntegers(::g::Uno::Rect__Scale(uPtr(bounds)->FlatRect(), elm->AbsoluteZoom())), 1);
    return true;
}

// public Cache New(Fuse.Elements.Element elm) [static] :129
Cache* Cache::New1(::g::Fuse::Elements::Element* elm)
{
    Cache* obj8 = (Cache*)uNew(Cache_typeof());
    obj8->ctor_(elm);
    return obj8;
}
// }

// /Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Elements/1.0.2/caching/$.uno
// -----------------------------------------------------------------------------------------------

// internal sealed class CacheHelper :287
// {
static void CacheHelper_build(uType* type)
{
    ::TYPES[3] = ::g::Fuse::IRenderViewport_typeof();
    ::TYPES[4] = ::g::Uno::Float2_typeof()->Array();
    type->SetFields(0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall_typeof(), offsetof(::g::Fuse::Elements::CacheHelper, _draw_be52273c), 0,
        ::g::Uno::Graphics::VertexBuffer_typeof(), offsetof(::g::Fuse::Elements::CacheHelper, Blit_Coord_be52273c_1_1_1), 0,
        ::TYPES[4/*float2[]*/], offsetof(::g::Fuse::Elements::CacheHelper, Blit_Vertices_be52273c_1_0_7), 0);
}

uType* CacheHelper_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.ObjectSize = sizeof(CacheHelper);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Elements.CacheHelper", options);
    type->fp_build_ = CacheHelper_build;
    type->fp_ctor_ = (void*)CacheHelper__New1_fn;
    return type;
}

// public generated CacheHelper() :287
void CacheHelper__ctor__fn(CacheHelper* __this)
{
    __this->ctor_();
}

// public void Blit(Fuse.DrawContext dc, Fuse.Elements.Cache cache, float opacity) :289
void CacheHelper__Blit_fn(CacheHelper* __this, ::g::Fuse::DrawContext* dc, ::g::Fuse::Elements::Cache* cache, float* opacity)
{
    __this->Blit(dc, cache, *opacity);
}

// private generated void init_DrawCalls() :287
void CacheHelper__init_DrawCalls_fn(CacheHelper* __this)
{
    __this->init_DrawCalls();
}

// public generated CacheHelper New() :287
void CacheHelper__New1_fn(CacheHelper** __retval)
{
    *__retval = CacheHelper::New1();
}

// public generated CacheHelper() [instance] :287
void CacheHelper::ctor_()
{
    init_DrawCalls();
}

// public void Blit(Fuse.DrawContext dc, Fuse.Elements.Cache cache, float opacity) [instance] :289
void CacheHelper::Blit(::g::Fuse::DrawContext* dc, ::g::Fuse::Elements::Cache* cache, float opacity)
{
    uStackFrame __("Fuse.Elements.CacheHelper", "Blit(Fuse.DrawContext,Fuse.Elements.Cache,float)");
    uArray* array1;
    int index2;
    int length3;

    for (array1 = uPtr(cache)->CacheTiles(), index2 = 0, length3 = uPtr(array1)->Length(); index2 < length3; ++index2)
    {
        ::g::Fuse::Elements::CacheTile tile = uPtr(array1)->Item< ::g::Fuse::Elements::CacheTile>(index2);
        _draw_be52273c.BlendEnabled(true);
        _draw_be52273c.DepthTestEnabled(false);
        _draw_be52273c.CullFace(uPtr(dc)->CullFace());
        _draw_be52273c.BlendSrcAlpha(7);
        _draw_be52273c.BlendDstRgb(3);
        _draw_be52273c.Use();
        _draw_be52273c.Attrib1(0, 2, Blit_Coord_be52273c_1_1_1, 8, 0);
        _draw_be52273c.Uniform2(1, ::g::Uno::Float2__op_Division1(::g::Uno::Float2__New2((float)uPtr(tile.Texture())->Size().X, (float)uPtr(tile.Texture())->Size().Y), dc->ViewportPixelsPerPoint()));
        _draw_be52273c.Uniform12(2, tile._compositMatrix);
        _draw_be52273c.Uniform12(3, ::g::Fuse::IRenderViewport::ViewProjectionTransform(uInterface(uPtr(dc->Viewport()), ::TYPES[3/*Fuse.IRenderViewport*/])));
        _draw_be52273c.Uniform(4, opacity);
        _draw_be52273c.Sampler3(5, tile.Texture(), ::g::Uno::Graphics::SamplerState__LinearClamp());
        _draw_be52273c.DrawArrays(uPtr(Blit_Vertices_be52273c_1_0_7)->Length());
    }
}

// private generated void init_DrawCalls() [instance] :287
void CacheHelper::init_DrawCalls()
{
    uStackFrame __("Fuse.Elements.CacheHelper", "init_DrawCalls()");
    uArray* Vertices_be52273c_1_0_0 = uArray::Init< ::g::Uno::Float2>(::TYPES[4/*float2[]*/], 6, ::g::Uno::Float2__New2(0.0f, 0.0f), ::g::Uno::Float2__New2(0.0f, 1.0f), ::g::Uno::Float2__New2(1.0f, 1.0f), ::g::Uno::Float2__New2(0.0f, 0.0f), ::g::Uno::Float2__New2(1.0f, 1.0f), ::g::Uno::Float2__New2(1.0f, 0.0f));
    Blit_Coord_be52273c_1_1_1 = ::g::Uno::Graphics::VertexBuffer::New2(::g::Uno::Runtime::Implementation::Internal::BufferConverters::ToBuffer3(Vertices_be52273c_1_0_0), 0);
    Blit_Vertices_be52273c_1_0_7 = Vertices_be52273c_1_0_0;
    _draw_be52273c = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New1(::g::FuseElements_bundle::CacheHelper230c69b7());
}

// public generated CacheHelper New() [static] :287
CacheHelper* CacheHelper::New1()
{
    CacheHelper* obj4 = (CacheHelper*)uNew(CacheHelper_typeof());
    obj4->ctor_();
    return obj4;
}
// }

// /Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Elements/1.0.2/caching/$.uno
// -----------------------------------------------------------------------------------------------

// internal struct CacheTile :97
// {
static void CacheTile_build(uType* type)
{
    type->SetFields(0,
        ::g::Uno::Float4x4_typeof(), offsetof(::g::Fuse::Elements::CacheTile, _compositMatrix), 0,
        ::g::Fuse::CacheFramebuffer_typeof(), offsetof(::g::Fuse::Elements::CacheTile, _framebuffer), 0,
        ::g::Uno::Recti_typeof(), offsetof(::g::Fuse::Elements::CacheTile, _rect), 0);
}

uStructType* CacheTile_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.ValueSize = sizeof(CacheTile);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Fuse.Elements.CacheTile", options);
    type->fp_build_ = CacheTile_build;
    return type;
}

// public void EnsureHasFramebuffer() :105
void CacheTile__EnsureHasFramebuffer_fn(CacheTile* __this)
{
    __this->EnsureHasFramebuffer();
}

// public texture2D get_Texture() :103
void CacheTile__get_Texture_fn(CacheTile* __this, ::g::Uno::Graphics::Texture2D** __retval)
{
    *__retval = __this->Texture();
}

// public void EnsureHasFramebuffer() [instance] :105
void CacheTile::EnsureHasFramebuffer()
{
    uStackFrame __("Fuse.Elements.CacheTile", "EnsureHasFramebuffer()");

    if (((_framebuffer == NULL) || (uPtr(_framebuffer)->Width() != _rect.Size().X)) || (uPtr(_framebuffer)->Height() != _rect.Size().Y))
    {
        if (_framebuffer != NULL)
            uPtr(_framebuffer)->Dispose();

        _framebuffer = ::g::Fuse::CacheFramebuffer::New1(_rect.Size().X, _rect.Size().Y, 3, 0);
    }
}

// public texture2D get_Texture() [instance] :103
::g::Uno::Graphics::Texture2D* CacheTile::Texture()
{
    uStackFrame __("Fuse.Elements.CacheTile", "get_Texture()");
    return uPtr(uPtr(_framebuffer)->Framebuffer())->ColorBuffer();
}
// }

// /Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Elements/1.0.2/$.uno
// ---------------------------------------------------------------------------------------

// public enum CachingMode :3026
uEnumType* CachingMode_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Elements.CachingMode", ::g::Uno::Int_typeof(), 3);
    type->SetLiterals(
        "Optimized", 0LL,
        "Always", 1LL,
        "Never", 2LL);
    return type;
}

// /Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Elements/1.0.2/$.uno
// ---------------------------------------------------------------------------------------

// private sealed class TransformOrigins.CenterOrigin :2450
// {
static void TransformOrigins__CenterOrigin_build(uType* type)
{
    type->SetInterfaces(
        ::g::Fuse::Elements::ITransformOrigin_typeof(), offsetof(TransformOrigins__CenterOrigin_type, interface0));
}

TransformOrigins__CenterOrigin_type* TransformOrigins__CenterOrigin_typeof()
{
    static uSStrong<TransformOrigins__CenterOrigin_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(TransformOrigins__CenterOrigin);
    options.TypeSize = sizeof(TransformOrigins__CenterOrigin_type);
    type = (TransformOrigins__CenterOrigin_type*)uClassType::New("Fuse.Elements.TransformOrigins.CenterOrigin", options);
    type->fp_build_ = TransformOrigins__CenterOrigin_build;
    type->fp_ctor_ = (void*)TransformOrigins__CenterOrigin__New1_fn;
    type->interface0.fp_GetOffset = (void(*)(uObject*, ::g::Fuse::Elements::Element*, ::g::Uno::Float3*))TransformOrigins__CenterOrigin__GetOffset_fn;
    return type;
}

// public generated CenterOrigin() :2450
void TransformOrigins__CenterOrigin__ctor__fn(TransformOrigins__CenterOrigin* __this)
{
    __this->ctor_();
}

// public float3 GetOffset(Fuse.Elements.Element elm) :2452
void TransformOrigins__CenterOrigin__GetOffset_fn(TransformOrigins__CenterOrigin* __this, ::g::Fuse::Elements::Element* elm, ::g::Uno::Float3* __retval)
{
    *__retval = __this->GetOffset(elm);
}

// public generated CenterOrigin New() :2450
void TransformOrigins__CenterOrigin__New1_fn(TransformOrigins__CenterOrigin** __retval)
{
    *__retval = TransformOrigins__CenterOrigin::New1();
}

// public generated CenterOrigin() [instance] :2450
void TransformOrigins__CenterOrigin::ctor_()
{
}

// public float3 GetOffset(Fuse.Elements.Element elm) [instance] :2452
::g::Uno::Float3 TransformOrigins__CenterOrigin::GetOffset(::g::Fuse::Elements::Element* elm)
{
    uStackFrame __("Fuse.Elements.TransformOrigins.CenterOrigin", "GetOffset(Fuse.Elements.Element)");
    return ::g::Uno::Float3__New4(::g::Uno::Float2__op_Division1(uPtr(elm)->ActualSize(), 2.0f), 0.0f);
}

// public generated CenterOrigin New() [static] :2450
TransformOrigins__CenterOrigin* TransformOrigins__CenterOrigin::New1()
{
    TransformOrigins__CenterOrigin* obj1 = (TransformOrigins__CenterOrigin*)uNew(TransformOrigins__CenterOrigin_typeof());
    obj1->ctor_();
    return obj1;
}
// }

// /Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Elements/1.0.2/$.uno
// ---------------------------------------------------------------------------------------

// protected enum BoxSizing.ConstraintFlags :269
uEnumType* BoxSizing__ConstraintFlags_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Elements.BoxSizing.ConstraintFlags", ::g::Uno::Int_typeof(), 2);
    type->SetLiterals(
        "None", 0LL,
        "ImplicitMax", 2LL);
    return type;
}

// /Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Elements/1.0.2/$.uno
// ---------------------------------------------------------------------------------------

// private sealed extern class Element.DefaultDisposable :2690
// {
static void Element__DefaultDisposable_build(uType* type)
{
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(Element__DefaultDisposable_type, interface0));
    type->SetFields(0,
        ::g::Uno::IDisposable_typeof(), (uintptr_t)&::g::Fuse::Elements::Element__DefaultDisposable::_instance_, uFieldFlagsStatic);
}

Element__DefaultDisposable_type* Element__DefaultDisposable_typeof()
{
    static uSStrong<Element__DefaultDisposable_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(Element__DefaultDisposable);
    options.TypeSize = sizeof(Element__DefaultDisposable_type);
    type = (Element__DefaultDisposable_type*)uClassType::New("Fuse.Elements.Element.DefaultDisposable", options);
    type->fp_build_ = Element__DefaultDisposable_build;
    type->fp_ctor_ = (void*)Element__DefaultDisposable__New1_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))Element__DefaultDisposable__UnoIDisposableDispose_fn;
    return type;
}

// public generated DefaultDisposable() :2690
void Element__DefaultDisposable__ctor__fn(Element__DefaultDisposable* __this)
{
    __this->ctor_();
}

// public static Uno.IDisposable get_Instance() :2695
void Element__DefaultDisposable__get_Instance_fn(uObject** __retval)
{
    *__retval = Element__DefaultDisposable::Instance();
}

// public generated DefaultDisposable New() :2690
void Element__DefaultDisposable__New1_fn(Element__DefaultDisposable** __retval)
{
    *__retval = Element__DefaultDisposable::New1();
}

// private void Uno.IDisposable.Dispose() :2698
void Element__DefaultDisposable__UnoIDisposableDispose_fn(Element__DefaultDisposable* __this)
{
}

uSStrong<uObject*> Element__DefaultDisposable::_instance_;

// public generated DefaultDisposable() [instance] :2690
void Element__DefaultDisposable::ctor_()
{
}

// public generated DefaultDisposable New() [static] :2690
Element__DefaultDisposable* Element__DefaultDisposable::New1()
{
    Element__DefaultDisposable* obj2 = (Element__DefaultDisposable*)uNew(Element__DefaultDisposable_typeof());
    obj2->ctor_();
    return obj2;
}

// public static Uno.IDisposable get_Instance() [static] :2695
uObject* Element__DefaultDisposable::Instance()
{
    uStackFrame __("Fuse.Elements.Element.DefaultDisposable", "get_Instance()");
    uObject* ind1 = Element__DefaultDisposable::_instance_;
    return (ind1 != NULL) ? ind1 : (uObject*)(Element__DefaultDisposable::_instance_ = (uObject*)Element__DefaultDisposable::New1());
}
// }

// /Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Elements/1.0.2/caching/$.uno
// -----------------------------------------------------------------------------------------------

// internal static class DisplayHelpers :415
// {
static void DisplayHelpers_build(uType* type)
{
}

uClassType* DisplayHelpers_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Elements.DisplayHelpers", options);
    type->fp_build_ = DisplayHelpers_build;
    return type;
}

// public static int2 get_DisplaySizeHint() :419
void DisplayHelpers__get_DisplaySizeHint_fn(::g::Uno::Int2* __retval)
{
    *__retval = DisplayHelpers::DisplaySizeHint();
}

// public static int2 get_DisplaySizeHint() [static] :419
::g::Uno::Int2 DisplayHelpers::DisplaySizeHint()
{
    return ::g::Uno::Int2__op_Explicit(::g::Fuse::Platform::SystemUI::Frame().Size());
}
// }

// /Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Elements/1.0.2/$.uno
// ---------------------------------------------------------------------------------------

// public interfacemodifiers class Element :104
// {
// static Element() :2322
static void Element__cctor_2_fn(uType* __type)
{
    Element::_hitTestModeName_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[0/*"HitTestMode"*/]);
    Element::_visibilityName_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[1/*"Visibility"*/]);
    Element::_clipToBoundsName_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[2/*"ClipToBounds"*/]);
    Element::_opacityName_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[3/*"Opacity"*/]);
    Element::DefaultTransformOrigin_ = ::g::Fuse::Elements::TransformOrigins::Center();
    Element::ExplicitTransformOriginName_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[4/*"ExplicitTra...*/]);
    ::g::Fuse::Designer::UnoHostInterface::VisualAppearedFactory_ = uDelegate::New(::TYPES[5/*Uno.Func<object, Uno.Action<Uno.Rect, float4x4>, Uno.IDisposable>*/], (void*)Element__VisualAppearedFactory_fn);
    ::g::Fuse::Designer::UnoHostInterface::VisualDisappearedFactory_ = uDelegate::New(::TYPES[6/*Uno.Func<object, Uno.Action, Uno.IDisposable>*/], (void*)Element__VisualDisappearedFactory_fn);
    ::g::Fuse::Designer::UnoHostInterface::VisualTransformChangedFactory_ = uDelegate::New(::TYPES[7/*Uno.Func<object, Uno.Action<float4x4>, Uno.IDisposable>*/], (void*)Element__VisualTransformChangedFactory_fn);
    ::g::Fuse::Designer::UnoHostInterface::VisualBoundsChangedFactory_ = uDelegate::New(::TYPES[8/*Uno.Func<object, Uno.Action<Uno.Rect>, Uno.IDisposable>*/], (void*)Element__VisualBoundsChangedFactory_fn);
}

static void Element_build(uType* type)
{
    ::STRINGS[0] = uString::Const("HitTestMode");
    ::STRINGS[1] = uString::Const("Visibility");
    ::STRINGS[2] = uString::Const("ClipToBounds");
    ::STRINGS[3] = uString::Const("Opacity");
    ::STRINGS[4] = uString::Const("ExplicitTransformOrigin");
    ::STRINGS[5] = uString::Const("CaptureRegion bigger than maximum texture size, dropping rendering (size: ");
    ::STRINGS[6] = uString::Const(", max-size: ");
    ::STRINGS[7] = uString::Const("/Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Elements/1.0.2/$.uno");
    ::STRINGS[8] = uString::Const("This element has a partial opacity and is not flat. This will not render correctly. Put the opacity on a flat child panel instead.");
    ::STRINGS[9] = uString::Const("Composit");
    ::STRINGS[10] = uString::Const("This element can not be drawn.");
    ::STRINGS[11] = uString::Const("Draw called on a non-rooted node");
    ::STRINGS[12] = uString::Const("Draw");
    ::TYPES[5] = ::g::Uno::Func2_typeof()->MakeType(uObject_typeof(), ::g::Uno::Action2_typeof()->MakeType(::g::Uno::Rect_typeof(), ::g::Uno::Float4x4_typeof(), NULL), ::g::Uno::IDisposable_typeof(), NULL);
    ::TYPES[6] = ::g::Uno::Func2_typeof()->MakeType(uObject_typeof(), ::g::Uno::Action_typeof(), ::g::Uno::IDisposable_typeof(), NULL);
    ::TYPES[7] = ::g::Uno::Func2_typeof()->MakeType(uObject_typeof(), ::g::Uno::Action1_typeof()->MakeType(::g::Uno::Float4x4_typeof(), NULL), ::g::Uno::IDisposable_typeof(), NULL);
    ::TYPES[8] = ::g::Uno::Func2_typeof()->MakeType(uObject_typeof(), ::g::Uno::Action1_typeof()->MakeType(::g::Uno::Rect_typeof(), NULL), ::g::Uno::IDisposable_typeof(), NULL);
    ::TYPES[9] = Element__GMSCacheItem_typeof()->Array();
    ::TYPES[10] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Effects::Effect_typeof(), NULL);
    ::TYPES[11] = ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Effects::Effect_typeof(), NULL);
    ::TYPES[12] = ::g::Uno::Collections::List__Enumerator_typeof()->MakeType(::g::Fuse::Effects::Effect_typeof(), NULL);
    ::TYPES[13] = ::g::Uno::Collections::List__Enumerator_typeof()->MakeType(::g::Uno::Action_typeof(), NULL);
    ::TYPES[14] = ::g::Fuse::Elements::ITreeRenderer_typeof();
    ::TYPES[15] = ::g::Uno::Action_typeof();
    ::TYPES[16] = ::g::Fuse::Effects::Effect_typeof();
    ::TYPES[17] = ::g::Uno::Action1_typeof()->MakeType(::TYPES[16/*Fuse.Effects.Effect*/], NULL);
    ::TYPES[18] = ::g::Fuse::Elements::ITransformOrigin_typeof();
    ::TYPES[19] = ::g::Fuse::Elements::ExplicitTransformOrigin_typeof();
    ::TYPES[20] = ::g::Fuse::Visual_typeof()->MakeMethod(10/*Set<Fuse.Elements.HitTestMode>*/, ::g::Fuse::Elements::HitTestMode_typeof(), NULL);
    ::TYPES[21] = ::g::Fuse::Visual_typeof()->MakeMethod(10/*Set<float>*/, ::g::Uno::Float_typeof(), NULL);
    ::TYPES[22] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL);
    ::TYPES[23] = ::g::Fuse::Visual_typeof()->MakeMethod(4/*Get<Uno.UX.Size2>*/, ::g::Uno::UX::Size2_typeof(), NULL);
    ::TYPES[24] = ::g::Fuse::Visual_typeof()->MakeMethod(10/*Set<Uno.UX.Size2>*/, ::g::Uno::UX::Size2_typeof(), NULL);
    ::TYPES[25] = ::g::Fuse::Visual_typeof()->MakeMethod(4/*Get<float>*/, ::g::Uno::Float_typeof(), NULL);
    ::TYPES[26] = ::g::Fuse::Visual_typeof()->MakeMethod(4/*Get<Fuse.Elements.AspectConstraint>*/, ::g::Fuse::Elements::AspectConstraint_typeof(), NULL);
    ::TYPES[27] = ::g::Fuse::Visual_typeof()->MakeMethod(10/*Set<Fuse.Elements.AspectConstraint>*/, ::g::Fuse::Elements::AspectConstraint_typeof(), NULL);
    ::TYPES[28] = ::g::Fuse::Visual_typeof()->MakeMethod(4/*Get<Fuse.Elements.CachingMode>*/, ::g::Fuse::Elements::CachingMode_typeof(), NULL);
    ::TYPES[29] = ::g::Fuse::Visual_typeof()->MakeMethod(10/*Set<Fuse.Elements.CachingMode>*/, ::g::Fuse::Elements::CachingMode_typeof(), NULL);
    ::TYPES[30] = ::g::Uno::Collections::List_typeof()->MakeType(::TYPES[16/*Fuse.Effects.Effect*/], NULL);
    ::TYPES[31] = ::g::Fuse::Visual_typeof()->MakeMethod(4/*Get<Fuse.Elements.HitTestMode>*/, ::g::Fuse::Elements::HitTestMode_typeof(), NULL);
    ::TYPES[32] = ::g::Fuse::Visual_typeof()->MakeMethod(4/*Get<Uno.UX.Size>*/, ::g::Uno::UX::Size_typeof(), NULL);
    ::TYPES[33] = ::g::Fuse::Visual_typeof()->MakeMethod(10/*Set<Uno.UX.Size>*/, ::g::Uno::UX::Size_typeof(), NULL);
    ::TYPES[34] = ::g::Fuse::Visual_typeof()->MakeMethod(4/*Get<float4>*/, ::g::Uno::Float4_typeof(), NULL);
    ::TYPES[35] = ::g::Fuse::Visual_typeof()->MakeMethod(10/*Set<float4>*/, ::g::Uno::Float4_typeof(), NULL);
    ::TYPES[36] = ::g::Uno::Collections::List_typeof()->MakeType(::TYPES[15/*Uno.Action*/], NULL);
    ::TYPES[37] = ::g::Fuse::Visual_typeof()->MakeMethod(4/*Get<Fuse.Elements.ITransformOrigin>*/, ::TYPES[18/*Fuse.Elements.ITransformOrigin*/], NULL);
    ::TYPES[38] = ::g::Fuse::Visual_typeof()->MakeMethod(10/*Set<Fuse.Elements.ITransformOrigin>*/, ::TYPES[18/*Fuse.Elements.ITransformOrigin*/], NULL);
    ::TYPES[0] = ::g::Fuse::PlacedHandler_typeof();
    ::TYPES[39] = ::g::Fuse::Elements::PreplacementHandler_typeof();
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(Element_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(Element_type, interface1),
        ::g::Fuse::IProperties_typeof(), offsetof(Element_type, interface2),
        ::g::Fuse::INotifyUnrooted_typeof(), offsetof(Element_type, interface3),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(Element_type, interface4),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(Element_type, interface5),
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL), offsetof(Element_type, interface6),
        ::g::Uno::UX::IPropertyListener_typeof(), offsetof(Element_type, interface7),
        ::TYPES[22/*Uno.Collections.ICollection<Fuse.Node>*/], offsetof(Element_type, interface8),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL), offsetof(Element_type, interface9),
        ::g::Fuse::Triggers::Actions::IShow_typeof(), offsetof(Element_type, interface10),
        ::g::Fuse::Triggers::Actions::IHide_typeof(), offsetof(Element_type, interface11),
        ::g::Fuse::Triggers::Actions::ICollapse_typeof(), offsetof(Element_type, interface12),
        ::g::Fuse::IActualPlacement_typeof(), offsetof(Element_type, interface13),
        ::g::Fuse::Animations::IResize_typeof(), offsetof(Element_type, interface14));
    type->SetFields(55,
        ::g::Uno::Float2_typeof(), offsetof(::g::Fuse::Elements::Element, _actualAnchor), 0,
        ::g::Uno::Float2_typeof(), offsetof(::g::Fuse::Elements::Element, _actualPosition), 0,
        ::g::Uno::Float2_typeof(), offsetof(::g::Fuse::Elements::Element, _actualPositionCache), 0,
        ::g::Uno::Float2_typeof(), offsetof(::g::Fuse::Elements::Element, _actualSize), 0,
        ::g::Fuse::Elements::Alignment_typeof(), offsetof(::g::Fuse::Elements::Element, _alignment), 0,
        ::g::Fuse::Elements::BoxSizing_typeof(), offsetof(::g::Fuse::Elements::Element, _boxSizing), 0,
        Element__BoxSizingMode_typeof(), offsetof(::g::Fuse::Elements::Element, _boxSizingMode), 0,
        ::g::Fuse::Elements::Cache_typeof(), offsetof(::g::Fuse::Elements::Element, _cache), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::Elements::Element, _compositionEffects), 0,
        ::TYPES[30/*Uno.Collections.List<Fuse.Effects.Effect>*/], offsetof(::g::Fuse::Elements::Element, _effects), 0,
        ::g::Fuse::Elements::ElementBatcher_typeof(), offsetof(::g::Fuse::Elements::Element, _elementBatcher), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Elements::Element, _elementBatchValid), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::Elements::Element, _gmsAt), 0,
        ::TYPES[9/*Fuse.Elements.Element.GMSCacheItem[]*/], offsetof(::g::Fuse::Elements::Element, _gmsCache), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::Elements::Element, _gmsCount), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Elements::Element, _haveActualPositionCache), 0,
        ::g::Uno::UX::Size_typeof(), offsetof(::g::Fuse::Elements::Element, _height), 0,
        ::g::Uno::Float2_typeof(), offsetof(::g::Fuse::Elements::Element, _intendedSize), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Elements::Element, _pendingDispatchPlacement), 0,
        ::g::Fuse::Node_typeof(), offsetof(::g::Fuse::Elements::Element, _placedBefore), uFieldFlagsWeak,
        ::g::Uno::Float2_typeof(), offsetof(::g::Fuse::Elements::Element, _ppPrevPosition), 0,
        ::g::Uno::Float2_typeof(), offsetof(::g::Fuse::Elements::Element, _ppPrevSize), 0,
        ::g::Fuse::VisualBounds_typeof(), offsetof(::g::Fuse::Elements::Element, _renderBoundsWithEffects), 0,
        ::g::Fuse::VisualBounds_typeof(), offsetof(::g::Fuse::Elements::Element, _renderBoundsWithoutEffects), 0,
        ::TYPES[36/*Uno.Collections.List<Uno.Action>*/], offsetof(::g::Fuse::Elements::Element, _rootedListeners), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Elements::Element, _transformChanged), 0,
        ::TYPES[36/*Uno.Collections.List<Uno.Action>*/], offsetof(::g::Fuse::Elements::Element, _unrootedListeners), 0,
        ::g::Fuse::Elements::Visibility_typeof(), offsetof(::g::Fuse::Elements::Element, _visibility), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Elements::Element, _warnNoCacheDraw), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Elements::Element, _warnOpacityFlat), 0,
        ::g::Uno::UX::Size_typeof(), offsetof(::g::Fuse::Elements::Element, _width), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Elements::Element, ignoreTempArrange), 0,
        ::g::Fuse::Elements::ElementBatchEntry_typeof(), offsetof(::g::Fuse::Elements::Element, _ElementBatchEntry), 0,
        ::TYPES[0/*Fuse.PlacedHandler*/], offsetof(::g::Fuse::Elements::Element, Placed1), 0,
        ::TYPES[39/*Fuse.Elements.PreplacementHandler*/], offsetof(::g::Fuse::Elements::Element, Preplacement1), 0,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::Fuse::Elements::Element::_clipToBoundsName_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::Fuse::Elements::Element::_hitTestModeName_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::Fuse::Elements::Element::_opacityName_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::Fuse::Elements::Element::_visibilityName_, uFieldFlagsStatic,
        ::TYPES[18/*Fuse.Elements.ITransformOrigin*/], (uintptr_t)&::g::Fuse::Elements::Element::DefaultTransformOrigin_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::Fuse::Elements::Element::ExplicitTransformOriginName_, uFieldFlagsStatic);
    type->Reflection.SetFields(2,
        new uField("DefaultTransformOrigin", 94),
        new uField("ExplicitTransformOriginName", 95));
    type->Reflection.SetFunctions(68,
        new uFunction("get_ActualAnchor", NULL, (void*)Element__get_ActualAnchor_fn, 0, false, ::g::Uno::Float2_typeof(), 0),
        new uFunction("get_ActualPosition", NULL, (void*)Element__get_ActualPosition_fn, 0, false, ::g::Uno::Float2_typeof(), 0),
        new uFunction("get_ActualSize", NULL, (void*)Element__get_ActualSize_fn, 0, false, ::g::Uno::Float2_typeof(), 0),
        new uFunction("get_Alignment", NULL, (void*)Element__get_Alignment_fn, 0, false, ::g::Fuse::Elements::Alignment_typeof(), 0),
        new uFunction("set_Alignment", NULL, (void*)Element__set_Alignment_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Elements::Alignment_typeof()),
        new uFunction("get_Anchor", NULL, (void*)Element__get_Anchor_fn, 0, false, ::g::Uno::UX::Size2_typeof(), 0),
        new uFunction("set_Anchor", NULL, (void*)Element__set_Anchor_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::UX::Size2_typeof()),
        new uFunction("get_Aspect", NULL, (void*)Element__get_Aspect_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("set_Aspect", NULL, (void*)Element__set_Aspect_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("get_AspectConstraint", NULL, (void*)Element__get_AspectConstraint_fn, 0, false, ::g::Fuse::Elements::AspectConstraint_typeof(), 0),
        new uFunction("set_AspectConstraint", NULL, (void*)Element__set_AspectConstraint_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Elements::AspectConstraint_typeof()),
        new uFunction("get_BoxSizing", NULL, (void*)Element__get_BoxSizing_fn, 0, false, Element__BoxSizingMode_typeof(), 0),
        new uFunction("set_BoxSizing", NULL, (void*)Element__set_BoxSizing_fn, 0, false, uVoid_typeof(), 1, Element__BoxSizingMode_typeof()),
        new uFunction("get_CachingMode", NULL, (void*)Element__get_CachingMode_fn, 0, false, ::g::Fuse::Elements::CachingMode_typeof(), 0),
        new uFunction("set_CachingMode", NULL, (void*)Element__set_CachingMode_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Elements::CachingMode_typeof()),
        new uFunction("CaptureRegion", NULL, (void*)Element__CaptureRegion_fn, 0, false, ::g::Uno::Graphics::Framebuffer_typeof(), 3, ::g::Fuse::DrawContext_typeof(), ::g::Uno::Rect_typeof(), ::g::Uno::Float2_typeof()),
        new uFunction("get_ClipToBounds", NULL, (void*)Element__get_ClipToBounds_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("set_ClipToBounds", NULL, (void*)Element__set_ClipToBounds_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Bool_typeof()),
        new uFunction("get_ExplicitTransformOrigin", NULL, (void*)Element__get_ExplicitTransformOrigin_fn, 0, false, ::g::Uno::UX::Size2_typeof(), 0),
        new uFunction("set_ExplicitTransformOrigin", NULL, (void*)Element__set_ExplicitTransformOrigin_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::UX::Size2_typeof()),
        new uFunction("GetVisibleViewportInvertPixelRect", NULL, (void*)Element__GetVisibleViewportInvertPixelRect_fn, 0, false, ::g::Uno::Recti_typeof(), 2, ::g::Fuse::DrawContext_typeof(), ::g::Fuse::VisualBounds_typeof()),
        new uFunction("get_Height", NULL, (void*)Element__get_Height_fn, 0, false, ::g::Uno::UX::Size_typeof(), 0),
        new uFunction("set_Height", NULL, (void*)Element__set_Height_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::UX::Size_typeof()),
        new uFunction("get_HitTestMode", NULL, (void*)Element__get_HitTestMode_fn, 0, false, ::g::Fuse::Elements::HitTestMode_typeof(), 0),
        new uFunction("set_HitTestMode", NULL, (void*)Element__set_HitTestMode_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Elements::HitTestMode_typeof()),
        new uFunction("InvalidateRenderBoundsWithEffects", NULL, (void*)Element__InvalidateRenderBoundsWithEffects_fn, 0, false, uVoid_typeof(), 0),
        new uFunction("IsPointInside", NULL, (void*)Element__IsPointInside_fn, 0, false, ::g::Uno::Bool_typeof(), 1, ::g::Uno::Float2_typeof()),
        new uFunction("get_LimitHeight", NULL, (void*)Element__get_LimitHeight_fn, 0, false, ::g::Uno::UX::Size_typeof(), 0),
        new uFunction("set_LimitHeight", NULL, (void*)Element__set_LimitHeight_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::UX::Size_typeof()),
        new uFunction("get_LimitWidth", NULL, (void*)Element__get_LimitWidth_fn, 0, false, ::g::Uno::UX::Size_typeof(), 0),
        new uFunction("set_LimitWidth", NULL, (void*)Element__set_LimitWidth_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::UX::Size_typeof()),
        new uFunction("get_Margin", NULL, (void*)Element__get_Margin_fn, 0, false, ::g::Uno::Float4_typeof(), 0),
        new uFunction("set_Margin", NULL, (void*)Element__set_Margin_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float4_typeof()),
        new uFunction("get_MaxHeight", NULL, (void*)Element__get_MaxHeight_fn, 0, false, ::g::Uno::UX::Size_typeof(), 0),
        new uFunction("set_MaxHeight", NULL, (void*)Element__set_MaxHeight_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::UX::Size_typeof()),
        new uFunction("get_MaxWidth", NULL, (void*)Element__get_MaxWidth_fn, 0, false, ::g::Uno::UX::Size_typeof(), 0),
        new uFunction("set_MaxWidth", NULL, (void*)Element__set_MaxWidth_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::UX::Size_typeof()),
        new uFunction("get_MinHeight", NULL, (void*)Element__get_MinHeight_fn, 0, false, ::g::Uno::UX::Size_typeof(), 0),
        new uFunction("set_MinHeight", NULL, (void*)Element__set_MinHeight_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::UX::Size_typeof()),
        new uFunction("get_MinWidth", NULL, (void*)Element__get_MinWidth_fn, 0, false, ::g::Uno::UX::Size_typeof(), 0),
        new uFunction("set_MinWidth", NULL, (void*)Element__set_MinWidth_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::UX::Size_typeof()),
        new uFunction("get_Offset", NULL, (void*)Element__get_Offset_fn, 0, false, ::g::Uno::UX::Size2_typeof(), 0),
        new uFunction("set_Offset", NULL, (void*)Element__set_Offset_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::UX::Size2_typeof()),
        new uFunction("get_Opacity", NULL, (void*)Element__get_Opacity_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("set_Opacity", NULL, (void*)Element__set_Opacity_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("get_Padding", NULL, (void*)Element__get_Padding_fn, 0, false, ::g::Uno::Float4_typeof(), 0),
        new uFunction("set_Padding", NULL, (void*)Element__set_Padding_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float4_typeof()),
        new uFunction("add_Placed", NULL, (void*)Element__add_Placed_fn, 0, false, uVoid_typeof(), 1, ::TYPES[0/*Fuse.PlacedHandler*/]),
        new uFunction("remove_Placed", NULL, (void*)Element__remove_Placed_fn, 0, false, uVoid_typeof(), 1, ::TYPES[0/*Fuse.PlacedHandler*/]),
        new uFunction("add_Preplacement", NULL, (void*)Element__add_Preplacement_fn, 0, false, uVoid_typeof(), 1, ::TYPES[39/*Fuse.Elements.PreplacementHandler*/]),
        new uFunction("remove_Preplacement", NULL, (void*)Element__remove_Preplacement_fn, 0, false, uVoid_typeof(), 1, ::TYPES[39/*Fuse.Elements.PreplacementHandler*/]),
        new uFunction("get_RenderBoundsWithEffects", NULL, (void*)Element__get_RenderBoundsWithEffects_fn, 0, false, ::g::Fuse::VisualBounds_typeof(), 0),
        new uFunction("get_RenderBoundsWithoutEffects", NULL, (void*)Element__get_RenderBoundsWithoutEffects_fn, 0, false, ::g::Fuse::VisualBounds_typeof(), 0),
        new uFunction("SetExplicitTransformOrigin", NULL, (void*)Element__SetExplicitTransformOrigin_fn, 0, false, uVoid_typeof(), 2, ::g::Uno::UX::Size2_typeof(), ::g::Uno::UX::IPropertyListener_typeof()),
        new uFunction("SetHitTestMode", NULL, (void*)Element__SetHitTestMode_fn, 0, false, uVoid_typeof(), 2, ::g::Fuse::Elements::HitTestMode_typeof(), ::g::Uno::UX::IPropertyListener_typeof()),
        new uFunction("SetOpacity", NULL, (void*)Element__SetOpacity_fn, 0, false, uVoid_typeof(), 2, ::g::Uno::Float_typeof(), ::g::Uno::UX::IPropertyListener_typeof()),
        new uFunction("SetVisibility", NULL, (void*)Element__SetVisibility_fn, 0, false, uVoid_typeof(), 2, ::g::Fuse::Elements::Visibility_typeof(), ::g::Uno::UX::IPropertyListener_typeof()),
        new uFunction("get_TransformOrigin", NULL, (void*)Element__get_TransformOrigin_fn, 0, false, ::TYPES[18/*Fuse.Elements.ITransformOrigin*/], 0),
        new uFunction("set_TransformOrigin", NULL, (void*)Element__set_TransformOrigin_fn, 0, false, uVoid_typeof(), 1, ::TYPES[18/*Fuse.Elements.ITransformOrigin*/]),
        new uFunction("get_TreeRenderer", NULL, NULL, offsetof(Element_type, fp_get_TreeRenderer), false, ::TYPES[14/*Fuse.Elements.ITreeRenderer*/], 0),
        new uFunction("get_Visibility", NULL, (void*)Element__get_Visibility_fn, 0, false, ::g::Fuse::Elements::Visibility_typeof(), 0),
        new uFunction("set_Visibility", NULL, (void*)Element__set_Visibility_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Elements::Visibility_typeof()),
        new uFunction("get_Width", NULL, (void*)Element__get_Width_fn, 0, false, ::g::Uno::UX::Size_typeof(), 0),
        new uFunction("set_Width", NULL, (void*)Element__set_Width_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::UX::Size_typeof()),
        new uFunction("get_X", NULL, (void*)Element__get_X_fn, 0, false, ::g::Uno::UX::Size_typeof(), 0),
        new uFunction("set_X", NULL, (void*)Element__set_X_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::UX::Size_typeof()),
        new uFunction("get_Y", NULL, (void*)Element__get_Y_fn, 0, false, ::g::Uno::UX::Size_typeof(), 0),
        new uFunction("set_Y", NULL, (void*)Element__set_Y_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::UX::Size_typeof()));
}

Element_type* Element_typeof()
{
    static uSStrong<Element_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Visual_typeof();
    options.FieldCount = 96;
    options.InterfaceCount = 15;
    options.ObjectSize = sizeof(Element);
    options.TypeSize = sizeof(Element_type);
    type = (Element_type*)uClassType::New("Fuse.Elements.Element", options);
    type->fp_build_ = Element_build;
    type->fp_cctor_ = Element__cctor_2_fn;
    type->fp_get_AbsoluteViewportOrigin = (void(*)(::g::Fuse::Visual*, ::g::Uno::Float2*))Element__get_AbsoluteViewportOrigin_fn;
    type->fp_ArrangePaddingBox = Element__ArrangePaddingBox_fn;
    type->fp_CalcRenderBounds = Element__CalcRenderBounds_fn;
    type->fp_get_CanAdjustMarginBox = (void(*)(::g::Fuse::Visual*, bool*))Element__get_CanAdjustMarginBox_fn;
    type->fp_Draw = (void(*)(::g::Fuse::Visual*, ::g::Fuse::DrawContext*))Element__Draw_fn;
    type->fp_DrawSelection = (void(*)(::g::Fuse::Visual*, ::g::Fuse::DrawContext*))Element__DrawSelection_fn;
    type->fp_DrawWithChildren = Element__DrawWithChildren_fn;
    type->fp_FastTrackDrawWithOpacity = Element__FastTrackDrawWithOpacity_fn;
    type->fp_GetContentSize = Element__GetContentSize_fn;
    type->fp_GetMarginSize = (void(*)(::g::Fuse::Visual*, ::g::Fuse::LayoutParams*, ::g::Uno::Float2*))Element__GetMarginSize_fn;
    type->fp_get_HitTestChildrenBounds = (void(*)(::g::Fuse::Visual*, ::g::Fuse::VisualBounds**))Element__get_HitTestChildrenBounds_fn;
    type->fp_get_HitTestLocalBounds = (void(*)(::g::Fuse::Visual*, ::g::Fuse::VisualBounds**))Element__get_HitTestLocalBounds_fn;
    type->fp_get_HitTestLocalVisualBounds = Element__get_HitTestLocalVisualBounds_fn;
    type->fp_InvalidateLocalTransform = (void(*)(::g::Fuse::Visual*))Element__InvalidateLocalTransform_fn;
    type->fp_get_IsLocalVisible = (void(*)(::g::Fuse::Visual*, bool*))Element__get_IsLocalVisible_fn;
    type->fp_IsMarginBoxDependent = (void(*)(::g::Fuse::Visual*, ::g::Fuse::Visual*, int*))Element__IsMarginBoxDependent_fn;
    type->fp_get_LocalBounds = (void(*)(::g::Fuse::Visual*, ::g::Uno::Geometry::Box*))Element__get_LocalBounds_fn;
    type->fp_get_LocalRenderBounds = (void(*)(::g::Fuse::Visual*, ::g::Fuse::VisualBounds**))Element__get_LocalRenderBounds_fn;
    type->fp_OnAdjustMarginBoxPosition = (void(*)(::g::Fuse::Visual*, ::g::Uno::Float2*))Element__OnAdjustMarginBoxPosition_fn;
    type->fp_OnArrangeMarginBox = (void(*)(::g::Fuse::Visual*, ::g::Uno::Float2*, ::g::Fuse::LayoutParams*, ::g::Uno::Float2*))Element__OnArrangeMarginBox_fn;
    type->fp_OnChildAdded = (void(*)(::g::Fuse::Visual*, ::g::Fuse::Node*))Element__OnChildAdded_fn;
    type->fp_OnChildRemoved = (void(*)(::g::Fuse::Visual*, ::g::Fuse::Node*))Element__OnChildRemoved_fn;
    type->fp_OnDraw = Element__OnDraw_fn;
    type->fp_OnHitTest = (void(*)(::g::Fuse::Visual*, ::g::Fuse::HitTestContext*))Element__OnHitTest_fn;
    type->fp_OnHitTestLocalVisual = Element__OnHitTestLocalVisual_fn;
    type->fp_OnInvalidateLayout = (void(*)(::g::Fuse::Visual*))Element__OnInvalidateLayout_fn;
    type->fp_OnInvalidateRenderBounds = (void(*)(::g::Fuse::Visual*, bool*))Element__OnInvalidateRenderBounds_fn;
    type->fp_OnInvalidateVisual = (void(*)(::g::Fuse::Visual*))Element__OnInvalidateVisual_fn;
    type->fp_OnInvalidateVisualComposition = (void(*)(::g::Fuse::Visual*))Element__OnInvalidateVisualComposition_fn;
    type->fp_OnIsContextEnabledChanged = (void(*)(::g::Fuse::Visual*))Element__OnIsContextEnabledChanged_fn;
    type->fp_OnIsVisibleChanged = (void(*)(::g::Fuse::Visual*))Element__OnIsVisibleChanged_fn;
    type->fp_OnPreserveRootFrame = (void(*)(::g::Fuse::Node*))Element__OnPreserveRootFrame_fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Node*))Element__OnRooted_fn;
    type->fp_OnRootedPreChildren = (void(*)(::g::Fuse::Visual*))Element__OnRootedPreChildren_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Node*))Element__OnUnrooted_fn;
    type->fp_OnZOrderInvalidated = (void(*)(::g::Fuse::Visual*))Element__OnZOrderInvalidated_fn;
    type->fp_PrependImplicitTransform = (void(*)(::g::Fuse::Visual*, ::g::Fuse::FastMatrix*))Element__PrependImplicitTransform_fn;
    type->fp_PrependInverseTransformOrigin = (void(*)(::g::Fuse::Visual*, ::g::Fuse::FastMatrix*))Element__PrependInverseTransformOrigin_fn;
    type->fp_PrependTransformOrigin = (void(*)(::g::Fuse::Visual*, ::g::Fuse::FastMatrix*))Element__PrependTransformOrigin_fn;
    type->fp_get_TreeRenderer = Element__get_TreeRenderer_fn;
    type->interface10.fp_Show = (void(*)(uObject*))Element__FuseTriggersActionsIShowShow_fn;
    type->interface12.fp_Collapse = (void(*)(uObject*))Element__FuseTriggersActionsICollapseCollapse_fn;
    type->interface11.fp_Hide = (void(*)(uObject*))Element__FuseTriggersActionsIHideHide_fn;
    type->interface14.fp_SetSize = (void(*)(uObject*, ::g::Uno::Float2*))Element__FuseAnimationsIResizeSetSize_fn;
    type->interface13.fp_get_ActualSize = (void(*)(uObject*, ::g::Uno::Float3*))Element__FuseIActualPlacementget_ActualSize_fn;
    type->interface13.fp_get_ActualPosition = (void(*)(uObject*, ::g::Uno::Float3*))Element__FuseIActualPlacementget_ActualPosition_fn;
    type->interface13.fp_add_Placed = (void(*)(uObject*, uDelegate*))Element__add_Placed_fn;
    type->interface13.fp_remove_Placed = (void(*)(uObject*, uDelegate*))Element__remove_Placed_fn;
    type->interface8.fp_Clear = (void(*)(uObject*))::g::Fuse::Visual__UnoCollectionsICollectionFuseNodeClear_fn;
    type->interface8.fp_Contains = (void(*)(uObject*, void*, bool*))::g::Fuse::Visual__UnoCollectionsICollectionFuseNodeContains_fn;
    type->interface6.fp_RemoveAt = (void(*)(uObject*, int*))::g::Fuse::Visual__UnoCollectionsIListFuseNodeRemoveAt_fn;
    type->interface9.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Visual__UnoCollectionsIEnumerableFuseNodeGetEnumerator_fn;
    type->interface8.fp_get_Count = (void(*)(uObject*, int*))::g::Fuse::Visual__UnoCollectionsICollectionFuseNodeget_Count_fn;
    type->interface6.fp_get_Item = (void(*)(uObject*, int*, uTRef))::g::Fuse::Visual__UnoCollectionsIListFuseNodeget_Item_fn;
    type->interface6.fp_Insert = (void(*)(uObject*, int*, void*))::g::Fuse::Visual__Insert1_fn;
    type->interface7.fp_OnPropertyChanged = (void(*)(uObject*, ::g::Uno::UX::PropertyObject*, ::g::Uno::UX::Selector*))::g::Fuse::Visual__OnPropertyChanged2_fn;
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

// protected generated Element() :104
void Element__ctor_3_fn(Element* __this)
{
    __this->ctor_3();
}

// protected override sealed float2 get_AbsoluteViewportOrigin() :1820
void Element__get_AbsoluteViewportOrigin_fn(Element* __this, ::g::Uno::Float2* __retval)
{
    uStackFrame __("Fuse.Elements.Element", "get_AbsoluteViewportOrigin()");
    ::g::Uno::Float2 ret26;
    ::g::Uno::Float2 p = __this->ActualPosition();
    p = ::g::Uno::Float2__op_Addition2(p, (::g::Fuse::Visual__get_AbsoluteViewportOrigin_fn(__this, &ret26), ret26));
    return *__retval = p, void();
}

// public float2 get_ActualAnchor() :2034
void Element__get_ActualAnchor_fn(Element* __this, ::g::Uno::Float2* __retval)
{
    *__retval = __this->ActualAnchor();
}

// internal void set_ActualAnchor(float2 value) :2035
void Element__set_ActualAnchor_fn(Element* __this, ::g::Uno::Float2* value)
{
    __this->ActualAnchor(*value);
}

// public float2 get_ActualPosition() :1838
void Element__get_ActualPosition_fn(Element* __this, ::g::Uno::Float2* __retval)
{
    *__retval = __this->ActualPosition();
}

// public float2 get_ActualSize() :1872
void Element__get_ActualSize_fn(Element* __this, ::g::Uno::Float2* __retval)
{
    *__retval = __this->ActualSize();
}

// public Fuse.Elements.Alignment get_Alignment() :1565
void Element__get_Alignment_fn(Element* __this, int* __retval)
{
    *__retval = __this->Alignment();
}

// public void set_Alignment(Fuse.Elements.Alignment value) :1566
void Element__set_Alignment_fn(Element* __this, int* value)
{
    __this->Alignment(*value);
}

// private Fuse.Elements.Element get_AncestorElement() :2346
void Element__get_AncestorElement_fn(Element* __this, Element** __retval)
{
    *__retval = __this->AncestorElement();
}

// public Uno.UX.Size2 get_Anchor() :1716
void Element__get_Anchor_fn(Element* __this, ::g::Uno::UX::Size2* __retval)
{
    *__retval = __this->Anchor();
}

// public void set_Anchor(Uno.UX.Size2 value) :1717
void Element__set_Anchor_fn(Element* __this, ::g::Uno::UX::Size2* value)
{
    __this->Anchor(*value);
}

// protected virtual void ArrangePaddingBox(Fuse.LayoutParams lp) :2203
void Element__ArrangePaddingBox_fn(Element* __this, ::g::Fuse::LayoutParams* lp)
{
}

// public float get_Aspect() :117
void Element__get_Aspect_fn(Element* __this, float* __retval)
{
    *__retval = __this->Aspect();
}

// public void set_Aspect(float value) :118
void Element__set_Aspect_fn(Element* __this, float* value)
{
    __this->Aspect(*value);
}

// public Fuse.Elements.AspectConstraint get_AspectConstraint() :137
void Element__get_AspectConstraint_fn(Element* __this, int* __retval)
{
    *__retval = __this->AspectConstraint();
}

// public void set_AspectConstraint(Fuse.Elements.AspectConstraint value) :138
void Element__set_AspectConstraint_fn(Element* __this, int* value)
{
    __this->AspectConstraint(*value);
}

// public Fuse.Elements.Element.BoxSizingMode get_BoxSizing() :1957
void Element__get_BoxSizing_fn(Element* __this, int* __retval)
{
    *__retval = __this->BoxSizing();
}

// public void set_BoxSizing(Fuse.Elements.Element.BoxSizingMode value) :1958
void Element__set_BoxSizing_fn(Element* __this, int* value)
{
    __this->BoxSizing(*value);
}

// internal Fuse.Elements.BoxSizing get_BoxSizingObject() :1979
void Element__get_BoxSizingObject_fn(Element* __this, ::g::Fuse::Elements::BoxSizing** __retval)
{
    *__retval = __this->BoxSizingObject();
}

// private Fuse.Elements.Cache get_Cache() :1023
void Element__get_Cache_fn(Element* __this, ::g::Fuse::Elements::Cache** __retval)
{
    *__retval = __this->Cache();
}

// public Fuse.Elements.CachingMode get_CachingMode() :846
void Element__get_CachingMode_fn(Element* __this, int* __retval)
{
    *__retval = __this->CachingMode();
}

// public void set_CachingMode(Fuse.Elements.CachingMode value) :847
void Element__set_CachingMode_fn(Element* __this, int* value)
{
    __this->CachingMode(*value);
}

// protected virtual Fuse.VisualBounds CalcRenderBounds() :730
void Element__CalcRenderBounds_fn(Element* __this, ::g::Fuse::VisualBounds** __retval)
{
    uStackFrame __("Fuse.Elements.Element", "CalcRenderBounds()");
    ::g::Fuse::Visual* ret14;
    ::g::Fuse::VisualBounds* r = ::g::Fuse::VisualBounds::Empty();

    if (__this->HasVisualChildren())

        for (int i = 0; i < uPtr(__this->ZOrder())->Count(); i++)
            r = uPtr(r)->Merge(uPtr((::g::Uno::Collections::List__get_Item_fn(uPtr(__this->ZOrder()), uCRef<int>(i), &ret14), ret14))->CalcRenderBoundsInParentSpace(), NULL);

    return *__retval = r, void();
}

// protected Fuse.VisualBounds CalcRenderBoundsWithEffects() :678
void Element__CalcRenderBoundsWithEffects_fn(Element* __this, ::g::Fuse::VisualBounds** __retval)
{
    *__retval = __this->CalcRenderBoundsWithEffects();
}

// internal override sealed bool get_CanAdjustMarginBox() :2104
void Element__get_CanAdjustMarginBox_fn(Element* __this, bool* __retval)
{
    return *__retval = true, void();
}

// public framebuffer CaptureRegion(Fuse.DrawContext dc, Uno.Rect region, float2 padding) :857
void Element__CaptureRegion_fn(Element* __this, ::g::Fuse::DrawContext* dc, ::g::Uno::Rect* region, ::g::Uno::Float2* padding, ::g::Uno::Graphics::Framebuffer** __retval)
{
    *__retval = __this->CaptureRegion(dc, *region, *padding);
}

// private void CleanupBatching() :645
void Element__CleanupBatching_fn(Element* __this)
{
    __this->CleanupBatching();
}

// public bool get_ClipToBounds() :1767
void Element__get_ClipToBounds_fn(Element* __this, bool* __retval)
{
    *__retval = __this->ClipToBounds();
}

// public void set_ClipToBounds(bool value) :1768
void Element__set_ClipToBounds_fn(Element* __this, bool* value)
{
    __this->ClipToBounds(*value);
}

// private void Composit(Fuse.DrawContext dc) :1029
void Element__Composit_fn(Element* __this, ::g::Fuse::DrawContext* dc)
{
    __this->Composit(dc);
}

// internal void CompositEffects(Fuse.DrawContext dc) :1069
void Element__CompositEffects_fn(Element* __this, ::g::Fuse::DrawContext* dc)
{
    __this->CompositEffects(dc);
}

// private void DispatchPlacement() :2175
void Element__DispatchPlacement_fn(Element* __this)
{
    __this->DispatchPlacement();
}

// public override void Draw(Fuse.DrawContext dc) :887
void Element__Draw_fn(Element* __this, ::g::Fuse::DrawContext* dc)
{
    uStackFrame __("Fuse.Elements.Element", "Draw(Fuse.DrawContext)");

    if (!__this->IsRootingCompleted())
        ::g::Fuse::Diagnostics::InternalError(::STRINGS[11/*"Draw called...*/], __this, ::STRINGS[7/*"/Users/medb...*/], 890, ::STRINGS[12/*"Draw"*/]);

    if (__this->Visibility() != 0)
        return;

    double t;
    ::g::Uno::Recti visibleRect = __this->GetVisibleViewportInvertPixelRect(dc, __this->RenderBoundsWithEffects());

    if ((visibleRect.Size().X == 0) || (visibleRect.Size().Y == 0))
        return;

    if (__this->NeedsClipping())
    {
        uPtr(dc)->PushScissor(visibleRect);
        __this->Composit(dc);
        dc->PopScissor();
    }
    else
        __this->Composit(dc);
}

// protected void DrawNonUnderlayChildren(Fuse.DrawContext dc) :612
void Element__DrawNonUnderlayChildren_fn(Element* __this, ::g::Fuse::DrawContext* dc)
{
    __this->DrawNonUnderlayChildren(dc);
}

// public override sealed void DrawSelection(Fuse.DrawContext dc) :926
void Element__DrawSelection_fn(Element* __this, ::g::Fuse::DrawContext* dc)
{
    uStackFrame __("Fuse.Elements.Element", "DrawSelection(Fuse.DrawContext)");
    __this->DrawLocalSelectionRect(dc, ::g::Uno::Rect__New2(::g::Uno::Float2__New2(0.0f, 0.0f), __this->ActualSize()));
}

// protected void DrawUnderlayChildren(Fuse.DrawContext dc) :606
void Element__DrawUnderlayChildren_fn(Element* __this, ::g::Fuse::DrawContext* dc)
{
    __this->DrawUnderlayChildren(dc);
}

// protected virtual void DrawWithChildren(Fuse.DrawContext dc) :654
void Element__DrawWithChildren_fn(Element* __this, ::g::Fuse::DrawContext* dc)
{
    uStackFrame __("Fuse.Elements.Element", "DrawWithChildren(Fuse.DrawContext)");
    __this->DrawUnderlayChildren(dc);
    __this->OnDraw(dc);
    __this->DrawNonUnderlayChildren(dc);
}

// private Uno.Collections.IList<Fuse.Effects.Effect> get_Effects() :949
void Element__get_Effects_fn(Element* __this, uObject** __retval)
{
    *__retval = __this->Effects();
}

// internal generated Fuse.Elements.ElementBatchEntry get_ElementBatchEntry() :1026
void Element__get_ElementBatchEntry_fn(Element* __this, ::g::Fuse::Elements::ElementBatchEntry** __retval)
{
    *__retval = __this->ElementBatchEntry();
}

// internal generated void set_ElementBatchEntry(Fuse.Elements.ElementBatchEntry value) :1026
void Element__set_ElementBatchEntry_fn(Element* __this, ::g::Fuse::Elements::ElementBatchEntry* value)
{
    __this->ElementBatchEntry(value);
}

// public Uno.UX.Size2 get_ExplicitTransformOrigin() :2521
void Element__get_ExplicitTransformOrigin_fn(Element* __this, ::g::Uno::UX::Size2* __retval)
{
    *__retval = __this->ExplicitTransformOrigin();
}

// public void set_ExplicitTransformOrigin(Uno.UX.Size2 value) :2528
void Element__set_ExplicitTransformOrigin_fn(Element* __this, ::g::Uno::UX::Size2* value)
{
    __this->ExplicitTransformOrigin(*value);
}

// protected virtual bool FastTrackDrawWithOpacity(Fuse.DrawContext dc) :1064
void Element__FastTrackDrawWithOpacity_fn(Element* __this, ::g::Fuse::DrawContext* dc, bool* __retval)
{
    return *__retval = false, void();
}

// private void Fuse.Animations.IResize.SetSize(float2 size) :2255
void Element__FuseAnimationsIResizeSetSize_fn(Element* __this, ::g::Uno::Float2* size)
{
    uStackFrame __("Fuse.Elements.Element", "Fuse.Animations.IResize.SetSize(float2)");
    ::g::Uno::Float2 size_ = *size;
    __this->_actualSize = size_;
    __this->InternArrangePaddingBox(::g::Fuse::LayoutParams__CreateTemporary(size_));
    __this->InvalidateVisual();
    __this->InvalidateRenderBounds();
    __this->InvalidateLocalTransform();
}

// private float3 Fuse.IActualPlacement.get_ActualPosition() :1886
void Element__FuseIActualPlacementget_ActualPosition_fn(Element* __this, ::g::Uno::Float3* __retval)
{
    uStackFrame __("Fuse.Elements.Element", "Fuse.IActualPlacement.get_ActualPosition()");
    return *__retval = ::g::Uno::Float3__New4(__this->ActualPosition(), 0.0f), void();
}

// private float3 Fuse.IActualPlacement.get_ActualSize() :1885
void Element__FuseIActualPlacementget_ActualSize_fn(Element* __this, ::g::Uno::Float3* __retval)
{
    return *__retval = ::g::Uno::Float3__New4(__this->ActualSize(), 0.0f), void();
}

// private void Fuse.Triggers.Actions.ICollapse.Collapse() :550
void Element__FuseTriggersActionsICollapseCollapse_fn(Element* __this)
{
    uStackFrame __("Fuse.Elements.Element", "Fuse.Triggers.Actions.ICollapse.Collapse()");
    __this->Visibility(1);
}

// private void Fuse.Triggers.Actions.IHide.Hide() :551
void Element__FuseTriggersActionsIHideHide_fn(Element* __this)
{
    uStackFrame __("Fuse.Elements.Element", "Fuse.Triggers.Actions.IHide.Hide()");
    __this->Visibility(2);
}

// private void Fuse.Triggers.Actions.IShow.Show() :549
void Element__FuseTriggersActionsIShowShow_fn(Element* __this)
{
    uStackFrame __("Fuse.Elements.Element", "Fuse.Triggers.Actions.IShow.Show()");
    __this->Visibility(0);
}

// protected internal float2 GetArrangePaddingSize(Fuse.LayoutParams lp) :2019
void Element__GetArrangePaddingSize_fn(Element* __this, ::g::Fuse::LayoutParams* lp, ::g::Uno::Float2* __retval)
{
    *__retval = __this->GetArrangePaddingSize(*lp);
}

// protected virtual float2 GetContentSize(Fuse.LayoutParams lp) :2014
void Element__GetContentSize_fn(Element* __this, ::g::Fuse::LayoutParams* lp, ::g::Uno::Float2* __retval)
{
    return *__retval = ::g::Uno::Float2__New1(0.0f), void();
}

// internal float2 GetLayoutPositionIn(Fuse.Visual target) :2226
void Element__GetLayoutPositionIn_fn(Element* __this, ::g::Fuse::Visual* target, ::g::Uno::Float2* __retval)
{
    *__retval = __this->GetLayoutPositionIn(target);
}

// public override sealed float2 GetMarginSize(Fuse.LayoutParams lp) :1988
void Element__GetMarginSize_fn(Element* __this, ::g::Fuse::LayoutParams* lp, ::g::Uno::Float2* __retval)
{
    uStackFrame __("Fuse.Elements.Element", "GetMarginSize(Fuse.LayoutParams)");
    Element__GMSCacheItem collection6;
    ::g::Fuse::LayoutParams lp_ = *lp;

    for (int i = 0; i < __this->_gmsCount; ++i)
    {
        Element__GMSCacheItem g = uPtr(__this->_gmsCache)->Item<Element__GMSCacheItem>(i);

        if (g.layoutParams.IsCompatible(lp_))
            return *__retval = g.result, void();
    }

    ::g::Uno::Float2 sz = uPtr(__this->_boxSizing)->CalcMarginSize(__this, lp_);
    int n = (__this->_gmsAt++) % 2;
    __this->_gmsCount = ::g::Uno::Math::Min8(2, __this->_gmsCount + 1);
    uPtr(__this->_gmsCache)->Item<Element__GMSCacheItem>(n) = (collection6 = uDefault<Element__GMSCacheItem>(), collection6.layoutParams = lp_.CloneAndDerive(), collection6.result = sz, collection6);
    return *__retval = sz, void();
}

// internal Uno.Recti GetViewportInvertPixelRect(Fuse.DrawContext dc, Uno.Rect localRegion) :748
void Element__GetViewportInvertPixelRect_fn(Element* __this, ::g::Fuse::DrawContext* dc, ::g::Uno::Rect* localRegion, ::g::Uno::Recti* __retval)
{
    *__retval = __this->GetViewportInvertPixelRect(dc, *localRegion);
}

// public Uno.Recti GetVisibleViewportInvertPixelRect(Fuse.DrawContext dc, Fuse.VisualBounds localRegion) :764
void Element__GetVisibleViewportInvertPixelRect_fn(Element* __this, ::g::Fuse::DrawContext* dc, ::g::Fuse::VisualBounds* localRegion, ::g::Uno::Recti* __retval)
{
    *__retval = __this->GetVisibleViewportInvertPixelRect(dc, localRegion);
}

// private void GMSReset() :1928
void Element__GMSReset_fn(Element* __this)
{
    __this->GMSReset();
}

// private bool get_HasActiveEffects() :965
void Element__get_HasActiveEffects_fn(Element* __this, bool* __retval)
{
    *__retval = __this->HasActiveEffects();
}

// private bool get_HasCompositionEffect() :985
void Element__get_HasCompositionEffect_fn(Element* __this, bool* __retval)
{
    *__retval = __this->HasCompositionEffect();
}

// private bool get_HasEffects() :959
void Element__get_HasEffects_fn(Element* __this, bool* __retval)
{
    *__retval = __this->HasEffects();
}

// internal bool HasLayoutIn(Fuse.Visual target) :2210
void Element__HasLayoutIn_fn(Element* __this, ::g::Fuse::Visual* target, bool* __retval)
{
    *__retval = __this->HasLayoutIn(target);
}

// public Uno.UX.Size get_Height() :1461
void Element__get_Height_fn(Element* __this, ::g::Uno::UX::Size* __retval)
{
    *__retval = __this->Height();
}

// public void set_Height(Uno.UX.Size value) :1462
void Element__set_Height_fn(Element* __this, ::g::Uno::UX::Size* value)
{
    __this->Height(*value);
}

// protected override Fuse.VisualBounds get_HitTestChildrenBounds() :1407
void Element__get_HitTestChildrenBounds_fn(Element* __this, ::g::Fuse::VisualBounds** __retval)
{
    uStackFrame __("Fuse.Elements.Element", "get_HitTestChildrenBounds()");
    ::g::Fuse::VisualBounds* ret32;

    if ((__this->HitTestMode() & 4) == 4)
        return *__retval = (::g::Fuse::Visual__get_HitTestChildrenBounds_fn(__this, &ret32), ret32), void();

    return *__retval = ::g::Fuse::VisualBounds::Empty(), void();
}

// protected override sealed Fuse.VisualBounds get_HitTestLocalBounds() :1385
void Element__get_HitTestLocalBounds_fn(Element* __this, ::g::Fuse::VisualBounds** __retval)
{
    uStackFrame __("Fuse.Elements.Element", "get_HitTestLocalBounds()");
    ::g::Fuse::VisualBounds* n = ::g::Fuse::VisualBounds::Empty();

    if ((__this->HitTestMode() & 2) == 2)
        n = uPtr(n)->AddRect(::g::Uno::Float2__New1(0.0f), __this->ActualSize());

    if ((__this->HitTestMode() & 1) == 1)
        n = uPtr(n)->Merge(__this->HitTestLocalVisualBounds(), NULL);

    return *__retval = n, void();
}

// protected virtual Fuse.VisualBounds get_HitTestLocalVisualBounds() :1399
void Element__get_HitTestLocalVisualBounds_fn(Element* __this, ::g::Fuse::VisualBounds** __retval)
{
    return *__retval = ::g::Fuse::VisualBounds::Empty(), void();
}

// public Fuse.Elements.HitTestMode get_HitTestMode() :1340
void Element__get_HitTestMode_fn(Element* __this, int* __retval)
{
    *__retval = __this->HitTestMode();
}

// public void set_HitTestMode(Fuse.Elements.HitTestMode value) :1341
void Element__set_HitTestMode_fn(Element* __this, int* value)
{
    __this->HitTestMode(*value);
}

// internal float2 get_IntendedPosition() :1882
void Element__get_IntendedPosition_fn(Element* __this, ::g::Uno::Float2* __retval)
{
    *__retval = __this->IntendedPosition();
}

// internal float2 get_IntendedSize() :1877
void Element__get_IntendedSize_fn(Element* __this, ::g::Uno::Float2* __retval)
{
    *__retval = __this->IntendedSize();
}

// internal void InternArrangePaddingBox(Fuse.LayoutParams lp) :2195
void Element__InternArrangePaddingBox_fn(Element* __this, ::g::Fuse::LayoutParams* lp)
{
    __this->InternArrangePaddingBox(*lp);
}

// internal float2 InternGetContentSize(Fuse.LayoutParams lp) :2009
void Element__InternGetContentSize_fn(Element* __this, ::g::Fuse::LayoutParams* lp, ::g::Uno::Float2* __retval)
{
    *__retval = __this->InternGetContentSize(*lp);
}

// protected override sealed void InvalidateLocalTransform() :2587
void Element__InvalidateLocalTransform_fn(Element* __this)
{
    uStackFrame __("Fuse.Elements.Element", "InvalidateLocalTransform()");
    __this->InvalidateVisualComposition();
    Element* p = __this->AncestorElement();

    if (p != NULL)
        uPtr(p)->InvalidateRenderBounds();

    if (__this->ElementBatchEntry() != NULL)
        uPtr(__this->ElementBatchEntry())->InvalidateTransform();

    ::g::Fuse::Visual__InvalidateLocalTransform_fn(__this);
    __this->NotifyTreeRendererTransformChanged();
}

// public void InvalidateRenderBoundsWithEffects() :2667
void Element__InvalidateRenderBoundsWithEffects_fn(Element* __this)
{
    __this->InvalidateRenderBoundsWithEffects();
}

// public override sealed bool get_IsLocalVisible() :2306
void Element__get_IsLocalVisible_fn(Element* __this, bool* __retval)
{
    return *__retval = __this->Visibility() == 0, void();
}

// protected override Fuse.LayoutDependent IsMarginBoxDependent(Fuse.Visual child) :2638
void Element__IsMarginBoxDependent_fn(Element* __this, ::g::Fuse::Visual* child, int* __retval)
{
    uStackFrame __("Fuse.Elements.Element", "IsMarginBoxDependent(Fuse.Visual)");
    return *__retval = uPtr(__this->_boxSizing)->IsContentRelativeSize(__this), void();
}

// public bool IsPointInside(float2 localPoint) :1327
void Element__IsPointInside_fn(Element* __this, ::g::Uno::Float2* localPoint, bool* __retval)
{
    *__retval = __this->IsPointInside(*localPoint);
}

// public Uno.UX.Size get_LimitHeight() :3443
void Element__get_LimitHeight_fn(Element* __this, ::g::Uno::UX::Size* __retval)
{
    *__retval = __this->LimitHeight();
}

// public void set_LimitHeight(Uno.UX.Size value) :3444
void Element__set_LimitHeight_fn(Element* __this, ::g::Uno::UX::Size* value)
{
    __this->LimitHeight(*value);
}

// public Uno.UX.Size get_LimitWidth() :3461
void Element__get_LimitWidth_fn(Element* __this, ::g::Uno::UX::Size* __retval)
{
    *__retval = __this->LimitWidth();
}

// public void set_LimitWidth(Uno.UX.Size value) :3462
void Element__set_LimitWidth_fn(Element* __this, ::g::Uno::UX::Size* value)
{
    __this->LimitWidth(*value);
}

// public override sealed Uno.Geometry.Box get_LocalBounds() :2560
void Element__get_LocalBounds_fn(Element* __this, ::g::Uno::Geometry::Box* __retval)
{
    return *__retval = ::g::Uno::Geometry::Box__New1(::g::Uno::Float3__New1(0.0f), ::g::Uno::Float3__New4(__this->ActualSize(), 0.0f)), void();
}

// public override Fuse.VisualBounds get_LocalRenderBounds() :785
void Element__get_LocalRenderBounds_fn(Element* __this, ::g::Fuse::VisualBounds** __retval)
{
    return *__retval = __this->RenderBoundsWithEffects(), void();
}

// public float4 get_Margin() :1646
void Element__get_Margin_fn(Element* __this, ::g::Uno::Float4* __retval)
{
    *__retval = __this->Margin();
}

// public void set_Margin(float4 value) :1647
void Element__set_Margin_fn(Element* __this, ::g::Uno::Float4* value)
{
    __this->Margin(*value);
}

// public Uno.UX.Size get_MaxHeight() :1545
void Element__get_MaxHeight_fn(Element* __this, ::g::Uno::UX::Size* __retval)
{
    *__retval = __this->MaxHeight();
}

// public void set_MaxHeight(Uno.UX.Size value) :1546
void Element__set_MaxHeight_fn(Element* __this, ::g::Uno::UX::Size* value)
{
    __this->MaxHeight(*value);
}

// public Uno.UX.Size get_MaxWidth() :1524
void Element__get_MaxWidth_fn(Element* __this, ::g::Uno::UX::Size* __retval)
{
    *__retval = __this->MaxWidth();
}

// public void set_MaxWidth(Uno.UX.Size value) :1525
void Element__set_MaxWidth_fn(Element* __this, ::g::Uno::UX::Size* value)
{
    __this->MaxWidth(*value);
}

// public Uno.UX.Size get_MinHeight() :1503
void Element__get_MinHeight_fn(Element* __this, ::g::Uno::UX::Size* __retval)
{
    *__retval = __this->MinHeight();
}

// public void set_MinHeight(Uno.UX.Size value) :1504
void Element__set_MinHeight_fn(Element* __this, ::g::Uno::UX::Size* value)
{
    __this->MinHeight(*value);
}

// public Uno.UX.Size get_MinWidth() :1482
void Element__get_MinWidth_fn(Element* __this, ::g::Uno::UX::Size* __retval)
{
    *__retval = __this->MinWidth();
}

// public void set_MinWidth(Uno.UX.Size value) :1483
void Element__set_MinWidth_fn(Element* __this, ::g::Uno::UX::Size* value)
{
    __this->MinWidth(*value);
}

// private bool get_NeedsClipping() :709
void Element__get_NeedsClipping_fn(Element* __this, bool* __retval)
{
    *__retval = __this->NeedsClipping();
}

// private extern void NotifyRooted() :2836
void Element__NotifyRooted_fn(Element* __this)
{
    __this->NotifyRooted();
}

// private void NotifyTreeRedererOpacityChanged() :1236
void Element__NotifyTreeRedererOpacityChanged_fn(Element* __this)
{
    __this->NotifyTreeRedererOpacityChanged();
}

// private void NotifyTreeRendererHitTestModeChanged() :1226
void Element__NotifyTreeRendererHitTestModeChanged_fn(Element* __this)
{
    __this->NotifyTreeRendererHitTestModeChanged();
}

// private void NotifyTreeRendererPlaced() :2188
void Element__NotifyTreeRendererPlaced_fn(Element* __this)
{
    __this->NotifyTreeRendererPlaced();
}

// private void NotifyTreeRendererRooted() :1270
void Element__NotifyTreeRendererRooted_fn(Element* __this)
{
    __this->NotifyTreeRendererRooted();
}

// private void NotifyTreeRendererRootingStarted() :1263
void Element__NotifyTreeRendererRootingStarted_fn(Element* __this)
{
    __this->NotifyTreeRendererRootingStarted();
}

// private void NotifyTreeRendererTransformChanged() :1206
void Element__NotifyTreeRendererTransformChanged_fn(Element* __this)
{
    __this->NotifyTreeRendererTransformChanged();
}

// private void NotifyTreeRendererUnrooted() :1286
void Element__NotifyTreeRendererUnrooted_fn(Element* __this)
{
    __this->NotifyTreeRendererUnrooted();
}

// private void NotifyTreeRendererZOrderChanged() :1189
void Element__NotifyTreeRendererZOrderChanged_fn(Element* __this)
{
    __this->NotifyTreeRendererZOrderChanged();
}

// private extern void NotifyUnrooted() :2851
void Element__NotifyUnrooted_fn(Element* __this)
{
    __this->NotifyUnrooted();
}

// public Uno.UX.Size2 get_Offset() :1693
void Element__get_Offset_fn(Element* __this, ::g::Uno::UX::Size2* __retval)
{
    *__retval = __this->Offset();
}

// public void set_Offset(Uno.UX.Size2 value) :1694
void Element__set_Offset_fn(Element* __this, ::g::Uno::UX::Size2* value)
{
    __this->Offset(*value);
}

// internal override sealed void OnAdjustMarginBoxPosition(float2 position) :2105
void Element__OnAdjustMarginBoxPosition_fn(Element* __this, ::g::Uno::Float2* position)
{
    uStackFrame __("Fuse.Elements.Element", "OnAdjustMarginBoxPosition(float2)");
    ::g::Uno::Float2 position_ = *position;
    __this->PerformPlacement(::g::Uno::Float2__op_Addition2(__this->_actualPosition, ::g::Uno::Float2__op_Subtraction2(position_, __this->MarginBoxPosition())), __this->_actualSize, false);
}

// protected override sealed float2 OnArrangeMarginBox(float2 position, Fuse.LayoutParams lp) :2038
void Element__OnArrangeMarginBox_fn(Element* __this, ::g::Uno::Float2* position, ::g::Fuse::LayoutParams* lp, ::g::Uno::Float2* __retval)
{
    uStackFrame __("Fuse.Elements.Element", "OnArrangeMarginBox(float2,Fuse.LayoutParams)");
    ::g::Uno::Float2 position_ = *position;
    ::g::Fuse::LayoutParams lp_ = *lp;
    ::g::Fuse::Elements::BoxPlacement bp = uPtr(__this->_boxSizing)->CalcBoxPlacement(__this, position_, lp_);

    if (!(lp_.Temporary() && __this->ignoreTempArrange))
    {
        if (__this->Visibility() != 1)
        {
            ::g::Fuse::LayoutParams nlp = lp_.CloneAndDerive();
            nlp.SetSize(bp.Size, true, true);
            __this->ArrangePaddingBox(nlp);
            __this->PerformPlacement(bp.Position, bp.Size, lp_.Temporary());
        }
    }

    return *__retval = bp.MarginBox, void();
}

// protected override void OnChildAdded(Fuse.Node node) :800
void Element__OnChildAdded_fn(Element* __this, ::g::Fuse::Node* node)
{
    uStackFrame __("Fuse.Elements.Element", "OnChildAdded(Fuse.Node)");
    ::g::Fuse::Visual__OnChildAdded_fn(__this, node);
    ::g::Fuse::Effects::Effect* e = uAs< ::g::Fuse::Effects::Effect*>(node, ::TYPES[16/*Fuse.Effects.Effect*/]);

    if (e != NULL)
        __this->OnEffectAdded(e);
}

// protected override void OnChildRemoved(Fuse.Node node) :809
void Element__OnChildRemoved_fn(Element* __this, ::g::Fuse::Node* node)
{
    uStackFrame __("Fuse.Elements.Element", "OnChildRemoved(Fuse.Node)");
    Element* elm = uAs<Element*>(node, Element_typeof());

    if (elm != NULL)
        __this->RemoveChildElementFromBatching(elm);

    ::g::Fuse::Effects::Effect* e = uAs< ::g::Fuse::Effects::Effect*>(node, ::TYPES[16/*Fuse.Effects.Effect*/]);

    if (e != NULL)
        __this->OnEffectRemoved(e);

    ::g::Fuse::Visual__OnChildRemoved_fn(__this, node);
}

// protected virtual void OnDraw(Fuse.DrawContext dc) :661
void Element__OnDraw_fn(Element* __this, ::g::Fuse::DrawContext* dc)
{
}

// private void OnEffectAdded(Fuse.Effects.Effect e) :988
void Element__OnEffectAdded_fn(Element* __this, ::g::Fuse::Effects::Effect* e)
{
    __this->OnEffectAdded(e);
}

// private void OnEffectRemoved(Fuse.Effects.Effect e) :999
void Element__OnEffectRemoved_fn(Element* __this, ::g::Fuse::Effects::Effect* e)
{
    __this->OnEffectRemoved(e);
}

// private void OnEffectRenderBoundsChanged(Fuse.Effects.Effect e) :1015
void Element__OnEffectRenderBoundsChanged_fn(Element* __this, ::g::Fuse::Effects::Effect* e)
{
    __this->OnEffectRenderBoundsChanged(e);
}

// private void OnEffectRenderingChanged(Fuse.Effects.Effect e) :1010
void Element__OnEffectRenderingChanged_fn(Element* __this, ::g::Fuse::Effects::Effect* e)
{
    __this->OnEffectRenderingChanged(e);
}

// protected override sealed void OnHitTest(Fuse.HitTestContext htc) :1352
void Element__OnHitTest_fn(Element* __this, ::g::Fuse::HitTestContext* htc)
{
    uStackFrame __("Fuse.Elements.Element", "OnHitTest(Fuse.HitTestContext)");

    if (__this->ClipToBounds() && !__this->IsPointInside(uPtr(htc)->LocalPoint()))
        return;

    if ((__this->HitTestMode() & 4) == 4)
        __this->OnHitTestChildren(htc);

    if ((__this->HitTestMode() & 1) == 1)
        __this->OnHitTestLocalVisual(htc);

    if ((__this->HitTestMode() & 2) == 2)
    {
        if (__this->IsPointInside(uPtr(htc)->LocalPoint()))
            uPtr(htc)->Hit(__this);
    }
}

// private void OnHitTestChildren(Fuse.HitTestContext htc) :1368
void Element__OnHitTestChildren_fn(Element* __this, ::g::Fuse::HitTestContext* htc)
{
    __this->OnHitTestChildren(htc);
}

// protected virtual void OnHitTestLocalVisual(Fuse.HitTestContext htc) :1378
void Element__OnHitTestLocalVisual_fn(Element* __this, ::g::Fuse::HitTestContext* htc)
{
}

// protected override sealed void OnInvalidateLayout() :2632
void Element__OnInvalidateLayout_fn(Element* __this)
{
    ::g::Fuse::Visual__OnInvalidateLayout_fn(__this);
    __this->GMSReset();
}

// protected override sealed bool OnInvalidateRenderBounds() :2643
void Element__OnInvalidateRenderBounds_fn(Element* __this, bool* __retval)
{
    uStackFrame __("Fuse.Elements.Element", "OnInvalidateRenderBounds()");

    if ((__this->_renderBoundsWithEffects == NULL) && (__this->_renderBoundsWithoutEffects == NULL))
        return *__retval = true, void();

    __this->_renderBoundsWithoutEffects = NULL;
    __this->OnInvalidateRenderBoundsWithEffects();

    if (__this->ElementBatchEntry() != NULL)
        uPtr(__this->ElementBatchEntry())->InvalidateRenderBounds();

    return *__retval = false, void();
}

// private void OnInvalidateRenderBoundsWithEffects() :2658
void Element__OnInvalidateRenderBoundsWithEffects_fn(Element* __this)
{
    __this->OnInvalidateRenderBoundsWithEffects();
}

// protected override void OnInvalidateVisual() :2615
void Element__OnInvalidateVisual_fn(Element* __this)
{
    uStackFrame __("Fuse.Elements.Element", "OnInvalidateVisual()");
    ::g::Fuse::Visual__OnInvalidateVisual_fn(__this);

    if (__this->Cache() != NULL)
        uPtr(__this->Cache())->Invalidate();

    if (__this->ElementBatchEntry() != NULL)
        uPtr(__this->ElementBatchEntry())->InvalidateVisual();
}

// protected override sealed void OnInvalidateVisualComposition() :2625
void Element__OnInvalidateVisualComposition_fn(Element* __this)
{
    uStackFrame __("Fuse.Elements.Element", "OnInvalidateVisualComposition()");
    ::g::Fuse::Visual__OnInvalidateVisualComposition_fn(__this);

    if (__this->ElementBatchEntry() != NULL)
        uPtr(__this->ElementBatchEntry())->InvalidateVisualComposition();
}

// protected override sealed void OnIsContextEnabledChanged() :1246
void Element__OnIsContextEnabledChanged_fn(Element* __this)
{
    uStackFrame __("Fuse.Elements.Element", "OnIsContextEnabledChanged()");
    ::g::Fuse::Visual__OnIsContextEnabledChanged_fn(__this);

    if (__this->IsRootingCompleted())
    {
        uObject* t = __this->TreeRenderer();

        if (t != NULL)
            ::g::Fuse::Elements::ITreeRenderer::IsEnabledChanged(uInterface(uPtr(t), ::TYPES[14/*Fuse.Elements.ITreeRenderer*/]), __this, __this->IsEnabled());
    }
}

// protected override sealed void OnIsVisibleChanged() :1178
void Element__OnIsVisibleChanged_fn(Element* __this)
{
    uStackFrame __("Fuse.Elements.Element", "OnIsVisibleChanged()");
    ::g::Fuse::Visual__OnIsVisibleChanged_fn(__this);

    if (__this->IsRootingCompleted())
    {
        uObject* t = __this->TreeRenderer();

        if (t != NULL)
            ::g::Fuse::Elements::ITreeRenderer::IsVisibleChanged(uInterface(uPtr(t), ::TYPES[14/*Fuse.Elements.ITreeRenderer*/]), __this, __this->IsVisible());
    }
}

// private void OnOpacityChanged(Uno.UX.IPropertyListener origin) :2386
void Element__OnOpacityChanged_fn(Element* __this, uObject* origin)
{
    __this->OnOpacityChanged(origin);
}

// private void OnPreplacement() :2090
void Element__OnPreplacement_fn(Element* __this)
{
    __this->OnPreplacement();
}

// internal override sealed void OnPreserveRootFrame() :2096
void Element__OnPreserveRootFrame_fn(Element* __this)
{
    uStackFrame __("Fuse.Elements.Element", "OnPreserveRootFrame()");
    ::g::Fuse::Node__OnPreserveRootFrame_fn(__this);
    __this->OnPreplacement();
}

// protected override void OnRooted() :2273
void Element__OnRooted_fn(Element* __this)
{
    uStackFrame __("Fuse.Elements.Element", "OnRooted()");
    ::g::Fuse::Visual__OnRooted_fn(__this);
    __this->NotifyTreeRendererRooted();
    __this->InvalidateVisualComposition();
    __this->_placedBefore = NULL;
    __this->NotifyRooted();
}

// protected internal override sealed void OnRootedPreChildren() :1257
void Element__OnRootedPreChildren_fn(Element* __this)
{
    uStackFrame __("Fuse.Elements.Element", "OnRootedPreChildren()");
    __this->NotifyTreeRendererRootingStarted();
    ::g::Fuse::Visual__OnRootedPreChildren_fn(__this);
}

// protected override void OnUnrooted() :2290
void Element__OnUnrooted_fn(Element* __this)
{
    uStackFrame __("Fuse.Elements.Element", "OnUnrooted()");
    __this->InvalidateVisualComposition();
    ::g::Fuse::Visual__OnUnrooted_fn(__this);
    __this->NotifyTreeRendererUnrooted();
    __this->CleanupBatching();
    __this->NotifyUnrooted();
}

// private void OnVisibilityChanged(Fuse.Elements.Visibility oldVisibility, Uno.UX.IPropertyListener origin) :1616
void Element__OnVisibilityChanged_fn(Element* __this, int* oldVisibility, uObject* origin)
{
    __this->OnVisibilityChanged(*oldVisibility, origin);
}

// private void OnZOrderChanged() :1195
void Element__OnZOrderChanged_fn(Element* __this)
{
    __this->OnZOrderChanged();
}

// protected override sealed void OnZOrderInvalidated() :585
void Element__OnZOrderInvalidated_fn(Element* __this)
{
    uStackFrame __("Fuse.Elements.Element", "OnZOrderInvalidated()");
    __this->NotifyTreeRendererZOrderChanged();
    __this->_elementBatchValid = false;
}

// public float get_Opacity() :2374
void Element__get_Opacity_fn(Element* __this, float* __retval)
{
    *__retval = __this->Opacity();
}

// public void set_Opacity(float value) :2375
void Element__set_Opacity_fn(Element* __this, float* value)
{
    __this->Opacity(*value);
}

// public float4 get_Padding() :1676
void Element__get_Padding_fn(Element* __this, ::g::Uno::Float4* __retval)
{
    *__retval = __this->Padding();
}

// public void set_Padding(float4 value) :1677
void Element__set_Padding_fn(Element* __this, ::g::Uno::Float4* value)
{
    __this->Padding(*value);
}

// internal void PerformPlacement(float2 position, float2 size, bool temp) :2116
void Element__PerformPlacement_fn(Element* __this, ::g::Uno::Float2* position, ::g::Uno::Float2* size, bool* temp)
{
    __this->PerformPlacement(*position, *size, *temp);
}

// public generated void add_Placed(Fuse.PlacedHandler value) :2078
void Element__add_Placed_fn(Element* __this, uDelegate* value)
{
    __this->add_Placed(value);
}

// public generated void remove_Placed(Fuse.PlacedHandler value) :2078
void Element__remove_Placed_fn(Element* __this, uDelegate* value)
{
    __this->remove_Placed(value);
}

// protected override void PrependImplicitTransform(Fuse.FastMatrix m) :2578
void Element__PrependImplicitTransform_fn(Element* __this, ::g::Fuse::FastMatrix* m)
{
    uStackFrame __("Fuse.Elements.Element", "PrependImplicitTransform(Fuse.FastMatrix)");
    ::g::Uno::Float2 actualPosition = __this->ActualPosition();

    if ((actualPosition.X != 0.0f) || (actualPosition.Y != 0.0f))
        uPtr(m)->PrependTranslation1(::g::Uno::Float3__New4(::g::Uno::Float2__New2(actualPosition.X, actualPosition.Y), 0.0f));
}

// protected override sealed void PrependInverseTransformOrigin(Fuse.FastMatrix m) :2572
void Element__PrependInverseTransformOrigin_fn(Element* __this, ::g::Fuse::FastMatrix* m)
{
    uStackFrame __("Fuse.Elements.Element", "PrependInverseTransformOrigin(Fuse.FastMatrix)");
    ::g::Uno::Float3 off = ::g::Fuse::Elements::ITransformOrigin::GetOffset(uInterface(uPtr(__this->TransformOrigin()), ::TYPES[18/*Fuse.Elements.ITransformOrigin*/]), __this);
    uPtr(m)->PrependTranslation1(::g::Uno::Float3__op_UnaryNegation(off));
}

// protected override sealed void PrependTransformOrigin(Fuse.FastMatrix m) :2566
void Element__PrependTransformOrigin_fn(Element* __this, ::g::Fuse::FastMatrix* m)
{
    uStackFrame __("Fuse.Elements.Element", "PrependTransformOrigin(Fuse.FastMatrix)");
    ::g::Uno::Float3 off = ::g::Fuse::Elements::ITransformOrigin::GetOffset(uInterface(uPtr(__this->TransformOrigin()), ::TYPES[18/*Fuse.Elements.ITransformOrigin*/]), __this);
    uPtr(m)->PrependTranslation1(off);
}

// public generated void add_Preplacement(Fuse.Elements.PreplacementHandler value) :2082
void Element__add_Preplacement_fn(Element* __this, uDelegate* value)
{
    __this->add_Preplacement(value);
}

// public generated void remove_Preplacement(Fuse.Elements.PreplacementHandler value) :2082
void Element__remove_Preplacement_fn(Element* __this, uDelegate* value)
{
    __this->remove_Preplacement(value);
}

// private void RemoveChildElementFromBatching(Fuse.Elements.Element elm) :591
void Element__RemoveChildElementFromBatching_fn(Element* __this, Element* elm)
{
    __this->RemoveChildElementFromBatching(elm);
}

// public Fuse.VisualBounds get_RenderBoundsWithEffects() :696
void Element__get_RenderBoundsWithEffects_fn(Element* __this, ::g::Fuse::VisualBounds** __retval)
{
    *__retval = __this->RenderBoundsWithEffects();
}

// public Fuse.VisualBounds get_RenderBoundsWithoutEffects() :715
void Element__get_RenderBoundsWithoutEffects_fn(Element* __this, ::g::Fuse::VisualBounds** __retval)
{
    *__retval = __this->RenderBoundsWithoutEffects();
}

// internal void RequestLayout() :1982
void Element__RequestLayout_fn(Element* __this)
{
    __this->RequestLayout();
}

// private extern Uno.Collections.List<Uno.Action> get_RootedListeners() :2833
void Element__get_RootedListeners_fn(Element* __this, ::g::Uno::Collections::List** __retval)
{
    *__retval = __this->RootedListeners();
}

// public void SetExplicitTransformOrigin(Uno.UX.Size2 value, Uno.UX.IPropertyListener origin) :2531
void Element__SetExplicitTransformOrigin_fn(Element* __this, ::g::Uno::UX::Size2* value, uObject* origin)
{
    __this->SetExplicitTransformOrigin(*value, origin);
}

// public void SetHitTestMode(Fuse.Elements.HitTestMode value, Uno.UX.IPropertyListener origin) :1344
void Element__SetHitTestMode_fn(Element* __this, int* value, uObject* origin)
{
    __this->SetHitTestMode(*value, origin);
}

// private void SetNewTransform() :1215
void Element__SetNewTransform_fn(Element* __this)
{
    __this->SetNewTransform();
}

// public void SetOpacity(float value, Uno.UX.IPropertyListener origin) :2378
void Element__SetOpacity_fn(Element* __this, float* value, uObject* origin)
{
    __this->SetOpacity(*value, origin);
}

// public void SetVisibility(Fuse.Elements.Visibility value, Uno.UX.IPropertyListener origin) :1608
void Element__SetVisibility_fn(Element* __this, int* value, uObject* origin)
{
    __this->SetVisibility(*value, origin);
}

// private bool ShouldBatch() :568
void Element__ShouldBatch_fn(Element* __this, bool* __retval)
{
    *__retval = __this->ShouldBatch();
}

// public Fuse.Elements.ITransformOrigin get_TransformOrigin() :2505
void Element__get_TransformOrigin_fn(Element* __this, uObject** __retval)
{
    *__retval = __this->TransformOrigin();
}

// public void set_TransformOrigin(Fuse.Elements.ITransformOrigin value) :2506
void Element__set_TransformOrigin_fn(Element* __this, uObject* value)
{
    __this->TransformOrigin(value);
}

// public virtual Fuse.Elements.ITreeRenderer get_TreeRenderer() :1175
void Element__get_TreeRenderer_fn(Element* __this, uObject** __retval)
{
    uStackFrame __("Fuse.Elements.Element", "get_TreeRenderer()");
    return *__retval = uIs((::g::Fuse::Visual*)__this->Parent(), Element_typeof()) ? (uObject*)uPtr(uCast<Element*>(__this->Parent(), Element_typeof()))->TreeRenderer() : NULL, void();
}

// private extern Uno.Collections.List<Uno.Action> get_UnrootedListeners() :2848
void Element__get_UnrootedListeners_fn(Element* __this, ::g::Uno::Collections::List** __retval)
{
    *__retval = __this->UnrootedListeners();
}

// public Fuse.Elements.Visibility get_Visibility() :1604
void Element__get_Visibility_fn(Element* __this, int* __retval)
{
    *__retval = __this->Visibility();
}

// public void set_Visibility(Fuse.Elements.Visibility value) :1605
void Element__set_Visibility_fn(Element* __this, int* value)
{
    __this->Visibility(*value);
}

// internal static extern Uno.IDisposable VisualAppearedFactory(object obj, Uno.Action<Uno.Rect, float4x4> handler) :2734
void Element__VisualAppearedFactory_fn(uObject* obj, uDelegate* handler, uObject** __retval)
{
    *__retval = Element::VisualAppearedFactory(obj, handler);
}

// internal static extern Uno.IDisposable VisualBoundsChangedFactory(object obj, Uno.Action<Uno.Rect> handler) :2741
void Element__VisualBoundsChangedFactory_fn(uObject* obj, uDelegate* handler, uObject** __retval)
{
    *__retval = Element::VisualBoundsChangedFactory(obj, handler);
}

// internal static extern Uno.IDisposable VisualDisappearedFactory(object obj, Uno.Action handler) :2774
void Element__VisualDisappearedFactory_fn(uObject* obj, uDelegate* handler, uObject** __retval)
{
    *__retval = Element::VisualDisappearedFactory(obj, handler);
}

// internal static extern Uno.IDisposable VisualTransformChangedFactory(object obj, Uno.Action<float4x4> handler) :2701
void Element__VisualTransformChangedFactory_fn(uObject* obj, uDelegate* handler, uObject** __retval)
{
    *__retval = Element::VisualTransformChangedFactory(obj, handler);
}

// public Uno.UX.Size get_Width() :1439
void Element__get_Width_fn(Element* __this, ::g::Uno::UX::Size* __retval)
{
    *__retval = __this->Width();
}

// public void set_Width(Uno.UX.Size value) :1440
void Element__set_Width_fn(Element* __this, ::g::Uno::UX::Size* value)
{
    __this->Width(*value);
}

// public Uno.UX.Size get_X() :1733
void Element__get_X_fn(Element* __this, ::g::Uno::UX::Size* __retval)
{
    *__retval = __this->X();
}

// public void set_X(Uno.UX.Size value) :1734
void Element__set_X_fn(Element* __this, ::g::Uno::UX::Size* value)
{
    __this->X(*value);
}

// public Uno.UX.Size get_Y() :1750
void Element__get_Y_fn(Element* __this, ::g::Uno::UX::Size* __retval)
{
    *__retval = __this->Y();
}

// public void set_Y(Uno.UX.Size value) :1751
void Element__set_Y_fn(Element* __this, ::g::Uno::UX::Size* value)
{
    __this->Y(*value);
}

::g::Uno::UX::Selector Element::_clipToBoundsName_;
::g::Uno::UX::Selector Element::_hitTestModeName_;
::g::Uno::UX::Selector Element::_opacityName_;
::g::Uno::UX::Selector Element::_visibilityName_;
uSStrong<uObject*> Element::DefaultTransformOrigin_;
::g::Uno::UX::Selector Element::ExplicitTransformOriginName_;

// protected generated Element() [instance] :104
void Element::ctor_3()
{
    _width = ::g::Uno::UX::Size__Auto();
    _height = ::g::Uno::UX::Size__Auto();
    _gmsCache = uArray::New(::TYPES[9/*Fuse.Elements.Element.GMSCacheItem[]*/], 2);
    _boxSizing = ::g::Fuse::Elements::StandardBoxSizing::Singleton();
    ctor_2();
}

// public float2 get_ActualAnchor() [instance] :2034
::g::Uno::Float2 Element::ActualAnchor()
{
    return _actualAnchor;
}

// internal void set_ActualAnchor(float2 value) [instance] :2035
void Element::ActualAnchor(::g::Uno::Float2 value)
{
    _actualAnchor = value;
}

// public float2 get_ActualPosition() [instance] :1838
::g::Uno::Float2 Element::ActualPosition()
{
    uStackFrame __("Fuse.Elements.Element", "get_ActualPosition()");

    if (_haveActualPositionCache)
        return _actualPositionCache;

    if (!SnapToPixels())
        return _actualPosition;

    ::g::Uno::Float2 parentP = ::g::Uno::Float2__New1(0.0f);

    if (Parent() != NULL)
        parentP = uPtr(Parent())->AbsoluteViewportOrigin();

    ::g::Uno::Float2 p = ::g::Uno::Float2__op_Addition2(parentP, _actualPosition);
    p = Snap(p);
    p = ::g::Uno::Float2__op_Subtraction2(p, parentP);
    _actualPositionCache = p;
    _haveActualPositionCache = true;
    return p;
}

// public float2 get_ActualSize() [instance] :1872
::g::Uno::Float2 Element::ActualSize()
{
    return _actualSize;
}

// public Fuse.Elements.Alignment get_Alignment() [instance] :1565
int Element::Alignment()
{
    return _alignment;
}

// public void set_Alignment(Fuse.Elements.Alignment value) [instance] :1566
void Element::Alignment(int value)
{
    uStackFrame __("Fuse.Elements.Element", "set_Alignment(Fuse.Elements.Alignment)");

    if (_alignment != value)
    {
        _alignment = value;
        InvalidateLayout(2);
    }
}

// private Fuse.Elements.Element get_AncestorElement() [instance] :2346
Element* Element::AncestorElement()
{
    uStackFrame __("Fuse.Elements.Element", "get_AncestorElement()");
    ::g::Fuse::Visual* n = Parent();

    while (n != NULL)
    {
        Element* elm = uAs<Element*>(n, Element_typeof());

        if (elm != NULL)
            return elm;

        n = uPtr(n)->Parent();
    }

    return NULL;
}

// public Uno.UX.Size2 get_Anchor() [instance] :1716
::g::Uno::UX::Size2 Element::Anchor()
{
    uStackFrame __("Fuse.Elements.Element", "get_Anchor()");
    ::g::Uno::UX::Size2 ret27;
    return (::g::Fuse::Visual__Get_fn(this, ::TYPES[23/*Fuse.Visual.Get<Uno.UX.Size2>*/], uCRef<int>(4096), uCRef(::g::Uno::UX::Size2__Auto()), &ret27), ret27);
}

// public void set_Anchor(Uno.UX.Size2 value) [instance] :1717
void Element::Anchor(::g::Uno::UX::Size2 value)
{
    uStackFrame __("Fuse.Elements.Element", "set_Anchor(Uno.UX.Size2)");

    if (::g::Uno::UX::Size2__op_Inequality(Anchor(), value))
    {
        ::g::Fuse::Visual__Set_fn(this, ::TYPES[24/*Fuse.Visual.Set<Uno.UX.Size2>*/], uCRef<int>(4096), uCRef(value), uCRef(::g::Uno::UX::Size2__Auto()));
        InvalidateLayout(2);
    }
}

// public float get_Aspect() [instance] :117
float Element::Aspect()
{
    uStackFrame __("Fuse.Elements.Element", "get_Aspect()");
    float ret28;
    return (::g::Fuse::Visual__Get_fn(this, ::TYPES[25/*Fuse.Visual.Get<float>*/], uCRef<int>(65536), uCRef(1.0f), &ret28), ret28);
}

// public void set_Aspect(float value) [instance] :118
void Element::Aspect(float value)
{
    uStackFrame __("Fuse.Elements.Element", "set_Aspect(float)");

    if (Aspect() != value)
    {
        ::g::Fuse::Visual__Set_fn(this, ::TYPES[21/*Fuse.Visual.Set<float>*/], uCRef<int>(65536), uCRef(value), uCRef(1.0f));
        InvalidateLayout(2);
    }
}

// public Fuse.Elements.AspectConstraint get_AspectConstraint() [instance] :137
int Element::AspectConstraint()
{
    uStackFrame __("Fuse.Elements.Element", "get_AspectConstraint()");
    int ret29;
    return (::g::Fuse::Visual__Get_fn(this, ::TYPES[26/*Fuse.Visual.Get<Fuse.Elements.AspectConstraint>*/], uCRef<int>(131072), uCRef<int>(3), &ret29), ret29);
}

// public void set_AspectConstraint(Fuse.Elements.AspectConstraint value) [instance] :138
void Element::AspectConstraint(int value)
{
    uStackFrame __("Fuse.Elements.Element", "set_AspectConstraint(Fuse.Elements.AspectConstraint)");

    if (AspectConstraint() != value)
    {
        ::g::Fuse::Visual__Set_fn(this, ::TYPES[27/*Fuse.Visual.Set<Fuse.Elements.AspectConstraint>*/], uCRef<int>(131072), uCRef<int>(value), uCRef<int>(3));
        InvalidateLayout(2);
    }
}

// public Fuse.Elements.Element.BoxSizingMode get_BoxSizing() [instance] :1957
int Element::BoxSizing()
{
    return _boxSizingMode;
}

// public void set_BoxSizing(Fuse.Elements.Element.BoxSizingMode value) [instance] :1958
void Element::BoxSizing(int value)
{
    uStackFrame __("Fuse.Elements.Element", "set_BoxSizing(Fuse.Elements.Element.BoxSizingMode)");

    if (value == _boxSizingMode)
        return;

    _boxSizingMode = value;

    switch (_boxSizingMode)
    {
        case 0:
        {
            _boxSizing = ::g::Fuse::Elements::StandardBoxSizing::Singleton();
            break;
        }
        case 1:
        {
            _boxSizing = ::g::Fuse::Elements::NoImplicitMaxBoxSizing::Singleton1();
            break;
        }
        case 2:
        {
            _boxSizing = ::g::Fuse::Elements::LimitBoxSizing::Singleton();
            break;
        }
        case 3:
        {
            _boxSizing = ::g::Fuse::Elements::LayoutMasterBoxSizing::Singleton();
            break;
        }
        case 4:
        {
            _boxSizing = ::g::Fuse::Elements::FillAspectBoxSizing::Singleton();
            break;
        }
    }

    InvalidateLayout(2);
}

// internal Fuse.Elements.BoxSizing get_BoxSizingObject() [instance] :1979
::g::Fuse::Elements::BoxSizing* Element::BoxSizingObject()
{
    return _boxSizing;
}

// private Fuse.Elements.Cache get_Cache() [instance] :1023
::g::Fuse::Elements::Cache* Element::Cache()
{
    uStackFrame __("Fuse.Elements.Element", "get_Cache()");
    ::g::Fuse::Elements::Cache* ind11 = _cache;
    return (ind11 != NULL) ? ind11 : (::g::Fuse::Elements::Cache*)(_cache = ::g::Fuse::Elements::Cache::New1(this));
}

// public Fuse.Elements.CachingMode get_CachingMode() [instance] :846
int Element::CachingMode()
{
    uStackFrame __("Fuse.Elements.Element", "get_CachingMode()");
    int ret30;
    return (::g::Fuse::Visual__Get_fn(this, ::TYPES[28/*Fuse.Visual.Get<Fuse.Elements.CachingMode>*/], uCRef<int>(262144), uCRef<int>(0), &ret30), ret30);
}

// public void set_CachingMode(Fuse.Elements.CachingMode value) [instance] :847
void Element::CachingMode(int value)
{
    uStackFrame __("Fuse.Elements.Element", "set_CachingMode(Fuse.Elements.CachingMode)");

    if (CachingMode() != value)
    {
        ::g::Fuse::Visual__Set_fn(this, ::TYPES[29/*Fuse.Visual.Set<Fuse.Elements.CachingMode>*/], uCRef<int>(262144), uCRef<int>(value), uCRef<int>(0));
        InvalidateVisual();
    }
}

// protected Fuse.VisualBounds CalcRenderBoundsWithEffects() [instance] :678
::g::Fuse::VisualBounds* Element::CalcRenderBoundsWithEffects()
{
    uStackFrame __("Fuse.Elements.Element", "CalcRenderBoundsWithEffects()");
    ::g::Fuse::Effects::Effect* ret15;
    ::g::Fuse::VisualBounds* r = RenderBoundsWithoutEffects();

    if (HasActiveEffects())

        for (int i = 0; i < ::g::Uno::Collections::ICollection::Count(uInterface(uPtr(Effects()), ::TYPES[10/*Uno.Collections.ICollection<Fuse.Effects.Effect>*/])); i++)
        {
            ::g::Fuse::Effects::Effect* e = (::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(Effects()), ::TYPES[11/*Uno.Collections.IList<Fuse.Effects.Effect>*/]), uCRef<int>(i), &ret15), ret15);

            if (uPtr(e)->Active())
                r = uPtr(e)->ModifyRenderBounds(r);
        }

    return r;
}

// public framebuffer CaptureRegion(Fuse.DrawContext dc, Uno.Rect region, float2 padding) [instance] :857
::g::Uno::Graphics::Framebuffer* Element::CaptureRegion(::g::Fuse::DrawContext* dc, ::g::Uno::Rect region, ::g::Uno::Float2 padding)
{
    uStackFrame __("Fuse.Elements.Element", "CaptureRegion(Fuse.DrawContext,Uno.Rect,float2)");
    ::g::Fuse::OrthographicFrustum* collection1;
    ::g::Uno::Float2 sz = ::g::Uno::Float2__op_Addition2(region.Size(), ::g::Uno::Float2__op_Multiply1(padding, 2.0f));
    ::g::Uno::Float2 pixelSize = ::g::Uno::Math::Ceil2(::g::Uno::Float2__op_Multiply1(sz, AbsoluteZoom()));
    ::g::Uno::Int2 fsz = ::g::Uno::Int2__New2((int)pixelSize.X, (int)pixelSize.Y);

    if ((fsz.X > ::g::Uno::Graphics::Texture2D::MaxSize()) || (fsz.Y > ::g::Uno::Graphics::Texture2D::MaxSize()))
    {
        ::g::Uno::Diagnostics::Debug::Log5(::g::Uno::String::op_Addition1(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition1(::STRINGS[5/*"CaptureRegi...*/], uBox(::g::Uno::Int2_typeof(), fsz)), ::STRINGS[6/*", max-size: "*/]), uBox<int>(::g::Uno::Int_typeof(), ::g::Uno::Graphics::Texture2D::MaxSize())), 1, ::STRINGS[7/*"/Users/medb...*/], 866);
        return NULL;
    }

    ::g::Uno::Graphics::Framebuffer* fb = ::g::Fuse::FramebufferPool::Lock1(fsz, 3, false);
    collection1 = ::g::Fuse::OrthographicFrustum::New1();
    ::g::Uno::Float2 ind9 = ::g::Uno::Float2__New2(region.Left - padding.X, region.Top - padding.Y);
    uPtr(collection1)->Origin(ind9);
    ;
    uPtr(collection1)->Size(sz);
    sz;
    ::g::Uno::Float4x4 ind10 = WorldTransformInverse();
    uPtr(collection1)->LocalFromWorld(ind10);
    ;
    ::g::Fuse::OrthographicFrustum* cc = collection1;
    uPtr(dc)->PushRenderTargetFrustum(fb, (uObject*)cc);
    dc->Clear(::g::Uno::Float4__New1(0.0f), 1.0f);
    DrawWithChildren(dc);
    dc->PopRenderTargetFrustum();
    return fb;
}

// private void CleanupBatching() [instance] :645
void Element::CleanupBatching()
{
    uStackFrame __("Fuse.Elements.Element", "CleanupBatching()");

    if (_elementBatcher != NULL)
    {
        uPtr(_elementBatcher)->Dispose();
        _elementBatcher = NULL;
    }
}

// public bool get_ClipToBounds() [instance] :1767
bool Element::ClipToBounds()
{
    return HasBit(1048576);
}

// public void set_ClipToBounds(bool value) [instance] :1768
void Element::ClipToBounds(bool value)
{
    uStackFrame __("Fuse.Elements.Element", "set_ClipToBounds(bool)");

    if (ClipToBounds() != value)
    {
        SetBit1(1048576, value);
        InvalidateVisual();
        InvalidateHitTestBounds();
        OnPropertyChanged(Element::_clipToBoundsName());
    }
}

// private void Composit(Fuse.DrawContext dc) [instance] :1029
void Element::Composit(::g::Fuse::DrawContext* dc)
{
    uStackFrame __("Fuse.Elements.Element", "Composit(Fuse.DrawContext)");

    if (Opacity() <= 0.0f)
        return;

    bool flat = AreChildrenFlat() && IsLocalFlat();

    if (Opacity() >= 1.0f)
    {
        if (flat)
            uPtr(Cache())->DrawHeuristically(dc);
        else
            CompositEffects(dc);

        return;
    }

    if (FastTrackDrawWithOpacity(dc))
        return;

    if (!flat && !_warnOpacityFlat)
    {
        _warnOpacityFlat = true;
        ::g::Fuse::Diagnostics::UserWarning(::STRINGS[8/*"This elemen...*/], this, ::STRINGS[7/*"/Users/medb...*/], 1052, ::STRINGS[9/*"Composit"*/]);
    }

    bool r = uPtr(Cache())->DrawCached(dc);

    if (!r && !_warnNoCacheDraw)
    {
        _warnNoCacheDraw = true;
        ::g::Fuse::Diagnostics::InternalError(::STRINGS[10/*"This elemen...*/], this, ::STRINGS[7/*"/Users/medb...*/], 1060, ::STRINGS[9/*"Composit"*/]);
    }
}

// internal void CompositEffects(Fuse.DrawContext dc) [instance] :1069
void Element::CompositEffects(::g::Fuse::DrawContext* dc)
{
    uStackFrame __("Fuse.Elements.Element", "CompositEffects(Fuse.DrawContext)");
    ::g::Uno::Collections::List__Enumerator<uStrong< ::g::Fuse::Effects::Effect*> > ret16;
    ::g::Uno::Collections::List__Enumerator<uStrong< ::g::Fuse::Effects::Effect*> > ret17;
    ::g::Uno::Collections::List__Enumerator<uStrong< ::g::Fuse::Effects::Effect*> > ret18;
    bool hasActiveEffects = HasActiveEffects() && true;

    if (hasActiveEffects)

        for (::g::Uno::Collections::List__Enumerator<uStrong< ::g::Fuse::Effects::Effect*> > enum3 = (::g::Uno::Collections::List__GetEnumerator_fn(uPtr(_effects), &ret16), ret16); enum3.MoveNext(::TYPES[12/*Uno.Collections.List<Fuse.Effects.Effect>.Enumerator*/]); )
        {
            ::g::Fuse::Effects::Effect* e = enum3.Current(::TYPES[12/*Uno.Collections.List<Fuse.Effects.Effect>.Enumerator*/]);

            if ((uPtr(e)->Type() == 0) && uPtr(e)->Active())
            {
                double t;
                uPtr(e)->Render(dc);
            }
        }

    if (hasActiveEffects && HasCompositionEffect())

        for (::g::Uno::Collections::List__Enumerator<uStrong< ::g::Fuse::Effects::Effect*> > enum4 = (::g::Uno::Collections::List__GetEnumerator_fn(uPtr(_effects), &ret17), ret17); enum4.MoveNext(::TYPES[12/*Uno.Collections.List<Fuse.Effects.Effect>.Enumerator*/]); )
        {
            ::g::Fuse::Effects::Effect* e1 = enum4.Current(::TYPES[12/*Uno.Collections.List<Fuse.Effects.Effect>.Enumerator*/]);

            if ((uPtr(e1)->Type() == 1) && uPtr(e1)->Active())
            {
                double t1;
                uPtr(e1)->Render(dc);
            }
        }
    else
        DrawWithChildren(dc);

    if (hasActiveEffects)

        for (::g::Uno::Collections::List__Enumerator<uStrong< ::g::Fuse::Effects::Effect*> > enum5 = (::g::Uno::Collections::List__GetEnumerator_fn(uPtr(_effects), &ret18), ret18); enum5.MoveNext(::TYPES[12/*Uno.Collections.List<Fuse.Effects.Effect>.Enumerator*/]); )
        {
            ::g::Fuse::Effects::Effect* e2 = enum5.Current(::TYPES[12/*Uno.Collections.List<Fuse.Effects.Effect>.Enumerator*/]);

            if ((uPtr(e2)->Type() == 2) && uPtr(e2)->Active())
            {
                double t2;
                uPtr(e2)->Render(dc);
            }
        }
}

// private void DispatchPlacement() [instance] :2175
void Element::DispatchPlacement()
{
    uStackFrame __("Fuse.Elements.Element", "DispatchPlacement()");
    _pendingDispatchPlacement = false;

    if (::g::Uno::Delegate::op_Inequality(Placed1, NULL))
    {
        ::g::Fuse::PlacedArgs* args = ::g::Fuse::PlacedArgs::New2(_placedBefore != NULL, _ppPrevPosition, ActualPosition(), _ppPrevSize, ActualSize());
        uPtr(Placed1)->Invoke(2, this, args);
    }

    _placedBefore = Parent();
}

// protected void DrawNonUnderlayChildren(Fuse.DrawContext dc) [instance] :612
void Element::DrawNonUnderlayChildren(::g::Fuse::DrawContext* dc)
{
    uStackFrame __("Fuse.Elements.Element", "DrawNonUnderlayChildren(Fuse.DrawContext)");
    ::g::Fuse::Visual* ret19;
    ::g::Fuse::Visual* ret20;

    if (!HasChildren())
        return;

    EnsureSortedZOrder();

    if (!ShouldBatch())
    {
        if (_elementBatcher != NULL)
            _elementBatcher = NULL;

        for (int i = _firstNonUnderlay; i < uPtr(ZOrder())->Count(); ++i)
            uPtr((::g::Uno::Collections::List__get_Item_fn(uPtr(ZOrder()), uCRef<int>(i), &ret19), ret19))->Draw(dc);
    }
    else
    {
        if ((_elementBatcher == NULL) || !_elementBatchValid)
        {
            if (_elementBatcher == NULL)
                _elementBatcher = ::g::Fuse::Elements::ElementBatcher::New1();
            else
                uPtr(_elementBatcher)->RemoveAllElements();

            for (int i1 = _firstNonUnderlay; i1 < uPtr(ZOrder())->Count(); ++i1)
                uPtr(_elementBatcher)->AddElement((::g::Uno::Collections::List__get_Item_fn(uPtr(ZOrder()), uCRef<int>(i1), &ret20), ret20));

            _elementBatchValid = true;
        }

        uPtr(_elementBatcher)->Draw(dc);
    }
}

// protected void DrawUnderlayChildren(Fuse.DrawContext dc) [instance] :606
void Element::DrawUnderlayChildren(::g::Fuse::DrawContext* dc)
{
    uStackFrame __("Fuse.Elements.Element", "DrawUnderlayChildren(Fuse.DrawContext)");
    ::g::Fuse::Visual* ret21;

    for (int i = 0; i < _firstNonUnderlay; i++)
        uPtr((::g::Uno::Collections::List__get_Item_fn(uPtr(ZOrder()), uCRef<int>(i), &ret21), ret21))->Draw(dc);
}

// private Uno.Collections.IList<Fuse.Effects.Effect> get_Effects() [instance] :949
uObject* Element::Effects()
{
    uStackFrame __("Fuse.Elements.Element", "get_Effects()");

    if (_effects == NULL)
        _effects = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[30/*Uno.Collections.List<Fuse.Effects.Effect>*/]));

    return (uObject*)_effects;
}

// internal generated Fuse.Elements.ElementBatchEntry get_ElementBatchEntry() [instance] :1026
::g::Fuse::Elements::ElementBatchEntry* Element::ElementBatchEntry()
{
    return _ElementBatchEntry;
}

// internal generated void set_ElementBatchEntry(Fuse.Elements.ElementBatchEntry value) [instance] :1026
void Element::ElementBatchEntry(::g::Fuse::Elements::ElementBatchEntry* value)
{
    _ElementBatchEntry = value;
}

// public Uno.UX.Size2 get_ExplicitTransformOrigin() [instance] :2521
::g::Uno::UX::Size2 Element::ExplicitTransformOrigin()
{
    uStackFrame __("Fuse.Elements.Element", "get_ExplicitTransformOrigin()");
    ::g::Fuse::Elements::ExplicitTransformOrigin* to = uAs< ::g::Fuse::Elements::ExplicitTransformOrigin*>(TransformOrigin(), ::TYPES[19/*Fuse.Elements.ExplicitTransformOrigin*/]);

    if (to != NULL)
        return uPtr(to)->Origin;

    return uDefault< ::g::Uno::UX::Size2>();
}

// public void set_ExplicitTransformOrigin(Uno.UX.Size2 value) [instance] :2528
void Element::ExplicitTransformOrigin(::g::Uno::UX::Size2 value)
{
    uStackFrame __("Fuse.Elements.Element", "set_ExplicitTransformOrigin(Uno.UX.Size2)");
    SetExplicitTransformOrigin(value, (uObject*)this);
}

// protected internal float2 GetArrangePaddingSize(Fuse.LayoutParams lp) [instance] :2019
::g::Uno::Float2 Element::GetArrangePaddingSize(::g::Fuse::LayoutParams lp)
{
    uStackFrame __("Fuse.Elements.Element", "GetArrangePaddingSize(Fuse.LayoutParams)");
    return uPtr(_boxSizing)->CalcArrangePaddingSize(this, lp);
}

// internal float2 GetLayoutPositionIn(Fuse.Visual target) [instance] :2226
::g::Uno::Float2 Element::GetLayoutPositionIn(::g::Fuse::Visual* target)
{
    uStackFrame __("Fuse.Elements.Element", "GetLayoutPositionIn(Fuse.Visual)");
    Element* e = this;
    ::g::Uno::Float2 p = ::g::Uno::Float2__New1(0.0f);

    do
    {
        p = ::g::Uno::Float2__op_Addition2(p, uPtr(e)->ActualPosition());
        e = uAs<Element*>(uPtr(e)->Parent(), Element_typeof());
    }
    while ((e != target) && (e != NULL));

    return p;
}

// internal Uno.Recti GetViewportInvertPixelRect(Fuse.DrawContext dc, Uno.Rect localRegion) [instance] :748
::g::Uno::Recti Element::GetViewportInvertPixelRect(::g::Fuse::DrawContext* dc, ::g::Uno::Rect localRegion)
{
    uStackFrame __("Fuse.Elements.Element", "GetViewportInvertPixelRect(Fuse.DrawContext,Uno.Rect)");
    ::g::Uno::Float4x4 transformMatrix = uPtr(dc)->GetLocalToClipTransform(this);
    ::g::Uno::Rect esr = ::g::Uno::Rect__Transform(localRegion, transformMatrix);
    ::g::Uno::Float2 low = ::g::Uno::Math::Floor2(::g::Uno::Float2__op_Addition(0.005f, ::g::Uno::Float2__op_Multiply2(::g::Uno::Float2__op_Division1(::g::Uno::Float2__op_Addition1(::g::Uno::Math::Min3(esr.Minimum(), esr.Maximum()), 1.0f), 2.0f), ::g::Uno::Float2__op_Implicit1(dc->GLViewportPixelSize()))));
    ::g::Uno::Float2 high = ::g::Uno::Math::Ceil2(::g::Uno::Float2__op_Subtraction1(::g::Uno::Float2__op_Multiply2(::g::Uno::Float2__op_Division1(::g::Uno::Float2__op_Addition1(::g::Uno::Math::Max3(esr.Minimum(), esr.Maximum()), 1.0f), 2.0f), ::g::Uno::Float2__op_Implicit1(dc->GLViewportPixelSize())), 0.005f));
    ::g::Uno::Recti r = ::g::Uno::Recti__New1((int)low.X, (int)((float)dc->GLViewportPixelSize().Y - high.Y), (int)high.X, (int)((float)dc->GLViewportPixelSize().Y - low.Y));
    return r;
}

// public Uno.Recti GetVisibleViewportInvertPixelRect(Fuse.DrawContext dc, Fuse.VisualBounds localRegion) [instance] :764
::g::Uno::Recti Element::GetVisibleViewportInvertPixelRect(::g::Fuse::DrawContext* dc, ::g::Fuse::VisualBounds* localRegion)
{
    uStackFrame __("Fuse.Elements.Element", "GetVisibleViewportInvertPixelRect(Fuse.DrawContext,Fuse.VisualBounds)");

    if (uPtr(localRegion)->IsInfinite())
        return uPtr(dc)->Scissor();

    if (uPtr(localRegion)->IsEmpty())
        return ::g::Uno::Recti__New1(0, 0, 0, 0);

    ::g::Uno::Recti s = uPtr(dc)->Scissor();
    ::g::Uno::Recti v = GetViewportInvertPixelRect(dc, uPtr(localRegion)->FlatRect());
    ::g::Uno::Recti i = ::g::Uno::Recti__Intersect(s, v);

    if ((i.Size().X < 0) || (i.Size().Y < 0))
        return ::g::Uno::Recti__New1(0, 0, 0, 0);

    return i;
}

// private void GMSReset() [instance] :1928
void Element::GMSReset()
{
    _gmsCount = 0;
    _gmsAt = 0;
}

// private bool get_HasActiveEffects() [instance] :965
bool Element::HasActiveEffects()
{
    uStackFrame __("Fuse.Elements.Element", "get_HasActiveEffects()");
    ::g::Uno::Collections::List__Enumerator<uStrong< ::g::Fuse::Effects::Effect*> > ret31;

    if (HasEffects())

        for (::g::Uno::Collections::List__Enumerator<uStrong< ::g::Fuse::Effects::Effect*> > enum2 = (::g::Uno::Collections::List__GetEnumerator_fn(uPtr(_effects), &ret31), ret31); enum2.MoveNext(::TYPES[12/*Uno.Collections.List<Fuse.Effects.Effect>.Enumerator*/]); )
        {
            ::g::Fuse::Effects::Effect* e = enum2.Current(::TYPES[12/*Uno.Collections.List<Fuse.Effects.Effect>.Enumerator*/]);

            if (uPtr(e)->Active())
                return true;
        }

    return false;
}

// private bool get_HasCompositionEffect() [instance] :985
bool Element::HasCompositionEffect()
{
    return _compositionEffects > 0;
}

// private bool get_HasEffects() [instance] :959
bool Element::HasEffects()
{
    uStackFrame __("Fuse.Elements.Element", "get_HasEffects()");
    return (_effects != NULL) && (uPtr(_effects)->Count() > 0);
}

// internal bool HasLayoutIn(Fuse.Visual target) [instance] :2210
bool Element::HasLayoutIn(::g::Fuse::Visual* target)
{
    uStackFrame __("Fuse.Elements.Element", "HasLayoutIn(Fuse.Visual)");
    Element* e = this;

    while (e != target)
    {
        e = uAs<Element*>(uPtr(e)->Parent(), Element_typeof());

        if (e == NULL)
            return false;
    }

    return true;
}

// public Uno.UX.Size get_Height() [instance] :1461
::g::Uno::UX::Size Element::Height()
{
    return _height;
}

// public void set_Height(Uno.UX.Size value) [instance] :1462
void Element::Height(::g::Uno::UX::Size value)
{
    uStackFrame __("Fuse.Elements.Element", "set_Height(Uno.UX.Size)");

    if (::g::Uno::UX::Size__op_Inequality(_height, value))
    {
        _height = value;
        InvalidateLayout(2);
    }
}

// public Fuse.Elements.HitTestMode get_HitTestMode() [instance] :1340
int Element::HitTestMode()
{
    uStackFrame __("Fuse.Elements.Element", "get_HitTestMode()");
    int ret33;
    return (::g::Fuse::Visual__Get_fn(this, ::TYPES[31/*Fuse.Visual.Get<Fuse.Elements.HitTestMode>*/], uCRef<int>(524288), uCRef<int>(5), &ret33), ret33);
}

// public void set_HitTestMode(Fuse.Elements.HitTestMode value) [instance] :1341
void Element::HitTestMode(int value)
{
    uStackFrame __("Fuse.Elements.Element", "set_HitTestMode(Fuse.Elements.HitTestMode)");
    SetHitTestMode(value, (uObject*)this);
}

// internal float2 get_IntendedPosition() [instance] :1882
::g::Uno::Float2 Element::IntendedPosition()
{
    uStackFrame __("Fuse.Elements.Element", "get_IntendedPosition()");
    return ActualPosition();
}

// internal float2 get_IntendedSize() [instance] :1877
::g::Uno::Float2 Element::IntendedSize()
{
    return _intendedSize;
}

// internal void InternArrangePaddingBox(Fuse.LayoutParams lp) [instance] :2195
void Element::InternArrangePaddingBox(::g::Fuse::LayoutParams lp)
{
    uStackFrame __("Fuse.Elements.Element", "InternArrangePaddingBox(Fuse.LayoutParams)");
    ArrangePaddingBox(lp);
}

// internal float2 InternGetContentSize(Fuse.LayoutParams lp) [instance] :2009
::g::Uno::Float2 Element::InternGetContentSize(::g::Fuse::LayoutParams lp)
{
    uStackFrame __("Fuse.Elements.Element", "InternGetContentSize(Fuse.LayoutParams)");
    return GetContentSize(lp);
}

// public void InvalidateRenderBoundsWithEffects() [instance] :2667
void Element::InvalidateRenderBoundsWithEffects()
{
    uStackFrame __("Fuse.Elements.Element", "InvalidateRenderBoundsWithEffects()");
    OnInvalidateRenderBoundsWithEffects();

    if (Parent() != NULL)
        uPtr(Parent())->InvalidateRenderBounds();
}

// public bool IsPointInside(float2 localPoint) [instance] :1327
bool Element::IsPointInside(::g::Uno::Float2 localPoint)
{
    return !((((localPoint.X < 0.0f) || (localPoint.Y < 0.0f)) || (localPoint.X > ActualSize().X)) || (localPoint.Y > ActualSize().Y));
}

// public Uno.UX.Size get_LimitHeight() [instance] :3443
::g::Uno::UX::Size Element::LimitHeight()
{
    uStackFrame __("Fuse.Elements.Element", "get_LimitHeight()");
    ::g::Uno::UX::Size ret34;
    return (::g::Fuse::Visual__Get_fn(this, ::TYPES[32/*Fuse.Visual.Get<Uno.UX.Size>*/], uCRef<int>(16777216), uCRef(::g::Uno::UX::Size__Auto()), &ret34), ret34);
}

// public void set_LimitHeight(Uno.UX.Size value) [instance] :3444
void Element::LimitHeight(::g::Uno::UX::Size value)
{
    uStackFrame __("Fuse.Elements.Element", "set_LimitHeight(Uno.UX.Size)");

    if (::g::Uno::UX::Size__op_Inequality(LimitHeight(), value))
    {
        ::g::Fuse::Visual__Set_fn(this, ::TYPES[33/*Fuse.Visual.Set<Uno.UX.Size>*/], uCRef<int>(16777216), uCRef(value), uCRef(::g::Uno::UX::Size__Auto()));
        InvalidateLayout(2);
    }
}

// public Uno.UX.Size get_LimitWidth() [instance] :3461
::g::Uno::UX::Size Element::LimitWidth()
{
    uStackFrame __("Fuse.Elements.Element", "get_LimitWidth()");
    ::g::Uno::UX::Size ret35;
    return (::g::Fuse::Visual__Get_fn(this, ::TYPES[32/*Fuse.Visual.Get<Uno.UX.Size>*/], uCRef<int>(8388608), uCRef(::g::Uno::UX::Size__Auto()), &ret35), ret35);
}

// public void set_LimitWidth(Uno.UX.Size value) [instance] :3462
void Element::LimitWidth(::g::Uno::UX::Size value)
{
    uStackFrame __("Fuse.Elements.Element", "set_LimitWidth(Uno.UX.Size)");

    if (::g::Uno::UX::Size__op_Inequality(LimitWidth(), value))
    {
        ::g::Fuse::Visual__Set_fn(this, ::TYPES[33/*Fuse.Visual.Set<Uno.UX.Size>*/], uCRef<int>(8388608), uCRef(value), uCRef(::g::Uno::UX::Size__Auto()));
        InvalidateLayout(2);
    }
}

// public float4 get_Margin() [instance] :1646
::g::Uno::Float4 Element::Margin()
{
    uStackFrame __("Fuse.Elements.Element", "get_Margin()");
    ::g::Uno::Float4 ret36;
    return (::g::Fuse::Visual__Get_fn(this, ::TYPES[34/*Fuse.Visual.Get<float4>*/], uCRef<int>(1024), uCRef(::g::Uno::Float4__New1(0.0f)), &ret36), ret36);
}

// public void set_Margin(float4 value) [instance] :1647
void Element::Margin(::g::Uno::Float4 value)
{
    uStackFrame __("Fuse.Elements.Element", "set_Margin(float4)");

    if (::g::Uno::Float4__op_Inequality(Margin(), value))
    {
        ::g::Fuse::Visual__Set_fn(this, ::TYPES[35/*Fuse.Visual.Set<float4>*/], uCRef<int>(1024), uCRef(value), uCRef(::g::Uno::Float4__New1(0.0f)));
        InvalidateLayout(2);
    }
}

// public Uno.UX.Size get_MaxHeight() [instance] :1545
::g::Uno::UX::Size Element::MaxHeight()
{
    uStackFrame __("Fuse.Elements.Element", "get_MaxHeight()");
    ::g::Uno::UX::Size ret37;
    return (::g::Fuse::Visual__Get_fn(this, ::TYPES[32/*Fuse.Visual.Get<Uno.UX.Size>*/], uCRef<int>(512), uCRef(::g::Uno::UX::Size__Auto()), &ret37), ret37);
}

// public void set_MaxHeight(Uno.UX.Size value) [instance] :1546
void Element::MaxHeight(::g::Uno::UX::Size value)
{
    uStackFrame __("Fuse.Elements.Element", "set_MaxHeight(Uno.UX.Size)");

    if (::g::Uno::UX::Size__op_Inequality(MaxHeight(), value))
    {
        ::g::Fuse::Visual__Set_fn(this, ::TYPES[33/*Fuse.Visual.Set<Uno.UX.Size>*/], uCRef<int>(512), uCRef(value), uCRef(::g::Uno::UX::Size__Auto()));
        InvalidateLayout(2);
    }
}

// public Uno.UX.Size get_MaxWidth() [instance] :1524
::g::Uno::UX::Size Element::MaxWidth()
{
    uStackFrame __("Fuse.Elements.Element", "get_MaxWidth()");
    ::g::Uno::UX::Size ret38;
    return (::g::Fuse::Visual__Get_fn(this, ::TYPES[32/*Fuse.Visual.Get<Uno.UX.Size>*/], uCRef<int>(256), uCRef(::g::Uno::UX::Size__Auto()), &ret38), ret38);
}

// public void set_MaxWidth(Uno.UX.Size value) [instance] :1525
void Element::MaxWidth(::g::Uno::UX::Size value)
{
    uStackFrame __("Fuse.Elements.Element", "set_MaxWidth(Uno.UX.Size)");

    if (::g::Uno::UX::Size__op_Inequality(MaxWidth(), value))
    {
        ::g::Fuse::Visual__Set_fn(this, ::TYPES[33/*Fuse.Visual.Set<Uno.UX.Size>*/], uCRef<int>(256), uCRef(value), uCRef(::g::Uno::UX::Size__Auto()));
        InvalidateLayout(2);
    }
}

// public Uno.UX.Size get_MinHeight() [instance] :1503
::g::Uno::UX::Size Element::MinHeight()
{
    uStackFrame __("Fuse.Elements.Element", "get_MinHeight()");
    ::g::Uno::UX::Size ret39;
    return (::g::Fuse::Visual__Get_fn(this, ::TYPES[32/*Fuse.Visual.Get<Uno.UX.Size>*/], uCRef<int>(128), uCRef(::g::Uno::UX::Size__Auto()), &ret39), ret39);
}

// public void set_MinHeight(Uno.UX.Size value) [instance] :1504
void Element::MinHeight(::g::Uno::UX::Size value)
{
    uStackFrame __("Fuse.Elements.Element", "set_MinHeight(Uno.UX.Size)");

    if (::g::Uno::UX::Size__op_Inequality(MinHeight(), value))
    {
        ::g::Fuse::Visual__Set_fn(this, ::TYPES[33/*Fuse.Visual.Set<Uno.UX.Size>*/], uCRef<int>(128), uCRef(value), uCRef(::g::Uno::UX::Size__Auto()));
        InvalidateLayout(2);
    }
}

// public Uno.UX.Size get_MinWidth() [instance] :1482
::g::Uno::UX::Size Element::MinWidth()
{
    uStackFrame __("Fuse.Elements.Element", "get_MinWidth()");
    ::g::Uno::UX::Size ret40;
    return (::g::Fuse::Visual__Get_fn(this, ::TYPES[32/*Fuse.Visual.Get<Uno.UX.Size>*/], uCRef<int>(64), uCRef(::g::Uno::UX::Size__Auto()), &ret40), ret40);
}

// public void set_MinWidth(Uno.UX.Size value) [instance] :1483
void Element::MinWidth(::g::Uno::UX::Size value)
{
    uStackFrame __("Fuse.Elements.Element", "set_MinWidth(Uno.UX.Size)");

    if (::g::Uno::UX::Size__op_Inequality(MinWidth(), value))
    {
        ::g::Fuse::Visual__Set_fn(this, ::TYPES[33/*Fuse.Visual.Set<Uno.UX.Size>*/], uCRef<int>(64), uCRef(value), uCRef(::g::Uno::UX::Size__Auto()));
        InvalidateLayout(2);
    }
}

// private bool get_NeedsClipping() [instance] :709
bool Element::NeedsClipping()
{
    return ClipToBounds();
}

// private extern void NotifyRooted() [instance] :2836
void Element::NotifyRooted()
{
    uStackFrame __("Fuse.Elements.Element", "NotifyRooted()");
    ::g::Uno::Collections::List__Enumerator<uStrong<uDelegate*> > ret22;

    if (_rootedListeners != NULL)

        for (::g::Uno::Collections::List__Enumerator<uStrong<uDelegate*> > enum7 = (::g::Uno::Collections::List__GetEnumerator_fn(uPtr(RootedListeners()), &ret22), ret22); enum7.MoveNext(::TYPES[13/*Uno.Collections.List<Uno.Action>.Enumerator*/]); )
        {
            uDelegate* l = enum7.Current(::TYPES[13/*Uno.Collections.List<Uno.Action>.Enumerator*/]);
            uPtr(l)->InvokeVoid();
        }
}

// private void NotifyTreeRedererOpacityChanged() [instance] :1236
void Element::NotifyTreeRedererOpacityChanged()
{
    uStackFrame __("Fuse.Elements.Element", "NotifyTreeRedererOpacityChanged()");

    if (IsRootingCompleted())
    {
        uObject* t = TreeRenderer();

        if (t != NULL)
            ::g::Fuse::Elements::ITreeRenderer::OpacityChanged(uInterface(uPtr(t), ::TYPES[14/*Fuse.Elements.ITreeRenderer*/]), this, Opacity());
    }
}

// private void NotifyTreeRendererHitTestModeChanged() [instance] :1226
void Element::NotifyTreeRendererHitTestModeChanged()
{
    uStackFrame __("Fuse.Elements.Element", "NotifyTreeRendererHitTestModeChanged()");

    if (IsRootingCompleted())
    {
        uObject* t = TreeRenderer();

        if (t != NULL)
            ::g::Fuse::Elements::ITreeRenderer::HitTestModeChanged(uInterface(uPtr(t), ::TYPES[14/*Fuse.Elements.ITreeRenderer*/]), this, HitTestMode() != 0);
    }
}

// private void NotifyTreeRendererPlaced() [instance] :2188
void Element::NotifyTreeRendererPlaced()
{
    uStackFrame __("Fuse.Elements.Element", "NotifyTreeRendererPlaced()");
    uObject* t = TreeRenderer();

    if (t != NULL)
        ::g::Fuse::Elements::ITreeRenderer::Placed(uInterface(uPtr(t), ::TYPES[14/*Fuse.Elements.ITreeRenderer*/]), this);
}

// private void NotifyTreeRendererRooted() [instance] :1270
void Element::NotifyTreeRendererRooted()
{
    uStackFrame __("Fuse.Elements.Element", "NotifyTreeRendererRooted()");
    uObject* t = TreeRenderer();

    if (t != NULL)
    {
        ::g::Fuse::Elements::ITreeRenderer::Rooted(uInterface(uPtr(t), ::TYPES[14/*Fuse.Elements.ITreeRenderer*/]), this);
        ::g::Fuse::Elements::ITreeRenderer::OpacityChanged(uInterface(t, ::TYPES[14/*Fuse.Elements.ITreeRenderer*/]), this, Opacity());
        ::g::Fuse::Elements::ITreeRenderer::IsVisibleChanged(uInterface(t, ::TYPES[14/*Fuse.Elements.ITreeRenderer*/]), this, IsVisible());
        ::g::Fuse::Elements::ITreeRenderer::IsEnabledChanged(uInterface(t, ::TYPES[14/*Fuse.Elements.ITreeRenderer*/]), this, IsEnabled());
        ::g::Fuse::Elements::ITreeRenderer::ClipToBoundsChanged(uInterface(t, ::TYPES[14/*Fuse.Elements.ITreeRenderer*/]), this, ClipToBounds());
        ::g::Fuse::Elements::ITreeRenderer::HitTestModeChanged(uInterface(t, ::TYPES[14/*Fuse.Elements.ITreeRenderer*/]), this, HitTestMode() != 0);

        if (HasChildren())
            ::g::Fuse::Elements::ITreeRenderer::ZOrderChanged(uInterface(uPtr(t), ::TYPES[14/*Fuse.Elements.ITreeRenderer*/]), this, ZOrder());
    }
}

// private void NotifyTreeRendererRootingStarted() [instance] :1263
void Element::NotifyTreeRendererRootingStarted()
{
    uStackFrame __("Fuse.Elements.Element", "NotifyTreeRendererRootingStarted()");
    uObject* t = TreeRenderer();

    if (t != NULL)
        ::g::Fuse::Elements::ITreeRenderer::RootingStarted(uInterface(uPtr(t), ::TYPES[14/*Fuse.Elements.ITreeRenderer*/]), this);
}

// private void NotifyTreeRendererTransformChanged() [instance] :1206
void Element::NotifyTreeRendererTransformChanged()
{
    uStackFrame __("Fuse.Elements.Element", "NotifyTreeRendererTransformChanged()");

    if (!_transformChanged)
    {
        ::g::Fuse::UpdateManager::AddDeferredAction(uDelegate::New(::TYPES[15/*Uno.Action*/], (void*)Element__SetNewTransform_fn, this), 1, ::g::Fuse::LayoutPriority::Post());
        _transformChanged = true;
    }
}

// private void NotifyTreeRendererUnrooted() [instance] :1286
void Element::NotifyTreeRendererUnrooted()
{
    uStackFrame __("Fuse.Elements.Element", "NotifyTreeRendererUnrooted()");
    uObject* t = TreeRenderer();

    if (t != NULL)
        ::g::Fuse::Elements::ITreeRenderer::Unrooted(uInterface(uPtr(TreeRenderer()), ::TYPES[14/*Fuse.Elements.ITreeRenderer*/]), this);
}

// private void NotifyTreeRendererZOrderChanged() [instance] :1189
void Element::NotifyTreeRendererZOrderChanged()
{
    uStackFrame __("Fuse.Elements.Element", "NotifyTreeRendererZOrderChanged()");

    if (HasChildren())
        ::g::Fuse::UpdateManager::AddDeferredAction(uDelegate::New(::TYPES[15/*Uno.Action*/], (void*)Element__OnZOrderChanged_fn, this), 1, ::g::Fuse::LayoutPriority::Post());
}

// private extern void NotifyUnrooted() [instance] :2851
void Element::NotifyUnrooted()
{
    uStackFrame __("Fuse.Elements.Element", "NotifyUnrooted()");
    ::g::Uno::Collections::List__Enumerator<uStrong<uDelegate*> > ret23;

    if (_unrootedListeners != NULL)

        for (::g::Uno::Collections::List__Enumerator<uStrong<uDelegate*> > enum8 = (::g::Uno::Collections::List__GetEnumerator_fn(uPtr(UnrootedListeners()), &ret23), ret23); enum8.MoveNext(::TYPES[13/*Uno.Collections.List<Uno.Action>.Enumerator*/]); )
        {
            uDelegate* l = enum8.Current(::TYPES[13/*Uno.Collections.List<Uno.Action>.Enumerator*/]);
            uPtr(l)->InvokeVoid();
        }
}

// public Uno.UX.Size2 get_Offset() [instance] :1693
::g::Uno::UX::Size2 Element::Offset()
{
    uStackFrame __("Fuse.Elements.Element", "get_Offset()");
    ::g::Uno::UX::Size2 ret41;
    return (::g::Fuse::Visual__Get_fn(this, ::TYPES[23/*Fuse.Visual.Get<Uno.UX.Size2>*/], uCRef<int>(8192), uCRef(::g::Uno::UX::Size2__Auto()), &ret41), ret41);
}

// public void set_Offset(Uno.UX.Size2 value) [instance] :1694
void Element::Offset(::g::Uno::UX::Size2 value)
{
    uStackFrame __("Fuse.Elements.Element", "set_Offset(Uno.UX.Size2)");

    if (::g::Uno::UX::Size2__op_Inequality(Offset(), value))
    {
        ::g::Fuse::Visual__Set_fn(this, ::TYPES[24/*Fuse.Visual.Set<Uno.UX.Size2>*/], uCRef<int>(8192), uCRef(value), uCRef(::g::Uno::UX::Size2__Auto()));
        InvalidateLayout(2);
    }
}

// private void OnEffectAdded(Fuse.Effects.Effect e) [instance] :988
void Element::OnEffectAdded(::g::Fuse::Effects::Effect* e)
{
    uStackFrame __("Fuse.Elements.Element", "OnEffectAdded(Fuse.Effects.Effect)");

    if (uPtr(e)->Type() == 1)
        _compositionEffects++;

    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Effects()), ::TYPES[10/*Uno.Collections.ICollection<Fuse.Effects.Effect>*/]), e);
    uPtr(e)->add_RenderingChanged(uDelegate::New(::TYPES[17/*Uno.Action<Fuse.Effects.Effect>*/], (void*)Element__OnEffectRenderingChanged_fn, this));
    e->add_RenderBoundsChanged(uDelegate::New(::TYPES[17/*Uno.Action<Fuse.Effects.Effect>*/], (void*)Element__OnEffectRenderBoundsChanged_fn, this));
    InvalidateVisual();
}

// private void OnEffectRemoved(Fuse.Effects.Effect e) [instance] :999
void Element::OnEffectRemoved(::g::Fuse::Effects::Effect* e)
{
    uStackFrame __("Fuse.Elements.Element", "OnEffectRemoved(Fuse.Effects.Effect)");
    bool ret24;

    if (uPtr(e)->Type() == 1)
        _compositionEffects--;

    ::g::Uno::Collections::ICollection::Remove_ex(uInterface(uPtr(Effects()), ::TYPES[10/*Uno.Collections.ICollection<Fuse.Effects.Effect>*/]), e, &ret24);
    uPtr(e)->remove_RenderingChanged(uDelegate::New(::TYPES[17/*Uno.Action<Fuse.Effects.Effect>*/], (void*)Element__OnEffectRenderingChanged_fn, this));
    e->remove_RenderBoundsChanged(uDelegate::New(::TYPES[17/*Uno.Action<Fuse.Effects.Effect>*/], (void*)Element__OnEffectRenderBoundsChanged_fn, this));
    InvalidateVisual();
}

// private void OnEffectRenderBoundsChanged(Fuse.Effects.Effect e) [instance] :1015
void Element::OnEffectRenderBoundsChanged(::g::Fuse::Effects::Effect* e)
{
    uStackFrame __("Fuse.Elements.Element", "OnEffectRenderBoundsChanged(Fuse.Effects.Effect)");
    InvalidateRenderBoundsWithEffects();
}

// private void OnEffectRenderingChanged(Fuse.Effects.Effect e) [instance] :1010
void Element::OnEffectRenderingChanged(::g::Fuse::Effects::Effect* e)
{
    uStackFrame __("Fuse.Elements.Element", "OnEffectRenderingChanged(Fuse.Effects.Effect)");
    InvalidateVisual();
}

// private void OnHitTestChildren(Fuse.HitTestContext htc) [instance] :1368
void Element::OnHitTestChildren(::g::Fuse::HitTestContext* htc)
{
    uStackFrame __("Fuse.Elements.Element", "OnHitTestChildren(Fuse.HitTestContext)");
    ::g::Fuse::Visual* ret25;

    if (HasVisualChildren())
    {
        EnsureSortedZOrder();

        for (int i = uPtr(ZOrder())->Count() - 1; i >= 0; --i)
            uPtr((::g::Uno::Collections::List__get_Item_fn(uPtr(ZOrder()), uCRef<int>(i), &ret25), ret25))->HitTest(htc);
    }
}

// private void OnInvalidateRenderBoundsWithEffects() [instance] :2658
void Element::OnInvalidateRenderBoundsWithEffects()
{
    uStackFrame __("Fuse.Elements.Element", "OnInvalidateRenderBoundsWithEffects()");

    if (ElementBatchEntry() != NULL)
        uPtr(ElementBatchEntry())->InvalidateRenderBounds();

    _renderBoundsWithEffects = NULL;
}

// private void OnOpacityChanged(Uno.UX.IPropertyListener origin) [instance] :2386
void Element::OnOpacityChanged(uObject* origin)
{
    uStackFrame __("Fuse.Elements.Element", "OnOpacityChanged(Uno.UX.IPropertyListener)");
    OnPropertyChanged1(Element::_opacityName(), origin);
    InvalidateVisualComposition();
    NotifyTreeRedererOpacityChanged();
}

// private void OnPreplacement() [instance] :2090
void Element::OnPreplacement()
{
    uStackFrame __("Fuse.Elements.Element", "OnPreplacement()");

    if (::g::Uno::Delegate::op_Inequality(Preplacement1, NULL))
        uPtr(Preplacement1)->Invoke(2, this, (::g::Fuse::Elements::PreplacementArgs*)::g::Fuse::Elements::PreplacementArgs::New2(_placedBefore != NULL));
}

// private void OnVisibilityChanged(Fuse.Elements.Visibility oldVisibility, Uno.UX.IPropertyListener origin) [instance] :1616
void Element::OnVisibilityChanged(int oldVisibility, uObject* origin)
{
    uStackFrame __("Fuse.Elements.Element", "OnVisibilityChanged(Fuse.Elements.Visibility,Uno.UX.IPropertyListener)");
    OnPropertyChanged1(Element::_visibilityName(), origin);
    OnLocalVisibleChanged();

    if ((oldVisibility == 1) || (Visibility() == 1))
        InvalidateLayout(2);

    InvalidateVisualComposition();
}

// private void OnZOrderChanged() [instance] :1195
void Element::OnZOrderChanged()
{
    uStackFrame __("Fuse.Elements.Element", "OnZOrderChanged()");

    if (IsRootingCompleted())
    {
        uObject* t = TreeRenderer();

        if (t != NULL)
            ::g::Fuse::Elements::ITreeRenderer::ZOrderChanged(uInterface(uPtr(t), ::TYPES[14/*Fuse.Elements.ITreeRenderer*/]), this, ZOrder());
    }
}

// public float get_Opacity() [instance] :2374
float Element::Opacity()
{
    uStackFrame __("Fuse.Elements.Element", "get_Opacity()");
    float ret42;
    return (::g::Fuse::Visual__Get_fn(this, ::TYPES[25/*Fuse.Visual.Get<float>*/], uCRef<int>(4194304), uCRef(1.0f), &ret42), ret42);
}

// public void set_Opacity(float value) [instance] :2375
void Element::Opacity(float value)
{
    uStackFrame __("Fuse.Elements.Element", "set_Opacity(float)");
    SetOpacity(value, (uObject*)this);
}

// public float4 get_Padding() [instance] :1676
::g::Uno::Float4 Element::Padding()
{
    uStackFrame __("Fuse.Elements.Element", "get_Padding()");
    ::g::Uno::Float4 ret43;
    return (::g::Fuse::Visual__Get_fn(this, ::TYPES[34/*Fuse.Visual.Get<float4>*/], uCRef<int>(2048), uCRef(::g::Uno::Float4__New1(0.0f)), &ret43), ret43);
}

// public void set_Padding(float4 value) [instance] :1677
void Element::Padding(::g::Uno::Float4 value)
{
    uStackFrame __("Fuse.Elements.Element", "set_Padding(float4)");

    if (::g::Uno::Float4__op_Inequality(Padding(), value))
    {
        ::g::Fuse::Visual__Set_fn(this, ::TYPES[35/*Fuse.Visual.Set<float4>*/], uCRef<int>(2048), uCRef(value), uCRef(::g::Uno::Float4__New1(0.0f)));
        InvalidateLayout(2);
    }
}

// internal void PerformPlacement(float2 position, float2 size, bool temp) [instance] :2116
void Element::PerformPlacement(::g::Uno::Float2 position, ::g::Uno::Float2 size, bool temp)
{
    uStackFrame __("Fuse.Elements.Element", "PerformPlacement(float2,float2,bool)");
    ::g::Uno::Float2 s = ::g::Uno::Math::Max3(size, ::g::Uno::Float2__New1(0.0f));
    _ppPrevSize = _intendedSize;
    _ppPrevPosition = ActualPosition();
    bool newSize = ::g::Uno::Float2__op_Inequality(_ppPrevSize, s) || ::g::Uno::Float2__op_Inequality(_actualSize, s);
    bool newPosition = (_ppPrevPosition.X != position.X) || (_ppPrevPosition.Y != position.Y);
    bool newParent = _placedBefore != Parent();

    if ((newParent || newPosition) || newSize)
    {
        if (!temp && !_pendingDispatchPlacement)
        {
            OnPreplacement();

            if (TreeRenderer() != NULL)
                ::g::Fuse::UpdateManager::AddDeferredAction1(uDelegate::New(::TYPES[15/*Uno.Action*/], (void*)Element__NotifyTreeRendererPlaced_fn, this), ::g::Fuse::LayoutPriority::Placement());

            if (::g::Uno::Delegate::op_Inequality(Placed1, NULL))
            {
                ::g::Fuse::UpdateManager::AddDeferredAction1(uDelegate::New(::TYPES[15/*Uno.Action*/], (void*)Element__DispatchPlacement_fn, this), ::g::Fuse::LayoutPriority::Placement());
                _pendingDispatchPlacement = true;
            }
            else
                _placedBefore = Parent();
        }
    }

    if (newSize)
    {
        _actualSize = s;

        if (!temp)
            _intendedSize = s;
    }

    if (newSize || newParent)
    {
        InvalidateRenderBounds();
        InvalidateHitTestBounds();
    }

    if (newPosition)
    {
        _actualPosition = position;
        _haveActualPositionCache = false;
        InvalidateVisualComposition();
    }

    if ((newSize || newParent) || newPosition)
        InvalidateLocalTransform();
}

// public generated void add_Placed(Fuse.PlacedHandler value) [instance] :2078
void Element::add_Placed(uDelegate* value)
{
    uStackFrame __("Fuse.Elements.Element", "add_Placed(Fuse.PlacedHandler)");
    Placed1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(Placed1, value), ::TYPES[0/*Fuse.PlacedHandler*/]);
}

// public generated void remove_Placed(Fuse.PlacedHandler value) [instance] :2078
void Element::remove_Placed(uDelegate* value)
{
    uStackFrame __("Fuse.Elements.Element", "remove_Placed(Fuse.PlacedHandler)");
    Placed1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(Placed1, value), ::TYPES[0/*Fuse.PlacedHandler*/]);
}

// public generated void add_Preplacement(Fuse.Elements.PreplacementHandler value) [instance] :2082
void Element::add_Preplacement(uDelegate* value)
{
    uStackFrame __("Fuse.Elements.Element", "add_Preplacement(Fuse.Elements.PreplacementHandler)");
    Preplacement1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(Preplacement1, value), ::TYPES[39/*Fuse.Elements.PreplacementHandler*/]);
}

// public generated void remove_Preplacement(Fuse.Elements.PreplacementHandler value) [instance] :2082
void Element::remove_Preplacement(uDelegate* value)
{
    uStackFrame __("Fuse.Elements.Element", "remove_Preplacement(Fuse.Elements.PreplacementHandler)");
    Preplacement1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(Preplacement1, value), ::TYPES[39/*Fuse.Elements.PreplacementHandler*/]);
}

// private void RemoveChildElementFromBatching(Fuse.Elements.Element elm) [instance] :591
void Element::RemoveChildElementFromBatching(Element* elm)
{
    uStackFrame __("Fuse.Elements.Element", "RemoveChildElementFromBatching(Fuse.Elements.Element)");

    if (uPtr(elm)->ElementBatchEntry() != NULL)
    {
        uPtr(uPtr(elm)->ElementBatchEntry())->OnRemoved();
        elm->ElementBatchEntry(NULL);
        _elementBatchValid = false;
    }

    if (_elementBatcher != NULL)
        uPtr(_elementBatcher)->Remove(elm);
}

// public Fuse.VisualBounds get_RenderBoundsWithEffects() [instance] :696
::g::Fuse::VisualBounds* Element::RenderBoundsWithEffects()
{
    uStackFrame __("Fuse.Elements.Element", "get_RenderBoundsWithEffects()");

    if (_renderBoundsWithEffects == NULL)
        _renderBoundsWithEffects = CalcRenderBoundsWithEffects();

    return _renderBoundsWithEffects;
}

// public Fuse.VisualBounds get_RenderBoundsWithoutEffects() [instance] :715
::g::Fuse::VisualBounds* Element::RenderBoundsWithoutEffects()
{
    uStackFrame __("Fuse.Elements.Element", "get_RenderBoundsWithoutEffects()");

    if (_renderBoundsWithoutEffects == NULL)
    {
        _renderBoundsWithoutEffects = CalcRenderBounds();

        if (ClipToBounds())
            _renderBoundsWithoutEffects = uPtr(_renderBoundsWithoutEffects)->IntersectXY(::g::Fuse::VisualBounds::Rect(::g::Uno::Float2__New1(0.0f), ActualSize()));
    }

    return _renderBoundsWithoutEffects;
}

// internal void RequestLayout() [instance] :1982
void Element::RequestLayout()
{
    uStackFrame __("Fuse.Elements.Element", "RequestLayout()");
    uPtr(_boxSizing)->RequestLayout(this);
}

// private extern Uno.Collections.List<Uno.Action> get_RootedListeners() [instance] :2833
::g::Uno::Collections::List* Element::RootedListeners()
{
    ::g::Uno::Collections::List* ind12 = _rootedListeners;
    return (ind12 != NULL) ? ind12 : (::g::Uno::Collections::List*)(_rootedListeners = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New2(::TYPES[36/*Uno.Collections.List<Uno.Action>*/], 1)));
}

// public void SetExplicitTransformOrigin(Uno.UX.Size2 value, Uno.UX.IPropertyListener origin) [instance] :2531
void Element::SetExplicitTransformOrigin(::g::Uno::UX::Size2 value, uObject* origin)
{
    uStackFrame __("Fuse.Elements.Element", "SetExplicitTransformOrigin(Uno.UX.Size2,Uno.UX.IPropertyListener)");
    ::g::Fuse::Elements::ExplicitTransformOrigin* to = uAs< ::g::Fuse::Elements::ExplicitTransformOrigin*>(TransformOrigin(), ::TYPES[19/*Fuse.Elements.ExplicitTransformOrigin*/]);

    if (to == NULL)
    {
        to = ::g::Fuse::Elements::ExplicitTransformOrigin::New1();
        to->Origin = value;
        TransformOrigin((uObject*)to);
    }
    else
    {
        if (::g::Uno::UX::Size2__op_Equality(uPtr(to)->Origin, value))
            return;

        uPtr(to)->Origin = value;
        InvalidateLocalTransform();
    }

    OnPropertyChanged1(Element::ExplicitTransformOriginName(), origin);
}

// public void SetHitTestMode(Fuse.Elements.HitTestMode value, Uno.UX.IPropertyListener origin) [instance] :1344
void Element::SetHitTestMode(int value, uObject* origin)
{
    uStackFrame __("Fuse.Elements.Element", "SetHitTestMode(Fuse.Elements.HitTestMode,Uno.UX.IPropertyListener)");
    ::g::Fuse::Visual__Set_fn(this, ::TYPES[20/*Fuse.Visual.Set<Fuse.Elements.HitTestMode>*/], uCRef<int>(524288), uCRef<int>(value), uCRef<int>(5));
    InvalidateHitTestBounds();
    OnPropertyChanged1(Element::_hitTestModeName(), origin);
    NotifyTreeRendererHitTestModeChanged();
}

// private void SetNewTransform() [instance] :1215
void Element::SetNewTransform()
{
    uStackFrame __("Fuse.Elements.Element", "SetNewTransform()");

    if (IsRootingCompleted())
    {
        uObject* t = TreeRenderer();

        if (t != NULL)
            ::g::Fuse::Elements::ITreeRenderer::TransformChanged(uInterface(uPtr(t), ::TYPES[14/*Fuse.Elements.ITreeRenderer*/]), this);
    }

    _transformChanged = false;
}

// public void SetOpacity(float value, Uno.UX.IPropertyListener origin) [instance] :2378
void Element::SetOpacity(float value, uObject* origin)
{
    uStackFrame __("Fuse.Elements.Element", "SetOpacity(float,Uno.UX.IPropertyListener)");

    if (Opacity() != value)
    {
        ::g::Fuse::Visual__Set_fn(this, ::TYPES[21/*Fuse.Visual.Set<float>*/], uCRef<int>(4194304), uCRef(value), uCRef(1.0f));
        OnOpacityChanged(origin);
    }
}

// public void SetVisibility(Fuse.Elements.Visibility value, Uno.UX.IPropertyListener origin) [instance] :1608
void Element::SetVisibility(int value, uObject* origin)
{
    uStackFrame __("Fuse.Elements.Element", "SetVisibility(Fuse.Elements.Visibility,Uno.UX.IPropertyListener)");
    int old = _visibility;
    _visibility = value;
    OnVisibilityChanged(old, origin);
}

// private bool ShouldBatch() [instance] :568
bool Element::ShouldBatch()
{
    uStackFrame __("Fuse.Elements.Element", "ShouldBatch()");

    if (ZOrderChildCount() < 10)
        return false;

    int batchable = 0;

    for (int i = 0; i < ZOrderChildCount(); i++)
    {
        ::g::Fuse::Visual* v = GetZOrderChild(i);

        if (::g::Fuse::Elements::ElementBatcher::ShouldBatchElement(v))
            batchable++;
    }

    return batchable > (::g::Uno::Collections::ICollection::Count(uInterface(uPtr(Children()), ::TYPES[22/*Uno.Collections.ICollection<Fuse.Node>*/])) / 2);
}

// public Fuse.Elements.ITransformOrigin get_TransformOrigin() [instance] :2505
uObject* Element::TransformOrigin()
{
    uStackFrame __("Fuse.Elements.Element", "get_TransformOrigin()");
    uObject* ret44;
    return (::g::Fuse::Visual__Get_fn(this, ::TYPES[37/*Fuse.Visual.Get<Fuse.Elements.ITransformOrigin>*/], uCRef<int>(2097152), Element::DefaultTransformOrigin(), &ret44), ret44);
}

// public void set_TransformOrigin(Fuse.Elements.ITransformOrigin value) [instance] :2506
void Element::TransformOrigin(uObject* value)
{
    uStackFrame __("Fuse.Elements.Element", "set_TransformOrigin(Fuse.Elements.ITransformOrigin)");

    if (TransformOrigin() != value)
    {
        ::g::Fuse::Visual__Set_fn(this, ::TYPES[38/*Fuse.Visual.Set<Fuse.Elements.ITransformOrigin>*/], uCRef<int>(2097152), value, Element::DefaultTransformOrigin());
        InvalidateLocalTransform();
    }
}

// private extern Uno.Collections.List<Uno.Action> get_UnrootedListeners() [instance] :2848
::g::Uno::Collections::List* Element::UnrootedListeners()
{
    ::g::Uno::Collections::List* ind13 = _unrootedListeners;
    return (ind13 != NULL) ? ind13 : (::g::Uno::Collections::List*)(_unrootedListeners = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New2(::TYPES[36/*Uno.Collections.List<Uno.Action>*/], 1)));
}

// public Fuse.Elements.Visibility get_Visibility() [instance] :1604
int Element::Visibility()
{
    return _visibility;
}

// public void set_Visibility(Fuse.Elements.Visibility value) [instance] :1605
void Element::Visibility(int value)
{
    uStackFrame __("Fuse.Elements.Element", "set_Visibility(Fuse.Elements.Visibility)");
    SetVisibility(value, (uObject*)this);
}

// public Uno.UX.Size get_Width() [instance] :1439
::g::Uno::UX::Size Element::Width()
{
    return _width;
}

// public void set_Width(Uno.UX.Size value) [instance] :1440
void Element::Width(::g::Uno::UX::Size value)
{
    uStackFrame __("Fuse.Elements.Element", "set_Width(Uno.UX.Size)");

    if (::g::Uno::UX::Size__op_Inequality(_width, value))
    {
        _width = value;
        InvalidateLayout(2);
    }
}

// public Uno.UX.Size get_X() [instance] :1733
::g::Uno::UX::Size Element::X()
{
    uStackFrame __("Fuse.Elements.Element", "get_X()");
    ::g::Uno::UX::Size ret45;
    return (::g::Fuse::Visual__Get_fn(this, ::TYPES[32/*Fuse.Visual.Get<Uno.UX.Size>*/], uCRef<int>(16384), uCRef(::g::Uno::UX::Size__Auto()), &ret45), ret45);
}

// public void set_X(Uno.UX.Size value) [instance] :1734
void Element::X(::g::Uno::UX::Size value)
{
    uStackFrame __("Fuse.Elements.Element", "set_X(Uno.UX.Size)");

    if (::g::Uno::UX::Size__op_Inequality(X(), value))
    {
        ::g::Fuse::Visual__Set_fn(this, ::TYPES[33/*Fuse.Visual.Set<Uno.UX.Size>*/], uCRef<int>(16384), uCRef(value), uCRef(::g::Uno::UX::Size__Auto()));
        InvalidateLayout(2);
    }
}

// public Uno.UX.Size get_Y() [instance] :1750
::g::Uno::UX::Size Element::Y()
{
    uStackFrame __("Fuse.Elements.Element", "get_Y()");
    ::g::Uno::UX::Size ret46;
    return (::g::Fuse::Visual__Get_fn(this, ::TYPES[32/*Fuse.Visual.Get<Uno.UX.Size>*/], uCRef<int>(32768), uCRef(::g::Uno::UX::Size__Auto()), &ret46), ret46);
}

// public void set_Y(Uno.UX.Size value) [instance] :1751
void Element::Y(::g::Uno::UX::Size value)
{
    uStackFrame __("Fuse.Elements.Element", "set_Y(Uno.UX.Size)");

    if (::g::Uno::UX::Size__op_Inequality(Y(), value))
    {
        ::g::Fuse::Visual__Set_fn(this, ::TYPES[33/*Fuse.Visual.Set<Uno.UX.Size>*/], uCRef<int>(32768), uCRef(value), uCRef(::g::Uno::UX::Size__Auto()));
        InvalidateLayout(2);
    }
}

// internal static extern Uno.IDisposable VisualAppearedFactory(object obj, Uno.Action<Uno.Rect, float4x4> handler) [static] :2734
uObject* Element::VisualAppearedFactory(uObject* obj, uDelegate* handler)
{
    uStackFrame __("Fuse.Elements.Element", "VisualAppearedFactory(object,Uno.Action<Uno.Rect, float4x4>)");
    Element_typeof()->Init();
    return uIs(obj, Element_typeof()) ? (uObject*)Element__VisualAppeared::New1(uCast<Element*>(obj, Element_typeof()), handler) : (uObject*)Element__DefaultDisposable::Instance();
}

// internal static extern Uno.IDisposable VisualBoundsChangedFactory(object obj, Uno.Action<Uno.Rect> handler) [static] :2741
uObject* Element::VisualBoundsChangedFactory(uObject* obj, uDelegate* handler)
{
    uStackFrame __("Fuse.Elements.Element", "VisualBoundsChangedFactory(object,Uno.Action<Uno.Rect>)");
    Element_typeof()->Init();
    return uIs(obj, Element_typeof()) ? (uObject*)Element__BoundsChanged::New1(uCast<Element*>(obj, Element_typeof()), handler) : (uObject*)Element__DefaultDisposable::Instance();
}

// internal static extern Uno.IDisposable VisualDisappearedFactory(object obj, Uno.Action handler) [static] :2774
uObject* Element::VisualDisappearedFactory(uObject* obj, uDelegate* handler)
{
    uStackFrame __("Fuse.Elements.Element", "VisualDisappearedFactory(object,Uno.Action)");
    Element_typeof()->Init();
    return uIs(obj, Element_typeof()) ? (uObject*)Element__VisualDisappeared::New1(uCast<Element*>(obj, Element_typeof()), handler) : (uObject*)Element__DefaultDisposable::Instance();
}

// internal static extern Uno.IDisposable VisualTransformChangedFactory(object obj, Uno.Action<float4x4> handler) [static] :2701
uObject* Element::VisualTransformChangedFactory(uObject* obj, uDelegate* handler)
{
    uStackFrame __("Fuse.Elements.Element", "VisualTransformChangedFactory(object,Uno.Action<float4x4>)");
    Element_typeof()->Init();
    return uIs(obj, Element_typeof()) ? (uObject*)Element__TransformChanged::New1(uCast<Element*>(obj, Element_typeof()), handler) : (uObject*)Element__DefaultDisposable::Instance();
}
// }

// /Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Elements/1.0.2/caching/$.uno
// -----------------------------------------------------------------------------------------------

// internal sealed class ElementAtlas :624
// {
static void ElementAtlas_build(uType* type)
{
    ::STRINGS[13] = uString::Const("element not already inserted anywhere!");
    ::STRINGS[14] = uString::Const("wrong atlas again, dummy!");
    ::STRINGS[15] = uString::Const("Removing from wrong atlas");
    ::TYPES[40] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Elements::Element_typeof(), NULL);
    ::TYPES[41] = ::g::Uno::EventHandler_typeof();
    ::TYPES[42] = ::g::Uno::Collections::List__Enumerator_typeof()->MakeType(::g::Fuse::Elements::Element_typeof(), NULL);
    type->SetFields(0,
        ::TYPES[40/*Uno.Collections.List<Fuse.Elements.Element>*/], offsetof(::g::Fuse::Elements::ElementAtlas, _elements), 0,
        ::g::Fuse::Elements::ElementAtlasFramebuffer_typeof(), offsetof(::g::Fuse::Elements::ElementAtlas, _framebuffer), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::Elements::ElementAtlas, _invalidElements), 0,
        ::g::Fuse::Internal::RectPacker_typeof(), offsetof(::g::Fuse::Elements::ElementAtlas, _rectPacker), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::Elements::ElementAtlas, _spilledPixels), 0);
}

uType* ElementAtlas_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 5;
    options.ObjectSize = sizeof(ElementAtlas);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Elements.ElementAtlas", options);
    type->fp_build_ = ElementAtlas_build;
    type->fp_ctor_ = (void*)ElementAtlas__New1_fn;
    return type;
}

// public ElementAtlas() :636
void ElementAtlas__ctor__fn(ElementAtlas* __this)
{
    __this->ctor_();
}

// public bool AddElement(Fuse.Elements.Element elm) :668
void ElementAtlas__AddElement_fn(ElementAtlas* __this, ::g::Fuse::Elements::Element* elm, bool* __retval)
{
    *__retval = __this->AddElement(elm);
}

// public void Dispose() :643
void ElementAtlas__Dispose_fn(ElementAtlas* __this)
{
    __this->Dispose();
}

// private void FillFramebuffer(Fuse.DrawContext dc, bool drawAll, Uno.Rect scissorRectInClipSpace) :784
void ElementAtlas__FillFramebuffer_fn(ElementAtlas* __this, ::g::Fuse::DrawContext* dc, bool* drawAll, ::g::Uno::Rect* scissorRectInClipSpace)
{
    __this->FillFramebuffer(dc, *drawAll, *scissorRectInClipSpace);
}

// public static Uno.Rect GetScissorRectInClipSpace(Fuse.DrawContext dc) :752
void ElementAtlas__GetScissorRectInClipSpace_fn(::g::Fuse::DrawContext* dc, ::g::Uno::Rect* __retval)
{
    *__retval = ElementAtlas::GetScissorRectInClipSpace(dc);
}

// internal void InvalidateElement(Fuse.Elements.Element elm) :655
void ElementAtlas__InvalidateElement_fn(ElementAtlas* __this, ::g::Fuse::Elements::Element* elm)
{
    __this->InvalidateElement(elm);
}

// public ElementAtlas New() :636
void ElementAtlas__New1_fn(ElementAtlas** __retval)
{
    *__retval = ElementAtlas::New1();
}

// private void OnFramebufferCollected(object sender, Uno.EventArgs eventArgs) :649
void ElementAtlas__OnFramebufferCollected_fn(ElementAtlas* __this, uObject* sender, ::g::Uno::EventArgs* eventArgs)
{
    __this->OnFramebufferCollected(sender, eventArgs);
}

// public framebuffer PinAndValidateFramebuffer(Fuse.DrawContext dc) :757
void ElementAtlas__PinAndValidateFramebuffer_fn(ElementAtlas* __this, ::g::Fuse::DrawContext* dc, ::g::Uno::Graphics::Framebuffer** __retval)
{
    *__retval = __this->PinAndValidateFramebuffer(dc);
}

// public bool ReinsertElement(Fuse.Elements.Element elm) :710
void ElementAtlas__ReinsertElement_fn(ElementAtlas* __this, ::g::Fuse::Elements::Element* elm, bool* __retval)
{
    *__retval = __this->ReinsertElement(elm);
}

// public void RemoveElement(Fuse.Elements.Element elm) :692
void ElementAtlas__RemoveElement_fn(ElementAtlas* __this, ::g::Fuse::Elements::Element* elm)
{
    __this->RemoveElement(elm);
}

// public float get_SpilledRatio() :632
void ElementAtlas__get_SpilledRatio_fn(ElementAtlas* __this, float* __retval)
{
    *__retval = __this->SpilledRatio();
}

// public void Unpin() :779
void ElementAtlas__Unpin_fn(ElementAtlas* __this)
{
    __this->Unpin();
}

// private static float2 WindowCoordToClipSpace(float2 input, int2 viewportSize) :738
void ElementAtlas__WindowCoordToClipSpace_fn(::g::Uno::Float2* input, ::g::Uno::Int2* viewportSize, ::g::Uno::Float2* __retval)
{
    *__retval = ElementAtlas::WindowCoordToClipSpace(*input, *viewportSize);
}

// private static Uno.Rect WindowRectToClipSpace(Uno.Rect input, int2 viewportSize) :743
void ElementAtlas__WindowRectToClipSpace_fn(::g::Uno::Rect* input, ::g::Uno::Int2* viewportSize, ::g::Uno::Rect* __retval)
{
    *__retval = ElementAtlas::WindowRectToClipSpace(*input, *viewportSize);
}

// public ElementAtlas() [instance] :636
void ElementAtlas::ctor_()
{
    uStackFrame __("Fuse.Elements.ElementAtlas", ".ctor()");
    _elements = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[40/*Uno.Collections.List<Fuse.Elements.Element>*/]));
    _framebuffer = ::g::Fuse::Elements::ElementAtlasFramebuffer::New1();
    uPtr(_framebuffer)->add_FramebufferCollected(uDelegate::New(::TYPES[41/*Uno.EventHandler*/], (void*)ElementAtlas__OnFramebufferCollected_fn, this));
    _rectPacker = ::g::Fuse::Internal::RectPacker::New1(::g::Fuse::Elements::ElementAtlasFramebuffer::Size());
}

// public bool AddElement(Fuse.Elements.Element elm) [instance] :668
bool ElementAtlas::AddElement(::g::Fuse::Elements::Element* elm)
{
    uStackFrame __("Fuse.Elements.ElementAtlas", "AddElement(Fuse.Elements.Element)");
    ::g::Uno::Recti cacheRect;

    if (!::g::Fuse::Elements::Cache::GetCachingRect1(elm, &cacheRect))
        return false;

    ::g::Uno::Recti rect;

    if (!uPtr(_rectPacker)->TryAdd(cacheRect.Size(), &rect))
        return false;

    if (uPtr(elm)->ElementBatchEntry() == NULL)
        uPtr(elm)->ElementBatchEntry(::g::Fuse::Elements::ElementBatchEntry::New1(elm));

    ::g::Fuse::Elements::ElementBatchEntry* entry = uPtr(elm)->ElementBatchEntry();

    if (uPtr(entry)->_atlas != NULL)
        uPtr(uPtr(entry)->_atlas)->RemoveElement(elm);

    uPtr(entry)->_atlas = this;
    entry->_rect = rect;
    ::g::Uno::Collections::List__Add_fn(uPtr(_elements), elm);
    _invalidElements++;
    entry->IsValid = false;
    return true;
}

// public void Dispose() [instance] :643
void ElementAtlas::Dispose()
{
    uStackFrame __("Fuse.Elements.ElementAtlas", "Dispose()");
    uPtr(_framebuffer)->remove_FramebufferCollected(uDelegate::New(::TYPES[41/*Uno.EventHandler*/], (void*)ElementAtlas__OnFramebufferCollected_fn, this));
    uPtr(_framebuffer)->Dispose();
}

// private void FillFramebuffer(Fuse.DrawContext dc, bool drawAll, Uno.Rect scissorRectInClipSpace) [instance] :784
void ElementAtlas::FillFramebuffer(::g::Fuse::DrawContext* dc, bool drawAll, ::g::Uno::Rect scissorRectInClipSpace)
{
    uStackFrame __("Fuse.Elements.ElementAtlas", "FillFramebuffer(Fuse.DrawContext,bool,Uno.Rect)");
    ::g::Fuse::OrthographicFrustum* collection3;
    ::g::Uno::Collections::List__Enumerator<uStrong< ::g::Fuse::Elements::Element*> > ret7;
    float density = uPtr(dc)->ViewportPixelsPerPoint();
    ::g::Uno::Float2 viewport = ::g::Uno::Float2__op_Division1(::g::Uno::Float2__op_Implicit1(uPtr(_rectPacker)->Size()), density);

    for (::g::Uno::Collections::List__Enumerator<uStrong< ::g::Fuse::Elements::Element*> > enum2 = (::g::Uno::Collections::List__GetEnumerator_fn(uPtr(_elements), &ret7), ret7); enum2.MoveNext(::TYPES[42/*Uno.Collections.List<Fuse.Elements.Element>.Enumerator*/]); )
    {
        ::g::Fuse::Elements::Element* elm = enum2.Current(::TYPES[42/*Uno.Collections.List<Fuse.Elements.Element>.Enumerator*/]);
        ::g::Fuse::Elements::ElementBatchEntry* entry = uPtr(elm)->ElementBatchEntry();

        if (!uPtr(entry)->IsValid || drawAll)
        {
            ::g::Uno::Float4x4 localToClipTransform = uPtr(dc)->GetLocalToClipTransform(elm);
            ::g::Uno::Rect visibleRect = ::g::Uno::Rect__Transform(uPtr(uPtr(elm)->RenderBoundsWithEffects())->FlatRect(), localToClipTransform);

            if (!scissorRectInClipSpace.Intersects(visibleRect))
                continue;

            ::g::Uno::Recti cachingRect = ::g::Fuse::Elements::ElementBatch::GetCachingRect(elm);
            ::g::Uno::Float2 offset = ::g::Uno::Float2__op_Division1(::g::Uno::Float2__op_Implicit1(::g::Uno::Int2__op_Subtraction1(uPtr(entry)->_rect.Minimum(), cachingRect.Minimum())), density);
            ::g::Uno::Float4x4 translation = ::g::Uno::Matrix::Translation(offset.X, offset.Y, 0.0f);
            collection3 = ::g::Fuse::OrthographicFrustum::New1();
            ::g::Uno::Float2 ind4 = ::g::Uno::Float2__New2(0.0f, 0.0f);
            uPtr(collection3)->Origin(ind4);
            ;
            uPtr(collection3)->Size(viewport);
            viewport;
            ::g::Uno::Float4x4 ind5 = ::g::Uno::Matrix::Mul8(elm->WorldTransformInverse(), translation);
            uPtr(collection3)->LocalFromWorld(ind5);
            ;
            ::g::Fuse::OrthographicFrustum* cc = collection3;
            dc->PushViewport((uObject*)::g::Fuse::FixedViewport::New1(uPtr(_rectPacker)->Size(), density, (uObject*)cc));
            dc->PushScissor(entry->_rect);

            if (!drawAll)
                uPtr(dc)->Clear(::g::Uno::Float4__New1(0.0f), 1.0f);

            elm->CompositEffects(dc);
            dc->PopScissor();
            dc->PopViewport();

            if (!entry->IsValid)
                _invalidElements--;

            entry->IsValid = true;
        }
    }
}

// internal void InvalidateElement(Fuse.Elements.Element elm) [instance] :655
void ElementAtlas::InvalidateElement(::g::Fuse::Elements::Element* elm)
{
    uStackFrame __("Fuse.Elements.ElementAtlas", "InvalidateElement(Fuse.Elements.Element)");
    ::g::Fuse::Elements::ElementBatchEntry* entry = uPtr(elm)->ElementBatchEntry();

    if (entry == NULL)
        return;

    if (uPtr(entry)->IsValid)
    {
        _invalidElements++;
        uPtr(entry)->IsValid = false;
    }
}

// private void OnFramebufferCollected(object sender, Uno.EventArgs eventArgs) [instance] :649
void ElementAtlas::OnFramebufferCollected(uObject* sender, ::g::Uno::EventArgs* eventArgs)
{
    uStackFrame __("Fuse.Elements.ElementAtlas", "OnFramebufferCollected(object,Uno.EventArgs)");
    ::g::Uno::Collections::List__Enumerator<uStrong< ::g::Fuse::Elements::Element*> > ret8;

    for (::g::Uno::Collections::List__Enumerator<uStrong< ::g::Fuse::Elements::Element*> > enum1 = (::g::Uno::Collections::List__GetEnumerator_fn(uPtr(_elements), &ret8), ret8); enum1.MoveNext(::TYPES[42/*Uno.Collections.List<Fuse.Elements.Element>.Enumerator*/]); )
    {
        ::g::Fuse::Elements::Element* elm = enum1.Current(::TYPES[42/*Uno.Collections.List<Fuse.Elements.Element>.Enumerator*/]);
        InvalidateElement(elm);
    }
}

// public framebuffer PinAndValidateFramebuffer(Fuse.DrawContext dc) [instance] :757
::g::Uno::Graphics::Framebuffer* ElementAtlas::PinAndValidateFramebuffer(::g::Fuse::DrawContext* dc)
{
    uStackFrame __("Fuse.Elements.ElementAtlas", "PinAndValidateFramebuffer(Fuse.DrawContext)");
    ::g::Uno::Graphics::Framebuffer* fb = uPtr(_framebuffer)->Pin();

    if (_invalidElements > 0)
    {
        ::g::Uno::Rect scissorRectInClipSpace = ElementAtlas::GetScissorRectInClipSpace(dc);
        uPtr(dc)->PushRenderTarget(fb);
        bool drawAll = _invalidElements == uPtr(_elements)->Count();

        if (drawAll)
        {
            uPtr(dc)->Clear(::g::Uno::Float4__New1(0.0f), 1.0f);
            FillFramebuffer(dc, true, scissorRectInClipSpace);
        }
        else
            FillFramebuffer(dc, false, scissorRectInClipSpace);

        dc->PopRenderTarget();
    }

    return fb;
}

// public bool ReinsertElement(Fuse.Elements.Element elm) [instance] :710
bool ElementAtlas::ReinsertElement(::g::Fuse::Elements::Element* elm)
{
    uStackFrame __("Fuse.Elements.ElementAtlas", "ReinsertElement(Fuse.Elements.Element)");

    if (uPtr(elm)->ElementBatchEntry() == NULL)
        U_THROW(::g::Uno::Exception::New2(::STRINGS[13/*"element not...*/]));

    ::g::Fuse::Elements::ElementBatchEntry* entry = uPtr(elm)->ElementBatchEntry();

    if (uPtr(entry)->_atlas != this)
        U_THROW(::g::Uno::Exception::New2(::STRINGS[14/*"wrong atlas...*/]));

    ::g::Uno::Recti cacheRect;

    if (!::g::Fuse::Elements::Cache::GetCachingRect1(elm, &cacheRect))
        return false;

    ::g::Uno::Recti rect;

    if (!uPtr(_rectPacker)->TryAdd(cacheRect.Size(), &rect))
        return false;

    _spilledPixels = (_spilledPixels + uPtr(entry)->_rect.Area());
    entry->_rect = rect;

    if (entry->IsValid)
    {
        _invalidElements++;
        uPtr(entry)->IsValid = false;
    }

    return true;
}

// public void RemoveElement(Fuse.Elements.Element elm) [instance] :692
void ElementAtlas::RemoveElement(::g::Fuse::Elements::Element* elm)
{
    uStackFrame __("Fuse.Elements.ElementAtlas", "RemoveElement(Fuse.Elements.Element)");
    bool ret9;
    ::g::Fuse::Elements::ElementBatchEntry* entry = uPtr(elm)->ElementBatchEntry();

    if (uPtr(entry)->_atlas != this)
        U_THROW(::g::Uno::Exception::New2(::STRINGS[15/*"Removing fr...*/]));

    _spilledPixels = (_spilledPixels + uPtr(entry)->_rect.Area());

    if (!entry->IsValid)
        _invalidElements--;

    ::g::Uno::Collections::List__Remove_fn(uPtr(_elements), elm, &ret9);
    entry->_atlas = NULL;
}

// public float get_SpilledRatio() [instance] :632
float ElementAtlas::SpilledRatio()
{
    uStackFrame __("Fuse.Elements.ElementAtlas", "get_SpilledRatio()");
    return (float)_spilledPixels / (float)(uPtr(_rectPacker)->Size().X * uPtr(_rectPacker)->Size().Y);
}

// public void Unpin() [instance] :779
void ElementAtlas::Unpin()
{
    uStackFrame __("Fuse.Elements.ElementAtlas", "Unpin()");
    uPtr(_framebuffer)->Unpin();
}

// public static Uno.Rect GetScissorRectInClipSpace(Fuse.DrawContext dc) [static] :752
::g::Uno::Rect ElementAtlas::GetScissorRectInClipSpace(::g::Fuse::DrawContext* dc)
{
    uStackFrame __("Fuse.Elements.ElementAtlas", "GetScissorRectInClipSpace(Fuse.DrawContext)");
    return ElementAtlas::WindowRectToClipSpace(::g::Uno::Rect__op_Implicit(uPtr(dc)->Scissor()), uPtr(dc)->GLViewportPixelSize());
}

// public ElementAtlas New() [static] :636
ElementAtlas* ElementAtlas::New1()
{
    ElementAtlas* obj6 = (ElementAtlas*)uNew(ElementAtlas_typeof());
    obj6->ctor_();
    return obj6;
}

// private static float2 WindowCoordToClipSpace(float2 input, int2 viewportSize) [static] :738
::g::Uno::Float2 ElementAtlas::WindowCoordToClipSpace(::g::Uno::Float2 input, ::g::Uno::Int2 viewportSize)
{
    return ::g::Uno::Float2__op_Subtraction1(::g::Uno::Float2__op_Multiply1(::g::Uno::Float2__op_Division2(input, ::g::Uno::Float2__op_Implicit1(viewportSize)), 2.0f), 1.0f);
}

// private static Uno.Rect WindowRectToClipSpace(Uno.Rect input, int2 viewportSize) [static] :743
::g::Uno::Rect ElementAtlas::WindowRectToClipSpace(::g::Uno::Rect input, ::g::Uno::Int2 viewportSize)
{
    ::g::Uno::Float2 leftTop = ElementAtlas::WindowCoordToClipSpace(input.LeftTop(), viewportSize);
    ::g::Uno::Float2 rightBottom = ElementAtlas::WindowCoordToClipSpace(input.RightBottom(), viewportSize);
    return ::g::Uno::Rect__ContainingPoints(::g::Uno::Float2__New2(leftTop.X, -leftTop.Y), ::g::Uno::Float2__New2(rightBottom.X, -rightBottom.Y));
}
// }

// /Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Elements/1.0.2/caching/$.uno
// -----------------------------------------------------------------------------------------------

// internal sealed class ElementAtlasFramebuffer :335
// {
static void ElementAtlasFramebuffer_build(uType* type)
{
    ::STRINGS[16] = uString::Const("Cannot Collect while pinned!");
    ::STRINGS[17] = uString::Const("ElementAtlasFramebuffer already pinned");
    ::STRINGS[18] = uString::Const("ElementAtlasFramebuffer not already pinned");
    ::TYPES[41] = ::g::Uno::EventHandler_typeof();
    type->SetFields(0,
        ::g::Uno::Collections::LinkedListNode_typeof()->MakeType(::g::Fuse::Elements::ElementAtlasFramebufferPoolEntry_typeof(), NULL), offsetof(::g::Fuse::Elements::ElementAtlasFramebuffer, _fb), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Elements::ElementAtlasFramebuffer, _Pinned), 0,
        ::TYPES[41/*Uno.EventHandler*/], offsetof(::g::Fuse::Elements::ElementAtlasFramebuffer, FramebufferCollected1), 0);
}

uType* ElementAtlasFramebuffer_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.ObjectSize = sizeof(ElementAtlasFramebuffer);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Elements.ElementAtlasFramebuffer", options);
    type->fp_build_ = ElementAtlasFramebuffer_build;
    type->fp_ctor_ = (void*)ElementAtlasFramebuffer__New1_fn;
    return type;
}

// public generated ElementAtlasFramebuffer() :335
void ElementAtlasFramebuffer__ctor__fn(ElementAtlasFramebuffer* __this)
{
    __this->ctor_();
}

// internal void Collect() :378
void ElementAtlasFramebuffer__Collect_fn(ElementAtlasFramebuffer* __this)
{
    __this->Collect();
}

// public void Dispose() :340
void ElementAtlasFramebuffer__Dispose_fn(ElementAtlasFramebuffer* __this)
{
    __this->Dispose();
}

// internal generated void add_FramebufferCollected(Uno.EventHandler value) :376
void ElementAtlasFramebuffer__add_FramebufferCollected_fn(ElementAtlasFramebuffer* __this, uDelegate* value)
{
    __this->add_FramebufferCollected(value);
}

// internal generated void remove_FramebufferCollected(Uno.EventHandler value) :376
void ElementAtlasFramebuffer__remove_FramebufferCollected_fn(ElementAtlasFramebuffer* __this, uDelegate* value)
{
    __this->remove_FramebufferCollected(value);
}

// public generated ElementAtlasFramebuffer New() :335
void ElementAtlasFramebuffer__New1_fn(ElementAtlasFramebuffer** __retval)
{
    *__retval = ElementAtlasFramebuffer::New1();
}

// internal framebuffer Pin() :346
void ElementAtlasFramebuffer__Pin_fn(ElementAtlasFramebuffer* __this, ::g::Uno::Graphics::Framebuffer** __retval)
{
    *__retval = __this->Pin();
}

// internal generated bool get_Pinned() :338
void ElementAtlasFramebuffer__get_Pinned_fn(ElementAtlasFramebuffer* __this, bool* __retval)
{
    *__retval = __this->Pinned();
}

// private generated void set_Pinned(bool value) :338
void ElementAtlasFramebuffer__set_Pinned_fn(ElementAtlasFramebuffer* __this, bool* value)
{
    __this->Pinned(*value);
}

// public static int2 get_Size() :390
void ElementAtlasFramebuffer__get_Size_fn(::g::Uno::Int2* __retval)
{
    *__retval = ElementAtlasFramebuffer::Size();
}

// internal void Unpin() :368
void ElementAtlasFramebuffer__Unpin_fn(ElementAtlasFramebuffer* __this)
{
    __this->Unpin();
}

// public generated ElementAtlasFramebuffer() [instance] :335
void ElementAtlasFramebuffer::ctor_()
{
}

// internal void Collect() [instance] :378
void ElementAtlasFramebuffer::Collect()
{
    uStackFrame __("Fuse.Elements.ElementAtlasFramebuffer", "Collect()");
    ::g::Fuse::Elements::ElementAtlasFramebufferPoolEntry* ret2;

    if (Pinned())
        U_THROW(::g::Uno::Exception::New2(::STRINGS[16/*"Cannot Coll...*/]));

    if (::g::Uno::Delegate::op_Inequality(FramebufferCollected1, NULL))
        uPtr(FramebufferCollected1)->Invoke(2, this, (::g::Uno::EventArgs*)::g::Uno::EventArgs::New1());

    uPtr((::g::Uno::Collections::LinkedListNode__get_Value_fn(uPtr(_fb), &ret2), ret2))->Owner = NULL;
    _fb = NULL;
}

// public void Dispose() [instance] :340
void ElementAtlasFramebuffer::Dispose()
{
    uStackFrame __("Fuse.Elements.ElementAtlasFramebuffer", "Dispose()");

    if (_fb != NULL)
        Collect();
}

// internal generated void add_FramebufferCollected(Uno.EventHandler value) [instance] :376
void ElementAtlasFramebuffer::add_FramebufferCollected(uDelegate* value)
{
    uStackFrame __("Fuse.Elements.ElementAtlasFramebuffer", "add_FramebufferCollected(Uno.EventHandler)");
    FramebufferCollected1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(FramebufferCollected1, value), ::TYPES[41/*Uno.EventHandler*/]);
}

// internal generated void remove_FramebufferCollected(Uno.EventHandler value) [instance] :376
void ElementAtlasFramebuffer::remove_FramebufferCollected(uDelegate* value)
{
    uStackFrame __("Fuse.Elements.ElementAtlasFramebuffer", "remove_FramebufferCollected(Uno.EventHandler)");
    FramebufferCollected1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(FramebufferCollected1, value), ::TYPES[41/*Uno.EventHandler*/]);
}

// internal framebuffer Pin() [instance] :346
::g::Uno::Graphics::Framebuffer* ElementAtlasFramebuffer::Pin()
{
    uStackFrame __("Fuse.Elements.ElementAtlasFramebuffer", "Pin()");
    ::g::Fuse::Elements::ElementAtlasFramebufferPoolEntry* ret3;
    ::g::Fuse::Elements::ElementAtlasFramebufferPoolEntry* ret4;
    ::g::Fuse::Elements::ElementAtlasFramebufferPoolEntry* ret5;
    ::g::Fuse::Elements::ElementAtlasFramebufferPoolEntry* ret6;
    ::g::Fuse::Elements::ElementAtlasFramebufferPoolEntry* ret7;

    if (Pinned())
        U_THROW(::g::Uno::Exception::New2(::STRINGS[17/*"ElementAtla...*/]));

    Pinned(true);

    if (_fb == NULL)
    {
        ::g::Uno::Collections::LinkedListNode* fb = ::g::Fuse::Elements::ElementAtlasFramebufferPool::FindFramebuffer();

        if (uPtr((::g::Uno::Collections::LinkedListNode__get_Value_fn(uPtr(fb), &ret3), ret3))->Owner != NULL)
            uPtr(uPtr((::g::Uno::Collections::LinkedListNode__get_Value_fn(uPtr(fb), &ret4), ret4))->Owner)->Collect();

        uPtr((::g::Uno::Collections::LinkedListNode__get_Value_fn(uPtr(fb), &ret5), ret5))->Owner = this;
        _fb = fb;
    }
    else
        uPtr(uPtr((::g::Uno::Collections::LinkedListNode__get_Value_fn(uPtr(_fb), &ret6), ret6))->Pool)->UpdateUsage(_fb);

    return uPtr((::g::Uno::Collections::LinkedListNode__get_Value_fn(uPtr(_fb), &ret7), ret7))->Framebuffer;
}

// internal generated bool get_Pinned() [instance] :338
bool ElementAtlasFramebuffer::Pinned()
{
    return _Pinned;
}

// private generated void set_Pinned(bool value) [instance] :338
void ElementAtlasFramebuffer::Pinned(bool value)
{
    _Pinned = value;
}

// internal void Unpin() [instance] :368
void ElementAtlasFramebuffer::Unpin()
{
    uStackFrame __("Fuse.Elements.ElementAtlasFramebuffer", "Unpin()");

    if (!Pinned())
        U_THROW(::g::Uno::Exception::New2(::STRINGS[18/*"ElementAtla...*/]));

    Pinned(false);
}

// public generated ElementAtlasFramebuffer New() [static] :335
ElementAtlasFramebuffer* ElementAtlasFramebuffer::New1()
{
    ElementAtlasFramebuffer* obj1 = (ElementAtlasFramebuffer*)uNew(ElementAtlasFramebuffer_typeof());
    obj1->ctor_();
    return obj1;
}

// public static int2 get_Size() [static] :390
::g::Uno::Int2 ElementAtlasFramebuffer::Size()
{
    return ::g::Fuse::Elements::ElementAtlasFramebufferPool::ElementAtlasSize();
}
// }

// /Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Elements/1.0.2/caching/$.uno
// -----------------------------------------------------------------------------------------------

// internal static class ElementAtlasFramebufferPool :433
// {
static void ElementAtlasFramebufferPool_build(uType* type)
{
    ::TYPES[41] = ::g::Uno::EventHandler_typeof();
    type->SetFields(0,
        ::g::Uno::Int2_typeof(), (uintptr_t)&::g::Fuse::Elements::ElementAtlasFramebufferPool::_elementAtlasSize_, uFieldFlagsStatic,
        ::g::Uno::Bool_typeof(), (uintptr_t)&::g::Fuse::Elements::ElementAtlasFramebufferPool::_isInitialized_, uFieldFlagsStatic,
        ::g::Fuse::Elements::ElementAtlasFramebufferPoolImpl_typeof(), (uintptr_t)&::g::Fuse::Elements::ElementAtlasFramebufferPool::_poolImpl_, uFieldFlagsStatic,
        ::TYPES[41/*Uno.EventHandler*/], (uintptr_t)&::g::Fuse::Elements::ElementAtlasFramebufferPool::AtlasSizeChanged1_, uFieldFlagsStatic);
}

uClassType* ElementAtlasFramebufferPool_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 4;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Elements.ElementAtlasFramebufferPool", options);
    type->fp_build_ = ElementAtlasFramebufferPool_build;
    return type;
}

// public static generated void add_AtlasSizeChanged(Uno.EventHandler value) :451
void ElementAtlasFramebufferPool__add_AtlasSizeChanged_fn(uDelegate* value)
{
    ElementAtlasFramebufferPool::add_AtlasSizeChanged(value);
}

// public static generated void remove_AtlasSizeChanged(Uno.EventHandler value) :451
void ElementAtlasFramebufferPool__remove_AtlasSizeChanged_fn(uDelegate* value)
{
    ElementAtlasFramebufferPool::remove_AtlasSizeChanged(value);
}

// public static int2 get_ElementAtlasSize() :468
void ElementAtlasFramebufferPool__get_ElementAtlasSize_fn(::g::Uno::Int2* __retval)
{
    *__retval = ElementAtlasFramebufferPool::ElementAtlasSize();
}

// private static void set_ElementAtlasSize(int2 value) :473
void ElementAtlasFramebufferPool__set_ElementAtlasSize_fn(::g::Uno::Int2* value)
{
    ElementAtlasFramebufferPool::ElementAtlasSize(*value);
}

// private static void EnsurePool() :487
void ElementAtlasFramebufferPool__EnsurePool_fn()
{
    ElementAtlasFramebufferPool::EnsurePool();
}

// public static Uno.Collections.LinkedListNode<Fuse.Elements.ElementAtlasFramebufferPoolEntry> FindFramebuffer() :498
void ElementAtlasFramebufferPool__FindFramebuffer_fn(::g::Uno::Collections::LinkedListNode** __retval)
{
    *__retval = ElementAtlasFramebufferPool::FindFramebuffer();
}

// public static void Initialize() :436
void ElementAtlasFramebufferPool__Initialize_fn()
{
    ElementAtlasFramebufferPool::Initialize();
}

// private static void OnResized(object sender, Uno.EventArgs args) :461
void ElementAtlasFramebufferPool__OnResized_fn(uObject* sender, ::g::Uno::EventArgs* args)
{
    ElementAtlasFramebufferPool::OnResized(sender, args);
}

// private static void UpdateElementAtlasSize() :453
void ElementAtlasFramebufferPool__UpdateElementAtlasSize_fn()
{
    ElementAtlasFramebufferPool::UpdateElementAtlasSize();
}

::g::Uno::Int2 ElementAtlasFramebufferPool::_elementAtlasSize_;
bool ElementAtlasFramebufferPool::_isInitialized_;
uSStrong< ::g::Fuse::Elements::ElementAtlasFramebufferPoolImpl*> ElementAtlasFramebufferPool::_poolImpl_;
uSStrong<uDelegate*> ElementAtlasFramebufferPool::AtlasSizeChanged1_;

// private static void EnsurePool() [static] :487
void ElementAtlasFramebufferPool::EnsurePool()
{
    if (ElementAtlasFramebufferPool::_poolImpl_ != NULL)
        return;

    ElementAtlasFramebufferPool::Initialize();
    ElementAtlasFramebufferPool::_poolImpl_ = ::g::Fuse::Elements::ElementAtlasFramebufferPoolImpl::New1();
}

// public static Uno.Collections.LinkedListNode<Fuse.Elements.ElementAtlasFramebufferPoolEntry> FindFramebuffer() [static] :498
::g::Uno::Collections::LinkedListNode* ElementAtlasFramebufferPool::FindFramebuffer()
{
    uStackFrame __("Fuse.Elements.ElementAtlasFramebufferPool", "FindFramebuffer()");
    ElementAtlasFramebufferPool::EnsurePool();
    return uPtr(ElementAtlasFramebufferPool::_poolImpl_)->FindFramebuffer();
}

// public static void Initialize() [static] :436
void ElementAtlasFramebufferPool::Initialize()
{
    uStackFrame __("Fuse.Elements.ElementAtlasFramebufferPool", "Initialize()");

    if (ElementAtlasFramebufferPool::_isInitialized_)
        return;

    ElementAtlasFramebufferPool::UpdateElementAtlasSize();
    ::g::Fuse::Platform::SystemUI::add_FrameChanged(uDelegate::New(::TYPES[41/*Uno.EventHandler*/], (void*)ElementAtlasFramebufferPool__OnResized_fn));
    ElementAtlasFramebufferPool::_isInitialized_ = true;
}

// private static void OnResized(object sender, Uno.EventArgs args) [static] :461
void ElementAtlasFramebufferPool::OnResized(uObject* sender, ::g::Uno::EventArgs* args)
{
    ElementAtlasFramebufferPool::UpdateElementAtlasSize();
}

// private static void UpdateElementAtlasSize() [static] :453
void ElementAtlasFramebufferPool::UpdateElementAtlasSize()
{
    uStackFrame __("Fuse.Elements.ElementAtlasFramebufferPool", "UpdateElementAtlasSize()");
    ::g::Uno::Int2 clientSize = ::g::Fuse::Elements::DisplayHelpers::DisplaySizeHint();
    ElementAtlasFramebufferPool::ElementAtlasSize(::g::Uno::Int2__New2(::g::Uno::Math::Min8((clientSize.X * 3) / 2, ::g::Uno::Graphics::Texture2D::MaxSize()), ::g::Uno::Math::Min8(clientSize.Y / 2, ::g::Uno::Graphics::Texture2D::MaxSize())));
}

// public static int2 get_ElementAtlasSize() [static] :468
::g::Uno::Int2 ElementAtlasFramebufferPool::ElementAtlasSize()
{
    uStackFrame __("Fuse.Elements.ElementAtlasFramebufferPool", "get_ElementAtlasSize()");
    ElementAtlasFramebufferPool::Initialize();
    return ElementAtlasFramebufferPool::_elementAtlasSize_;
}

// private static void set_ElementAtlasSize(int2 value) [static] :473
void ElementAtlasFramebufferPool::ElementAtlasSize(::g::Uno::Int2 value)
{
    uStackFrame __("Fuse.Elements.ElementAtlasFramebufferPool", "set_ElementAtlasSize(int2)");

    if (::g::Uno::Int2__op_Inequality(ElementAtlasFramebufferPool::_elementAtlasSize_, value))
    {
        ElementAtlasFramebufferPool::_elementAtlasSize_ = value;

        if (::g::Uno::Delegate::op_Inequality(ElementAtlasFramebufferPool::AtlasSizeChanged1_, NULL))
            uPtr(ElementAtlasFramebufferPool::AtlasSizeChanged1_)->Invoke(2, NULL, (::g::Uno::EventArgs*)::g::Uno::EventArgs::New1());
    }
}

// public static generated void add_AtlasSizeChanged(Uno.EventHandler value) [static] :451
void ElementAtlasFramebufferPool::add_AtlasSizeChanged(uDelegate* value)
{
    uStackFrame __("Fuse.Elements.ElementAtlasFramebufferPool", "add_AtlasSizeChanged(Uno.EventHandler)");
    ElementAtlasFramebufferPool::AtlasSizeChanged1_ = uCast<uDelegate*>(::g::Uno::Delegate::Combine(ElementAtlasFramebufferPool::AtlasSizeChanged1_, value), ::TYPES[41/*Uno.EventHandler*/]);
}

// public static generated void remove_AtlasSizeChanged(Uno.EventHandler value) [static] :451
void ElementAtlasFramebufferPool::remove_AtlasSizeChanged(uDelegate* value)
{
    uStackFrame __("Fuse.Elements.ElementAtlasFramebufferPool", "remove_AtlasSizeChanged(Uno.EventHandler)");
    ElementAtlasFramebufferPool::AtlasSizeChanged1_ = uCast<uDelegate*>(::g::Uno::Delegate::Remove(ElementAtlasFramebufferPool::AtlasSizeChanged1_, value), ::TYPES[41/*Uno.EventHandler*/]);
}
// }

// /Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Elements/1.0.2/caching/$.uno
// -----------------------------------------------------------------------------------------------

// internal sealed class ElementAtlasFramebufferPoolEntry :393
// {
static void ElementAtlasFramebufferPoolEntry_build(uType* type)
{
    type->SetFields(0,
        ::g::Uno::Graphics::Framebuffer_typeof(), offsetof(::g::Fuse::Elements::ElementAtlasFramebufferPoolEntry, Framebuffer), 0,
        ::g::Fuse::Elements::ElementAtlasFramebuffer_typeof(), offsetof(::g::Fuse::Elements::ElementAtlasFramebufferPoolEntry, Owner), 0,
        ::g::Fuse::Elements::ElementAtlasFramebufferPoolImpl_typeof(), offsetof(::g::Fuse::Elements::ElementAtlasFramebufferPoolEntry, Pool), 0);
}

uType* ElementAtlasFramebufferPoolEntry_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.ObjectSize = sizeof(ElementAtlasFramebufferPoolEntry);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Elements.ElementAtlasFramebufferPoolEntry", options);
    type->fp_build_ = ElementAtlasFramebufferPoolEntry_build;
    type->fp_ctor_ = (void*)ElementAtlasFramebufferPoolEntry__New1_fn;
    return type;
}

// public generated ElementAtlasFramebufferPoolEntry() :393
void ElementAtlasFramebufferPoolEntry__ctor__fn(ElementAtlasFramebufferPoolEntry* __this)
{
    __this->ctor_();
}

// public void Collect() :399
void ElementAtlasFramebufferPoolEntry__Collect_fn(ElementAtlasFramebufferPoolEntry* __this)
{
    __this->Collect();
}

// public void Dispose() :405
void ElementAtlasFramebufferPoolEntry__Dispose_fn(ElementAtlasFramebufferPoolEntry* __this)
{
    __this->Dispose();
}

// public generated ElementAtlasFramebufferPoolEntry New() :393
void ElementAtlasFramebufferPoolEntry__New1_fn(ElementAtlasFramebufferPoolEntry** __retval)
{
    *__retval = ElementAtlasFramebufferPoolEntry::New1();
}

// public generated ElementAtlasFramebufferPoolEntry() [instance] :393
void ElementAtlasFramebufferPoolEntry::ctor_()
{
}

// public void Collect() [instance] :399
void ElementAtlasFramebufferPoolEntry::Collect()
{
    uStackFrame __("Fuse.Elements.ElementAtlasFramebufferPoolEntry", "Collect()");

    if (Owner != NULL)
        uPtr(Owner)->Collect();
}

// public void Dispose() [instance] :405
void ElementAtlasFramebufferPoolEntry::Dispose()
{
    uStackFrame __("Fuse.Elements.ElementAtlasFramebufferPoolEntry", "Dispose()");

    if (Framebuffer != NULL)
    {
        uPtr(Framebuffer)->Dispose();
        Framebuffer = NULL;
    }
}

// public generated ElementAtlasFramebufferPoolEntry New() [static] :393
ElementAtlasFramebufferPoolEntry* ElementAtlasFramebufferPoolEntry::New1()
{
    ElementAtlasFramebufferPoolEntry* obj1 = (ElementAtlasFramebufferPoolEntry*)uNew(ElementAtlasFramebufferPoolEntry_typeof());
    obj1->ctor_();
    return obj1;
}
// }

// /Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Elements/1.0.2/caching/$.uno
// -----------------------------------------------------------------------------------------------

// internal sealed class ElementAtlasFramebufferPoolImpl :505
// {
static void ElementAtlasFramebufferPoolImpl_build(uType* type)
{
    ::TYPES[41] = ::g::Uno::EventHandler_typeof();
    ::TYPES[43] = ::g::Uno::Collections::LinkedList_typeof()->MakeType(::g::Fuse::Elements::ElementAtlasFramebufferPoolEntry_typeof(), NULL);
    type->SetInterfaces(
        ::g::Fuse::Resources::ISoftDisposable_typeof(), offsetof(ElementAtlasFramebufferPoolImpl_type, interface0));
    type->SetFields(0,
        ::TYPES[43/*Uno.Collections.LinkedList<Fuse.Elements.ElementAtlasFramebufferPoolEntry>*/], offsetof(::g::Fuse::Elements::ElementAtlasFramebufferPoolImpl, _framebufferPool), 0);
}

ElementAtlasFramebufferPoolImpl_type* ElementAtlasFramebufferPoolImpl_typeof()
{
    static uSStrong<ElementAtlasFramebufferPoolImpl_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(ElementAtlasFramebufferPoolImpl);
    options.TypeSize = sizeof(ElementAtlasFramebufferPoolImpl_type);
    type = (ElementAtlasFramebufferPoolImpl_type*)uClassType::New("Fuse.Elements.ElementAtlasFramebufferPoolImpl", options);
    type->fp_build_ = ElementAtlasFramebufferPoolImpl_build;
    type->fp_ctor_ = (void*)ElementAtlasFramebufferPoolImpl__New1_fn;
    type->interface0.fp_SoftDispose = (void(*)(uObject*))ElementAtlasFramebufferPoolImpl__FuseResourcesISoftDisposableSoftDispose_fn;
    return type;
}

// internal ElementAtlasFramebufferPoolImpl() :509
void ElementAtlasFramebufferPoolImpl__ctor__fn(ElementAtlasFramebufferPoolImpl* __this)
{
    __this->ctor_();
}

// private Uno.Collections.LinkedListNode<Fuse.Elements.ElementAtlasFramebufferPoolEntry> AddEntry() :582
void ElementAtlasFramebufferPoolImpl__AddEntry_fn(ElementAtlasFramebufferPoolImpl* __this, ::g::Uno::Collections::LinkedListNode** __retval)
{
    *__retval = __this->AddEntry();
}

// private extern void DiscardPool() :541
void ElementAtlasFramebufferPoolImpl__DiscardPool_fn(ElementAtlasFramebufferPoolImpl* __this)
{
    __this->DiscardPool();
}

// private void EnsurePool() :572
void ElementAtlasFramebufferPoolImpl__EnsurePool_fn(ElementAtlasFramebufferPoolImpl* __this)
{
    __this->EnsurePool();
}

// internal Uno.Collections.LinkedListNode<Fuse.Elements.ElementAtlasFramebufferPoolEntry> FindFramebuffer() :590
void ElementAtlasFramebufferPoolImpl__FindFramebuffer_fn(ElementAtlasFramebufferPoolImpl* __this, ::g::Uno::Collections::LinkedListNode** __retval)
{
    *__retval = __this->FindFramebuffer();
}

// private void Fuse.Resources.ISoftDisposable.SoftDispose() :567
void ElementAtlasFramebufferPoolImpl__FuseResourcesISoftDisposableSoftDispose_fn(ElementAtlasFramebufferPoolImpl* __this)
{
    uStackFrame __("Fuse.Elements.ElementAtlasFramebufferPoolImpl", "Fuse.Resources.ISoftDisposable.SoftDispose()");
    __this->DiscardPool();
}

// internal ElementAtlasFramebufferPoolImpl New() :509
void ElementAtlasFramebufferPoolImpl__New1_fn(ElementAtlasFramebufferPoolImpl** __retval)
{
    *__retval = ElementAtlasFramebufferPoolImpl::New1();
}

// private void OnAtlasSizeChanged(object sender, Uno.EventArgs eventArgs) :562
void ElementAtlasFramebufferPoolImpl__OnAtlasSizeChanged_fn(ElementAtlasFramebufferPoolImpl* __this, uObject* sender, ::g::Uno::EventArgs* eventArgs)
{
    __this->OnAtlasSizeChanged(sender, eventArgs);
}

// internal void UpdateUsage(Uno.Collections.LinkedListNode<Fuse.Elements.ElementAtlasFramebufferPoolEntry> fb) :606
void ElementAtlasFramebufferPoolImpl__UpdateUsage_fn(ElementAtlasFramebufferPoolImpl* __this, ::g::Uno::Collections::LinkedListNode* fb)
{
    __this->UpdateUsage(fb);
}

// internal ElementAtlasFramebufferPoolImpl() [instance] :509
void ElementAtlasFramebufferPoolImpl::ctor_()
{
    uStackFrame __("Fuse.Elements.ElementAtlasFramebufferPoolImpl", ".ctor()");
    ::g::Fuse::Resources::DisposalManager::Add1((uObject*)this);
    ::g::Fuse::Elements::ElementAtlasFramebufferPool::add_AtlasSizeChanged(uDelegate::New(::TYPES[41/*Uno.EventHandler*/], (void*)ElementAtlasFramebufferPoolImpl__OnAtlasSizeChanged_fn, this));
}

// private Uno.Collections.LinkedListNode<Fuse.Elements.ElementAtlasFramebufferPoolEntry> AddEntry() [instance] :582
::g::Uno::Collections::LinkedListNode* ElementAtlasFramebufferPoolImpl::AddEntry()
{
    uStackFrame __("Fuse.Elements.ElementAtlasFramebufferPoolImpl", "AddEntry()");
    ::g::Uno::Collections::LinkedListNode* ret2;
    ::g::Fuse::Elements::ElementAtlasFramebufferPoolEntry* entry = ::g::Fuse::Elements::ElementAtlasFramebufferPoolEntry::New1();
    entry->Pool = this;
    entry->Framebuffer = ::g::Uno::Graphics::Framebuffer::New1(::g::Fuse::Elements::ElementAtlasFramebufferPool::ElementAtlasSize(), 3, 0);
    return (::g::Uno::Collections::LinkedList__AddLast_fn(uPtr(_framebufferPool), entry, &ret2), ret2);
}

// private extern void DiscardPool() [instance] :541
void ElementAtlasFramebufferPoolImpl::DiscardPool()
{
    uStackFrame __("Fuse.Elements.ElementAtlasFramebufferPoolImpl", "DiscardPool()");
    ::g::Fuse::Elements::ElementAtlasFramebufferPoolEntry* ret3;
    ::g::Uno::Collections::LinkedList* pool = _framebufferPool;

    if (pool == NULL)
        return;

    ::g::Uno::Collections::LinkedListNode* curr = (::g::Uno::Collections::LinkedListNode*)uPtr(pool)->First();

    while (curr != NULL)
    {
        ::g::Fuse::Elements::ElementAtlasFramebufferPoolEntry* fb = (::g::Uno::Collections::LinkedListNode__get_Value_fn(uPtr(curr), &ret3), ret3);
        uPtr(fb)->Collect();
        fb->Dispose();
        curr = (::g::Uno::Collections::LinkedListNode*)uPtr(curr)->Next();
    }

    pool->Clear();
    _framebufferPool = NULL;
}

// private void EnsurePool() [instance] :572
void ElementAtlasFramebufferPoolImpl::EnsurePool()
{
    uStackFrame __("Fuse.Elements.ElementAtlasFramebufferPoolImpl", "EnsurePool()");

    if (_framebufferPool != NULL)
        return;

    _framebufferPool = ((::g::Uno::Collections::LinkedList*)::g::Uno::Collections::LinkedList::New1(::TYPES[43/*Uno.Collections.LinkedList<Fuse.Elements.ElementAtlasFramebufferPoolEntry>*/]));

    for (int i = 0; i < 20; ++i)
        AddEntry();
}

// internal Uno.Collections.LinkedListNode<Fuse.Elements.ElementAtlasFramebufferPoolEntry> FindFramebuffer() [instance] :590
::g::Uno::Collections::LinkedListNode* ElementAtlasFramebufferPoolImpl::FindFramebuffer()
{
    uStackFrame __("Fuse.Elements.ElementAtlasFramebufferPoolImpl", "FindFramebuffer()");
    ::g::Fuse::Elements::ElementAtlasFramebufferPoolEntry* ret4;
    ::g::Fuse::Elements::ElementAtlasFramebufferPoolEntry* ret5;
    EnsurePool();
    ::g::Uno::Collections::LinkedListNode* fb = (::g::Uno::Collections::LinkedListNode*)uPtr(_framebufferPool)->Last();

    while ((fb != NULL) && ((uPtr((::g::Uno::Collections::LinkedListNode__get_Value_fn(uPtr(fb), &ret4), ret4))->Owner != NULL) && uPtr(uPtr((::g::Uno::Collections::LinkedListNode__get_Value_fn(uPtr(fb), &ret5), ret5))->Owner)->Pinned()))
        fb = (::g::Uno::Collections::LinkedListNode*)uPtr(fb)->Previous();

    if (fb == NULL)
        fb = AddEntry();

    UpdateUsage(fb);
    return fb;
}

// private void OnAtlasSizeChanged(object sender, Uno.EventArgs eventArgs) [instance] :562
void ElementAtlasFramebufferPoolImpl::OnAtlasSizeChanged(uObject* sender, ::g::Uno::EventArgs* eventArgs)
{
    uStackFrame __("Fuse.Elements.ElementAtlasFramebufferPoolImpl", "OnAtlasSizeChanged(object,Uno.EventArgs)");
    DiscardPool();
}

// internal void UpdateUsage(Uno.Collections.LinkedListNode<Fuse.Elements.ElementAtlasFramebufferPoolEntry> fb) [instance] :606
void ElementAtlasFramebufferPoolImpl::UpdateUsage(::g::Uno::Collections::LinkedListNode* fb)
{
    uStackFrame __("Fuse.Elements.ElementAtlasFramebufferPoolImpl", "UpdateUsage(Uno.Collections.LinkedListNode<Fuse.Elements.ElementAtlasFramebufferPoolEntry>)");
    uPtr(_framebufferPool)->Remove1(fb);
    uPtr(_framebufferPool)->AddFirst1(fb);
}

// internal ElementAtlasFramebufferPoolImpl New() [static] :509
ElementAtlasFramebufferPoolImpl* ElementAtlasFramebufferPoolImpl::New1()
{
    ElementAtlasFramebufferPoolImpl* obj1 = (ElementAtlasFramebufferPoolImpl*)uNew(ElementAtlasFramebufferPoolImpl_typeof());
    obj1->ctor_();
    return obj1;
}
// }

// /Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Elements/1.0.2/caching/$.uno
// -----------------------------------------------------------------------------------------------

// internal sealed class ElementBatch :1249
// {
static void ElementBatch_build(uType* type)
{
    ::STRINGS[19] = uString::Const("wrong atlas, stupid!");
    ::STRINGS[20] = uString::Const("element has no caching rect");
    ::STRINGS[21] = uString::Const("wrong batch, stupid!");
    ::TYPES[44] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Elements::ElementBatchEntry_typeof(), NULL);
    ::TYPES[45] = ::g::Uno::Collections::List__Enumerator_typeof()->MakeType(::g::Fuse::Elements::ElementBatchEntry_typeof(), NULL);
    type->SetInterfaces(
        ::g::Fuse::Elements::IElementBatchDrawable_typeof(), offsetof(ElementBatch_type, interface0));
    type->SetFields(0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall_typeof(), offsetof(::g::Fuse::Elements::ElementBatch, _draw_f8c70145), 0,
        ::g::Fuse::Elements::ElementAtlas_typeof(), offsetof(::g::Fuse::Elements::ElementBatch, _elementAtlas), 0,
        ::g::Fuse::Elements::ElementBatcher_typeof(), offsetof(::g::Fuse::Elements::ElementBatch, _elementBatcher), 0,
        ::TYPES[44/*Uno.Collections.List<Fuse.Elements.ElementBatchEntry>*/], offsetof(::g::Fuse::Elements::ElementBatch, _elements), 0,
        ::g::Uno::Graphics::IndexBuffer_typeof(), offsetof(::g::Fuse::Elements::ElementBatch, _indexBuffer), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Elements::ElementBatch, _indexBufferValid), 0,
        ::g::Uno::Graphics::VertexAttributeInfo_typeof(), offsetof(::g::Fuse::Elements::ElementBatch, _positionInfo), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::Elements::ElementBatch, _prevElementCount), 0,
        ::g::Fuse::VisualBounds_typeof(), offsetof(::g::Fuse::Elements::ElementBatch, _renderBounds), 0,
        ::g::Uno::Buffer_typeof(), offsetof(::g::Fuse::Elements::ElementBatch, _tempBuffer), 0,
        ::g::Uno::Graphics::VertexAttributeInfo_typeof(), offsetof(::g::Fuse::Elements::ElementBatch, _texCoordInfo), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Elements::ElementBatch, _vertexPositionBufferValid), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Elements::ElementBatch, _vertexTexCoordBufferValid), 0);
}

ElementBatch_type* ElementBatch_typeof()
{
    static uSStrong<ElementBatch_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 13;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(ElementBatch);
    options.TypeSize = sizeof(ElementBatch_type);
    type = (ElementBatch_type*)uClassType::New("Fuse.Elements.ElementBatch", options);
    type->fp_build_ = ElementBatch_build;
    type->interface0.fp_Draw = (void(*)(uObject*, ::g::Fuse::DrawContext*, ::g::Uno::Float4x4*, ::g::Uno::Rect*))ElementBatch__Draw_fn;
    return type;
}

// public ElementBatch(Fuse.Elements.ElementBatcher elementBatcher, Fuse.Elements.ElementAtlas elementAtlas) :1260
void ElementBatch__ctor__fn(ElementBatch* __this, ::g::Fuse::Elements::ElementBatcher* elementBatcher, ::g::Fuse::Elements::ElementAtlas* elementAtlas)
{
    __this->ctor_(elementBatcher, elementAtlas);
}

// public void AddElement(Fuse.Elements.Element elm) :1339
void ElementBatch__AddElement_fn(ElementBatch* __this, ::g::Fuse::Elements::Element* elm)
{
    __this->AddElement(elm);
}

// private Fuse.VisualBounds CalcRenderBounds() :1317
void ElementBatch__CalcRenderBounds_fn(ElementBatch* __this, ::g::Fuse::VisualBounds** __retval)
{
    *__retval = __this->CalcRenderBounds();
}

// internal static Uno.Recti ConservativelySnapToCoveringIntegers(Uno.Rect r) :1293
void ElementBatch__ConservativelySnapToCoveringIntegers_fn(::g::Uno::Rect* r, ::g::Uno::Recti* __retval)
{
    *__retval = ElementBatch::ConservativelySnapToCoveringIntegers(*r);
}

// public void Dispose() :1278
void ElementBatch__Dispose_fn(ElementBatch* __this)
{
    __this->Dispose();
}

// public void Draw(Fuse.DrawContext dc, float4x4 localToClipTransform, Uno.Rect scissorRectInClipSpace) :1386
void ElementBatch__Draw_fn(ElementBatch* __this, ::g::Fuse::DrawContext* dc, ::g::Uno::Float4x4* localToClipTransform, ::g::Uno::Rect* scissorRectInClipSpace)
{
    __this->Draw(dc, *localToClipTransform, *scissorRectInClipSpace);
}

// private void FillIndexBuffer() :1449
void ElementBatch__FillIndexBuffer_fn(ElementBatch* __this)
{
    __this->FillIndexBuffer();
}

// private void FillVertexPositionBuffer(Fuse.DrawContext dc) :1488
void ElementBatch__FillVertexPositionBuffer_fn(ElementBatch* __this, ::g::Fuse::DrawContext* dc)
{
    __this->FillVertexPositionBuffer(dc);
}

// private void FillVertexTexCoordBuffer() :1468
void ElementBatch__FillVertexTexCoordBuffer_fn(ElementBatch* __this)
{
    __this->FillVertexTexCoordBuffer();
}

// public static Uno.Recti GetCachingRect(Fuse.Elements.Element elm) :1307
void ElementBatch__GetCachingRect_fn(::g::Fuse::Elements::Element* elm, ::g::Uno::Recti* __retval)
{
    *__retval = ElementBatch::GetCachingRect(elm);
}

// private generated void init_DrawCalls() :1249
void ElementBatch__init_DrawCalls_fn(ElementBatch* __this)
{
    __this->init_DrawCalls();
}

// internal void InvalidateOpacity(Fuse.Elements.Element elm) :1379
void ElementBatch__InvalidateOpacity_fn(ElementBatch* __this, ::g::Fuse::Elements::Element* elm)
{
    __this->InvalidateOpacity(elm);
}

// public void InvalidateRenderBounds(Fuse.Elements.Element elm) :1366
void ElementBatch__InvalidateRenderBounds_fn(ElementBatch* __this, ::g::Fuse::Elements::Element* elm)
{
    __this->InvalidateRenderBounds(elm);
}

// internal void InvalidateTransform(Fuse.Elements.Element elm) :1373
void ElementBatch__InvalidateTransform_fn(ElementBatch* __this, ::g::Fuse::Elements::Element* elm)
{
    __this->InvalidateTransform(elm);
}

// public bool IsFull() :1444
void ElementBatch__IsFull_fn(ElementBatch* __this, bool* __retval)
{
    *__retval = __this->IsFull();
}

// public ElementBatch New(Fuse.Elements.ElementBatcher elementBatcher, Fuse.Elements.ElementAtlas elementAtlas) :1260
void ElementBatch__New1_fn(::g::Fuse::Elements::ElementBatcher* elementBatcher, ::g::Fuse::Elements::ElementAtlas* elementAtlas, ElementBatch** __retval)
{
    *__retval = ElementBatch::New1(elementBatcher, elementAtlas);
}

// public void RemoveElement(Fuse.Elements.Element elm) :1353
void ElementBatch__RemoveElement_fn(ElementBatch* __this, ::g::Fuse::Elements::Element* elm)
{
    __this->RemoveElement(elm);
}

// public Fuse.VisualBounds get_RenderBounds() :1328
void ElementBatch__get_RenderBounds_fn(ElementBatch* __this, ::g::Fuse::VisualBounds** __retval)
{
    *__retval = __this->RenderBounds();
}

// public ElementBatch(Fuse.Elements.ElementBatcher elementBatcher, Fuse.Elements.ElementAtlas elementAtlas) [instance] :1260
void ElementBatch::ctor_(::g::Fuse::Elements::ElementBatcher* elementBatcher, ::g::Fuse::Elements::ElementAtlas* elementAtlas)
{
    _elements = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[44/*Uno.Collections.List<Fuse.Elements.ElementBatchEntry>*/]));
    _elementBatcher = elementBatcher;
    _elementAtlas = elementAtlas;
    _positionInfo = uDefault< ::g::Uno::Graphics::VertexAttributeInfo>();
    _positionInfo.BufferOffset = 0;
    _positionInfo.BufferStride = 12;
    _positionInfo.Type = 3;
    _positionInfo.Buffer = ::g::Uno::Graphics::VertexBuffer::New3(1);
    _texCoordInfo = uDefault< ::g::Uno::Graphics::VertexAttributeInfo>();
    _texCoordInfo.BufferOffset = 0;
    _texCoordInfo.BufferStride = 8;
    _texCoordInfo.Type = 2;
    _texCoordInfo.Buffer = ::g::Uno::Graphics::VertexBuffer::New3(0);
    init_DrawCalls();
}

// public void AddElement(Fuse.Elements.Element elm) [instance] :1339
void ElementBatch::AddElement(::g::Fuse::Elements::Element* elm)
{
    uStackFrame __("Fuse.Elements.ElementBatch", "AddElement(Fuse.Elements.Element)");

    if (uPtr(uPtr(elm)->ElementBatchEntry())->_atlas != _elementAtlas)
        U_THROW(::g::Uno::Exception::New2(::STRINGS[19/*"wrong atlas...*/]));

    ::g::Fuse::Elements::ElementBatchEntry* entry = uPtr(elm)->ElementBatchEntry();
    uPtr(entry)->_batch = this;
    ::g::Uno::Collections::List__Add_fn(uPtr(_elements), entry);
    _indexBufferValid = false;
    _vertexPositionBufferValid = false;
    _vertexTexCoordBufferValid = false;
    _renderBounds = NULL;
}

// private Fuse.VisualBounds CalcRenderBounds() [instance] :1317
::g::Fuse::VisualBounds* ElementBatch::CalcRenderBounds()
{
    uStackFrame __("Fuse.Elements.ElementBatch", "CalcRenderBounds()");
    ::g::Fuse::Elements::ElementBatchEntry* ret8;
    ::g::Fuse::VisualBounds* rect = ::g::Fuse::VisualBounds::Empty();

    for (int i = 0; i < uPtr(_elements)->Count(); i++)
        rect = uPtr(rect)->Merge(uPtr(uPtr((::g::Uno::Collections::List__get_Item_fn(uPtr(_elements), uCRef<int>(i), &ret8), ret8))->_elm)->CalcRenderBoundsInParentSpace(), NULL);

    return rect;
}

// public void Dispose() [instance] :1278
void ElementBatch::Dispose()
{
    uStackFrame __("Fuse.Elements.ElementBatch", "Dispose()");
    ::g::Uno::Collections::List__Enumerator<uStrong< ::g::Fuse::Elements::ElementBatchEntry*> > ret9;

    for (::g::Uno::Collections::List__Enumerator<uStrong< ::g::Fuse::Elements::ElementBatchEntry*> > enum1 = (::g::Uno::Collections::List__GetEnumerator_fn(uPtr(_elements), &ret9), ret9); enum1.MoveNext(::TYPES[45/*Uno.Collections.List<Fuse.Elements.ElementBatchEntry>.Enumerator*/]); )
    {
        ::g::Fuse::Elements::ElementBatchEntry* elm = enum1.Current(::TYPES[45/*Uno.Collections.List<Fuse.Elements.ElementBatchEntry>.Enumerator*/]);
        uPtr(elm)->_batch = NULL;
    }

    if (_positionInfo.Buffer != NULL)
        uPtr(_positionInfo.Buffer)->Dispose();

    if (_texCoordInfo.Buffer != NULL)
        uPtr(_texCoordInfo.Buffer)->Dispose();

    if (_indexBuffer != NULL)
        uPtr(_indexBuffer)->Dispose();
}

// public void Draw(Fuse.DrawContext dc, float4x4 localToClipTransform, Uno.Rect scissorRectInClipSpace) [instance] :1386
void ElementBatch::Draw(::g::Fuse::DrawContext* dc, ::g::Uno::Float4x4 localToClipTransform, ::g::Uno::Rect scissorRectInClipSpace)
{
    uStackFrame __("Fuse.Elements.ElementBatch", "Draw(Fuse.DrawContext,float4x4,Uno.Rect)");
    ::g::Fuse::Elements::ElementBatchEntry* ret10;
    ::g::Uno::Rect visibleRect = ::g::Uno::Rect__Transform(uPtr(RenderBounds())->FlatRect(), localToClipTransform);

    if (!scissorRectInClipSpace.Intersects(visibleRect))
        return;

    ::g::Uno::Graphics::Framebuffer* fb = uPtr(_elementAtlas)->PinAndValidateFramebuffer(dc);

    if (_prevElementCount != uPtr(_elements)->Count())
    {
        _indexBufferValid = false;
        _vertexPositionBufferValid = false;
        _vertexTexCoordBufferValid = false;
        _tempBuffer = ::g::Uno::Buffer::New4((uPtr(_elements)->Count() * 4) * 12);
    }

    if (!_indexBufferValid)
    {
        FillIndexBuffer();
        _indexBufferValid = true;
    }

    if (!_vertexPositionBufferValid)
    {
        FillVertexPositionBuffer(dc);
        _vertexPositionBufferValid = true;
    }

    if (!_vertexTexCoordBufferValid)
    {
        FillVertexTexCoordBuffer();
        _vertexTexCoordBufferValid = true;
    }

    ::g::Uno::Graphics::Texture2D* tex = uPtr(fb)->ColorBuffer();
    ::g::Uno::Float4x4 transform = uPtr(dc)->GetLocalToClipTransform(uPtr(uPtr((::g::Uno::Collections::List__get_Item_fn(uPtr(_elements), uCRef<int>(0), &ret10), ret10))->_elm)->Parent());
    _draw_f8c70145.BlendEnabled(true);
    _draw_f8c70145.DepthTestEnabled(false);
    _draw_f8c70145.CullFace(uPtr(dc)->CullFace());
    _draw_f8c70145.BlendSrcAlpha(7);
    _draw_f8c70145.BlendDstRgb(3);
    _draw_f8c70145.Use();
    _draw_f8c70145.Attrib1(0, _positionInfo.Type, _positionInfo.Buffer, _positionInfo.BufferStride, _positionInfo.BufferOffset);
    _draw_f8c70145.Attrib1(1, _texCoordInfo.Type, _texCoordInfo.Buffer, _texCoordInfo.BufferStride, _texCoordInfo.BufferOffset);
    _draw_f8c70145.Uniform12(2, transform);
    _draw_f8c70145.Sampler3(3, tex, ::g::Uno::Graphics::SamplerState__LinearClamp());
    _draw_f8c70145.Draw(uPtr(_elements)->Count() * 6, 2, _indexBuffer);
    uPtr(_elementAtlas)->Unpin();
    _prevElementCount = uPtr(_elements)->Count();
}

// private void FillIndexBuffer() [instance] :1449
void ElementBatch::FillIndexBuffer()
{
    uStackFrame __("Fuse.Elements.ElementBatch", "FillIndexBuffer()");
    ::g::Uno::Buffer* indices = ::g::Uno::Buffer::New4((uPtr(_elements)->Count() * 6) * 2);

    for (int i = 0; i < uPtr(_elements)->Count(); ++i)
    {
        uPtr(indices)->Set23((i * 6) * 2, (uint16_t)(i * 4), true);
        indices->Set23(((i * 6) + 1) * 2, (uint16_t)((i * 4) + 2), true);
        indices->Set23(((i * 6) + 2) * 2, (uint16_t)((i * 4) + 1), true);
        indices->Set23(((i * 6) + 3) * 2, (uint16_t)(i * 4), true);
        indices->Set23(((i * 6) + 4) * 2, (uint16_t)((i * 4) + 3), true);
        indices->Set23(((i * 6) + 5) * 2, (uint16_t)((i * 4) + 2), true);
    }

    if (_indexBuffer != NULL)
        uPtr(_indexBuffer)->Dispose();

    _indexBuffer = ::g::Uno::Graphics::IndexBuffer::New2(indices, 0);
}

// private void FillVertexPositionBuffer(Fuse.DrawContext dc) [instance] :1488
void ElementBatch::FillVertexPositionBuffer(::g::Fuse::DrawContext* dc)
{
    uStackFrame __("Fuse.Elements.ElementBatch", "FillVertexPositionBuffer(Fuse.DrawContext)");
    ::g::Uno::Float4 ind2;
    ::g::Uno::Float4 ind3;
    ::g::Uno::Float4 ind4;
    ::g::Uno::Float4 ind5;
    ::g::Uno::Float4 ind6;
    ::g::Fuse::Elements::ElementBatchEntry* ret11;
    int elementCount = uPtr(_elements)->Count();
    ::g::Uno::Buffer* vertexPositions = _tempBuffer;
    float densityScale = 1.0f / uPtr(dc)->ViewportPixelsPerPoint();

    for (int i = 0; i < elementCount; ++i)
    {
        ::g::Fuse::Elements::ElementBatchEntry* entry = (::g::Uno::Collections::List__get_Item_fn(uPtr(_elements), uCRef<int>(i), &ret11), ret11);
        ::g::Uno::Recti cachingRect = ElementBatch::GetCachingRect(uPtr(entry)->_elm);
        float opacity = entry->_opacity;
        ::g::Uno::Float4x4 transform = uPtr(entry->_elm)->LocalTransform();
        ::g::Uno::Float2 localOrigin = ::g::Uno::Float2__op_Multiply1(::g::Uno::Float2__op_Implicit1(cachingRect.Minimum()), densityScale);
        ::g::Uno::Float2 positionOrigin = ::g::Uno::Float2__op_Addition2(::g::Uno::Float2__op_Addition2((ind2 = transform.Item(3), ::g::Uno::Float2__New2(ind2.X, ind2.Y)), ::g::Uno::Float2__op_Multiply(localOrigin.X, (ind3 = transform.Item(0), ::g::Uno::Float2__New2(ind3.X, ind3.Y)))), ::g::Uno::Float2__op_Multiply(localOrigin.Y, (ind4 = transform.Item(1), ::g::Uno::Float2__New2(ind4.X, ind4.Y))));
        ::g::Uno::Float2 size = ::g::Uno::Float2__op_Multiply1(::g::Uno::Float2__op_Implicit1(cachingRect.Size()), densityScale);
        ::g::Uno::Float2 right = ::g::Uno::Float2__op_Multiply1((ind5 = transform.Item(0), ::g::Uno::Float2__New2(ind5.X, ind5.Y)), size.X);
        ::g::Uno::Float2 up = ::g::Uno::Float2__op_Multiply1((ind6 = transform.Item(1), ::g::Uno::Float2__New2(ind6.X, ind6.Y)), size.Y);
        uPtr(vertexPositions)->Set6(((i * 4) * _positionInfo.BufferStride) + _positionInfo.BufferOffset, ::g::Uno::Float3__New4(positionOrigin, opacity), true);
        vertexPositions->Set6((((i * 4) + 1) * _positionInfo.BufferStride) + _positionInfo.BufferOffset, ::g::Uno::Float3__New4(::g::Uno::Float2__op_Addition2(positionOrigin, right), opacity), true);
        vertexPositions->Set6((((i * 4) + 2) * _positionInfo.BufferStride) + _positionInfo.BufferOffset, ::g::Uno::Float3__New4(::g::Uno::Float2__op_Addition2(::g::Uno::Float2__op_Addition2(positionOrigin, right), up), opacity), true);
        vertexPositions->Set6((((i * 4) + 3) * _positionInfo.BufferStride) + _positionInfo.BufferOffset, ::g::Uno::Float3__New4(::g::Uno::Float2__op_Addition2(positionOrigin, up), opacity), true);
    }

    uPtr(_positionInfo.Buffer)->Update(vertexPositions);
}

// private void FillVertexTexCoordBuffer() [instance] :1468
void ElementBatch::FillVertexTexCoordBuffer()
{
    uStackFrame __("Fuse.Elements.ElementBatch", "FillVertexTexCoordBuffer()");
    ::g::Fuse::Elements::ElementBatchEntry* ret12;
    int elementCount = uPtr(_elements)->Count();
    ::g::Uno::Buffer* vertexTexCoords = _tempBuffer;

    for (int i = 0; i < elementCount; ++i)
    {
        ::g::Fuse::Elements::ElementBatchEntry* entry = (::g::Uno::Collections::List__get_Item_fn(uPtr(_elements), uCRef<int>(i), &ret12), ret12);
        ::g::Uno::Recti cachingRect = ElementBatch::GetCachingRect(uPtr(entry)->_elm);
        ::g::Uno::Float2 texCoordOrigin = ::g::Uno::Float2__op_Division2(::g::Uno::Float2__op_Implicit1(entry->_rect.Minimum()), ::g::Uno::Float2__op_Implicit1(uPtr(uPtr(_elementAtlas)->_rectPacker)->Size()));
        ::g::Uno::Float2 size = ::g::Uno::Float2__op_Division2(::g::Uno::Float2__op_Implicit1(cachingRect.Size()), ::g::Uno::Float2__op_Implicit1(uPtr(uPtr(_elementAtlas)->_rectPacker)->Size()));
        uPtr(vertexTexCoords)->Set5(((i * 4) * _texCoordInfo.BufferStride) + _texCoordInfo.BufferOffset, texCoordOrigin, true);
        vertexTexCoords->Set5((((i * 4) + 1) * _texCoordInfo.BufferStride) + _texCoordInfo.BufferOffset, ::g::Uno::Float2__op_Addition2(texCoordOrigin, ::g::Uno::Float2__New2(size.X, 0.0f)), true);
        vertexTexCoords->Set5((((i * 4) + 2) * _texCoordInfo.BufferStride) + _texCoordInfo.BufferOffset, ::g::Uno::Float2__op_Addition2(texCoordOrigin, size), true);
        vertexTexCoords->Set5((((i * 4) + 3) * _texCoordInfo.BufferStride) + _texCoordInfo.BufferOffset, ::g::Uno::Float2__op_Addition2(texCoordOrigin, ::g::Uno::Float2__New2(0.0f, size.Y)), true);
    }

    uPtr(_texCoordInfo.Buffer)->Update(vertexTexCoords);
}

// private generated void init_DrawCalls() [instance] :1249
void ElementBatch::init_DrawCalls()
{
    uStackFrame __("Fuse.Elements.ElementBatch", "init_DrawCalls()");
    _draw_f8c70145 = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New1(::g::FuseElements_bundle::ElementBatchd43eeb4e());
}

// internal void InvalidateOpacity(Fuse.Elements.Element elm) [instance] :1379
void ElementBatch::InvalidateOpacity(::g::Fuse::Elements::Element* elm)
{
    _vertexPositionBufferValid = false;
}

// public void InvalidateRenderBounds(Fuse.Elements.Element elm) [instance] :1366
void ElementBatch::InvalidateRenderBounds(::g::Fuse::Elements::Element* elm)
{
    _vertexPositionBufferValid = false;
    _vertexTexCoordBufferValid = false;
    _renderBounds = NULL;
}

// internal void InvalidateTransform(Fuse.Elements.Element elm) [instance] :1373
void ElementBatch::InvalidateTransform(::g::Fuse::Elements::Element* elm)
{
    _vertexPositionBufferValid = false;
    _renderBounds = NULL;
}

// public bool IsFull() [instance] :1444
bool ElementBatch::IsFull()
{
    uStackFrame __("Fuse.Elements.ElementBatch", "IsFull()");
    return (uPtr(_elements)->Count() * 6) >= 65535;
}

// public void RemoveElement(Fuse.Elements.Element elm) [instance] :1353
void ElementBatch::RemoveElement(::g::Fuse::Elements::Element* elm)
{
    uStackFrame __("Fuse.Elements.ElementBatch", "RemoveElement(Fuse.Elements.Element)");
    bool ret13;

    if (uPtr(uPtr(elm)->ElementBatchEntry())->_batch != this)
        U_THROW(::g::Uno::Exception::New2(::STRINGS[21/*"wrong batch...*/]));

    ::g::Fuse::Elements::ElementBatchEntry* entry = uPtr(elm)->ElementBatchEntry();
    uPtr(entry)->_batch = NULL;
    ::g::Uno::Collections::List__Remove_fn(uPtr(_elements), entry, &ret13);
    _indexBufferValid = false;
    _vertexPositionBufferValid = false;
    _vertexTexCoordBufferValid = false;
}

// public Fuse.VisualBounds get_RenderBounds() [instance] :1328
::g::Fuse::VisualBounds* ElementBatch::RenderBounds()
{
    uStackFrame __("Fuse.Elements.ElementBatch", "get_RenderBounds()");

    if (_renderBounds == NULL)
        _renderBounds = CalcRenderBounds();

    return _renderBounds;
}

// internal static Uno.Recti ConservativelySnapToCoveringIntegers(Uno.Rect r) [static] :1293
::g::Uno::Recti ElementBatch::ConservativelySnapToCoveringIntegers(::g::Uno::Rect r)
{
    ::g::Uno::Int2 origin = ::g::Uno::Int2__op_Explicit(::g::Uno::Math::Floor2(r.Minimum()));
    ::g::Uno::Int2 size = ::g::Uno::Int2__op_Explicit(::g::Uno::Math::Ceil2(::g::Uno::Float2__op_Addition1(r.Size(), 0.01f)));
    return ::g::Uno::Recti__New1(origin.X, origin.Y, (origin.X + size.X) + 1, (origin.Y + size.Y) + 1);
}

// public static Uno.Recti GetCachingRect(Fuse.Elements.Element elm) [static] :1307
::g::Uno::Recti ElementBatch::GetCachingRect(::g::Fuse::Elements::Element* elm)
{
    uStackFrame __("Fuse.Elements.ElementBatch", "GetCachingRect(Fuse.Elements.Element)");
    ::g::Fuse::VisualBounds* bounds = uPtr(elm)->RenderBoundsWithEffects();

    if (uPtr(bounds)->IsInfinite() || uPtr(bounds)->IsEmpty())
        U_THROW(::g::Uno::Exception::New2(::STRINGS[20/*"element has...*/]));

    return ::g::Uno::Recti__Inflate(ElementBatch::ConservativelySnapToCoveringIntegers(::g::Uno::Rect__Scale(uPtr(bounds)->FlatRect(), elm->AbsoluteZoom())), 1);
}

// public ElementBatch New(Fuse.Elements.ElementBatcher elementBatcher, Fuse.Elements.ElementAtlas elementAtlas) [static] :1260
ElementBatch* ElementBatch::New1(::g::Fuse::Elements::ElementBatcher* elementBatcher, ::g::Fuse::Elements::ElementAtlas* elementAtlas)
{
    ElementBatch* obj7 = (ElementBatch*)uNew(ElementBatch_typeof());
    obj7->ctor_(elementBatcher, elementAtlas);
    return obj7;
}
// }

// /Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Elements/1.0.2/caching/$.uno
// -----------------------------------------------------------------------------------------------

// internal sealed class ElementBatchEntry :1184
// {
static void ElementBatchEntry_build(uType* type)
{
    type->SetFields(0,
        ::g::Fuse::Elements::ElementAtlas_typeof(), offsetof(::g::Fuse::Elements::ElementBatchEntry, _atlas), 0,
        ::g::Fuse::Elements::ElementBatch_typeof(), offsetof(::g::Fuse::Elements::ElementBatchEntry, _batch), 0,
        ::g::Fuse::Elements::Element_typeof(), offsetof(::g::Fuse::Elements::ElementBatchEntry, _elm), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Elements::ElementBatchEntry, _opacity), 0,
        ::g::Uno::Recti_typeof(), offsetof(::g::Fuse::Elements::ElementBatchEntry, _rect), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Elements::ElementBatchEntry, IsValid), 0);
}

uType* ElementBatchEntry_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 6;
    options.ObjectSize = sizeof(ElementBatchEntry);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Elements.ElementBatchEntry", options);
    type->fp_build_ = ElementBatchEntry_build;
    return type;
}

// public ElementBatchEntry(Fuse.Elements.Element elm) :1186
void ElementBatchEntry__ctor__fn(ElementBatchEntry* __this, ::g::Fuse::Elements::Element* elm)
{
    __this->ctor_(elm);
}

// private float GetEffectiveOpacity() :1192
void ElementBatchEntry__GetEffectiveOpacity_fn(ElementBatchEntry* __this, float* __retval)
{
    *__retval = __this->GetEffectiveOpacity();
}

// public void InvalidateRenderBounds() :1217
void ElementBatchEntry__InvalidateRenderBounds_fn(ElementBatchEntry* __this)
{
    __this->InvalidateRenderBounds();
}

// public void InvalidateTransform() :1226
void ElementBatchEntry__InvalidateTransform_fn(ElementBatchEntry* __this)
{
    __this->InvalidateTransform();
}

// public void InvalidateVisual() :1199
void ElementBatchEntry__InvalidateVisual_fn(ElementBatchEntry* __this)
{
    __this->InvalidateVisual();
}

// public void InvalidateVisualComposition() :1204
void ElementBatchEntry__InvalidateVisualComposition_fn(ElementBatchEntry* __this)
{
    __this->InvalidateVisualComposition();
}

// public ElementBatchEntry New(Fuse.Elements.Element elm) :1186
void ElementBatchEntry__New1_fn(::g::Fuse::Elements::Element* elm, ElementBatchEntry** __retval)
{
    *__retval = ElementBatchEntry::New1(elm);
}

// public void OnRemoved() :1232
void ElementBatchEntry__OnRemoved_fn(ElementBatchEntry* __this)
{
    __this->OnRemoved();
}

// public ElementBatchEntry(Fuse.Elements.Element elm) [instance] :1186
void ElementBatchEntry::ctor_(::g::Fuse::Elements::Element* elm)
{
    uStackFrame __("Fuse.Elements.ElementBatchEntry", ".ctor(Fuse.Elements.Element)");
    _elm = elm;
    _opacity = GetEffectiveOpacity();
}

// private float GetEffectiveOpacity() [instance] :1192
float ElementBatchEntry::GetEffectiveOpacity()
{
    uStackFrame __("Fuse.Elements.ElementBatchEntry", "GetEffectiveOpacity()");

    if (uPtr(_elm)->Visibility() == 0)
        return uPtr(_elm)->Opacity();

    return 0.0f;
}

// public void InvalidateRenderBounds() [instance] :1217
void ElementBatchEntry::InvalidateRenderBounds()
{
    uStackFrame __("Fuse.Elements.ElementBatchEntry", "InvalidateRenderBounds()");

    if (_batch != NULL)
    {
        ::g::Uno::Collections::List__Add_fn(uPtr(uPtr(uPtr(_batch)->_elementBatcher)->_reinsertCheckList), this);
        uPtr(_batch)->InvalidateRenderBounds(_elm);
    }
}

// public void InvalidateTransform() [instance] :1226
void ElementBatchEntry::InvalidateTransform()
{
    uStackFrame __("Fuse.Elements.ElementBatchEntry", "InvalidateTransform()");

    if (_batch != NULL)
        uPtr(_batch)->InvalidateTransform(_elm);
}

// public void InvalidateVisual() [instance] :1199
void ElementBatchEntry::InvalidateVisual()
{
    uStackFrame __("Fuse.Elements.ElementBatchEntry", "InvalidateVisual()");
    uPtr(_atlas)->InvalidateElement(_elm);
}

// public void InvalidateVisualComposition() [instance] :1204
void ElementBatchEntry::InvalidateVisualComposition()
{
    uStackFrame __("Fuse.Elements.ElementBatchEntry", "InvalidateVisualComposition()");
    float opacity = GetEffectiveOpacity();

    if (_opacity != opacity)
    {
        if (_batch != NULL)
            uPtr(_batch)->InvalidateOpacity(_elm);

        _opacity = opacity;
    }
}

// public void OnRemoved() [instance] :1232
void ElementBatchEntry::OnRemoved()
{
    uStackFrame __("Fuse.Elements.ElementBatchEntry", "OnRemoved()");

    if (_atlas != NULL)
        uPtr(_atlas)->RemoveElement(_elm);

    if (_batch != NULL)
        uPtr(_batch)->RemoveElement(_elm);
}

// public ElementBatchEntry New(Fuse.Elements.Element elm) [static] :1186
ElementBatchEntry* ElementBatchEntry::New1(::g::Fuse::Elements::Element* elm)
{
    ElementBatchEntry* obj1 = (ElementBatchEntry*)uNew(ElementBatchEntry_typeof());
    obj1->ctor_(elm);
    return obj1;
}
// }

// /Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Elements/1.0.2/caching/$.uno
// -----------------------------------------------------------------------------------------------

// internal sealed class ElementBatcher :855
// {
static void ElementBatcher_build(uType* type)
{
    ::STRINGS[22] = uString::Const("Trying to batch nothing!");
    ::STRINGS[23] = uString::Const("BUG: atlas-insertion failed, but should not!");
    ::STRINGS[24] = uString::Const("/Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Elements/1.0.2/caching/$.uno");
    ::TYPES[46] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Visual_typeof(), NULL);
    ::TYPES[47] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Elements::ElementAtlas_typeof(), NULL);
    ::TYPES[48] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Elements::ElementBatch_typeof(), NULL);
    ::TYPES[49] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Elements::IElementBatchDrawable_typeof(), NULL);
    ::TYPES[44] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Elements::ElementBatchEntry_typeof(), NULL);
    ::TYPES[41] = ::g::Uno::EventHandler_typeof();
    ::TYPES[50] = ::g::Uno::Collections::List__Enumerator_typeof()->MakeType(::g::Fuse::Elements::ElementAtlas_typeof(), NULL);
    ::TYPES[51] = ::g::Uno::Collections::List__Enumerator_typeof()->MakeType(::g::Fuse::Visual_typeof(), NULL);
    ::TYPES[52] = ::g::Fuse::Elements::Element_typeof();
    ::TYPES[53] = ::g::Uno::Collections::List__Enumerator_typeof()->MakeType(::g::Fuse::Elements::ElementBatch_typeof(), NULL);
    ::TYPES[45] = ::g::Uno::Collections::List__Enumerator_typeof()->MakeType(::g::Fuse::Elements::ElementBatchEntry_typeof(), NULL);
    ::TYPES[54] = ::g::Uno::Collections::List__Enumerator_typeof()->MakeType(::g::Fuse::Elements::IElementBatchDrawable_typeof(), NULL);
    ::TYPES[55] = ::g::Fuse::Elements::IElementBatchDrawable_typeof();
    type->SetInterfaces(
        ::g::Fuse::Resources::ISoftDisposable_typeof(), offsetof(ElementBatcher_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(ElementBatcher_type, interface1));
    type->SetFields(0,
        ::TYPES[47/*Uno.Collections.List<Fuse.Elements.ElementAtlas>*/], offsetof(::g::Fuse::Elements::ElementBatcher, _atlasPool), 0,
        ::TYPES[48/*Uno.Collections.List<Fuse.Elements.ElementBatch>*/], offsetof(::g::Fuse::Elements::ElementBatcher, _batchPool), 0,
        ::TYPES[49/*Uno.Collections.List<Fuse.Elements.IElementBatchDrawable>*/], offsetof(::g::Fuse::Elements::ElementBatcher, _drawList), 0,
        ::TYPES[46/*Uno.Collections.List<Fuse.Visual>*/], offsetof(::g::Fuse::Elements::ElementBatcher, _elements), 0,
        ::TYPES[44/*Uno.Collections.List<Fuse.Elements.ElementBatchEntry>*/], offsetof(::g::Fuse::Elements::ElementBatcher, _reinsertCheckList), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Elements::ElementBatcher, DrawListValid), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Elements::ElementBatcher, MaxSpilledRatio), 0);
}

ElementBatcher_type* ElementBatcher_typeof()
{
    static uSStrong<ElementBatcher_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 7;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(ElementBatcher);
    options.TypeSize = sizeof(ElementBatcher_type);
    type = (ElementBatcher_type*)uClassType::New("Fuse.Elements.ElementBatcher", options);
    type->fp_build_ = ElementBatcher_build;
    type->fp_ctor_ = (void*)ElementBatcher__New1_fn;
    type->interface0.fp_SoftDispose = (void(*)(uObject*))ElementBatcher__FuseResourcesISoftDisposableSoftDispose_fn;
    type->interface1.fp_Dispose = (void(*)(uObject*))ElementBatcher__Dispose_fn;
    return type;
}

// public ElementBatcher() :863
void ElementBatcher__ctor__fn(ElementBatcher* __this)
{
    __this->ctor_();
}

// public void AddElement(Fuse.Visual elm) :887
void ElementBatcher__AddElement_fn(ElementBatcher* __this, ::g::Fuse::Visual* elm)
{
    __this->AddElement(elm);
}

// private Fuse.Elements.ElementAtlas allocAtlas() :911
void ElementBatcher__allocAtlas_fn(ElementBatcher* __this, ::g::Fuse::Elements::ElementAtlas** __retval)
{
    *__retval = __this->allocAtlas();
}

// private Fuse.Elements.ElementBatch allocBatch(Fuse.Elements.ElementAtlas atlas) :918
void ElementBatcher__allocBatch_fn(ElementBatcher* __this, ::g::Fuse::Elements::ElementAtlas* atlas, ::g::Fuse::Elements::ElementBatch** __retval)
{
    *__retval = __this->allocBatch(atlas);
}

// private void DiscardAtlasing() :925
void ElementBatcher__DiscardAtlasing_fn(ElementBatcher* __this)
{
    __this->DiscardAtlasing();
}

// private void DiscardBatching() :942
void ElementBatcher__DiscardBatching_fn(ElementBatcher* __this)
{
    __this->DiscardBatching();
}

// public void Dispose() :879
void ElementBatcher__Dispose_fn(ElementBatcher* __this)
{
    __this->Dispose();
}

// public void Draw(Fuse.DrawContext dc) :1101
void ElementBatcher__Draw_fn(ElementBatcher* __this, ::g::Fuse::DrawContext* dc)
{
    __this->Draw(dc);
}

// private void Fuse.Resources.ISoftDisposable.SoftDispose() :874
void ElementBatcher__FuseResourcesISoftDisposableSoftDispose_fn(ElementBatcher* __this)
{
    uStackFrame __("Fuse.Elements.ElementBatcher", "Fuse.Resources.ISoftDisposable.SoftDispose()");
    __this->DiscardAtlasing();
}

// private static int get_MaxElementPixels() :951
void ElementBatcher__get_MaxElementPixels_fn(int* __retval)
{
    *__retval = ElementBatcher::MaxElementPixels();
}

// private static int2 get_MaxElementSize() :949
void ElementBatcher__get_MaxElementSize_fn(::g::Uno::Int2* __retval)
{
    *__retval = ElementBatcher::MaxElementSize();
}

// public ElementBatcher New() :863
void ElementBatcher__New1_fn(ElementBatcher** __retval)
{
    *__retval = ElementBatcher::New1();
}

// private void OnAtlasSizeChanged(object sender, Uno.EventArgs args) :869
void ElementBatcher__OnAtlasSizeChanged_fn(ElementBatcher* __this, uObject* sender, ::g::Uno::EventArgs* args)
{
    __this->OnAtlasSizeChanged(sender, args);
}

// public void Remove(Fuse.Elements.Element elm) :900
void ElementBatcher__Remove_fn(ElementBatcher* __this, ::g::Fuse::Elements::Element* elm)
{
    __this->Remove(elm);
}

// public void RemoveAllElements() :893
void ElementBatcher__RemoveAllElements_fn(ElementBatcher* __this)
{
    __this->RemoveAllElements();
}

// public static bool ShouldBatchElement(Fuse.Visual node) :966
void ElementBatcher__ShouldBatchElement_fn(::g::Fuse::Visual* node, bool* __retval)
{
    *__retval = ElementBatcher::ShouldBatchElement(node);
}

// public static bool ShouldBatchElementWithCachingMode(Fuse.Elements.CachingMode mode) :961
void ElementBatcher__ShouldBatchElementWithCachingMode_fn(int* mode, bool* __retval)
{
    *__retval = ElementBatcher::ShouldBatchElementWithCachingMode(*mode);
}

// public static bool ShouldBatchElementWithSize(int2 size) :953
void ElementBatcher__ShouldBatchElementWithSize_fn(::g::Uno::Int2* size, bool* __retval)
{
    *__retval = ElementBatcher::ShouldBatchElementWithSize(*size);
}

// private void UpdateDrawList() :990
void ElementBatcher__UpdateDrawList_fn(ElementBatcher* __this)
{
    __this->UpdateDrawList();
}

// public ElementBatcher() [instance] :863
void ElementBatcher::ctor_()
{
    uStackFrame __("Fuse.Elements.ElementBatcher", ".ctor()");
    _elements = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[46/*Uno.Collections.List<Fuse.Visual>*/]));
    _atlasPool = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[47/*Uno.Collections.List<Fuse.Elements.ElementAtlas>*/]));
    _batchPool = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[48/*Uno.Collections.List<Fuse.Elements.ElementBatch>*/]));
    _drawList = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[49/*Uno.Collections.List<Fuse.Elements.IElementBatchDrawable>*/]));
    _reinsertCheckList = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[44/*Uno.Collections.List<Fuse.Elements.ElementBatchEntry>*/]));
    ::g::Fuse::Resources::DisposalManager::Add1((uObject*)this);
    ::g::Fuse::Elements::ElementAtlasFramebufferPool::add_AtlasSizeChanged(uDelegate::New(::TYPES[41/*Uno.EventHandler*/], (void*)ElementBatcher__OnAtlasSizeChanged_fn, this));
}

// public void AddElement(Fuse.Visual elm) [instance] :887
void ElementBatcher::AddElement(::g::Fuse::Visual* elm)
{
    uStackFrame __("Fuse.Elements.ElementBatcher", "AddElement(Fuse.Visual)");
    ::g::Uno::Collections::List__Add_fn(uPtr(_elements), elm);
    DrawListValid = false;
}

// private Fuse.Elements.ElementAtlas allocAtlas() [instance] :911
::g::Fuse::Elements::ElementAtlas* ElementBatcher::allocAtlas()
{
    uStackFrame __("Fuse.Elements.ElementBatcher", "allocAtlas()");
    ::g::Fuse::Elements::ElementAtlas* atlas = ::g::Fuse::Elements::ElementAtlas::New1();
    ::g::Uno::Collections::List__Add_fn(uPtr(_atlasPool), atlas);
    return atlas;
}

// private Fuse.Elements.ElementBatch allocBatch(Fuse.Elements.ElementAtlas atlas) [instance] :918
::g::Fuse::Elements::ElementBatch* ElementBatcher::allocBatch(::g::Fuse::Elements::ElementAtlas* atlas)
{
    uStackFrame __("Fuse.Elements.ElementBatcher", "allocBatch(Fuse.Elements.ElementAtlas)");
    ::g::Fuse::Elements::ElementBatch* batch = ::g::Fuse::Elements::ElementBatch::New1(this, atlas);
    ::g::Uno::Collections::List__Add_fn(uPtr(_batchPool), batch);
    return batch;
}

// private void DiscardAtlasing() [instance] :925
void ElementBatcher::DiscardAtlasing()
{
    uStackFrame __("Fuse.Elements.ElementBatcher", "DiscardAtlasing()");
    ::g::Uno::Collections::List__Enumerator<uStrong< ::g::Fuse::Elements::ElementAtlas*> > ret14;
    ::g::Uno::Collections::List__Enumerator<uStrong< ::g::Fuse::Visual*> > ret15;

    for (::g::Uno::Collections::List__Enumerator<uStrong< ::g::Fuse::Elements::ElementAtlas*> > enum1 = (::g::Uno::Collections::List__GetEnumerator_fn(uPtr(_atlasPool), &ret14), ret14); enum1.MoveNext(::TYPES[50/*Uno.Collections.List<Fuse.Elements.ElementAtlas>.Enumerator*/]); )
    {
        ::g::Fuse::Elements::ElementAtlas* atlas = enum1.Current(::TYPES[50/*Uno.Collections.List<Fuse.Elements.ElementAtlas>.Enumerator*/]);
        uPtr(atlas)->Dispose();
    }

    uPtr(_atlasPool)->Clear();

    for (::g::Uno::Collections::List__Enumerator<uStrong< ::g::Fuse::Visual*> > enum2 = (::g::Uno::Collections::List__GetEnumerator_fn(uPtr(_elements), &ret15), ret15); enum2.MoveNext(::TYPES[51/*Uno.Collections.List<Fuse.Visual>.Enumerator*/]); )
    {
        ::g::Fuse::Visual* node = enum2.Current(::TYPES[51/*Uno.Collections.List<Fuse.Visual>.Enumerator*/]);
        ::g::Fuse::Elements::Element* elm = uAs< ::g::Fuse::Elements::Element*>(node, ::TYPES[52/*Fuse.Elements.Element*/]);

        if (elm != NULL)
            uPtr(elm)->ElementBatchEntry(NULL);
    }

    uPtr(_drawList)->Clear();
    DrawListValid = false;
}

// private void DiscardBatching() [instance] :942
void ElementBatcher::DiscardBatching()
{
    uStackFrame __("Fuse.Elements.ElementBatcher", "DiscardBatching()");
    ::g::Uno::Collections::List__Enumerator<uStrong< ::g::Fuse::Elements::ElementBatch*> > ret16;

    for (::g::Uno::Collections::List__Enumerator<uStrong< ::g::Fuse::Elements::ElementBatch*> > enum3 = (::g::Uno::Collections::List__GetEnumerator_fn(uPtr(_batchPool), &ret16), ret16); enum3.MoveNext(::TYPES[53/*Uno.Collections.List<Fuse.Elements.ElementBatch>.Enumerator*/]); )
    {
        ::g::Fuse::Elements::ElementBatch* batch = enum3.Current(::TYPES[53/*Uno.Collections.List<Fuse.Elements.ElementBatch>.Enumerator*/]);
        uPtr(batch)->Dispose();
    }

    uPtr(_batchPool)->Clear();
}

// public void Dispose() [instance] :879
void ElementBatcher::Dispose()
{
    uStackFrame __("Fuse.Elements.ElementBatcher", "Dispose()");
    DiscardAtlasing();
    DiscardBatching();
    uPtr(_reinsertCheckList)->Clear();
    uPtr(_elements)->Clear();
}

// public void Draw(Fuse.DrawContext dc) [instance] :1101
void ElementBatcher::Draw(::g::Fuse::DrawContext* dc)
{
    uStackFrame __("Fuse.Elements.ElementBatcher", "Draw(Fuse.DrawContext)");
    ::g::Uno::Collections::List__Enumerator<uStrong< ::g::Fuse::Elements::ElementAtlas*> > ret17;
    ::g::Uno::Collections::List__Enumerator<uStrong< ::g::Fuse::Visual*> > ret18;
    ::g::Uno::Collections::List__Enumerator<uStrong< ::g::Fuse::Elements::ElementAtlas*> > ret19;
    ::g::Uno::Collections::List__Enumerator<uStrong< ::g::Fuse::Elements::ElementAtlas*> > ret20;
    bool ret21;
    ::g::Uno::Collections::List__Enumerator<uStrong< ::g::Fuse::Elements::ElementBatchEntry*> > ret22;
    ::g::Fuse::Visual* ret23;
    ::g::Uno::Collections::List__Enumerator<uStrong<uObject*> > ret24;

    if (uPtr(_elements)->Count() < 1)
        U_THROW(::g::Uno::Exception::New2(::STRINGS[22/*"Trying to b...*/]));

    if ((double)MaxSpilledRatio > 0.5)
    {
        ::g::Uno::Collections::List* removeList = (::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[47/*Uno.Collections.List<Fuse.Elements.ElementAtlas>*/]);

        for (::g::Uno::Collections::List__Enumerator<uStrong< ::g::Fuse::Elements::ElementAtlas*> > enum7 = (::g::Uno::Collections::List__GetEnumerator_fn(uPtr(_atlasPool), &ret17), ret17); enum7.MoveNext(::TYPES[50/*Uno.Collections.List<Fuse.Elements.ElementAtlas>.Enumerator*/]); )
        {
            ::g::Fuse::Elements::ElementAtlas* a = enum7.Current(::TYPES[50/*Uno.Collections.List<Fuse.Elements.ElementAtlas>.Enumerator*/]);

            if ((double)uPtr(a)->SpilledRatio() > 0.5)
                ::g::Uno::Collections::List__Add_fn(uPtr(removeList), a);
        }

        for (::g::Uno::Collections::List__Enumerator<uStrong< ::g::Fuse::Visual*> > enum8 = (::g::Uno::Collections::List__GetEnumerator_fn(uPtr(_elements), &ret18), ret18); enum8.MoveNext(::TYPES[51/*Uno.Collections.List<Fuse.Visual>.Enumerator*/]); )
        {
            ::g::Fuse::Visual* node = enum8.Current(::TYPES[51/*Uno.Collections.List<Fuse.Visual>.Enumerator*/]);
            ::g::Fuse::Elements::Element* elm = uAs< ::g::Fuse::Elements::Element*>(node, ::TYPES[52/*Fuse.Elements.Element*/]);

            if (elm == NULL)
                continue;

            for (::g::Uno::Collections::List__Enumerator<uStrong< ::g::Fuse::Elements::ElementAtlas*> > enum9 = (::g::Uno::Collections::List__GetEnumerator_fn(uPtr(removeList), &ret19), ret19); enum9.MoveNext(::TYPES[50/*Uno.Collections.List<Fuse.Elements.ElementAtlas>.Enumerator*/]); )
            {
                ::g::Fuse::Elements::ElementAtlas* a1 = enum9.Current(::TYPES[50/*Uno.Collections.List<Fuse.Elements.ElementAtlas>.Enumerator*/]);

                if ((uPtr(elm)->ElementBatchEntry() != NULL) && (uPtr(uPtr(elm)->ElementBatchEntry())->_atlas == a1))
                    uPtr(elm)->ElementBatchEntry(NULL);
            }
        }

        for (::g::Uno::Collections::List__Enumerator<uStrong< ::g::Fuse::Elements::ElementAtlas*> > enum10 = (::g::Uno::Collections::List__GetEnumerator_fn(removeList, &ret20), ret20); enum10.MoveNext(::TYPES[50/*Uno.Collections.List<Fuse.Elements.ElementAtlas>.Enumerator*/]); )
        {
            ::g::Fuse::Elements::ElementAtlas* a2 = enum10.Current(::TYPES[50/*Uno.Collections.List<Fuse.Elements.ElementAtlas>.Enumerator*/]);
            ::g::Uno::Collections::List__Remove_fn(uPtr(_atlasPool), a2, &ret21);
            uPtr(a2)->Dispose();
        }

        DrawListValid = false;
    }

    for (::g::Uno::Collections::List__Enumerator<uStrong< ::g::Fuse::Elements::ElementBatchEntry*> > enum11 = (::g::Uno::Collections::List__GetEnumerator_fn(uPtr(_reinsertCheckList), &ret22), ret22); enum11.MoveNext(::TYPES[45/*Uno.Collections.List<Fuse.Elements.ElementBatchEntry>.Enumerator*/]); )
    {
        ::g::Fuse::Elements::ElementBatchEntry* e = enum11.Current(::TYPES[45/*Uno.Collections.List<Fuse.Elements.ElementBatchEntry>.Enumerator*/]);
        ::g::Fuse::Elements::Element* elm1 = uPtr(e)->_elm;
        ::g::Fuse::Elements::ElementAtlas* atlas = e->_atlas;

        if (((elm1 == NULL) || (uPtr(elm1)->ElementBatchEntry() == NULL)) || (atlas == NULL))
            continue;

        ::g::Uno::Recti cachingRect;

        if ((!::g::Fuse::Elements::Cache::GetCachingRect1(elm1, &cachingRect) || (cachingRect.Size().X > e->_rect.Size().X)) || (cachingRect.Size().Y > e->_rect.Size().Y))
        {
            if (!uPtr(atlas)->ReinsertElement(elm1))
            {
                uPtr(atlas)->RemoveElement(elm1);
                uPtr(elm1)->ElementBatchEntry(NULL);
                DrawListValid = false;
            }
        }
    }

    uPtr(_reinsertCheckList)->Clear();

    if (!DrawListValid)
    {
        UpdateDrawList();
        DrawListValid = true;
    }

    ::g::Fuse::Visual* parent = uPtr((::g::Uno::Collections::List__get_Item_fn(uPtr(_elements), uCRef<int>(0), &ret23), ret23))->Parent();
    ::g::Uno::Float4x4 localToClipTransform = uPtr(dc)->GetLocalToClipTransform(parent);
    ::g::Uno::Rect scissorRectInClipSpace = ::g::Fuse::Elements::ElementAtlas::GetScissorRectInClipSpace(dc);

    for (::g::Uno::Collections::List__Enumerator<uStrong<uObject*> > enum12 = (::g::Uno::Collections::List__GetEnumerator_fn(uPtr(_drawList), &ret24), ret24); enum12.MoveNext(::TYPES[54/*Uno.Collections.List<Fuse.Elements.IElementBatchDrawable>.Enumerator*/]); )
    {
        uObject* d = enum12.Current(::TYPES[54/*Uno.Collections.List<Fuse.Elements.IElementBatchDrawable>.Enumerator*/]);
        ::g::Fuse::Elements::IElementBatchDrawable::Draw(uInterface(uPtr(d), ::TYPES[55/*Fuse.Elements.IElementBatchDrawable*/]), dc, localToClipTransform, scissorRectInClipSpace);
    }
}

// private void OnAtlasSizeChanged(object sender, Uno.EventArgs args) [instance] :869
void ElementBatcher::OnAtlasSizeChanged(uObject* sender, ::g::Uno::EventArgs* args)
{
    uStackFrame __("Fuse.Elements.ElementBatcher", "OnAtlasSizeChanged(object,Uno.EventArgs)");
    DiscardAtlasing();
}

// public void Remove(Fuse.Elements.Element elm) [instance] :900
void ElementBatcher::Remove(::g::Fuse::Elements::Element* elm)
{
    uStackFrame __("Fuse.Elements.ElementBatcher", "Remove(Fuse.Elements.Element)");
    bool ret25;
    ::g::Fuse::Elements::ElementBatchEntry* ret26;
    ::g::Uno::Collections::List__Remove_fn(uPtr(_elements), elm, &ret25);

    for (int i = uPtr(_reinsertCheckList)->Count() - 1; i >= 0; --i)
        if (uPtr((::g::Uno::Collections::List__get_Item_fn(uPtr(_reinsertCheckList), uCRef<int>(i), &ret26), ret26))->_elm == elm)
            uPtr(_reinsertCheckList)->RemoveAt(i);

    DrawListValid = false;
}

// public void RemoveAllElements() [instance] :893
void ElementBatcher::RemoveAllElements()
{
    uStackFrame __("Fuse.Elements.ElementBatcher", "RemoveAllElements()");
    uPtr(_elements)->Clear();
    DrawListValid = false;
}

// private void UpdateDrawList() [instance] :990
void ElementBatcher::UpdateDrawList()
{
    uStackFrame __("Fuse.Elements.ElementBatcher", "UpdateDrawList()");
    ::g::Uno::Collections::List__Enumerator<uStrong< ::g::Fuse::Visual*> > ret27;
    ::g::Uno::Collections::List__Enumerator<uStrong< ::g::Fuse::Elements::ElementAtlas*> > ret28;
    ::g::Uno::Collections::List__Enumerator<uStrong< ::g::Fuse::Elements::ElementAtlas*> > ret29;
    uPtr(_drawList)->Clear();
    DiscardBatching();
    ::g::Uno::Int2 maxBatchRenderBounds = ::g::Uno::Int2__op_Multiply(::g::Fuse::Elements::DisplayHelpers::DisplaySizeHint(), 2);
    ::g::Fuse::Elements::ElementBatch* batch = NULL;

    for (::g::Uno::Collections::List__Enumerator<uStrong< ::g::Fuse::Visual*> > enum4 = (::g::Uno::Collections::List__GetEnumerator_fn(uPtr(_elements), &ret27), ret27); enum4.MoveNext(::TYPES[51/*Uno.Collections.List<Fuse.Visual>.Enumerator*/]); )
    {
        ::g::Fuse::Visual* node = enum4.Current(::TYPES[51/*Uno.Collections.List<Fuse.Visual>.Enumerator*/]);

        if (!ElementBatcher::ShouldBatchElement(node))
        {
            ::g::Uno::Collections::List__Add_fn(uPtr(_drawList), (uObject*)::g::Fuse::Elements::SingleVisualDrawable::New1(node));
            batch = NULL;
            continue;
        }

        ::g::Fuse::Elements::Element* elm = uCast< ::g::Fuse::Elements::Element*>(node, ::TYPES[52/*Fuse.Elements.Element*/]);
        bool emitNewBatch = false;
        ::g::Fuse::Elements::ElementAtlas* atlas = NULL;

        if (batch == NULL)
        {
            emitNewBatch = true;

            if (uPtr(elm)->ElementBatchEntry() != NULL)
                atlas = uPtr(uPtr(elm)->ElementBatchEntry())->_atlas;
        }
        else
        {
            if ((uPtr(elm)->ElementBatchEntry() == NULL) || (uPtr(uPtr(elm)->ElementBatchEntry())->_atlas == NULL))
            {
                atlas = uPtr(batch)->_elementAtlas;

                if (!uPtr(atlas)->AddElement(elm))
                    atlas = NULL;
            }
            else
            {
                if (uPtr(uPtr(elm)->ElementBatchEntry())->_atlas != uPtr(batch)->_elementAtlas)
                    emitNewBatch = true;

                atlas = uPtr(uPtr(elm)->ElementBatchEntry())->_atlas;
            }
        }

        if ((batch != NULL) && !emitNewBatch)
        {
            ::g::Fuse::VisualBounds* batchRenderBounds = uPtr(batch)->RenderBounds();
            ::g::Fuse::VisualBounds* elmRenderBounds = uPtr(elm)->CalcRenderBoundsInParentSpace();
            ::g::Fuse::VisualBounds* newRenderBounds = uPtr(batchRenderBounds)->Merge(elmRenderBounds, NULL);

            if (((uPtr(newRenderBounds)->Size().X > (float)maxBatchRenderBounds.X) || (uPtr(newRenderBounds)->Size().Y > (float)maxBatchRenderBounds.Y)) || batch->IsFull())
                emitNewBatch = true;
        }

        if (emitNewBatch || (atlas == NULL))
        {
            if (atlas == NULL)
            {
                for (::g::Uno::Collections::List__Enumerator<uStrong< ::g::Fuse::Elements::ElementAtlas*> > enum5 = (::g::Uno::Collections::List__GetEnumerator_fn(uPtr(_atlasPool), &ret28), ret28); enum5.MoveNext(::TYPES[50/*Uno.Collections.List<Fuse.Elements.ElementAtlas>.Enumerator*/]); )
                {
                    ::g::Fuse::Elements::ElementAtlas* a = enum5.Current(::TYPES[50/*Uno.Collections.List<Fuse.Elements.ElementAtlas>.Enumerator*/]);

                    if (uPtr(a)->AddElement(elm))
                    {
                        atlas = a;
                        break;
                    }
                }

                if (atlas == NULL)
                    atlas = allocAtlas();
            }

            batch = allocBatch(atlas);

            if (((uPtr(elm)->ElementBatchEntry() == NULL) || (uPtr(uPtr(elm)->ElementBatchEntry())->_atlas != atlas)) && !uPtr(atlas)->AddElement(elm))
            {
                ::g::Uno::Diagnostics::Debug::Log5(::STRINGS[23/*"BUG: atlas-...*/], 1, ::STRINGS[24/*"/Users/medb...*/], 1081);
                ::g::Uno::Collections::List__Add_fn(uPtr(_drawList), (uObject*)::g::Fuse::Elements::SingleVisualDrawable::New1(elm));
                batch = NULL;
                continue;
            }

            ::g::Uno::Collections::List__Add_fn(uPtr(_drawList), (uObject*)batch);
        }

        uPtr(batch)->AddElement(elm);
    }

    MaxSpilledRatio = 0.0f;

    for (::g::Uno::Collections::List__Enumerator<uStrong< ::g::Fuse::Elements::ElementAtlas*> > enum6 = (::g::Uno::Collections::List__GetEnumerator_fn(uPtr(_atlasPool), &ret29), ret29); enum6.MoveNext(::TYPES[50/*Uno.Collections.List<Fuse.Elements.ElementAtlas>.Enumerator*/]); )
    {
        ::g::Fuse::Elements::ElementAtlas* a1 = enum6.Current(::TYPES[50/*Uno.Collections.List<Fuse.Elements.ElementAtlas>.Enumerator*/]);
        MaxSpilledRatio = ::g::Uno::Math::Max1(MaxSpilledRatio, uPtr(a1)->SpilledRatio());
    }
}

// public ElementBatcher New() [static] :863
ElementBatcher* ElementBatcher::New1()
{
    ElementBatcher* obj13 = (ElementBatcher*)uNew(ElementBatcher_typeof());
    obj13->ctor_();
    return obj13;
}

// public static bool ShouldBatchElement(Fuse.Visual node) [static] :966
bool ElementBatcher::ShouldBatchElement(::g::Fuse::Visual* node)
{
    uStackFrame __("Fuse.Elements.ElementBatcher", "ShouldBatchElement(Fuse.Visual)");
    ::g::Fuse::Elements::Element* elm = uAs< ::g::Fuse::Elements::Element*>(node, ::TYPES[52/*Fuse.Elements.Element*/]);

    if (elm == NULL)
        return false;

    bool flat = uPtr(elm)->AreChildrenFlat() && uPtr(elm)->IsLocalFlat();

    if (!flat)
        return false;

    if (!ElementBatcher::ShouldBatchElementWithCachingMode(elm->CachingMode()))
        return false;

    ::g::Uno::Recti cacheRect;

    if (!::g::Fuse::Elements::Cache::GetCachingRect1(elm, &cacheRect))
        return false;

    return ElementBatcher::ShouldBatchElementWithSize(cacheRect.Size());
}

// public static bool ShouldBatchElementWithCachingMode(Fuse.Elements.CachingMode mode) [static] :961
bool ElementBatcher::ShouldBatchElementWithCachingMode(int mode)
{
    return mode != 2;
}

// public static bool ShouldBatchElementWithSize(int2 size) [static] :953
bool ElementBatcher::ShouldBatchElementWithSize(::g::Uno::Int2 size)
{
    ::g::Uno::Int2 maxSize = ElementBatcher::MaxElementSize();
    return ((size.X <= maxSize.X) && (size.Y <= maxSize.Y)) && ((size.X * size.Y) <= ElementBatcher::MaxElementPixels());
}

// private static int get_MaxElementPixels() [static] :951
int ElementBatcher::MaxElementPixels()
{
    return (ElementBatcher::MaxElementSize().X * ElementBatcher::MaxElementSize().Y) / 2;
}

// private static int2 get_MaxElementSize() [static] :949
::g::Uno::Int2 ElementBatcher::MaxElementSize()
{
    return ::g::Fuse::Elements::ElementAtlasFramebuffer::Size();
}
// }

// /Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Elements/1.0.2/$.uno
// ---------------------------------------------------------------------------------------

// internal sealed class ExplicitTransformOrigin :2410
// {
static void ExplicitTransformOrigin_build(uType* type)
{
    ::TYPES[56] = ::g::Fuse::ICommonViewport_typeof();
    type->SetInterfaces(
        ::g::Fuse::Elements::ITransformOrigin_typeof(), offsetof(ExplicitTransformOrigin_type, interface0));
    type->SetFields(0,
        ::g::Uno::UX::Size2_typeof(), offsetof(::g::Fuse::Elements::ExplicitTransformOrigin, Origin), 0);
}

ExplicitTransformOrigin_type* ExplicitTransformOrigin_typeof()
{
    static uSStrong<ExplicitTransformOrigin_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(ExplicitTransformOrigin);
    options.TypeSize = sizeof(ExplicitTransformOrigin_type);
    type = (ExplicitTransformOrigin_type*)uClassType::New("Fuse.Elements.ExplicitTransformOrigin", options);
    type->fp_build_ = ExplicitTransformOrigin_build;
    type->fp_ctor_ = (void*)ExplicitTransformOrigin__New1_fn;
    type->interface0.fp_GetOffset = (void(*)(uObject*, ::g::Fuse::Elements::Element*, ::g::Uno::Float3*))ExplicitTransformOrigin__GetOffset_fn;
    return type;
}

// public generated ExplicitTransformOrigin() :2410
void ExplicitTransformOrigin__ctor__fn(ExplicitTransformOrigin* __this)
{
    __this->ctor_();
}

// public float3 GetOffset(Fuse.Elements.Element elm) :2434
void ExplicitTransformOrigin__GetOffset_fn(ExplicitTransformOrigin* __this, ::g::Fuse::Elements::Element* elm, ::g::Uno::Float3* __retval)
{
    *__retval = __this->GetOffset(elm);
}

// public generated ExplicitTransformOrigin New() :2410
void ExplicitTransformOrigin__New1_fn(ExplicitTransformOrigin** __retval)
{
    *__retval = ExplicitTransformOrigin::New1();
}

// private float SizePart(Uno.UX.Size sz, float relative, float pixelsPerPoint) :2415
void ExplicitTransformOrigin__SizePart_fn(ExplicitTransformOrigin* __this, ::g::Uno::UX::Size* sz, float* relative, float* pixelsPerPoint, float* __retval)
{
    *__retval = __this->SizePart(*sz, *relative, *pixelsPerPoint);
}

// public generated ExplicitTransformOrigin() [instance] :2410
void ExplicitTransformOrigin::ctor_()
{
}

// public float3 GetOffset(Fuse.Elements.Element elm) [instance] :2434
::g::Uno::Float3 ExplicitTransformOrigin::GetOffset(::g::Fuse::Elements::Element* elm)
{
    uStackFrame __("Fuse.Elements.ExplicitTransformOrigin", "GetOffset(Fuse.Elements.Element)");
    float pixelsPerPoint = ::g::Fuse::ICommonViewport::PixelsPerPoint(uInterface(uPtr(uPtr(elm)->Viewport()), ::TYPES[56/*Fuse.ICommonViewport*/]));
    return ::g::Uno::Float3__New2(SizePart(Origin.X, elm->ActualSize().X, pixelsPerPoint), SizePart(Origin.Y, elm->ActualSize().Y, pixelsPerPoint), 0.0f);
}

// private float SizePart(Uno.UX.Size sz, float relative, float pixelsPerPoint) [instance] :2415
float ExplicitTransformOrigin::SizePart(::g::Uno::UX::Size sz, float relative, float pixelsPerPoint)
{
    int u = sz.DetermineUnit();

    switch (u)
    {
        case 2:
            return sz.Value;
        case 3:
            return sz.Value / pixelsPerPoint;
        case 4:
            return (sz.Value * relative) / 100.0f;
    }

    return 0.0f;
}

// public generated ExplicitTransformOrigin New() [static] :2410
ExplicitTransformOrigin* ExplicitTransformOrigin::New1()
{
    ExplicitTransformOrigin* obj1 = (ExplicitTransformOrigin*)uNew(ExplicitTransformOrigin_typeof());
    obj1->ctor_();
    return obj1;
}
// }

// /Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Elements/1.0.2/$.uno
// ---------------------------------------------------------------------------------------

// internal sealed class FillAspectBoxSizing :21
// {
// static FillAspectBoxSizing() :21
static void FillAspectBoxSizing__cctor__fn(uType* __type)
{
    FillAspectBoxSizing::Singleton_ = FillAspectBoxSizing::New1();
}

static void FillAspectBoxSizing_build(uType* type)
{
    type->SetFields(0,
        type, (uintptr_t)&::g::Fuse::Elements::FillAspectBoxSizing::Singleton_, uFieldFlagsStatic);
}

::g::Fuse::Elements::BoxSizing_type* FillAspectBoxSizing_typeof()
{
    static uSStrong< ::g::Fuse::Elements::BoxSizing_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Elements::BoxSizing_typeof();
    options.FieldCount = 1;
    options.ObjectSize = sizeof(FillAspectBoxSizing);
    options.TypeSize = sizeof(::g::Fuse::Elements::BoxSizing_type);
    type = (::g::Fuse::Elements::BoxSizing_type*)uClassType::New("Fuse.Elements.FillAspectBoxSizing", options);
    type->fp_build_ = FillAspectBoxSizing_build;
    type->fp_ctor_ = (void*)FillAspectBoxSizing__New1_fn;
    type->fp_cctor_ = FillAspectBoxSizing__cctor__fn;
    type->fp_CalcArrangePaddingSize = (void(*)(::g::Fuse::Elements::BoxSizing*, ::g::Fuse::Elements::Element*, ::g::Fuse::LayoutParams*, ::g::Uno::Float2*))FillAspectBoxSizing__CalcArrangePaddingSize_fn;
    type->fp_CalcBoxPlacement = (void(*)(::g::Fuse::Elements::BoxSizing*, ::g::Fuse::Elements::Element*, ::g::Uno::Float2*, ::g::Fuse::LayoutParams*, ::g::Fuse::Elements::BoxPlacement*))FillAspectBoxSizing__CalcBoxPlacement_fn;
    type->fp_CalcMarginSize = (void(*)(::g::Fuse::Elements::BoxSizing*, ::g::Fuse::Elements::Element*, ::g::Fuse::LayoutParams*, ::g::Uno::Float2*))FillAspectBoxSizing__CalcMarginSize_fn;
    return type;
}

// public generated FillAspectBoxSizing() :21
void FillAspectBoxSizing__ctor_1_fn(FillAspectBoxSizing* __this)
{
    __this->ctor_1();
}

// public override sealed float2 CalcArrangePaddingSize(Fuse.Elements.Element element, Fuse.LayoutParams lp) :35
void FillAspectBoxSizing__CalcArrangePaddingSize_fn(FillAspectBoxSizing* __this, ::g::Fuse::Elements::Element* element, ::g::Fuse::LayoutParams* lp, ::g::Uno::Float2* __retval)
{
    uStackFrame __("Fuse.Elements.FillAspectBoxSizing", "CalcArrangePaddingSize(Fuse.Elements.Element,Fuse.LayoutParams)");
    ::g::Fuse::LayoutParams lp_ = *lp;
    ::g::Fuse::LayoutParams cs = __this->GetConstraints(element, lp_, 2);
    ::g::Fuse::LayoutParams c = lp_.CloneAndDerive();
    c.BoxConstrain(cs);
    float aspect = uPtr(element)->Aspect();
    ::g::Uno::Float2 sz = ::g::Uno::Float2__New1(0.0f);

    if (c.HasSize())
        sz = __this->Pick(c.Size(), aspect);
    else if (c.HasX())
        sz = ::g::Uno::Float2__New2(c.X(), c.X() / aspect);
    else if (c.HasY())
        sz = ::g::Uno::Float2__New2(c.Y() * aspect, c.Y());

    int ac = element->AspectConstraint();

    if ((ac & 1) == 1)
    {
        if (c.HasMaxSize())
            sz = __this->Fit(sz, c.MaxSize(), aspect);
        else if (c.HasMaxX())
            sz = __this->Fit(sz, ::g::Uno::Float2__New2(c.MaxX(), sz.Y), aspect);
        else if (c.HasMaxY())
            sz = __this->Fit(sz, ::g::Uno::Float2__New2(sz.X, c.MaxY()), aspect);

        if (c.HasMinX() && (sz.X < c.MinX()))
            sz = ::g::Uno::Float2__New2(c.MinX(), c.MinX() / aspect);

        if (c.HasMinY() && (sz.Y < c.MinY()))
            sz = ::g::Uno::Float2__New2(c.MinY() * aspect, c.MinY());
    }

    if ((ac & 2) == 2)
    {
        if (c.HasMaxX() && (sz.X > c.MaxX()))
            sz.X = c.MaxX();

        if (c.HasMinX() && (sz.X < c.MinX()))
            sz.X = c.MinX();

        if (c.HasMaxY() && (sz.Y > c.MaxY()))
            sz.Y = c.MaxY();

        if (c.HasMinY() && (sz.Y < c.MinY()))
            sz.Y = c.MinY();
    }

    return *__retval = sz, void();
}

// public override sealed Fuse.Elements.BoxPlacement CalcBoxPlacement(Fuse.Elements.Element element, float2 position, Fuse.LayoutParams lp) :25
void FillAspectBoxSizing__CalcBoxPlacement_fn(FillAspectBoxSizing* __this, ::g::Fuse::Elements::Element* element, ::g::Uno::Float2* position, ::g::Fuse::LayoutParams* lp, ::g::Fuse::Elements::BoxPlacement* __retval)
{
    uStackFrame __("Fuse.Elements.FillAspectBoxSizing", "CalcBoxPlacement(Fuse.Elements.Element,float2,Fuse.LayoutParams)");
    ::g::Uno::Float2 position_ = *position;
    ::g::Fuse::LayoutParams lp_ = *lp;
    return *__retval = uPtr(::g::Fuse::Elements::StandardBoxSizing::Singleton())->CalcBoxPlacement(element, position_, lp_), void();
}

// public override sealed float2 CalcMarginSize(Fuse.Elements.Element element, Fuse.LayoutParams lp) :30
void FillAspectBoxSizing__CalcMarginSize_fn(FillAspectBoxSizing* __this, ::g::Fuse::Elements::Element* element, ::g::Fuse::LayoutParams* lp, ::g::Uno::Float2* __retval)
{
    uStackFrame __("Fuse.Elements.FillAspectBoxSizing", "CalcMarginSize(Fuse.Elements.Element,Fuse.LayoutParams)");
    ::g::Fuse::LayoutParams lp_ = *lp;
    return *__retval = uPtr(::g::Fuse::Elements::StandardBoxSizing::Singleton())->CalcMarginSize(element, lp_), void();
}

// private float2 Fit(float2 sz, float2 max, float aspect) :93
void FillAspectBoxSizing__Fit_fn(FillAspectBoxSizing* __this, ::g::Uno::Float2* sz, ::g::Uno::Float2* max, float* aspect, ::g::Uno::Float2* __retval)
{
    *__retval = __this->Fit(*sz, *max, *aspect);
}

// public generated FillAspectBoxSizing New() :21
void FillAspectBoxSizing__New1_fn(FillAspectBoxSizing** __retval)
{
    *__retval = FillAspectBoxSizing::New1();
}

// private float2 Pick(float2 sz, float aspect) :84
void FillAspectBoxSizing__Pick_fn(FillAspectBoxSizing* __this, ::g::Uno::Float2* sz, float* aspect, ::g::Uno::Float2* __retval)
{
    *__retval = __this->Pick(*sz, *aspect);
}

uSStrong<FillAspectBoxSizing*> FillAspectBoxSizing::Singleton_;

// public generated FillAspectBoxSizing() [instance] :21
void FillAspectBoxSizing::ctor_1()
{
    ctor_();
}

// private float2 Fit(float2 sz, float2 max, float aspect) [instance] :93
::g::Uno::Float2 FillAspectBoxSizing::Fit(::g::Uno::Float2 sz, ::g::Uno::Float2 max, float aspect)
{
    if ((sz.X <= max.X) && (sz.Y <= max.Y))
        return sz;

    if (sz.X > max.X)
        return ::g::Uno::Float2__New2(max.X, max.X / aspect);

    return ::g::Uno::Float2__New2(max.Y * aspect, max.Y);
}

// private float2 Pick(float2 sz, float aspect) [instance] :84
::g::Uno::Float2 FillAspectBoxSizing::Pick(::g::Uno::Float2 sz, float aspect)
{
    float y = sz.X / aspect;

    if (y <= sz.Y)
        return ::g::Uno::Float2__New2(sz.X, y);

    return ::g::Uno::Float2__New2(sz.Y * aspect, sz.Y);
}

// public generated FillAspectBoxSizing New() [static] :21
FillAspectBoxSizing* FillAspectBoxSizing::New1()
{
    FillAspectBoxSizing* obj1 = (FillAspectBoxSizing*)uNew(FillAspectBoxSizing_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// /Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Elements/1.0.2/$.uno
// ---------------------------------------------------------------------------------------

// private struct Element.GMSCacheItem :1917
// {
static void Element__GMSCacheItem_build(uType* type)
{
    type->SetFields(0,
        ::g::Fuse::LayoutParams_typeof(), offsetof(::g::Fuse::Elements::Element__GMSCacheItem, layoutParams), 0,
        ::g::Uno::Float2_typeof(), offsetof(::g::Fuse::Elements::Element__GMSCacheItem, result), 0);
}

uStructType* Element__GMSCacheItem_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ValueSize = sizeof(Element__GMSCacheItem);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Fuse.Elements.Element.GMSCacheItem", options);
    type->fp_build_ = Element__GMSCacheItem_build;
    return type;
}
// }

// /Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Elements/1.0.2/$.uno
// ---------------------------------------------------------------------------------------

// public sealed class HeightFunction :3714
// {
static void HeightFunction_build(uType* type)
{
    type->SetInterfaces(
        ::g::Fuse::Reactive::IExpression_typeof(), offsetof(::g::Fuse::Elements::LayoutFunction_type, interface0));
    type->SetFields(1);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)HeightFunction__New1_fn, 0, true, type, 1, ::g::Fuse::Reactive::Expression_typeof()));
}

::g::Fuse::Elements::LayoutFunction_type* HeightFunction_typeof()
{
    static uSStrong< ::g::Fuse::Elements::LayoutFunction_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Elements::LayoutFunction_typeof();
    options.FieldCount = 1;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(HeightFunction);
    options.TypeSize = sizeof(::g::Fuse::Elements::LayoutFunction_type);
    type = (::g::Fuse::Elements::LayoutFunction_type*)uClassType::New("Fuse.Elements.HeightFunction", options);
    type->fp_build_ = HeightFunction_build;
    type->fp_GetValue = (void(*)(::g::Fuse::Elements::LayoutFunction*, ::g::Fuse::PlacedArgs*, uObject**))HeightFunction__GetValue_fn;
    type->interface0.fp_Subscribe = (void(*)(uObject*, uObject*, uObject*, uObject**))::g::Fuse::Elements::LayoutFunction__Subscribe_fn;
    return type;
}

// public HeightFunction(Fuse.Reactive.Expression element) :3717
void HeightFunction__ctor_3_fn(HeightFunction* __this, ::g::Fuse::Reactive::Expression* element)
{
    __this->ctor_3(element);
}

// protected override sealed object GetValue(Fuse.PlacedArgs args) :3719
void HeightFunction__GetValue_fn(HeightFunction* __this, ::g::Fuse::PlacedArgs* args, uObject** __retval)
{
    uStackFrame __("Fuse.Elements.HeightFunction", "GetValue(Fuse.PlacedArgs)");
    return *__retval = uBox(::g::Uno::Float_typeof(), uPtr(args)->NewSize().Y), void();
}

// public HeightFunction New(Fuse.Reactive.Expression element) :3717
void HeightFunction__New1_fn(::g::Fuse::Reactive::Expression* element, HeightFunction** __retval)
{
    *__retval = HeightFunction::New1(element);
}

// public HeightFunction(Fuse.Reactive.Expression element) [instance] :3717
void HeightFunction::ctor_3(::g::Fuse::Reactive::Expression* element)
{
    ctor_2(element);
}

// public HeightFunction New(Fuse.Reactive.Expression element) [static] :3717
HeightFunction* HeightFunction::New1(::g::Fuse::Reactive::Expression* element)
{
    HeightFunction* obj1 = (HeightFunction*)uNew(HeightFunction_typeof());
    obj1->ctor_3(element);
    return obj1;
}
// }

// /Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Elements/1.0.2/$.uno
// ---------------------------------------------------------------------------------------

// public enum HitTestMode :1307
uEnumType* HitTestMode_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Elements.HitTestMode", ::g::Uno::Int_typeof(), 6);
    type->SetLiterals(
        "None", 0LL,
        "LocalVisual", 1LL,
        "LocalBounds", 2LL,
        "Children", 4LL,
        "LocalVisualAndChildren", 5LL,
        "LocalBoundsAndChildren", 6LL);
    return type;
}

// /Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Elements/1.0.2/caching/$.uno
// -----------------------------------------------------------------------------------------------

// internal abstract interface IElementBatchDrawable :836
// {
uInterfaceType* IElementBatchDrawable_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.Elements.IElementBatchDrawable", 0, 0);
    return type;
}
// }

// /Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Elements/1.0.2/$.uno
// ---------------------------------------------------------------------------------------

// public sealed class InteractiveTransform :3086
// {
// static InteractiveTransform() :3086
static void InteractiveTransform__cctor_1_fn(uType* __type)
{
    InteractiveTransform::_zoomFactorName_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[25/*"ZoomFactor"*/]);
    InteractiveTransform::_rotationName_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[26/*"Rotation"*/]);
    InteractiveTransform::_translationName_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[27/*"Translation"*/]);
}

static void InteractiveTransform_build(uType* type)
{
    ::STRINGS[25] = uString::Const("ZoomFactor");
    ::STRINGS[26] = uString::Const("Rotation");
    ::STRINGS[27] = uString::Const("Translation");
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Transform_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Transform_type, interface1),
        ::g::Fuse::IProperties_typeof(), offsetof(::g::Fuse::Transform_type, interface2),
        ::g::Fuse::INotifyUnrooted_typeof(), offsetof(::g::Fuse::Transform_type, interface3),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Transform_type, interface4),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Transform_type, interface5));
    type->SetFields(14,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Elements::InteractiveTransform, _rotation), 0,
        ::g::Uno::Float2_typeof(), offsetof(::g::Fuse::Elements::InteractiveTransform, _translation), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Elements::InteractiveTransform, _zoomFactor), 0,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::Fuse::Elements::InteractiveTransform::_rotationName_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::Fuse::Elements::InteractiveTransform::_translationName_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::Fuse::Elements::InteractiveTransform::_zoomFactorName_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(10,
        new uFunction(".ctor", NULL, (void*)InteractiveTransform__New2_fn, 0, true, type, 0),
        new uFunction("get_Rotation", NULL, (void*)InteractiveTransform__get_Rotation_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("set_Rotation", NULL, (void*)InteractiveTransform__set_Rotation_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("SetRotation", NULL, (void*)InteractiveTransform__SetRotation_fn, 0, false, uVoid_typeof(), 2, ::g::Uno::Float_typeof(), ::g::Uno::UX::IPropertyListener_typeof()),
        new uFunction("SetTranslation", NULL, (void*)InteractiveTransform__SetTranslation_fn, 0, false, uVoid_typeof(), 2, ::g::Uno::Float2_typeof(), ::g::Uno::UX::IPropertyListener_typeof()),
        new uFunction("SetZoomFactor", NULL, (void*)InteractiveTransform__SetZoomFactor_fn, 0, false, uVoid_typeof(), 2, ::g::Uno::Float_typeof(), ::g::Uno::UX::IPropertyListener_typeof()),
        new uFunction("get_Translation", NULL, (void*)InteractiveTransform__get_Translation_fn, 0, false, ::g::Uno::Float2_typeof(), 0),
        new uFunction("set_Translation", NULL, (void*)InteractiveTransform__set_Translation_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float2_typeof()),
        new uFunction("get_ZoomFactor", NULL, (void*)InteractiveTransform__get_ZoomFactor_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("set_ZoomFactor", NULL, (void*)InteractiveTransform__set_ZoomFactor_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()));
}

::g::Fuse::Transform_type* InteractiveTransform_typeof()
{
    static uSStrong< ::g::Fuse::Transform_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Transform_typeof();
    options.FieldCount = 20;
    options.InterfaceCount = 6;
    options.ObjectSize = sizeof(InteractiveTransform);
    options.TypeSize = sizeof(::g::Fuse::Transform_type);
    type = (::g::Fuse::Transform_type*)uClassType::New("Fuse.Elements.InteractiveTransform", options);
    type->fp_build_ = InteractiveTransform_build;
    type->fp_ctor_ = (void*)InteractiveTransform__New2_fn;
    type->fp_cctor_ = InteractiveTransform__cctor_1_fn;
    type->fp_AppendTo = (void(*)(::g::Fuse::Transform*, ::g::Fuse::FastMatrix*, float*))InteractiveTransform__AppendTo_fn;
    type->fp_get_IsFlat = (void(*)(::g::Fuse::Transform*, bool*))InteractiveTransform__get_IsFlat_fn;
    type->fp_PrependTo = (void(*)(::g::Fuse::Transform*, ::g::Fuse::FastMatrix*))InteractiveTransform__PrependTo_fn;
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

// public generated InteractiveTransform() :3086
void InteractiveTransform__ctor_3_fn(InteractiveTransform* __this)
{
    __this->ctor_3();
}

// internal void AppendRotationScale(Fuse.FastMatrix matrix) :3162
void InteractiveTransform__AppendRotationScale_fn(InteractiveTransform* __this, ::g::Fuse::FastMatrix* matrix)
{
    __this->AppendRotationScale(matrix);
}

// public override sealed void AppendTo(Fuse.FastMatrix matrix, [float weight]) :3155
void InteractiveTransform__AppendTo_fn(InteractiveTransform* __this, ::g::Fuse::FastMatrix* matrix, float* weight)
{
    uStackFrame __("Fuse.Elements.InteractiveTransform", "AppendTo(Fuse.FastMatrix,[float])");
    float weight_ = *weight;
    uPtr(matrix)->AppendTranslation(__this->Translation().X, __this->Translation().Y, 0.0f);
    matrix->AppendScale(__this->ZoomFactor() * weight_);
    matrix->AppendRotation(__this->Rotation() * weight_);
}

// public override sealed bool get_IsFlat() :3146
void InteractiveTransform__get_IsFlat_fn(InteractiveTransform* __this, bool* __retval)
{
    return *__retval = true, void();
}

// public generated InteractiveTransform New() :3086
void InteractiveTransform__New2_fn(InteractiveTransform** __retval)
{
    *__retval = InteractiveTransform::New2();
}

// public override sealed void PrependTo(Fuse.FastMatrix matrix) :3148
void InteractiveTransform__PrependTo_fn(InteractiveTransform* __this, ::g::Fuse::FastMatrix* matrix)
{
    uStackFrame __("Fuse.Elements.InteractiveTransform", "PrependTo(Fuse.FastMatrix)");
    uPtr(matrix)->PrependRotation(__this->Rotation());
    matrix->PrependScale(__this->ZoomFactor());
    matrix->PrependTranslation(__this->Translation().X, __this->Translation().Y, 0.0f);
}

// public float get_Rotation() :3112
void InteractiveTransform__get_Rotation_fn(InteractiveTransform* __this, float* __retval)
{
    *__retval = __this->Rotation();
}

// public void set_Rotation(float value) :3113
void InteractiveTransform__set_Rotation_fn(InteractiveTransform* __this, float* value)
{
    __this->Rotation(*value);
}

// public void SetRotation(float value, Uno.UX.IPropertyListener origin) :3117
void InteractiveTransform__SetRotation_fn(InteractiveTransform* __this, float* value, uObject* origin)
{
    __this->SetRotation(*value, origin);
}

// public void SetTranslation(float2 value, Uno.UX.IPropertyListener origin) :3136
void InteractiveTransform__SetTranslation_fn(InteractiveTransform* __this, ::g::Uno::Float2* value, uObject* origin)
{
    __this->SetTranslation(*value, origin);
}

// public void SetZoomFactor(float value, Uno.UX.IPropertyListener origin) :3097
void InteractiveTransform__SetZoomFactor_fn(InteractiveTransform* __this, float* value, uObject* origin)
{
    __this->SetZoomFactor(*value, origin);
}

// public float2 get_Translation() :3131
void InteractiveTransform__get_Translation_fn(InteractiveTransform* __this, ::g::Uno::Float2* __retval)
{
    *__retval = __this->Translation();
}

// public void set_Translation(float2 value) :3132
void InteractiveTransform__set_Translation_fn(InteractiveTransform* __this, ::g::Uno::Float2* value)
{
    __this->Translation(*value);
}

// public float get_ZoomFactor() :3092
void InteractiveTransform__get_ZoomFactor_fn(InteractiveTransform* __this, float* __retval)
{
    *__retval = __this->ZoomFactor();
}

// public void set_ZoomFactor(float value) :3093
void InteractiveTransform__set_ZoomFactor_fn(InteractiveTransform* __this, float* value)
{
    __this->ZoomFactor(*value);
}

::g::Uno::UX::Selector InteractiveTransform::_rotationName_;
::g::Uno::UX::Selector InteractiveTransform::_translationName_;
::g::Uno::UX::Selector InteractiveTransform::_zoomFactorName_;

// public generated InteractiveTransform() [instance] :3086
void InteractiveTransform::ctor_3()
{
    _zoomFactor = 1.0f;
    _rotation = 0.0f;
    ctor_2();
}

// internal void AppendRotationScale(Fuse.FastMatrix matrix) [instance] :3162
void InteractiveTransform::AppendRotationScale(::g::Fuse::FastMatrix* matrix)
{
    uStackFrame __("Fuse.Elements.InteractiveTransform", "AppendRotationScale(Fuse.FastMatrix)");
    uPtr(matrix)->AppendScale(ZoomFactor());
    matrix->AppendRotation(Rotation());
}

// public float get_Rotation() [instance] :3112
float InteractiveTransform::Rotation()
{
    return _rotation;
}

// public void set_Rotation(float value) [instance] :3113
void InteractiveTransform::Rotation(float value)
{
    uStackFrame __("Fuse.Elements.InteractiveTransform", "set_Rotation(float)");
    SetRotation(value, NULL);
}

// public void SetRotation(float value, Uno.UX.IPropertyListener origin) [instance] :3117
void InteractiveTransform::SetRotation(float value, uObject* origin)
{
    uStackFrame __("Fuse.Elements.InteractiveTransform", "SetRotation(float,Uno.UX.IPropertyListener)");

    if (_rotation != value)
    {
        _rotation = value;
        OnPropertyChanged1(InteractiveTransform::_rotationName(), origin);
        OnMatrixChanged(NULL, NULL);
    }
}

// public void SetTranslation(float2 value, Uno.UX.IPropertyListener origin) [instance] :3136
void InteractiveTransform::SetTranslation(::g::Uno::Float2 value, uObject* origin)
{
    uStackFrame __("Fuse.Elements.InteractiveTransform", "SetTranslation(float2,Uno.UX.IPropertyListener)");

    if (::g::Uno::Float2__op_Inequality(_translation, value))
    {
        _translation = value;
        OnPropertyChanged1(InteractiveTransform::_translationName(), origin);
        OnMatrixChanged(NULL, NULL);
    }
}

// public void SetZoomFactor(float value, Uno.UX.IPropertyListener origin) [instance] :3097
void InteractiveTransform::SetZoomFactor(float value, uObject* origin)
{
    uStackFrame __("Fuse.Elements.InteractiveTransform", "SetZoomFactor(float,Uno.UX.IPropertyListener)");

    if (_zoomFactor != value)
    {
        _zoomFactor = value;
        OnPropertyChanged1(InteractiveTransform::_zoomFactorName(), origin);
        OnMatrixChanged(NULL, NULL);
    }
}

// public float2 get_Translation() [instance] :3131
::g::Uno::Float2 InteractiveTransform::Translation()
{
    return _translation;
}

// public void set_Translation(float2 value) [instance] :3132
void InteractiveTransform::Translation(::g::Uno::Float2 value)
{
    uStackFrame __("Fuse.Elements.InteractiveTransform", "set_Translation(float2)");
    SetTranslation(value, NULL);
}

// public float get_ZoomFactor() [instance] :3092
float InteractiveTransform::ZoomFactor()
{
    return _zoomFactor;
}

// public void set_ZoomFactor(float value) [instance] :3093
void InteractiveTransform::ZoomFactor(float value)
{
    uStackFrame __("Fuse.Elements.InteractiveTransform", "set_ZoomFactor(float)");
    SetZoomFactor(value, NULL);
}

// public generated InteractiveTransform New() [static] :3086
InteractiveTransform* InteractiveTransform::New2()
{
    InteractiveTransform* obj1 = (InteractiveTransform*)uNew(InteractiveTransform_typeof());
    obj1->ctor_3();
    return obj1;
}
// }

// /Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Elements/1.0.2/$.uno
// ---------------------------------------------------------------------------------------

// public abstract interface ITransformOrigin :2405
// {
uInterfaceType* ITransformOrigin_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.Elements.ITransformOrigin", 0, 0);
    type->Reflection.SetFunctions(1,
        new uFunction("GetOffset", NULL, NULL, offsetof(ITransformOrigin, fp_GetOffset), false, ::g::Uno::Float3_typeof(), 1, ::g::Fuse::Elements::Element_typeof()));
    return type;
}
// }

// /Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Elements/1.0.2/$.uno
// ---------------------------------------------------------------------------------------

// public abstract interface ITreeRenderer :1154
// {
uInterfaceType* ITreeRenderer_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.Elements.ITreeRenderer", 0, 0);
    type->Reflection.SetFunctions(13,
        new uFunction("BackgroundChanged", NULL, NULL, offsetof(ITreeRenderer, fp_BackgroundChanged), false, uVoid_typeof(), 2, ::g::Fuse::Elements::Element_typeof(), ::g::Fuse::Drawing::Brush_typeof()),
        new uFunction("ClipToBoundsChanged", NULL, NULL, offsetof(ITreeRenderer, fp_ClipToBoundsChanged), false, uVoid_typeof(), 2, ::g::Fuse::Elements::Element_typeof(), ::g::Uno::Bool_typeof()),
        new uFunction("HitTestModeChanged", NULL, NULL, offsetof(ITreeRenderer, fp_HitTestModeChanged), false, uVoid_typeof(), 2, ::g::Fuse::Elements::Element_typeof(), ::g::Uno::Bool_typeof()),
        new uFunction("IsEnabledChanged", NULL, NULL, offsetof(ITreeRenderer, fp_IsEnabledChanged), false, uVoid_typeof(), 2, ::g::Fuse::Elements::Element_typeof(), ::g::Uno::Bool_typeof()),
        new uFunction("IsVisibleChanged", NULL, NULL, offsetof(ITreeRenderer, fp_IsVisibleChanged), false, uVoid_typeof(), 2, ::g::Fuse::Elements::Element_typeof(), ::g::Uno::Bool_typeof()),
        new uFunction("Measure", NULL, NULL, offsetof(ITreeRenderer, fp_Measure), false, ::g::Uno::Bool_typeof(), 3, ::g::Fuse::Elements::Element_typeof(), ::g::Fuse::LayoutParams_typeof(), ::g::Uno::Float2_typeof()->ByRef()),
        new uFunction("OpacityChanged", NULL, NULL, offsetof(ITreeRenderer, fp_OpacityChanged), false, uVoid_typeof(), 2, ::g::Fuse::Elements::Element_typeof(), ::g::Uno::Float_typeof()),
        new uFunction("Placed", NULL, NULL, offsetof(ITreeRenderer, fp_Placed), false, uVoid_typeof(), 1, ::g::Fuse::Elements::Element_typeof()),
        new uFunction("Rooted", NULL, NULL, offsetof(ITreeRenderer, fp_Rooted), false, uVoid_typeof(), 1, ::g::Fuse::Elements::Element_typeof()),
        new uFunction("RootingStarted", NULL, NULL, offsetof(ITreeRenderer, fp_RootingStarted), false, uVoid_typeof(), 1, ::g::Fuse::Elements::Element_typeof()),
        new uFunction("TransformChanged", NULL, NULL, offsetof(ITreeRenderer, fp_TransformChanged), false, uVoid_typeof(), 1, ::g::Fuse::Elements::Element_typeof()),
        new uFunction("Unrooted", NULL, NULL, offsetof(ITreeRenderer, fp_Unrooted), false, uVoid_typeof(), 1, ::g::Fuse::Elements::Element_typeof()),
        new uFunction("ZOrderChanged", NULL, NULL, offsetof(ITreeRenderer, fp_ZOrderChanged), false, uVoid_typeof(), 2, ::g::Fuse::Elements::Element_typeof(), ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Visual_typeof(), NULL)));
    return type;
}
// }

// /Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Elements/1.0.2/$.uno
// ---------------------------------------------------------------------------------------

// public abstract class LayoutFunction :3646
// {
static void LayoutFunction_build(uType* type)
{
    type->SetInterfaces(
        ::g::Fuse::Reactive::IExpression_typeof(), offsetof(LayoutFunction_type, interface0));
    type->SetFields(1);
}

LayoutFunction_type* LayoutFunction_typeof()
{
    static uSStrong<LayoutFunction_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Reactive::UnaryOperator_typeof();
    options.FieldCount = 1;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(LayoutFunction);
    options.TypeSize = sizeof(LayoutFunction_type);
    type = (LayoutFunction_type*)uClassType::New("Fuse.Elements.LayoutFunction", options);
    type->fp_build_ = LayoutFunction_build;
    type->fp_Subscribe = (void(*)(::g::Fuse::Reactive::Expression*, uObject*, uObject*, uObject**))LayoutFunction__Subscribe_fn;
    type->interface0.fp_Subscribe = (void(*)(uObject*, uObject*, uObject*, uObject**))LayoutFunction__Subscribe_fn;
    return type;
}

// protected LayoutFunction(Fuse.Reactive.Expression element) :3648
void LayoutFunction__ctor_2_fn(LayoutFunction* __this, ::g::Fuse::Reactive::Expression* element)
{
    __this->ctor_2(element);
}

// public override sealed Uno.IDisposable Subscribe(Fuse.Reactive.IContext dc, Fuse.Reactive.IListener listener) :3652
void LayoutFunction__Subscribe_fn(LayoutFunction* __this, uObject* dc, uObject* listener, uObject** __retval)
{
    uStackFrame __("Fuse.Elements.LayoutFunction", "Subscribe(Fuse.Reactive.IContext,Fuse.Reactive.IListener)");
    return *__retval = (uObject*)LayoutFunction__LayoutSubscription::New2(__this, dc, listener), void();
}

// protected LayoutFunction(Fuse.Reactive.Expression element) [instance] :3648
void LayoutFunction::ctor_2(::g::Fuse::Reactive::Expression* element)
{
    ctor_1(element);
}
// }

// /Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Elements/1.0.2/$.uno
// ---------------------------------------------------------------------------------------

// public static class LayoutMasterAttr :3356
// {
static void LayoutMasterAttr_build(uType* type)
{
    type->Reflection.SetFunctions(2,
        new uFunction("GetLayoutMasterMode", NULL, (void*)LayoutMasterAttr__GetLayoutMasterMode_fn, 0, true, ::g::Fuse::Elements::LayoutMasterMode_typeof(), 1, ::g::Fuse::Elements::Element_typeof()),
        new uFunction("SetLayoutMasterMode", NULL, (void*)LayoutMasterAttr__SetLayoutMasterMode_fn, 0, true, uVoid_typeof(), 2, ::g::Fuse::Elements::Element_typeof(), ::g::Fuse::Elements::LayoutMasterMode_typeof()));
}

uClassType* LayoutMasterAttr_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Elements.LayoutMasterAttr", options);
    type->fp_build_ = LayoutMasterAttr_build;
    return type;
}

// public static Fuse.Elements.LayoutMasterMode GetLayoutMasterMode(Fuse.Elements.Element elm) :3368
void LayoutMasterAttr__GetLayoutMasterMode_fn(::g::Fuse::Elements::Element* elm, int* __retval)
{
    *__retval = LayoutMasterAttr::GetLayoutMasterMode(elm);
}

// public static void SetLayoutMasterMode(Fuse.Elements.Element elm, Fuse.Elements.LayoutMasterMode mode) :3362
void LayoutMasterAttr__SetLayoutMasterMode_fn(::g::Fuse::Elements::Element* elm, int* mode)
{
    LayoutMasterAttr::SetLayoutMasterMode(elm, *mode);
}

// public static Fuse.Elements.LayoutMasterMode GetLayoutMasterMode(Fuse.Elements.Element elm) [static] :3368
int LayoutMasterAttr::GetLayoutMasterMode(::g::Fuse::Elements::Element* elm)
{
    uStackFrame __("Fuse.Elements.LayoutMasterAttr", "GetLayoutMasterMode(Fuse.Elements.Element)");
    return uPtr(::g::Fuse::Elements::LayoutMasterBoxSizing::GetLayoutMasterData(elm))->Mode;
}

// public static void SetLayoutMasterMode(Fuse.Elements.Element elm, Fuse.Elements.LayoutMasterMode mode) [static] :3362
void LayoutMasterAttr::SetLayoutMasterMode(::g::Fuse::Elements::Element* elm, int mode)
{
    uStackFrame __("Fuse.Elements.LayoutMasterAttr", "SetLayoutMasterMode(Fuse.Elements.Element,Fuse.Elements.LayoutMasterMode)");
    uPtr(::g::Fuse::Elements::LayoutMasterBoxSizing::GetLayoutMasterData(elm))->Mode = mode;
}
// }

// /Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Elements/1.0.2/$.uno
// ---------------------------------------------------------------------------------------

// internal sealed class LayoutMasterBoxSizing :3189
// {
// static LayoutMasterBoxSizing() :3189
static void LayoutMasterBoxSizing__cctor__fn(uType* __type)
{
    LayoutMasterBoxSizing::Singleton_ = LayoutMasterBoxSizing::New1();
    LayoutMasterBoxSizing::_layoutMasterDataProperty_ = ::g::Fuse::Properties::CreateHandle();
}

static void LayoutMasterBoxSizing_build(uType* type)
{
    ::TYPES[57] = LayoutMasterBoxSizing__LayoutMasterData_typeof();
    type->SetFields(0,
        ::g::Fuse::PropertyHandle_typeof(), (uintptr_t)&::g::Fuse::Elements::LayoutMasterBoxSizing::_layoutMasterDataProperty_, uFieldFlagsStatic,
        type, (uintptr_t)&::g::Fuse::Elements::LayoutMasterBoxSizing::Singleton_, uFieldFlagsStatic);
}

::g::Fuse::Elements::BoxSizing_type* LayoutMasterBoxSizing_typeof()
{
    static uSStrong< ::g::Fuse::Elements::BoxSizing_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Elements::BoxSizing_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(LayoutMasterBoxSizing);
    options.TypeSize = sizeof(::g::Fuse::Elements::BoxSizing_type);
    type = (::g::Fuse::Elements::BoxSizing_type*)uClassType::New("Fuse.Elements.LayoutMasterBoxSizing", options);
    type->fp_build_ = LayoutMasterBoxSizing_build;
    type->fp_ctor_ = (void*)LayoutMasterBoxSizing__New1_fn;
    type->fp_cctor_ = LayoutMasterBoxSizing__cctor__fn;
    type->fp_CalcArrangePaddingSize = (void(*)(::g::Fuse::Elements::BoxSizing*, ::g::Fuse::Elements::Element*, ::g::Fuse::LayoutParams*, ::g::Uno::Float2*))LayoutMasterBoxSizing__CalcArrangePaddingSize_fn;
    type->fp_CalcBoxPlacement = (void(*)(::g::Fuse::Elements::BoxSizing*, ::g::Fuse::Elements::Element*, ::g::Uno::Float2*, ::g::Fuse::LayoutParams*, ::g::Fuse::Elements::BoxPlacement*))LayoutMasterBoxSizing__CalcBoxPlacement_fn;
    type->fp_CalcMarginSize = (void(*)(::g::Fuse::Elements::BoxSizing*, ::g::Fuse::Elements::Element*, ::g::Fuse::LayoutParams*, ::g::Uno::Float2*))LayoutMasterBoxSizing__CalcMarginSize_fn;
    type->fp_IsContentRelativeSize = (void(*)(::g::Fuse::Elements::BoxSizing*, ::g::Fuse::Elements::Element*, int*))LayoutMasterBoxSizing__IsContentRelativeSize_fn;
    type->fp_RequestLayout = (void(*)(::g::Fuse::Elements::BoxSizing*, ::g::Fuse::Elements::Element*))LayoutMasterBoxSizing__RequestLayout_fn;
    return type;
}

// public generated LayoutMasterBoxSizing() :3189
void LayoutMasterBoxSizing__ctor_1_fn(LayoutMasterBoxSizing* __this)
{
    __this->ctor_1();
}

// public override sealed float2 CalcArrangePaddingSize(Fuse.Elements.Element element, Fuse.LayoutParams lp) :3224
void LayoutMasterBoxSizing__CalcArrangePaddingSize_fn(LayoutMasterBoxSizing* __this, ::g::Fuse::Elements::Element* element, ::g::Fuse::LayoutParams* lp, ::g::Uno::Float2* __retval)
{
    uStackFrame __("Fuse.Elements.LayoutMasterBoxSizing", "CalcArrangePaddingSize(Fuse.Elements.Element,Fuse.LayoutParams)");
    ::g::Fuse::LayoutParams lp_ = *lp;
    return *__retval = uPtr(::g::Fuse::Elements::StandardBoxSizing::Singleton())->CalcArrangePaddingSize(element, lp_), void();
}

// public override sealed Fuse.Elements.BoxPlacement CalcBoxPlacement(Fuse.Elements.Element element, float2 position, Fuse.LayoutParams lp) :3193
void LayoutMasterBoxSizing__CalcBoxPlacement_fn(LayoutMasterBoxSizing* __this, ::g::Fuse::Elements::Element* element, ::g::Uno::Float2* position, ::g::Fuse::LayoutParams* lp, ::g::Fuse::Elements::BoxPlacement* __retval)
{
    uStackFrame __("Fuse.Elements.LayoutMasterBoxSizing", "CalcBoxPlacement(Fuse.Elements.Element,float2,Fuse.LayoutParams)");
    ::g::Uno::Float2 position_ = *position;
    ::g::Fuse::LayoutParams lp_ = *lp;
    ::g::Fuse::Elements::Element* master = LayoutMasterBoxSizing::GetLayoutMaster(element);

    if (master == NULL)
    {
        ::g::Fuse::Elements::BoxPlacement bp;
        bp.MarginBox = uPtr(element)->ActualSize();
        bp.Position = element->ActualPosition();
        bp.Size = element->ActualSize();
        return *__retval = bp, void();
    }

    return *__retval = uPtr(::g::Fuse::Elements::StandardBoxSizing::Singleton())->CalcBoxPlacement(element, position_, lp_), void();
}

// public override sealed float2 CalcMarginSize(Fuse.Elements.Element element, Fuse.LayoutParams lp) :3215
void LayoutMasterBoxSizing__CalcMarginSize_fn(LayoutMasterBoxSizing* __this, ::g::Fuse::Elements::Element* element, ::g::Fuse::LayoutParams* lp, ::g::Uno::Float2* __retval)
{
    uStackFrame __("Fuse.Elements.LayoutMasterBoxSizing", "CalcMarginSize(Fuse.Elements.Element,Fuse.LayoutParams)");
    ::g::Fuse::LayoutParams lp_ = *lp;
    ::g::Fuse::Elements::Element* master = LayoutMasterBoxSizing::GetLayoutMaster(element);

    if (master == NULL)
        return *__retval = uPtr(element)->ActualSize(), void();

    return *__retval = uPtr(::g::Fuse::Elements::StandardBoxSizing::Singleton())->CalcMarginSize(element, lp_), void();
}

// internal static Fuse.Elements.Element GetLayoutMaster(Fuse.Elements.Element elm) :3336
void LayoutMasterBoxSizing__GetLayoutMaster_fn(::g::Fuse::Elements::Element* elm, ::g::Fuse::Elements::Element** __retval)
{
    *__retval = LayoutMasterBoxSizing::GetLayoutMaster(elm);
}

// internal static Fuse.Elements.LayoutMasterBoxSizing.LayoutMasterData GetLayoutMasterData(Fuse.Elements.Element elm) :3311
void LayoutMasterBoxSizing__GetLayoutMasterData_fn(::g::Fuse::Elements::Element* elm, LayoutMasterBoxSizing__LayoutMasterData** __retval)
{
    *__retval = LayoutMasterBoxSizing::GetLayoutMasterData(elm);
}

// public override sealed Fuse.LayoutDependent IsContentRelativeSize(Fuse.Elements.Element element) :3323
void LayoutMasterBoxSizing__IsContentRelativeSize_fn(LayoutMasterBoxSizing* __this, ::g::Fuse::Elements::Element* element, int* __retval)
{
    return *__retval = 0, void();
}

// public generated LayoutMasterBoxSizing New() :3189
void LayoutMasterBoxSizing__New1_fn(LayoutMasterBoxSizing** __retval)
{
    *__retval = LayoutMasterBoxSizing::New1();
}

// public override sealed void RequestLayout(Fuse.Elements.Element element) :3209
void LayoutMasterBoxSizing__RequestLayout_fn(LayoutMasterBoxSizing* __this, ::g::Fuse::Elements::Element* element)
{
    uStackFrame __("Fuse.Elements.LayoutMasterBoxSizing", "RequestLayout(Fuse.Elements.Element)");
    LayoutMasterBoxSizing__LayoutMasterData* data = LayoutMasterBoxSizing::GetLayoutMasterData(element);
    uPtr(data)->ScheduleCheckLayout();
}

// internal static void SetLayoutMaster(Fuse.Elements.Element elm, Fuse.Elements.Element master) :3330
void LayoutMasterBoxSizing__SetLayoutMaster_fn(::g::Fuse::Elements::Element* elm, ::g::Fuse::Elements::Element* master)
{
    LayoutMasterBoxSizing::SetLayoutMaster(elm, master);
}

uSStrong< ::g::Fuse::PropertyHandle*> LayoutMasterBoxSizing::_layoutMasterDataProperty_;
uSStrong<LayoutMasterBoxSizing*> LayoutMasterBoxSizing::Singleton_;

// public generated LayoutMasterBoxSizing() [instance] :3189
void LayoutMasterBoxSizing::ctor_1()
{
    ctor_();
}

// internal static Fuse.Elements.Element GetLayoutMaster(Fuse.Elements.Element elm) [static] :3336
::g::Fuse::Elements::Element* LayoutMasterBoxSizing::GetLayoutMaster(::g::Fuse::Elements::Element* elm)
{
    uStackFrame __("Fuse.Elements.LayoutMasterBoxSizing", "GetLayoutMaster(Fuse.Elements.Element)");
    LayoutMasterBoxSizing_typeof()->Init();
    return uPtr(LayoutMasterBoxSizing::GetLayoutMasterData(elm))->Master();
}

// internal static Fuse.Elements.LayoutMasterBoxSizing.LayoutMasterData GetLayoutMasterData(Fuse.Elements.Element elm) [static] :3311
LayoutMasterBoxSizing__LayoutMasterData* LayoutMasterBoxSizing::GetLayoutMasterData(::g::Fuse::Elements::Element* elm)
{
    uStackFrame __("Fuse.Elements.LayoutMasterBoxSizing", "GetLayoutMasterData(Fuse.Elements.Element)");
    LayoutMasterBoxSizing_typeof()->Init();
    uObject* v;

    if (uPtr(uPtr(elm)->Properties())->TryGet(LayoutMasterBoxSizing::_layoutMasterDataProperty(), &v))
        return uCast<LayoutMasterBoxSizing__LayoutMasterData*>(v, ::TYPES[57/*Fuse.Elements.LayoutMasterBoxSizing.LayoutMasterData*/]);

    LayoutMasterBoxSizing__LayoutMasterData* sd = LayoutMasterBoxSizing__LayoutMasterData::New1();
    sd->Element = elm;
    uPtr(uPtr(elm)->Properties())->Set(LayoutMasterBoxSizing::_layoutMasterDataProperty(), sd);
    return sd;
}

// public generated LayoutMasterBoxSizing New() [static] :3189
LayoutMasterBoxSizing* LayoutMasterBoxSizing::New1()
{
    LayoutMasterBoxSizing* obj1 = (LayoutMasterBoxSizing*)uNew(LayoutMasterBoxSizing_typeof());
    obj1->ctor_1();
    return obj1;
}

// internal static void SetLayoutMaster(Fuse.Elements.Element elm, Fuse.Elements.Element master) [static] :3330
void LayoutMasterBoxSizing::SetLayoutMaster(::g::Fuse::Elements::Element* elm, ::g::Fuse::Elements::Element* master)
{
    uStackFrame __("Fuse.Elements.LayoutMasterBoxSizing", "SetLayoutMaster(Fuse.Elements.Element,Fuse.Elements.Element)");
    LayoutMasterBoxSizing_typeof()->Init();
    uPtr(LayoutMasterBoxSizing::GetLayoutMasterData(elm))->Master(master);
}
// }

// /Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Elements/1.0.2/$.uno
// ---------------------------------------------------------------------------------------

// internal sealed class LayoutMasterBoxSizing.LayoutMasterData :3231
// {
static void LayoutMasterBoxSizing__LayoutMasterData_build(uType* type)
{
    ::TYPES[52] = ::g::Fuse::Elements::Element_typeof();
    ::TYPES[15] = ::g::Uno::Action_typeof();
    ::TYPES[0] = ::g::Fuse::PlacedHandler_typeof();
    type->SetFields(0,
        ::TYPES[52/*Fuse.Elements.Element*/], offsetof(::g::Fuse::Elements::LayoutMasterBoxSizing__LayoutMasterData, _master), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Elements::LayoutMasterBoxSizing__LayoutMasterData, _pendingCheckLayout), 0,
        ::TYPES[52/*Fuse.Elements.Element*/], offsetof(::g::Fuse::Elements::LayoutMasterBoxSizing__LayoutMasterData, Element), uFieldFlagsWeak,
        ::g::Fuse::Elements::LayoutMasterMode_typeof(), offsetof(::g::Fuse::Elements::LayoutMasterBoxSizing__LayoutMasterData, Mode), 0);
}

uType* LayoutMasterBoxSizing__LayoutMasterData_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 4;
    options.ObjectSize = sizeof(LayoutMasterBoxSizing__LayoutMasterData);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Elements.LayoutMasterBoxSizing.LayoutMasterData", options);
    type->fp_build_ = LayoutMasterBoxSizing__LayoutMasterData_build;
    type->fp_ctor_ = (void*)LayoutMasterBoxSizing__LayoutMasterData__New1_fn;
    return type;
}

// public generated LayoutMasterData() :3231
void LayoutMasterBoxSizing__LayoutMasterData__ctor__fn(LayoutMasterBoxSizing__LayoutMasterData* __this)
{
    __this->ctor_();
}

// internal void CheckLayout() :3271
void LayoutMasterBoxSizing__LayoutMasterData__CheckLayout_fn(LayoutMasterBoxSizing__LayoutMasterData* __this)
{
    __this->CheckLayout();
}

// public Fuse.Elements.Element get_Master() :3241
void LayoutMasterBoxSizing__LayoutMasterData__get_Master_fn(LayoutMasterBoxSizing__LayoutMasterData* __this, ::g::Fuse::Elements::Element** __retval)
{
    *__retval = __this->Master();
}

// public void set_Master(Fuse.Elements.Element value) :3242
void LayoutMasterBoxSizing__LayoutMasterData__set_Master_fn(LayoutMasterBoxSizing__LayoutMasterData* __this, ::g::Fuse::Elements::Element* value)
{
    __this->Master(value);
}

// public generated LayoutMasterData New() :3231
void LayoutMasterBoxSizing__LayoutMasterData__New1_fn(LayoutMasterBoxSizing__LayoutMasterData** __retval)
{
    *__retval = LayoutMasterBoxSizing__LayoutMasterData::New1();
}

// private void OnPlaced(object s, object args) :3305
void LayoutMasterBoxSizing__LayoutMasterData__OnPlaced_fn(LayoutMasterBoxSizing__LayoutMasterData* __this, uObject* s, uObject* args)
{
    __this->OnPlaced(s, args);
}

// internal void ScheduleCheckLayout() :3261
void LayoutMasterBoxSizing__LayoutMasterData__ScheduleCheckLayout_fn(LayoutMasterBoxSizing__LayoutMasterData* __this)
{
    __this->ScheduleCheckLayout();
}

// public generated LayoutMasterData() [instance] :3231
void LayoutMasterBoxSizing__LayoutMasterData::ctor_()
{
}

// internal void CheckLayout() [instance] :3271
void LayoutMasterBoxSizing__LayoutMasterData::CheckLayout()
{
    uStackFrame __("Fuse.Elements.LayoutMasterBoxSizing.LayoutMasterData", "CheckLayout()");
    ::g::Uno::Float4 ind1;
    _pendingCheckLayout = false;

    if ((((Element == NULL) || (_master == NULL)) || !uPtr(_master)->IsRootingCompleted()) || !uPtr(Element)->IsRootingCompleted())
        return;

    ::g::Uno::Float2 pos = ::g::Uno::Float2__New1(0.0f);
    ::g::Uno::Float2 size = ::g::Uno::Float2__New1(0.0f);

    if (Mode == 1)
    {
        pos = uPtr(_master)->ActualPosition();
        size = uPtr(_master)->ActualSize();
    }
    else if (Mode == 2)
    {
        ::g::Fuse::Elements::Element* pe = uAs< ::g::Fuse::Elements::Element*>(uPtr(_master)->Parent(), ::TYPES[52/*Fuse.Elements.Element*/]);

        if (pe != NULL)
        {
            pos = uPtr(pe)->ActualPosition();
            size = pe->ActualSize();
        }
    }
    else
    {
        ::g::Uno::Float4x4 m = uPtr(uPtr(_master)->Parent())->GetTransformTo(uPtr(Element)->Parent());
        pos = (ind1 = ::g::Uno::Vector::Transform1(uPtr(_master)->ActualPosition(), m), ::g::Uno::Float2__New2(ind1.X, ind1.Y));
        ::g::Uno::Rect r = ::g::Uno::Rect__New2(::g::Uno::Float2__New1(0.0f), uPtr(_master)->ActualSize());
        size = ::g::Uno::Rect__Transform(r, m).Size();
    }

    uPtr(Element)->ArrangeMarginBox(pos, ::g::Fuse::LayoutParams__Create(size));
}

// public Fuse.Elements.Element get_Master() [instance] :3241
::g::Fuse::Elements::Element* LayoutMasterBoxSizing__LayoutMasterData::Master()
{
    return _master;
}

// public void set_Master(Fuse.Elements.Element value) [instance] :3242
void LayoutMasterBoxSizing__LayoutMasterData::Master(::g::Fuse::Elements::Element* value)
{
    uStackFrame __("Fuse.Elements.LayoutMasterBoxSizing.LayoutMasterData", "set_Master(Fuse.Elements.Element)");

    if (_master == value)
        return;

    if (_master != NULL)
        uPtr(_master)->remove_Placed(uDelegate::New(::TYPES[0/*Fuse.PlacedHandler*/], (void*)LayoutMasterBoxSizing__LayoutMasterData__OnPlaced_fn, this));

    _master = value;

    if (_master != NULL)
        uPtr(_master)->add_Placed(uDelegate::New(::TYPES[0/*Fuse.PlacedHandler*/], (void*)LayoutMasterBoxSizing__LayoutMasterData__OnPlaced_fn, this));

    if (uPtr(Element)->IsRootingCompleted())
        ScheduleCheckLayout();
}

// private void OnPlaced(object s, object args) [instance] :3305
void LayoutMasterBoxSizing__LayoutMasterData::OnPlaced(uObject* s, uObject* args)
{
    uStackFrame __("Fuse.Elements.LayoutMasterBoxSizing.LayoutMasterData", "OnPlaced(object,object)");
    ::g::Fuse::UpdateManager::AddDeferredAction(uDelegate::New(::TYPES[15/*Uno.Action*/], (void*)LayoutMasterBoxSizing__LayoutMasterData__CheckLayout_fn, this), -1, 0);
}

// internal void ScheduleCheckLayout() [instance] :3261
void LayoutMasterBoxSizing__LayoutMasterData::ScheduleCheckLayout()
{
    uStackFrame __("Fuse.Elements.LayoutMasterBoxSizing.LayoutMasterData", "ScheduleCheckLayout()");

    if (!_pendingCheckLayout)
    {
        _pendingCheckLayout = true;
        ::g::Fuse::UpdateManager::AddDeferredAction(uDelegate::New(::TYPES[15/*Uno.Action*/], (void*)LayoutMasterBoxSizing__LayoutMasterData__CheckLayout_fn, this), -1, 0);
    }
}

// public generated LayoutMasterData New() [static] :3231
LayoutMasterBoxSizing__LayoutMasterData* LayoutMasterBoxSizing__LayoutMasterData::New1()
{
    LayoutMasterBoxSizing__LayoutMasterData* obj2 = (LayoutMasterBoxSizing__LayoutMasterData*)uNew(LayoutMasterBoxSizing__LayoutMasterData_typeof());
    obj2->ctor_();
    return obj2;
}
// }

// /Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Elements/1.0.2/$.uno
// ---------------------------------------------------------------------------------------

// public enum LayoutMasterMode :3179
uEnumType* LayoutMasterMode_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Elements.LayoutMasterMode", ::g::Uno::Int_typeof(), 3);
    type->SetLiterals(
        "ParentTransform", 0LL,
        "LocalLayout", 1LL,
        "ParentLayout", 2LL);
    return type;
}

// /Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Elements/1.0.2/$.uno
// ---------------------------------------------------------------------------------------

// private sealed class LayoutFunction.LayoutSubscription :3659
// {
static void LayoutFunction__LayoutSubscription_build(uType* type)
{
    ::TYPES[0] = ::g::Fuse::PlacedHandler_typeof();
    ::TYPES[52] = ::g::Fuse::Elements::Element_typeof();
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Fuse::Reactive::UnaryOperator__Subscription_type, interface0),
        ::g::Fuse::Reactive::IListener_typeof(), offsetof(::g::Fuse::Reactive::UnaryOperator__Subscription_type, interface1));
    type->SetFields(5,
        ::TYPES[52/*Fuse.Elements.Element*/], offsetof(::g::Fuse::Elements::LayoutFunction__LayoutSubscription, _element), 0,
        ::g::Fuse::Elements::LayoutFunction_typeof(), offsetof(::g::Fuse::Elements::LayoutFunction__LayoutSubscription, _lf), 0);
}

::g::Fuse::Reactive::UnaryOperator__Subscription_type* LayoutFunction__LayoutSubscription_typeof()
{
    static uSStrong< ::g::Fuse::Reactive::UnaryOperator__Subscription_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Reactive::UnaryOperator__Subscription_typeof();
    options.FieldCount = 7;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(LayoutFunction__LayoutSubscription);
    options.TypeSize = sizeof(::g::Fuse::Reactive::UnaryOperator__Subscription_type);
    type = (::g::Fuse::Reactive::UnaryOperator__Subscription_type*)uClassType::New("Fuse.Elements.LayoutFunction.LayoutSubscription", options);
    type->fp_build_ = LayoutFunction__LayoutSubscription_build;
    type->fp_Dispose = (void(*)(::g::Fuse::Reactive::InnerListener*))LayoutFunction__LayoutSubscription__Dispose_fn;
    type->fp_OnNewOperand = (void(*)(::g::Fuse::Reactive::UnaryOperator__Subscription*, uObject*))LayoutFunction__LayoutSubscription__OnNewOperand_fn;
    type->interface1.fp_OnNewData = (void(*)(uObject*, uObject*, uObject*))::g::Fuse::Reactive::InnerListener__FuseReactiveIListenerOnNewData_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))LayoutFunction__LayoutSubscription__Dispose_fn;
    return type;
}

// public LayoutSubscription(Fuse.Elements.LayoutFunction lf, Fuse.Reactive.IContext context, Fuse.Reactive.IListener listener) :3663
void LayoutFunction__LayoutSubscription__ctor_2_fn(LayoutFunction__LayoutSubscription* __this, ::g::Fuse::Elements::LayoutFunction* lf, uObject* context, uObject* listener)
{
    __this->ctor_2(lf, context, listener);
}

// public override sealed void Dispose() :3691
void LayoutFunction__LayoutSubscription__Dispose_fn(LayoutFunction__LayoutSubscription* __this)
{
    uStackFrame __("Fuse.Elements.LayoutFunction.LayoutSubscription", "Dispose()");
    ::g::Fuse::Reactive::UnaryOperator__Subscription__Dispose_fn(__this);
    __this->_lf = NULL;

    if (__this->_element != NULL)
        uPtr(__this->_element)->remove_Placed(uDelegate::New(::TYPES[0/*Fuse.PlacedHandler*/], (void*)LayoutFunction__LayoutSubscription__OnPlaced_fn, __this));
}

// public LayoutSubscription New(Fuse.Elements.LayoutFunction lf, Fuse.Reactive.IContext context, Fuse.Reactive.IListener listener) :3663
void LayoutFunction__LayoutSubscription__New2_fn(::g::Fuse::Elements::LayoutFunction* lf, uObject* context, uObject* listener, LayoutFunction__LayoutSubscription** __retval)
{
    *__retval = LayoutFunction__LayoutSubscription::New2(lf, context, listener);
}

// protected override sealed void OnNewOperand(object elmObj) :3670
void LayoutFunction__LayoutSubscription__OnNewOperand_fn(LayoutFunction__LayoutSubscription* __this, uObject* elmObj)
{
    uStackFrame __("Fuse.Elements.LayoutFunction.LayoutSubscription", "OnNewOperand(object)");

    if (__this->_element != NULL)
    {
        uPtr(__this->_element)->remove_Placed(uDelegate::New(::TYPES[0/*Fuse.PlacedHandler*/], (void*)LayoutFunction__LayoutSubscription__OnPlaced_fn, __this));
        __this->_element = NULL;
    }

    __this->_element = uAs< ::g::Fuse::Elements::Element*>(elmObj, ::TYPES[52/*Fuse.Elements.Element*/]);

    if (__this->_element != NULL)
        uPtr(__this->_element)->add_Placed(uDelegate::New(::TYPES[0/*Fuse.PlacedHandler*/], (void*)LayoutFunction__LayoutSubscription__OnPlaced_fn, __this));
}

// private void OnPlaced(object sender, Fuse.PlacedArgs args) :3686
void LayoutFunction__LayoutSubscription__OnPlaced_fn(LayoutFunction__LayoutSubscription* __this, uObject* sender, ::g::Fuse::PlacedArgs* args)
{
    __this->OnPlaced(sender, args);
}

// public LayoutSubscription(Fuse.Elements.LayoutFunction lf, Fuse.Reactive.IContext context, Fuse.Reactive.IListener listener) [instance] :3663
void LayoutFunction__LayoutSubscription::ctor_2(::g::Fuse::Elements::LayoutFunction* lf, uObject* context, uObject* listener)
{
    uStackFrame __("Fuse.Elements.LayoutFunction.LayoutSubscription", ".ctor(Fuse.Elements.LayoutFunction,Fuse.Reactive.IContext,Fuse.Reactive.IListener)");
    ctor_1(lf, listener);
    _lf = lf;
    Init(context);
}

// private void OnPlaced(object sender, Fuse.PlacedArgs args) [instance] :3686
void LayoutFunction__LayoutSubscription::OnPlaced(uObject* sender, ::g::Fuse::PlacedArgs* args)
{
    uStackFrame __("Fuse.Elements.LayoutFunction.LayoutSubscription", "OnPlaced(object,Fuse.PlacedArgs)");
    PushNewData(uPtr(_lf)->GetValue(args));
}

// public LayoutSubscription New(Fuse.Elements.LayoutFunction lf, Fuse.Reactive.IContext context, Fuse.Reactive.IListener listener) [static] :3663
LayoutFunction__LayoutSubscription* LayoutFunction__LayoutSubscription::New2(::g::Fuse::Elements::LayoutFunction* lf, uObject* context, uObject* listener)
{
    LayoutFunction__LayoutSubscription* obj1 = (LayoutFunction__LayoutSubscription*)uNew(LayoutFunction__LayoutSubscription_typeof());
    obj1->ctor_2(lf, context, listener);
    return obj1;
}
// }

// /Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Elements/1.0.2/$.uno
// ---------------------------------------------------------------------------------------

// internal sealed class LimitBoxSizing :3383
// {
// static LimitBoxSizing() :3383
static void LimitBoxSizing__cctor__fn(uType* __type)
{
    LimitBoxSizing::Singleton_ = LimitBoxSizing::New1();
}

static void LimitBoxSizing_build(uType* type)
{
    type->SetFields(0,
        type, (uintptr_t)&::g::Fuse::Elements::LimitBoxSizing::Singleton_, uFieldFlagsStatic);
}

::g::Fuse::Elements::BoxSizing_type* LimitBoxSizing_typeof()
{
    static uSStrong< ::g::Fuse::Elements::BoxSizing_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Elements::BoxSizing_typeof();
    options.FieldCount = 1;
    options.ObjectSize = sizeof(LimitBoxSizing);
    options.TypeSize = sizeof(::g::Fuse::Elements::BoxSizing_type);
    type = (::g::Fuse::Elements::BoxSizing_type*)uClassType::New("Fuse.Elements.LimitBoxSizing", options);
    type->fp_build_ = LimitBoxSizing_build;
    type->fp_ctor_ = (void*)LimitBoxSizing__New1_fn;
    type->fp_cctor_ = LimitBoxSizing__cctor__fn;
    type->fp_CalcArrangePaddingSize = (void(*)(::g::Fuse::Elements::BoxSizing*, ::g::Fuse::Elements::Element*, ::g::Fuse::LayoutParams*, ::g::Uno::Float2*))LimitBoxSizing__CalcArrangePaddingSize_fn;
    type->fp_CalcBoxPlacement = (void(*)(::g::Fuse::Elements::BoxSizing*, ::g::Fuse::Elements::Element*, ::g::Uno::Float2*, ::g::Fuse::LayoutParams*, ::g::Fuse::Elements::BoxPlacement*))LimitBoxSizing__CalcBoxPlacement_fn;
    type->fp_CalcMarginSize = (void(*)(::g::Fuse::Elements::BoxSizing*, ::g::Fuse::Elements::Element*, ::g::Fuse::LayoutParams*, ::g::Uno::Float2*))LimitBoxSizing__CalcMarginSize_fn;
    return type;
}

// public generated LimitBoxSizing() :3383
void LimitBoxSizing__ctor_1_fn(LimitBoxSizing* __this)
{
    __this->ctor_1();
}

// public override sealed float2 CalcArrangePaddingSize(Fuse.Elements.Element element, Fuse.LayoutParams lp) :3402
void LimitBoxSizing__CalcArrangePaddingSize_fn(LimitBoxSizing* __this, ::g::Fuse::Elements::Element* element, ::g::Fuse::LayoutParams* lp, ::g::Uno::Float2* __retval)
{
    uStackFrame __("Fuse.Elements.LimitBoxSizing", "CalcArrangePaddingSize(Fuse.Elements.Element,Fuse.LayoutParams)");
    ::g::Fuse::LayoutParams lp_ = *lp;
    return *__retval = uPtr(::g::Fuse::Elements::StandardBoxSizing::Singleton())->CalcArrangePaddingSize(element, lp_), void();
}

// public override sealed Fuse.Elements.BoxPlacement CalcBoxPlacement(Fuse.Elements.Element element, float2 position, Fuse.LayoutParams lp) :3387
void LimitBoxSizing__CalcBoxPlacement_fn(LimitBoxSizing* __this, ::g::Fuse::Elements::Element* element, ::g::Uno::Float2* position, ::g::Fuse::LayoutParams* lp, ::g::Fuse::Elements::BoxPlacement* __retval)
{
    uStackFrame __("Fuse.Elements.LimitBoxSizing", "CalcBoxPlacement(Fuse.Elements.Element,float2,Fuse.LayoutParams)");
    ::g::Uno::Float2 position_ = *position;
    ::g::Fuse::LayoutParams lp_ = *lp;
    return *__retval = uPtr(::g::Fuse::Elements::StandardBoxSizing::Singleton())->CalcBoxPlacement(element, position_, lp_), void();
}

// public override sealed float2 CalcMarginSize(Fuse.Elements.Element element, Fuse.LayoutParams lp) :3392
void LimitBoxSizing__CalcMarginSize_fn(LimitBoxSizing* __this, ::g::Fuse::Elements::Element* element, ::g::Fuse::LayoutParams* lp, ::g::Uno::Float2* __retval)
{
    uStackFrame __("Fuse.Elements.LimitBoxSizing", "CalcMarginSize(Fuse.Elements.Element,Fuse.LayoutParams)");
    ::g::Fuse::LayoutParams lp_ = *lp;
    ::g::Fuse::LayoutParams nlp = lp_.CloneAndDerive();
    nlp.RetainXY(!uPtr(element)->HasBit(8388608), !uPtr(element)->HasBit(16777216));
    ::g::Uno::Float2 std = uPtr(::g::Fuse::Elements::StandardBoxSizing::Singleton())->CalcMarginSize(element, nlp);
    ::g::Uno::Float2 c = __this->Limit(element, std);
    return *__retval = c, void();
}

// private float2 Limit(Fuse.Elements.Element element, float2 std) :3407
void LimitBoxSizing__Limit_fn(LimitBoxSizing* __this, ::g::Fuse::Elements::Element* element, ::g::Uno::Float2* std, ::g::Uno::Float2* __retval)
{
    *__retval = __this->Limit(element, *std);
}

// public generated LimitBoxSizing New() :3383
void LimitBoxSizing__New1_fn(LimitBoxSizing** __retval)
{
    *__retval = LimitBoxSizing::New1();
}

uSStrong<LimitBoxSizing*> LimitBoxSizing::Singleton_;

// public generated LimitBoxSizing() [instance] :3383
void LimitBoxSizing::ctor_1()
{
    ctor_();
}

// private float2 Limit(Fuse.Elements.Element element, float2 std) [instance] :3407
::g::Uno::Float2 LimitBoxSizing::Limit(::g::Fuse::Elements::Element* element, ::g::Uno::Float2 std)
{
    uStackFrame __("Fuse.Elements.LimitBoxSizing", "Limit(Fuse.Elements.Element,float2)");

    if (uPtr(element)->HasBit(16777216))
    {
        ::g::Uno::UX::Size height = uPtr(element)->LimitHeight();
        bool known;
        float size = UnitSize(element, height, std.Y, true, &known);
        std.Y = ::g::Uno::Math::Min1(std.Y, size);
    }

    if (uPtr(element)->HasBit(8388608))
    {
        ::g::Uno::UX::Size width = uPtr(element)->LimitWidth();
        bool known1;
        float size1 = UnitSize(element, width, std.X, true, &known1);
        std.X = ::g::Uno::Math::Min1(std.X, size1);
    }

    if (uPtr(element)->SnapToPixels())
        std = uPtr(element)->InternSnap(std);

    return std;
}

// public generated LimitBoxSizing New() [static] :3383
LimitBoxSizing* LimitBoxSizing::New1()
{
    LimitBoxSizing* obj1 = (LimitBoxSizing*)uNew(LimitBoxSizing_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// /Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Elements/1.0.2/$.uno
// ---------------------------------------------------------------------------------------

// internal sealed class NoImplicitMaxBoxSizing :520
// {
// static NoImplicitMaxBoxSizing() :520
static void NoImplicitMaxBoxSizing__cctor_1_fn(uType* __type)
{
    NoImplicitMaxBoxSizing::Singleton1_ = NoImplicitMaxBoxSizing::New2();
}

static void NoImplicitMaxBoxSizing_build(uType* type)
{
    type->SetFields(2,
        type, (uintptr_t)&::g::Fuse::Elements::NoImplicitMaxBoxSizing::Singleton1_, uFieldFlagsStatic);
}

::g::Fuse::Elements::BoxSizing_type* NoImplicitMaxBoxSizing_typeof()
{
    static uSStrong< ::g::Fuse::Elements::BoxSizing_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Elements::StandardBoxSizing_typeof();
    options.FieldCount = 3;
    options.ObjectSize = sizeof(NoImplicitMaxBoxSizing);
    options.TypeSize = sizeof(::g::Fuse::Elements::BoxSizing_type);
    type = (::g::Fuse::Elements::BoxSizing_type*)uClassType::New("Fuse.Elements.NoImplicitMaxBoxSizing", options);
    type->fp_build_ = NoImplicitMaxBoxSizing_build;
    type->fp_ctor_ = (void*)NoImplicitMaxBoxSizing__New2_fn;
    type->fp_cctor_ = NoImplicitMaxBoxSizing__cctor_1_fn;
    return type;
}

// public NoImplicitMaxBoxSizing() :524
void NoImplicitMaxBoxSizing__ctor_2_fn(NoImplicitMaxBoxSizing* __this)
{
    __this->ctor_2();
}

// public NoImplicitMaxBoxSizing New() :524
void NoImplicitMaxBoxSizing__New2_fn(NoImplicitMaxBoxSizing** __retval)
{
    *__retval = NoImplicitMaxBoxSizing::New2();
}

uSStrong<NoImplicitMaxBoxSizing*> NoImplicitMaxBoxSizing::Singleton1_;

// public NoImplicitMaxBoxSizing() [instance] :524
void NoImplicitMaxBoxSizing::ctor_2()
{
    ctor_1();
    ImplicitMax = false;
}

// public NoImplicitMaxBoxSizing New() [static] :524
NoImplicitMaxBoxSizing* NoImplicitMaxBoxSizing::New2()
{
    NoImplicitMaxBoxSizing* obj1 = (NoImplicitMaxBoxSizing*)uNew(NoImplicitMaxBoxSizing_typeof());
    obj1->ctor_2();
    return obj1;
}
// }

// /Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Elements/1.0.2/$.uno
// ---------------------------------------------------------------------------------------

// private class TranslationModes.OffsetMode :3488
// {
static void TranslationModes__OffsetMode_build(uType* type)
{
    ::TYPES[52] = ::g::Fuse::Elements::Element_typeof();
    ::TYPES[58] = ::g::Fuse::ITransformRelative_typeof();
    ::TYPES[41] = ::g::Uno::EventHandler_typeof();
    ::TYPES[0] = ::g::Fuse::PlacedHandler_typeof();
    ::TYPES[59] = TranslationModes__OffsetMode__Subscriptions_typeof();
    type->SetInterfaces(
        ::g::Fuse::ITranslationMode_typeof(), offsetof(TranslationModes__OffsetMode_type, interface0),
        ::g::Fuse::ITransformMode_typeof(), offsetof(TranslationModes__OffsetMode_type, interface1));
}

TranslationModes__OffsetMode_type* TranslationModes__OffsetMode_typeof()
{
    static uSStrong<TranslationModes__OffsetMode_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(TranslationModes__OffsetMode);
    options.TypeSize = sizeof(TranslationModes__OffsetMode_type);
    type = (TranslationModes__OffsetMode_type*)uClassType::New("Fuse.Elements.TranslationModes.OffsetMode", options);
    type->fp_build_ = TranslationModes__OffsetMode_build;
    type->fp_GetDstOffset = TranslationModes__OffsetMode__GetDstOffset_fn;
    type->fp_GetSrcOffset = TranslationModes__OffsetMode__GetSrcOffset_fn;
    type->interface0.fp_GetAbsVector = (void(*)(uObject*, ::g::Fuse::Translation*, ::g::Uno::Float3*))TranslationModes__OffsetMode__GetAbsVector_fn;
    type->interface1.fp_Subscribe = (void(*)(uObject*, uObject*, uObject**))TranslationModes__OffsetMode__Subscribe_fn;
    type->interface1.fp_Unsubscribe = (void(*)(uObject*, uObject*, uObject*))TranslationModes__OffsetMode__Unsubscribe_fn;
    return type;
}

// public generated OffsetMode() :3488
void TranslationModes__OffsetMode__ctor__fn(TranslationModes__OffsetMode* __this)
{
    __this->ctor_();
}

// public float3 GetAbsVector(Fuse.Translation t) :3490
void TranslationModes__OffsetMode__GetAbsVector_fn(TranslationModes__OffsetMode* __this, ::g::Fuse::Translation* t, ::g::Uno::Float3* __retval)
{
    *__retval = __this->GetAbsVector(t);
}

// protected virtual float3 GetDstOffset(Fuse.Elements.Element e) :3540
void TranslationModes__OffsetMode__GetDstOffset_fn(TranslationModes__OffsetMode* __this, ::g::Fuse::Elements::Element* e, ::g::Uno::Float3* __retval)
{
    return *__retval = ::g::Uno::Float3__New1(0.0f), void();
}

// protected virtual float3 GetSrcOffset(Fuse.Elements.Element e) :3541
void TranslationModes__OffsetMode__GetSrcOffset_fn(TranslationModes__OffsetMode* __this, ::g::Fuse::Elements::Element* e, ::g::Uno::Float3* __retval)
{
    return *__retval = ::g::Uno::Float3__New1(0.0f), void();
}

// public object Subscribe(Fuse.ITransformRelative transform) :3519
void TranslationModes__OffsetMode__Subscribe_fn(TranslationModes__OffsetMode* __this, uObject* transform, uObject** __retval)
{
    *__retval = __this->Subscribe(transform);
}

// public void Unsubscribe(Fuse.ITransformRelative transform, object sub) :3531
void TranslationModes__OffsetMode__Unsubscribe_fn(TranslationModes__OffsetMode* __this, uObject* transform, uObject* sub)
{
    __this->Unsubscribe(transform, sub);
}

// public generated OffsetMode() [instance] :3488
void TranslationModes__OffsetMode::ctor_()
{
}

// public float3 GetAbsVector(Fuse.Translation t) [instance] :3490
::g::Uno::Float3 TranslationModes__OffsetMode::GetAbsVector(::g::Fuse::Translation* t)
{
    uStackFrame __("Fuse.Elements.TranslationModes.OffsetMode", "GetAbsVector(Fuse.Translation)");
    ::g::Fuse::Visual* n = uPtr(t)->RelativeNode();
    ::g::Fuse::Elements::Element* dstElement = uAs< ::g::Fuse::Elements::Element*>(n, ::TYPES[52/*Fuse.Elements.Element*/]);
    ::g::Uno::Float3 dst = ::g::Uno::Float3__New1(0.0f);

    if (dstElement != NULL)
        dst = GetDstOffset(dstElement);

    if ((t->Parent() == NULL) || (uPtr(t->Parent())->Parent() == NULL))
        return ::g::Uno::Float3__New1(0.0f);

    ::g::Uno::Float4x4 m = ::g::Uno::Matrix::Mul8(uPtr(t->RelativeNode())->WorldTransform(), uPtr(uPtr(t->Parent())->Parent())->WorldTransformInverse());
    ::g::Uno::Float4 ind2 = ::g::Uno::Vector::Transform4(dst, m);
    ::g::Uno::Float3 localP = ::g::Uno::Float3__New2(ind2.X, ind2.Y, ind2.Z);
    ::g::Uno::Float3 localOff = ::g::Uno::Float3__New1(0.0f);
    ::g::Fuse::Elements::Element* elm = uAs< ::g::Fuse::Elements::Element*>(t->Parent(), ::TYPES[52/*Fuse.Elements.Element*/]);

    if (elm != NULL)
        localOff = ::g::Uno::Float3__op_UnaryNegation(::g::Uno::Float3__op_Addition2(::g::Uno::Float3__New4(uPtr(elm)->ActualPosition(), 0.0f), GetSrcOffset(elm)));

    ::g::Uno::Float3 worldChange = ::g::Uno::Float3__op_Addition2(localP, localOff);
    return ::g::Uno::Float3__op_Multiply2(worldChange, t->Vector());
}

// public object Subscribe(Fuse.ITransformRelative transform) [instance] :3519
uObject* TranslationModes__OffsetMode::Subscribe(uObject* transform)
{
    uStackFrame __("Fuse.Elements.TranslationModes.OffsetMode", "Subscribe(Fuse.ITransformRelative)");
    TranslationModes__OffsetMode__Subscriptions* collection1;
    collection1 = TranslationModes__OffsetMode__Subscriptions::New1();
    uPtr(collection1)->Relative = ::g::Fuse::ITransformRelative::RelativeNode(uInterface(uPtr(transform), ::TYPES[58/*Fuse.ITransformRelative*/]));
    uPtr(collection1)->TargetParent = uPtr(::g::Fuse::ITransformRelative::Target(uInterface(uPtr(transform), ::TYPES[58/*Fuse.ITransformRelative*/])))->Parent();
    uPtr(collection1)->Target = uAs< ::g::Fuse::Elements::Element*>(::g::Fuse::ITransformRelative::Target(uInterface(uPtr(transform), ::TYPES[58/*Fuse.ITransformRelative*/])), ::TYPES[52/*Fuse.Elements.Element*/]);
    TranslationModes__OffsetMode__Subscriptions* s = collection1;
    uPtr(uPtr(s)->Relative)->add_WorldTransformInvalidated(uDelegate::New(::TYPES[41/*Uno.EventHandler*/], uInterface(transform, ::TYPES[58/*Fuse.ITransformRelative*/]), offsetof(::g::Fuse::ITransformRelative, fp_OnTransformChanged)));
    uPtr(s->TargetParent)->add_WorldTransformInvalidated(uDelegate::New(::TYPES[41/*Uno.EventHandler*/], uInterface(transform, ::TYPES[58/*Fuse.ITransformRelative*/]), offsetof(::g::Fuse::ITransformRelative, fp_OnTransformChanged)));

    if (s->Target != NULL)
        uPtr(uPtr(s)->Target)->add_Placed(uDelegate::New(::TYPES[0/*Fuse.PlacedHandler*/], uInterface(uPtr(transform), ::TYPES[58/*Fuse.ITransformRelative*/]), offsetof(::g::Fuse::ITransformRelative, fp_OnTransformChanged)));

    return s;
}

// public void Unsubscribe(Fuse.ITransformRelative transform, object sub) [instance] :3531
void TranslationModes__OffsetMode::Unsubscribe(uObject* transform, uObject* sub)
{
    uStackFrame __("Fuse.Elements.TranslationModes.OffsetMode", "Unsubscribe(Fuse.ITransformRelative,object)");
    TranslationModes__OffsetMode__Subscriptions* s = uAs<TranslationModes__OffsetMode__Subscriptions*>(sub, ::TYPES[59/*Fuse.Elements.TranslationModes.OffsetMode.Subscriptions*/]);
    uPtr(uPtr(s)->Relative)->remove_WorldTransformInvalidated(uDelegate::New(::TYPES[41/*Uno.EventHandler*/], uInterface(uPtr(transform), ::TYPES[58/*Fuse.ITransformRelative*/]), offsetof(::g::Fuse::ITransformRelative, fp_OnTransformChanged)));
    uPtr(s->TargetParent)->remove_WorldTransformInvalidated(uDelegate::New(::TYPES[41/*Uno.EventHandler*/], uInterface(transform, ::TYPES[58/*Fuse.ITransformRelative*/]), offsetof(::g::Fuse::ITransformRelative, fp_OnTransformChanged)));

    if (s->Target != NULL)
        uPtr(uPtr(s)->Target)->remove_Placed(uDelegate::New(::TYPES[0/*Fuse.PlacedHandler*/], uInterface(uPtr(transform), ::TYPES[58/*Fuse.ITransformRelative*/]), offsetof(::g::Fuse::ITransformRelative, fp_OnTransformChanged)));
}
// }

// /Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Elements/1.0.2/$.uno
// ---------------------------------------------------------------------------------------

// internal enum OptionalSimpleAlignment :3018
uEnumType* OptionalSimpleAlignment_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Elements.OptionalSimpleAlignment", ::g::Uno::Int_typeof(), 4);
    type->SetLiterals(
        "None", 0LL,
        "Begin", 1LL,
        "Center", 2LL,
        "End", 3LL);
    return type;
}

// /Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Controls/1.0.2/$.uno
// ---------------------------------------------------------------------------------------

// public enum PerspectiveRelativeToMode :547
uEnumType* PerspectiveRelativeToMode_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Elements.PerspectiveRelativeToMode", ::g::Uno::Int_typeof(), 3);
    type->SetLiterals(
        "Local", 0LL,
        "Width", 1LL,
        "Height", 2LL);
    return type;
}

// /Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Elements/1.0.2/$.uno
// ---------------------------------------------------------------------------------------

// private sealed class TranslationModes.PositionOffsetMode :3544
// {
static void TranslationModes__PositionOffsetMode_build(uType* type)
{
    type->SetInterfaces(
        ::g::Fuse::ITranslationMode_typeof(), offsetof(::g::Fuse::Elements::TranslationModes__OffsetMode_type, interface0),
        ::g::Fuse::ITransformMode_typeof(), offsetof(::g::Fuse::Elements::TranslationModes__OffsetMode_type, interface1));
}

::g::Fuse::Elements::TranslationModes__OffsetMode_type* TranslationModes__PositionOffsetMode_typeof()
{
    static uSStrong< ::g::Fuse::Elements::TranslationModes__OffsetMode_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Elements::TranslationModes__OffsetMode_typeof();
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(TranslationModes__PositionOffsetMode);
    options.TypeSize = sizeof(::g::Fuse::Elements::TranslationModes__OffsetMode_type);
    type = (::g::Fuse::Elements::TranslationModes__OffsetMode_type*)uClassType::New("Fuse.Elements.TranslationModes.PositionOffsetMode", options);
    type->fp_build_ = TranslationModes__PositionOffsetMode_build;
    type->fp_ctor_ = (void*)TranslationModes__PositionOffsetMode__New2_fn;
    type->interface0.fp_GetAbsVector = (void(*)(uObject*, ::g::Fuse::Translation*, ::g::Uno::Float3*))::g::Fuse::Elements::TranslationModes__OffsetMode__GetAbsVector_fn;
    type->interface1.fp_Subscribe = (void(*)(uObject*, uObject*, uObject**))::g::Fuse::Elements::TranslationModes__OffsetMode__Subscribe_fn;
    type->interface1.fp_Unsubscribe = (void(*)(uObject*, uObject*, uObject*))::g::Fuse::Elements::TranslationModes__OffsetMode__Unsubscribe_fn;
    return type;
}

// public generated PositionOffsetMode() :3544
void TranslationModes__PositionOffsetMode__ctor_1_fn(TranslationModes__PositionOffsetMode* __this)
{
    __this->ctor_1();
}

// public generated PositionOffsetMode New() :3544
void TranslationModes__PositionOffsetMode__New2_fn(TranslationModes__PositionOffsetMode** __retval)
{
    *__retval = TranslationModes__PositionOffsetMode::New2();
}

// public generated PositionOffsetMode() [instance] :3544
void TranslationModes__PositionOffsetMode::ctor_1()
{
    ctor_();
}

// public generated PositionOffsetMode New() [static] :3544
TranslationModes__PositionOffsetMode* TranslationModes__PositionOffsetMode::New2()
{
    TranslationModes__PositionOffsetMode* obj1 = (TranslationModes__PositionOffsetMode*)uNew(TranslationModes__PositionOffsetMode_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// /Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Elements/1.0.2/$.uno
// ---------------------------------------------------------------------------------------

// public sealed class PreplacementArgs :1803
// {
static void PreplacementArgs_build(uType* type)
{
    type->SetFields(0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Elements::PreplacementArgs, _HasPrev), 0);
    type->Reflection.SetFunctions(1,
        new uFunction("get_HasPrev", NULL, (void*)PreplacementArgs__get_HasPrev_fn, 0, false, ::g::Uno::Bool_typeof(), 0));
}

uType* PreplacementArgs_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::EventArgs_typeof();
    options.FieldCount = 1;
    options.ObjectSize = sizeof(PreplacementArgs);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Elements.PreplacementArgs", options);
    type->fp_build_ = PreplacementArgs_build;
    return type;
}

// internal PreplacementArgs(bool hasPrev) :1808
void PreplacementArgs__ctor_1_fn(PreplacementArgs* __this, bool* hasPrev)
{
    __this->ctor_1(*hasPrev);
}

// public generated bool get_HasPrev() :1806
void PreplacementArgs__get_HasPrev_fn(PreplacementArgs* __this, bool* __retval)
{
    *__retval = __this->HasPrev();
}

// private generated void set_HasPrev(bool value) :1806
void PreplacementArgs__set_HasPrev_fn(PreplacementArgs* __this, bool* value)
{
    __this->HasPrev(*value);
}

// internal PreplacementArgs New(bool hasPrev) :1808
void PreplacementArgs__New2_fn(bool* hasPrev, PreplacementArgs** __retval)
{
    *__retval = PreplacementArgs::New2(*hasPrev);
}

// internal PreplacementArgs(bool hasPrev) [instance] :1808
void PreplacementArgs::ctor_1(bool hasPrev)
{
    ctor_();
    HasPrev(hasPrev);
}

// public generated bool get_HasPrev() [instance] :1806
bool PreplacementArgs::HasPrev()
{
    return _HasPrev;
}

// private generated void set_HasPrev(bool value) [instance] :1806
void PreplacementArgs::HasPrev(bool value)
{
    _HasPrev = value;
}

// internal PreplacementArgs New(bool hasPrev) [static] :1808
PreplacementArgs* PreplacementArgs::New2(bool hasPrev)
{
    PreplacementArgs* obj1 = (PreplacementArgs*)uNew(PreplacementArgs_typeof());
    obj1->ctor_1(hasPrev);
    return obj1;
}
// }

// /Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Elements/1.0.2/$.uno
// ---------------------------------------------------------------------------------------

// public delegate void PreplacementHandler(object sender, Fuse.Elements.PreplacementArgs args) :1814
uDelegateType* PreplacementHandler_typeof()
{
    static uSStrong<uDelegateType*> type;
    if (type != NULL) return type;

    type = uDelegateType::New("Fuse.Elements.PreplacementHandler", 2, 0);
    type->SetSignature(uVoid_typeof(),
        uObject_typeof(),
        ::g::Fuse::Elements::PreplacementArgs_typeof());
    return type;
}

// /Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Elements/1.0.2/$.uno
// ---------------------------------------------------------------------------------------

// private sealed class TranslationModes.RelativeResizeChangeMode :3603
// {
static void TranslationModes__RelativeResizeChangeMode_build(uType* type)
{
    ::TYPES[52] = ::g::Fuse::Elements::Element_typeof();
    type->SetInterfaces(
        ::g::Fuse::Animations::IResizeMode_typeof(), offsetof(TranslationModes__RelativeResizeChangeMode_type, interface0));
}

TranslationModes__RelativeResizeChangeMode_type* TranslationModes__RelativeResizeChangeMode_typeof()
{
    static uSStrong<TranslationModes__RelativeResizeChangeMode_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(TranslationModes__RelativeResizeChangeMode);
    options.TypeSize = sizeof(TranslationModes__RelativeResizeChangeMode_type);
    type = (TranslationModes__RelativeResizeChangeMode_type*)uClassType::New("Fuse.Elements.TranslationModes.RelativeResizeChangeMode", options);
    type->fp_build_ = TranslationModes__RelativeResizeChangeMode_build;
    type->fp_ctor_ = (void*)TranslationModes__RelativeResizeChangeMode__New1_fn;
    type->interface0.fp_GetSizeChange = (void(*)(uObject*, ::g::Fuse::Visual*, ::g::Fuse::Visual*, ::g::Uno::Float2*, ::g::Uno::Float2*, bool*))TranslationModes__RelativeResizeChangeMode__GetSizeChange_fn;
    return type;
}

// public generated RelativeResizeChangeMode() :3603
void TranslationModes__RelativeResizeChangeMode__ctor__fn(TranslationModes__RelativeResizeChangeMode* __this)
{
    __this->ctor_();
}

// public bool GetSizeChange(Fuse.Visual target, Fuse.Visual relative, float2& baseSize, float2& deltaSize) :3605
void TranslationModes__RelativeResizeChangeMode__GetSizeChange_fn(TranslationModes__RelativeResizeChangeMode* __this, ::g::Fuse::Visual* target, ::g::Fuse::Visual* relative, ::g::Uno::Float2* baseSize, ::g::Uno::Float2* deltaSize, bool* __retval)
{
    *__retval = __this->GetSizeChange(target, relative, baseSize, deltaSize);
}

// public generated RelativeResizeChangeMode New() :3603
void TranslationModes__RelativeResizeChangeMode__New1_fn(TranslationModes__RelativeResizeChangeMode** __retval)
{
    *__retval = TranslationModes__RelativeResizeChangeMode::New1();
}

// public generated RelativeResizeChangeMode() [instance] :3603
void TranslationModes__RelativeResizeChangeMode::ctor_()
{
}

// public bool GetSizeChange(Fuse.Visual target, Fuse.Visual relative, float2& baseSize, float2& deltaSize) [instance] :3605
bool TranslationModes__RelativeResizeChangeMode::GetSizeChange(::g::Fuse::Visual* target, ::g::Fuse::Visual* relative, ::g::Uno::Float2* baseSize, ::g::Uno::Float2* deltaSize)
{
    uStackFrame __("Fuse.Elements.TranslationModes.RelativeResizeChangeMode", "GetSizeChange(Fuse.Visual,Fuse.Visual,float2&,float2&)");

    if (!uIs(target, ::TYPES[52/*Fuse.Elements.Element*/]) || !uIs(relative, ::TYPES[52/*Fuse.Elements.Element*/]))
    {
        *baseSize = ::g::Uno::Float2__New1(0.0f);
        *deltaSize = ::g::Uno::Float2__New1(0.0f);
        return false;
    }

    ::g::Uno::Float2 targetSize = uPtr(uAs< ::g::Fuse::Elements::Element*>(target, ::TYPES[52/*Fuse.Elements.Element*/]))->IntendedSize();
    ::g::Uno::Float2 relativeSize = uPtr(uAs< ::g::Fuse::Elements::Element*>(relative, ::TYPES[52/*Fuse.Elements.Element*/]))->ActualSize();
    *deltaSize = ::g::Uno::Float2__op_Subtraction2(relativeSize, targetSize);
    *baseSize = targetSize;
    return true;
}

// public generated RelativeResizeChangeMode New() [static] :3603
TranslationModes__RelativeResizeChangeMode* TranslationModes__RelativeResizeChangeMode::New1()
{
    TranslationModes__RelativeResizeChangeMode* obj1 = (TranslationModes__RelativeResizeChangeMode*)uNew(TranslationModes__RelativeResizeChangeMode_typeof());
    obj1->ctor_();
    return obj1;
}
// }

// /Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Elements/1.0.2/$.uno
// ---------------------------------------------------------------------------------------

// internal enum SimpleAlignment :3011
uEnumType* SimpleAlignment_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Elements.SimpleAlignment", ::g::Uno::Int_typeof(), 3);
    type->SetLiterals(
        "Begin", 0LL,
        "Center", 1LL,
        "End", 2LL);
    return type;
}

// /Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Elements/1.0.2/caching/$.uno
// -----------------------------------------------------------------------------------------------

// internal sealed class SingleVisualDrawable :841
// {
static void SingleVisualDrawable_build(uType* type)
{
    type->SetInterfaces(
        ::g::Fuse::Elements::IElementBatchDrawable_typeof(), offsetof(SingleVisualDrawable_type, interface0));
    type->SetFields(0,
        ::g::Fuse::Visual_typeof(), offsetof(::g::Fuse::Elements::SingleVisualDrawable, _elm), 0);
}

SingleVisualDrawable_type* SingleVisualDrawable_typeof()
{
    static uSStrong<SingleVisualDrawable_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(SingleVisualDrawable);
    options.TypeSize = sizeof(SingleVisualDrawable_type);
    type = (SingleVisualDrawable_type*)uClassType::New("Fuse.Elements.SingleVisualDrawable", options);
    type->fp_build_ = SingleVisualDrawable_build;
    type->interface0.fp_Draw = (void(*)(uObject*, ::g::Fuse::DrawContext*, ::g::Uno::Float4x4*, ::g::Uno::Rect*))SingleVisualDrawable__Draw_fn;
    return type;
}

// public SingleVisualDrawable(Fuse.Visual elm) :844
void SingleVisualDrawable__ctor__fn(SingleVisualDrawable* __this, ::g::Fuse::Visual* elm)
{
    __this->ctor_(elm);
}

// public void Draw(Fuse.DrawContext dc, float4x4 localToClipTransform, Uno.Rect scissorRectInClipSpace) :849
void SingleVisualDrawable__Draw_fn(SingleVisualDrawable* __this, ::g::Fuse::DrawContext* dc, ::g::Uno::Float4x4* localToClipTransform, ::g::Uno::Rect* scissorRectInClipSpace)
{
    __this->Draw(dc, *localToClipTransform, *scissorRectInClipSpace);
}

// public SingleVisualDrawable New(Fuse.Visual elm) :844
void SingleVisualDrawable__New1_fn(::g::Fuse::Visual* elm, SingleVisualDrawable** __retval)
{
    *__retval = SingleVisualDrawable::New1(elm);
}

// public SingleVisualDrawable(Fuse.Visual elm) [instance] :844
void SingleVisualDrawable::ctor_(::g::Fuse::Visual* elm)
{
    _elm = elm;
}

// public void Draw(Fuse.DrawContext dc, float4x4 localToClipTransform, Uno.Rect scissorRectInClipSpace) [instance] :849
void SingleVisualDrawable::Draw(::g::Fuse::DrawContext* dc, ::g::Uno::Float4x4 localToClipTransform, ::g::Uno::Rect scissorRectInClipSpace)
{
    uStackFrame __("Fuse.Elements.SingleVisualDrawable", "Draw(Fuse.DrawContext,float4x4,Uno.Rect)");
    uPtr(_elm)->Draw(dc);
}

// public SingleVisualDrawable New(Fuse.Visual elm) [static] :844
SingleVisualDrawable* SingleVisualDrawable::New1(::g::Fuse::Visual* elm)
{
    SingleVisualDrawable* obj1 = (SingleVisualDrawable*)uNew(SingleVisualDrawable_typeof());
    obj1->ctor_(elm);
    return obj1;
}
// }

// /Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Elements/1.0.2/$.uno
// ---------------------------------------------------------------------------------------

// private sealed class TranslationModes.SizeFactorMode :3566
// {
static void TranslationModes__SizeFactorMode_build(uType* type)
{
    ::TYPES[52] = ::g::Fuse::Elements::Element_typeof();
    ::TYPES[60] = ::g::Fuse::IActualPlacement_typeof();
    ::TYPES[58] = ::g::Fuse::ITransformRelative_typeof();
    ::TYPES[0] = ::g::Fuse::PlacedHandler_typeof();
    type->SetInterfaces(
        ::g::Fuse::IScalingMode_typeof(), offsetof(TranslationModes__SizeFactorMode_type, interface0),
        ::g::Fuse::ITransformMode_typeof(), offsetof(TranslationModes__SizeFactorMode_type, interface1));
}

TranslationModes__SizeFactorMode_type* TranslationModes__SizeFactorMode_typeof()
{
    static uSStrong<TranslationModes__SizeFactorMode_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(TranslationModes__SizeFactorMode);
    options.TypeSize = sizeof(TranslationModes__SizeFactorMode_type);
    type = (TranslationModes__SizeFactorMode_type*)uClassType::New("Fuse.Elements.TranslationModes.SizeFactorMode", options);
    type->fp_build_ = TranslationModes__SizeFactorMode_build;
    type->fp_ctor_ = (void*)TranslationModes__SizeFactorMode__New1_fn;
    type->interface0.fp_GetScaleVector = (void(*)(uObject*, ::g::Fuse::Scaling*, ::g::Uno::Float3*))TranslationModes__SizeFactorMode__GetScaleVector_fn;
    type->interface1.fp_Subscribe = (void(*)(uObject*, uObject*, uObject**))TranslationModes__SizeFactorMode__Subscribe_fn;
    type->interface1.fp_Unsubscribe = (void(*)(uObject*, uObject*, uObject*))TranslationModes__SizeFactorMode__Unsubscribe_fn;
    return type;
}

// public generated SizeFactorMode() :3566
void TranslationModes__SizeFactorMode__ctor__fn(TranslationModes__SizeFactorMode* __this)
{
    __this->ctor_();
}

// public float3 GetScaleVector(Fuse.Scaling t) :3568
void TranslationModes__SizeFactorMode__GetScaleVector_fn(TranslationModes__SizeFactorMode* __this, ::g::Fuse::Scaling* t, ::g::Uno::Float3* __retval)
{
    *__retval = __this->GetScaleVector(t);
}

// public generated SizeFactorMode New() :3566
void TranslationModes__SizeFactorMode__New1_fn(TranslationModes__SizeFactorMode** __retval)
{
    *__retval = TranslationModes__SizeFactorMode::New1();
}

// public object Subscribe(Fuse.ITransformRelative transform) :3583
void TranslationModes__SizeFactorMode__Subscribe_fn(TranslationModes__SizeFactorMode* __this, uObject* transform, uObject** __retval)
{
    *__retval = __this->Subscribe(transform);
}

// public void Unsubscribe(Fuse.ITransformRelative transform, object sub) :3590
void TranslationModes__SizeFactorMode__Unsubscribe_fn(TranslationModes__SizeFactorMode* __this, uObject* transform, uObject* sub)
{
    __this->Unsubscribe(transform, sub);
}

// public generated SizeFactorMode() [instance] :3566
void TranslationModes__SizeFactorMode::ctor_()
{
}

// public float3 GetScaleVector(Fuse.Scaling t) [instance] :3568
::g::Uno::Float3 TranslationModes__SizeFactorMode::GetScaleVector(::g::Fuse::Scaling* t)
{
    uStackFrame __("Fuse.Elements.TranslationModes.SizeFactorMode", "GetScaleVector(Fuse.Scaling)");
    ::g::Fuse::Elements::Element* dst = uAs< ::g::Fuse::Elements::Element*>(uPtr(t)->RelativeNode(), ::TYPES[52/*Fuse.Elements.Element*/]);
    ::g::Fuse::Elements::Element* src = uAs< ::g::Fuse::Elements::Element*>(t->Parent(), ::TYPES[52/*Fuse.Elements.Element*/]);

    if ((dst == NULL) || (src == NULL))
        return ::g::Uno::Float3__New1(1.0f);

    ::g::Uno::Float2 sz = uPtr(src)->ActualSize();

    if ((sz.X < 1e-05f) || (sz.Y < 1e-05f))
        return ::g::Uno::Float3__New1(1.0f);

    ::g::Uno::Float3 rel = ::g::Uno::Float3__op_Subtraction2(::g::Uno::Float3__New4(::g::Uno::Float2__op_Division2(uPtr(dst)->ActualSize(), sz), 1.0f), ::g::Uno::Float3__New1(1.0f));
    return ::g::Uno::Float3__op_Addition2(::g::Uno::Float3__op_Multiply2(rel, t->Vector()), ::g::Uno::Float3__New1(1.0f));
}

// public object Subscribe(Fuse.ITransformRelative transform) [instance] :3583
uObject* TranslationModes__SizeFactorMode::Subscribe(uObject* transform)
{
    uStackFrame __("Fuse.Elements.TranslationModes.SizeFactorMode", "Subscribe(Fuse.ITransformRelative)");
    uObject* n = uAs<uObject*>(::g::Fuse::ITransformRelative::RelativeNode(uInterface(uPtr(transform), ::TYPES[58/*Fuse.ITransformRelative*/])), ::TYPES[60/*Fuse.IActualPlacement*/]);

    if (n != NULL)
        ::g::Fuse::IActualPlacement::add_Placed(uInterface(uPtr(n), ::TYPES[60/*Fuse.IActualPlacement*/]), uDelegate::New(::TYPES[0/*Fuse.PlacedHandler*/], uInterface(uPtr(transform), ::TYPES[58/*Fuse.ITransformRelative*/]), offsetof(::g::Fuse::ITransformRelative, fp_OnTransformChanged)));

    return n;
}

// public void Unsubscribe(Fuse.ITransformRelative transform, object sub) [instance] :3590
void TranslationModes__SizeFactorMode::Unsubscribe(uObject* transform, uObject* sub)
{
    uStackFrame __("Fuse.Elements.TranslationModes.SizeFactorMode", "Unsubscribe(Fuse.ITransformRelative,object)");

    if (sub != NULL)
        ::g::Fuse::IActualPlacement::remove_Placed(uInterface(uPtr(uAs<uObject*>(sub, ::TYPES[60/*Fuse.IActualPlacement*/])), ::TYPES[60/*Fuse.IActualPlacement*/]), uDelegate::New(::TYPES[0/*Fuse.PlacedHandler*/], uInterface(uPtr(transform), ::TYPES[58/*Fuse.ITransformRelative*/]), offsetof(::g::Fuse::ITransformRelative, fp_OnTransformChanged)));
}

// public generated SizeFactorMode New() [static] :3566
TranslationModes__SizeFactorMode* TranslationModes__SizeFactorMode::New1()
{
    TranslationModes__SizeFactorMode* obj1 = (TranslationModes__SizeFactorMode*)uNew(TranslationModes__SizeFactorMode_typeof());
    obj1->ctor_();
    return obj1;
}
// }

// /Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Elements/1.0.2/$.uno
// ---------------------------------------------------------------------------------------

// internal class StandardBoxSizing :363
// {
// static StandardBoxSizing() :363
static void StandardBoxSizing__cctor__fn(uType* __type)
{
    StandardBoxSizing::Singleton_ = StandardBoxSizing::New1();
}

static void StandardBoxSizing_build(uType* type)
{
    type->SetFields(0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Elements::StandardBoxSizing, ImplicitMax), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Elements::StandardBoxSizing, pixelEpsilon), 0,
        type, (uintptr_t)&::g::Fuse::Elements::StandardBoxSizing::Singleton_, uFieldFlagsStatic);
}

::g::Fuse::Elements::BoxSizing_type* StandardBoxSizing_typeof()
{
    static uSStrong< ::g::Fuse::Elements::BoxSizing_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Elements::BoxSizing_typeof();
    options.FieldCount = 3;
    options.ObjectSize = sizeof(StandardBoxSizing);
    options.TypeSize = sizeof(::g::Fuse::Elements::BoxSizing_type);
    type = (::g::Fuse::Elements::BoxSizing_type*)uClassType::New("Fuse.Elements.StandardBoxSizing", options);
    type->fp_build_ = StandardBoxSizing_build;
    type->fp_ctor_ = (void*)StandardBoxSizing__New1_fn;
    type->fp_cctor_ = StandardBoxSizing__cctor__fn;
    type->fp_CalcArrangePaddingSize = (void(*)(::g::Fuse::Elements::BoxSizing*, ::g::Fuse::Elements::Element*, ::g::Fuse::LayoutParams*, ::g::Uno::Float2*))StandardBoxSizing__CalcArrangePaddingSize_fn;
    type->fp_CalcBoxPlacement = (void(*)(::g::Fuse::Elements::BoxSizing*, ::g::Fuse::Elements::Element*, ::g::Uno::Float2*, ::g::Fuse::LayoutParams*, ::g::Fuse::Elements::BoxPlacement*))StandardBoxSizing__CalcBoxPlacement_fn;
    type->fp_CalcMarginSize = (void(*)(::g::Fuse::Elements::BoxSizing*, ::g::Fuse::Elements::Element*, ::g::Fuse::LayoutParams*, ::g::Uno::Float2*))StandardBoxSizing__CalcMarginSize_fn;
    type->fp_IsContentRelativeSize = (void(*)(::g::Fuse::Elements::BoxSizing*, ::g::Fuse::Elements::Element*, int*))StandardBoxSizing__IsContentRelativeSize_fn;
    return type;
}

// public generated StandardBoxSizing() :363
void StandardBoxSizing__ctor_1_fn(StandardBoxSizing* __this)
{
    __this->ctor_1();
}

// public override sealed float2 CalcArrangePaddingSize(Fuse.Elements.Element element, Fuse.LayoutParams lp) :467
void StandardBoxSizing__CalcArrangePaddingSize_fn(StandardBoxSizing* __this, ::g::Fuse::Elements::Element* element, ::g::Fuse::LayoutParams* lp, ::g::Uno::Float2* __retval)
{
    uStackFrame __("Fuse.Elements.StandardBoxSizing", "CalcArrangePaddingSize(Fuse.Elements.Element,Fuse.LayoutParams)");
    ::g::Fuse::LayoutParams lp_ = *lp;
    ::g::Fuse::LayoutParams c = __this->GetConstraints(element, lp_, __this->ImplicitMax ? 2 : 0);
    ::g::Fuse::LayoutParams child = lp_.CloneAndDerive();
    child.BoxConstrain(c);
    ::g::Uno::Float2 sz = child.Size();

    if (!child.HasSize())
    {
        ::g::Uno::Float4 pad = uPtr(element)->Padding();
        bool hasPad = element->HasBit(2048);

        if (hasPad)
            child.RemoveSize1(pad);

        sz = element->InternGetContentSize(child);
        sz = ::g::Uno::Float2__op_Addition2(sz, ::g::Uno::Float2__op_Addition2(::g::Uno::Float2__New2(pad.X, pad.Y), ::g::Uno::Float2__New2(pad.Z, pad.W)));
    }

    sz = c.PointConstrain(sz);

    if (uPtr(element)->SnapToPixels())
        sz = __this->SnapUp(element, sz);

    return *__retval = sz, void();
}

// public override sealed Fuse.Elements.BoxPlacement CalcBoxPlacement(Fuse.Elements.Element element, float2 position, Fuse.LayoutParams lp) :367
void StandardBoxSizing__CalcBoxPlacement_fn(StandardBoxSizing* __this, ::g::Fuse::Elements::Element* element, ::g::Uno::Float2* position, ::g::Fuse::LayoutParams* lp, ::g::Fuse::Elements::BoxPlacement* __retval)
{
    uStackFrame __("Fuse.Elements.StandardBoxSizing", "CalcBoxPlacement(Fuse.Elements.Element,float2,Fuse.LayoutParams)");
    ::g::Fuse::LayoutParams lp_ = *lp;
    ::g::Uno::Float2 position_ = *position;
    ::g::Uno::Float4 margin = uPtr(element)->Margin();
    ::g::Uno::Float2 avSize = lp_.Size();
    ::g::Uno::Float2 marginBox = element->GetMarginSize(lp_);
    ::g::Uno::Float2 paddingBox = ::g::Uno::Float2__op_Subtraction2(::g::Uno::Float2__op_Subtraction2(marginBox, ::g::Uno::Float2__New2(margin.X, margin.Y)), ::g::Uno::Float2__New2(margin.Z, margin.W));
    avSize = ::g::Uno::Float2__op_Subtraction2(avSize, ::g::Uno::Float2__op_Addition2(::g::Uno::Float2__New2(margin.X, margin.Y), ::g::Uno::Float2__New2(margin.Z, margin.W)));
    avSize = ::g::Uno::Math::Max3(::g::Uno::Float2__New1(0.0f), avSize);
    paddingBox = ::g::Uno::Math::Max3(::g::Uno::Float2__New1(0.0f), paddingBox);
    ::g::Uno::Float2 s = ::g::Uno::Float2__New1(0.0f);

    if (element->Visibility() != 1)
        s = paddingBox;

    ::g::Uno::Float2 p = position_;
    int halign = __this->EffectiveHorizontalAlignment(element);

    if (!lp_.HasX())
        halign = 0;

    int valign = __this->EffectiveVerticalAlignment(element);

    if (!lp_.HasY())
        valign = 0;

    p.X = (p.X + margin.X);

    switch (halign)
    {
        case 0:
            break;
        case 1:
        {
            p.X = (p.X + (avSize.X * 0.5f));
            break;
        }
        case 2:
        {
            p.X = (p.X + avSize.X);
            break;
        }
    }

    p.Y = (p.Y + margin.Y);

    switch (valign)
    {
        case 0:
            break;
        case 1:
        {
            p.Y = (p.Y + (avSize.Y * 0.5f));
            break;
        }
        case 2:
        {
            p.Y = (p.Y + avSize.Y);
            break;
        }
    }

    bool ignore;

    if (element->HasBit(8192))
    {
        ::g::Uno::UX::Size2 offset = uPtr(element)->Offset();
        ::g::Uno::Float2 o = ::g::Uno::Float2__New2(__this->UnitSize(element, offset.X, avSize.X, lp_.HasX(), &ignore), __this->UnitSize(element, offset.Y, avSize.Y, lp_.HasY(), &ignore));
        p = ::g::Uno::Float2__op_Addition2(p, o);
    }

    if (element->HasBit(16384))
    {
        ::g::Uno::UX::Size o1 = uPtr(element)->X();
        p.X = (p.X + __this->UnitSize(element, o1, avSize.X, lp_.HasX(), &ignore));
    }

    if (element->HasBit(32768))
    {
        ::g::Uno::UX::Size o2 = uPtr(element)->Y();
        p.Y = (p.Y + __this->UnitSize(element, o2, avSize.Y, lp_.HasY(), &ignore));
    }

    ::g::Uno::UX::Size2 anchor;
    __this->EffectiveAnchor(element, halign, valign, &anchor);
    element->ActualAnchor(::g::Uno::Float2__New2(__this->UnitSize(element, anchor.X, s.X, true, &ignore), __this->UnitSize(element, anchor.Y, s.Y, true, &ignore)));
    p = ::g::Uno::Float2__op_Subtraction2(p, element->ActualAnchor());
    ::g::Fuse::Elements::BoxPlacement bp;
    bp.MarginBox = marginBox;
    bp.Position = p;
    bp.Size = s;
    return *__retval = bp, void();
}

// public override sealed float2 CalcMarginSize(Fuse.Elements.Element element, Fuse.LayoutParams lp) :449
void StandardBoxSizing__CalcMarginSize_fn(StandardBoxSizing* __this, ::g::Fuse::Elements::Element* element, ::g::Fuse::LayoutParams* lp, ::g::Uno::Float2* __retval)
{
    uStackFrame __("Fuse.Elements.StandardBoxSizing", "CalcMarginSize(Fuse.Elements.Element,Fuse.LayoutParams)");
    ::g::Fuse::LayoutParams lp_ = *lp;

    if (uPtr(element)->Visibility() == 1)
        return *__retval = ::g::Uno::Float2__New1(0.0f), void();

    ::g::Uno::Float4 margin = ::g::Uno::Float4__New1(0.0f);

    if (uPtr(element)->HasBit(1024))
    {
        margin = uPtr(element)->Margin();
        lp_ = lp_.Clone();
        lp_.RemoveSize1(margin);
    }

    ::g::Uno::Float2 sz = uPtr(element)->GetArrangePaddingSize(lp_);
    sz = ::g::Uno::Float2__op_Addition2(sz, ::g::Uno::Float2__op_Addition2(::g::Uno::Float2__New2(margin.X, margin.Y), ::g::Uno::Float2__New2(margin.Z, margin.W)));
    return *__retval = sz, void();
}

// public override sealed Fuse.LayoutDependent IsContentRelativeSize(Fuse.Elements.Element element) :502
void StandardBoxSizing__IsContentRelativeSize_fn(StandardBoxSizing* __this, ::g::Fuse::Elements::Element* element, int* __retval)
{
    uStackFrame __("Fuse.Elements.StandardBoxSizing", "IsContentRelativeSize(Fuse.Elements.Element)");
    bool ha = ::g::Fuse::Elements::AlignmentHelpers::GetHorizontalAlign(uPtr(element)->Alignment()) != 0;
    bool w = !element->Width().IsAuto();
    bool va = ::g::Fuse::Elements::AlignmentHelpers::GetVerticalAlign(element->Alignment()) != 0;
    bool h = !element->Height().IsAuto();

    if (w && h)
        return *__retval = 0, void();

    if (ha || va)
        return *__retval = 4, void();

    return *__retval = 2, void();
}

// public generated StandardBoxSizing New() :363
void StandardBoxSizing__New1_fn(StandardBoxSizing** __retval)
{
    *__retval = StandardBoxSizing::New1();
}

// private float2 SnapUp(Fuse.Elements.Element element, float2 p) :496
void StandardBoxSizing__SnapUp_fn(StandardBoxSizing* __this, ::g::Fuse::Elements::Element* element, ::g::Uno::Float2* p, ::g::Uno::Float2* __retval)
{
    *__retval = __this->SnapUp(element, *p);
}

uSStrong<StandardBoxSizing*> StandardBoxSizing::Singleton_;

// public generated StandardBoxSizing() [instance] :363
void StandardBoxSizing::ctor_1()
{
    ImplicitMax = true;
    pixelEpsilon = 0.005f;
    ctor_();
}

// private float2 SnapUp(Fuse.Elements.Element element, float2 p) [instance] :496
::g::Uno::Float2 StandardBoxSizing::SnapUp(::g::Fuse::Elements::Element* element, ::g::Uno::Float2 p)
{
    uStackFrame __("Fuse.Elements.StandardBoxSizing", "SnapUp(Fuse.Elements.Element,float2)");
    ::g::Uno::Float2 s = ::g::Uno::Float2__op_Division1(::g::Uno::Math::Ceil2(::g::Uno::Float2__op_Subtraction1(::g::Uno::Float2__op_Multiply1(p, uPtr(element)->AbsoluteZoom()), pixelEpsilon)), uPtr(element)->AbsoluteZoom());
    return s;
}

// public generated StandardBoxSizing New() [static] :363
StandardBoxSizing* StandardBoxSizing::New1()
{
    StandardBoxSizing* obj1 = (StandardBoxSizing*)uNew(StandardBoxSizing_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// /Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Elements/1.0.2/$.uno
// ---------------------------------------------------------------------------------------

// public enum StretchDirection :3057
uEnumType* StretchDirection_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Elements.StretchDirection", ::g::Uno::Int_typeof(), 3);
    type->SetLiterals(
        "Both", 0LL,
        "UpOnly", 1LL,
        "DownOnly", 2LL);
    return type;
}

// /Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Elements/1.0.2/$.uno
// ---------------------------------------------------------------------------------------

// public enum StretchMode :3036
uEnumType* StretchMode_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Elements.StretchMode", ::g::Uno::Int_typeof(), 7);
    type->SetLiterals(
        "PointPrecise", 0LL,
        "PixelPrecise", 1LL,
        "PointPrefer", 2LL,
        "Fill", 3LL,
        "Scale9", 4LL,
        "Uniform", 5LL,
        "UniformToFill", 6LL);
    return type;
}

// /Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Elements/1.0.2/$.uno
// ---------------------------------------------------------------------------------------

// public enum StretchSizing :3070
uEnumType* StretchSizing_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Elements.StretchSizing", ::g::Uno::Int_typeof(), 2);
    type->SetLiterals(
        "Zero", 0LL,
        "Natural", 1LL);
    return type;
}

// /Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Elements/1.0.2/$.uno
// ---------------------------------------------------------------------------------------

// private sealed class TranslationModes.OffsetMode.Subscriptions :3513
// {
static void TranslationModes__OffsetMode__Subscriptions_build(uType* type)
{
    type->SetFields(0,
        ::g::Fuse::Visual_typeof(), offsetof(::g::Fuse::Elements::TranslationModes__OffsetMode__Subscriptions, Relative), 0,
        ::g::Fuse::Elements::Element_typeof(), offsetof(::g::Fuse::Elements::TranslationModes__OffsetMode__Subscriptions, Target), 0,
        ::g::Fuse::Visual_typeof(), offsetof(::g::Fuse::Elements::TranslationModes__OffsetMode__Subscriptions, TargetParent), 0);
}

uType* TranslationModes__OffsetMode__Subscriptions_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.ObjectSize = sizeof(TranslationModes__OffsetMode__Subscriptions);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Elements.TranslationModes.OffsetMode.Subscriptions", options);
    type->fp_build_ = TranslationModes__OffsetMode__Subscriptions_build;
    type->fp_ctor_ = (void*)TranslationModes__OffsetMode__Subscriptions__New1_fn;
    return type;
}

// public generated Subscriptions() :3513
void TranslationModes__OffsetMode__Subscriptions__ctor__fn(TranslationModes__OffsetMode__Subscriptions* __this)
{
    __this->ctor_();
}

// public generated Subscriptions New() :3513
void TranslationModes__OffsetMode__Subscriptions__New1_fn(TranslationModes__OffsetMode__Subscriptions** __retval)
{
    *__retval = TranslationModes__OffsetMode__Subscriptions::New1();
}

// public generated Subscriptions() [instance] :3513
void TranslationModes__OffsetMode__Subscriptions::ctor_()
{
}

// public generated Subscriptions New() [static] :3513
TranslationModes__OffsetMode__Subscriptions* TranslationModes__OffsetMode__Subscriptions::New1()
{
    TranslationModes__OffsetMode__Subscriptions* obj1 = (TranslationModes__OffsetMode__Subscriptions*)uNew(TranslationModes__OffsetMode__Subscriptions_typeof());
    obj1->ctor_();
    return obj1;
}
// }

// /Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Elements/1.0.2/$.uno
// ---------------------------------------------------------------------------------------

// private sealed class TransformOrigins.TopLeftOrigin :2445
// {
static void TransformOrigins__TopLeftOrigin_build(uType* type)
{
    type->SetInterfaces(
        ::g::Fuse::Elements::ITransformOrigin_typeof(), offsetof(TransformOrigins__TopLeftOrigin_type, interface0));
}

TransformOrigins__TopLeftOrigin_type* TransformOrigins__TopLeftOrigin_typeof()
{
    static uSStrong<TransformOrigins__TopLeftOrigin_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(TransformOrigins__TopLeftOrigin);
    options.TypeSize = sizeof(TransformOrigins__TopLeftOrigin_type);
    type = (TransformOrigins__TopLeftOrigin_type*)uClassType::New("Fuse.Elements.TransformOrigins.TopLeftOrigin", options);
    type->fp_build_ = TransformOrigins__TopLeftOrigin_build;
    type->fp_ctor_ = (void*)TransformOrigins__TopLeftOrigin__New1_fn;
    type->interface0.fp_GetOffset = (void(*)(uObject*, ::g::Fuse::Elements::Element*, ::g::Uno::Float3*))TransformOrigins__TopLeftOrigin__GetOffset_fn;
    return type;
}

// public generated TopLeftOrigin() :2445
void TransformOrigins__TopLeftOrigin__ctor__fn(TransformOrigins__TopLeftOrigin* __this)
{
    __this->ctor_();
}

// public float3 GetOffset(Fuse.Elements.Element elm) :2447
void TransformOrigins__TopLeftOrigin__GetOffset_fn(TransformOrigins__TopLeftOrigin* __this, ::g::Fuse::Elements::Element* elm, ::g::Uno::Float3* __retval)
{
    *__retval = __this->GetOffset(elm);
}

// public generated TopLeftOrigin New() :2445
void TransformOrigins__TopLeftOrigin__New1_fn(TransformOrigins__TopLeftOrigin** __retval)
{
    *__retval = TransformOrigins__TopLeftOrigin::New1();
}

// public generated TopLeftOrigin() [instance] :2445
void TransformOrigins__TopLeftOrigin::ctor_()
{
}

// public float3 GetOffset(Fuse.Elements.Element elm) [instance] :2447
::g::Uno::Float3 TransformOrigins__TopLeftOrigin::GetOffset(::g::Fuse::Elements::Element* elm)
{
    return ::g::Uno::Float3__New1(0.0f);
}

// public generated TopLeftOrigin New() [static] :2445
TransformOrigins__TopLeftOrigin* TransformOrigins__TopLeftOrigin::New1()
{
    TransformOrigins__TopLeftOrigin* obj1 = (TransformOrigins__TopLeftOrigin*)uNew(TransformOrigins__TopLeftOrigin_typeof());
    obj1->ctor_();
    return obj1;
}
// }

// /Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Elements/1.0.2/$.uno
// ---------------------------------------------------------------------------------------

// private sealed extern class Element.TransformChanged :2708
// {
static void Element__TransformChanged_build(uType* type)
{
    ::TYPES[41] = ::g::Uno::EventHandler_typeof();
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(Element__TransformChanged_type, interface0));
    type->SetFields(0,
        ::g::Fuse::Elements::Element_typeof(), offsetof(::g::Fuse::Elements::Element__TransformChanged, _element), 0,
        ::g::Uno::Action1_typeof()->MakeType(::g::Uno::Float4x4_typeof(), NULL), offsetof(::g::Fuse::Elements::Element__TransformChanged, _handler), 0);
}

Element__TransformChanged_type* Element__TransformChanged_typeof()
{
    static uSStrong<Element__TransformChanged_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(Element__TransformChanged);
    options.TypeSize = sizeof(Element__TransformChanged_type);
    type = (Element__TransformChanged_type*)uClassType::New("Fuse.Elements.Element.TransformChanged", options);
    type->fp_build_ = Element__TransformChanged_build;
    type->interface0.fp_Dispose = (void(*)(uObject*))Element__TransformChanged__UnoIDisposableDispose_fn;
    return type;
}

// public TransformChanged(Fuse.Elements.Element element, Uno.Action<float4x4> handler) :2713
void Element__TransformChanged__ctor__fn(Element__TransformChanged* __this, ::g::Fuse::Elements::Element* element, uDelegate* handler)
{
    __this->ctor_(element, handler);
}

// public TransformChanged New(Fuse.Elements.Element element, Uno.Action<float4x4> handler) :2713
void Element__TransformChanged__New1_fn(::g::Fuse::Elements::Element* element, uDelegate* handler, Element__TransformChanged** __retval)
{
    *__retval = Element__TransformChanged::New1(element, handler);
}

// private void OnWorldTransformInvalidated(object sender, Uno.EventArgs args) :2721
void Element__TransformChanged__OnWorldTransformInvalidated_fn(Element__TransformChanged* __this, uObject* sender, ::g::Uno::EventArgs* args)
{
    __this->OnWorldTransformInvalidated(sender, args);
}

// private void Uno.IDisposable.Dispose() :2726
void Element__TransformChanged__UnoIDisposableDispose_fn(Element__TransformChanged* __this)
{
    uStackFrame __("Fuse.Elements.Element.TransformChanged", "Uno.IDisposable.Dispose()");
    uPtr(__this->_element)->remove_WorldTransformInvalidated(uDelegate::New(::TYPES[41/*Uno.EventHandler*/], (void*)Element__TransformChanged__OnWorldTransformInvalidated_fn, __this));
    __this->_element = NULL;
    __this->_handler = NULL;
}

// public TransformChanged(Fuse.Elements.Element element, Uno.Action<float4x4> handler) [instance] :2713
void Element__TransformChanged::ctor_(::g::Fuse::Elements::Element* element, uDelegate* handler)
{
    uStackFrame __("Fuse.Elements.Element.TransformChanged", ".ctor(Fuse.Elements.Element,Uno.Action<float4x4>)");
    _element = element;
    _handler = handler;
    uPtr(_handler)->InvokeVoid(uCRef(uPtr(_element)->WorldTransform()));
    uPtr(_element)->add_WorldTransformInvalidated(uDelegate::New(::TYPES[41/*Uno.EventHandler*/], (void*)Element__TransformChanged__OnWorldTransformInvalidated_fn, this));
}

// private void OnWorldTransformInvalidated(object sender, Uno.EventArgs args) [instance] :2721
void Element__TransformChanged::OnWorldTransformInvalidated(uObject* sender, ::g::Uno::EventArgs* args)
{
    uStackFrame __("Fuse.Elements.Element.TransformChanged", "OnWorldTransformInvalidated(object,Uno.EventArgs)");
    uPtr(_handler)->InvokeVoid(uCRef(uPtr(_element)->WorldTransform()));
}

// public TransformChanged New(Fuse.Elements.Element element, Uno.Action<float4x4> handler) [static] :2713
Element__TransformChanged* Element__TransformChanged::New1(::g::Fuse::Elements::Element* element, uDelegate* handler)
{
    Element__TransformChanged* obj1 = (Element__TransformChanged*)uNew(Element__TransformChanged_typeof());
    obj1->ctor_(element, handler);
    return obj1;
}
// }

// /Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Elements/1.0.2/$.uno
// ---------------------------------------------------------------------------------------

// private sealed class TranslationModes.TransformOriginOffsetMode :3548
// {
static void TranslationModes__TransformOriginOffsetMode_build(uType* type)
{
    ::TYPES[18] = ::g::Fuse::Elements::ITransformOrigin_typeof();
    type->SetInterfaces(
        ::g::Fuse::ITranslationMode_typeof(), offsetof(::g::Fuse::Elements::TranslationModes__OffsetMode_type, interface0),
        ::g::Fuse::ITransformMode_typeof(), offsetof(::g::Fuse::Elements::TranslationModes__OffsetMode_type, interface1));
}

::g::Fuse::Elements::TranslationModes__OffsetMode_type* TranslationModes__TransformOriginOffsetMode_typeof()
{
    static uSStrong< ::g::Fuse::Elements::TranslationModes__OffsetMode_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Elements::TranslationModes__OffsetMode_typeof();
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(TranslationModes__TransformOriginOffsetMode);
    options.TypeSize = sizeof(::g::Fuse::Elements::TranslationModes__OffsetMode_type);
    type = (::g::Fuse::Elements::TranslationModes__OffsetMode_type*)uClassType::New("Fuse.Elements.TranslationModes.TransformOriginOffsetMode", options);
    type->fp_build_ = TranslationModes__TransformOriginOffsetMode_build;
    type->fp_ctor_ = (void*)TranslationModes__TransformOriginOffsetMode__New2_fn;
    type->fp_GetDstOffset = (void(*)(::g::Fuse::Elements::TranslationModes__OffsetMode*, ::g::Fuse::Elements::Element*, ::g::Uno::Float3*))TranslationModes__TransformOriginOffsetMode__GetDstOffset_fn;
    type->fp_GetSrcOffset = (void(*)(::g::Fuse::Elements::TranslationModes__OffsetMode*, ::g::Fuse::Elements::Element*, ::g::Uno::Float3*))TranslationModes__TransformOriginOffsetMode__GetSrcOffset_fn;
    type->interface0.fp_GetAbsVector = (void(*)(uObject*, ::g::Fuse::Translation*, ::g::Uno::Float3*))::g::Fuse::Elements::TranslationModes__OffsetMode__GetAbsVector_fn;
    type->interface1.fp_Subscribe = (void(*)(uObject*, uObject*, uObject**))::g::Fuse::Elements::TranslationModes__OffsetMode__Subscribe_fn;
    type->interface1.fp_Unsubscribe = (void(*)(uObject*, uObject*, uObject*))::g::Fuse::Elements::TranslationModes__OffsetMode__Unsubscribe_fn;
    return type;
}

// public generated TransformOriginOffsetMode() :3548
void TranslationModes__TransformOriginOffsetMode__ctor_1_fn(TranslationModes__TransformOriginOffsetMode* __this)
{
    __this->ctor_1();
}

// protected override sealed float3 GetDstOffset(Fuse.Elements.Element e) :3550
void TranslationModes__TransformOriginOffsetMode__GetDstOffset_fn(TranslationModes__TransformOriginOffsetMode* __this, ::g::Fuse::Elements::Element* e, ::g::Uno::Float3* __retval)
{
    uStackFrame __("Fuse.Elements.TranslationModes.TransformOriginOffsetMode", "GetDstOffset(Fuse.Elements.Element)");
    return *__retval = ::g::Fuse::Elements::ITransformOrigin::GetOffset(uInterface(uPtr(uPtr(e)->TransformOrigin()), ::TYPES[18/*Fuse.Elements.ITransformOrigin*/]), e), void();
}

// protected override sealed float3 GetSrcOffset(Fuse.Elements.Element e) :3555
void TranslationModes__TransformOriginOffsetMode__GetSrcOffset_fn(TranslationModes__TransformOriginOffsetMode* __this, ::g::Fuse::Elements::Element* e, ::g::Uno::Float3* __retval)
{
    uStackFrame __("Fuse.Elements.TranslationModes.TransformOriginOffsetMode", "GetSrcOffset(Fuse.Elements.Element)");
    return *__retval = ::g::Fuse::Elements::ITransformOrigin::GetOffset(uInterface(uPtr(uPtr(e)->TransformOrigin()), ::TYPES[18/*Fuse.Elements.ITransformOrigin*/]), e), void();
}

// public generated TransformOriginOffsetMode New() :3548
void TranslationModes__TransformOriginOffsetMode__New2_fn(TranslationModes__TransformOriginOffsetMode** __retval)
{
    *__retval = TranslationModes__TransformOriginOffsetMode::New2();
}

// public generated TransformOriginOffsetMode() [instance] :3548
void TranslationModes__TransformOriginOffsetMode::ctor_1()
{
    ctor_();
}

// public generated TransformOriginOffsetMode New() [static] :3548
TranslationModes__TransformOriginOffsetMode* TranslationModes__TransformOriginOffsetMode::New2()
{
    TranslationModes__TransformOriginOffsetMode* obj1 = (TranslationModes__TransformOriginOffsetMode*)uNew(TranslationModes__TransformOriginOffsetMode_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// /Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Elements/1.0.2/$.uno
// ---------------------------------------------------------------------------------------

// public static class TransformOrigins :2443
// {
// static TransformOrigins() :2443
static void TransformOrigins__cctor__fn(uType* __type)
{
    TransformOrigins__BoxCenter* collection2;
    TransformOrigins__BoxCenter* collection1;
    TransformOrigins::TopLeft_ = (uObject*)TransformOrigins__TopLeftOrigin::New1();
    TransformOrigins::Center_ = (uObject*)TransformOrigins__CenterOrigin::New1();
    TransformOrigins::Anchor_ = (uObject*)TransformOrigins__AnchorOrigin::New1();
    TransformOrigins::HorizontalBoxCenter_ = (uObject*)(collection2 = TransformOrigins__BoxCenter::New1(), uPtr(collection2)->Depth = ::g::Uno::Float2__New2(0.0f, 1.0f), collection2);
    TransformOrigins::VerticalBoxCenter_ = (uObject*)(collection1 = TransformOrigins__BoxCenter::New1(), uPtr(collection1)->Depth = ::g::Uno::Float2__New2(1.0f, 0.0f), collection1);
}

static void TransformOrigins_build(uType* type)
{
    type->SetFields(0,
        ::g::Fuse::Elements::ITransformOrigin_typeof(), (uintptr_t)&::g::Fuse::Elements::TransformOrigins::Anchor_, uFieldFlagsStatic,
        ::g::Fuse::Elements::ITransformOrigin_typeof(), (uintptr_t)&::g::Fuse::Elements::TransformOrigins::Center_, uFieldFlagsStatic,
        ::g::Fuse::Elements::ITransformOrigin_typeof(), (uintptr_t)&::g::Fuse::Elements::TransformOrigins::HorizontalBoxCenter_, uFieldFlagsStatic,
        ::g::Fuse::Elements::ITransformOrigin_typeof(), (uintptr_t)&::g::Fuse::Elements::TransformOrigins::TopLeft_, uFieldFlagsStatic,
        ::g::Fuse::Elements::ITransformOrigin_typeof(), (uintptr_t)&::g::Fuse::Elements::TransformOrigins::VerticalBoxCenter_, uFieldFlagsStatic);
    type->Reflection.SetFields(5,
        new uField("Anchor", 0),
        new uField("Center", 1),
        new uField("HorizontalBoxCenter", 2),
        new uField("TopLeft", 3),
        new uField("VerticalBoxCenter", 4));
}

uClassType* TransformOrigins_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 5;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Elements.TransformOrigins", options);
    type->fp_build_ = TransformOrigins_build;
    type->fp_cctor_ = TransformOrigins__cctor__fn;
    return type;
}

uSStrong<uObject*> TransformOrigins::Anchor_;
uSStrong<uObject*> TransformOrigins::Center_;
uSStrong<uObject*> TransformOrigins::HorizontalBoxCenter_;
uSStrong<uObject*> TransformOrigins::TopLeft_;
uSStrong<uObject*> TransformOrigins::VerticalBoxCenter_;
// }

// /Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Elements/1.0.2/$.uno
// ---------------------------------------------------------------------------------------

// public static class TranslationModes :3486
// {
// static TranslationModes() :3486
static void TranslationModes__cctor__fn(uType* __type)
{
    TranslationModes::TransformOriginOffset_ = (uObject*)TranslationModes__TransformOriginOffsetMode::New2();
    TranslationModes::PositionOffset_ = (uObject*)TranslationModes__PositionOffsetMode::New2();
    TranslationModes::SizeFactor_ = (uObject*)TranslationModes__SizeFactorMode::New1();
    TranslationModes::Size_ = (uObject*)TranslationModes__RelativeResizeChangeMode::New1();
}

static void TranslationModes_build(uType* type)
{
    type->SetFields(0,
        ::g::Fuse::ITranslationMode_typeof(), (uintptr_t)&::g::Fuse::Elements::TranslationModes::PositionOffset_, uFieldFlagsStatic,
        ::g::Fuse::Animations::IResizeMode_typeof(), (uintptr_t)&::g::Fuse::Elements::TranslationModes::Size_, uFieldFlagsStatic,
        ::g::Fuse::IScalingMode_typeof(), (uintptr_t)&::g::Fuse::Elements::TranslationModes::SizeFactor_, uFieldFlagsStatic,
        ::g::Fuse::ITranslationMode_typeof(), (uintptr_t)&::g::Fuse::Elements::TranslationModes::TransformOriginOffset_, uFieldFlagsStatic);
    type->Reflection.SetFields(4,
        new uField("PositionOffset", 0),
        new uField("Size", 1),
        new uField("SizeFactor", 2),
        new uField("TransformOriginOffset", 3));
}

uClassType* TranslationModes_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 4;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Elements.TranslationModes", options);
    type->fp_build_ = TranslationModes_build;
    type->fp_cctor_ = TranslationModes__cctor__fn;
    return type;
}

uSStrong<uObject*> TranslationModes::PositionOffset_;
uSStrong<uObject*> TranslationModes::Size_;
uSStrong<uObject*> TranslationModes::SizeFactor_;
uSStrong<uObject*> TranslationModes::TransformOriginOffset_;
// }

// /Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Controls/1.0.2/$.uno
// ---------------------------------------------------------------------------------------

// public sealed class Viewport :573
// {
static void Viewport_build(uType* type)
{
    ::TYPES[3] = ::g::Fuse::IRenderViewport_typeof();
    ::TYPES[4] = ::g::Uno::Float2_typeof()->Array();
    ::TYPES[0] = ::g::Fuse::PlacedHandler_typeof();
    ::TYPES[61] = ::g::Fuse::IViewport_typeof();
    ::TYPES[62] = ::g::Fuse::PerspectiveFrustum_typeof();
    ::TYPES[63] = ::g::Fuse::IFrustum_typeof();
    ::TYPES[1] = ::g::Fuse::RootViewport_typeof();
    ::TYPES[56] = ::g::Fuse::ICommonViewport_typeof();
    ::TYPES[22] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL);
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(Viewport_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(Viewport_type, interface1),
        ::g::Fuse::IProperties_typeof(), offsetof(Viewport_type, interface2),
        ::g::Fuse::INotifyUnrooted_typeof(), offsetof(Viewport_type, interface3),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(Viewport_type, interface4),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(Viewport_type, interface5),
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL), offsetof(Viewport_type, interface6),
        ::g::Uno::UX::IPropertyListener_typeof(), offsetof(Viewport_type, interface7),
        ::TYPES[22/*Uno.Collections.ICollection<Fuse.Node>*/], offsetof(Viewport_type, interface8),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL), offsetof(Viewport_type, interface9),
        ::g::Fuse::Triggers::Actions::IShow_typeof(), offsetof(Viewport_type, interface10),
        ::g::Fuse::Triggers::Actions::IHide_typeof(), offsetof(Viewport_type, interface11),
        ::g::Fuse::Triggers::Actions::ICollapse_typeof(), offsetof(Viewport_type, interface12),
        ::g::Fuse::IActualPlacement_typeof(), offsetof(Viewport_type, interface13),
        ::g::Fuse::Animations::IResize_typeof(), offsetof(Viewport_type, interface14),
        ::TYPES[61/*Fuse.IViewport*/], offsetof(Viewport_type, interface15),
        ::TYPES[3/*Fuse.IRenderViewport*/], offsetof(Viewport_type, interface16),
        ::TYPES[56/*Fuse.ICommonViewport*/], offsetof(Viewport_type, interface17));
    type->SetFields(90,
        ::g::Uno::Graphics::PolygonFace_typeof(), offsetof(::g::Fuse::Elements::Viewport, _cullFace), 0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall_typeof(), offsetof(::g::Fuse::Elements::Viewport, _draw_bdff5d40), 0,
        ::TYPES[63/*Fuse.IFrustum*/], offsetof(::g::Fuse::Elements::Viewport, _frustum), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Elements::Viewport, _frustumDirty), 0,
        ::g::Fuse::FrustumViewport_typeof(), offsetof(::g::Fuse::Elements::Viewport, _frustumViewport), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Elements::Viewport, _hasCullFace), 0,
        ::g::Fuse::Elements::ViewportMode_typeof(), offsetof(::g::Fuse::Elements::Viewport, _mode), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Elements::Viewport, _perspective), 0,
        ::g::Fuse::Elements::PerspectiveRelativeToMode_typeof(), offsetof(::g::Fuse::Elements::Viewport, _perspectiveRelativeTo), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Elements::Viewport, _usePerspective), 0,
        ::g::Uno::Float4x4_typeof(), offsetof(::g::Fuse::Elements::Viewport, DrawWithChildren_LocalTransform_bdff5d40_4_9_2), 0,
        ::g::Uno::Float4x4_typeof(), offsetof(::g::Fuse::Elements::Viewport, DrawWithChildren_LocalTransform_bdff5d40_4_9_3), 0,
        ::g::Uno::Float4x4_typeof(), offsetof(::g::Fuse::Elements::Viewport, DrawWithChildren_LocalTransform_bdff5d40_4_9_4), 0,
        ::g::Uno::Graphics::VertexBuffer_typeof(), offsetof(::g::Fuse::Elements::Viewport, DrawWithChildren_VertexData_bdff5d40_7_2_1), 0);
    type->Reflection.SetFunctions(17,
        new uFunction("get_CullFace", NULL, (void*)Viewport__get_CullFace_fn, 0, false, ::g::Uno::Graphics::PolygonFace_typeof(), 0),
        new uFunction("set_CullFace", NULL, (void*)Viewport__set_CullFace_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Graphics::PolygonFace_typeof()),
        new uFunction("get_Mode", NULL, (void*)Viewport__get_Mode_fn, 0, false, ::g::Fuse::Elements::ViewportMode_typeof(), 0),
        new uFunction("set_Mode", NULL, (void*)Viewport__set_Mode_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Elements::ViewportMode_typeof()),
        new uFunction(".ctor", NULL, (void*)Viewport__New2_fn, 0, true, type, 0),
        new uFunction("get_Perspective", NULL, (void*)Viewport__get_Perspective_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("set_Perspective", NULL, (void*)Viewport__set_Perspective_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("get_PerspectiveRelativeTo", NULL, (void*)Viewport__get_PerspectiveRelativeTo_fn, 0, false, ::g::Fuse::Elements::PerspectiveRelativeToMode_typeof(), 0),
        new uFunction("set_PerspectiveRelativeTo", NULL, (void*)Viewport__set_PerspectiveRelativeTo_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Elements::PerspectiveRelativeToMode_typeof()),
        new uFunction("get_PixelSize", NULL, (void*)Viewport__get_PixelSize_fn, 0, false, ::g::Uno::Float2_typeof(), 0),
        new uFunction("get_PixelsPerPoint", NULL, (void*)Viewport__get_PixelsPerPoint_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("PointToWorldRay", NULL, (void*)Viewport__PointToWorldRay_fn, 0, false, ::g::Uno::Geometry::Ray_typeof(), 1, ::g::Uno::Float2_typeof()),
        new uFunction("get_RootVisual", NULL, (void*)Viewport__get_RootVisual_fn, 0, false, ::g::Fuse::Visual_typeof(), 0),
        new uFunction("set_RootVisual", NULL, (void*)Viewport__set_RootVisual_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Visual_typeof()),
        new uFunction("get_Size", NULL, (void*)Viewport__get_Size_fn, 0, false, ::g::Uno::Float2_typeof(), 0),
        new uFunction("get_ViewTransform", NULL, (void*)Viewport__get_ViewTransform_fn, 0, false, ::g::Uno::Float4x4_typeof(), 0),
        new uFunction("WorldToLocalRay", NULL, (void*)Viewport__WorldToLocalRay_fn, 0, false, ::g::Uno::Geometry::Ray_typeof(), 3, ::TYPES[61/*Fuse.IViewport*/], ::g::Uno::Geometry::Ray_typeof(), ::g::Fuse::Visual_typeof()));
}

Viewport_type* Viewport_typeof()
{
    static uSStrong<Viewport_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Elements::Element_typeof();
    options.FieldCount = 104;
    options.InterfaceCount = 18;
    options.ObjectSize = sizeof(Viewport);
    options.TypeSize = sizeof(Viewport_type);
    type = (Viewport_type*)uClassType::New("Fuse.Elements.Viewport", options);
    type->fp_build_ = Viewport_build;
    type->fp_ctor_ = (void*)Viewport__New2_fn;
    type->fp_ArrangePaddingBox = (void(*)(::g::Fuse::Elements::Element*, ::g::Fuse::LayoutParams*))Viewport__ArrangePaddingBox_fn;
    type->fp_CalcAreChildrenFlat = (void(*)(::g::Fuse::Visual*, bool*))Viewport__CalcAreChildrenFlat_fn;
    type->fp_CalcRenderBounds = (void(*)(::g::Fuse::Elements::Element*, ::g::Fuse::VisualBounds**))Viewport__CalcRenderBounds_fn;
    type->fp_DrawWithChildren = (void(*)(::g::Fuse::Elements::Element*, ::g::Fuse::DrawContext*))Viewport__DrawWithChildren_fn;
    type->fp_get_HitTestChildrenBounds = (void(*)(::g::Fuse::Visual*, ::g::Fuse::VisualBounds**))Viewport__get_HitTestChildrenBounds_fn;
    type->fp_get_HitTestTransform = (void(*)(::g::Fuse::Visual*, int*))Viewport__get_HitTestTransform_fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Node*))Viewport__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Node*))Viewport__OnUnrooted_fn;
    type->fp_get_ParentWorldTransformInternal = (void(*)(::g::Fuse::Visual*, ::g::Fuse::FastMatrix**))Viewport__get_ParentWorldTransformInternal_fn;
    type->interface16.fp_get_ProjectionTransform = (void(*)(uObject*, ::g::Uno::Float4x4*))Viewport__FuseIRenderViewportget_ProjectionTransform_fn;
    type->interface16.fp_get_ViewProjectionTransform = (void(*)(uObject*, ::g::Uno::Float4x4*))Viewport__FuseIRenderViewportget_ViewProjectionTransform_fn;
    type->interface16.fp_get_ViewOrigin = (void(*)(uObject*, ::g::Uno::Float3*))Viewport__FuseIRenderViewportget_ViewOrigin_fn;
    type->interface16.fp_get_ViewRange = (void(*)(uObject*, ::g::Uno::Float2*))Viewport__FuseIRenderViewportget_ViewRange_fn;
    type->interface15.fp_PointToWorldRay = (void(*)(uObject*, ::g::Uno::Float2*, ::g::Uno::Geometry::Ray*))Viewport__PointToWorldRay_fn;
    type->interface15.fp_WorldToLocalRay = (void(*)(uObject*, uObject*, ::g::Uno::Geometry::Ray*, ::g::Fuse::Visual*, ::g::Uno::Geometry::Ray*))Viewport__WorldToLocalRay_fn;
    type->interface17.fp_get_PixelsPerPoint = (void(*)(uObject*, float*))Viewport__get_PixelsPerPoint_fn;
    type->interface17.fp_get_Size = (void(*)(uObject*, ::g::Uno::Float2*))Viewport__get_Size_fn;
    type->interface17.fp_get_PixelSize = (void(*)(uObject*, ::g::Uno::Float2*))Viewport__get_PixelSize_fn;
    type->interface17.fp_get_ViewTransform = (void(*)(uObject*, ::g::Uno::Float4x4*))Viewport__get_ViewTransform_fn;
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
    type->interface7.fp_OnPropertyChanged = (void(*)(uObject*, ::g::Uno::UX::PropertyObject*, ::g::Uno::UX::Selector*))::g::Fuse::Visual__OnPropertyChanged2_fn;
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

// public generated Viewport() :573
void Viewport__ctor_4_fn(Viewport* __this)
{
    __this->ctor_4();
}

// protected override sealed void ArrangePaddingBox(Fuse.LayoutParams lp) :743
void Viewport__ArrangePaddingBox_fn(Viewport* __this, ::g::Fuse::LayoutParams* lp)
{
    uStackFrame __("Fuse.Elements.Viewport", "ArrangePaddingBox(Fuse.LayoutParams)");
    ::g::Fuse::LayoutParams lp_ = *lp;

    if (__this->RootVisual() == NULL)
        return;

    uPtr(__this->RootVisual())->ArrangeMarginBox(::g::Uno::Float2__New1(0.0f), lp_);
}

// internal override sealed bool CalcAreChildrenFlat() :863
void Viewport__CalcAreChildrenFlat_fn(Viewport* __this, bool* __retval)
{
    uStackFrame __("Fuse.Elements.Viewport", "CalcAreChildrenFlat()");
    bool ret2;
    return *__retval = __this->IsDisabled() ? (::g::Fuse::Visual__CalcAreChildrenFlat_fn(__this, &ret2), ret2) : true, void();
}

// protected override sealed Fuse.VisualBounds CalcRenderBounds() :845
void Viewport__CalcRenderBounds_fn(Viewport* __this, ::g::Fuse::VisualBounds** __retval)
{
    uStackFrame __("Fuse.Elements.Viewport", "CalcRenderBounds()");
    ::g::Fuse::VisualBounds* ret3;
    ::g::Fuse::VisualBounds* bb = (::g::Fuse::Elements::Element__CalcRenderBounds_fn(__this, &ret3), ret3);
    ::g::Fuse::VisualBounds* q = __this->ModifyBounds(bb);
    return *__retval = q, void();
}

// public Uno.Graphics.PolygonFace get_CullFace() :603
void Viewport__get_CullFace_fn(Viewport* __this, int* __retval)
{
    *__retval = __this->CullFace();
}

// public void set_CullFace(Uno.Graphics.PolygonFace value) :604
void Viewport__set_CullFace_fn(Viewport* __this, int* value)
{
    __this->CullFace(*value);
}

// protected override sealed void DrawWithChildren(Fuse.DrawContext dc) :769
void Viewport__DrawWithChildren_fn(Viewport* __this, ::g::Fuse::DrawContext* dc)
{
    uStackFrame __("Fuse.Elements.Viewport", "DrawWithChildren(Fuse.DrawContext)");

    if (__this->RootVisual() == NULL)
        return;

    if (__this->Mode() == 1)
    {
        uPtr(__this->RootVisual())->Draw(dc);
        return;
    }

    if (__this->HasCullFace())
        uPtr(dc)->PushCullFace(__this->CullFace());

    if (__this->Mode() == 2)
    {
        ::g::Uno::Float2 pxSize = __this->PixelSize();
        ::g::Uno::Graphics::Framebuffer* fb = ::g::Fuse::FramebufferPool::Lock1(::g::Uno::Int2__New2((int)pxSize.X, (int)pxSize.Y), 3, true);
        uPtr(dc)->PushRenderTargetViewport(fb, (uObject*)__this);
        dc->Clear(::g::Uno::Float4__New1(0.0f), 1.0f);
        uPtr(__this->RootVisual())->Draw(dc);
        dc->PopRenderTargetViewport();
        ::g::Uno::Float4x4 LocalTransform_bdff5d40_4_9_5 = ::g::Uno::Matrix::Mul10(__this->DrawWithChildren_LocalTransform_bdff5d40_4_9_2, ::g::Uno::Matrix::Scaling1(__this->ActualSize().X, __this->ActualSize().Y, 1.0f), __this->DrawWithChildren_LocalTransform_bdff5d40_4_9_3, __this->DrawWithChildren_LocalTransform_bdff5d40_4_9_4);
        __this->_draw_bdff5d40.BlendEnabled(true);
        __this->_draw_bdff5d40.DepthTestEnabled(false);
        __this->_draw_bdff5d40.CullFace(uPtr(dc)->CullFace());
        __this->_draw_bdff5d40.BlendSrcRgb(2);
        __this->_draw_bdff5d40.BlendDstRgb(3);
        __this->_draw_bdff5d40.BlendDstAlpha(3);
        __this->_draw_bdff5d40.Use();
        __this->_draw_bdff5d40.Attrib1(0, 2, __this->DrawWithChildren_VertexData_bdff5d40_7_2_1, 8, 0);
        __this->_draw_bdff5d40.Uniform12(1, ::g::Fuse::IRenderViewport::ViewProjectionTransform(uInterface(uPtr(dc->Viewport()), ::TYPES[3/*Fuse.IRenderViewport*/])));
        __this->_draw_bdff5d40.Uniform12(2, (__this != NULL) ? ::g::Uno::Matrix::Mul8(LocalTransform_bdff5d40_4_9_5, __this->WorldTransform()) : LocalTransform_bdff5d40_4_9_5);
        __this->_draw_bdff5d40.Sampler3(3, uPtr(fb)->ColorBuffer(), ::g::Uno::Graphics::SamplerState__LinearClamp());
        __this->_draw_bdff5d40.DrawArrays(6);
        ::g::Fuse::FramebufferPool::Release(fb);
    }
    else
    {
        if (__this->IsRoot())
            uPtr(dc)->PushViewport((uObject*)__this);
        else
        {
            ::g::Fuse::InheritViewport* local = ::g::Fuse::InheritViewport::New1(uPtr(dc)->Viewport(), __this->FrustumViewport(), __this);
            dc->PushViewport((uObject*)local);
        }

        uPtr(__this->RootVisual())->Draw(dc);
        uPtr(dc)->PopViewport();
    }

    if (__this->HasCullFace())
        uPtr(dc)->PopCullFace();
}

// private Fuse.IFrustum get_Frustum() :670
void Viewport__get_Frustum_fn(Viewport* __this, uObject** __retval)
{
    *__retval = __this->Frustum();
}

// private void set_Frustum(Fuse.IFrustum value) :671
void Viewport__set_Frustum_fn(Viewport* __this, uObject* value)
{
    __this->Frustum(value);
}

// private Fuse.FrustumViewport get_FrustumViewport() :636
void Viewport__get_FrustumViewport_fn(Viewport* __this, ::g::Fuse::FrustumViewport** __retval)
{
    *__retval = __this->FrustumViewport();
}

// public float4x4 Fuse.IRenderViewport.get_ProjectionTransform() :904
void Viewport__FuseIRenderViewportget_ProjectionTransform_fn(Viewport* __this, ::g::Uno::Float4x4* __retval)
{
    uStackFrame __("Fuse.Elements.Viewport", "Fuse.IRenderViewport.get_ProjectionTransform()");
    return *__retval = uPtr(__this->FrustumViewport())->ProjectionTransform, void();
}

// public float3 Fuse.IRenderViewport.get_ViewOrigin() :911
void Viewport__FuseIRenderViewportget_ViewOrigin_fn(Viewport* __this, ::g::Uno::Float3* __retval)
{
    uStackFrame __("Fuse.Elements.Viewport", "Fuse.IRenderViewport.get_ViewOrigin()");
    return *__retval = ::g::Fuse::IFrustum::GetWorldPosition(uInterface(uPtr(__this->Frustum()), ::TYPES[63/*Fuse.IFrustum*/]), (uObject*)__this), void();
}

// public float4x4 Fuse.IRenderViewport.get_ViewProjectionTransform() :908
void Viewport__FuseIRenderViewportget_ViewProjectionTransform_fn(Viewport* __this, ::g::Uno::Float4x4* __retval)
{
    uStackFrame __("Fuse.Elements.Viewport", "Fuse.IRenderViewport.get_ViewProjectionTransform()");
    return *__retval = uPtr(__this->FrustumViewport())->ViewProjectionTransform, void();
}

// public float2 Fuse.IRenderViewport.get_ViewRange() :912
void Viewport__FuseIRenderViewportget_ViewRange_fn(Viewport* __this, ::g::Uno::Float2* __retval)
{
    uStackFrame __("Fuse.Elements.Viewport", "Fuse.IRenderViewport.get_ViewRange()");
    return *__retval = ::g::Fuse::IFrustum::GetDepthRange(uInterface(uPtr(__this->Frustum()), ::TYPES[63/*Fuse.IFrustum*/]), (uObject*)__this), void();
}

// private bool get_HasCullFace() :612
void Viewport__get_HasCullFace_fn(Viewport* __this, bool* __retval)
{
    *__retval = __this->HasCullFace();
}

// protected override sealed Fuse.VisualBounds get_HitTestChildrenBounds() :854
void Viewport__get_HitTestChildrenBounds_fn(Viewport* __this, ::g::Fuse::VisualBounds** __retval)
{
    uStackFrame __("Fuse.Elements.Viewport", "get_HitTestChildrenBounds()");
    ::g::Fuse::VisualBounds* ret4;
    ::g::Fuse::VisualBounds* bb = (::g::Fuse::Elements::Element__get_HitTestChildrenBounds_fn(__this, &ret4), ret4);
    ::g::Fuse::VisualBounds* q = __this->ModifyBounds(bb);
    return *__retval = q, void();
}

// internal override sealed Fuse.Visual.HitTestTransformMode get_HitTestTransform() :870
void Viewport__get_HitTestTransform_fn(Viewport* __this, int* __retval)
{
    int ret5;
    return *__retval = __this->IsDisabled() ? (::g::Fuse::Visual__get_HitTestTransform_fn(__this, &ret5), ret5) : 1, void();
}

// private generated void init_DrawCalls() :573
void Viewport__init_DrawCalls_fn(Viewport* __this)
{
    __this->init_DrawCalls();
}

// private void InvalidateFrustum() :618
void Viewport__InvalidateFrustum_fn(Viewport* __this)
{
    __this->InvalidateFrustum();
}

// private bool get_IsDisabled() :881
void Viewport__get_IsDisabled_fn(Viewport* __this, bool* __retval)
{
    *__retval = __this->IsDisabled();
}

// private bool get_IsRoot() :616
void Viewport__get_IsRoot_fn(Viewport* __this, bool* __retval)
{
    *__retval = __this->IsRoot();
}

// public Fuse.Elements.ViewportMode get_Mode() :579
void Viewport__get_Mode_fn(Viewport* __this, int* __retval)
{
    *__retval = __this->Mode();
}

// public void set_Mode(Fuse.Elements.ViewportMode value) :580
void Viewport__set_Mode_fn(Viewport* __this, int* value)
{
    __this->Mode(*value);
}

// private Fuse.VisualBounds ModifyBounds(Fuse.VisualBounds vb) :824
void Viewport__ModifyBounds_fn(Viewport* __this, ::g::Fuse::VisualBounds* vb, ::g::Fuse::VisualBounds** __retval)
{
    *__retval = __this->ModifyBounds(vb);
}

// public generated Viewport New() :573
void Viewport__New2_fn(Viewport** __retval)
{
    *__retval = Viewport::New2();
}

// protected void OnPlaced(object s, object a) :763
void Viewport__OnPlaced_fn(Viewport* __this, uObject* s, uObject* a)
{
    __this->OnPlaced(s, a);
}

// protected override sealed void OnRooted() :751
void Viewport__OnRooted_fn(Viewport* __this)
{
    uStackFrame __("Fuse.Elements.Viewport", "OnRooted()");
    ::g::Fuse::Elements::Element__OnRooted_fn(__this);
    __this->add_Placed(uDelegate::New(::TYPES[0/*Fuse.PlacedHandler*/], (void*)Viewport__OnPlaced_fn, __this));
}

// protected override sealed void OnUnrooted() :757
void Viewport__OnUnrooted_fn(Viewport* __this)
{
    uStackFrame __("Fuse.Elements.Viewport", "OnUnrooted()");
    __this->remove_Placed(uDelegate::New(::TYPES[0/*Fuse.PlacedHandler*/], (void*)Viewport__OnPlaced_fn, __this));
    ::g::Fuse::Elements::Element__OnUnrooted_fn(__this);
}

// internal override sealed Fuse.FastMatrix get_ParentWorldTransformInternal() :878
void Viewport__get_ParentWorldTransformInternal_fn(Viewport* __this, ::g::Fuse::FastMatrix** __retval)
{
    ::g::Fuse::FastMatrix* ret6;
    return *__retval = __this->IsDisabled() ? (::g::Fuse::Visual__get_ParentWorldTransformInternal_fn(__this, &ret6), ret6) : (::g::Fuse::FastMatrix*)::g::Fuse::FastMatrix::Identity(), void();
}

// public float get_Perspective() :687
void Viewport__get_Perspective_fn(Viewport* __this, float* __retval)
{
    *__retval = __this->Perspective();
}

// public void set_Perspective(float value) :688
void Viewport__set_Perspective_fn(Viewport* __this, float* value)
{
    __this->Perspective(*value);
}

// public Fuse.Elements.PerspectiveRelativeToMode get_PerspectiveRelativeTo() :709
void Viewport__get_PerspectiveRelativeTo_fn(Viewport* __this, int* __retval)
{
    *__retval = __this->PerspectiveRelativeTo();
}

// public void set_PerspectiveRelativeTo(Fuse.Elements.PerspectiveRelativeToMode value) :710
void Viewport__set_PerspectiveRelativeTo_fn(Viewport* __this, int* value)
{
    __this->PerspectiveRelativeTo(*value);
}

// public float2 get_PixelSize() :894
void Viewport__get_PixelSize_fn(Viewport* __this, ::g::Uno::Float2* __retval)
{
    *__retval = __this->PixelSize();
}

// public float get_PixelsPerPoint() :886
void Viewport__get_PixelsPerPoint_fn(Viewport* __this, float* __retval)
{
    *__retval = __this->PixelsPerPoint();
}

// public Uno.Geometry.Ray PointToWorldRay(float2 pointPos) :915
void Viewport__PointToWorldRay_fn(Viewport* __this, ::g::Uno::Float2* pointPos, ::g::Uno::Geometry::Ray* __retval)
{
    *__retval = __this->PointToWorldRay(*pointPos);
}

// public Fuse.Visual get_RootVisual() :650
void Viewport__get_RootVisual_fn(Viewport* __this, ::g::Fuse::Visual** __retval)
{
    *__retval = __this->RootVisual();
}

// public void set_RootVisual(Fuse.Visual value) :655
void Viewport__set_RootVisual_fn(Viewport* __this, ::g::Fuse::Visual* value)
{
    __this->RootVisual(value);
}

// public float2 get_Size() :890
void Viewport__get_Size_fn(Viewport* __this, ::g::Uno::Float2* __retval)
{
    *__retval = __this->Size();
}

// private void UpdateFrustum() :626
void Viewport__UpdateFrustum_fn(Viewport* __this)
{
    __this->UpdateFrustum();
}

// private void UpdatePerspective() :720
void Viewport__UpdatePerspective_fn(Viewport* __this)
{
    __this->UpdatePerspective();
}

// public float4x4 get_ViewTransform() :898
void Viewport__get_ViewTransform_fn(Viewport* __this, ::g::Uno::Float4x4* __retval)
{
    *__retval = __this->ViewTransform();
}

// public Uno.Geometry.Ray WorldToLocalRay(Fuse.IViewport world, Uno.Geometry.Ray worldRay, Fuse.Visual where) :931
void Viewport__WorldToLocalRay_fn(Viewport* __this, uObject* world, ::g::Uno::Geometry::Ray* worldRay, ::g::Fuse::Visual* where, ::g::Uno::Geometry::Ray* __retval)
{
    *__retval = __this->WorldToLocalRay(world, *worldRay, where);
}

// public generated Viewport() [instance] :573
void Viewport::ctor_4()
{
    uStackFrame __("Fuse.Elements.Viewport", ".ctor()");
    _frustumDirty = true;
    _frustumViewport = ::g::Fuse::FrustumViewport::New1();
    _frustum = (uObject*)::g::Fuse::OrthographicFrustum::New1();
    ctor_3();
    init_DrawCalls();
}

// public Uno.Graphics.PolygonFace get_CullFace() [instance] :603
int Viewport::CullFace()
{
    return _cullFace;
}

// public void set_CullFace(Uno.Graphics.PolygonFace value) [instance] :604
void Viewport::CullFace(int value)
{
    uStackFrame __("Fuse.Elements.Viewport", "set_CullFace(Uno.Graphics.PolygonFace)");
    _cullFace = value;
    _hasCullFace = true;
    InvalidateVisual();
}

// private Fuse.IFrustum get_Frustum() [instance] :670
uObject* Viewport::Frustum()
{
    return _frustum;
}

// private void set_Frustum(Fuse.IFrustum value) [instance] :671
void Viewport::Frustum(uObject* value)
{
    uStackFrame __("Fuse.Elements.Viewport", "set_Frustum(Fuse.IFrustum)");
    _frustum = value;
    InvalidateFrustum();
}

// private Fuse.FrustumViewport get_FrustumViewport() [instance] :636
::g::Fuse::FrustumViewport* Viewport::FrustumViewport()
{
    uStackFrame __("Fuse.Elements.Viewport", "get_FrustumViewport()");

    if (_frustumDirty)
    {
        UpdateFrustum();
        _frustumDirty = false;
    }

    return _frustumViewport;
}

// private bool get_HasCullFace() [instance] :612
bool Viewport::HasCullFace()
{
    return _hasCullFace;
}

// private generated void init_DrawCalls() [instance] :573
void Viewport::init_DrawCalls()
{
    uStackFrame __("Fuse.Elements.Viewport", "init_DrawCalls()");
    DrawWithChildren_VertexData_bdff5d40_7_2_1 = ::g::Uno::Graphics::VertexBuffer::New2(::g::Uno::Runtime::Implementation::Internal::BufferConverters::ToBuffer3(uArray::Init< ::g::Uno::Float2>(::TYPES[4/*float2[]*/], 6, ::g::Uno::Float2__New2(0.0f, 0.0f), ::g::Uno::Float2__New2(0.0f, 1.0f), ::g::Uno::Float2__New2(1.0f, 1.0f), ::g::Uno::Float2__New2(0.0f, 0.0f), ::g::Uno::Float2__New2(1.0f, 1.0f), ::g::Uno::Float2__New2(1.0f, 0.0f))), 0);
    DrawWithChildren_LocalTransform_bdff5d40_4_9_2 = ::g::Uno::Matrix::Translation(-::g::Uno::Float2__New1(0.0f).X, -::g::Uno::Float2__New1(0.0f).Y, 0.0f);
    DrawWithChildren_LocalTransform_bdff5d40_4_9_3 = ::g::Uno::Matrix::RotationZ(0.0f);
    DrawWithChildren_LocalTransform_bdff5d40_4_9_4 = ::g::Uno::Matrix::Translation(::g::Uno::Float2__New1(0.0f).X, ::g::Uno::Float2__New1(0.0f).Y, 0.0f);
    _draw_bdff5d40 = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New1(::g::FuseControls_bundle::Viewportd3ce851b());
}

// private void InvalidateFrustum() [instance] :618
void Viewport::InvalidateFrustum()
{
    uStackFrame __("Fuse.Elements.Viewport", "InvalidateFrustum()");
    _frustumDirty = true;
    InvalidateLocalTransform();
}

// private bool get_IsDisabled() [instance] :881
bool Viewport::IsDisabled()
{
    return Mode() == 1;
}

// private bool get_IsRoot() [instance] :616
bool Viewport::IsRoot()
{
    return (Parent() == NULL) || uIs((::g::Fuse::Visual*)Parent(), ::TYPES[1/*Fuse.RootViewport*/]);
}

// public Fuse.Elements.ViewportMode get_Mode() [instance] :579
int Viewport::Mode()
{
    return _mode;
}

// public void set_Mode(Fuse.Elements.ViewportMode value) [instance] :580
void Viewport::Mode(int value)
{
    uStackFrame __("Fuse.Elements.Viewport", "set_Mode(Fuse.Elements.ViewportMode)");

    if (value == _mode)
        return;

    _mode = value;
    InvalidateFrustum();
}

// private Fuse.VisualBounds ModifyBounds(Fuse.VisualBounds vb) [instance] :824
::g::Fuse::VisualBounds* Viewport::ModifyBounds(::g::Fuse::VisualBounds* vb)
{
    uStackFrame __("Fuse.Elements.Viewport", "ModifyBounds(Fuse.VisualBounds)");
    ::g::Fuse::Visual* root = RootVisual();

    if ((IsDisabled() || (root == NULL)) || uPtr(root)->IsFlat())
        return vb;

    if (Mode() == 2)
        return uPtr(vb)->AddRect(::g::Uno::Float2__New1(0.0f), ActualSize());

    if (IsRoot())
        return uPtr(vb)->AddRect(::g::Uno::Float2__New1(0.0f), ActualSize());

    ::g::Uno::Float4x4 mx = uPtr(FrustumViewport())->GetFlatWorldToVisualTransform(ActualSize());
    ::g::Fuse::VisualBounds* q = uPtr(vb)->TransformFlatten(mx);
    return q;
}

// protected void OnPlaced(object s, object a) [instance] :763
void Viewport::OnPlaced(uObject* s, uObject* a)
{
    uStackFrame __("Fuse.Elements.Viewport", "OnPlaced(object,object)");
    UpdatePerspective();
    InvalidateFrustum();
}

// public float get_Perspective() [instance] :687
float Viewport::Perspective()
{
    return _perspective;
}

// public void set_Perspective(float value) [instance] :688
void Viewport::Perspective(float value)
{
    uStackFrame __("Fuse.Elements.Viewport", "set_Perspective(float)");

    if (value != _perspective)
    {
        _usePerspective = true;
        _perspective = value;
        UpdatePerspective();
    }
}

// public Fuse.Elements.PerspectiveRelativeToMode get_PerspectiveRelativeTo() [instance] :709
int Viewport::PerspectiveRelativeTo()
{
    return _perspectiveRelativeTo;
}

// public void set_PerspectiveRelativeTo(Fuse.Elements.PerspectiveRelativeToMode value) [instance] :710
void Viewport::PerspectiveRelativeTo(int value)
{
    uStackFrame __("Fuse.Elements.Viewport", "set_PerspectiveRelativeTo(Fuse.Elements.PerspectiveRelativeToMode)");

    if (value != _perspectiveRelativeTo)
    {
        _perspectiveRelativeTo = value;
        UpdatePerspective();
    }
}

// public float2 get_PixelSize() [instance] :894
::g::Uno::Float2 Viewport::PixelSize()
{
    uStackFrame __("Fuse.Elements.Viewport", "get_PixelSize()");
    return IsDisabled() ? ::g::Fuse::ICommonViewport::PixelSize(uInterface(uPtr(uPtr(Parent())->Viewport()), ::TYPES[56/*Fuse.ICommonViewport*/])) : ::g::Uno::Float2__op_Multiply1(ActualSize(), PixelsPerPoint());
}

// public float get_PixelsPerPoint() [instance] :886
float Viewport::PixelsPerPoint()
{
    uStackFrame __("Fuse.Elements.Viewport", "get_PixelsPerPoint()");
    return ::g::Fuse::ICommonViewport::PixelsPerPoint(uInterface(uPtr(uPtr(Parent())->Viewport()), ::TYPES[56/*Fuse.ICommonViewport*/]));
}

// public Uno.Geometry.Ray PointToWorldRay(float2 pointPos) [instance] :915
::g::Uno::Geometry::Ray Viewport::PointToWorldRay(::g::Uno::Float2 pointPos)
{
    uStackFrame __("Fuse.Elements.Viewport", "PointToWorldRay(float2)");

    if (IsDisabled())
        return ::g::Fuse::IViewport::PointToWorldRay(uInterface(uPtr(uPtr(Parent())->Viewport()), ::TYPES[61/*Fuse.IViewport*/]), pointPos);

    if (!IsRoot())
    {
        ::g::Uno::Geometry::Ray pr = ::g::Fuse::IViewport::PointToWorldRay(uInterface(uPtr(uPtr(Parent())->Viewport()), ::TYPES[61/*Fuse.IViewport*/]), pointPos);
        ::g::Uno::Geometry::Ray local = ::g::Fuse::IViewport::WorldToLocalRay(uInterface(uPtr(uPtr(Parent())->Viewport()), ::TYPES[61/*Fuse.IViewport*/]), uPtr(Parent())->Viewport(), pr, this);
        pointPos = ::g::Fuse::ViewportHelpers::LocalPlaneIntersection(local);
    }

    ::g::Uno::Geometry::Ray r = ::g::Fuse::ViewportHelpers::PointToWorldRay((uObject*)this, uPtr(FrustumViewport())->ViewProjectionTransformInverse, pointPos);
    return r;
}

// public Fuse.Visual get_RootVisual() [instance] :650
::g::Fuse::Visual* Viewport::RootVisual()
{
    uStackFrame __("Fuse.Elements.Viewport", "get_RootVisual()");

    if (!HasVisualChildren())
        return NULL;

    return GetZOrderChild(0);
}

// public void set_RootVisual(Fuse.Visual value) [instance] :655
void Viewport::RootVisual(::g::Fuse::Visual* value)
{
    uStackFrame __("Fuse.Elements.Viewport", "set_RootVisual(Fuse.Visual)");
    bool ret7;

    if (RootVisual() != value)
    {
        while (HasVisualChildren())
            ::g::Uno::Collections::ICollection::Remove_ex(uInterface(uPtr(Children()), ::TYPES[22/*Uno.Collections.ICollection<Fuse.Node>*/]), GetZOrderChild(0), &ret7);

        ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[22/*Uno.Collections.ICollection<Fuse.Node>*/]), value);
        InvalidateLayout(2);
    }
}

// public float2 get_Size() [instance] :890
::g::Uno::Float2 Viewport::Size()
{
    uStackFrame __("Fuse.Elements.Viewport", "get_Size()");
    return IsDisabled() ? ::g::Fuse::ICommonViewport::Size(uInterface(uPtr(uPtr(Parent())->Viewport()), ::TYPES[56/*Fuse.ICommonViewport*/])) : ActualSize();
}

// private void UpdateFrustum() [instance] :626
void Viewport::UpdateFrustum()
{
    uStackFrame __("Fuse.Elements.Viewport", "UpdateFrustum()");

    if (IsRoot())
        uPtr(_frustumViewport)->Update((uObject*)this, Frustum());
    else
        uPtr(_frustumViewport)->Update1((uObject*)this, Frustum(), this);
}

// private void UpdatePerspective() [instance] :720
void Viewport::UpdatePerspective()
{
    uStackFrame __("Fuse.Elements.Viewport", "UpdatePerspective()");

    if (!_usePerspective)
        return;

    ::g::Fuse::PerspectiveFrustum* pf = uAs< ::g::Fuse::PerspectiveFrustum*>(Frustum(), ::TYPES[62/*Fuse.PerspectiveFrustum*/]);

    if (pf == NULL)
    {
        pf = ::g::Fuse::PerspectiveFrustum::New1();
        Frustum((uObject*)pf);
    }

    float distance = 0.0f;

    switch (PerspectiveRelativeTo())
    {
        case 0:
        {
            distance = _perspective;
            break;
        }
        case 1:
        {
            distance = _perspective * ActualSize().X;
            break;
        }
        case 2:
        {
            distance = _perspective * ActualSize().Y;
            break;
        }
    }

    uPtr(pf)->Distance(distance);
    InvalidateFrustum();
}

// public float4x4 get_ViewTransform() [instance] :898
::g::Uno::Float4x4 Viewport::ViewTransform()
{
    uStackFrame __("Fuse.Elements.Viewport", "get_ViewTransform()");
    return IsDisabled() ? ::g::Fuse::ICommonViewport::ViewTransform(uInterface(uPtr(uPtr(Parent())->Viewport()), ::TYPES[56/*Fuse.ICommonViewport*/])) : uPtr(FrustumViewport())->ViewTransform;
}

// public Uno.Geometry.Ray WorldToLocalRay(Fuse.IViewport world, Uno.Geometry.Ray worldRay, Fuse.Visual where) [instance] :931
::g::Uno::Geometry::Ray Viewport::WorldToLocalRay(uObject* world, ::g::Uno::Geometry::Ray worldRay, ::g::Fuse::Visual* where)
{
    uStackFrame __("Fuse.Elements.Viewport", "WorldToLocalRay(Fuse.IViewport,Uno.Geometry.Ray,Fuse.Visual)");

    if (IsDisabled())
    {
        if (world == this)
            world = uPtr(Parent())->Viewport();

        return ::g::Fuse::IViewport::WorldToLocalRay(uInterface(uPtr(uPtr(Parent())->Viewport()), ::TYPES[61/*Fuse.IViewport*/]), world, worldRay, where);
    }

    return ::g::Fuse::ViewportHelpers::WorldToLocalRay((uObject*)this, world, worldRay, where);
}

// public generated Viewport New() [static] :573
Viewport* Viewport::New2()
{
    Viewport* obj1 = (Viewport*)uNew(Viewport_typeof());
    obj1->ctor_4();
    return obj1;
}
// }

// /Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Controls/1.0.2/$.uno
// ---------------------------------------------------------------------------------------

// public enum ViewportMode :537
uEnumType* ViewportMode_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Elements.ViewportMode", ::g::Uno::Int_typeof(), 3);
    type->SetLiterals(
        "Enabled", 0LL,
        "Disabled", 1LL,
        "RenderToTexture", 2LL);
    return type;
}

// /Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Elements/1.0.2/$.uno
// ---------------------------------------------------------------------------------------

// public enum Visibility :2871
uEnumType* Visibility_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Elements.Visibility", ::g::Uno::Int_typeof(), 3);
    type->SetLiterals(
        "Visible", 0LL,
        "Collapsed", 1LL,
        "Hidden", 2LL);
    return type;
}

// /Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Elements/1.0.2/$.uno
// ---------------------------------------------------------------------------------------

// private sealed extern class Element.VisualAppeared :2781
// {
static void Element__VisualAppeared_build(uType* type)
{
    ::TYPES[15] = ::g::Uno::Action_typeof();
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(Element__VisualAppeared_type, interface0));
    type->SetFields(0,
        ::g::Fuse::Elements::Element_typeof(), offsetof(::g::Fuse::Elements::Element__VisualAppeared, _element), 0,
        ::g::Uno::Action2_typeof()->MakeType(::g::Uno::Rect_typeof(), ::g::Uno::Float4x4_typeof(), NULL), offsetof(::g::Fuse::Elements::Element__VisualAppeared, _handler), 0);
}

Element__VisualAppeared_type* Element__VisualAppeared_typeof()
{
    static uSStrong<Element__VisualAppeared_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(Element__VisualAppeared);
    options.TypeSize = sizeof(Element__VisualAppeared_type);
    type = (Element__VisualAppeared_type*)uClassType::New("Fuse.Elements.Element.VisualAppeared", options);
    type->fp_build_ = Element__VisualAppeared_build;
    type->interface0.fp_Dispose = (void(*)(uObject*))Element__VisualAppeared__UnoIDisposableDispose_fn;
    return type;
}

// public VisualAppeared(Fuse.Elements.Element element, Uno.Action<Uno.Rect, float4x4> handler) :2787
void Element__VisualAppeared__ctor__fn(Element__VisualAppeared* __this, ::g::Fuse::Elements::Element* element, uDelegate* handler)
{
    __this->ctor_(element, handler);
}

// public VisualAppeared New(Fuse.Elements.Element element, Uno.Action<Uno.Rect, float4x4> handler) :2787
void Element__VisualAppeared__New1_fn(::g::Fuse::Elements::Element* element, uDelegate* handler, Element__VisualAppeared** __retval)
{
    *__retval = Element__VisualAppeared::New1(element, handler);
}

// private void OnRooted() :2796
void Element__VisualAppeared__OnRooted_fn(Element__VisualAppeared* __this)
{
    __this->OnRooted();
}

// private void Uno.IDisposable.Dispose() :2801
void Element__VisualAppeared__UnoIDisposableDispose_fn(Element__VisualAppeared* __this)
{
    uStackFrame __("Fuse.Elements.Element.VisualAppeared", "Uno.IDisposable.Dispose()");
    bool ret2;
    ::g::Uno::Collections::List__Remove_fn(uPtr(uPtr(__this->_element)->RootedListeners()), uDelegate::New(::TYPES[15/*Uno.Action*/], (void*)Element__VisualAppeared__OnRooted_fn, __this), &ret2);
    __this->_element = NULL;
    __this->_handler = NULL;
}

// public VisualAppeared(Fuse.Elements.Element element, Uno.Action<Uno.Rect, float4x4> handler) [instance] :2787
void Element__VisualAppeared::ctor_(::g::Fuse::Elements::Element* element, uDelegate* handler)
{
    uStackFrame __("Fuse.Elements.Element.VisualAppeared", ".ctor(Fuse.Elements.Element,Uno.Action<Uno.Rect, float4x4>)");
    _element = element;
    ::g::Uno::Collections::List__Add_fn(uPtr(uPtr(_element)->RootedListeners()), uDelegate::New(::TYPES[15/*Uno.Action*/], (void*)Element__VisualAppeared__OnRooted_fn, this));
    _handler = handler;

    if (uPtr(_element)->IsRootingCompleted())
        OnRooted();
}

// private void OnRooted() [instance] :2796
void Element__VisualAppeared::OnRooted()
{
    uStackFrame __("Fuse.Elements.Element.VisualAppeared", "OnRooted()");
    uPtr(_handler)->Invoke(2, uCRef(::g::Uno::Rect__New2(uPtr(_element)->ActualPosition(), uPtr(_element)->ActualSize())), uCRef(uPtr(_element)->WorldTransform()));
}

// public VisualAppeared New(Fuse.Elements.Element element, Uno.Action<Uno.Rect, float4x4> handler) [static] :2787
Element__VisualAppeared* Element__VisualAppeared::New1(::g::Fuse::Elements::Element* element, uDelegate* handler)
{
    Element__VisualAppeared* obj1 = (Element__VisualAppeared*)uNew(Element__VisualAppeared_typeof());
    obj1->ctor_(element, handler);
    return obj1;
}
// }

// /Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Elements/1.0.2/$.uno
// ---------------------------------------------------------------------------------------

// private sealed extern class Element.VisualDisappeared :2809
// {
static void Element__VisualDisappeared_build(uType* type)
{
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(Element__VisualDisappeared_type, interface0));
    type->SetFields(0,
        ::g::Fuse::Elements::Element_typeof(), offsetof(::g::Fuse::Elements::Element__VisualDisappeared, _element), 0,
        ::g::Uno::Action_typeof(), offsetof(::g::Fuse::Elements::Element__VisualDisappeared, _handler), 0);
}

Element__VisualDisappeared_type* Element__VisualDisappeared_typeof()
{
    static uSStrong<Element__VisualDisappeared_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(Element__VisualDisappeared);
    options.TypeSize = sizeof(Element__VisualDisappeared_type);
    type = (Element__VisualDisappeared_type*)uClassType::New("Fuse.Elements.Element.VisualDisappeared", options);
    type->fp_build_ = Element__VisualDisappeared_build;
    type->interface0.fp_Dispose = (void(*)(uObject*))Element__VisualDisappeared__UnoIDisposableDispose_fn;
    return type;
}

// public VisualDisappeared(Fuse.Elements.Element element, Uno.Action handler) :2815
void Element__VisualDisappeared__ctor__fn(Element__VisualDisappeared* __this, ::g::Fuse::Elements::Element* element, uDelegate* handler)
{
    __this->ctor_(element, handler);
}

// public VisualDisappeared New(Fuse.Elements.Element element, Uno.Action handler) :2815
void Element__VisualDisappeared__New1_fn(::g::Fuse::Elements::Element* element, uDelegate* handler, Element__VisualDisappeared** __retval)
{
    *__retval = Element__VisualDisappeared::New1(element, handler);
}

// private void Uno.IDisposable.Dispose() :2822
void Element__VisualDisappeared__UnoIDisposableDispose_fn(Element__VisualDisappeared* __this)
{
    uStackFrame __("Fuse.Elements.Element.VisualDisappeared", "Uno.IDisposable.Dispose()");
    bool ret2;
    ::g::Uno::Collections::List__Remove_fn(uPtr(uPtr(__this->_element)->UnrootedListeners()), __this->_handler, &ret2);
    __this->_element = NULL;
    __this->_handler = NULL;
}

// public VisualDisappeared(Fuse.Elements.Element element, Uno.Action handler) [instance] :2815
void Element__VisualDisappeared::ctor_(::g::Fuse::Elements::Element* element, uDelegate* handler)
{
    uStackFrame __("Fuse.Elements.Element.VisualDisappeared", ".ctor(Fuse.Elements.Element,Uno.Action)");
    _element = element;
    _handler = handler;
    ::g::Uno::Collections::List__Add_fn(uPtr(uPtr(_element)->UnrootedListeners()), _handler);
}

// public VisualDisappeared New(Fuse.Elements.Element element, Uno.Action handler) [static] :2815
Element__VisualDisappeared* Element__VisualDisappeared::New1(::g::Fuse::Elements::Element* element, uDelegate* handler)
{
    Element__VisualDisappeared* obj1 = (Element__VisualDisappeared*)uNew(Element__VisualDisappeared_typeof());
    obj1->ctor_(element, handler);
    return obj1;
}
// }

// /Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Elements/1.0.2/$.uno
// ---------------------------------------------------------------------------------------

// public sealed class WidthFunction :3702
// {
static void WidthFunction_build(uType* type)
{
    type->SetInterfaces(
        ::g::Fuse::Reactive::IExpression_typeof(), offsetof(::g::Fuse::Elements::LayoutFunction_type, interface0));
    type->SetFields(1);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)WidthFunction__New1_fn, 0, true, type, 1, ::g::Fuse::Reactive::Expression_typeof()));
}

::g::Fuse::Elements::LayoutFunction_type* WidthFunction_typeof()
{
    static uSStrong< ::g::Fuse::Elements::LayoutFunction_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Elements::LayoutFunction_typeof();
    options.FieldCount = 1;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(WidthFunction);
    options.TypeSize = sizeof(::g::Fuse::Elements::LayoutFunction_type);
    type = (::g::Fuse::Elements::LayoutFunction_type*)uClassType::New("Fuse.Elements.WidthFunction", options);
    type->fp_build_ = WidthFunction_build;
    type->fp_GetValue = (void(*)(::g::Fuse::Elements::LayoutFunction*, ::g::Fuse::PlacedArgs*, uObject**))WidthFunction__GetValue_fn;
    type->interface0.fp_Subscribe = (void(*)(uObject*, uObject*, uObject*, uObject**))::g::Fuse::Elements::LayoutFunction__Subscribe_fn;
    return type;
}

// public WidthFunction(Fuse.Reactive.Expression element) :3705
void WidthFunction__ctor_3_fn(WidthFunction* __this, ::g::Fuse::Reactive::Expression* element)
{
    __this->ctor_3(element);
}

// protected override sealed object GetValue(Fuse.PlacedArgs args) :3707
void WidthFunction__GetValue_fn(WidthFunction* __this, ::g::Fuse::PlacedArgs* args, uObject** __retval)
{
    uStackFrame __("Fuse.Elements.WidthFunction", "GetValue(Fuse.PlacedArgs)");
    return *__retval = uBox(::g::Uno::Float_typeof(), uPtr(args)->NewSize().X), void();
}

// public WidthFunction New(Fuse.Reactive.Expression element) :3705
void WidthFunction__New1_fn(::g::Fuse::Reactive::Expression* element, WidthFunction** __retval)
{
    *__retval = WidthFunction::New1(element);
}

// public WidthFunction(Fuse.Reactive.Expression element) [instance] :3705
void WidthFunction::ctor_3(::g::Fuse::Reactive::Expression* element)
{
    ctor_2(element);
}

// public WidthFunction New(Fuse.Reactive.Expression element) [static] :3705
WidthFunction* WidthFunction::New1(::g::Fuse::Reactive::Expression* element)
{
    WidthFunction* obj1 = (WidthFunction*)uNew(WidthFunction_typeof());
    obj1->ctor_3(element);
    return obj1;
}
// }

// /Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Elements/1.0.2/$.uno
// ---------------------------------------------------------------------------------------

// public sealed class XFunction :3726
// {
static void XFunction_build(uType* type)
{
    type->SetInterfaces(
        ::g::Fuse::Reactive::IExpression_typeof(), offsetof(::g::Fuse::Elements::LayoutFunction_type, interface0));
    type->SetFields(1);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)XFunction__New1_fn, 0, true, type, 1, ::g::Fuse::Reactive::Expression_typeof()));
}

::g::Fuse::Elements::LayoutFunction_type* XFunction_typeof()
{
    static uSStrong< ::g::Fuse::Elements::LayoutFunction_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Elements::LayoutFunction_typeof();
    options.FieldCount = 1;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(XFunction);
    options.TypeSize = sizeof(::g::Fuse::Elements::LayoutFunction_type);
    type = (::g::Fuse::Elements::LayoutFunction_type*)uClassType::New("Fuse.Elements.XFunction", options);
    type->fp_build_ = XFunction_build;
    type->fp_GetValue = (void(*)(::g::Fuse::Elements::LayoutFunction*, ::g::Fuse::PlacedArgs*, uObject**))XFunction__GetValue_fn;
    type->interface0.fp_Subscribe = (void(*)(uObject*, uObject*, uObject*, uObject**))::g::Fuse::Elements::LayoutFunction__Subscribe_fn;
    return type;
}

// public XFunction(Fuse.Reactive.Expression element) :3729
void XFunction__ctor_3_fn(XFunction* __this, ::g::Fuse::Reactive::Expression* element)
{
    __this->ctor_3(element);
}

// protected override sealed object GetValue(Fuse.PlacedArgs args) :3731
void XFunction__GetValue_fn(XFunction* __this, ::g::Fuse::PlacedArgs* args, uObject** __retval)
{
    uStackFrame __("Fuse.Elements.XFunction", "GetValue(Fuse.PlacedArgs)");
    return *__retval = uBox(::g::Uno::Float_typeof(), uPtr(args)->NewPosition().X), void();
}

// public XFunction New(Fuse.Reactive.Expression element) :3729
void XFunction__New1_fn(::g::Fuse::Reactive::Expression* element, XFunction** __retval)
{
    *__retval = XFunction::New1(element);
}

// public XFunction(Fuse.Reactive.Expression element) [instance] :3729
void XFunction::ctor_3(::g::Fuse::Reactive::Expression* element)
{
    ctor_2(element);
}

// public XFunction New(Fuse.Reactive.Expression element) [static] :3729
XFunction* XFunction::New1(::g::Fuse::Reactive::Expression* element)
{
    XFunction* obj1 = (XFunction*)uNew(XFunction_typeof());
    obj1->ctor_3(element);
    return obj1;
}
// }

// /Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Elements/1.0.2/$.uno
// ---------------------------------------------------------------------------------------

// public sealed class YFunction :3738
// {
static void YFunction_build(uType* type)
{
    type->SetInterfaces(
        ::g::Fuse::Reactive::IExpression_typeof(), offsetof(::g::Fuse::Elements::LayoutFunction_type, interface0));
    type->SetFields(1);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)YFunction__New1_fn, 0, true, type, 1, ::g::Fuse::Reactive::Expression_typeof()));
}

::g::Fuse::Elements::LayoutFunction_type* YFunction_typeof()
{
    static uSStrong< ::g::Fuse::Elements::LayoutFunction_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Elements::LayoutFunction_typeof();
    options.FieldCount = 1;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(YFunction);
    options.TypeSize = sizeof(::g::Fuse::Elements::LayoutFunction_type);
    type = (::g::Fuse::Elements::LayoutFunction_type*)uClassType::New("Fuse.Elements.YFunction", options);
    type->fp_build_ = YFunction_build;
    type->fp_GetValue = (void(*)(::g::Fuse::Elements::LayoutFunction*, ::g::Fuse::PlacedArgs*, uObject**))YFunction__GetValue_fn;
    type->interface0.fp_Subscribe = (void(*)(uObject*, uObject*, uObject*, uObject**))::g::Fuse::Elements::LayoutFunction__Subscribe_fn;
    return type;
}

// public YFunction(Fuse.Reactive.Expression element) :3741
void YFunction__ctor_3_fn(YFunction* __this, ::g::Fuse::Reactive::Expression* element)
{
    __this->ctor_3(element);
}

// protected override sealed object GetValue(Fuse.PlacedArgs args) :3743
void YFunction__GetValue_fn(YFunction* __this, ::g::Fuse::PlacedArgs* args, uObject** __retval)
{
    uStackFrame __("Fuse.Elements.YFunction", "GetValue(Fuse.PlacedArgs)");
    return *__retval = uBox(::g::Uno::Float_typeof(), uPtr(args)->NewPosition().Y), void();
}

// public YFunction New(Fuse.Reactive.Expression element) :3741
void YFunction__New1_fn(::g::Fuse::Reactive::Expression* element, YFunction** __retval)
{
    *__retval = YFunction::New1(element);
}

// public YFunction(Fuse.Reactive.Expression element) [instance] :3741
void YFunction::ctor_3(::g::Fuse::Reactive::Expression* element)
{
    ctor_2(element);
}

// public YFunction New(Fuse.Reactive.Expression element) [static] :3741
YFunction* YFunction::New1(::g::Fuse::Reactive::Expression* element)
{
    YFunction* obj1 = (YFunction*)uNew(YFunction_typeof());
    obj1->ctor_3(element);
    return obj1;
}
// }

}}} // ::g::Fuse::Elements
