// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Fuse.Diagnostics.h>
#include <Fuse.DrawContext.h>
#include <Fuse.Drawing.ResampleMode.h>
#include <Fuse.Elements.Alignment.h>
#include <Fuse.Elements.AlignmentHelpers.h>
#include <Fuse.Elements.StretchDirection.h>
#include <Fuse.Elements.StretchMode.h>
#include <Fuse.Elements.StretchSizing.h>
#include <Fuse.Internal.Blender-1.h>
#include <Fuse.Internal.BlenderMap.h>
#include <Fuse.Internal.Cache-2.h>
#include <Fuse.Internal.CacheItem-2.h>
#include <Fuse.Internal.CacheRef-2.h>
#include <Fuse.Internal.Curves.-1494dae5.h>
#include <Fuse.Internal.Curves.h>
#include <Fuse.Internal.DoubleBlender.h>
#include <Fuse.Internal.DrawManager.h>
#include <Fuse.Internal.Float2Blender.h>
#include <Fuse.Internal.Float3Blender.h>
#include <Fuse.Internal.Float4Blender.h>
#include <Fuse.Internal.FloatBlender.h>
#include <Fuse.Internal.FontFac-589fc2ef.h>
#include <Fuse.Internal.FrustumMatrix.h>
#include <Fuse.Internal.FuseConfig.h>
#include <Fuse.Internal.IImageC-c450902.h>
#include <Fuse.Internal.ImageContainer.h>
#include <Fuse.Internal.iOSSystemFont.h>
#include <Fuse.Internal.MiniLis-a9364139.h>
#include <Fuse.Internal.MiniList-1.h>
#include <Fuse.Internal.RectPacker.h>
#include <Fuse.Internal.ScalarBlender-1.h>
#include <Fuse.Internal.Size2Blender.h>
#include <Fuse.Internal.SizeBlender.h>
#include <Fuse.Internal.SizingContainer.h>
#include <Fuse.Internal.SkylineNode.h>
#include <Fuse.Internal.Statistics.h>
#include <Fuse.Internal.SystemFont.h>
#include <Fuse.Internal.VectorUtil.h>
#include <Fuse.LayoutParams.h>
#include <Fuse.Resources.FileImageSource.h>
#include <Fuse.Resources.HttpImageSource.h>
#include <Fuse.Resources.ImageS-355caaa1.h>
#include <Fuse.Resources.ImageS-a985306c.h>
#include <Fuse.Resources.ImageSource.h>
#include <Fuse.Resources.MemoryPolicy.h>
#include <Fuse.Resources.MultiD-7688643f.h>
#include <Fuse.SystemFont.Style.h>
#include <Fuse.SystemFont.Weight.h>
#include <Uno.Action-1.h>
#include <Uno.ArgumentNullException.h>
#include <Uno.ArgumentOutOfRang-6803b39e.h>
#include <Uno.Bool.h>
#include <Uno.Collections.Dictionary-2.h>
#include <Uno.Collections.Enume-8ddd045.h>
#include <Uno.Collections.HashSet-1.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IEnumerator.h>
#include <Uno.Collections.IEnumerator-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.Collections.Linke-712f9f5e.h>
#include <Uno.Collections.LinkedList-1.h>
#include <Uno.Collections.List-1.h>
#include <Uno.Collections.RootableList-1.h>
#include <Uno.Delegate.h>
#include <Uno.Double.h>
#include <Uno.EventArgs.h>
#include <Uno.EventHandler.h>
#include <Uno.Exception.h>
#include <Uno.Float.h>
#include <Uno.Float2.h>
#include <Uno.Float3.h>
#include <Uno.Float4.h>
#include <Uno.Float4x4.h>
#include <Uno.Func-2.h>
#include <Uno.Graphics.Texture2D.h>
#include <Uno.IndexOutOfRangeException.h>
#include <Uno.Int.h>
#include <Uno.Int2.h>
#include <Uno.Math.h>
#include <Uno.Matrix.h>
#include <Uno.Predicate-1.h>
#include <Uno.Recti.h>
#include <Uno.Runtime.Implement-eca777ec.h>
#include <Uno.String.h>
#include <Uno.Threading.Monitor.h>
#include <Uno.Type.h>
#include <Uno.UX.FileSource.h>
#include <Uno.UX.Size.h>
#include <Uno.UX.Size2.h>
#include <Uno.UX.Unit.h>
#include <Uno.Vector.h>
static uString* STRINGS[9];
static uType* TYPES[38];

namespace g{
namespace Fuse{
namespace Internal{

// /Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Common/1.0.2/internal/$.uno
// ----------------------------------------------------------------------------------------------

// internal abstract class Blender<T> :305
// {
static void Blender_build(uType* type)
{
    type->SetPrecalc(
        type->T(0));
}

Blender_type* Blender_typeof()
{
    static uSStrong<Blender_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.GenericCount = 1;
    options.PrecalcCount = 1;
    options.ObjectSize = sizeof(Blender);
    options.TypeSize = sizeof(Blender_type);
    type = (Blender_type*)uClassType::New("Fuse.Internal.Blender`1", options);
    type->fp_build_ = Blender_build;
    return type;
}

// protected generated Blender() :305
void Blender__ctor__fn(Blender* __this)
{
    __this->ctor_();
}

// public double Distance(T a, T b) :322
void Blender__Distance_fn(Blender* __this, void* a, void* b, double* __retval)
{
    uType* __types[] = {
        __this->__type->GetBase(Blender_typeof())->Precalced(0/*T*/),
    };
    uStackFrame __("Fuse.Internal.Blender`1", "Distance(T,T)");
    uT ret2(__types[0], U_ALLOCA(__types[0]->ValueSize));
    double ret1;
    return *__retval = (__this->Length_ex((__this->Sub_ex(a, b, &ret2), ret2), &ret1), ret1), void();
}

// public T ScalarMult(T v, double s) :328
void Blender__ScalarMult_fn(Blender* __this, void* v, double* s, uTRef __retval)
{
    uType* __types[] = {
        __this->__type->GetBase(Blender_typeof())->Precalced(0/*T*/),
    };
    uStackFrame __("Fuse.Internal.Blender`1", "ScalarMult(T,double)");
    uT ret3(__types[0], U_ALLOCA(__types[0]->ValueSize));
    double s_ = *s;
    return __retval.Store((__this->Weight_ex(v, uCRef(s_), &ret3), ret3)), void();
}

// public T UnitWeight(T v, double w) :316
void Blender__UnitWeight_fn(Blender* __this, void* v, double* w, uTRef __retval)
{
    uType* __types[] = {
        __this->__type->GetBase(Blender_typeof())->Precalced(0/*T*/),
    };
    uStackFrame __("Fuse.Internal.Blender`1", "UnitWeight(T,double)");
    uT ret4(__types[0], U_ALLOCA(__types[0]->ValueSize));
    uT ret5(__types[0], U_ALLOCA(__types[0]->ValueSize));
    uT unit(__types[0], U_ALLOCA(__types[0]->ValueSize));
    double w_ = *w;
    double l;
    unit = (__this->ToUnit_ex(v, &l, &ret4), ret4);
    return __retval.Store((__this->Weight_ex(unit, uCRef(w_), &ret5), ret5)), void();
}

// protected generated Blender() [instance] :305
void Blender::ctor_()
{
}
// }

// /Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Common/1.0.2/internal/$.uno
// ----------------------------------------------------------------------------------------------

// internal sealed class BlenderMap :252
// {
// static BlenderMap() :252
static void BlenderMap__cctor__fn(uType* __type)
{
    BlenderMap::_blenders_ = ((::g::Uno::Collections::Dictionary*)::g::Uno::Collections::Dictionary::New1(::TYPES[0/*Uno.Collections.Dictionary<Uno.Type, object>*/]));
    BlenderMap::_scalarBlenders_ = ((::g::Uno::Collections::Dictionary*)::g::Uno::Collections::Dictionary::New1(::TYPES[0/*Uno.Collections.Dictionary<Uno.Type, object>*/]));
}

static void BlenderMap_build(uType* type)
{
    ::STRINGS[0] = uString::Const("Unsupported blender type: ");
    ::TYPES[0] = ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Uno::Type_typeof(), uObject_typeof(), NULL);
    ::TYPES[1] = ::g::Uno::Type_typeof();
    ::TYPES[2] = ::g::Fuse::Internal::Blender_typeof();
    ::TYPES[3] = ::g::Fuse::Internal::ScalarBlender_typeof();
    type->MethodTypes[0]->SetPrecalc(
        ::TYPES[2/*Fuse.Internal.Blender`1*/]->MakeType(type->MethodTypes[0]->U(0), NULL));
    type->MethodTypes[1]->SetPrecalc(
        ::TYPES[3/*Fuse.Internal.ScalarBlender`1*/]->MakeType(type->MethodTypes[1]->U(0), NULL));
    type->SetFields(0,
        ::TYPES[0/*Uno.Collections.Dictionary<Uno.Type, object>*/], (uintptr_t)&::g::Fuse::Internal::BlenderMap::_blenders_, uFieldFlagsStatic,
        ::TYPES[0/*Uno.Collections.Dictionary<Uno.Type, object>*/], (uintptr_t)&::g::Fuse::Internal::BlenderMap::_scalarBlenders_, uFieldFlagsStatic);
}

uType* BlenderMap_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.MethodTypeCount = 2;
    options.ObjectSize = sizeof(BlenderMap);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Internal.BlenderMap", options);
    type->MethodTypes[0] = type->NewMethodType(1, 1);
    type->MethodTypes[1] = type->NewMethodType(1, 1);
    type->fp_build_ = BlenderMap_build;
    type->fp_ctor_ = (void*)BlenderMap__New1_fn;
    type->fp_cctor_ = BlenderMap__cctor__fn;
    return type;
}

// public generated BlenderMap() :252
void BlenderMap__ctor__fn(BlenderMap* __this)
{
    __this->ctor_();
}

// public static Fuse.Internal.Blender<T> Get<T>() :256
void BlenderMap__Get_fn(uType* __type, ::g::Fuse::Internal::Blender** __retval)
{
    *__retval = BlenderMap::Get(__type);
}

// public static Fuse.Internal.ScalarBlender<T> GetScalar<T>() :286
void BlenderMap__GetScalar_fn(uType* __type, ::g::Fuse::Internal::ScalarBlender** __retval)
{
    *__retval = BlenderMap::GetScalar(__type);
}

// public generated BlenderMap New() :252
void BlenderMap__New1_fn(BlenderMap** __retval)
{
    *__retval = BlenderMap::New1();
}

uSStrong< ::g::Uno::Collections::Dictionary*> BlenderMap::_blenders_;
uSStrong< ::g::Uno::Collections::Dictionary*> BlenderMap::_scalarBlenders_;

// public generated BlenderMap() [instance] :252
void BlenderMap::ctor_()
{
}

// public static Fuse.Internal.Blender<T> Get<T>() [static] :256
::g::Fuse::Internal::Blender* BlenderMap::Get(uType* __type)
{
    uType* __types[] = {
        __type->Precalced(0/*Fuse.Internal.Blender<T>*/),
    };
    uStackFrame __("Fuse.Internal.BlenderMap", "Get`1()");
    __type->Base->Init();
    bool ret2;
    uObject* blender;

    if (!(::g::Uno::Collections::Dictionary__TryGetValue_fn(uPtr(BlenderMap::_blenders()), __type->U(0), (void**)(&blender), &ret2), ret2))
    {
        if (::g::Uno::Type::op_Equality(__type->U(0), ::g::Uno::Float_typeof()))
            blender = ::g::Fuse::Internal::FloatBlender::New1();
        else if (::g::Uno::Type::op_Equality(__type->U(0), ::g::Uno::Float2_typeof()))
            blender = ::g::Fuse::Internal::Float2Blender::New1();
        else if (::g::Uno::Type::op_Equality(__type->U(0), ::g::Uno::Float3_typeof()))
            blender = ::g::Fuse::Internal::Float3Blender::New1();
        else if (::g::Uno::Type::op_Equality(__type->U(0), ::g::Uno::Float4_typeof()))
            blender = ::g::Fuse::Internal::Float4Blender::New1();
        else if (::g::Uno::Type::op_Equality(__type->U(0), ::g::Uno::Double_typeof()))
            blender = ::g::Fuse::Internal::DoubleBlender::New1();
        else if (::g::Uno::Type::op_Equality(__type->U(0), ::g::Uno::UX::Size_typeof()))
            blender = ::g::Fuse::Internal::SizeBlender::New1();
        else if (::g::Uno::Type::op_Equality(__type->U(0), ::g::Uno::UX::Size2_typeof()))
            blender = ::g::Fuse::Internal::Size2Blender::New1();
        else
            U_THROW(::g::Uno::Exception::New2(::g::Uno::String::op_Addition1(::STRINGS[0/*"Unsupported...*/], __type->U(0))));

        ::g::Uno::Collections::Dictionary__Add_fn(uPtr(BlenderMap::_blenders()), __type->U(0), blender);
    }

    return uCast< ::g::Fuse::Internal::Blender*>(blender, __types[0]);
}

// public static Fuse.Internal.ScalarBlender<T> GetScalar<T>() [static] :286
::g::Fuse::Internal::ScalarBlender* BlenderMap::GetScalar(uType* __type)
{
    uType* __types[] = {
        __type->Precalced(0/*Fuse.Internal.ScalarBlender<T>*/),
    };
    uStackFrame __("Fuse.Internal.BlenderMap", "GetScalar`1()");
    __type->Base->Init();
    bool ret3;
    uObject* blender;

    if (!(::g::Uno::Collections::Dictionary__TryGetValue_fn(uPtr(BlenderMap::_scalarBlenders()), __type->U(0), (void**)(&blender), &ret3), ret3))
    {
        if (::g::Uno::Type::op_Equality(__type->U(0), ::g::Uno::Float_typeof()))
            blender = ::g::Fuse::Internal::FloatBlender::New1();
        else if (::g::Uno::Type::op_Equality(__type->U(0), ::g::Uno::Double_typeof()))
            blender = ::g::Fuse::Internal::DoubleBlender::New1();
        else
            U_THROW(::g::Uno::Exception::New2(::g::Uno::String::op_Addition1(::STRINGS[0/*"Unsupported...*/], __type->U(0))));

        ::g::Uno::Collections::Dictionary__Add_fn(uPtr(BlenderMap::_scalarBlenders()), __type->U(0), blender);
    }

    return uCast< ::g::Fuse::Internal::ScalarBlender*>(blender, __types[0]);
}

// public generated BlenderMap New() [static] :252
BlenderMap* BlenderMap::New1()
{
    BlenderMap* obj1 = (BlenderMap*)uNew(BlenderMap_typeof());
    obj1->ctor_();
    return obj1;
}
// }

// /Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Common/1.0.2/internal/$.uno
// ----------------------------------------------------------------------------------------------

// public sealed class Cache<TKey, TValue> :473
// {
static void Cache_build(uType* type)
{
    ::TYPES[4] = ::g::Uno::Collections::LinkedList_typeof();
    ::TYPES[5] = ::g::Uno::Collections::Dictionary_typeof();
    ::TYPES[6] = ::g::Fuse::Internal::CacheRef_typeof();
    ::TYPES[7] = ::g::Fuse::Internal::CacheItem_typeof();
    type->SetPrecalc(
        ::g::Uno::Collections::LinkedList_typeof()->MakeType(::g::Fuse::Internal::CacheRef_typeof()->MakeType(type->T(0), type->T(1), NULL), NULL),
        ::g::Uno::Collections::Dictionary_typeof()->MakeType(type->T(0), ::g::Fuse::Internal::CacheRef_typeof()->MakeType(type->T(0), type->T(1), NULL), NULL),
        ::g::Fuse::Internal::CacheRef_typeof()->MakeType(type->T(0), type->T(1), NULL),
        ::g::Fuse::Internal::CacheItem_typeof()->MakeType(type->T(0), type->T(1), NULL));
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(Cache_type, interface0));
    type->SetFields(0,
        ::TYPES[5/*Uno.Collections.Dictionary`2*/]->MakeType(type->T(0), ::TYPES[6/*Fuse.Internal.CacheRef`2*/]->MakeType(type->T(0), type->T(1), NULL), NULL), offsetof(::g::Fuse::Internal::Cache, _dict), 0,
        ::g::Uno::Func1_typeof()->MakeType(type->T(0), type->T(1), NULL), offsetof(::g::Fuse::Internal::Cache, _factory), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::Internal::Cache, _maxUnused), 0,
        uObject_typeof(), offsetof(::g::Fuse::Internal::Cache, _mutex), 0,
        ::TYPES[4/*Uno.Collections.LinkedList`1*/]->MakeType(::TYPES[6/*Fuse.Internal.CacheRef`2*/]->MakeType(type->T(0), type->T(1), NULL), NULL), offsetof(::g::Fuse::Internal::Cache, _unused), 0);
    type->Reflection.SetFunctions(3,
        new uFunction("Dispose", NULL, (void*)Cache__Dispose_fn, 0, false, uVoid_typeof(), 0),
        new uFunction("Get", NULL, (void*)Cache__Get_fn, 0, false, ::TYPES[7/*Fuse.Internal.CacheItem`2*/]->MakeType(type->T(0), type->T(1), NULL), 1, type->T(0)),
        new uFunction(".ctor", type, (void*)Cache__New1_fn, 0, true, type, 2, ::g::Uno::Func1_typeof()->MakeType(type->T(0), type->T(1), NULL), ::g::Uno::Int_typeof()));
}

Cache_type* Cache_typeof()
{
    static uSStrong<Cache_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 5;
    options.GenericCount = 2;
    options.InterfaceCount = 1;
    options.PrecalcCount = 4;
    options.ObjectSize = sizeof(Cache);
    options.TypeSize = sizeof(Cache_type);
    type = (Cache_type*)uClassType::New("Fuse.Internal.Cache`2", options);
    type->fp_build_ = Cache_build;
    type->interface0.fp_Dispose = (void(*)(uObject*))Cache__Dispose_fn;
    return type;
}

// public Cache(Uno.Func<TKey, TValue> factory, [int maxUnused]) :481
void Cache__ctor__fn(Cache* __this, uDelegate* factory, int* maxUnused)
{
    __this->ctor_(factory, *maxUnused);
}

// public void Dispose() :545
void Cache__Dispose_fn(Cache* __this)
{
    __this->Dispose();
}

// public Fuse.Internal.CacheItem<TKey, TValue> Get(TKey key) :521
void Cache__Get_fn(Cache* __this, void* key, ::g::Fuse::Internal::CacheItem* __retval)
{
    uType* __types[] = {
        __this->__type->Precalced(2/*Fuse.Internal.CacheRef<TKey, TValue>*/),
        __this->__type->Precalced(3/*Fuse.Internal.CacheItem<TKey, TValue>*/),
    };
    uStackFrame __("Fuse.Internal.Cache`2", "Get(TKey)");
    bool ret2;
    ::g::Fuse::Internal::CacheRef* ret3;
    ::g::Uno::Threading::Monitor::Enter(__this->_mutex);

    {
        const auto __finally_fun = [&]()
        {
            ::g::Uno::Threading::Monitor::Exit(__this->_mutex);
        };

        const uFinally<decltype(__finally_fun)> __f(__finally_fun);
        ::g::Fuse::Internal::CacheRef* cacheRef;

        if ((::g::Uno::Collections::Dictionary__TryGetValue_fn(uPtr(__this->_dict), key, (void**)(&cacheRef), &ret2), ret2))
            uPtr(cacheRef)->Retain();
        else
        {
            cacheRef = (::g::Fuse::Internal::CacheRef__New1_fn(__types[0], __this, key, (uObject*)uPtr(__this->_factory)->Invoke(1, key), &ret3), ret3);
            ::g::Uno::Collections::Dictionary__Add_fn(uPtr(__this->_dict), key, cacheRef);
        }

        return *__retval = ::g::Fuse::Internal::CacheItem__New1(__types[1], cacheRef), void();
    }
}

// public Cache New(Uno.Func<TKey, TValue> factory, [int maxUnused]) :481
void Cache__New1_fn(uType* __type, uDelegate* factory, int* maxUnused, Cache** __retval)
{
    *__retval = Cache::New1(__type, factory, *maxUnused);
}

// private void RemoveUnused(Uno.Collections.LinkedListNode<Fuse.Internal.CacheRef<TKey, TValue>> node) :507
void Cache__RemoveUnused_fn(Cache* __this, ::g::Uno::Collections::LinkedListNode* node)
{
    __this->RemoveUnused(node);
}

// internal void SignalUnused(Fuse.Internal.CacheRef<TKey, TValue> cacheRef) :487
void Cache__SignalUnused_fn(Cache* __this, ::g::Fuse::Internal::CacheRef* cacheRef)
{
    __this->SignalUnused(cacheRef);
}

// internal void SignalUsed(Fuse.Internal.CacheRef<TKey, TValue> cacheRef) :498
void Cache__SignalUsed_fn(Cache* __this, ::g::Fuse::Internal::CacheRef* cacheRef)
{
    __this->SignalUsed(cacheRef);
}

// public Cache(Uno.Func<TKey, TValue> factory, [int maxUnused]) [instance] :481
void Cache::ctor_(uDelegate* factory, int maxUnused)
{
    uType* __types[] = {
        __type->Precalced(0/*Uno.Collections.LinkedList<Fuse.Internal.CacheRef<TKey, TValue>>*/),
        __type->Precalced(1/*Uno.Collections.Dictionary<TKey, Fuse.Internal.CacheRef<TKey, TValue>>*/),
    };
    _unused = ((::g::Uno::Collections::LinkedList*)::g::Uno::Collections::LinkedList::New1(__types[0]));
    _dict = ((::g::Uno::Collections::Dictionary*)::g::Uno::Collections::Dictionary::New1(__types[1]));
    _mutex = ::g::Uno::Object::New();
    _factory = factory;
    _maxUnused = maxUnused;
}

// public void Dispose() [instance] :545
void Cache::Dispose()
{
    uStackFrame __("Fuse.Internal.Cache`2", "Dispose()");
    ::g::Uno::Threading::Monitor::Enter(_mutex);

    {
        const auto __finally_fun = [&]()
        {
            ::g::Uno::Threading::Monitor::Exit(_mutex);
        };

        const uFinally<decltype(__finally_fun)> __f(__finally_fun);

        while (uPtr(_unused)->Count() > 0)
            RemoveUnused((::g::Uno::Collections::LinkedListNode*)uPtr(_unused)->First());

        _maxUnused = 0;
    }
}

// private void RemoveUnused(Uno.Collections.LinkedListNode<Fuse.Internal.CacheRef<TKey, TValue>> node) [instance] :507
void Cache::RemoveUnused(::g::Uno::Collections::LinkedListNode* node)
{
    uStackFrame __("Fuse.Internal.Cache`2", "RemoveUnused(Uno.Collections.LinkedListNode<Fuse.Internal.CacheRef<TKey, TValue>>)");
    ::g::Fuse::Internal::CacheRef* ret4;
    bool ret5;
    ::g::Fuse::Internal::CacheRef* value = (::g::Uno::Collections::LinkedListNode__get_Value_fn(uPtr(node), &ret4), ret4);
    uPtr(_unused)->Remove1(node);
    ::g::Uno::Collections::Dictionary__Remove_fn(uPtr(_dict), uPtr(value)->Key(), &ret5);
    value->Dispose();
}

// internal void SignalUnused(Fuse.Internal.CacheRef<TKey, TValue> cacheRef) [instance] :487
void Cache::SignalUnused(::g::Fuse::Internal::CacheRef* cacheRef)
{
    uStackFrame __("Fuse.Internal.Cache`2", "SignalUnused(Fuse.Internal.CacheRef<TKey, TValue>)");
    ::g::Uno::Collections::LinkedListNode* ret6;
    ::g::Uno::Threading::Monitor::Enter(_mutex);

    {
        const auto __finally_fun = [&]()
        {
            ::g::Uno::Threading::Monitor::Exit(_mutex);
        };

        const uFinally<decltype(__finally_fun)> __f(__finally_fun);
        uPtr(cacheRef)->_unusedListNode = (::g::Uno::Collections::LinkedList__AddLast_fn(uPtr(_unused), cacheRef, &ret6), ret6);

        if (uPtr(_unused)->Count() > _maxUnused)
            RemoveUnused((::g::Uno::Collections::LinkedListNode*)uPtr(_unused)->First());
    }
}

// internal void SignalUsed(Fuse.Internal.CacheRef<TKey, TValue> cacheRef) [instance] :498
void Cache::SignalUsed(::g::Fuse::Internal::CacheRef* cacheRef)
{
    uStackFrame __("Fuse.Internal.Cache`2", "SignalUsed(Fuse.Internal.CacheRef<TKey, TValue>)");
    ::g::Uno::Threading::Monitor::Enter(_mutex);

    {
        const auto __finally_fun = [&]()
        {
            ::g::Uno::Threading::Monitor::Exit(_mutex);
        };

        const uFinally<decltype(__finally_fun)> __f(__finally_fun);
        uPtr(_unused)->Remove1((::g::Uno::Collections::LinkedListNode*)uPtr(cacheRef)->_unusedListNode);
        cacheRef->_unusedListNode = NULL;
    }
}

// public Cache New(Uno.Func<TKey, TValue> factory, [int maxUnused]) [static] :481
Cache* Cache::New1(uType* __type, uDelegate* factory, int maxUnused)
{
    Cache* obj1 = (Cache*)uNew(__type);
    obj1->ctor_(factory, maxUnused);
    return obj1;
}
// }

// /Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Common/1.0.2/internal/$.uno
// ----------------------------------------------------------------------------------------------

// public struct CacheItem<TKey, TValue> :563
// {
// public void Dispose() [adapter] :583
static void CacheItem__Dispose_ex(uObject* __this)
{
    CacheItem__Dispose_fn((CacheItem*)((uint8_t*)__this + sizeof(uObject)), __this->__type);
}

static void CacheItem_build(uType* type)
{
    ::STRINGS[1] = uString::Const("Dangling CacheItem");
    ::TYPES[1] = ::g::Uno::Type_typeof();
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(CacheItem_type, interface0));
    type->SetFields(0,
        ::g::Fuse::Internal::CacheRef_typeof()->MakeType(type->T(0), type->T(1), NULL), offsetof(::g::Fuse::Internal::CacheItem, _cacheRef), 0);
    type->Reflection.SetFunctions(3,
        new uFunction("Dispose", type, (void*)CacheItem__Dispose_fn, 0, false, uVoid_typeof(), 0),
        new uFunction("get_Key", type, (void*)CacheItem__get_Key_fn, 0, false, type->T(0), 0),
        new uFunction("get_Value", type, (void*)CacheItem__get_Value_fn, 0, false, type->T(1), 0));
}

CacheItem_type* CacheItem_typeof()
{
    static uSStrong<CacheItem_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.GenericCount = 2;
    options.InterfaceCount = 1;
    options.ValueSize = sizeof(CacheItem);
    options.TypeSize = sizeof(CacheItem_type);
    type = (CacheItem_type*)uStructType::New("Fuse.Internal.CacheItem`2", options);
    type->fp_build_ = CacheItem_build;
    type->fp_Equals_struct = (void(*)(void*, uType*, uObject*, bool*))CacheItem__Equals_fn;
    type->fp_GetHashCode_struct = (void(*)(void*, uType*, int*))CacheItem__GetHashCode_fn;
    type->interface0.fp_Dispose = CacheItem__Dispose_ex;
    return type;
}

// internal CacheItem(Fuse.Internal.CacheRef<TKey, TValue> cacheRef) :567
void CacheItem__ctor__fn(CacheItem* __this, uType* __type, ::g::Fuse::Internal::CacheRef* cacheRef)
{
    __this->ctor_(__type, cacheRef);
}

// public void Dispose() :583
void CacheItem__Dispose_fn(CacheItem* __this, uType* __type)
{
    __this->Dispose(__type);
}

// public override sealed bool Equals(object o) :603
void CacheItem__Equals_fn(CacheItem* __this, uType* __type, uObject* o, bool* __retval)
{
    uStackFrame __("Fuse.Internal.CacheItem`2", "Equals(object)");
    return *__retval = ::g::Uno::Type::op_Equality(::g::Uno::Object::GetType(uPtr(o)), __type) ? CacheItem__op_Equality(__type, *__this, uUnbox<CacheItem>(__type, o)) : false, void();
}

// public override sealed int GetHashCode() :588
void CacheItem__GetHashCode_fn(CacheItem* __this, uType* __type, int* __retval)
{
    uStackFrame __("Fuse.Internal.CacheItem`2", "GetHashCode()");
    return *__retval = ::g::Uno::Object::GetHashCode(uPtr(__this->_cacheRef)), void();
}

// public TKey get_Key() :572
void CacheItem__get_Key_fn(CacheItem* __this, uType* __type, uTRef __retval)
{
    uStackFrame __("Fuse.Internal.CacheItem`2", "get_Key()");
    return __retval.Store(uPtr(__this->_cacheRef)->Key()), void();
}

// internal CacheItem New(Fuse.Internal.CacheRef<TKey, TValue> cacheRef) :567
void CacheItem__New1_fn(uType* __type, ::g::Fuse::Internal::CacheRef* cacheRef, CacheItem* __retval)
{
    *__retval = CacheItem__New1(__type, cacheRef);
}

// public static operator ==(Fuse.Internal.CacheItem<TKey, TValue> x, Fuse.Internal.CacheItem<TKey, TValue> y) :593
void CacheItem__op_Equality_fn(uType* __type, CacheItem* x, CacheItem* y, bool* __retval)
{
    *__retval = CacheItem__op_Equality(__type, *x, *y);
}

// public static operator !=(Fuse.Internal.CacheItem<TKey, TValue> x, Fuse.Internal.CacheItem<TKey, TValue> y) :598
void CacheItem__op_Inequality_fn(uType* __type, CacheItem* x, CacheItem* y, bool* __retval)
{
    *__retval = CacheItem__op_Inequality(__type, *x, *y);
}

// public TValue get_Value() :575
void CacheItem__get_Value_fn(CacheItem* __this, uType* __type, uObject** __retval)
{
    *__retval = __this->Value(__type);
}

// internal CacheItem(Fuse.Internal.CacheRef<TKey, TValue> cacheRef) [instance] :567
void CacheItem::ctor_(uType* __type, ::g::Fuse::Internal::CacheRef* cacheRef)
{
    _cacheRef = cacheRef;
}

// public void Dispose() [instance] :583
void CacheItem::Dispose(uType* __type)
{
    uStackFrame __("Fuse.Internal.CacheItem`2", "Dispose()");
    uPtr(_cacheRef)->Release();
}

// public TValue get_Value() [instance] :575
uObject* CacheItem::Value(uType* __type)
{
    uStackFrame __("Fuse.Internal.CacheItem`2", "get_Value()");

    if (uPtr(_cacheRef)->_refCount <= 0)
        U_THROW(::g::Uno::Exception::New2(::STRINGS[1/*"Dangling Ca...*/]));

    return (uObject*)uPtr(_cacheRef)->Value;
}

// internal CacheItem New(Fuse.Internal.CacheRef<TKey, TValue> cacheRef) [static] :567
CacheItem CacheItem__New1(uType* __type, ::g::Fuse::Internal::CacheRef* cacheRef)
{
    CacheItem obj1;
    obj1.ctor_(__type, cacheRef);
    return obj1;
}

// public static operator ==(Fuse.Internal.CacheItem<TKey, TValue> x, Fuse.Internal.CacheItem<TKey, TValue> y) [static] :593
bool CacheItem__op_Equality(uType* __type, CacheItem x, CacheItem y)
{
    return x._cacheRef == y._cacheRef;
}

// public static operator !=(Fuse.Internal.CacheItem<TKey, TValue> x, Fuse.Internal.CacheItem<TKey, TValue> y) [static] :598
bool CacheItem__op_Inequality(uType* __type, CacheItem x, CacheItem y)
{
    return x._cacheRef != y._cacheRef;
}
// }

// /Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Common/1.0.2/internal/$.uno
// ----------------------------------------------------------------------------------------------

// internal sealed class CacheRef<TKey, TValue> :611
// {
static void CacheRef_build(uType* type)
{
    ::TYPES[8] = ::g::Uno::IDisposable_typeof();
    type->SetInterfaces(
        ::TYPES[8/*Uno.IDisposable*/], offsetof(CacheRef_type, interface0));
    type->SetFields(0,
        ::g::Fuse::Internal::Cache_typeof()->MakeType(type->T(0), type->T(1), NULL), offsetof(::g::Fuse::Internal::CacheRef, _parent), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::Internal::CacheRef, _refCount), 0,
        uObject_typeof(), offsetof(::g::Fuse::Internal::CacheRef, _refCountMutex), 0,
        ::g::Uno::Collections::LinkedListNode_typeof()->MakeType(type, NULL), offsetof(::g::Fuse::Internal::CacheRef, _unusedListNode), 0,
        type->T(0), (uintptr_t)0, uFieldFlagsConstrained,
        type->T(1), offsetof(::g::Fuse::Internal::CacheRef, Value), 0);
}

CacheRef_type* CacheRef_typeof()
{
    static uSStrong<CacheRef_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 6;
    options.GenericCount = 2;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(CacheRef);
    options.TypeSize = sizeof(CacheRef_type);
    type = (CacheRef_type*)uClassType::New("Fuse.Internal.CacheRef`2", options);
    type->fp_build_ = CacheRef_build;
    type->interface0.fp_Dispose = (void(*)(uObject*))CacheRef__Dispose_fn;
    return type;
}

// internal CacheRef(Fuse.Internal.Cache<TKey, TValue> parent, TKey key, TValue value) :622
void CacheRef__ctor__fn(CacheRef* __this, ::g::Fuse::Internal::Cache* parent, void* key, uObject* value)
{
    __this->_refCountMutex = ::g::Uno::Object::New();
    __this->_parent = parent;
    __this->Key() = key;
    __this->Value = value;
    __this->_refCount = 1;
}

// public void Dispose() :630
void CacheRef__Dispose_fn(CacheRef* __this)
{
    __this->Dispose();
}

// internal CacheRef New(Fuse.Internal.Cache<TKey, TValue> parent, TKey key, TValue value) :622
void CacheRef__New1_fn(uType* __type, ::g::Fuse::Internal::Cache* parent, void* key, uObject* value, CacheRef** __retval)
{
    CacheRef* obj1 = (CacheRef*)uNew(__type);
    CacheRef__ctor__fn(obj1, parent, key, value);
    return *__retval = obj1, void();
}

// public void Release() :648
void CacheRef__Release_fn(CacheRef* __this)
{
    __this->Release();
}

// public void Retain() :636
void CacheRef__Retain_fn(CacheRef* __this)
{
    __this->Retain();
}

// public void Dispose() [instance] :630
void CacheRef::Dispose()
{
    uStackFrame __("Fuse.Internal.CacheRef`2", "Dispose()");
    _unusedListNode = NULL;
    ::g::Uno::IDisposable::Dispose(uInterface(uPtr(Value), ::TYPES[8/*Uno.IDisposable*/]));
}

// public void Release() [instance] :648
void CacheRef::Release()
{
    uStackFrame __("Fuse.Internal.CacheRef`2", "Release()");
    int refCountAfter = -1;
    ::g::Uno::Threading::Monitor::Enter(_refCountMutex);

    {
        const auto __finally_fun = [&]()
        {
            ::g::Uno::Threading::Monitor::Exit(_refCountMutex);
        };

        const uFinally<decltype(__finally_fun)> __f(__finally_fun);
        --_refCount;
        refCountAfter = _refCount;
    }

    if (refCountAfter == 0)
        uPtr(_parent)->SignalUnused(this);
}

// public void Retain() [instance] :636
void CacheRef::Retain()
{
    uStackFrame __("Fuse.Internal.CacheRef`2", "Retain()");
    int refCountBefore = -1;
    ::g::Uno::Threading::Monitor::Enter(_refCountMutex);

    {
        const auto __finally_fun = [&]()
        {
            ::g::Uno::Threading::Monitor::Exit(_refCountMutex);
        };

        const uFinally<decltype(__finally_fun)> __f(__finally_fun);
        refCountBefore = _refCount;
        ++_refCount;
    }

    if (refCountBefore == 0)
        uPtr(_parent)->SignalUsed(this);
}
// }

// /Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Common/1.0.2/internal/$.uno
// ----------------------------------------------------------------------------------------------

// internal static class Curves :853
// {
static void Curves_build(uType* type)
{
}

uClassType* Curves_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Internal.Curves", options);
    type->fp_build_ = Curves_build;
    return type;
}

// public static float2 CalcBezierAt(float2 p0, float2 p1, float2 p2, float2 p3, float t) :903
void Curves__CalcBezierAt_fn(::g::Uno::Float2* p0, ::g::Uno::Float2* p1, ::g::Uno::Float2* p2, ::g::Uno::Float2* p3, float* t, ::g::Uno::Float2* __retval)
{
    *__retval = Curves::CalcBezierAt(*p0, *p1, *p2, *p3, *t);
}

// public static float4 CubicHermitePoint(float4 p0, float4 p1, float4 m0, float4 m1, float t) :879
void Curves__CubicHermitePoint_fn(::g::Uno::Float4* p0, ::g::Uno::Float4* p1, ::g::Uno::Float4* m0, ::g::Uno::Float4* m1, float* t, ::g::Uno::Float4* __retval)
{
    *__retval = Curves::CubicHermitePoint(*p0, *p1, *m0, *m1, *t);
}

// public static void CubicHermiteToBezier(float4 p0, float4 p1, float4& t1, float4& t2) :897
void Curves__CubicHermiteToBezier_fn(::g::Uno::Float4* p0, ::g::Uno::Float4* p1, ::g::Uno::Float4* t1, ::g::Uno::Float4* t2)
{
    Curves::CubicHermiteToBezier(*p0, *p1, t1, t2);
}

// public static void KochanekBartelTangent(float4 pa, float4 pb, float4 pc, float4 pd, float tension, float bias, float continuity, float4& tangentIn, float4& tangentOut) :859
void Curves__KochanekBartelTangent_fn(::g::Uno::Float4* pa, ::g::Uno::Float4* pb, ::g::Uno::Float4* pc, ::g::Uno::Float4* pd, float* tension, float* bias, float* continuity, ::g::Uno::Float4* tangentIn, ::g::Uno::Float4* tangentOut)
{
    Curves::KochanekBartelTangent(*pa, *pb, *pc, *pd, *tension, *bias, *continuity, tangentIn, tangentOut);
}

// public static float4 LinearPoint(float4 p0, float4 p1, float4 m0, float4 m1, float t) :890
void Curves__LinearPoint_fn(::g::Uno::Float4* p0, ::g::Uno::Float4* p1, ::g::Uno::Float4* m0, ::g::Uno::Float4* m1, float* t, ::g::Uno::Float4* __retval)
{
    *__retval = Curves::LinearPoint(*p0, *p1, *m0, *m1, *t);
}

// public static float2 CalcBezierAt(float2 p0, float2 p1, float2 p2, float2 p3, float t) [static] :903
::g::Uno::Float2 Curves::CalcBezierAt(::g::Uno::Float2 p0, ::g::Uno::Float2 p1, ::g::Uno::Float2 p2, ::g::Uno::Float2 p3, float t)
{
    float t2 = t * t;
    float t3 = t2 * t;
    return ::g::Uno::Float2__op_Addition2(::g::Uno::Float2__op_Addition2(::g::Uno::Float2__op_Addition2(::g::Uno::Float2__op_Multiply(((1.0f - (3.0f * t)) + (3.0f * t2)) - t3, p0), ::g::Uno::Float2__op_Multiply(((3.0f * t) - (6.0f * t2)) + (3.0f * t3), p1)), ::g::Uno::Float2__op_Multiply((3.0f * t2) - (3.0f * t3), p2)), ::g::Uno::Float2__op_Multiply(t3, p3));
}

// public static float4 CubicHermitePoint(float4 p0, float4 p1, float4 m0, float4 m1, float t) [static] :879
::g::Uno::Float4 Curves::CubicHermitePoint(::g::Uno::Float4 p0, ::g::Uno::Float4 p1, ::g::Uno::Float4 m0, ::g::Uno::Float4 m1, float t)
{
    float t2 = t * t;
    float t3 = t2 * t;
    return ::g::Uno::Float4__op_Addition2(::g::Uno::Float4__op_Addition2(::g::Uno::Float4__op_Addition2(::g::Uno::Float4__op_Multiply(((2.0f * t3) - (3.0f * t2)) + 1.0f, p0), ::g::Uno::Float4__op_Multiply((t3 - (2.0f * t2)) + t, m0)), ::g::Uno::Float4__op_Multiply((-2.0f * t3) + (3.0f * t2), p1)), ::g::Uno::Float4__op_Multiply(t3 - t2, m1));
}

// public static void CubicHermiteToBezier(float4 p0, float4 p1, float4& t1, float4& t2) [static] :897
void Curves::CubicHermiteToBezier(::g::Uno::Float4 p0, ::g::Uno::Float4 p1, ::g::Uno::Float4* t1, ::g::Uno::Float4* t2)
{
    *t1 = ::g::Uno::Float4__op_Addition2(p0, ::g::Uno::Float4__op_Division1(*t1, 3.0f));
    *t2 = ::g::Uno::Float4__op_Subtraction2(p1, ::g::Uno::Float4__op_Division1(*t2, 3.0f));
}

// public static void KochanekBartelTangent(float4 pa, float4 pb, float4 pc, float4 pd, float tension, float bias, float continuity, float4& tangentIn, float4& tangentOut) [static] :859
void Curves::KochanekBartelTangent(::g::Uno::Float4 pa, ::g::Uno::Float4 pb, ::g::Uno::Float4 pc, ::g::Uno::Float4 pd, float tension, float bias, float continuity, ::g::Uno::Float4* tangentIn, ::g::Uno::Float4* tangentOut)
{
    float t = tension;
    float b = bias;
    float c = continuity;
    *tangentIn = ::g::Uno::Float4__op_Addition2(::g::Uno::Float4__op_Multiply((((1.0f - t) * (1.0f + b)) * (1.0f + c)) / 2.0f, ::g::Uno::Float4__op_Subtraction2(pb, pa)), ::g::Uno::Float4__op_Multiply((((1.0f - t) * (1.0f - b)) * (1.0f - c)) / 2.0f, ::g::Uno::Float4__op_Subtraction2(pc, pb)));
    *tangentOut = ::g::Uno::Float4__op_Addition2(::g::Uno::Float4__op_Multiply((((1.0f - t) * (1.0f + b)) * (1.0f - c)) / 2.0f, ::g::Uno::Float4__op_Subtraction2(pc, pb)), ::g::Uno::Float4__op_Multiply((((1.0f - t) * (1.0f - b)) * (1.0f + c)) / 2.0f, ::g::Uno::Float4__op_Subtraction2(pd, pc)));
}

// public static float4 LinearPoint(float4 p0, float4 p1, float4 m0, float4 m1, float t) [static] :890
::g::Uno::Float4 Curves::LinearPoint(::g::Uno::Float4 p0, ::g::Uno::Float4 p1, ::g::Uno::Float4 m0, ::g::Uno::Float4 m1, float t)
{
    return ::g::Uno::Float4__op_Addition2(p0, ::g::Uno::Float4__op_Multiply(t, ::g::Uno::Float4__op_Subtraction2(p1, p0)));
}
// }

// /Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Common/1.0.2/internal/$.uno
// ----------------------------------------------------------------------------------------------

// internal sealed class DoubleBlender :390
// {
static void DoubleBlender_build(uType* type)
{
    type->SetBase(::g::Fuse::Internal::ScalarBlender_typeof()->MakeType(::g::Uno::Double_typeof(), NULL));
}

::g::Fuse::Internal::ScalarBlender_type* DoubleBlender_typeof()
{
    static uSStrong< ::g::Fuse::Internal::ScalarBlender_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Internal::ScalarBlender_typeof();
    options.ObjectSize = sizeof(DoubleBlender);
    options.TypeSize = sizeof(::g::Fuse::Internal::ScalarBlender_type);
    type = (::g::Fuse::Internal::ScalarBlender_type*)uClassType::New("Fuse.Internal.DoubleBlender", options);
    type->fp_build_ = DoubleBlender_build;
    type->fp_ctor_ = (void*)DoubleBlender__New1_fn;
    type->fp_Add = (void(*)(::g::Fuse::Internal::Blender*, void*, void*, uTRef))DoubleBlender__Add_fn;
    type->fp_FromDouble = (void(*)(::g::Fuse::Internal::ScalarBlender*, double*, uTRef))DoubleBlender__FromDouble_fn;
    type->fp_Length = (void(*)(::g::Fuse::Internal::Blender*, void*, double*))DoubleBlender__Length_fn;
    type->fp_Lerp = (void(*)(::g::Fuse::Internal::Blender*, void*, void*, double*, uTRef))DoubleBlender__Lerp_fn;
    type->fp_get_One = (void(*)(::g::Fuse::Internal::Blender*, uTRef))DoubleBlender__get_One_fn;
    type->fp_Sub = (void(*)(::g::Fuse::Internal::Blender*, void*, void*, uTRef))DoubleBlender__Sub_fn;
    type->fp_ToDouble = (void(*)(::g::Fuse::Internal::ScalarBlender*, void*, double*))DoubleBlender__ToDouble_fn;
    type->fp_ToUnit = (void(*)(::g::Fuse::Internal::Blender*, void*, double*, uTRef))DoubleBlender__ToUnit_fn;
    type->fp_Weight = (void(*)(::g::Fuse::Internal::Blender*, void*, double*, uTRef))DoubleBlender__Weight_fn;
    type->fp_get_Zero = (void(*)(::g::Fuse::Internal::Blender*, uTRef))DoubleBlender__get_Zero_fn;
    return type;
}

// public generated DoubleBlender() :390
void DoubleBlender__ctor_2_fn(DoubleBlender* __this)
{
    __this->ctor_2();
}

// public override sealed double Add(double a, double b) :393
void DoubleBlender__Add_fn(DoubleBlender* __this, double* a, double* b, double* __retval)
{
    double a_ = *a;
    double b_ = *b;
    return *__retval = a_ + b_, void();
}

// public override sealed double FromDouble(double a) :405
void DoubleBlender__FromDouble_fn(DoubleBlender* __this, double* a, double* __retval)
{
    double a_ = *a;
    return *__retval = a_, void();
}

// public override sealed double Length(double a) :403
void DoubleBlender__Length_fn(DoubleBlender* __this, double* a, double* __retval)
{
    double a_ = *a;
    return *__retval = ::g::Uno::Math::Abs(a_), void();
}

// public override sealed double Lerp(double a, double b, double d) :395
void DoubleBlender__Lerp_fn(DoubleBlender* __this, double* a, double* b, double* d, double* __retval)
{
    double a_ = *a;
    double b_ = *b;
    double d_ = *d;
    return *__retval = a_ + ((b_ - a_) * d_), void();
}

// public generated DoubleBlender New() :390
void DoubleBlender__New1_fn(DoubleBlender** __retval)
{
    *__retval = DoubleBlender::New1();
}

// public override sealed double get_One() :397
void DoubleBlender__get_One_fn(DoubleBlender* __this, double* __retval)
{
    return *__retval = 1.0, void();
}

// public override sealed double Sub(double a, double b) :394
void DoubleBlender__Sub_fn(DoubleBlender* __this, double* a, double* b, double* __retval)
{
    double a_ = *a;
    double b_ = *b;
    return *__retval = a_ - b_, void();
}

// public override sealed double ToDouble(double a) :404
void DoubleBlender__ToDouble_fn(DoubleBlender* __this, double* a, double* __retval)
{
    double a_ = *a;
    return *__retval = a_, void();
}

// public override sealed double ToUnit(double a, double& length) :398
void DoubleBlender__ToUnit_fn(DoubleBlender* __this, double* a, double* length, double* __retval)
{
    double a_ = *a;
    *length = ::g::Uno::Math::Abs(a_);
    return *__retval = (double)((a_ < 0.0) ? -1 : 1), void();
}

// public override sealed double Weight(double v, double w) :392
void DoubleBlender__Weight_fn(DoubleBlender* __this, double* v, double* w, double* __retval)
{
    double v_ = *v;
    double w_ = *w;
    return *__retval = v_ * w_, void();
}

// public override sealed double get_Zero() :396
void DoubleBlender__get_Zero_fn(DoubleBlender* __this, double* __retval)
{
    return *__retval = 0.0, void();
}

// public generated DoubleBlender() [instance] :390
void DoubleBlender::ctor_2()
{
    ctor_1();
}

// public generated DoubleBlender New() [static] :390
DoubleBlender* DoubleBlender::New1()
{
    DoubleBlender* obj1 = (DoubleBlender*)uNew(DoubleBlender_typeof());
    obj1->ctor_2();
    return obj1;
}
// }

// /Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Nodes/1.0.2/$.uno
// ------------------------------------------------------------------------------------

// internal static class DrawManager :886
// {
static void DrawManager_build(uType* type)
{
    ::TYPES[9] = ::g::Uno::Action1_typeof()->MakeType(::g::Fuse::DrawContext_typeof(), NULL);
    type->SetFields(0,
        ::TYPES[9/*Uno.Action<Fuse.DrawContext>*/], (uintptr_t)&::g::Fuse::Internal::DrawManager::Prepared1_, uFieldFlagsStatic);
}

uClassType* DrawManager_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Internal.DrawManager", options);
    type->fp_build_ = DrawManager_build;
    return type;
}

// public static void EndDraw(Fuse.DrawContext dc) :899
void DrawManager__EndDraw_fn(::g::Fuse::DrawContext* dc)
{
    DrawManager::EndDraw(dc);
}

// public static generated void add_Prepared(Uno.Action<Fuse.DrawContext> value) :888
void DrawManager__add_Prepared_fn(uDelegate* value)
{
    DrawManager::add_Prepared(value);
}

// public static generated void remove_Prepared(Uno.Action<Fuse.DrawContext> value) :888
void DrawManager__remove_Prepared_fn(uDelegate* value)
{
    DrawManager::remove_Prepared(value);
}

// public static void PrepareDraw(Fuse.DrawContext dc) :890
void DrawManager__PrepareDraw_fn(::g::Fuse::DrawContext* dc)
{
    DrawManager::PrepareDraw(dc);
}

uSStrong<uDelegate*> DrawManager::Prepared1_;

// public static void EndDraw(Fuse.DrawContext dc) [static] :899
void DrawManager::EndDraw(::g::Fuse::DrawContext* dc)
{
    uStackFrame __("Fuse.Internal.DrawManager", "EndDraw(Fuse.DrawContext)");
    uPtr(dc)->OnRenderTargetChange();
    dc->ReleaseRootbuffer();
}

// public static void PrepareDraw(Fuse.DrawContext dc) [static] :890
void DrawManager::PrepareDraw(::g::Fuse::DrawContext* dc)
{
    uStackFrame __("Fuse.Internal.DrawManager", "PrepareDraw(Fuse.DrawContext)");
    uPtr(dc)->CaptureRootbuffer();
    uDelegate* p = DrawManager::Prepared1_;

    if (::g::Uno::Delegate::op_Inequality(p, NULL))
        uPtr(p)->InvokeVoid(dc);
}

// public static generated void add_Prepared(Uno.Action<Fuse.DrawContext> value) [static] :888
void DrawManager::add_Prepared(uDelegate* value)
{
    uStackFrame __("Fuse.Internal.DrawManager", "add_Prepared(Uno.Action<Fuse.DrawContext>)");
    DrawManager::Prepared1_ = uCast<uDelegate*>(::g::Uno::Delegate::Combine(DrawManager::Prepared1_, value), ::TYPES[9/*Uno.Action<Fuse.DrawContext>*/]);
}

// public static generated void remove_Prepared(Uno.Action<Fuse.DrawContext> value) [static] :888
void DrawManager::remove_Prepared(uDelegate* value)
{
    uStackFrame __("Fuse.Internal.DrawManager", "remove_Prepared(Uno.Action<Fuse.DrawContext>)");
    DrawManager::Prepared1_ = uCast<uDelegate*>(::g::Uno::Delegate::Remove(DrawManager::Prepared1_, value), ::TYPES[9/*Uno.Action<Fuse.DrawContext>*/]);
}
// }

// /Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Common/1.0.2/internal/$.uno
// ----------------------------------------------------------------------------------------------

// private struct MiniList<T>.Enumerator<T> :1624
// {
// public T get_Current() [adapter] :1640
static void MiniList__Enumerator__get_Current_ex(uObject* __this, uObject** __retval)
{
    MiniList__Enumerator__get_Current_fn((MiniList__Enumerator*)((uint8_t*)__this + sizeof(uObject)), __this->__type, __retval);
}

// public void Dispose() [adapter] :1647
static void MiniList__Enumerator__Dispose_ex(uObject* __this)
{
    MiniList__Enumerator__Dispose_fn((MiniList__Enumerator*)((uint8_t*)__this + sizeof(uObject)), __this->__type);
}

// public void Reset() [adapter] :1642
static void MiniList__Enumerator__Reset_ex(uObject* __this)
{
    MiniList__Enumerator__Reset_fn((MiniList__Enumerator*)((uint8_t*)__this + sizeof(uObject)), __this->__type);
}

// public bool MoveNext() [adapter] :1635
static void MiniList__Enumerator__MoveNext_ex(uObject* __this, bool* __retval)
{
    MiniList__Enumerator__MoveNext_fn((MiniList__Enumerator*)((uint8_t*)__this + sizeof(uObject)), __this->__type, __retval);
}

static void MiniList__Enumerator_build(uType* type)
{
    ::TYPES[10] = ::g::Fuse::Internal::MiniList_typeof();
    type->SetPrecalc(
        ::g::Fuse::Internal::MiniList_typeof()->MakeType(type->T(1), NULL));
    type->SetInterfaces(
        ::g::Uno::Collections::IEnumerator1_typeof()->MakeType(type->T(1), NULL), offsetof(MiniList__Enumerator_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(MiniList__Enumerator_type, interface1),
        ::g::Uno::Collections::IEnumerator_typeof(), offsetof(MiniList__Enumerator_type, interface2));
    type->SetFields(0,
        ::TYPES[10/*Fuse.Internal.MiniList`1*/]->MakeType(type->T(1), NULL), offsetof(::g::Fuse::Internal::MiniList__Enumerator, _source), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::Internal::MiniList__Enumerator, _index), 0);
}

MiniList__Enumerator_type* MiniList__Enumerator_typeof()
{
    static uSStrong<MiniList__Enumerator_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.GenericCount = 2;
    options.InterfaceCount = 3;
    options.PrecalcCount = 1;
    options.ValueSize = sizeof(MiniList__Enumerator);
    options.TypeSize = sizeof(MiniList__Enumerator_type);
    type = (MiniList__Enumerator_type*)uStructType::New("Fuse.Internal.MiniList`1.Enumerator`1", options);
    type->fp_build_ = MiniList__Enumerator_build;
    type->interface0.fp_get_Current = (void(*)(uObject*, uTRef))MiniList__Enumerator__get_Current_ex;
    type->interface1.fp_Dispose = MiniList__Enumerator__Dispose_ex;
    type->interface2.fp_Reset = MiniList__Enumerator__Reset_ex;
    type->interface2.fp_MoveNext = MiniList__Enumerator__MoveNext_ex;
    return type;
}

// public Enumerator(Fuse.Internal.MiniList<T> source) :1629
void MiniList__Enumerator__ctor__fn(MiniList__Enumerator* __this, uType* __type, ::g::Fuse::Internal::MiniList* source)
{
    __this->ctor_(__type, *source);
}

// public T get_Current() :1640
void MiniList__Enumerator__get_Current_fn(MiniList__Enumerator* __this, uType* __type, uObject** __retval)
{
    *__retval = __this->Current(__type);
}

// public void Dispose() :1647
void MiniList__Enumerator__Dispose_fn(MiniList__Enumerator* __this, uType* __type)
{
    __this->Dispose(__type);
}

// public bool MoveNext() :1635
void MiniList__Enumerator__MoveNext_fn(MiniList__Enumerator* __this, uType* __type, bool* __retval)
{
    *__retval = __this->MoveNext(__type);
}

// public Enumerator New(Fuse.Internal.MiniList<T> source) :1629
void MiniList__Enumerator__New1_fn(uType* __type, ::g::Fuse::Internal::MiniList* source, MiniList__Enumerator* __retval)
{
    *__retval = MiniList__Enumerator__New1(__type, *source);
}

// public void Reset() :1642
void MiniList__Enumerator__Reset_fn(MiniList__Enumerator* __this, uType* __type)
{
    __this->Reset(__type);
}

// public Enumerator(Fuse.Internal.MiniList<T> source) [instance] :1629
void MiniList__Enumerator::ctor_(uType* __type, ::g::Fuse::Internal::MiniList source)
{
    _source = source;
    _index = -1;
}

// public T get_Current() [instance] :1640
uObject* MiniList__Enumerator::Current(uType* __type)
{
    uType* __types[] = {
        __type->Precalced(0/*Fuse.Internal.MiniList<T>*/),
    };
    uStackFrame __("Fuse.Internal.MiniList`1.Enumerator`1", "get_Current()");
    return (uObject*)_source.Item(__types[0], _index);
}

// public void Dispose() [instance] :1647
void MiniList__Enumerator::Dispose(uType* __type)
{
}

// public bool MoveNext() [instance] :1635
bool MiniList__Enumerator::MoveNext(uType* __type)
{
    uType* __types[] = {
        __type->Precalced(0/*Fuse.Internal.MiniList<T>*/),
    };
    uStackFrame __("Fuse.Internal.MiniList`1.Enumerator`1", "MoveNext()");
    return (++_index) < _source.Count(__types[0]);
}

// public void Reset() [instance] :1642
void MiniList__Enumerator::Reset(uType* __type)
{
    _index = -1;
}

// public Enumerator New(Fuse.Internal.MiniList<T> source) [static] :1629
MiniList__Enumerator MiniList__Enumerator__New1(uType* __type, ::g::Fuse::Internal::MiniList source)
{
    MiniList__Enumerator obj1;
    obj1.ctor_(__type, source);
    return obj1;
}
// }

// /Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Common/1.0.2/internal/$.uno
// ----------------------------------------------------------------------------------------------

// internal sealed class Float2Blender :408
// {
static void Float2Blender_build(uType* type)
{
    type->SetBase(::g::Fuse::Internal::Blender_typeof()->MakeType(::g::Uno::Float2_typeof(), NULL));
}

::g::Fuse::Internal::Blender_type* Float2Blender_typeof()
{
    static uSStrong< ::g::Fuse::Internal::Blender_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Internal::Blender_typeof();
    options.ObjectSize = sizeof(Float2Blender);
    options.TypeSize = sizeof(::g::Fuse::Internal::Blender_type);
    type = (::g::Fuse::Internal::Blender_type*)uClassType::New("Fuse.Internal.Float2Blender", options);
    type->fp_build_ = Float2Blender_build;
    type->fp_ctor_ = (void*)Float2Blender__New1_fn;
    type->fp_Add = (void(*)(::g::Fuse::Internal::Blender*, void*, void*, uTRef))Float2Blender__Add_fn;
    type->fp_Length = (void(*)(::g::Fuse::Internal::Blender*, void*, double*))Float2Blender__Length_fn;
    type->fp_Lerp = (void(*)(::g::Fuse::Internal::Blender*, void*, void*, double*, uTRef))Float2Blender__Lerp_fn;
    type->fp_get_One = (void(*)(::g::Fuse::Internal::Blender*, uTRef))Float2Blender__get_One_fn;
    type->fp_Sub = (void(*)(::g::Fuse::Internal::Blender*, void*, void*, uTRef))Float2Blender__Sub_fn;
    type->fp_ToUnit = (void(*)(::g::Fuse::Internal::Blender*, void*, double*, uTRef))Float2Blender__ToUnit_fn;
    type->fp_Weight = (void(*)(::g::Fuse::Internal::Blender*, void*, double*, uTRef))Float2Blender__Weight_fn;
    type->fp_get_Zero = (void(*)(::g::Fuse::Internal::Blender*, uTRef))Float2Blender__get_Zero_fn;
    return type;
}

// public generated Float2Blender() :408
void Float2Blender__ctor_1_fn(Float2Blender* __this)
{
    __this->ctor_1();
}

// public override sealed float2 Add(float2 a, float2 b) :411
void Float2Blender__Add_fn(Float2Blender* __this, ::g::Uno::Float2* a, ::g::Uno::Float2* b, ::g::Uno::Float2* __retval)
{
    ::g::Uno::Float2 a_ = *a;
    ::g::Uno::Float2 b_ = *b;
    return *__retval = ::g::Uno::Float2__op_Addition2(a_, b_), void();
}

// public override sealed double Length(float2 a) :421
void Float2Blender__Length_fn(Float2Blender* __this, ::g::Uno::Float2* a, double* __retval)
{
    ::g::Uno::Float2 a_ = *a;
    return *__retval = (double)::g::Uno::Vector::Length(a_), void();
}

// public override sealed float2 Lerp(float2 a, float2 b, double d) :413
void Float2Blender__Lerp_fn(Float2Blender* __this, ::g::Uno::Float2* a, ::g::Uno::Float2* b, double* d, ::g::Uno::Float2* __retval)
{
    ::g::Uno::Float2 a_ = *a;
    ::g::Uno::Float2 b_ = *b;
    double d_ = *d;
    return *__retval = ::g::Uno::Math::Lerp2(a_, b_, (float)d_), void();
}

// public generated Float2Blender New() :408
void Float2Blender__New1_fn(Float2Blender** __retval)
{
    *__retval = Float2Blender::New1();
}

// public override sealed float2 get_One() :415
void Float2Blender__get_One_fn(Float2Blender* __this, ::g::Uno::Float2* __retval)
{
    return *__retval = ::g::Uno::Float2__New1(1.0f), void();
}

// public override sealed float2 Sub(float2 a, float2 b) :412
void Float2Blender__Sub_fn(Float2Blender* __this, ::g::Uno::Float2* a, ::g::Uno::Float2* b, ::g::Uno::Float2* __retval)
{
    ::g::Uno::Float2 a_ = *a;
    ::g::Uno::Float2 b_ = *b;
    return *__retval = ::g::Uno::Float2__op_Subtraction2(a_, b_), void();
}

// public override sealed float2 ToUnit(float2 a, double& length) :416
void Float2Blender__ToUnit_fn(Float2Blender* __this, ::g::Uno::Float2* a, double* length, ::g::Uno::Float2* __retval)
{
    ::g::Uno::Float2 a_ = *a;
    *length = (double)::g::Uno::Vector::Length(a_);
    return *__retval = ::g::Uno::Vector::Normalize(a_), void();
}

// public override sealed float2 Weight(float2 v, double w) :410
void Float2Blender__Weight_fn(Float2Blender* __this, ::g::Uno::Float2* v, double* w, ::g::Uno::Float2* __retval)
{
    ::g::Uno::Float2 v_ = *v;
    double w_ = *w;
    return *__retval = ::g::Uno::Float2__op_Multiply1(v_, (float)w_), void();
}

// public override sealed float2 get_Zero() :414
void Float2Blender__get_Zero_fn(Float2Blender* __this, ::g::Uno::Float2* __retval)
{
    return *__retval = ::g::Uno::Float2__New1(0.0f), void();
}

// public generated Float2Blender() [instance] :408
void Float2Blender::ctor_1()
{
    ctor_();
}

// public generated Float2Blender New() [static] :408
Float2Blender* Float2Blender::New1()
{
    Float2Blender* obj1 = (Float2Blender*)uNew(Float2Blender_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// /Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Common/1.0.2/internal/$.uno
// ----------------------------------------------------------------------------------------------

// internal sealed class Float3Blender :424
// {
static void Float3Blender_build(uType* type)
{
    type->SetBase(::g::Fuse::Internal::Blender_typeof()->MakeType(::g::Uno::Float3_typeof(), NULL));
}

::g::Fuse::Internal::Blender_type* Float3Blender_typeof()
{
    static uSStrong< ::g::Fuse::Internal::Blender_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Internal::Blender_typeof();
    options.ObjectSize = sizeof(Float3Blender);
    options.TypeSize = sizeof(::g::Fuse::Internal::Blender_type);
    type = (::g::Fuse::Internal::Blender_type*)uClassType::New("Fuse.Internal.Float3Blender", options);
    type->fp_build_ = Float3Blender_build;
    type->fp_ctor_ = (void*)Float3Blender__New1_fn;
    type->fp_Add = (void(*)(::g::Fuse::Internal::Blender*, void*, void*, uTRef))Float3Blender__Add_fn;
    type->fp_Length = (void(*)(::g::Fuse::Internal::Blender*, void*, double*))Float3Blender__Length_fn;
    type->fp_Lerp = (void(*)(::g::Fuse::Internal::Blender*, void*, void*, double*, uTRef))Float3Blender__Lerp_fn;
    type->fp_get_One = (void(*)(::g::Fuse::Internal::Blender*, uTRef))Float3Blender__get_One_fn;
    type->fp_Sub = (void(*)(::g::Fuse::Internal::Blender*, void*, void*, uTRef))Float3Blender__Sub_fn;
    type->fp_ToUnit = (void(*)(::g::Fuse::Internal::Blender*, void*, double*, uTRef))Float3Blender__ToUnit_fn;
    type->fp_Weight = (void(*)(::g::Fuse::Internal::Blender*, void*, double*, uTRef))Float3Blender__Weight_fn;
    type->fp_get_Zero = (void(*)(::g::Fuse::Internal::Blender*, uTRef))Float3Blender__get_Zero_fn;
    return type;
}

// public generated Float3Blender() :424
void Float3Blender__ctor_1_fn(Float3Blender* __this)
{
    __this->ctor_1();
}

// public override sealed float3 Add(float3 a, float3 b) :427
void Float3Blender__Add_fn(Float3Blender* __this, ::g::Uno::Float3* a, ::g::Uno::Float3* b, ::g::Uno::Float3* __retval)
{
    ::g::Uno::Float3 a_ = *a;
    ::g::Uno::Float3 b_ = *b;
    return *__retval = ::g::Uno::Float3__op_Addition2(a_, b_), void();
}

// public override sealed double Length(float3 a) :437
void Float3Blender__Length_fn(Float3Blender* __this, ::g::Uno::Float3* a, double* __retval)
{
    ::g::Uno::Float3 a_ = *a;
    return *__retval = (double)::g::Uno::Vector::Length1(a_), void();
}

// public override sealed float3 Lerp(float3 a, float3 b, double d) :429
void Float3Blender__Lerp_fn(Float3Blender* __this, ::g::Uno::Float3* a, ::g::Uno::Float3* b, double* d, ::g::Uno::Float3* __retval)
{
    ::g::Uno::Float3 a_ = *a;
    ::g::Uno::Float3 b_ = *b;
    double d_ = *d;
    return *__retval = ::g::Uno::Math::Lerp4(a_, b_, (float)d_), void();
}

// public generated Float3Blender New() :424
void Float3Blender__New1_fn(Float3Blender** __retval)
{
    *__retval = Float3Blender::New1();
}

// public override sealed float3 get_One() :431
void Float3Blender__get_One_fn(Float3Blender* __this, ::g::Uno::Float3* __retval)
{
    return *__retval = ::g::Uno::Float3__New1(1.0f), void();
}

// public override sealed float3 Sub(float3 a, float3 b) :428
void Float3Blender__Sub_fn(Float3Blender* __this, ::g::Uno::Float3* a, ::g::Uno::Float3* b, ::g::Uno::Float3* __retval)
{
    ::g::Uno::Float3 a_ = *a;
    ::g::Uno::Float3 b_ = *b;
    return *__retval = ::g::Uno::Float3__op_Subtraction2(a_, b_), void();
}

// public override sealed float3 ToUnit(float3 a, double& length) :432
void Float3Blender__ToUnit_fn(Float3Blender* __this, ::g::Uno::Float3* a, double* length, ::g::Uno::Float3* __retval)
{
    ::g::Uno::Float3 a_ = *a;
    *length = (double)::g::Uno::Vector::Length1(a_);
    return *__retval = ::g::Uno::Vector::Normalize1(a_), void();
}

// public override sealed float3 Weight(float3 v, double w) :426
void Float3Blender__Weight_fn(Float3Blender* __this, ::g::Uno::Float3* v, double* w, ::g::Uno::Float3* __retval)
{
    ::g::Uno::Float3 v_ = *v;
    double w_ = *w;
    return *__retval = ::g::Uno::Float3__op_Multiply1(v_, (float)w_), void();
}

// public override sealed float3 get_Zero() :430
void Float3Blender__get_Zero_fn(Float3Blender* __this, ::g::Uno::Float3* __retval)
{
    return *__retval = ::g::Uno::Float3__New1(0.0f), void();
}

// public generated Float3Blender() [instance] :424
void Float3Blender::ctor_1()
{
    ctor_();
}

// public generated Float3Blender New() [static] :424
Float3Blender* Float3Blender::New1()
{
    Float3Blender* obj1 = (Float3Blender*)uNew(Float3Blender_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// /Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Common/1.0.2/internal/$.uno
// ----------------------------------------------------------------------------------------------

// internal sealed class Float4Blender :440
// {
static void Float4Blender_build(uType* type)
{
    type->SetBase(::g::Fuse::Internal::Blender_typeof()->MakeType(::g::Uno::Float4_typeof(), NULL));
}

::g::Fuse::Internal::Blender_type* Float4Blender_typeof()
{
    static uSStrong< ::g::Fuse::Internal::Blender_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Internal::Blender_typeof();
    options.ObjectSize = sizeof(Float4Blender);
    options.TypeSize = sizeof(::g::Fuse::Internal::Blender_type);
    type = (::g::Fuse::Internal::Blender_type*)uClassType::New("Fuse.Internal.Float4Blender", options);
    type->fp_build_ = Float4Blender_build;
    type->fp_ctor_ = (void*)Float4Blender__New1_fn;
    type->fp_Add = (void(*)(::g::Fuse::Internal::Blender*, void*, void*, uTRef))Float4Blender__Add_fn;
    type->fp_Length = (void(*)(::g::Fuse::Internal::Blender*, void*, double*))Float4Blender__Length_fn;
    type->fp_Lerp = (void(*)(::g::Fuse::Internal::Blender*, void*, void*, double*, uTRef))Float4Blender__Lerp_fn;
    type->fp_get_One = (void(*)(::g::Fuse::Internal::Blender*, uTRef))Float4Blender__get_One_fn;
    type->fp_Sub = (void(*)(::g::Fuse::Internal::Blender*, void*, void*, uTRef))Float4Blender__Sub_fn;
    type->fp_ToUnit = (void(*)(::g::Fuse::Internal::Blender*, void*, double*, uTRef))Float4Blender__ToUnit_fn;
    type->fp_Weight = (void(*)(::g::Fuse::Internal::Blender*, void*, double*, uTRef))Float4Blender__Weight_fn;
    type->fp_get_Zero = (void(*)(::g::Fuse::Internal::Blender*, uTRef))Float4Blender__get_Zero_fn;
    return type;
}

// public generated Float4Blender() :440
void Float4Blender__ctor_1_fn(Float4Blender* __this)
{
    __this->ctor_1();
}

// public override sealed float4 Add(float4 a, float4 b) :443
void Float4Blender__Add_fn(Float4Blender* __this, ::g::Uno::Float4* a, ::g::Uno::Float4* b, ::g::Uno::Float4* __retval)
{
    ::g::Uno::Float4 a_ = *a;
    ::g::Uno::Float4 b_ = *b;
    return *__retval = ::g::Uno::Float4__op_Addition2(a_, b_), void();
}

// public override sealed double Length(float4 a) :453
void Float4Blender__Length_fn(Float4Blender* __this, ::g::Uno::Float4* a, double* __retval)
{
    ::g::Uno::Float4 a_ = *a;
    return *__retval = (double)::g::Uno::Vector::Length2(a_), void();
}

// public override sealed float4 Lerp(float4 a, float4 b, double d) :445
void Float4Blender__Lerp_fn(Float4Blender* __this, ::g::Uno::Float4* a, ::g::Uno::Float4* b, double* d, ::g::Uno::Float4* __retval)
{
    ::g::Uno::Float4 a_ = *a;
    ::g::Uno::Float4 b_ = *b;
    double d_ = *d;
    return *__retval = ::g::Uno::Math::Lerp6(a_, b_, (float)d_), void();
}

// public generated Float4Blender New() :440
void Float4Blender__New1_fn(Float4Blender** __retval)
{
    *__retval = Float4Blender::New1();
}

// public override sealed float4 get_One() :447
void Float4Blender__get_One_fn(Float4Blender* __this, ::g::Uno::Float4* __retval)
{
    return *__retval = ::g::Uno::Float4__New1(1.0f), void();
}

// public override sealed float4 Sub(float4 a, float4 b) :444
void Float4Blender__Sub_fn(Float4Blender* __this, ::g::Uno::Float4* a, ::g::Uno::Float4* b, ::g::Uno::Float4* __retval)
{
    ::g::Uno::Float4 a_ = *a;
    ::g::Uno::Float4 b_ = *b;
    return *__retval = ::g::Uno::Float4__op_Subtraction2(a_, b_), void();
}

// public override sealed float4 ToUnit(float4 a, double& length) :448
void Float4Blender__ToUnit_fn(Float4Blender* __this, ::g::Uno::Float4* a, double* length, ::g::Uno::Float4* __retval)
{
    ::g::Uno::Float4 a_ = *a;
    *length = (double)::g::Uno::Vector::Length2(a_);
    return *__retval = ::g::Uno::Vector::Normalize2(a_), void();
}

// public override sealed float4 Weight(float4 v, double w) :442
void Float4Blender__Weight_fn(Float4Blender* __this, ::g::Uno::Float4* v, double* w, ::g::Uno::Float4* __retval)
{
    ::g::Uno::Float4 v_ = *v;
    double w_ = *w;
    return *__retval = ::g::Uno::Float4__op_Multiply1(v_, (float)w_), void();
}

// public override sealed float4 get_Zero() :446
void Float4Blender__get_Zero_fn(Float4Blender* __this, ::g::Uno::Float4* __retval)
{
    return *__retval = ::g::Uno::Float4__New1(0.0f), void();
}

// public generated Float4Blender() [instance] :440
void Float4Blender::ctor_1()
{
    ctor_();
}

// public generated Float4Blender New() [static] :440
Float4Blender* Float4Blender::New1()
{
    Float4Blender* obj1 = (Float4Blender*)uNew(Float4Blender_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// /Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Common/1.0.2/internal/$.uno
// ----------------------------------------------------------------------------------------------

// internal sealed class FloatBlender :372
// {
static void FloatBlender_build(uType* type)
{
    type->SetBase(::g::Fuse::Internal::ScalarBlender_typeof()->MakeType(::g::Uno::Float_typeof(), NULL));
}

::g::Fuse::Internal::ScalarBlender_type* FloatBlender_typeof()
{
    static uSStrong< ::g::Fuse::Internal::ScalarBlender_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Internal::ScalarBlender_typeof();
    options.ObjectSize = sizeof(FloatBlender);
    options.TypeSize = sizeof(::g::Fuse::Internal::ScalarBlender_type);
    type = (::g::Fuse::Internal::ScalarBlender_type*)uClassType::New("Fuse.Internal.FloatBlender", options);
    type->fp_build_ = FloatBlender_build;
    type->fp_ctor_ = (void*)FloatBlender__New1_fn;
    type->fp_Add = (void(*)(::g::Fuse::Internal::Blender*, void*, void*, uTRef))FloatBlender__Add_fn;
    type->fp_FromDouble = (void(*)(::g::Fuse::Internal::ScalarBlender*, double*, uTRef))FloatBlender__FromDouble_fn;
    type->fp_Length = (void(*)(::g::Fuse::Internal::Blender*, void*, double*))FloatBlender__Length_fn;
    type->fp_Lerp = (void(*)(::g::Fuse::Internal::Blender*, void*, void*, double*, uTRef))FloatBlender__Lerp_fn;
    type->fp_get_One = (void(*)(::g::Fuse::Internal::Blender*, uTRef))FloatBlender__get_One_fn;
    type->fp_Sub = (void(*)(::g::Fuse::Internal::Blender*, void*, void*, uTRef))FloatBlender__Sub_fn;
    type->fp_ToDouble = (void(*)(::g::Fuse::Internal::ScalarBlender*, void*, double*))FloatBlender__ToDouble_fn;
    type->fp_ToUnit = (void(*)(::g::Fuse::Internal::Blender*, void*, double*, uTRef))FloatBlender__ToUnit_fn;
    type->fp_Weight = (void(*)(::g::Fuse::Internal::Blender*, void*, double*, uTRef))FloatBlender__Weight_fn;
    type->fp_get_Zero = (void(*)(::g::Fuse::Internal::Blender*, uTRef))FloatBlender__get_Zero_fn;
    return type;
}

// public generated FloatBlender() :372
void FloatBlender__ctor_2_fn(FloatBlender* __this)
{
    __this->ctor_2();
}

// public override sealed float Add(float a, float b) :375
void FloatBlender__Add_fn(FloatBlender* __this, float* a, float* b, float* __retval)
{
    float a_ = *a;
    float b_ = *b;
    return *__retval = a_ + b_, void();
}

// public override sealed float FromDouble(double a) :387
void FloatBlender__FromDouble_fn(FloatBlender* __this, double* a, float* __retval)
{
    double a_ = *a;
    return *__retval = (float)a_, void();
}

// public override sealed double Length(float a) :385
void FloatBlender__Length_fn(FloatBlender* __this, float* a, double* __retval)
{
    float a_ = *a;
    return *__retval = (double)::g::Uno::Math::Abs1(a_), void();
}

// public override sealed float Lerp(float a, float b, double d) :377
void FloatBlender__Lerp_fn(FloatBlender* __this, float* a, float* b, double* d, float* __retval)
{
    float a_ = *a;
    float b_ = *b;
    double d_ = *d;
    return *__retval = a_ + ((b_ - a_) * (float)d_), void();
}

// public generated FloatBlender New() :372
void FloatBlender__New1_fn(FloatBlender** __retval)
{
    *__retval = FloatBlender::New1();
}

// public override sealed float get_One() :379
void FloatBlender__get_One_fn(FloatBlender* __this, float* __retval)
{
    return *__retval = 1.0f, void();
}

// public override sealed float Sub(float a, float b) :376
void FloatBlender__Sub_fn(FloatBlender* __this, float* a, float* b, float* __retval)
{
    float a_ = *a;
    float b_ = *b;
    return *__retval = a_ - b_, void();
}

// public override sealed double ToDouble(float a) :386
void FloatBlender__ToDouble_fn(FloatBlender* __this, float* a, double* __retval)
{
    float a_ = *a;
    return *__retval = (double)a_, void();
}

// public override sealed float ToUnit(float a, double& length) :380
void FloatBlender__ToUnit_fn(FloatBlender* __this, float* a, double* length, float* __retval)
{
    float a_ = *a;
    *length = (double)::g::Uno::Math::Abs1(a_);
    return *__retval = (float)((a_ < 0.0f) ? -1 : 1), void();
}

// public override sealed float Weight(float v, double w) :374
void FloatBlender__Weight_fn(FloatBlender* __this, float* v, double* w, float* __retval)
{
    float v_ = *v;
    double w_ = *w;
    return *__retval = v_ * (float)w_, void();
}

// public override sealed float get_Zero() :378
void FloatBlender__get_Zero_fn(FloatBlender* __this, float* __retval)
{
    return *__retval = 0.0f, void();
}

// public generated FloatBlender() [instance] :372
void FloatBlender::ctor_2()
{
    ctor_1();
}

// public generated FloatBlender New() [static] :372
FloatBlender* FloatBlender::New1()
{
    FloatBlender* obj1 = (FloatBlender*)uNew(FloatBlender_typeof());
    obj1->ctor_2();
    return obj1;
}
// }

// /Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Common/1.0.2/internal/$.uno
// ----------------------------------------------------------------------------------------------

// internal sealed class FontFaceDescriptor :2127
// {
static void FontFaceDescriptor_build(uType* type)
{
    ::TYPES[11] = ::g::Uno::Runtime::Implementation::Internal::ArrayEnumerable_typeof()->MakeType(::g::Uno::String_typeof(), NULL);
    ::TYPES[12] = ::g::Uno::String_typeof()->Array();
    ::TYPES[13] = ::g::Uno::Collections::EnumerableExtensions_typeof()->MakeMethod(9/*SequenceEqual<string>*/, ::g::Uno::String_typeof(), NULL);
    ::TYPES[14] = ::g::Uno::Int_typeof();
    ::TYPES[15] = ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Uno::String_typeof(), NULL);
    ::TYPES[16] = ::g::Uno::Collections::IEnumerator_typeof();
    ::TYPES[17] = ::g::Uno::Collections::IEnumerator1_typeof()->MakeType(::g::Uno::String_typeof(), NULL);
    ::TYPES[18] = ::g::Uno::Collections::EnumerableExtensions_typeof()->MakeMethod(0/*All<string>*/, ::g::Uno::String_typeof(), NULL);
    ::TYPES[19] = ::g::Uno::Predicate_typeof()->MakeType(::g::Uno::String_typeof(), NULL);
    type->SetFields(0,
        ::g::Uno::UX::FileSource_typeof(), offsetof(::g::Fuse::Internal::FontFaceDescriptor, FileSource), 0,
        ::TYPES[14/*int*/], offsetof(::g::Fuse::Internal::FontFaceDescriptor, Index), 0,
        ::TYPES[15/*Uno.Collections.IEnumerable<string>*/], offsetof(::g::Fuse::Internal::FontFaceDescriptor, Styles), 0);
}

uType* FontFaceDescriptor_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.ObjectSize = sizeof(FontFaceDescriptor);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Internal.FontFaceDescriptor", options);
    type->fp_build_ = FontFaceDescriptor_build;
    type->fp_Equals = (void(*)(uObject*, uObject*, bool*))FontFaceDescriptor__Equals_fn;
    type->fp_GetHashCode = (void(*)(uObject*, int*))FontFaceDescriptor__GetHashCode_fn;
    return type;
}

// public FontFaceDescriptor(Uno.UX.FileSource fileSource, int index) :2142
void FontFaceDescriptor__ctor__fn(FontFaceDescriptor* __this, ::g::Uno::UX::FileSource* fileSource, int* index)
{
    __this->ctor_(fileSource, *index);
}

// public FontFaceDescriptor(Uno.UX.FileSource fileSource, Uno.Collections.IEnumerable<string> styles) :2134
void FontFaceDescriptor__ctor_1_fn(FontFaceDescriptor* __this, ::g::Uno::UX::FileSource* fileSource, uObject* styles)
{
    __this->ctor_1(fileSource, styles);
}

// public override sealed bool Equals(object o) :2154
void FontFaceDescriptor__Equals_fn(FontFaceDescriptor* __this, uObject* o, bool* __retval)
{
    uStackFrame __("Fuse.Internal.FontFaceDescriptor", "Equals(object)");
    FontFaceDescriptor* f = uAs<FontFaceDescriptor*>(o, __this->__type);
    return *__retval = (((f != NULL) && ::g::Uno::String::op_Equality(uPtr(__this->FileSource)->Name, uPtr(uPtr(f)->FileSource)->Name)) && (__this->Index == uPtr(f)->Index)) && ::g::Uno::Collections::EnumerableExtensions::SequenceEqual(::TYPES[13/*Uno.Collections.EnumerableExtensions.SequenceEqual<string>*/], __this->Styles, uPtr(f)->Styles), void();
}

// public override sealed int GetHashCode() :2163
void FontFaceDescriptor__GetHashCode_fn(FontFaceDescriptor* __this, int* __retval)
{
    uStackFrame __("Fuse.Internal.FontFaceDescriptor", "GetHashCode()");
    int ind1;
    uString* ret5;
    int hash = 17;
    hash = (hash * 23) + uPtr(uPtr(__this->FileSource)->Name)->GetHashCode();
    hash = (hash * 23) + ::g::Uno::Int::GetHashCode((ind1 = __this->Index, ind1), ::TYPES[14/*int*/]);

    for (uObject* enum2 = (uObject*)::g::Uno::Collections::IEnumerable::GetEnumerator(uInterface(uPtr(__this->Styles), ::TYPES[15/*Uno.Collections.IEnumerable<string>*/])); ::g::Uno::Collections::IEnumerator::MoveNext(uInterface(uPtr(enum2), ::TYPES[16/*Uno.Collections.IEnumerator*/])); )
    {
        uString* s = (::g::Uno::Collections::IEnumerator1::get_Current_ex(uInterface(uPtr(enum2), ::TYPES[17/*Uno.Collections.IEnumerator<string>*/]), &ret5), ret5);
        hash = (hash * 23) + uPtr(s)->GetHashCode();
    }

    return *__retval = hash, void();
}

// public bool Match(string styleString) :2149
void FontFaceDescriptor__Match_fn(FontFaceDescriptor* __this, uString* styleString, bool* __retval)
{
    *__retval = __this->Match(styleString);
}

// public FontFaceDescriptor New(Uno.UX.FileSource fileSource, int index) :2142
void FontFaceDescriptor__New1_fn(::g::Uno::UX::FileSource* fileSource, int* index, FontFaceDescriptor** __retval)
{
    *__retval = FontFaceDescriptor::New1(fileSource, *index);
}

// public FontFaceDescriptor New(Uno.UX.FileSource fileSource, Uno.Collections.IEnumerable<string> styles) :2134
void FontFaceDescriptor__New2_fn(::g::Uno::UX::FileSource* fileSource, uObject* styles, FontFaceDescriptor** __retval)
{
    *__retval = FontFaceDescriptor::New2(fileSource, styles);
}

// public FontFaceDescriptor(Uno.UX.FileSource fileSource, int index) [instance] :2142
void FontFaceDescriptor::ctor_(::g::Uno::UX::FileSource* fileSource, int index)
{
    uStackFrame __("Fuse.Internal.FontFaceDescriptor", ".ctor(Uno.UX.FileSource,int)");
    FileSource = fileSource;
    Index = index;
    Styles = (uObject*)((::g::Uno::Runtime::Implementation::Internal::ArrayEnumerable*)::g::Uno::Runtime::Implementation::Internal::ArrayEnumerable::New1(::TYPES[11/*Uno.Runtime.Implementation.Internal.ArrayEnumerable<string>*/], uArray::New(::TYPES[12/*string[]*/], 0)));
}

// public FontFaceDescriptor(Uno.UX.FileSource fileSource, Uno.Collections.IEnumerable<string> styles) [instance] :2134
void FontFaceDescriptor::ctor_1(::g::Uno::UX::FileSource* fileSource, uObject* styles)
{
    FileSource = fileSource;
    Index = -1;
    Styles = styles;
}

// public bool Match(string styleString) [instance] :2149
bool FontFaceDescriptor::Match(uString* styleString)
{
    uStackFrame __("Fuse.Internal.FontFaceDescriptor", "Match(string)");
    return ::g::Uno::Collections::EnumerableExtensions::All(::TYPES[18/*Uno.Collections.EnumerableExtensions.All<string>*/], Styles, uDelegate::New(::TYPES[19/*Uno.Predicate<string>*/], (void*)::g::Uno::String__Contains_fn, uPtr(styleString)));
}

// public FontFaceDescriptor New(Uno.UX.FileSource fileSource, int index) [static] :2142
FontFaceDescriptor* FontFaceDescriptor::New1(::g::Uno::UX::FileSource* fileSource, int index)
{
    FontFaceDescriptor* obj4 = (FontFaceDescriptor*)uNew(FontFaceDescriptor_typeof());
    obj4->ctor_(fileSource, index);
    return obj4;
}

// public FontFaceDescriptor New(Uno.UX.FileSource fileSource, Uno.Collections.IEnumerable<string> styles) [static] :2134
FontFaceDescriptor* FontFaceDescriptor::New2(::g::Uno::UX::FileSource* fileSource, uObject* styles)
{
    FontFaceDescriptor* obj3 = (FontFaceDescriptor*)uNew(FontFaceDescriptor_typeof());
    obj3->ctor_1(fileSource, styles);
    return obj3;
}
// }

// /Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Common/1.0.2/internal/$.uno
// ----------------------------------------------------------------------------------------------

// internal static class FrustumMatrix :1022
// {
static void FrustumMatrix_build(uType* type)
{
}

uClassType* FrustumMatrix_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Internal.FrustumMatrix", options);
    type->fp_build_ = FrustumMatrix_build;
    return type;
}

// public static float4x4 OrthoLHInverse(float width, float height, float near, float far) :1054
void FrustumMatrix__OrthoLHInverse_fn(float* width, float* height, float* near, float* far, ::g::Uno::Float4x4* __retval)
{
    *__retval = FrustumMatrix::OrthoLHInverse(*width, *height, *near, *far);
}

// public static float4x4 OrthoRHInverse(float width, float height, float zNear, float zFar) :1069
void FrustumMatrix__OrthoRHInverse_fn(float* width, float* height, float* zNear, float* zFar, ::g::Uno::Float4x4* __retval)
{
    *__retval = FrustumMatrix::OrthoRHInverse(*width, *height, *zNear, *zFar);
}

// public static float4x4 PerspectiveView(float2 viewSize, float distance, float2 relOrigin) :1077
void FrustumMatrix__PerspectiveView_fn(::g::Uno::Float2* viewSize, float* distance, ::g::Uno::Float2* relOrigin, ::g::Uno::Float4x4* __retval)
{
    *__retval = FrustumMatrix::PerspectiveView(*viewSize, *distance, *relOrigin);
}

// public static float4x4 PerspectiveViewInverse(float2 viewSize, float distance, float2 relOrigin) :1084
void FrustumMatrix__PerspectiveViewInverse_fn(::g::Uno::Float2* viewSize, float* distance, ::g::Uno::Float2* relOrigin, ::g::Uno::Float4x4* __retval)
{
    *__retval = FrustumMatrix::PerspectiveViewInverse(*viewSize, *distance, *relOrigin);
}

// public static bool TryOrthoLH(float width, float height, float near, float far, float4x4& result) :1024
void FrustumMatrix__TryOrthoLH_fn(float* width, float* height, float* near, float* far, ::g::Uno::Float4x4* result, bool* __retval)
{
    *__retval = FrustumMatrix::TryOrthoLH(*width, *height, *near, *far, result);
}

// public static bool TryOrthoRH(float width, float height, float zNear, float zFar, float4x4& result) :1043
void FrustumMatrix__TryOrthoRH_fn(float* width, float* height, float* zNear, float* zFar, ::g::Uno::Float4x4* result, bool* __retval)
{
    *__retval = FrustumMatrix::TryOrthoRH(*width, *height, *zNear, *zFar, result);
}

// public static bool TryPerspectiveProjection(float2 viewSize, float znear, float zfar, float distance, float4x4& result) :1091
void FrustumMatrix__TryPerspectiveProjection_fn(::g::Uno::Float2* viewSize, float* znear, float* zfar, float* distance, ::g::Uno::Float4x4* result, bool* __retval)
{
    *__retval = FrustumMatrix::TryPerspectiveProjection(*viewSize, *znear, *zfar, *distance, result);
}

// public static bool TryPerspectiveProjectionInverse(float2 viewSize, float znear, float zfar, float distance, float4x4& result) :1110
void FrustumMatrix__TryPerspectiveProjectionInverse_fn(::g::Uno::Float2* viewSize, float* znear, float* zfar, float* distance, ::g::Uno::Float4x4* result, bool* __retval)
{
    *__retval = FrustumMatrix::TryPerspectiveProjectionInverse(*viewSize, *znear, *zfar, *distance, result);
}

// public static float4x4 OrthoLHInverse(float width, float height, float near, float far) [static] :1054
::g::Uno::Float4x4 FrustumMatrix::OrthoLHInverse(float width, float height, float near, float far)
{
    float halfWidth = width * 0.5f;
    float halfHeight = height * 0.5f;
    ::g::Uno::Float4x4 result = ::g::Uno::Float4x4__Identity();
    result.M11 = halfWidth;
    result.M22 = halfHeight;
    result.M33 = (-(far - near) / 2.0f);
    result.M43 = ((near + far) / 2.0f);
    return result;
}

// public static float4x4 OrthoRHInverse(float width, float height, float zNear, float zFar) [static] :1069
::g::Uno::Float4x4 FrustumMatrix::OrthoRHInverse(float width, float height, float zNear, float zFar)
{
    ::g::Uno::Float4x4 result = FrustumMatrix::OrthoLHInverse(width, height, zNear, zFar);
    result.M33 = (result.M33 * -1.0f);
    result.M43 = (result.M43 * -1.0f);
    return result;
}

// public static float4x4 PerspectiveView(float2 viewSize, float distance, float2 relOrigin) [static] :1077
::g::Uno::Float4x4 FrustumMatrix::PerspectiveView(::g::Uno::Float2 viewSize, float distance, ::g::Uno::Float2 relOrigin)
{
    ::g::Uno::Float4x4 t = ::g::Uno::Matrix::Translation(-relOrigin.X * viewSize.X, -relOrigin.Y * viewSize.Y, distance);
    ::g::Uno::Float4x4 s = ::g::Uno::Matrix::Scaling1(1.0f, -1.0f, 1.0f);
    return ::g::Uno::Matrix::Mul8(t, s);
}

// public static float4x4 PerspectiveViewInverse(float2 viewSize, float distance, float2 relOrigin) [static] :1084
::g::Uno::Float4x4 FrustumMatrix::PerspectiveViewInverse(::g::Uno::Float2 viewSize, float distance, ::g::Uno::Float2 relOrigin)
{
    ::g::Uno::Float4x4 s = ::g::Uno::Matrix::Scaling1(1.0f, -1.0f, 1.0f);
    ::g::Uno::Float4x4 t = ::g::Uno::Matrix::Translation(relOrigin.X * viewSize.X, relOrigin.Y * viewSize.Y, -distance);
    return ::g::Uno::Matrix::Mul8(s, t);
}

// public static bool TryOrthoLH(float width, float height, float near, float far, float4x4& result) [static] :1024
bool FrustumMatrix::TryOrthoLH(float width, float height, float near, float far, ::g::Uno::Float4x4* result)
{
    float depth = far - near;

    if ((::g::Uno::Math::Min1(::g::Uno::Math::Abs1(width), ::g::Uno::Math::Abs1(height)) < 1e-05f) || (::g::Uno::Math::Abs1(depth) < 1e-05f))
    {
        *result = ::g::Uno::Float4x4__Identity();
        return false;
    }

    *result = ::g::Uno::Float4x4__Identity();
    (*result).M11 = (2.0f / width);
    (*result).M22 = (2.0f / height);
    (*result).M33 = (-2.0f / depth);
    (*result).M43 = ((far + near) / depth);
    return true;
}

// public static bool TryOrthoRH(float width, float height, float zNear, float zFar, float4x4& result) [static] :1043
bool FrustumMatrix::TryOrthoRH(float width, float height, float zNear, float zFar, ::g::Uno::Float4x4* result)
{
    if (FrustumMatrix::TryOrthoLH(width, height, zNear, zFar, result))
    {
        (*result).M33 = ((*result).M33 * -1.0f);
        return true;
    }

    return false;
}

// public static bool TryPerspectiveProjection(float2 viewSize, float znear, float zfar, float distance, float4x4& result) [static] :1091
bool FrustumMatrix::TryPerspectiveProjection(::g::Uno::Float2 viewSize, float znear, float zfar, float distance, ::g::Uno::Float4x4* result)
{
    float zdiff = znear - zfar;

    if ((::g::Uno::Math::Min1(::g::Uno::Math::Abs1(viewSize.X), ::g::Uno::Math::Abs1(viewSize.Y)) < 1e-05f) || (::g::Uno::Math::Abs1(zdiff) < 1e-05f))
    {
        *result = ::g::Uno::Float4x4__Identity();
        return false;
    }

    *result = uDefault< ::g::Uno::Float4x4>();
    (*result).M11 = ((2.0f * distance) / viewSize.X);
    (*result).M22 = ((2.0f * distance) / viewSize.Y);
    (*result).M33 = (-(znear + zfar) / zdiff);
    (*result).M34 = 1.0f;
    (*result).M43 = ((2.0f * (zfar * znear)) / zdiff);
    return true;
}

// public static bool TryPerspectiveProjectionInverse(float2 viewSize, float znear, float zfar, float distance, float4x4& result) [static] :1110
bool FrustumMatrix::TryPerspectiveProjectionInverse(::g::Uno::Float2 viewSize, float znear, float zfar, float distance, ::g::Uno::Float4x4* result)
{
    float zdiv = (2.0f * zfar) * znear;

    if ((::g::Uno::Math::Abs1(distance) < 1e-05f) || (::g::Uno::Math::Abs1(zdiv) < 1e-05f))
    {
        *result = ::g::Uno::Float4x4__Identity();
        return false;
    }

    *result = uDefault< ::g::Uno::Float4x4>();
    (*result).M11 = (viewSize.X / (2.0f * distance));
    (*result).M22 = (viewSize.Y / (2.0f * distance));
    (*result).M34 = ((znear - zfar) / zdiv);
    (*result).M43 = 1.0f;
    (*result).M44 = ((znear + zfar) / zdiv);
    return true;
}
// }

// /Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Nodes/1.0.2/internal/$.uno
// ---------------------------------------------------------------------------------------------

// internal static class FuseConfig :13
// {
static void FuseConfig_build(uType* type)
{
}

uClassType* FuseConfig_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Internal.FuseConfig", options);
    type->fp_build_ = FuseConfig_build;
    return type;
}
// }

// /Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Elements/1.0.2/internal/$.uno
// ------------------------------------------------------------------------------------------------

// internal abstract interface IImageContainerOwner :13
// {
uInterfaceType* IImageContainerOwner_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.Internal.IImageContainerOwner", 0, 0);
    return type;
}
// }

// /Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Elements/1.0.2/internal/$.uno
// ------------------------------------------------------------------------------------------------

// internal sealed class ImageContainer :20
// {
static void ImageContainer_build(uType* type)
{
    ::STRINGS[2] = uString::Const("Switching listen state on null Image");
    ::STRINGS[3] = uString::Const("/Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Elements/1.0.2/internal/$.uno");
    ::STRINGS[4] = uString::Const("UpdateSourceListen");
    ::STRINGS[5] = uString::Const("ResampleMode.Mipmap has been deprecated. Use ResampleMode.Linear instead.");
    ::STRINGS[6] = uString::Const("set_ResampleMode");
    ::TYPES[16] = ::g::Uno::Collections::IEnumerator_typeof();
    ::TYPES[20] = ::g::Uno::Collections::IEnumerator1_typeof()->MakeType(::g::Uno::UX::FileSource_typeof(), NULL);
    ::TYPES[21] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Resources::ImageSource_typeof(), NULL);
    ::TYPES[22] = ::g::Fuse::Internal::IImageContainerOwner_typeof();
    ::TYPES[23] = ::g::Uno::Action1_typeof()->MakeType(::g::Uno::UX::FileSource_typeof(), NULL);
    ::TYPES[24] = ::g::Fuse::Resources::FileImageSource_typeof();
    ::TYPES[25] = ::g::Fuse::Resources::HttpImageSource_typeof();
    ::TYPES[26] = ::g::Fuse::Resources::MultiDensityImageSource_typeof();
    ::TYPES[27] = ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Resources::ImageSource_typeof(), NULL);
    ::TYPES[28] = ::g::Uno::Collections::IEnumerator1_typeof()->MakeType(::g::Fuse::Resources::ImageSource_typeof(), NULL);
    ::TYPES[29] = ::g::Uno::EventHandler_typeof();
    ::TYPES[30] = ::g::Fuse::Resources::ImageSourceErrorHandler_typeof();
    ::TYPES[31] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Uno::UX::FileSource_typeof(), NULL);
    ::TYPES[32] = ::g::Uno::Collections::IList_typeof()->MakeType(::g::Uno::UX::FileSource_typeof(), NULL);
    ::TYPES[33] = ::g::Uno::Collections::RootableList_typeof()->MakeType(::g::Uno::UX::FileSource_typeof(), NULL);
    type->SetFields(0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Internal::ImageContainer, _density), 0,
        ::TYPES[33/*Uno.Collections.RootableList<Uno.UX.FileSource>*/], offsetof(::g::Fuse::Internal::ImageContainer, _files), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Internal::ImageContainer, _isRooted), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Internal::ImageContainer, _isSourceListen), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Internal::ImageContainer, _isVisible), 0,
        ::g::Fuse::Resources::MemoryPolicy_typeof(), offsetof(::g::Fuse::Internal::ImageContainer, _memoryPolicy), 0,
        ::TYPES[22/*Fuse.Internal.IImageContainerOwner*/], offsetof(::g::Fuse::Internal::ImageContainer, _owner), uFieldFlagsWeak,
        ::g::Fuse::Drawing::ResampleMode_typeof(), offsetof(::g::Fuse::Internal::ImageContainer, _resampleMode), 0,
        ::g::Fuse::Resources::ImageSource_typeof(), offsetof(::g::Fuse::Internal::ImageContainer, _source), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Internal::ImageContainer, _sourcePinned), 0,
        ::g::Fuse::Internal::SizingContainer_typeof(), offsetof(::g::Fuse::Internal::ImageContainer, Sizing), 0,
        ::TYPES[29/*Uno.EventHandler*/], offsetof(::g::Fuse::Internal::ImageContainer, ParamChanged1), 0,
        ::TYPES[29/*Uno.EventHandler*/], offsetof(::g::Fuse::Internal::ImageContainer, SourceChanged1), 0,
        ::TYPES[30/*Fuse.Resources.ImageSourceErrorHandler*/], offsetof(::g::Fuse::Internal::ImageContainer, SourceError1), 0);
}

uType* ImageContainer_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 14;
    options.ObjectSize = sizeof(ImageContainer);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Internal.ImageContainer", options);
    type->fp_build_ = ImageContainer_build;
    return type;
}

// public ImageContainer([Fuse.Internal.IImageContainerOwner owner]) :25
void ImageContainer__ctor__fn(ImageContainer* __this, uObject* owner)
{
    __this->ctor_(owner);
}

// private void CheckPinning() :267
void ImageContainer__CheckPinning_fn(ImageContainer* __this)
{
    __this->CheckPinning();
}

// public Fuse.Elements.Alignment get_ContentAlignment() :350
void ImageContainer__get_ContentAlignment_fn(ImageContainer* __this, int* __retval)
{
    *__retval = __this->ContentAlignment();
}

// public void set_ContentAlignment(Fuse.Elements.Alignment value) :351
void ImageContainer__set_ContentAlignment_fn(ImageContainer* __this, int* value)
{
    __this->ContentAlignment(*value);
}

// private void CreateMultiDensitySource() :142
void ImageContainer__CreateMultiDensitySource_fn(ImageContainer* __this)
{
    __this->CreateMultiDensitySource();
}

// public float get_Density() :68
void ImageContainer__get_Density_fn(ImageContainer* __this, float* __retval)
{
    *__retval = __this->Density();
}

// public void set_Density(float value) :69
void ImageContainer__set_Density_fn(ImageContainer* __this, float* value)
{
    __this->Density(*value);
}

// public Uno.UX.FileSource get_File() :34
void ImageContainer__get_File_fn(ImageContainer* __this, ::g::Uno::UX::FileSource** __retval)
{
    *__retval = __this->File();
}

// public void set_File(Uno.UX.FileSource value) :39
void ImageContainer__set_File_fn(ImageContainer* __this, ::g::Uno::UX::FileSource* value)
{
    __this->File(value);
}

// public Uno.Collections.IList<Uno.UX.FileSource> get_Files() :114
void ImageContainer__get_Files_fn(ImageContainer* __this, uObject** __retval)
{
    *__retval = __this->Files();
}

// public texture2D GetTexture() :358
void ImageContainer__GetTexture_fn(ImageContainer* __this, ::g::Uno::Graphics::Texture2D** __retval)
{
    *__retval = __this->GetTexture();
}

// public bool get_IsRooted() :231
void ImageContainer__get_IsRooted_fn(ImageContainer* __this, bool* __retval)
{
    *__retval = __this->IsRooted();
}

// public void set_IsRooted(bool value) :232
void ImageContainer__set_IsRooted_fn(ImageContainer* __this, bool* value)
{
    __this->IsRooted(*value);
}

// public bool get_IsVisible() :368
void ImageContainer__get_IsVisible_fn(ImageContainer* __this, bool* __retval)
{
    *__retval = __this->IsVisible();
}

// public void set_IsVisible(bool value) :369
void ImageContainer__set_IsVisible_fn(ImageContainer* __this, bool* value)
{
    __this->IsVisible(*value);
}

// public Fuse.Resources.MemoryPolicy get_MemoryPolicy() :84
void ImageContainer__get_MemoryPolicy_fn(ImageContainer* __this, ::g::Fuse::Resources::MemoryPolicy** __retval)
{
    *__retval = __this->MemoryPolicy();
}

// public void set_MemoryPolicy(Fuse.Resources.MemoryPolicy value) :85
void ImageContainer__set_MemoryPolicy_fn(ImageContainer* __this, ::g::Fuse::Resources::MemoryPolicy* value)
{
    __this->MemoryPolicy(value);
}

// public ImageContainer New([Fuse.Internal.IImageContainerOwner owner]) :25
void ImageContainer__New1_fn(uObject* owner, ImageContainer** __retval)
{
    *__retval = ImageContainer::New1(owner);
}

// private void OnFilesChanged(Uno.UX.FileSource ignoreFile) :126
void ImageContainer__OnFilesChanged_fn(ImageContainer* __this, ::g::Uno::UX::FileSource* ignoreFile)
{
    __this->OnFilesChanged(ignoreFile);
}

// private void OnParamChanged() :303
void ImageContainer__OnParamChanged_fn(ImageContainer* __this)
{
    __this->OnParamChanged();
}

// private void OnRooted() :248
void ImageContainer__OnRooted_fn(ImageContainer* __this)
{
    __this->OnRooted();
}

// private void OnSizingChanged() :321
void ImageContainer__OnSizingChanged_fn(ImageContainer* __this)
{
    __this->OnSizingChanged();
}

// private void OnSourceChanged(object s, object a) :198
void ImageContainer__OnSourceChanged_fn(ImageContainer* __this, uObject* s, uObject* a)
{
    __this->OnSourceChanged(s, a);
}

// private void OnSourceError(object s, Fuse.Resources.ImageSourceErrorArgs args) :208
void ImageContainer__OnSourceError_fn(ImageContainer* __this, uObject* s, ::g::Fuse::Resources::ImageSourceErrorArgs* args)
{
    __this->OnSourceError(s, args);
}

// private void OnUnrooted() :257
void ImageContainer__OnUnrooted_fn(ImageContainer* __this)
{
    __this->OnUnrooted();
}

// public generated void add_ParamChanged(Uno.EventHandler value) :302
void ImageContainer__add_ParamChanged_fn(ImageContainer* __this, uDelegate* value)
{
    __this->add_ParamChanged(value);
}

// public generated void remove_ParamChanged(Uno.EventHandler value) :302
void ImageContainer__remove_ParamChanged_fn(ImageContainer* __this, uDelegate* value)
{
    __this->remove_ParamChanged(value);
}

// private void ReapplyOptions(Fuse.Resources.ImageSource src) :93
void ImageContainer__ReapplyOptions_fn(ImageContainer* __this, ::g::Fuse::Resources::ImageSource* src)
{
    __this->ReapplyOptions(src);
}

// private void ReleaseSource() :214
void ImageContainer__ReleaseSource_fn(ImageContainer* __this)
{
    __this->ReleaseSource();
}

// public Fuse.Drawing.ResampleMode get_ResampleMode() :289
void ImageContainer__get_ResampleMode_fn(ImageContainer* __this, int* __retval)
{
    *__retval = __this->ResampleMode();
}

// public void set_ResampleMode(Fuse.Drawing.ResampleMode value) :290
void ImageContainer__set_ResampleMode_fn(ImageContainer* __this, int* value)
{
    __this->ResampleMode(*value);
}

// public Fuse.Resources.ImageSource get_Source() :156
void ImageContainer__get_Source_fn(ImageContainer* __this, ::g::Fuse::Resources::ImageSource** __retval)
{
    *__retval = __this->Source();
}

// public void set_Source(Fuse.Resources.ImageSource value) :157
void ImageContainer__set_Source_fn(ImageContainer* __this, ::g::Fuse::Resources::ImageSource* value)
{
    __this->Source(value);
}

// public generated void add_SourceChanged(Uno.EventHandler value) :197
void ImageContainer__add_SourceChanged_fn(ImageContainer* __this, uDelegate* value)
{
    __this->add_SourceChanged(value);
}

// public generated void remove_SourceChanged(Uno.EventHandler value) :197
void ImageContainer__remove_SourceChanged_fn(ImageContainer* __this, uDelegate* value)
{
    __this->remove_SourceChanged(value);
}

// public generated void add_SourceError(Fuse.Resources.ImageSourceErrorHandler value) :207
void ImageContainer__add_SourceError_fn(ImageContainer* __this, uDelegate* value)
{
    __this->add_SourceError(value);
}

// public generated void remove_SourceError(Fuse.Resources.ImageSourceErrorHandler value) :207
void ImageContainer__remove_SourceError_fn(ImageContainer* __this, uDelegate* value)
{
    __this->remove_SourceError(value);
}

// public Fuse.Elements.StretchDirection get_StretchDirection() :330
void ImageContainer__get_StretchDirection_fn(ImageContainer* __this, int* __retval)
{
    *__retval = __this->StretchDirection();
}

// public void set_StretchDirection(Fuse.Elements.StretchDirection value) :331
void ImageContainer__set_StretchDirection_fn(ImageContainer* __this, int* value)
{
    __this->StretchDirection(*value);
}

// public Fuse.Elements.StretchMode get_StretchMode() :313
void ImageContainer__get_StretchMode_fn(ImageContainer* __this, int* __retval)
{
    *__retval = __this->StretchMode();
}

// public void set_StretchMode(Fuse.Elements.StretchMode value) :314
void ImageContainer__set_StretchMode_fn(ImageContainer* __this, int* value)
{
    __this->StretchMode(*value);
}

// public Fuse.Elements.StretchSizing get_StretchSizing() :340
void ImageContainer__get_StretchSizing_fn(ImageContainer* __this, int* __retval)
{
    *__retval = __this->StretchSizing();
}

// public void set_StretchSizing(Fuse.Elements.StretchSizing value) :341
void ImageContainer__set_StretchSizing_fn(ImageContainer* __this, int* value)
{
    __this->StretchSizing(*value);
}

// private void UpdateSourceListen([bool forceOff]) :170
void ImageContainer__UpdateSourceListen_fn(ImageContainer* __this, bool* forceOff)
{
    __this->UpdateSourceListen(*forceOff);
}

// public string get_Url() :52
void ImageContainer__get_Url_fn(ImageContainer* __this, uString** __retval)
{
    *__retval = __this->Url();
}

// public void set_Url(string value) :59
void ImageContainer__set_Url_fn(ImageContainer* __this, uString* value)
{
    __this->Url(value);
}

// public ImageContainer([Fuse.Internal.IImageContainerOwner owner]) [instance] :25
void ImageContainer::ctor_(uObject* owner)
{
    Sizing = ::g::Fuse::Internal::SizingContainer::New1();
    _density = 1.0f;
    _memoryPolicy = ::g::Fuse::Resources::MemoryPolicy::PreloadRetain();
    _resampleMode = 1;
    _isVisible = true;
    _owner = owner;
}

// private void CheckPinning() [instance] :267
void ImageContainer::CheckPinning()
{
    uStackFrame __("Fuse.Internal.ImageContainer", "CheckPinning()");

    if (_source == NULL)
        return;

    bool on = _isRooted;

    if (uPtr(MemoryPolicy())->UnpinInvisible() && !_isVisible)
        on = false;

    if (on != _sourcePinned)
    {
        if (on)
            uPtr(_source)->Pin();
        else
            uPtr(_source)->Unpin();

        _sourcePinned = on;
    }
}

// public Fuse.Elements.Alignment get_ContentAlignment() [instance] :350
int ImageContainer::ContentAlignment()
{
    uStackFrame __("Fuse.Internal.ImageContainer", "get_ContentAlignment()");
    return uPtr(Sizing)->align;
}

// public void set_ContentAlignment(Fuse.Elements.Alignment value) [instance] :351
void ImageContainer::ContentAlignment(int value)
{
    uStackFrame __("Fuse.Internal.ImageContainer", "set_ContentAlignment(Fuse.Elements.Alignment)");

    if (uPtr(Sizing)->SetAlignment(value))
        OnSizingChanged();
}

// private void CreateMultiDensitySource() [instance] :142
void ImageContainer::CreateMultiDensitySource()
{
    uStackFrame __("Fuse.Internal.ImageContainer", "CreateMultiDensitySource()");
    ::g::Fuse::Resources::FileImageSource* collection5;
    float ind9;
    ::g::Fuse::Resources::MemoryPolicy* ind10;
    ::g::Uno::UX::FileSource* ret14;
    ::g::Fuse::Resources::MultiDensityImageSource* s = ::g::Fuse::Resources::MultiDensityImageSource::New2();

    for (uObject* enum4 = (uObject*)uPtr(_files)->GetEnumerator(); ::g::Uno::Collections::IEnumerator::MoveNext(uInterface(uPtr(enum4), ::TYPES[16/*Uno.Collections.IEnumerator*/])); )
    {
        ::g::Uno::UX::FileSource* f = (::g::Uno::Collections::IEnumerator1::get_Current_ex(uInterface(uPtr(enum4), ::TYPES[20/*Uno.Collections.IEnumerator<Uno.UX.FileSource>*/]), &ret14), ret14);
        ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(s)->Sources()), ::TYPES[21/*Uno.Collections.ICollection<Fuse.Resources.ImageSource>*/]), (collection5 = ::g::Fuse::Resources::FileImageSource::New3(f), ind9 = Density(), uPtr(collection5)->Density(ind9), ind9, ind10 = MemoryPolicy(), uPtr(collection5)->DefaultPolicy(ind10), ind10, collection5));
    }

    Source(s);
}

// public float get_Density() [instance] :68
float ImageContainer::Density()
{
    return _density;
}

// public void set_Density(float value) [instance] :69
void ImageContainer::Density(float value)
{
    uStackFrame __("Fuse.Internal.ImageContainer", "set_Density(float)");

    if (_density != value)
    {
        _density = value;
        OnParamChanged();
    }
}

// public Uno.UX.FileSource get_File() [instance] :34
::g::Uno::UX::FileSource* ImageContainer::File()
{
    uStackFrame __("Fuse.Internal.ImageContainer", "get_File()");
    ::g::Uno::UX::FileSource* ret17;

    if (_files == NULL)
        return NULL;
    else
        return (::g::Uno::Collections::RootableList__get_Item_fn(uPtr(_files), uCRef<int>(0), &ret17), ret17);
}

// public void set_File(Uno.UX.FileSource value) [instance] :39
void ImageContainer::File(::g::Uno::UX::FileSource* value)
{
    uStackFrame __("Fuse.Internal.ImageContainer", "set_File(Uno.UX.FileSource)");
    ::g::Uno::UX::FileSource* ret18;
    uObject* files = Files();

    if (((::g::Uno::Collections::ICollection::Count(uInterface(uPtr(files), ::TYPES[31/*Uno.Collections.ICollection<Uno.UX.FileSource>*/])) == 0) || (::g::Uno::Collections::ICollection::Count(uInterface(uPtr(files), ::TYPES[31/*Uno.Collections.ICollection<Uno.UX.FileSource>*/])) > 1)) || ((::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(files), ::TYPES[32/*Uno.Collections.IList<Uno.UX.FileSource>*/]), uCRef<int>(0), &ret18), ret18) != value))
    {
        ::g::Uno::Collections::ICollection::Clear(uInterface(uPtr(files), ::TYPES[31/*Uno.Collections.ICollection<Uno.UX.FileSource>*/]));
        ::g::Uno::Collections::ICollection::Add_ex(uInterface(files, ::TYPES[31/*Uno.Collections.ICollection<Uno.UX.FileSource>*/]), value);
    }
}

// public Uno.Collections.IList<Uno.UX.FileSource> get_Files() [instance] :114
uObject* ImageContainer::Files()
{
    uStackFrame __("Fuse.Internal.ImageContainer", "get_Files()");

    if (_files == NULL)
    {
        _files = ((::g::Uno::Collections::RootableList*)::g::Uno::Collections::RootableList::New1(::TYPES[33/*Uno.Collections.RootableList<Uno.UX.FileSource>*/]));

        if (IsRooted())
            uPtr(_files)->Subscribe(uDelegate::New(::TYPES[23/*Uno.Action<Uno.UX.FileSource>*/], (void*)ImageContainer__OnFilesChanged_fn, this), uDelegate::New(::TYPES[23/*Uno.Action<Uno.UX.FileSource>*/], (void*)ImageContainer__OnFilesChanged_fn, this));
    }

    return (uObject*)_files;
}

// public texture2D GetTexture() [instance] :358
::g::Uno::Graphics::Texture2D* ImageContainer::GetTexture()
{
    uStackFrame __("Fuse.Internal.ImageContainer", "GetTexture()");

    if (Source() != NULL)
        return uPtr(Source())->GetTexture();

    return NULL;
}

// public bool get_IsRooted() [instance] :231
bool ImageContainer::IsRooted()
{
    return _isRooted;
}

// public void set_IsRooted(bool value) [instance] :232
void ImageContainer::IsRooted(bool value)
{
    uStackFrame __("Fuse.Internal.ImageContainer", "set_IsRooted(bool)");

    if (_isRooted == value)
        return;

    _isRooted = value;

    if (_isRooted)
        OnRooted();
    else
        OnUnrooted();

    CheckPinning();
    UpdateSourceListen(false);
}

// public bool get_IsVisible() [instance] :368
bool ImageContainer::IsVisible()
{
    return _isVisible;
}

// public void set_IsVisible(bool value) [instance] :369
void ImageContainer::IsVisible(bool value)
{
    uStackFrame __("Fuse.Internal.ImageContainer", "set_IsVisible(bool)");

    if (_isVisible != value)
    {
        _isVisible = value;
        CheckPinning();
    }
}

// public Fuse.Resources.MemoryPolicy get_MemoryPolicy() [instance] :84
::g::Fuse::Resources::MemoryPolicy* ImageContainer::MemoryPolicy()
{
    return _memoryPolicy;
}

// public void set_MemoryPolicy(Fuse.Resources.MemoryPolicy value) [instance] :85
void ImageContainer::MemoryPolicy(::g::Fuse::Resources::MemoryPolicy* value)
{
    uStackFrame __("Fuse.Internal.ImageContainer", "set_MemoryPolicy(Fuse.Resources.MemoryPolicy)");
    _memoryPolicy = value;
    ReapplyOptions(Source());
    CheckPinning();
}

// private void OnFilesChanged(Uno.UX.FileSource ignoreFile) [instance] :126
void ImageContainer::OnFilesChanged(::g::Uno::UX::FileSource* ignoreFile)
{
    uStackFrame __("Fuse.Internal.ImageContainer", "OnFilesChanged(Uno.UX.FileSource)");
    ::g::Fuse::Resources::FileImageSource* collection3;
    float ind6;
    ::g::Uno::UX::FileSource* ind7;
    ::g::Fuse::Resources::MemoryPolicy* ind8;
    ::g::Uno::UX::FileSource* ret15;

    if (uPtr(_files)->Count() == 0)
        Source(NULL);
    else if (uPtr(_files)->Count() == 1)
        Source((collection3 = ::g::Fuse::Resources::FileImageSource::New2(), ind6 = Density(), uPtr(collection3)->Density(ind6), ind6, ind7 = (::g::Uno::Collections::RootableList__get_Item_fn(uPtr(_files), uCRef<int>(0), &ret15), ret15), uPtr(collection3)->File(ind7), ind7, ind8 = MemoryPolicy(), uPtr(collection3)->DefaultPolicy(ind8), ind8, collection3));
    else
        CreateMultiDensitySource();
}

// private void OnParamChanged() [instance] :303
void ImageContainer::OnParamChanged()
{
    uStackFrame __("Fuse.Internal.ImageContainer", "OnParamChanged()");

    if (::g::Uno::Delegate::op_Inequality(ParamChanged1, NULL))
        uPtr(ParamChanged1)->Invoke(2, this, (::g::Uno::EventArgs*)::g::Uno::EventArgs::Empty());

    if (_owner != NULL)
        ::g::Fuse::Internal::IImageContainerOwner::OnParamChanged(uInterface(uPtr(_owner), ::TYPES[22/*Fuse.Internal.IImageContainerOwner*/]));
}

// private void OnRooted() [instance] :248
void ImageContainer::OnRooted()
{
    uStackFrame __("Fuse.Internal.ImageContainer", "OnRooted()");

    if (_files != NULL)
    {
        uPtr(_files)->Subscribe(uDelegate::New(::TYPES[23/*Uno.Action<Uno.UX.FileSource>*/], (void*)ImageContainer__OnFilesChanged_fn, this), uDelegate::New(::TYPES[23/*Uno.Action<Uno.UX.FileSource>*/], (void*)ImageContainer__OnFilesChanged_fn, this));
        OnFilesChanged(NULL);
    }
}

// private void OnSizingChanged() [instance] :321
void ImageContainer::OnSizingChanged()
{
    uStackFrame __("Fuse.Internal.ImageContainer", "OnSizingChanged()");
    OnParamChanged();

    if (_owner != NULL)
        ::g::Fuse::Internal::IImageContainerOwner::OnSizingChanged(uInterface(uPtr(_owner), ::TYPES[22/*Fuse.Internal.IImageContainerOwner*/]));
}

// private void OnSourceChanged(object s, object a) [instance] :198
void ImageContainer::OnSourceChanged(uObject* s, uObject* a)
{
    uStackFrame __("Fuse.Internal.ImageContainer", "OnSourceChanged(object,object)");
    CheckPinning();

    if (::g::Uno::Delegate::op_Inequality(SourceChanged1, NULL))
        uPtr(SourceChanged1)->Invoke(2, this, (::g::Uno::EventArgs*)::g::Uno::EventArgs::Empty());

    if (_owner != NULL)
        ::g::Fuse::Internal::IImageContainerOwner::OnSourceChanged(uInterface(uPtr(_owner), ::TYPES[22/*Fuse.Internal.IImageContainerOwner*/]));
}

// private void OnSourceError(object s, Fuse.Resources.ImageSourceErrorArgs args) [instance] :208
void ImageContainer::OnSourceError(uObject* s, ::g::Fuse::Resources::ImageSourceErrorArgs* args)
{
    uStackFrame __("Fuse.Internal.ImageContainer", "OnSourceError(object,Fuse.Resources.ImageSourceErrorArgs)");

    if (::g::Uno::Delegate::op_Inequality(SourceError1, NULL))
        uPtr(SourceError1)->Invoke(2, this, args);
}

// private void OnUnrooted() [instance] :257
void ImageContainer::OnUnrooted()
{
    uStackFrame __("Fuse.Internal.ImageContainer", "OnUnrooted()");

    if (_files != NULL)
        uPtr(_files)->Unsubscribe();
}

// public generated void add_ParamChanged(Uno.EventHandler value) [instance] :302
void ImageContainer::add_ParamChanged(uDelegate* value)
{
    uStackFrame __("Fuse.Internal.ImageContainer", "add_ParamChanged(Uno.EventHandler)");
    ParamChanged1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(ParamChanged1, value), ::TYPES[29/*Uno.EventHandler*/]);
}

// public generated void remove_ParamChanged(Uno.EventHandler value) [instance] :302
void ImageContainer::remove_ParamChanged(uDelegate* value)
{
    uStackFrame __("Fuse.Internal.ImageContainer", "remove_ParamChanged(Uno.EventHandler)");
    ParamChanged1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(ParamChanged1, value), ::TYPES[29/*Uno.EventHandler*/]);
}

// private void ReapplyOptions(Fuse.Resources.ImageSource src) [instance] :93
void ImageContainer::ReapplyOptions(::g::Fuse::Resources::ImageSource* src)
{
    uStackFrame __("Fuse.Internal.ImageContainer", "ReapplyOptions(Fuse.Resources.ImageSource)");
    ::g::Fuse::Resources::ImageSource* ret16;
    ::g::Fuse::Resources::FileImageSource* f = uAs< ::g::Fuse::Resources::FileImageSource*>(src, ::TYPES[24/*Fuse.Resources.FileImageSource*/]);

    if ((f != NULL) && (MemoryPolicy() != NULL))
        uPtr(f)->DefaultPolicy(MemoryPolicy());

    ::g::Fuse::Resources::HttpImageSource* hf = uAs< ::g::Fuse::Resources::HttpImageSource*>(src, ::TYPES[25/*Fuse.Resources.HttpImageSource*/]);

    if ((hf != NULL) && (MemoryPolicy() != NULL))
        uPtr(hf)->DefaultPolicy(MemoryPolicy());

    ::g::Fuse::Resources::MultiDensityImageSource* mf = uAs< ::g::Fuse::Resources::MultiDensityImageSource*>(Source(), ::TYPES[26/*Fuse.Resources.MultiDensityImageSource*/]);

    if (mf != NULL)

        for (uObject* enum2 = (uObject*)::g::Uno::Collections::IEnumerable::GetEnumerator(uInterface(uPtr(uPtr(mf)->Sources()), ::TYPES[27/*Uno.Collections.IEnumerable<Fuse.Resources.ImageSource>*/])); ::g::Uno::Collections::IEnumerator::MoveNext(uInterface(uPtr(enum2), ::TYPES[16/*Uno.Collections.IEnumerator*/])); )
        {
            ::g::Fuse::Resources::ImageSource* s = (::g::Uno::Collections::IEnumerator1::get_Current_ex(uInterface(uPtr(enum2), ::TYPES[28/*Uno.Collections.IEnumerator<Fuse.Resources.ImageSource>*/]), &ret16), ret16);
            ReapplyOptions(s);
        }
}

// private void ReleaseSource() [instance] :214
void ImageContainer::ReleaseSource()
{
    uStackFrame __("Fuse.Internal.ImageContainer", "ReleaseSource()");

    if (_source == NULL)
        return;

    UpdateSourceListen(true);

    if (_sourcePinned)
    {
        uPtr(_source)->Unpin();
        _sourcePinned = false;
    }

    _source = NULL;
}

// public Fuse.Drawing.ResampleMode get_ResampleMode() [instance] :289
int ImageContainer::ResampleMode()
{
    return _resampleMode;
}

// public void set_ResampleMode(Fuse.Drawing.ResampleMode value) [instance] :290
void ImageContainer::ResampleMode(int value)
{
    uStackFrame __("Fuse.Internal.ImageContainer", "set_ResampleMode(Fuse.Drawing.ResampleMode)");

    if (_resampleMode != value)
    {
        if (value == 2)
            ::g::Fuse::Diagnostics::Deprecated(::STRINGS[5/*"ResampleMod...*/], this, ::STRINGS[3/*"/Users/medb...*/], 295, ::STRINGS[6/*"set_Resampl...*/]);

        _resampleMode = value;
        OnParamChanged();
    }
}

// public Fuse.Resources.ImageSource get_Source() [instance] :156
::g::Fuse::Resources::ImageSource* ImageContainer::Source()
{
    return _source;
}

// public void set_Source(Fuse.Resources.ImageSource value) [instance] :157
void ImageContainer::Source(::g::Fuse::Resources::ImageSource* value)
{
    uStackFrame __("Fuse.Internal.ImageContainer", "set_Source(Fuse.Resources.ImageSource)");

    if (_source != value)
    {
        ReleaseSource();
        _source = value;
        UpdateSourceListen(false);
        OnSourceChanged(NULL, NULL);
    }
}

// public generated void add_SourceChanged(Uno.EventHandler value) [instance] :197
void ImageContainer::add_SourceChanged(uDelegate* value)
{
    uStackFrame __("Fuse.Internal.ImageContainer", "add_SourceChanged(Uno.EventHandler)");
    SourceChanged1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(SourceChanged1, value), ::TYPES[29/*Uno.EventHandler*/]);
}

// public generated void remove_SourceChanged(Uno.EventHandler value) [instance] :197
void ImageContainer::remove_SourceChanged(uDelegate* value)
{
    uStackFrame __("Fuse.Internal.ImageContainer", "remove_SourceChanged(Uno.EventHandler)");
    SourceChanged1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(SourceChanged1, value), ::TYPES[29/*Uno.EventHandler*/]);
}

// public generated void add_SourceError(Fuse.Resources.ImageSourceErrorHandler value) [instance] :207
void ImageContainer::add_SourceError(uDelegate* value)
{
    uStackFrame __("Fuse.Internal.ImageContainer", "add_SourceError(Fuse.Resources.ImageSourceErrorHandler)");
    SourceError1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(SourceError1, value), ::TYPES[30/*Fuse.Resources.ImageSourceErrorHandler*/]);
}

// public generated void remove_SourceError(Fuse.Resources.ImageSourceErrorHandler value) [instance] :207
void ImageContainer::remove_SourceError(uDelegate* value)
{
    uStackFrame __("Fuse.Internal.ImageContainer", "remove_SourceError(Fuse.Resources.ImageSourceErrorHandler)");
    SourceError1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(SourceError1, value), ::TYPES[30/*Fuse.Resources.ImageSourceErrorHandler*/]);
}

// public Fuse.Elements.StretchDirection get_StretchDirection() [instance] :330
int ImageContainer::StretchDirection()
{
    uStackFrame __("Fuse.Internal.ImageContainer", "get_StretchDirection()");
    return uPtr(Sizing)->stretchDirection;
}

// public void set_StretchDirection(Fuse.Elements.StretchDirection value) [instance] :331
void ImageContainer::StretchDirection(int value)
{
    uStackFrame __("Fuse.Internal.ImageContainer", "set_StretchDirection(Fuse.Elements.StretchDirection)");

    if (uPtr(Sizing)->SetStretchDirection(value))
        OnSizingChanged();
}

// public Fuse.Elements.StretchMode get_StretchMode() [instance] :313
int ImageContainer::StretchMode()
{
    uStackFrame __("Fuse.Internal.ImageContainer", "get_StretchMode()");
    return uPtr(Sizing)->stretchMode;
}

// public void set_StretchMode(Fuse.Elements.StretchMode value) [instance] :314
void ImageContainer::StretchMode(int value)
{
    uStackFrame __("Fuse.Internal.ImageContainer", "set_StretchMode(Fuse.Elements.StretchMode)");

    if (uPtr(Sizing)->SetStretchMode(value))
        OnSizingChanged();
}

// public Fuse.Elements.StretchSizing get_StretchSizing() [instance] :340
int ImageContainer::StretchSizing()
{
    uStackFrame __("Fuse.Internal.ImageContainer", "get_StretchSizing()");
    return uPtr(Sizing)->stretchSizing;
}

// public void set_StretchSizing(Fuse.Elements.StretchSizing value) [instance] :341
void ImageContainer::StretchSizing(int value)
{
    uStackFrame __("Fuse.Internal.ImageContainer", "set_StretchSizing(Fuse.Elements.StretchSizing)");

    if (uPtr(Sizing)->SetStretchSizing(value))
        OnSizingChanged();
}

// private void UpdateSourceListen([bool forceOff]) [instance] :170
void ImageContainer::UpdateSourceListen(bool forceOff)
{
    uStackFrame __("Fuse.Internal.ImageContainer", "UpdateSourceListen([bool])");
    bool should = (!forceOff && (_source != NULL)) && IsRooted();

    if (should == _isSourceListen)
        return;

    if (_source == NULL)
    {
        ::g::Fuse::Diagnostics::InternalError(::STRINGS[2/*"Switching l...*/], this, ::STRINGS[3/*"/Users/medb...*/], 179, ::STRINGS[4/*"UpdateSourc...*/]);
        _isSourceListen = false;
        return;
    }

    _isSourceListen = should;

    if (should)
    {
        uPtr(_source)->add_Changed(uDelegate::New(::TYPES[29/*Uno.EventHandler*/], (void*)ImageContainer__OnSourceChanged_fn, this));
        uPtr(_source)->add_Error(uDelegate::New(::TYPES[30/*Fuse.Resources.ImageSourceErrorHandler*/], (void*)ImageContainer__OnSourceError_fn, this));
    }
    else
    {
        uPtr(_source)->remove_Changed(uDelegate::New(::TYPES[29/*Uno.EventHandler*/], (void*)ImageContainer__OnSourceChanged_fn, this));
        uPtr(_source)->remove_Error(uDelegate::New(::TYPES[30/*Fuse.Resources.ImageSourceErrorHandler*/], (void*)ImageContainer__OnSourceError_fn, this));
    }
}

// public string get_Url() [instance] :52
uString* ImageContainer::Url()
{
    uStackFrame __("Fuse.Internal.ImageContainer", "get_Url()");
    ::g::Fuse::Resources::HttpImageSource* http = uAs< ::g::Fuse::Resources::HttpImageSource*>(Source(), ::TYPES[25/*Fuse.Resources.HttpImageSource*/]);

    if (http == NULL)
        return NULL;

    return uPtr(http)->Url();
}

// public void set_Url(string value) [instance] :59
void ImageContainer::Url(uString* value)
{
    uStackFrame __("Fuse.Internal.ImageContainer", "set_Url(string)");
    ::g::Fuse::Resources::HttpImageSource* collection1;
    float ind11;
    ::g::Fuse::Resources::MemoryPolicy* ind12;
    Source((collection1 = ::g::Fuse::Resources::HttpImageSource::New2(), uPtr(collection1)->Url(value), value, ind11 = Density(), uPtr(collection1)->Density(ind11), ind11, ind12 = MemoryPolicy(), uPtr(collection1)->DefaultPolicy(ind12), ind12, collection1));
}

// public ImageContainer New([Fuse.Internal.IImageContainerOwner owner]) [static] :25
ImageContainer* ImageContainer::New1(uObject* owner)
{
    ImageContainer* obj13 = (ImageContainer*)uNew(ImageContainer_typeof());
    obj13->ctor_(owner);
    return obj13;
}
// }

// /Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Common/1.0.2/internal/$.uno
// ----------------------------------------------------------------------------------------------

// internal struct MiniList<T> :1516
// {
// public void Insert(int index, T value) [adapter] :1537
static void MiniList__Insert_ex(uObject* __this, int* index, uObject* value)
{
    MiniList__Insert_fn((MiniList*)((uint8_t*)__this + sizeof(uObject)), __this->__type, index, value);
}

// public void RemoveAt(int index) [adapter] :1571
static void MiniList__RemoveAt_ex(uObject* __this, int* index)
{
    MiniList__RemoveAt_fn((MiniList*)((uint8_t*)__this + sizeof(uObject)), __this->__type, index);
}

// public T get_Item(int index) [adapter] :1606
static void MiniList__get_Item_ex(uObject* __this, int* index, uObject** __retval)
{
    MiniList__get_Item_fn((MiniList*)((uint8_t*)__this + sizeof(uObject)), __this->__type, index, __retval);
}

// public void Clear() [adapter] :1586
static void MiniList__Clear_ex(uObject* __this)
{
    MiniList__Clear_fn((MiniList*)((uint8_t*)__this + sizeof(uObject)), __this->__type);
}

// public void Add(T value) [adapter] :1532
static void MiniList__Add_ex(uObject* __this, uObject* value)
{
    MiniList__Add_fn((MiniList*)((uint8_t*)__this + sizeof(uObject)), __this->__type, value);
}

// public bool Remove(T value) [adapter] :1556
static void MiniList__Remove_ex(uObject* __this, uObject* value, bool* __retval)
{
    MiniList__Remove_fn((MiniList*)((uint8_t*)__this + sizeof(uObject)), __this->__type, value, __retval);
}

// public bool Contains(T value) [adapter] :1595
static void MiniList__Contains_ex(uObject* __this, uObject* value, bool* __retval)
{
    MiniList__Contains_fn((MiniList*)((uint8_t*)__this + sizeof(uObject)), __this->__type, value, __retval);
}

// public int get_Count() [adapter] :1522
static void MiniList__get_Count_ex(uObject* __this, int* __retval)
{
    MiniList__get_Count_fn((MiniList*)((uint8_t*)__this + sizeof(uObject)), __this->__type, __retval);
}

// public Uno.Collections.IEnumerator<T> GetEnumerator() [adapter] :1619
static void MiniList__GetEnumerator_ex(uObject* __this, uObject** __retval)
{
    MiniList__GetEnumerator_fn((MiniList*)((uint8_t*)__this + sizeof(uObject)), __this->__type, __retval);
}

static void MiniList_build(uType* type)
{
    ::STRINGS[7] = uString::Const("value");
    ::STRINGS[8] = uString::Const("index");
    ::TYPES[34] = ::g::Uno::Collections::List_typeof();
    ::TYPES[35] = MiniList__Enumerator_typeof();
    type->SetPrecalc(
        ::g::Uno::Collections::List_typeof()->MakeType(type->T(0), NULL),
        MiniList__Enumerator_typeof()->MakeType(type->T(0), type->T(0), NULL),
        type->T(0));
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(type->T(0), NULL), offsetof(MiniList_type, interface0),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(type->T(0), NULL), offsetof(MiniList_type, interface1),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(type->T(0), NULL), offsetof(MiniList_type, interface2));
    type->SetFields(0,
        uObject_typeof(), offsetof(::g::Fuse::Internal::MiniList, _list), 0);
}

MiniList_type* MiniList_typeof()
{
    static uSStrong<MiniList_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.GenericCount = 1;
    options.InterfaceCount = 3;
    options.PrecalcCount = 3;
    options.ValueSize = sizeof(MiniList);
    options.TypeSize = sizeof(MiniList_type);
    type = (MiniList_type*)uStructType::New("Fuse.Internal.MiniList`1", options);
    type->fp_build_ = MiniList_build;
    type->interface0.fp_Insert = (void(*)(uObject*, int*, void*))MiniList__Insert_ex;
    type->interface0.fp_RemoveAt = MiniList__RemoveAt_ex;
    type->interface0.fp_get_Item = (void(*)(uObject*, int*, uTRef))MiniList__get_Item_ex;
    type->interface1.fp_Clear = MiniList__Clear_ex;
    type->interface1.fp_Add = (void(*)(uObject*, void*))MiniList__Add_ex;
    type->interface1.fp_Remove = (void(*)(uObject*, void*, bool*))MiniList__Remove_ex;
    type->interface1.fp_Contains = (void(*)(uObject*, void*, bool*))MiniList__Contains_ex;
    type->interface1.fp_get_Count = MiniList__get_Count_ex;
    type->interface2.fp_GetEnumerator = (void(*)(uObject*, uObject**))MiniList__GetEnumerator_ex;
    return type;
}

// public void Add(T value) :1532
void MiniList__Add_fn(MiniList* __this, uType* __type, uObject* value)
{
    __this->Add(__type, value);
}

// public void Clear() :1586
void MiniList__Clear_fn(MiniList* __this, uType* __type)
{
    __this->Clear(__type);
}

// public bool Contains(T value) :1595
void MiniList__Contains_fn(MiniList* __this, uType* __type, uObject* value, bool* __retval)
{
    *__retval = __this->Contains(__type, value);
}

// public int get_Count() :1522
void MiniList__get_Count_fn(MiniList* __this, uType* __type, int* __retval)
{
    *__retval = __this->Count(__type);
}

// public Uno.Collections.IEnumerator<T> GetEnumerator() :1619
void MiniList__GetEnumerator_fn(MiniList* __this, uType* __type, uObject** __retval)
{
    *__retval = __this->GetEnumerator(__type);
}

// public void Insert(int index, T value) :1537
void MiniList__Insert_fn(MiniList* __this, uType* __type, int* index, uObject* value)
{
    __this->Insert(__type, *index, value);
}

// public T get_Item(int index) :1606
void MiniList__get_Item_fn(MiniList* __this, uType* __type, int* index, uObject** __retval)
{
    *__retval = __this->Item(__type, *index);
}

// public bool Remove(T value) :1556
void MiniList__Remove_fn(MiniList* __this, uType* __type, uObject* value, bool* __retval)
{
    *__retval = __this->Remove(__type, value);
}

// public void RemoveAt(int index) :1571
void MiniList__RemoveAt_fn(MiniList* __this, uType* __type, int* index)
{
    __this->RemoveAt(__type, *index);
}

// public void Add(T value) [instance] :1532
void MiniList::Add(uType* __type, uObject* value)
{
    uStackFrame __("Fuse.Internal.MiniList`1", "Add(T)");
    Insert(__type, Count(__type), value);
}

// public void Clear() [instance] :1586
void MiniList::Clear(uType* __type)
{
    uType* __types[] = {
        __type->Precalced(0/*Uno.Collections.List<T>*/),
    };
    uStackFrame __("Fuse.Internal.MiniList`1", "Clear()");
    ::g::Uno::Collections::List* list = uAs< ::g::Uno::Collections::List*>(_list, __types[0]);

    if (list != NULL)
        uPtr(list)->Clear();
    else
        _list = NULL;
}

// public bool Contains(T value) [instance] :1595
bool MiniList::Contains(uType* __type, uObject* value)
{
    uType* __types[] = {
        __type->Precalced(0/*Uno.Collections.List<T>*/),
    };
    uStackFrame __("Fuse.Internal.MiniList`1", "Contains(T)");
    bool ret1;
    ::g::Uno::Collections::List* list = uAs< ::g::Uno::Collections::List*>(_list, __types[0]);

    if (list != NULL)
        return (::g::Uno::Collections::List__Contains_fn(uPtr(list), value, &ret1), ret1);

    return (_list != NULL) && ::g::Uno::Object::Equals1(_list, value);
}

// public int get_Count() [instance] :1522
int MiniList::Count(uType* __type)
{
    uType* __types[] = {
        __type->Precalced(0/*Uno.Collections.List<T>*/),
    };
    uStackFrame __("Fuse.Internal.MiniList`1", "get_Count()");
    ::g::Uno::Collections::List* list = uAs< ::g::Uno::Collections::List*>(_list, __types[0]);

    if (list != NULL)
        return uPtr(list)->Count();

    return (_list == NULL) ? 0 : 1;
}

// public Uno.Collections.IEnumerator<T> GetEnumerator() [instance] :1619
uObject* MiniList::GetEnumerator(uType* __type)
{
    uType* __types[] = {
        __type->Precalced(1/*Fuse.Internal.MiniList<T>.Enumerator<T>*/),
    };
    return uBox(__types[0], MiniList__Enumerator__New1(__types[0], *this));
}

// public void Insert(int index, T value) [instance] :1537
void MiniList::Insert(uType* __type, int index, uObject* value)
{
    uType* __types[] = {
        __type->Precalced(0/*Uno.Collections.List<T>*/),
        __type->Precalced(2/*T*/),
    };
    uStackFrame __("Fuse.Internal.MiniList`1", "Insert(int,T)");

    if (value == NULL)
        U_THROW(::g::Uno::ArgumentNullException::New6(::STRINGS[7/*"value"*/]));

    ::g::Uno::Collections::List* list = uAs< ::g::Uno::Collections::List*>(_list, __types[0]);

    if (list == NULL)
    {
        if ((_list == NULL) && (index != 0))
            U_THROW(::g::Uno::ArgumentOutOfRangeException::New6(::STRINGS[8/*"index"*/]));

        list = (::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(__types[0]);

        if (_list != NULL)
            ::g::Uno::Collections::List__Add_fn(uPtr(list), uAs<uObject*>(_list, __types[1]));

        _list = list;
    }

    ::g::Uno::Collections::List__Insert_fn(uPtr(list), uCRef<int>(index), value);
}

// public T get_Item(int index) [instance] :1606
uObject* MiniList::Item(uType* __type, int index)
{
    uType* __types[] = {
        __type->Precalced(0/*Uno.Collections.List<T>*/),
        __type->Precalced(2/*T*/),
    };
    uStackFrame __("Fuse.Internal.MiniList`1", "get_Item(int)");
    uObject* ret3;
    ::g::Uno::Collections::List* list = uAs< ::g::Uno::Collections::List*>(_list, __types[0]);

    if (list != NULL)
        return (::g::Uno::Collections::List__get_Item_fn(uPtr(list), uCRef<int>(index), &ret3), ret3);

    if (index != 0)
        U_THROW(::g::Uno::IndexOutOfRangeException::New4());

    return uAs<uObject*>(_list, __types[1]);
}

// public bool Remove(T value) [instance] :1556
bool MiniList::Remove(uType* __type, uObject* value)
{
    uType* __types[] = {
        __type->Precalced(0/*Uno.Collections.List<T>*/),
    };
    uStackFrame __("Fuse.Internal.MiniList`1", "Remove(T)");
    bool ret2;

    if ((_list != NULL) && ::g::Uno::Object::Equals1(_list, value))
    {
        _list = NULL;
        return true;
    }

    ::g::Uno::Collections::List* list = uAs< ::g::Uno::Collections::List*>(_list, __types[0]);

    if (list == NULL)
        return false;

    return (::g::Uno::Collections::List__Remove_fn(uPtr(list), value, &ret2), ret2);
}

// public void RemoveAt(int index) [instance] :1571
void MiniList::RemoveAt(uType* __type, int index)
{
    uType* __types[] = {
        __type->Precalced(0/*Uno.Collections.List<T>*/),
    };
    uStackFrame __("Fuse.Internal.MiniList`1", "RemoveAt(int)");
    ::g::Uno::Collections::List* list = uAs< ::g::Uno::Collections::List*>(_list, __types[0]);

    if (list != NULL)
    {
        uPtr(list)->RemoveAt(index);
        return;
    }

    if (index != 0)
        U_THROW(::g::Uno::ArgumentOutOfRangeException::New6(::STRINGS[8/*"index"*/]));

    _list = NULL;
}
// }

// /Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Common/1.0.2/internal/$.uno
// ----------------------------------------------------------------------------------------------

// public delegate float4 Curves.PointInterpolater(float4 p0, float4 p1, float4 m0, float4 m1, float t) :877
uDelegateType* Curves__PointInterpolater_typeof()
{
    static uSStrong<uDelegateType*> type;
    if (type != NULL) return type;

    type = uDelegateType::New("Fuse.Internal.Curves.PointInterpolater", 5, 0);
    type->SetSignature(::g::Uno::Float4_typeof(),
        ::g::Uno::Float4_typeof(),
        ::g::Uno::Float4_typeof(),
        ::g::Uno::Float4_typeof(),
        ::g::Uno::Float4_typeof(),
        ::g::Uno::Float_typeof());
    return type;
}

// /Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Common/1.0.2/internal/$.uno
// ----------------------------------------------------------------------------------------------

// internal sealed class RectPacker :1807
// {
static void RectPacker_build(uType* type)
{
    ::TYPES[36] = ::g::Uno::Collections::LinkedList_typeof()->MakeType(::g::Fuse::Internal::SkylineNode_typeof(), NULL);
    type->SetFields(0,
        ::TYPES[36/*Uno.Collections.LinkedList<Fuse.Internal.SkylineNode>*/], offsetof(::g::Fuse::Internal::RectPacker, _skyline), 0,
        ::g::Uno::Int2_typeof(), offsetof(::g::Fuse::Internal::RectPacker, _Size), 0);
}

uType* RectPacker_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ObjectSize = sizeof(RectPacker);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Internal.RectPacker", options);
    type->fp_build_ = RectPacker_build;
    return type;
}

// public RectPacker(int2 size) :1812
void RectPacker__ctor__fn(RectPacker* __this, ::g::Uno::Int2* size)
{
    __this->ctor_(*size);
}

// private void MergeNeighbours(Uno.Collections.LinkedListNode<Fuse.Internal.SkylineNode> node) :1898
void RectPacker__MergeNeighbours_fn(RectPacker* __this, ::g::Uno::Collections::LinkedListNode* node)
{
    __this->MergeNeighbours(node);
}

// public RectPacker New(int2 size) :1812
void RectPacker__New1_fn(::g::Uno::Int2* size, RectPacker** __retval)
{
    *__retval = RectPacker::New1(*size);
}

// private void ReplaceNodes(Uno.Collections.LinkedListNode<Fuse.Internal.SkylineNode> node, Fuse.Internal.SkylineNode newSkyline) :1872
void RectPacker__ReplaceNodes_fn(RectPacker* __this, ::g::Uno::Collections::LinkedListNode* node, ::g::Fuse::Internal::SkylineNode* newSkyline)
{
    __this->ReplaceNodes(node, *newSkyline);
}

// public generated int2 get_Size() :1809
void RectPacker__get_Size_fn(RectPacker* __this, ::g::Uno::Int2* __retval)
{
    *__retval = __this->Size();
}

// private generated void set_Size(int2 value) :1809
void RectPacker__set_Size_fn(RectPacker* __this, ::g::Uno::Int2* value)
{
    __this->Size(*value);
}

// public bool TryAdd(int2 size, Uno.Recti& rect) :1819
void RectPacker__TryAdd_fn(RectPacker* __this, ::g::Uno::Int2* size, ::g::Uno::Recti* rect, bool* __retval)
{
    *__retval = __this->TryAdd(*size, rect);
}

// private bool TryFit(Uno.Collections.LinkedListNode<Fuse.Internal.SkylineNode> node, int2 size, int& height) :1855
void RectPacker__TryFit_fn(RectPacker* __this, ::g::Uno::Collections::LinkedListNode* node, ::g::Uno::Int2* size, int* height, bool* __retval)
{
    *__retval = __this->TryFit(node, *size, height);
}

// public RectPacker(int2 size) [instance] :1812
void RectPacker::ctor_(::g::Uno::Int2 size)
{
    uStackFrame __("Fuse.Internal.RectPacker", ".ctor(int2)");
    ::g::Uno::Collections::LinkedListNode* ret2;
    Size(size);
    _skyline = ((::g::Uno::Collections::LinkedList*)::g::Uno::Collections::LinkedList::New1(::TYPES[36/*Uno.Collections.LinkedList<Fuse.Internal.SkylineNode>*/]));
    ::g::Uno::Collections::LinkedList__AddFirst_fn(uPtr(_skyline), uCRef(::g::Fuse::Internal::SkylineNode__New1(::g::Uno::Int2__New1(0), Size().X)), &ret2);
}

// private void MergeNeighbours(Uno.Collections.LinkedListNode<Fuse.Internal.SkylineNode> node) [instance] :1898
void RectPacker::MergeNeighbours(::g::Uno::Collections::LinkedListNode* node)
{
    uStackFrame __("Fuse.Internal.RectPacker", "MergeNeighbours(Uno.Collections.LinkedListNode<Fuse.Internal.SkylineNode>)");
    ::g::Fuse::Internal::SkylineNode ret3;
    ::g::Fuse::Internal::SkylineNode ret4;
    ::g::Uno::Collections::LinkedListNode* ret5;
    ::g::Fuse::Internal::SkylineNode ret6;
    ::g::Fuse::Internal::SkylineNode ret7;
    ::g::Uno::Collections::LinkedListNode* ret8;

    if (((::g::Uno::Collections::LinkedListNode*)uPtr(node)->Next()) != NULL)
    {
        ::g::Fuse::Internal::SkylineNode l = (::g::Uno::Collections::LinkedListNode__get_Value_fn(uPtr(node), &ret3), ret3);
        ::g::Fuse::Internal::SkylineNode r = (::g::Uno::Collections::LinkedListNode__get_Value_fn(uPtr((::g::Uno::Collections::LinkedListNode*)node->Next()), &ret4), ret4);

        if (l.Position.Y == r.Position.Y)
        {
            ::g::Uno::Collections::LinkedListNode* newNode = (::g::Uno::Collections::LinkedList__AddBefore_fn(uPtr(_skyline), node, uCRef(::g::Fuse::Internal::SkylineNode__New1(l.Position, l.Width + r.Width)), &ret5), ret5);
            uPtr(_skyline)->Remove1((::g::Uno::Collections::LinkedListNode*)uPtr(node)->Next());
            uPtr(_skyline)->Remove1(node);
            node = newNode;
        }
    }

    if (((::g::Uno::Collections::LinkedListNode*)uPtr(node)->Previous()) != NULL)
    {
        ::g::Fuse::Internal::SkylineNode l1 = (::g::Uno::Collections::LinkedListNode__get_Value_fn(uPtr((::g::Uno::Collections::LinkedListNode*)uPtr(node)->Previous()), &ret6), ret6);
        ::g::Fuse::Internal::SkylineNode r1 = (::g::Uno::Collections::LinkedListNode__get_Value_fn(node, &ret7), ret7);

        if (l1.Position.Y == r1.Position.Y)
        {
            ::g::Uno::Collections::LinkedList__AddBefore_fn(uPtr(_skyline), (::g::Uno::Collections::LinkedListNode*)uPtr(node)->Previous(), uCRef(::g::Fuse::Internal::SkylineNode__New1(l1.Position, l1.Width + r1.Width)), &ret8);
            uPtr(_skyline)->Remove1((::g::Uno::Collections::LinkedListNode*)node->Previous());
            uPtr(_skyline)->Remove1(node);
        }
    }
}

// private void ReplaceNodes(Uno.Collections.LinkedListNode<Fuse.Internal.SkylineNode> node, Fuse.Internal.SkylineNode newSkyline) [instance] :1872
void RectPacker::ReplaceNodes(::g::Uno::Collections::LinkedListNode* node, ::g::Fuse::Internal::SkylineNode newSkyline)
{
    uStackFrame __("Fuse.Internal.RectPacker", "ReplaceNodes(Uno.Collections.LinkedListNode<Fuse.Internal.SkylineNode>,Fuse.Internal.SkylineNode)");
    ::g::Uno::Collections::LinkedListNode* ret9;
    ::g::Fuse::Internal::SkylineNode ret10;
    ::g::Fuse::Internal::SkylineNode ret11;
    ::g::Fuse::Internal::SkylineNode ret12;
    ::g::Uno::Collections::LinkedListNode* ret13;
    ::g::Uno::Collections::LinkedListNode* newNode = (::g::Uno::Collections::LinkedList__AddBefore_fn(uPtr(_skyline), node, uCRef(newSkyline), &ret9), ret9);
    int remainingWidth = newSkyline.Width;

    while ((node != NULL) && ((::g::Uno::Collections::LinkedListNode__get_Value_fn(uPtr(node), &ret10), ret10).Width <= remainingWidth))
    {
        remainingWidth = remainingWidth - (::g::Uno::Collections::LinkedListNode__get_Value_fn(uPtr(node), &ret11), ret11).Width;
        ::g::Uno::Collections::LinkedListNode* next = (::g::Uno::Collections::LinkedListNode*)node->Next();
        uPtr(_skyline)->Remove1(node);
        node = next;
    }

    if (remainingWidth > 0)
    {
        ::g::Fuse::Internal::SkylineNode value = (::g::Uno::Collections::LinkedListNode__get_Value_fn(uPtr(node), &ret12), ret12);
        uPtr(_skyline)->Remove1(node);
        ::g::Uno::Collections::LinkedList__AddAfter_fn(uPtr(_skyline), newNode, uCRef(::g::Fuse::Internal::SkylineNode__New1(::g::Uno::Int2__New2(value.Position.X + remainingWidth, value.Position.Y), value.Width - remainingWidth)), &ret13);
    }

    MergeNeighbours(newNode);
}

// public generated int2 get_Size() [instance] :1809
::g::Uno::Int2 RectPacker::Size()
{
    return _Size;
}

// private generated void set_Size(int2 value) [instance] :1809
void RectPacker::Size(::g::Uno::Int2 value)
{
    _Size = value;
}

// public bool TryAdd(int2 size, Uno.Recti& rect) [instance] :1819
bool RectPacker::TryAdd(::g::Uno::Int2 size, ::g::Uno::Recti* rect)
{
    uStackFrame __("Fuse.Internal.RectPacker", "TryAdd(int2,Uno.Recti&)");
    ::g::Fuse::Internal::SkylineNode ret14;
    ::g::Uno::Collections::LinkedListNode* lowestNode = NULL;
    int lowest = 2147483647;
    ::g::Uno::Collections::LinkedListNode* node = (::g::Uno::Collections::LinkedListNode*)uPtr(_skyline)->First();

    while (node != NULL)
    {
        int height;

        if (TryFit(node, size, &height))
        {
            if (height < lowest)
            {
                lowestNode = node;
                lowest = height;
            }
        }

        node = (::g::Uno::Collections::LinkedListNode*)uPtr(node)->Next();
    }

    if (lowestNode == NULL)
    {
        *rect = ::g::Uno::Recti__New1(0, 0, 0, 0);
        return false;
    }
    else
    {
        int x = (::g::Uno::Collections::LinkedListNode__get_Value_fn(uPtr(lowestNode), &ret14), ret14).Position.X;
        *rect = ::g::Uno::Recti__New2(::g::Uno::Int2__New2(x, lowest), size);
        ReplaceNodes(lowestNode, ::g::Fuse::Internal::SkylineNode__New1(::g::Uno::Int2__New2(x, lowest + size.Y), size.X));
        return true;
    }
}

// private bool TryFit(Uno.Collections.LinkedListNode<Fuse.Internal.SkylineNode> node, int2 size, int& height) [instance] :1855
bool RectPacker::TryFit(::g::Uno::Collections::LinkedListNode* node, ::g::Uno::Int2 size, int* height)
{
    uStackFrame __("Fuse.Internal.RectPacker", "TryFit(Uno.Collections.LinkedListNode<Fuse.Internal.SkylineNode>,int2,int&)");
    ::g::Fuse::Internal::SkylineNode ret15;
    ::g::Fuse::Internal::SkylineNode ret16;
    int remainingWidth = size.X;
    *height = 0;

    while (node != NULL)
    {
        *height = ::g::Uno::Math::Max8(*height, (::g::Uno::Collections::LinkedListNode__get_Value_fn(uPtr(node), &ret15), ret15).Position.Y);

        if ((*height + size.Y) > Size().Y)
            return false;

        remainingWidth = remainingWidth - (::g::Uno::Collections::LinkedListNode__get_Value_fn(node, &ret16), ret16).Width;

        if (remainingWidth <= 0)
            return true;

        node = (::g::Uno::Collections::LinkedListNode*)uPtr(node)->Next();
    }

    return false;
}

// public RectPacker New(int2 size) [static] :1812
RectPacker* RectPacker::New1(::g::Uno::Int2 size)
{
    RectPacker* obj1 = (RectPacker*)uNew(RectPacker_typeof());
    obj1->ctor_(size);
    return obj1;
}
// }

// /Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Common/1.0.2/internal/$.uno
// ----------------------------------------------------------------------------------------------

// internal abstract class ScalarBlender<T> :366
// {
static void ScalarBlender_build(uType* type)
{
    type->SetBase(::g::Fuse::Internal::Blender_typeof()->MakeType(type->T(0), NULL));
}

ScalarBlender_type* ScalarBlender_typeof()
{
    static uSStrong<ScalarBlender_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Internal::Blender_typeof();
    options.GenericCount = 1;
    options.ObjectSize = sizeof(ScalarBlender);
    options.TypeSize = sizeof(ScalarBlender_type);
    type = (ScalarBlender_type*)uClassType::New("Fuse.Internal.ScalarBlender`1", options);
    type->fp_build_ = ScalarBlender_build;
    return type;
}

// protected generated ScalarBlender() :366
void ScalarBlender__ctor_1_fn(ScalarBlender* __this)
{
    __this->ctor_1();
}

// protected generated ScalarBlender() [instance] :366
void ScalarBlender::ctor_1()
{
    ctor_();
}
// }

// /Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Common/1.0.2/internal/$.uno
// ----------------------------------------------------------------------------------------------

// internal sealed class Size2Blender :347
// {
static void Size2Blender_build(uType* type)
{
    type->SetBase(::g::Fuse::Internal::Blender_typeof()->MakeType(::g::Uno::UX::Size2_typeof(), NULL));
}

::g::Fuse::Internal::Blender_type* Size2Blender_typeof()
{
    static uSStrong< ::g::Fuse::Internal::Blender_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Internal::Blender_typeof();
    options.ObjectSize = sizeof(Size2Blender);
    options.TypeSize = sizeof(::g::Fuse::Internal::Blender_type);
    type = (::g::Fuse::Internal::Blender_type*)uClassType::New("Fuse.Internal.Size2Blender", options);
    type->fp_build_ = Size2Blender_build;
    type->fp_ctor_ = (void*)Size2Blender__New1_fn;
    type->fp_Add = (void(*)(::g::Fuse::Internal::Blender*, void*, void*, uTRef))Size2Blender__Add_fn;
    type->fp_Length = (void(*)(::g::Fuse::Internal::Blender*, void*, double*))Size2Blender__Length_fn;
    type->fp_Lerp = (void(*)(::g::Fuse::Internal::Blender*, void*, void*, double*, uTRef))Size2Blender__Lerp_fn;
    type->fp_get_One = (void(*)(::g::Fuse::Internal::Blender*, uTRef))Size2Blender__get_One_fn;
    type->fp_Sub = (void(*)(::g::Fuse::Internal::Blender*, void*, void*, uTRef))Size2Blender__Sub_fn;
    type->fp_ToUnit = (void(*)(::g::Fuse::Internal::Blender*, void*, double*, uTRef))Size2Blender__ToUnit_fn;
    type->fp_Weight = (void(*)(::g::Fuse::Internal::Blender*, void*, double*, uTRef))Size2Blender__Weight_fn;
    type->fp_get_Zero = (void(*)(::g::Fuse::Internal::Blender*, uTRef))Size2Blender__get_Zero_fn;
    return type;
}

// public generated Size2Blender() :347
void Size2Blender__ctor_1_fn(Size2Blender* __this)
{
    __this->ctor_1();
}

// public override sealed Uno.UX.Size2 Add(Uno.UX.Size2 a, Uno.UX.Size2 b) :350
void Size2Blender__Add_fn(Size2Blender* __this, ::g::Uno::UX::Size2* a, ::g::Uno::UX::Size2* b, ::g::Uno::UX::Size2* __retval)
{
    ::g::Uno::UX::Size2 a_ = *a;
    ::g::Uno::UX::Size2 b_ = *b;
    return *__retval = ::g::Uno::UX::Size2__op_Addition(a_, b_), void();
}

// public override sealed double Length(Uno.UX.Size2 a) :363
void Size2Blender__Length_fn(Size2Blender* __this, ::g::Uno::UX::Size2* a, double* __retval)
{
    ::g::Uno::UX::Size2 a_ = *a;
    return *__retval = (double)::g::Uno::Vector::Length(::g::Uno::UX::Size2__op_Explicit(a_)), void();
}

// public override sealed Uno.UX.Size2 Lerp(Uno.UX.Size2 a, Uno.UX.Size2 b, double d) :352
void Size2Blender__Lerp_fn(Size2Blender* __this, ::g::Uno::UX::Size2* a, ::g::Uno::UX::Size2* b, double* d, ::g::Uno::UX::Size2* __retval)
{
    ::g::Uno::UX::Size2 a_ = *a;
    ::g::Uno::UX::Size2 b_ = *b;
    double d_ = *d;
    return *__retval = ::g::Uno::UX::Size2__op_Addition(a_, ::g::Uno::UX::Size2__op_Multiply(::g::Uno::UX::Size2__op_Subtraction(b_, a_), (float)d_)), void();
}

// public generated Size2Blender New() :347
void Size2Blender__New1_fn(Size2Blender** __retval)
{
    *__retval = Size2Blender::New1();
}

// public override sealed Uno.UX.Size2 get_One() :354
void Size2Blender__get_One_fn(Size2Blender* __this, ::g::Uno::UX::Size2* __retval)
{
    return *__retval = ::g::Uno::UX::Size2__op_Implicit1(::g::Uno::Float2__New2(1.0f, 1.0f)), void();
}

// public override sealed Uno.UX.Size2 Sub(Uno.UX.Size2 a, Uno.UX.Size2 b) :351
void Size2Blender__Sub_fn(Size2Blender* __this, ::g::Uno::UX::Size2* a, ::g::Uno::UX::Size2* b, ::g::Uno::UX::Size2* __retval)
{
    ::g::Uno::UX::Size2 a_ = *a;
    ::g::Uno::UX::Size2 b_ = *b;
    return *__retval = ::g::Uno::UX::Size2__op_Subtraction(a_, b_), void();
}

// public override sealed Uno.UX.Size2 ToUnit(Uno.UX.Size2 a, double& length) :355
void Size2Blender__ToUnit_fn(Size2Blender* __this, ::g::Uno::UX::Size2* a, double* length, ::g::Uno::UX::Size2* __retval)
{
    ::g::Uno::UX::Size2 a_ = *a;
    *length = (double)::g::Uno::Vector::Length(::g::Uno::UX::Size2__op_Explicit(a_));
    ::g::Uno::Float2 v = ::g::Uno::Vector::Normalize(::g::Uno::UX::Size2__op_Explicit(a_));
    ::g::Uno::UX::Size x = a_.X;
    ::g::Uno::UX::Size y = a_.Y;
    return *__retval = ::g::Uno::UX::Size2__New1(::g::Uno::UX::Size__New1(v.X, x.Unit), ::g::Uno::UX::Size__New1(v.Y, y.Unit)), void();
}

// public override sealed Uno.UX.Size2 Weight(Uno.UX.Size2 v, double w) :349
void Size2Blender__Weight_fn(Size2Blender* __this, ::g::Uno::UX::Size2* v, double* w, ::g::Uno::UX::Size2* __retval)
{
    ::g::Uno::UX::Size2 v_ = *v;
    double w_ = *w;
    return *__retval = ::g::Uno::UX::Size2__op_Multiply(v_, (float)w_), void();
}

// public override sealed Uno.UX.Size2 get_Zero() :353
void Size2Blender__get_Zero_fn(Size2Blender* __this, ::g::Uno::UX::Size2* __retval)
{
    return *__retval = ::g::Uno::UX::Size2__op_Implicit1(::g::Uno::Float2__New2(0.0f, 0.0f)), void();
}

// public generated Size2Blender() [instance] :347
void Size2Blender::ctor_1()
{
    ctor_();
}

// public generated Size2Blender New() [static] :347
Size2Blender* Size2Blender::New1()
{
    Size2Blender* obj1 = (Size2Blender*)uNew(Size2Blender_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// /Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Common/1.0.2/internal/$.uno
// ----------------------------------------------------------------------------------------------

// internal sealed class SizeBlender :331
// {
static void SizeBlender_build(uType* type)
{
    type->SetBase(::g::Fuse::Internal::Blender_typeof()->MakeType(::g::Uno::UX::Size_typeof(), NULL));
}

::g::Fuse::Internal::Blender_type* SizeBlender_typeof()
{
    static uSStrong< ::g::Fuse::Internal::Blender_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Internal::Blender_typeof();
    options.ObjectSize = sizeof(SizeBlender);
    options.TypeSize = sizeof(::g::Fuse::Internal::Blender_type);
    type = (::g::Fuse::Internal::Blender_type*)uClassType::New("Fuse.Internal.SizeBlender", options);
    type->fp_build_ = SizeBlender_build;
    type->fp_ctor_ = (void*)SizeBlender__New1_fn;
    type->fp_Add = (void(*)(::g::Fuse::Internal::Blender*, void*, void*, uTRef))SizeBlender__Add_fn;
    type->fp_Length = (void(*)(::g::Fuse::Internal::Blender*, void*, double*))SizeBlender__Length_fn;
    type->fp_Lerp = (void(*)(::g::Fuse::Internal::Blender*, void*, void*, double*, uTRef))SizeBlender__Lerp_fn;
    type->fp_get_One = (void(*)(::g::Fuse::Internal::Blender*, uTRef))SizeBlender__get_One_fn;
    type->fp_Sub = (void(*)(::g::Fuse::Internal::Blender*, void*, void*, uTRef))SizeBlender__Sub_fn;
    type->fp_ToUnit = (void(*)(::g::Fuse::Internal::Blender*, void*, double*, uTRef))SizeBlender__ToUnit_fn;
    type->fp_Weight = (void(*)(::g::Fuse::Internal::Blender*, void*, double*, uTRef))SizeBlender__Weight_fn;
    type->fp_get_Zero = (void(*)(::g::Fuse::Internal::Blender*, uTRef))SizeBlender__get_Zero_fn;
    return type;
}

// public generated SizeBlender() :331
void SizeBlender__ctor_1_fn(SizeBlender* __this)
{
    __this->ctor_1();
}

// public override sealed Uno.UX.Size Add(Uno.UX.Size a, Uno.UX.Size b) :334
void SizeBlender__Add_fn(SizeBlender* __this, ::g::Uno::UX::Size* a, ::g::Uno::UX::Size* b, ::g::Uno::UX::Size* __retval)
{
    ::g::Uno::UX::Size a_ = *a;
    ::g::Uno::UX::Size b_ = *b;
    return *__retval = ::g::Uno::UX::Size__op_Addition(a_, b_), void();
}

// public override sealed double Length(Uno.UX.Size a) :344
void SizeBlender__Length_fn(SizeBlender* __this, ::g::Uno::UX::Size* a, double* __retval)
{
    ::g::Uno::UX::Size a_ = *a;
    return *__retval = (double)::g::Uno::Math::Abs1(a_.Value), void();
}

// public override sealed Uno.UX.Size Lerp(Uno.UX.Size a, Uno.UX.Size b, double d) :336
void SizeBlender__Lerp_fn(SizeBlender* __this, ::g::Uno::UX::Size* a, ::g::Uno::UX::Size* b, double* d, ::g::Uno::UX::Size* __retval)
{
    ::g::Uno::UX::Size a_ = *a;
    ::g::Uno::UX::Size b_ = *b;
    double d_ = *d;
    return *__retval = ::g::Uno::UX::Size__op_Addition(a_, ::g::Uno::UX::Size__op_Multiply(::g::Uno::UX::Size__op_Subtraction(b_, a_), (float)d_)), void();
}

// public generated SizeBlender New() :331
void SizeBlender__New1_fn(SizeBlender** __retval)
{
    *__retval = SizeBlender::New1();
}

// public override sealed Uno.UX.Size get_One() :338
void SizeBlender__get_One_fn(SizeBlender* __this, ::g::Uno::UX::Size* __retval)
{
    return *__retval = ::g::Uno::UX::Size__op_Implicit1(1), void();
}

// public override sealed Uno.UX.Size Sub(Uno.UX.Size a, Uno.UX.Size b) :335
void SizeBlender__Sub_fn(SizeBlender* __this, ::g::Uno::UX::Size* a, ::g::Uno::UX::Size* b, ::g::Uno::UX::Size* __retval)
{
    ::g::Uno::UX::Size a_ = *a;
    ::g::Uno::UX::Size b_ = *b;
    return *__retval = ::g::Uno::UX::Size__op_Subtraction(a_, b_), void();
}

// public override sealed Uno.UX.Size ToUnit(Uno.UX.Size a, double& length) :339
void SizeBlender__ToUnit_fn(SizeBlender* __this, ::g::Uno::UX::Size* a, double* length, ::g::Uno::UX::Size* __retval)
{
    ::g::Uno::UX::Size a_ = *a;
    *length = (double)a_.Value;
    return *__retval = (a_.Value < 0.0f) ? ::g::Uno::UX::Size__New1(-1.0f, a_.Unit) : ::g::Uno::UX::Size__New1(1.0f, a_.Unit), void();
}

// public override sealed Uno.UX.Size Weight(Uno.UX.Size v, double w) :333
void SizeBlender__Weight_fn(SizeBlender* __this, ::g::Uno::UX::Size* v, double* w, ::g::Uno::UX::Size* __retval)
{
    ::g::Uno::UX::Size v_ = *v;
    double w_ = *w;
    return *__retval = ::g::Uno::UX::Size__op_Multiply(v_, (float)w_), void();
}

// public override sealed Uno.UX.Size get_Zero() :337
void SizeBlender__get_Zero_fn(SizeBlender* __this, ::g::Uno::UX::Size* __retval)
{
    return *__retval = ::g::Uno::UX::Size__op_Implicit1(0), void();
}

// public generated SizeBlender() [instance] :331
void SizeBlender::ctor_1()
{
    ctor_();
}

// public generated SizeBlender New() [static] :331
SizeBlender* SizeBlender::New1()
{
    SizeBlender* obj1 = (SizeBlender*)uNew(SizeBlender_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// /Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Elements/1.0.2/internal/$.uno
// ------------------------------------------------------------------------------------------------

// internal sealed class SizingContainer :396
// {
static void SizingContainer_build(uType* type)
{
    type->SetFields(0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Internal::SizingContainer, absoluteZoom), 0,
        ::g::Fuse::Elements::Alignment_typeof(), offsetof(::g::Fuse::Internal::SizingContainer, align), 0,
        ::g::Uno::Float4_typeof(), offsetof(::g::Fuse::Internal::SizingContainer, padding), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Internal::SizingContainer, snapToPixels), 0,
        ::g::Fuse::Elements::StretchDirection_typeof(), offsetof(::g::Fuse::Internal::SizingContainer, stretchDirection), 0,
        ::g::Fuse::Elements::StretchMode_typeof(), offsetof(::g::Fuse::Internal::SizingContainer, stretchMode), 0,
        ::g::Fuse::Elements::StretchSizing_typeof(), offsetof(::g::Fuse::Internal::SizingContainer, stretchSizing), 0);
}

uType* SizingContainer_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 7;
    options.ObjectSize = sizeof(SizingContainer);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Internal.SizingContainer", options);
    type->fp_build_ = SizingContainer_build;
    type->fp_ctor_ = (void*)SizingContainer__New1_fn;
    return type;
}

// public generated SizingContainer() :396
void SizingContainer__ctor__fn(SizingContainer* __this)
{
    __this->ctor_();
}

// public float4 CalcClip(float2 availableSize, float2& origin, float2& contentActualSize) :620
void SizingContainer__CalcClip_fn(SizingContainer* __this, ::g::Uno::Float2* availableSize, ::g::Uno::Float2* origin, ::g::Uno::Float2* contentActualSize, ::g::Uno::Float4* __retval)
{
    *__retval = __this->CalcClip(*availableSize, origin, contentActualSize);
}

// public float2 CalcContentSize(float2 size, int2 pixelSize) :448
void SizingContainer__CalcContentSize_fn(SizingContainer* __this, ::g::Uno::Float2* size, ::g::Uno::Int2* pixelSize, ::g::Uno::Float2* __retval)
{
    *__retval = __this->CalcContentSize(*size, *pixelSize);
}

// public float2 CalcOrigin(float2 availableSize, float2 contentActualSize) :578
void SizingContainer__CalcOrigin_fn(SizingContainer* __this, ::g::Uno::Float2* availableSize, ::g::Uno::Float2* contentActualSize, ::g::Uno::Float2* __retval)
{
    *__retval = __this->CalcOrigin(*availableSize, *contentActualSize);
}

// public float2 CalcScale(float2 availableSize, float2 desiredSize) :443
void SizingContainer__CalcScale_fn(SizingContainer* __this, ::g::Uno::Float2* availableSize, ::g::Uno::Float2* desiredSize, ::g::Uno::Float2* __retval)
{
    *__retval = __this->CalcScale(*availableSize, *desiredSize);
}

// private float2 CalcScale(float2 availableSize, float2 desiredSize, bool autoWidth, bool autoHeight) :494
void SizingContainer__CalcScale1_fn(SizingContainer* __this, ::g::Uno::Float2* availableSize, ::g::Uno::Float2* desiredSize, bool* autoWidth, bool* autoHeight, ::g::Uno::Float2* __retval)
{
    *__retval = __this->CalcScale1(*availableSize, *desiredSize, *autoWidth, *autoHeight);
}

// public float2 ExpandFillSize(float2 size, Fuse.LayoutParams lp) :665
void SizingContainer__ExpandFillSize_fn(SizingContainer* __this, ::g::Uno::Float2* size, ::g::Fuse::LayoutParams* lp, ::g::Uno::Float2* __retval)
{
    *__retval = __this->ExpandFillSize(*size, *lp);
}

// public generated SizingContainer New() :396
void SizingContainer__New1_fn(SizingContainer** __retval)
{
    *__retval = SizingContainer::New1();
}

// private float get_PaddingHeight() :441
void SizingContainer__get_PaddingHeight_fn(SizingContainer* __this, float* __retval)
{
    *__retval = __this->PaddingHeight();
}

// private float get_PaddingWidth() :440
void SizingContainer__get_PaddingWidth_fn(SizingContainer* __this, float* __retval)
{
    *__retval = __this->PaddingWidth();
}

// public bool SetAlignment(Fuse.Elements.Alignment a) :419
void SizingContainer__SetAlignment_fn(SizingContainer* __this, int* a, bool* __retval)
{
    *__retval = __this->SetAlignment(*a);
}

// public bool SetStretchDirection(Fuse.Elements.StretchDirection dir) :411
void SizingContainer__SetStretchDirection_fn(SizingContainer* __this, int* dir, bool* __retval)
{
    *__retval = __this->SetStretchDirection(*dir);
}

// public bool SetStretchMode(Fuse.Elements.StretchMode mode) :403
void SizingContainer__SetStretchMode_fn(SizingContainer* __this, int* mode, bool* __retval)
{
    *__retval = __this->SetStretchMode(*mode);
}

// public bool SetStretchSizing(Fuse.Elements.StretchSizing ss) :427
void SizingContainer__SetStretchSizing_fn(SizingContainer* __this, int* ss, bool* __retval)
{
    *__retval = __this->SetStretchSizing(*ss);
}

// private float2 SnapSize(float2 sz) :489
void SizingContainer__SnapSize_fn(SizingContainer* __this, ::g::Uno::Float2* sz, ::g::Uno::Float2* __retval)
{
    *__retval = __this->SnapSize(*sz);
}

// public generated SizingContainer() [instance] :396
void SizingContainer::ctor_()
{
    stretchMode = 5;
    align = 10;
    stretchSizing = 1;
    absoluteZoom = 1.0f;
}

// public float4 CalcClip(float2 availableSize, float2& origin, float2& contentActualSize) [instance] :620
::g::Uno::Float4 SizingContainer::CalcClip(::g::Uno::Float2 availableSize, ::g::Uno::Float2* origin, ::g::Uno::Float2* contentActualSize)
{
    ::g::Uno::Float4 ind1;
    ::g::Uno::Float4 ind2;

    if (((((*origin).X > availableSize.X) || (((*origin).X + (*contentActualSize).X) < 0.0f)) || ((*origin).Y > availableSize.Y)) || (((*origin).Y + (*contentActualSize).Y) < 0.0f))
    {
        *origin = ::g::Uno::Float2__New2(0.0f, 0.0f);
        *contentActualSize = ::g::Uno::Float2__New1(0.0f);
        return ::g::Uno::Float4__New2(0.0f, 0.0f, 1.0f, 1.0f);
    }

    ::g::Uno::Float2 tl = ::g::Uno::Math::Max3(::g::Uno::Float2__New1(0.0f), ::g::Uno::Float2__op_Division2(::g::Uno::Float2__op_Subtraction2((ind1 = padding, ::g::Uno::Float2__New2(ind1.X, ind1.Y)), *origin), *contentActualSize));
    ::g::Uno::Float2 br = ::g::Uno::Math::Min3(::g::Uno::Float2__New1(1.0f), ::g::Uno::Float2__op_Division2(::g::Uno::Float2__op_Subtraction2(::g::Uno::Float2__op_Subtraction2(availableSize, *origin), (ind2 = padding, ::g::Uno::Float2__New2(ind2.Z, ind2.W))), *contentActualSize));
    float dx = padding.X - (*origin).X;

    if (dx > 0.0f)
    {
        (*contentActualSize).X = ((*contentActualSize).X - dx);
        (*origin).X = padding.X;
    }

    dx = (((*origin).X + (*contentActualSize).X) - availableSize.X) + padding.Z;

    if (dx > 0.0f)
        (*contentActualSize).X = ((*contentActualSize).X - dx);

    float dy = padding.Y - (*origin).Y;

    if (dy > 0.0f)
    {
        (*contentActualSize).Y = ((*contentActualSize).Y - dy);
        (*origin).Y = padding.Y;
    }

    dy = (((*origin).Y + (*contentActualSize).Y) - availableSize.Y) + padding.W;

    if (dy > 0.0f)
        (*contentActualSize).Y = ((*contentActualSize).Y - dy);

    return ::g::Uno::Float4__New2(tl.X, tl.Y, br.X, br.Y);
}

// public float2 CalcContentSize(float2 size, int2 pixelSize) [instance] :448
::g::Uno::Float2 SizingContainer::CalcContentSize(::g::Uno::Float2 size, ::g::Uno::Int2 pixelSize)
{
    switch (stretchMode)
    {
        case 1:
        {
            if ((pixelSize.X == 0) || (pixelSize.Y == 0))
                return ::g::Uno::Float2__New1(0.0f);

            return ::g::Uno::Float2__op_Division1(::g::Uno::Float2__New2((float)pixelSize.X, (float)pixelSize.Y), absoluteZoom);
        }
        case 2:
        {
            if ((pixelSize.X == 0) || (pixelSize.Y == 0))
                return ::g::Uno::Float2__New1(0.0f);

            ::g::Uno::Float2 exact = ::g::Uno::Float2__op_Division1(::g::Uno::Float2__New2((float)pixelSize.X, (float)pixelSize.Y), absoluteZoom);
            ::g::Uno::Float2 scale = ::g::Uno::Float2__op_Division2(size, exact);

            if (((double)scale.X > 0.75) && ((double)scale.X < 1.5))
                return exact;

            break;
        }
        default:
            break;
    }

    if (!snapToPixels)
        return size;

    return SnapSize(size);
}

// public float2 CalcOrigin(float2 availableSize, float2 contentActualSize) [instance] :578
::g::Uno::Float2 SizingContainer::CalcOrigin(::g::Uno::Float2 availableSize, ::g::Uno::Float2 contentActualSize)
{
    uStackFrame __("Fuse.Internal.SizingContainer", "CalcOrigin(float2,float2)");
    ::g::Uno::Float2 origin = ::g::Uno::Float2__New1(0.0f);

    switch (::g::Fuse::Elements::AlignmentHelpers::GetHorizontalAlign(align))
    {
        case 0:
        case 1:
        {
            origin.X = padding.Item(0);
            break;
        }
        case 2:
        {
            origin.X = (((((availableSize.X - padding.Item(0)) - padding.Item(2)) / 2.0f) - (contentActualSize.X / 2.0f)) + padding.Item(0));
            break;
        }
        case 3:
        {
            origin.X = ((availableSize.X - padding.Item(2)) - contentActualSize.X);
            break;
        }
    }

    switch (::g::Fuse::Elements::AlignmentHelpers::GetVerticalAlign(align))
    {
        case 0:
        case 4:
        {
            origin.Y = padding.Item(1);
            break;
        }
        case 8:
        {
            origin.Y = (((((availableSize.Y - padding.Item(1)) - padding.Item(3)) / 2.0f) - (contentActualSize.Y / 2.0f)) + padding.Item(1));
            break;
        }
        case 12:
        {
            origin.Y = ((availableSize.Y - padding.Item(3)) - contentActualSize.Y);
            break;
        }
    }

    if (snapToPixels)
        origin = SnapSize(origin);

    return origin;
}

// public float2 CalcScale(float2 availableSize, float2 desiredSize) [instance] :443
::g::Uno::Float2 SizingContainer::CalcScale(::g::Uno::Float2 availableSize, ::g::Uno::Float2 desiredSize)
{
    return CalcScale1(availableSize, desiredSize, false, false);
}

// private float2 CalcScale(float2 availableSize, float2 desiredSize, bool autoWidth, bool autoHeight) [instance] :494
::g::Uno::Float2 SizingContainer::CalcScale1(::g::Uno::Float2 availableSize, ::g::Uno::Float2 desiredSize, bool autoWidth, bool autoHeight)
{
    ::g::Uno::Float2 d = availableSize;
    d.X = (d.X - PaddingWidth());
    d.Y = (d.Y - PaddingHeight());
    ::g::Uno::Float2 scale = ::g::Uno::Float2__New1(1.0f);

    if ((autoWidth && autoHeight) && !(((stretchMode == 0) || (stretchMode == 1)) || (stretchMode == 2)))
    {
        if (stretchSizing == 0)
            scale = ::g::Uno::Float2__New1(0.0f);
        else
            scale = ::g::Uno::Float2__New1(1.0f);
    }
    else
    {
        ::g::Uno::Float2 s = ::g::Uno::Float2__New2((desiredSize.X < 1e-05f) ? 0.0f : d.X / desiredSize.X, (desiredSize.Y < 1e-05f) ? 0.0f : d.Y / desiredSize.Y);

        switch (stretchMode)
        {
            case 0:
            case 1:
            case 2:
            {
                scale = ::g::Uno::Float2__New1(1.0f);
                break;
            }
            case 4:
            case 3:
            {
                scale = autoWidth ? ::g::Uno::Float2__New1(s.Y) : autoHeight ? ::g::Uno::Float2__New1(s.X) : s;
                break;
            }
            case 5:
            {
                float sm = autoWidth ? s.Y : autoHeight ? s.X : ::g::Uno::Math::Min1(s.X, s.Y);
                scale = ::g::Uno::Float2__New1(sm);
                break;
            }
            case 6:
            {
                float sm1 = autoWidth ? s.Y : autoHeight ? s.X : ::g::Uno::Math::Max1(s.X, s.Y);
                scale = ::g::Uno::Float2__New1(sm1);
                break;
            }
        }
    }

    switch (stretchDirection)
    {
        case 0:
            break;
        case 2:
        {
            scale.X = ::g::Uno::Math::Min1(scale.X, 1.0f);
            scale.Y = ::g::Uno::Math::Min1(scale.Y, 1.0f);
            break;
        }
        case 1:
        {
            scale.X = ::g::Uno::Math::Max1(1.0f, scale.X);
            scale.Y = ::g::Uno::Math::Max1(1.0f, scale.Y);
            break;
        }
    }

    if ((snapToPixels && (desiredSize.X > 1e-05f)) && (desiredSize.Y > 1e-05f))
        scale = ::g::Uno::Float2__op_Division2(SnapSize(::g::Uno::Float2__op_Multiply2(scale, desiredSize)), desiredSize);

    return scale;
}

// public float2 ExpandFillSize(float2 size, Fuse.LayoutParams lp) [instance] :665
::g::Uno::Float2 SizingContainer::ExpandFillSize(::g::Uno::Float2 size, ::g::Fuse::LayoutParams lp)
{
    bool autoWidth = !lp.HasX();
    bool autoHeight = !lp.HasY();
    ::g::Uno::Float2 scale = CalcScale1(lp.Size(), size, autoWidth, autoHeight);
    ::g::Uno::Float2 res = ::g::Uno::Float2__op_Multiply2(scale, size);
    bool recalc = false;

    if (lp.HasMaxX() && (res.X > lp.MaxX()))
    {
        res.X = lp.MaxX();
        recalc = true;
        autoWidth = false;
    }

    if (lp.HasMaxY() && (res.Y > lp.MaxY()))
    {
        res.Y = lp.MaxY();
        recalc = true;
        autoHeight = false;
    }

    if (lp.HasMinX() && (res.X < lp.MinX()))
    {
        res.X = lp.MinX();
        recalc = true;
        autoWidth = false;
    }

    if (lp.HasMinY() && (res.Y < lp.MinY()))
    {
        res.Y = lp.MinY();
        recalc = true;
        autoHeight = false;
    }

    if (recalc)
    {
        scale = CalcScale1(res, size, autoWidth, autoHeight);
        res = ::g::Uno::Float2__op_Multiply2(scale, size);
    }

    return res;
}

// private float get_PaddingHeight() [instance] :441
float SizingContainer::PaddingHeight()
{
    uStackFrame __("Fuse.Internal.SizingContainer", "get_PaddingHeight()");
    return padding.Item(1) + padding.Item(3);
}

// private float get_PaddingWidth() [instance] :440
float SizingContainer::PaddingWidth()
{
    uStackFrame __("Fuse.Internal.SizingContainer", "get_PaddingWidth()");
    return padding.Item(0) + padding.Item(2);
}

// public bool SetAlignment(Fuse.Elements.Alignment a) [instance] :419
bool SizingContainer::SetAlignment(int a)
{
    if (a == align)
        return false;

    align = a;
    return true;
}

// public bool SetStretchDirection(Fuse.Elements.StretchDirection dir) [instance] :411
bool SizingContainer::SetStretchDirection(int dir)
{
    if (dir == stretchDirection)
        return false;

    stretchDirection = dir;
    return true;
}

// public bool SetStretchMode(Fuse.Elements.StretchMode mode) [instance] :403
bool SizingContainer::SetStretchMode(int mode)
{
    if (mode == stretchMode)
        return false;

    stretchMode = mode;
    return true;
}

// public bool SetStretchSizing(Fuse.Elements.StretchSizing ss) [instance] :427
bool SizingContainer::SetStretchSizing(int ss)
{
    if (ss == stretchSizing)
        return false;

    stretchSizing = ss;
    return true;
}

// private float2 SnapSize(float2 sz) [instance] :489
::g::Uno::Float2 SizingContainer::SnapSize(::g::Uno::Float2 sz)
{
    return ::g::Uno::Float2__op_Division1(::g::Uno::Math::Round4(::g::Uno::Float2__op_Multiply1(sz, absoluteZoom)), absoluteZoom);
}

// public generated SizingContainer New() [static] :396
SizingContainer* SizingContainer::New1()
{
    SizingContainer* obj3 = (SizingContainer*)uNew(SizingContainer_typeof());
    obj3->ctor_();
    return obj3;
}
// }

// /Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Common/1.0.2/internal/$.uno
// ----------------------------------------------------------------------------------------------

// internal struct SkylineNode :1787
// {
static void SkylineNode_build(uType* type)
{
    type->SetFields(0,
        ::g::Uno::Int2_typeof(), offsetof(::g::Fuse::Internal::SkylineNode, Position), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::Internal::SkylineNode, Width), 0);
}

uStructType* SkylineNode_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ValueSize = sizeof(SkylineNode);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Fuse.Internal.SkylineNode", options);
    type->fp_build_ = SkylineNode_build;
    return type;
}

// public SkylineNode(int2 position, int width) :1800
void SkylineNode__ctor__fn(SkylineNode* __this, ::g::Uno::Int2* position, int* width)
{
    __this->ctor_(*position, *width);
}

// public SkylineNode New(int2 position, int width) :1800
void SkylineNode__New1_fn(::g::Uno::Int2* position, int* width, SkylineNode* __retval)
{
    *__retval = SkylineNode__New1(*position, *width);
}

// public SkylineNode(int2 position, int width) [instance] :1800
void SkylineNode::ctor_(::g::Uno::Int2 position, int width)
{
    Position = position;
    Width = width;
}

// public SkylineNode New(int2 position, int width) [static] :1800
SkylineNode SkylineNode__New1(::g::Uno::Int2 position, int width)
{
    SkylineNode obj1;
    obj1.ctor_(position, width);
    return obj1;
}
// }

// /Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Common/1.0.2/internal/$.uno
// ----------------------------------------------------------------------------------------------

// public static class Statistics :2099
// {
static void Statistics_build(uType* type)
{
    type->Reflection.SetFunctions(2,
        new uFunction("ContinuousFilterAlpha", NULL, (void*)Statistics__ContinuousFilterAlpha_fn, 0, true, ::g::Uno::Double_typeof(), 2, ::g::Uno::Double_typeof(), ::g::Uno::Double_typeof()),
        new uFunction("ExponentialMovingAverage", NULL, (void*)Statistics__ExponentialMovingAverage_fn, 0, true, ::g::Uno::Double_typeof(), 4, ::g::Uno::Double_typeof(), ::g::Uno::Double_typeof(), ::g::Uno::Double_typeof(), ::g::Uno::Double_typeof()));
}

uClassType* Statistics_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Internal.Statistics", options);
    type->fp_build_ = Statistics_build;
    return type;
}

// public static double ContinuousFilterAlpha(double elapsed, double period) :2110
void Statistics__ContinuousFilterAlpha_fn(double* elapsed, double* period, double* __retval)
{
    *__retval = Statistics::ContinuousFilterAlpha(*elapsed, *period);
}

// public static double ExponentialMovingAverage(double current, double sample, double elapsed, double period) :2103
void Statistics__ExponentialMovingAverage_fn(double* current, double* sample, double* elapsed, double* period, double* __retval)
{
    *__retval = Statistics::ExponentialMovingAverage(*current, *sample, *elapsed, *period);
}

// public static double ContinuousFilterAlpha(double elapsed, double period) [static] :2110
double Statistics::ContinuousFilterAlpha(double elapsed, double period)
{
    return 1.0 - ::g::Uno::Math::Pow(2.7182818284590451, -elapsed / period);
}

// public static double ExponentialMovingAverage(double current, double sample, double elapsed, double period) [static] :2103
double Statistics::ExponentialMovingAverage(double current, double sample, double elapsed, double period)
{
    double alpha = Statistics::ContinuousFilterAlpha(elapsed, period);
    return current + (alpha * (sample - current));
}
// }

// /Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Common/1.0.2/internal/$.uno
// ----------------------------------------------------------------------------------------------

// internal static class SystemFont :2176
// {
static void SystemFont_build(uType* type)
{
    ::TYPES[37] = ::g::Uno::String_typeof();
}

uClassType* SystemFont_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Internal.SystemFont", options);
    type->fp_build_ = SystemFont_build;
    return type;
}

// public static Uno.Collections.List<Fuse.Internal.FontFaceDescriptor> get_Default() :2180
void SystemFont__get_Default_fn(::g::Uno::Collections::List** __retval)
{
    *__retval = SystemFont::Default();
}

// public static Uno.Collections.HashSet<string> get_Families() :2207
void SystemFont__get_Families_fn(::g::Uno::Collections::HashSet** __retval)
{
    *__retval = SystemFont::Families();
}

// public static Uno.Collections.List<Fuse.Internal.FontFaceDescriptor> Get(string family, [Fuse.SystemFont.Style style], [Fuse.SystemFont.Weight weight]) :2188
void SystemFont__Get_fn(uString* family, int* style, int* weight, ::g::Uno::Collections::List** __retval)
{
    *__retval = SystemFont::Get(family, *style, *weight);
}

// public static Uno.Collections.List<Fuse.Internal.FontFaceDescriptor> GetFallback(Uno.UX.FileSource file) :2198
void SystemFont__GetFallback_fn(::g::Uno::UX::FileSource* file, ::g::Uno::Collections::List** __retval)
{
    *__retval = SystemFont::GetFallback(file);
}

// public static Uno.Collections.List<Fuse.Internal.FontFaceDescriptor> Get(string family, [Fuse.SystemFont.Style style], [Fuse.SystemFont.Weight weight]) [static] :2188
::g::Uno::Collections::List* SystemFont::Get(uString* family, int style, int weight)
{
    uStackFrame __("Fuse.Internal.SystemFont", "Get(string,[Fuse.SystemFont.Style],[Fuse.SystemFont.Weight])");
    return ::g::Fuse::Internal::iOSSystemFont::Get(::g::Uno::String::op_Equality(family, NULL) ? uCast<uString*>(NULL, ::TYPES[37/*string*/]) : (uString*)::g::Uno::String::ToLower(uPtr(family)), style, weight);
}

// public static Uno.Collections.List<Fuse.Internal.FontFaceDescriptor> GetFallback(Uno.UX.FileSource file) [static] :2198
::g::Uno::Collections::List* SystemFont::GetFallback(::g::Uno::UX::FileSource* file)
{
    uStackFrame __("Fuse.Internal.SystemFont", "GetFallback(Uno.UX.FileSource)");
    return ::g::Fuse::Internal::iOSSystemFont::GetFallback(file);
}

// public static Uno.Collections.List<Fuse.Internal.FontFaceDescriptor> get_Default() [static] :2180
::g::Uno::Collections::List* SystemFont::Default()
{
    uStackFrame __("Fuse.Internal.SystemFont", "get_Default()");
    return ::g::Fuse::Internal::iOSSystemFont::Default();
}

// public static Uno.Collections.HashSet<string> get_Families() [static] :2207
::g::Uno::Collections::HashSet* SystemFont::Families()
{
    return ::g::Fuse::Internal::iOSSystemFont::Families();
}
// }

// /Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Common/1.0.2/internal/$.uno
// ----------------------------------------------------------------------------------------------

// internal static class VectorUtil :2224
// {
static void VectorUtil_build(uType* type)
{
}

uClassType* VectorUtil_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Internal.VectorUtil", options);
    type->fp_build_ = VectorUtil_build;
    return type;
}

// public static float Angle(float2 a, float2 b) :2255
void VectorUtil__Angle_fn(::g::Uno::Float2* a, ::g::Uno::Float2* b, float* __retval)
{
    *__retval = VectorUtil::Angle(*a, *b);
}

// public static float DistanceLine(float4 line, float2 p) :2263
void VectorUtil__DistanceLine_fn(::g::Uno::Float4* line, ::g::Uno::Float2* p, float* __retval)
{
    *__retval = VectorUtil::DistanceLine(*line, *p);
}

// public static float2 Projection(float2 a, float2 b) :2229
void VectorUtil__Projection_fn(::g::Uno::Float2* a, ::g::Uno::Float2* b, ::g::Uno::Float2* __retval)
{
    *__retval = VectorUtil::Projection(*a, *b);
}

// public static float2 Rejection(float2 a, float2 b) :2245
void VectorUtil__Rejection_fn(::g::Uno::Float2* a, ::g::Uno::Float2* b, ::g::Uno::Float2* __retval)
{
    *__retval = VectorUtil::Rejection(*a, *b);
}

// public static float ScalarProjection(float2 a, float2 b) :2237
void VectorUtil__ScalarProjection_fn(::g::Uno::Float2* a, ::g::Uno::Float2* b, float* __retval)
{
    *__retval = VectorUtil::ScalarProjection(*a, *b);
}

// public static float Angle(float2 a, float2 b) [static] :2255
float VectorUtil::Angle(::g::Uno::Float2 a, ::g::Uno::Float2 b)
{
    return ::g::Uno::Math::Acos1(::g::Uno::Vector::Dot(a, b) / (::g::Uno::Vector::Length(a) * ::g::Uno::Vector::Length(b)));
}

// public static float DistanceLine(float4 line, float2 p) [static] :2263
float VectorUtil::DistanceLine(::g::Uno::Float4 line, ::g::Uno::Float2 p)
{
    return ::g::Uno::Vector::Length(VectorUtil::Rejection(::g::Uno::Float2__op_Subtraction2(p, ::g::Uno::Float2__New2(line.X, line.Y)), ::g::Uno::Float2__op_Subtraction2(::g::Uno::Float2__New2(line.Z, line.W), ::g::Uno::Float2__New2(line.X, line.Y))));
}

// public static float2 Projection(float2 a, float2 b) [static] :2229
::g::Uno::Float2 VectorUtil::Projection(::g::Uno::Float2 a, ::g::Uno::Float2 b)
{
    return ::g::Uno::Float2__op_Multiply(::g::Uno::Vector::Dot(a, b) / ::g::Uno::Vector::Dot(b, b), b);
}

// public static float2 Rejection(float2 a, float2 b) [static] :2245
::g::Uno::Float2 VectorUtil::Rejection(::g::Uno::Float2 a, ::g::Uno::Float2 b)
{
    ::g::Uno::Float2 a1 = VectorUtil::Projection(a, b);
    return ::g::Uno::Float2__op_Subtraction2(a, a1);
}

// public static float ScalarProjection(float2 a, float2 b) [static] :2237
float VectorUtil::ScalarProjection(::g::Uno::Float2 a, ::g::Uno::Float2 b)
{
    return ::g::Uno::Vector::Dot(a, b) / ::g::Uno::Vector::Length(b);
}
// }

}}} // ::g::Fuse::Internal
