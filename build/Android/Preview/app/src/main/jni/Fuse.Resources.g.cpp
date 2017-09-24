// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Experimental.Http.Htt-2465a87a.h>
#include <Experimental.Http.HttpLoader.h>
#include <Experimental.TextureL-b6dfce5c.h>
#include <Fuse.AppBase.h>
#include <Fuse.Diagnostics.h>
#include <Fuse.GraphicsWorker.h>
#include <Fuse.Node.h>
#include <Fuse.Resources.DisposalManager.h>
#include <Fuse.Resources.DisposalPolicy.h>
#include <Fuse.Resources.DisposalRequest.h>
#include <Fuse.Resources.Double-f01499f.h>
#include <Fuse.Resources.Expira-d00344da.h>
#include <Fuse.Resources.FileIm-3dfab082.h>
#include <Fuse.Resources.FileIm-450e0bee.h>
#include <Fuse.Resources.FileImageSource.h>
#include <Fuse.Resources.FileIm-b247fd74.h>
#include <Fuse.Resources.FileResource.h>
#include <Fuse.Resources.FloatR-da59ced4.h>
#include <Fuse.Resources.Generi-b2a7709f.h>
#include <Fuse.Resources.HttpIm-93bb70f8.h>
#include <Fuse.Resources.HttpImageSource.h>
#include <Fuse.Resources.HttpIm-c131ad92.h>
#include <Fuse.Resources.HttpIm-cfc77adc.h>
#include <Fuse.Resources.IDefer-65fee41c.h>
#include <Fuse.Resources.ImageS-355caaa1.h>
#include <Fuse.Resources.ImageS-87193ac7.h>
#include <Fuse.Resources.ImageS-a985306c.h>
#include <Fuse.Resources.ImageS-d58bb329.h>
#include <Fuse.Resources.ImageSource.h>
#include <Fuse.Resources.IMemoryResource.h>
#include <Fuse.Resources.IntRes-305acbb5.h>
#include <Fuse.Resources.IResou-d55ce6c3.h>
#include <Fuse.Resources.ISoftDisposable.h>
#include <Fuse.Resources.Loadin-4ba1d630.h>
#include <Fuse.Resources.Loadin-51208ece.h>
#include <Fuse.Resources.MemoryPolicy.h>
#include <Fuse.Resources.MultiD-7688643f.h>
#include <Fuse.Resources.Numeri-f2317bed.h>
#include <Fuse.Resources.Policy-131c706f.h>
#include <Fuse.Resources.ProxyI-8b63b1ea.h>
#include <Fuse.Resources.Resour-4d20d44f.h>
#include <Fuse.Resources.Resour-7da5075.h>
#include <Fuse.Resources.ResourceBool.h>
#include <Fuse.Resources.ResourceFloat.h>
#include <Fuse.Resources.ResourceFloat2.h>
#include <Fuse.Resources.ResourceFloat3.h>
#include <Fuse.Resources.ResourceFloat4.h>
#include <Fuse.Resources.ResourceObject.h>
#include <Fuse.Resources.ResourceString.h>
#include <Fuse.Resources.Resour-dcba2ee7.h>
#include <Fuse.Resources.Resour-fabdcc8b.h>
#include <Fuse.Resources.Retain-5c92a9f6.h>
#include <Fuse.Resources.System-1e583f40.h>
#include <Fuse.Resources.Textur-749306c5.h>
#include <Fuse.Scripting.IEvent-434826af.h>
#include <Fuse.Time.h>
#include <Fuse.UpdateManager.h>
#include <Fuse.UpdateStage.h>
#include <Fuse.Visual.h>
#include <OpenGL.GL.h>
#include <Uno.Action.h>
#include <Uno.Action-1.h>
#include <Uno.Action-2.h>
#include <Uno.ArgumentNullException.h>
#include <Uno.Bool.h>
#include <Uno.Buffer.h>
#include <Uno.Byte.h>
#include <Uno.Collections.Dictionary-2.h>
#include <Uno.Collections.IEnumerator.h>
#include <Uno.Collections.IEnumerator-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.Collections.List-1.h>
#include <Uno.Collections.List--251bdc7d.h>
#include <Uno.Collections.Obser-ca008b9a.h>
#include <Uno.Delegate.h>
#include <Uno.Double.h>
#include <Uno.EventArgs.h>
#include <Uno.EventHandler.h>
#include <Uno.EventHandler-1.h>
#include <Uno.Exception.h>
#include <Uno.Float.h>
#include <Uno.Float2.h>
#include <Uno.Graphics.Texture2D.h>
#include <Uno.Int.h>
#include <Uno.Int2.h>
#include <Uno.IO.File.h>
#include <Uno.IO.Stream.h>
#include <Uno.Math.h>
#include <Uno.Object.h>
#include <Uno.Predicate-1.h>
#include <Uno.String.h>
#include <Uno.Type.h>
#include <Uno.UX.FileSource.h>
#include <Uno.UX.IPropertyListener.h>
#include <Uno.UX.Property-1.h>
#include <Uno.WeakReference-1.h>
#include <Uno/Graphics/GLHelper.h>
static uString* STRINGS[18];
static uType* TYPES[39];

namespace g{
namespace Fuse{
namespace Resources{

// /Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Elements/0.47.7/resources/$.uno
// --------------------------------------------------------------------------------------------------

// private sealed class HttpImageSourceImpl.BackgroundLoad :436
// {
static void HttpImageSourceImpl__BackgroundLoad_build(uType* type)
{
    ::TYPES[0] = ::g::Uno::Action_typeof();
    ::TYPES[1] = ::g::Uno::Exception_typeof();
    ::TYPES[2] = ::g::Uno::Action1_typeof()->MakeType(::g::Uno::Graphics::Texture2D_typeof(), NULL);
    type->SetFields(0,
        ::g::Uno::String_typeof(), offsetof(::g::Fuse::Resources::HttpImageSourceImpl__BackgroundLoad, _contentType), 0,
        ::g::Uno::Buffer_typeof(), offsetof(::g::Fuse::Resources::HttpImageSourceImpl__BackgroundLoad, _data), 0,
        ::TYPES[2/*Uno.Action<texture2D>*/], offsetof(::g::Fuse::Resources::HttpImageSourceImpl__BackgroundLoad, _done), 0,
        ::TYPES[1/*Uno.Exception*/], offsetof(::g::Fuse::Resources::HttpImageSourceImpl__BackgroundLoad, _exception), 0,
        ::g::Uno::Action1_typeof()->MakeType(::TYPES[1/*Uno.Exception*/], NULL), offsetof(::g::Fuse::Resources::HttpImageSourceImpl__BackgroundLoad, _fail), 0,
        ::g::Uno::Graphics::Texture2D_typeof(), offsetof(::g::Fuse::Resources::HttpImageSourceImpl__BackgroundLoad, _tex), 0);
}

uType* HttpImageSourceImpl__BackgroundLoad_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 6;
    options.ObjectSize = sizeof(HttpImageSourceImpl__BackgroundLoad);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Resources.HttpImageSourceImpl.BackgroundLoad", options);
    type->fp_build_ = HttpImageSourceImpl__BackgroundLoad_build;
    return type;
}

// public BackgroundLoad(Uno.Buffer data, string contentType, Uno.Action<texture2D> done, Uno.Action<Uno.Exception> fail) :443
void HttpImageSourceImpl__BackgroundLoad__ctor__fn(HttpImageSourceImpl__BackgroundLoad* __this, ::g::Uno::Buffer* data, uString* contentType, uDelegate* done, uDelegate* fail)
{
    __this->ctor_(data, contentType, done, fail);
}

// private void GWDoneCallback(texture2D tex) :466
void HttpImageSourceImpl__BackgroundLoad__GWDoneCallback_fn(HttpImageSourceImpl__BackgroundLoad* __this, ::g::Uno::Graphics::Texture2D* tex)
{
    __this->GWDoneCallback(tex);
}

// public BackgroundLoad New(Uno.Buffer data, string contentType, Uno.Action<texture2D> done, Uno.Action<Uno.Exception> fail) :443
void HttpImageSourceImpl__BackgroundLoad__New1_fn(::g::Uno::Buffer* data, uString* contentType, uDelegate* done, uDelegate* fail, HttpImageSourceImpl__BackgroundLoad** __retval)
{
    *__retval = HttpImageSourceImpl__BackgroundLoad::New1(data, contentType, done, fail);
}

// public void Run() :452
void HttpImageSourceImpl__BackgroundLoad__Run_fn(HttpImageSourceImpl__BackgroundLoad* __this)
{
    __this->Run();
}

// private void UIDoneCallback() :475
void HttpImageSourceImpl__BackgroundLoad__UIDoneCallback_fn(HttpImageSourceImpl__BackgroundLoad* __this)
{
    __this->UIDoneCallback();
}

// private void UIFailCallback() :480
void HttpImageSourceImpl__BackgroundLoad__UIFailCallback_fn(HttpImageSourceImpl__BackgroundLoad* __this)
{
    __this->UIFailCallback();
}

// public BackgroundLoad(Uno.Buffer data, string contentType, Uno.Action<texture2D> done, Uno.Action<Uno.Exception> fail) [instance] :443
void HttpImageSourceImpl__BackgroundLoad::ctor_(::g::Uno::Buffer* data, uString* contentType, uDelegate* done, uDelegate* fail)
{
    uStackFrame __("Fuse.Resources.HttpImageSourceImpl.BackgroundLoad", ".ctor(Uno.Buffer,string,Uno.Action<texture2D>,Uno.Action<Uno.Exception>)");
    _data = data;
    _contentType = contentType;
    _done = done;
    _fail = fail;
    ::g::Fuse::GraphicsWorker::Dispatch(uDelegate::New(::TYPES[0/*Uno.Action*/], (void*)HttpImageSourceImpl__BackgroundLoad__Run_fn, this));
}

// private void GWDoneCallback(texture2D tex) [instance] :466
void HttpImageSourceImpl__BackgroundLoad::GWDoneCallback(::g::Uno::Graphics::Texture2D* tex)
{
    uStackFrame __("Fuse.Resources.HttpImageSourceImpl.BackgroundLoad", "GWDoneCallback(texture2D)");
    ::g::OpenGL::GL::Finish();
    _tex = tex;
    ::g::Fuse::UpdateManager::AddOnceAction(uDelegate::New(::TYPES[0/*Uno.Action*/], (void*)HttpImageSourceImpl__BackgroundLoad__UIDoneCallback_fn, this), 0);
}

// public void Run() [instance] :452
void HttpImageSourceImpl__BackgroundLoad::Run()
{
    uStackFrame __("Fuse.Resources.HttpImageSourceImpl.BackgroundLoad", "Run()");

    try
    {
        ::g::Experimental::TextureLoader::TextureLoader::ByteArrayToTexture2DContentType(_data, _contentType, uDelegate::New(::TYPES[2/*Uno.Action<texture2D>*/], (void*)HttpImageSourceImpl__BackgroundLoad__GWDoneCallback_fn, this));
    }
    catch (const uThrowable& __t)
    {
        ::g::Uno::Exception* e = __t.Exception;
        _exception = e;
        ::g::Fuse::UpdateManager::AddOnceAction(uDelegate::New(::TYPES[0/*Uno.Action*/], (void*)HttpImageSourceImpl__BackgroundLoad__UIFailCallback_fn, this), 0);
    }
}

// private void UIDoneCallback() [instance] :475
void HttpImageSourceImpl__BackgroundLoad::UIDoneCallback()
{
    uStackFrame __("Fuse.Resources.HttpImageSourceImpl.BackgroundLoad", "UIDoneCallback()");
    uPtr(_done)->InvokeVoid(_tex);
}

// private void UIFailCallback() [instance] :480
void HttpImageSourceImpl__BackgroundLoad::UIFailCallback()
{
    uStackFrame __("Fuse.Resources.HttpImageSourceImpl.BackgroundLoad", "UIFailCallback()");
    ::g::Uno::Exception* e = _exception;
    _exception = NULL;
    uPtr(_fail)->InvokeVoid(e);
}

// public BackgroundLoad New(Uno.Buffer data, string contentType, Uno.Action<texture2D> done, Uno.Action<Uno.Exception> fail) [static] :443
HttpImageSourceImpl__BackgroundLoad* HttpImageSourceImpl__BackgroundLoad::New1(::g::Uno::Buffer* data, uString* contentType, uDelegate* done, uDelegate* fail)
{
    HttpImageSourceImpl__BackgroundLoad* obj1 = (HttpImageSourceImpl__BackgroundLoad*)uNew(HttpImageSourceImpl__BackgroundLoad_typeof());
    obj1->ctor_(data, contentType, done, fail);
    return obj1;
}
// }

// /Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Elements/0.47.7/resources/$.uno
// --------------------------------------------------------------------------------------------------

// private sealed class FileImageSourceImpl.BackgroundLoad :236
// {
static void FileImageSourceImpl__BackgroundLoad_build(uType* type)
{
    ::TYPES[0] = ::g::Uno::Action_typeof();
    ::TYPES[1] = ::g::Uno::Exception_typeof();
    ::TYPES[2] = ::g::Uno::Action1_typeof()->MakeType(::g::Uno::Graphics::Texture2D_typeof(), NULL);
    type->SetFields(0,
        ::TYPES[2/*Uno.Action<texture2D>*/], offsetof(::g::Fuse::Resources::FileImageSourceImpl__BackgroundLoad, _done), 0,
        ::TYPES[1/*Uno.Exception*/], offsetof(::g::Fuse::Resources::FileImageSourceImpl__BackgroundLoad, _exception), 0,
        ::g::Uno::Action1_typeof()->MakeType(::TYPES[1/*Uno.Exception*/], NULL), offsetof(::g::Fuse::Resources::FileImageSourceImpl__BackgroundLoad, _fail), 0,
        ::g::Uno::UX::FileSource_typeof(), offsetof(::g::Fuse::Resources::FileImageSourceImpl__BackgroundLoad, _file), 0,
        ::g::Uno::Graphics::Texture2D_typeof(), offsetof(::g::Fuse::Resources::FileImageSourceImpl__BackgroundLoad, _tex), 0);
}

uType* FileImageSourceImpl__BackgroundLoad_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 5;
    options.ObjectSize = sizeof(FileImageSourceImpl__BackgroundLoad);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Resources.FileImageSourceImpl.BackgroundLoad", options);
    type->fp_build_ = FileImageSourceImpl__BackgroundLoad_build;
    return type;
}

// public BackgroundLoad(Uno.UX.FileSource file, Uno.Action<texture2D> done, Uno.Action<Uno.Exception> fail) :242
void FileImageSourceImpl__BackgroundLoad__ctor__fn(FileImageSourceImpl__BackgroundLoad* __this, ::g::Uno::UX::FileSource* file, uDelegate* done, uDelegate* fail)
{
    __this->ctor_(file, done, fail);
}

// private void GWDoneCallback(texture2D tex) :265
void FileImageSourceImpl__BackgroundLoad__GWDoneCallback_fn(FileImageSourceImpl__BackgroundLoad* __this, ::g::Uno::Graphics::Texture2D* tex)
{
    __this->GWDoneCallback(tex);
}

// public BackgroundLoad New(Uno.UX.FileSource file, Uno.Action<texture2D> done, Uno.Action<Uno.Exception> fail) :242
void FileImageSourceImpl__BackgroundLoad__New1_fn(::g::Uno::UX::FileSource* file, uDelegate* done, uDelegate* fail, FileImageSourceImpl__BackgroundLoad** __retval)
{
    *__retval = FileImageSourceImpl__BackgroundLoad::New1(file, done, fail);
}

// public void Run() :250
void FileImageSourceImpl__BackgroundLoad__Run_fn(FileImageSourceImpl__BackgroundLoad* __this)
{
    __this->Run();
}

// private void UIDoneCallback() :274
void FileImageSourceImpl__BackgroundLoad__UIDoneCallback_fn(FileImageSourceImpl__BackgroundLoad* __this)
{
    __this->UIDoneCallback();
}

// private void UIFailCallback() :279
void FileImageSourceImpl__BackgroundLoad__UIFailCallback_fn(FileImageSourceImpl__BackgroundLoad* __this)
{
    __this->UIFailCallback();
}

// public BackgroundLoad(Uno.UX.FileSource file, Uno.Action<texture2D> done, Uno.Action<Uno.Exception> fail) [instance] :242
void FileImageSourceImpl__BackgroundLoad::ctor_(::g::Uno::UX::FileSource* file, uDelegate* done, uDelegate* fail)
{
    uStackFrame __("Fuse.Resources.FileImageSourceImpl.BackgroundLoad", ".ctor(Uno.UX.FileSource,Uno.Action<texture2D>,Uno.Action<Uno.Exception>)");
    _file = file;
    _done = done;
    _fail = fail;
    ::g::Fuse::GraphicsWorker::Dispatch(uDelegate::New(::TYPES[0/*Uno.Action*/], (void*)FileImageSourceImpl__BackgroundLoad__Run_fn, this));
}

// private void GWDoneCallback(texture2D tex) [instance] :265
void FileImageSourceImpl__BackgroundLoad::GWDoneCallback(::g::Uno::Graphics::Texture2D* tex)
{
    uStackFrame __("Fuse.Resources.FileImageSourceImpl.BackgroundLoad", "GWDoneCallback(texture2D)");
    ::g::OpenGL::GL::Finish();
    _tex = tex;
    ::g::Fuse::UpdateManager::PostAction(uDelegate::New(::TYPES[0/*Uno.Action*/], (void*)FileImageSourceImpl__BackgroundLoad__UIDoneCallback_fn, this));
}

// public void Run() [instance] :250
void FileImageSourceImpl__BackgroundLoad::Run()
{
    uStackFrame __("Fuse.Resources.FileImageSourceImpl.BackgroundLoad", "Run()");

    try
    {
        uArray* data = uPtr(_file)->ReadAllBytes();
        ::g::Experimental::TextureLoader::TextureLoader::ByteArrayToTexture2DFilename(::g::Uno::Buffer::New1(data), uPtr(_file)->Name, uDelegate::New(::TYPES[2/*Uno.Action<texture2D>*/], (void*)FileImageSourceImpl__BackgroundLoad__GWDoneCallback_fn, this));
    }
    catch (const uThrowable& __t)
    {
        ::g::Uno::Exception* e = __t.Exception;
        _exception = e;
        ::g::Fuse::UpdateManager::PostAction(uDelegate::New(::TYPES[0/*Uno.Action*/], (void*)FileImageSourceImpl__BackgroundLoad__UIFailCallback_fn, this));
    }
}

// private void UIDoneCallback() [instance] :274
void FileImageSourceImpl__BackgroundLoad::UIDoneCallback()
{
    uStackFrame __("Fuse.Resources.FileImageSourceImpl.BackgroundLoad", "UIDoneCallback()");
    uPtr(_done)->InvokeVoid(_tex);
}

// private void UIFailCallback() [instance] :279
void FileImageSourceImpl__BackgroundLoad::UIFailCallback()
{
    uStackFrame __("Fuse.Resources.FileImageSourceImpl.BackgroundLoad", "UIFailCallback()");
    ::g::Uno::Exception* e = _exception;
    _exception = NULL;
    uPtr(_fail)->InvokeVoid(e);
}

// public BackgroundLoad New(Uno.UX.FileSource file, Uno.Action<texture2D> done, Uno.Action<Uno.Exception> fail) [static] :242
FileImageSourceImpl__BackgroundLoad* FileImageSourceImpl__BackgroundLoad::New1(::g::Uno::UX::FileSource* file, uDelegate* done, uDelegate* fail)
{
    FileImageSourceImpl__BackgroundLoad* obj1 = (FileImageSourceImpl__BackgroundLoad*)uNew(FileImageSourceImpl__BackgroundLoad_typeof());
    obj1->ctor_(file, done, fail);
    return obj1;
}
// }

// /Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Elements/0.47.7/resources/$.uno
// --------------------------------------------------------------------------------------------------

// protected enum LoadingImageSource.CleanupReason :689
uEnumType* LoadingImageSource__CleanupReason_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Resources.LoadingImageSource.CleanupReason", ::g::Uno::Int_typeof(), 3);
    type->SetLiterals(
        "Normal", 0LL,
        "Failed", 1LL,
        "Disposed", 2LL);
    return type;
}

// /Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Common/0.47.7/resources/$.uno
// ------------------------------------------------------------------------------------------------

// internal static class DisposalManager :9
// {
// static DisposalManager() :9
static void DisposalManager__cctor__fn(uType* __type)
{
    DisposalManager::_items_ = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[3/*Uno.Collections.List<Fuse.Resources.IMemoryResource>*/]));
    DisposalManager::_softDisposables_ = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[4/*Uno.Collections.List<Fuse.Resources.ISoftDisposable>*/]));
}

static void DisposalManager_build(uType* type)
{
    ::TYPES[3] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Resources::IMemoryResource_typeof(), NULL);
    ::TYPES[4] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Resources::ISoftDisposable_typeof(), NULL);
    ::TYPES[5] = ::g::Fuse::Resources::IMemoryResource_typeof();
    ::TYPES[6] = ::g::Fuse::Resources::ISoftDisposable_typeof();
    ::TYPES[0] = ::g::Uno::Action_typeof();
    type->SetFields(0,
        ::g::Uno::Bool_typeof(), (uintptr_t)&::g::Fuse::Resources::DisposalManager::_actionAdded_, uFieldFlagsStatic,
        ::g::Uno::Int_typeof(), (uintptr_t)&::g::Fuse::Resources::DisposalManager::_disposeAt_, uFieldFlagsStatic,
        ::TYPES[3/*Uno.Collections.List<Fuse.Resources.IMemoryResource>*/], (uintptr_t)&::g::Fuse::Resources::DisposalManager::_items_, uFieldFlagsStatic,
        ::TYPES[4/*Uno.Collections.List<Fuse.Resources.ISoftDisposable>*/], (uintptr_t)&::g::Fuse::Resources::DisposalManager::_softDisposables_, uFieldFlagsStatic);
}

uClassType* DisposalManager_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 4;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Resources.DisposalManager", options);
    type->fp_build_ = DisposalManager_build;
    type->fp_cctor_ = DisposalManager__cctor__fn;
    return type;
}

// public static void Add(Fuse.Resources.IMemoryResource item) :20
void DisposalManager__Add_fn(uObject* item)
{
    DisposalManager::Add(item);
}

// public static void Add(Fuse.Resources.ISoftDisposable item) :103
void DisposalManager__Add1_fn(uObject* item)
{
    DisposalManager::Add1(item);
}

// public static void Clean(Fuse.Resources.DisposalRequest dr) :77
void DisposalManager__Clean_fn(int* dr)
{
    DisposalManager::Clean(*dr);
}

// public static void Remove(Fuse.Resources.IMemoryResource item) :31
void DisposalManager__Remove_fn(uObject* item)
{
    DisposalManager::Remove(item);
}

// public static void Remove(Fuse.Resources.ISoftDisposable item) :108
void DisposalManager__Remove1_fn(uObject* item)
{
    DisposalManager::Remove1(item);
}

// private static void Update() :56
void DisposalManager__Update_fn()
{
    DisposalManager::Update();
}

// private static void VerifyAttach() :39
void DisposalManager__VerifyAttach_fn()
{
    DisposalManager::VerifyAttach();
}

bool DisposalManager::_actionAdded_;
int DisposalManager::_disposeAt_;
uSStrong< ::g::Uno::Collections::List*> DisposalManager::_items_;
uSStrong< ::g::Uno::Collections::List*> DisposalManager::_softDisposables_;

// public static void Add(Fuse.Resources.IMemoryResource item) [static] :20
void DisposalManager::Add(uObject* item)
{
    uStackFrame __("Fuse.Resources.DisposalManager", "Add(Fuse.Resources.IMemoryResource)");
    DisposalManager_typeof()->Init();
    ::g::Uno::Collections::List__Add_fn(uPtr(DisposalManager::_items()), item);
    DisposalManager::VerifyAttach();
}

// public static void Add(Fuse.Resources.ISoftDisposable item) [static] :103
void DisposalManager::Add1(uObject* item)
{
    uStackFrame __("Fuse.Resources.DisposalManager", "Add(Fuse.Resources.ISoftDisposable)");
    DisposalManager_typeof()->Init();
    ::g::Uno::Collections::List__Add_fn(uPtr(DisposalManager::_softDisposables()), item);
}

// public static void Clean(Fuse.Resources.DisposalRequest dr) [static] :77
void DisposalManager::Clean(int dr)
{
    uStackFrame __("Fuse.Resources.DisposalManager", "Clean(Fuse.Resources.DisposalRequest)");
    DisposalManager_typeof()->Init();
    uObject* ret1;
    uObject* ret2;

    for (int i = uPtr(DisposalManager::_items())->Count() - 1; i >= 0; --i)
    {
        if (i >= uPtr(DisposalManager::_items())->Count())
            continue;

        uObject* item = (::g::Uno::Collections::List__get_Item_fn(uPtr(DisposalManager::_items()), uCRef<int>(i), &ret1), ret1);

        if (!uPtr(::g::Fuse::Resources::IMemoryResource::MemoryPolicy(uInterface(uPtr(item), ::TYPES[5/*Fuse.Resources.IMemoryResource*/])))->ShouldSoftDispose(dr, item))
            continue;

        uPtr(DisposalManager::_items())->RemoveAt(i);
        ::g::Fuse::Resources::IMemoryResource::SoftDispose(uInterface(uPtr(item), ::TYPES[5/*Fuse.Resources.IMemoryResource*/]));
    }

    if ((dr == 1) || (dr == 2))

        for (int i1 = 0; i1 < uPtr(DisposalManager::_softDisposables())->Count(); ++i1)
            ::g::Fuse::Resources::ISoftDisposable::SoftDispose(uInterface(uPtr((::g::Uno::Collections::List__get_Item_fn(uPtr(DisposalManager::_softDisposables()), uCRef<int>(i1), &ret2), ret2)), ::TYPES[6/*Fuse.Resources.ISoftDisposable*/]));
}

// public static void Remove(Fuse.Resources.IMemoryResource item) [static] :31
void DisposalManager::Remove(uObject* item)
{
    uStackFrame __("Fuse.Resources.DisposalManager", "Remove(Fuse.Resources.IMemoryResource)");
    DisposalManager_typeof()->Init();
    bool ret3;

    if ((::g::Uno::Collections::List__Remove_fn(uPtr(DisposalManager::_items()), item, &ret3), ret3))
        DisposalManager::VerifyAttach();
}

// public static void Remove(Fuse.Resources.ISoftDisposable item) [static] :108
void DisposalManager::Remove1(uObject* item)
{
    uStackFrame __("Fuse.Resources.DisposalManager", "Remove(Fuse.Resources.ISoftDisposable)");
    DisposalManager_typeof()->Init();
    bool ret4;
    ::g::Uno::Collections::List__Remove_fn(uPtr(DisposalManager::_softDisposables()), item, &ret4);
}

// private static void Update() [static] :56
void DisposalManager::Update()
{
    uStackFrame __("Fuse.Resources.DisposalManager", "Update()");
    DisposalManager_typeof()->Init();
    uObject* ret5;

    for (int i = 0; i < 2; ++i)
    {
        if (uPtr(DisposalManager::_items())->Count() == 0)
            return;

        DisposalManager::_disposeAt()++;

        if (DisposalManager::_disposeAt() >= uPtr(DisposalManager::_items())->Count())
            DisposalManager::_disposeAt() = 0;

        uObject* item = (::g::Uno::Collections::List__get_Item_fn(uPtr(DisposalManager::_items()), uCRef<int>(DisposalManager::_disposeAt()), &ret5), ret5);

        if (!uPtr(::g::Fuse::Resources::IMemoryResource::MemoryPolicy(uInterface(uPtr(item), ::TYPES[5/*Fuse.Resources.IMemoryResource*/])))->ShouldSoftDispose(0, item))
            continue;

        uPtr(DisposalManager::_items())->RemoveAt(DisposalManager::_disposeAt());
        ::g::Fuse::Resources::IMemoryResource::SoftDispose(uInterface(uPtr(item), ::TYPES[5/*Fuse.Resources.IMemoryResource*/]));
    }
}

// private static void VerifyAttach() [static] :39
void DisposalManager::VerifyAttach()
{
    uStackFrame __("Fuse.Resources.DisposalManager", "VerifyAttach()");
    DisposalManager_typeof()->Init();
    bool on = uPtr(DisposalManager::_items())->Count() > 0;

    if (on == DisposalManager::_actionAdded())
        return;

    if (on)
        ::g::Fuse::UpdateManager::AddAction1(uDelegate::New(::TYPES[0/*Uno.Action*/], (void*)DisposalManager__Update_fn), 0);
    else
        ::g::Fuse::UpdateManager::RemoveAction1(uDelegate::New(::TYPES[0/*Uno.Action*/], (void*)DisposalManager__Update_fn), 0);

    DisposalManager::_actionAdded() = on;
}
// }

// /Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Common/0.47.7/resources/$.uno
// ------------------------------------------------------------------------------------------------

// internal abstract class DisposalPolicy :124
// {
static void DisposalPolicy_build(uType* type)
{
}

DisposalPolicy_type* DisposalPolicy_typeof()
{
    static uSStrong<DisposalPolicy_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ObjectSize = sizeof(DisposalPolicy);
    options.TypeSize = sizeof(DisposalPolicy_type);
    type = (DisposalPolicy_type*)uClassType::New("Fuse.Resources.DisposalPolicy", options);
    type->fp_build_ = DisposalPolicy_build;
    return type;
}

// protected generated DisposalPolicy() :124
void DisposalPolicy__ctor__fn(DisposalPolicy* __this)
{
    __this->ctor_();
}

// protected generated DisposalPolicy() [instance] :124
void DisposalPolicy::ctor_()
{
}
// }

// /Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Common/0.47.7/resources/$.uno
// ------------------------------------------------------------------------------------------------

// public enum DisposalRequest :203
uEnumType* DisposalRequest_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Resources.DisposalRequest", ::g::Uno::Int_typeof(), 3);
    type->SetLiterals(
        "Regular", 0LL,
        "Background", 1LL,
        "LowMemory", 2LL);
    return type;
}

// /Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Nodes/0.47.7/$.uno
// -------------------------------------------------------------------------------------

// internal sealed class DoubleResourceConverter :3450
// {
static void DoubleResourceConverter_build(uType* type)
{
    type->SetBase(::g::Fuse::Resources::NumericResourceConverter_typeof()->MakeType(::g::Uno::Double_typeof(), NULL));
    type->SetInterfaces(
        ::g::Fuse::Resources::IResourceConverter_typeof()->MakeType(::g::Uno::Double_typeof(), NULL), offsetof(::g::Fuse::Resources::NumericResourceConverter_type, interface0));
}

::g::Fuse::Resources::NumericResourceConverter_type* DoubleResourceConverter_typeof()
{
    static uSStrong< ::g::Fuse::Resources::NumericResourceConverter_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Resources::NumericResourceConverter_typeof();
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(DoubleResourceConverter);
    options.TypeSize = sizeof(::g::Fuse::Resources::NumericResourceConverter_type);
    type = (::g::Fuse::Resources::NumericResourceConverter_type*)uClassType::New("Fuse.Resources.DoubleResourceConverter", options);
    type->fp_build_ = DoubleResourceConverter_build;
    type->fp_ctor_ = (void*)DoubleResourceConverter__New1_fn;
    type->fp_Convert = (void(*)(::g::Fuse::Resources::NumericResourceConverter*, uObject*, uTRef))DoubleResourceConverter__Convert_fn;
    type->interface0.fp_Accept = (void(*)(uObject*, uObject*, bool*))::g::Fuse::Resources::NumericResourceConverter__Accept_fn;
    type->interface0.fp_Convert = (void(*)(uObject*, uObject*, uTRef))DoubleResourceConverter__Convert_fn;
    return type;
}

// public generated DoubleResourceConverter() :3450
void DoubleResourceConverter__ctor_1_fn(DoubleResourceConverter* __this)
{
    __this->ctor_1();
}

// public override sealed double Convert(object o) :3452
void DoubleResourceConverter__Convert_fn(DoubleResourceConverter* __this, uObject* o, double* __retval)
{
    uStackFrame __("Fuse.Resources.DoubleResourceConverter", "Convert(object)");
    return *__retval = __this->InternConvert(o), void();
}

// public generated DoubleResourceConverter New() :3450
void DoubleResourceConverter__New1_fn(DoubleResourceConverter** __retval)
{
    *__retval = DoubleResourceConverter::New1();
}

// public generated DoubleResourceConverter() [instance] :3450
void DoubleResourceConverter::ctor_1()
{
    ctor_();
}

// public generated DoubleResourceConverter New() [static] :3450
DoubleResourceConverter* DoubleResourceConverter::New1()
{
    DoubleResourceConverter* obj1 = (DoubleResourceConverter*)uNew(DoubleResourceConverter_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// /Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Common/0.47.7/resources/$.uno
// ------------------------------------------------------------------------------------------------

// internal sealed class ExpirationDisposalPolicy :131
// {
static void ExpirationDisposalPolicy_build(uType* type)
{
    type->SetFields(0,
        ::g::Uno::Double_typeof(), offsetof(::g::Fuse::Resources::ExpirationDisposalPolicy, lastUsedFrameTime), 0,
        ::g::Uno::Double_typeof(), offsetof(::g::Fuse::Resources::ExpirationDisposalPolicy, _Timeout), 0);
}

::g::Fuse::Resources::DisposalPolicy_type* ExpirationDisposalPolicy_typeof()
{
    static uSStrong< ::g::Fuse::Resources::DisposalPolicy_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Resources::DisposalPolicy_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(ExpirationDisposalPolicy);
    options.TypeSize = sizeof(::g::Fuse::Resources::DisposalPolicy_type);
    type = (::g::Fuse::Resources::DisposalPolicy_type*)uClassType::New("Fuse.Resources.ExpirationDisposalPolicy", options);
    type->fp_build_ = ExpirationDisposalPolicy_build;
    type->fp_ctor_ = (void*)ExpirationDisposalPolicy__New1_fn;
    type->fp_CanDispose = (void(*)(::g::Fuse::Resources::DisposalPolicy*, int*, bool*, bool*))ExpirationDisposalPolicy__CanDispose_fn;
    type->fp_Clone = (void(*)(::g::Fuse::Resources::DisposalPolicy*, ::g::Fuse::Resources::DisposalPolicy**))ExpirationDisposalPolicy__Clone_fn;
    type->fp_MarkUsed = (void(*)(::g::Fuse::Resources::DisposalPolicy*))ExpirationDisposalPolicy__MarkUsed_fn;
    return type;
}

// public generated ExpirationDisposalPolicy() :131
void ExpirationDisposalPolicy__ctor_1_fn(ExpirationDisposalPolicy* __this)
{
    __this->ctor_1();
}

// public override sealed bool CanDispose(Fuse.Resources.DisposalRequest dr, bool pinned) :142
void ExpirationDisposalPolicy__CanDispose_fn(ExpirationDisposalPolicy* __this, int* dr, bool* pinned, bool* __retval)
{
    bool pinned_ = *pinned;
    int dr_ = *dr;

    if (!pinned_ && (__this->Timeout() > 0.0))
    {
        double elapsed = ::g::Fuse::Time::FrameTime() - __this->lastUsedFrameTime;

        if (elapsed > __this->Timeout())
            return *__retval = true, void();
    }

    return *__retval = dr_ != 0, void();
}

// public override sealed Fuse.Resources.DisposalPolicy Clone() :155
void ExpirationDisposalPolicy__Clone_fn(ExpirationDisposalPolicy* __this, ::g::Fuse::Resources::DisposalPolicy** __retval)
{
    ExpirationDisposalPolicy* p = ExpirationDisposalPolicy::New1();
    p->Timeout(__this->Timeout());
    return *__retval = p, void();
}

// public override sealed void MarkUsed() :137
void ExpirationDisposalPolicy__MarkUsed_fn(ExpirationDisposalPolicy* __this)
{
    __this->lastUsedFrameTime = ::g::Fuse::Time::FrameTime();
}

// public generated ExpirationDisposalPolicy New() :131
void ExpirationDisposalPolicy__New1_fn(ExpirationDisposalPolicy** __retval)
{
    *__retval = ExpirationDisposalPolicy::New1();
}

// public generated double get_Timeout() :135
void ExpirationDisposalPolicy__get_Timeout_fn(ExpirationDisposalPolicy* __this, double* __retval)
{
    *__retval = __this->Timeout();
}

// public generated void set_Timeout(double value) :135
void ExpirationDisposalPolicy__set_Timeout_fn(ExpirationDisposalPolicy* __this, double* value)
{
    __this->Timeout(*value);
}

// public generated ExpirationDisposalPolicy() [instance] :131
void ExpirationDisposalPolicy::ctor_1()
{
    ctor_();
}

// public generated double get_Timeout() [instance] :135
double ExpirationDisposalPolicy::Timeout()
{
    return _Timeout;
}

// public generated void set_Timeout(double value) [instance] :135
void ExpirationDisposalPolicy::Timeout(double value)
{
    _Timeout = value;
}

// public generated ExpirationDisposalPolicy New() [static] :131
ExpirationDisposalPolicy* ExpirationDisposalPolicy::New1()
{
    ExpirationDisposalPolicy* obj1 = (ExpirationDisposalPolicy*)uNew(ExpirationDisposalPolicy_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// /Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Elements/0.47.7/resources/$.uno
// --------------------------------------------------------------------------------------------------

// public sealed class FileImageSource :69
// {
static void FileImageSource_build(uType* type)
{
    ::TYPES[7] = ::g::Uno::UX::FileSource_typeof();
    ::TYPES[8] = ::g::Fuse::Resources::FileImageSourceImpl_typeof();
    type->SetFields(5,
        ::g::Fuse::Resources::ProxyImageSource_typeof(), offsetof(::g::Fuse::Resources::FileImageSource, _proxy), 0);
    type->Reflection.SetFunctions(9,
        new uFunction("set_DefaultPolicy", NULL, (void*)FileImageSource__set_DefaultPolicy_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Resources::MemoryPolicy_typeof()),
        new uFunction("get_Density", NULL, (void*)FileImageSource__get_Density_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("set_Density", NULL, (void*)FileImageSource__set_Density_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("get_File", NULL, (void*)FileImageSource__get_File_fn, 0, false, ::TYPES[7/*Uno.UX.FileSource*/], 0),
        new uFunction("set_File", NULL, (void*)FileImageSource__set_File_fn, 0, false, uVoid_typeof(), 1, ::TYPES[7/*Uno.UX.FileSource*/]),
        new uFunction(".ctor", NULL, (void*)FileImageSource__New2_fn, 0, true, type, 0),
        new uFunction(".ctor", NULL, (void*)FileImageSource__New3_fn, 0, true, type, 1, ::TYPES[7/*Uno.UX.FileSource*/]),
        new uFunction("get_Policy", NULL, (void*)FileImageSource__get_Policy_fn, 0, false, ::g::Fuse::Resources::MemoryPolicy_typeof(), 0),
        new uFunction("set_Policy", NULL, (void*)FileImageSource__set_Policy_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Resources::MemoryPolicy_typeof()));
}

::g::Fuse::Resources::ImageSource_type* FileImageSource_typeof()
{
    static uSStrong< ::g::Fuse::Resources::ImageSource_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Resources::ImageSource_typeof();
    options.FieldCount = 6;
    options.ObjectSize = sizeof(FileImageSource);
    options.TypeSize = sizeof(::g::Fuse::Resources::ImageSource_type);
    type = (::g::Fuse::Resources::ImageSource_type*)uClassType::New("Fuse.Resources.FileImageSource", options);
    type->fp_build_ = FileImageSource_build;
    type->fp_ctor_ = (void*)FileImageSource__New2_fn;
    type->fp_GetTexture = (void(*)(::g::Fuse::Resources::ImageSource*, ::g::Uno::Graphics::Texture2D**))FileImageSource__GetTexture_fn;
    type->fp_OnPinChanged = (void(*)(::g::Fuse::Resources::ImageSource*))FileImageSource__OnPinChanged_fn;
    type->fp_get_PixelSize = (void(*)(::g::Fuse::Resources::ImageSource*, ::g::Uno::Int2*))FileImageSource__get_PixelSize_fn;
    type->fp_Reload = (void(*)(::g::Fuse::Resources::ImageSource*))FileImageSource__Reload_fn;
    type->fp_get_Size = (void(*)(::g::Fuse::Resources::ImageSource*, ::g::Uno::Float2*))FileImageSource__get_Size_fn;
    type->fp_get_SizeDensity = (void(*)(::g::Fuse::Resources::ImageSource*, float*))FileImageSource__get_SizeDensity_fn;
    type->fp_get_State = (void(*)(::g::Fuse::Resources::ImageSource*, int*))FileImageSource__get_State_fn;
    return type;
}

// public FileImageSource() :102
void FileImageSource__ctor_2_fn(FileImageSource* __this)
{
    __this->ctor_2();
}

// public FileImageSource(Uno.UX.FileSource file) :96
void FileImageSource__ctor_3_fn(FileImageSource* __this, ::g::Uno::UX::FileSource* file)
{
    __this->ctor_3(file);
}

// public void set_DefaultPolicy(Fuse.Resources.MemoryPolicy value) :109
void FileImageSource__set_DefaultPolicy_fn(FileImageSource* __this, ::g::Fuse::Resources::MemoryPolicy* value)
{
    __this->DefaultPolicy(value);
}

// public float get_Density() :139
void FileImageSource__get_Density_fn(FileImageSource* __this, float* __retval)
{
    *__retval = __this->Density();
}

// public void set_Density(float value) :139
void FileImageSource__set_Density_fn(FileImageSource* __this, float* value)
{
    __this->Density(*value);
}

// public Uno.UX.FileSource get_File() :78
void FileImageSource__get_File_fn(FileImageSource* __this, ::g::Uno::UX::FileSource** __retval)
{
    *__retval = __this->File();
}

// public void set_File(Uno.UX.FileSource value) :79
void FileImageSource__set_File_fn(FileImageSource* __this, ::g::Uno::UX::FileSource* value)
{
    __this->File(value);
}

// public override sealed texture2D GetTexture() :132
void FileImageSource__GetTexture_fn(FileImageSource* __this, ::g::Uno::Graphics::Texture2D** __retval)
{
    uStackFrame __("Fuse.Resources.FileImageSource", "GetTexture()");
    return *__retval = uPtr(__this->_proxy)->GetTexture(), void();
}

// public FileImageSource New() :102
void FileImageSource__New2_fn(FileImageSource** __retval)
{
    *__retval = FileImageSource::New2();
}

// public FileImageSource New(Uno.UX.FileSource file) :96
void FileImageSource__New3_fn(::g::Uno::UX::FileSource* file, FileImageSource** __retval)
{
    *__retval = FileImageSource::New3(file);
}

// protected override sealed void OnPinChanged() :128
void FileImageSource__OnPinChanged_fn(FileImageSource* __this)
{
    uStackFrame __("Fuse.Resources.FileImageSource", "OnPinChanged()");
    uPtr(__this->_proxy)->OnPinChanged();
}

// public override sealed int2 get_PixelSize() :130
void FileImageSource__get_PixelSize_fn(FileImageSource* __this, ::g::Uno::Int2* __retval)
{
    uStackFrame __("Fuse.Resources.FileImageSource", "get_PixelSize()");
    return *__retval = uPtr(__this->_proxy)->PixelSize(), void();
}

// public Fuse.Resources.MemoryPolicy get_Policy() :122
void FileImageSource__get_Policy_fn(FileImageSource* __this, ::g::Fuse::Resources::MemoryPolicy** __retval)
{
    *__retval = __this->Policy();
}

// public void set_Policy(Fuse.Resources.MemoryPolicy value) :123
void FileImageSource__set_Policy_fn(FileImageSource* __this, ::g::Fuse::Resources::MemoryPolicy* value)
{
    __this->Policy(value);
}

// public override sealed void Reload() :133
void FileImageSource__Reload_fn(FileImageSource* __this)
{
    uStackFrame __("Fuse.Resources.FileImageSource", "Reload()");
    uPtr(__this->_proxy)->Reload();
}

// public override sealed float2 get_Size() :129
void FileImageSource__get_Size_fn(FileImageSource* __this, ::g::Uno::Float2* __retval)
{
    uStackFrame __("Fuse.Resources.FileImageSource", "get_Size()");
    return *__retval = uPtr(__this->_proxy)->Size(), void();
}

// public override sealed float get_SizeDensity() :134
void FileImageSource__get_SizeDensity_fn(FileImageSource* __this, float* __retval)
{
    uStackFrame __("Fuse.Resources.FileImageSource", "get_SizeDensity()");
    return *__retval = __this->Density(), void();
}

// public override sealed Fuse.Resources.ImageSourceState get_State() :131
void FileImageSource__get_State_fn(FileImageSource* __this, int* __retval)
{
    uStackFrame __("Fuse.Resources.FileImageSource", "get_State()");
    return *__retval = uPtr(__this->_proxy)->State(), void();
}

// public FileImageSource() [instance] :102
void FileImageSource::ctor_2()
{
    ctor_1();
    _proxy = ::g::Fuse::Resources::ProxyImageSource::New1(this);
}

// public FileImageSource(Uno.UX.FileSource file) [instance] :96
void FileImageSource::ctor_3(::g::Uno::UX::FileSource* file)
{
    uStackFrame __("Fuse.Resources.FileImageSource", ".ctor(Uno.UX.FileSource)");
    ctor_1();
    _proxy = ::g::Fuse::Resources::ProxyImageSource::New1(this);
    File(file);
}

// public void set_DefaultPolicy(Fuse.Resources.MemoryPolicy value) [instance] :109
void FileImageSource::DefaultPolicy(::g::Fuse::Resources::MemoryPolicy* value)
{
    uStackFrame __("Fuse.Resources.FileImageSource", "set_DefaultPolicy(Fuse.Resources.MemoryPolicy)");
    uPtr(_proxy)->DefaultSetPolicy(value);
}

// public float get_Density() [instance] :139
float FileImageSource::Density()
{
    uStackFrame __("Fuse.Resources.FileImageSource", "get_Density()");
    return uPtr(_proxy)->Density();
}

// public void set_Density(float value) [instance] :139
void FileImageSource::Density(float value)
{
    uStackFrame __("Fuse.Resources.FileImageSource", "set_Density(float)");
    uPtr(_proxy)->Density(value);
}

// public Uno.UX.FileSource get_File() [instance] :78
::g::Uno::UX::FileSource* FileImageSource::File()
{
    uStackFrame __("Fuse.Resources.FileImageSource", "get_File()");
    return (uPtr(_proxy)->Impl() == NULL) ? uCast< ::g::Uno::UX::FileSource*>(NULL, ::TYPES[7/*Uno.UX.FileSource*/]) : (::g::Uno::UX::FileSource*)uPtr(uAs< ::g::Fuse::Resources::FileImageSourceImpl*>(uPtr(_proxy)->Impl(), ::TYPES[8/*Fuse.Resources.FileImageSourceImpl*/]))->File();
}

// public void set_File(Uno.UX.FileSource value) [instance] :79
void FileImageSource::File(::g::Uno::UX::FileSource* value)
{
    uStackFrame __("Fuse.Resources.FileImageSource", "set_File(Uno.UX.FileSource)");
    uPtr(_proxy)->Release();

    if (value == NULL)
        return;

    ::g::Fuse::Resources::FileImageSourceImpl* bf = ::g::Fuse::Resources::FileImageSourceCache::GetFileSource(value);
    uPtr(_proxy)->Attach(bf);
}

// public Fuse.Resources.MemoryPolicy get_Policy() [instance] :122
::g::Fuse::Resources::MemoryPolicy* FileImageSource::Policy()
{
    uStackFrame __("Fuse.Resources.FileImageSource", "get_Policy()");
    return uPtr(_proxy)->Policy();
}

// public void set_Policy(Fuse.Resources.MemoryPolicy value) [instance] :123
void FileImageSource::Policy(::g::Fuse::Resources::MemoryPolicy* value)
{
    uStackFrame __("Fuse.Resources.FileImageSource", "set_Policy(Fuse.Resources.MemoryPolicy)");
    uPtr(_proxy)->Policy(value);
}

// public FileImageSource New() [static] :102
FileImageSource* FileImageSource::New2()
{
    FileImageSource* obj2 = (FileImageSource*)uNew(FileImageSource_typeof());
    obj2->ctor_2();
    return obj2;
}

// public FileImageSource New(Uno.UX.FileSource file) [static] :96
FileImageSource* FileImageSource::New3(::g::Uno::UX::FileSource* file)
{
    FileImageSource* obj1 = (FileImageSource*)uNew(FileImageSource_typeof());
    obj1->ctor_3(file);
    return obj1;
}
// }

// /Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Elements/0.47.7/resources/$.uno
// --------------------------------------------------------------------------------------------------

// internal static class FileImageSourceCache :13
// {
// static FileImageSourceCache() :13
static void FileImageSourceCache__cctor__fn(uType* __type)
{
    FileImageSourceCache::_cache_ = ((::g::Uno::Collections::Dictionary*)::g::Uno::Collections::Dictionary::New1(::TYPES[9/*Uno.Collections.Dictionary<Uno.UX.FileSource, Uno.WeakReference<Fuse.Resources.FileImageSourceImpl>>*/]));
}

static void FileImageSourceCache_build(uType* type)
{
    ::TYPES[9] = ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Uno::UX::FileSource_typeof(), ::g::Uno::WeakReference_typeof()->MakeType(::g::Fuse::Resources::FileImageSourceImpl_typeof(), NULL), NULL);
    ::TYPES[10] = ::g::Uno::WeakReference_typeof()->MakeType(::g::Fuse::Resources::FileImageSourceImpl_typeof(), NULL);
    type->SetFields(0,
        ::TYPES[9/*Uno.Collections.Dictionary<Uno.UX.FileSource, Uno.WeakReference<Fuse.Resources.FileImageSourceImpl>>*/], (uintptr_t)&::g::Fuse::Resources::FileImageSourceCache::_cache_, uFieldFlagsStatic);
}

uClassType* FileImageSourceCache_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Resources.FileImageSourceCache", options);
    type->fp_build_ = FileImageSourceCache_build;
    type->fp_cctor_ = FileImageSourceCache__cctor__fn;
    return type;
}

// public static Fuse.Resources.FileImageSourceImpl GetFileSource(Uno.UX.FileSource file) :17
void FileImageSourceCache__GetFileSource_fn(::g::Uno::UX::FileSource* file, ::g::Fuse::Resources::FileImageSourceImpl** __retval)
{
    *__retval = FileImageSourceCache::GetFileSource(file);
}

uSStrong< ::g::Uno::Collections::Dictionary*> FileImageSourceCache::_cache_;

// public static Fuse.Resources.FileImageSourceImpl GetFileSource(Uno.UX.FileSource file) [static] :17
::g::Fuse::Resources::FileImageSourceImpl* FileImageSourceCache::GetFileSource(::g::Uno::UX::FileSource* file)
{
    uStackFrame __("Fuse.Resources.FileImageSourceCache", "GetFileSource(Uno.UX.FileSource)");
    FileImageSourceCache_typeof()->Init();
    bool ret1;
    bool ret2;
    ::g::Uno::WeakReference* value = NULL;

    if ((::g::Uno::Collections::Dictionary__TryGetValue_fn(uPtr(FileImageSourceCache::_cache()), file, (void**)(&value), &ret1), ret1))
    {
        ::g::Fuse::Resources::FileImageSourceImpl* his;

        if (uPtr(value)->TryGetTarget((uObject**)(&his)))
            return his;

        ::g::Uno::Collections::Dictionary__Remove_fn(uPtr(FileImageSourceCache::_cache()), file, &ret2);
    }

    ::g::Fuse::Resources::FileImageSourceImpl* nv = ::g::Fuse::Resources::FileImageSourceImpl::New2(file);
    ::g::Uno::Collections::Dictionary__Add_fn(uPtr(FileImageSourceCache::_cache()), file, (::g::Uno::WeakReference*)::g::Uno::WeakReference::New1(::TYPES[10/*Uno.WeakReference<Fuse.Resources.FileImageSourceImpl>*/], nv));
    return nv;
}
// }

// /Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Elements/0.47.7/resources/$.uno
// --------------------------------------------------------------------------------------------------

// internal sealed class FileImageSourceImpl :143
// {
// ~FileImageSourceImpl() :162
static void FileImageSourceImpl__Finalize_fn(FileImageSourceImpl* __this)
{
    uStackFrame __("Fuse.Resources.FileImageSourceImpl", "Finalize()");
    uPtr(__this->_file)->remove_DataChanged(uDelegate::New(::TYPES[11/*Uno.EventHandler<Uno.EventArgs>*/], (void*)FileImageSourceImpl__OnDataChanged_fn, __this));
}

static void FileImageSourceImpl_build(uType* type)
{
    ::STRINGS[0] = uString::Const("bundleFile");
    ::STRINGS[1] = uString::Const("BundleFileImageSource-failed-conversion");
    ::TYPES[11] = ::g::Uno::EventHandler1_typeof()->MakeType(::g::Uno::EventArgs_typeof(), NULL);
    ::TYPES[2] = ::g::Uno::Action1_typeof()->MakeType(::g::Uno::Graphics::Texture2D_typeof(), NULL);
    ::TYPES[12] = ::g::Uno::Action1_typeof()->MakeType(::g::Uno::Exception_typeof(), NULL);
    ::TYPES[1] = ::g::Uno::Exception_typeof();
    type->SetInterfaces(
        ::g::Fuse::Resources::IMemoryResource_typeof(), offsetof(::g::Fuse::Resources::LoadingImageSource_type, interface0));
    type->SetFields(13,
        ::g::Uno::UX::FileSource_typeof(), offsetof(::g::Fuse::Resources::FileImageSourceImpl, _file), 0);
}

::g::Fuse::Resources::LoadingImageSource_type* FileImageSourceImpl_typeof()
{
    static uSStrong< ::g::Fuse::Resources::LoadingImageSource_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Resources::LoadingImageSource_typeof();
    options.FieldCount = 14;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(FileImageSourceImpl);
    options.TypeSize = sizeof(::g::Fuse::Resources::LoadingImageSource_type);
    type = (::g::Fuse::Resources::LoadingImageSource_type*)uClassType::New("Fuse.Resources.FileImageSourceImpl", options);
    type->fp_build_ = FileImageSourceImpl_build;
    type->fp_Finalize = (void(*)(uObject*))FileImageSourceImpl__Finalize_fn;
    type->fp_AttemptLoad = (void(*)(::g::Fuse::Resources::LoadingImageSource*))FileImageSourceImpl__AttemptLoad_fn;
    type->interface0.fp_SoftDispose = (void(*)(uObject*))::g::Fuse::Resources::LoadingImageSource__FuseResourcesIMemoryResourceSoftDispose_fn;
    type->interface0.fp_get_MemoryPolicy = (void(*)(uObject*, ::g::Fuse::Resources::MemoryPolicy**))::g::Fuse::Resources::LoadingImageSource__FuseResourcesIMemoryResourceget_MemoryPolicy_fn;
    type->interface0.fp_get_IsPinned = (void(*)(uObject*, bool*))::g::Fuse::Resources::LoadingImageSource__FuseResourcesIMemoryResourceget_IsPinned_fn;
    type->interface0.fp_get_LastUsed = (void(*)(uObject*, double*))::g::Fuse::Resources::LoadingImageSource__FuseResourcesIMemoryResourceget_LastUsed_fn;
    return type;
}

// public FileImageSourceImpl(Uno.UX.FileSource file) :153
void FileImageSourceImpl__ctor_3_fn(FileImageSourceImpl* __this, ::g::Uno::UX::FileSource* file)
{
    __this->ctor_3(file);
}

// protected override sealed void AttemptLoad() :209
void FileImageSourceImpl__AttemptLoad_fn(FileImageSourceImpl* __this)
{
    uStackFrame __("Fuse.Resources.FileImageSourceImpl", "AttemptLoad()");

    if (uPtr(__this->Policy())->BundlePreload())
    {
        __this->SyncLoad();
        return;
    }

    __this->_loading = true;
    FileImageSourceImpl__BackgroundLoad::New1(__this->_file, uDelegate::New(::TYPES[2/*Uno.Action<texture2D>*/], (void*)FileImageSourceImpl__SuccessCallback_fn, __this), uDelegate::New(::TYPES[12/*Uno.Action<Uno.Exception>*/], (void*)FileImageSourceImpl__FailureCallback_fn, __this));
    __this->OnChanged();
}

// private void FailureCallback(Uno.Exception e) :228
void FileImageSourceImpl__FailureCallback_fn(FileImageSourceImpl* __this, ::g::Uno::Exception* e)
{
    __this->FailureCallback(e);
}

// public Uno.UX.FileSource get_File() :150
void FileImageSourceImpl__get_File_fn(FileImageSourceImpl* __this, ::g::Uno::UX::FileSource** __retval)
{
    *__retval = __this->File();
}

// public FileImageSourceImpl New(Uno.UX.FileSource file) :153
void FileImageSourceImpl__New2_fn(::g::Uno::UX::FileSource* file, FileImageSourceImpl** __retval)
{
    *__retval = FileImageSourceImpl::New2(file);
}

// private void OnDataChanged(object s, object a) :167
void FileImageSourceImpl__OnDataChanged_fn(FileImageSourceImpl* __this, uObject* s, uObject* a)
{
    __this->OnDataChanged(s, a);
}

// private void SuccessCallback(texture2D texture) :222
void FileImageSourceImpl__SuccessCallback_fn(FileImageSourceImpl* __this, ::g::Uno::Graphics::Texture2D* texture)
{
    __this->SuccessCallback(texture);
}

// public void SyncLoad() :172
void FileImageSourceImpl__SyncLoad_fn(FileImageSourceImpl* __this)
{
    __this->SyncLoad();
}

// public FileImageSourceImpl(Uno.UX.FileSource file) [instance] :153
void FileImageSourceImpl::ctor_3(::g::Uno::UX::FileSource* file)
{
    uStackFrame __("Fuse.Resources.FileImageSourceImpl", ".ctor(Uno.UX.FileSource)");
    ctor_2();

    if (file == NULL)
        U_THROW(::g::Uno::ArgumentNullException::New6(::STRINGS[0/*"bundleFile"*/]));

    _file = file;
    uPtr(_file)->add_DataChanged(uDelegate::New(::TYPES[11/*Uno.EventHandler<Uno.EventArgs>*/], (void*)FileImageSourceImpl__OnDataChanged_fn, this));
}

// private void FailureCallback(Uno.Exception e) [instance] :228
void FileImageSourceImpl::FailureCallback(::g::Uno::Exception* e)
{
    uStackFrame __("Fuse.Resources.FileImageSourceImpl", "FailureCallback(Uno.Exception)");
    _loading = false;
    Cleanup(1);
    OnError(::STRINGS[1/*"BundleFileI...*/], e);
}

// public Uno.UX.FileSource get_File() [instance] :150
::g::Uno::UX::FileSource* FileImageSourceImpl::File()
{
    return _file;
}

// private void OnDataChanged(object s, object a) [instance] :167
void FileImageSourceImpl::OnDataChanged(uObject* s, uObject* a)
{
    uStackFrame __("Fuse.Resources.FileImageSourceImpl", "OnDataChanged(object,object)");
    Reload();
}

// private void SuccessCallback(texture2D texture) [instance] :222
void FileImageSourceImpl::SuccessCallback(::g::Uno::Graphics::Texture2D* texture)
{
    uStackFrame __("Fuse.Resources.FileImageSourceImpl", "SuccessCallback(texture2D)");
    _loading = false;
    SetTexture(texture);
}

// public void SyncLoad() [instance] :172
void FileImageSourceImpl::SyncLoad()
{
    uStackFrame __("Fuse.Resources.FileImageSourceImpl", "SyncLoad()");

    if (IsLoaded())
    {
        MarkUsed();
        return;
    }

    try
    {
        if (::g::Fuse::UpdateManager::CurrentStage() != 2)
        {
            try
            {
            	GLHelper::SwapBackToBackgroundSurface();
            }
            catch (const uBase::Exception &e)
            {
            	U_THROW(::g::Uno::Exception::New2(uString::Utf8(e.what())));
            }
        }

        uArray* data = uPtr(_file)->ReadAllBytes();
        ::g::Experimental::TextureLoader::TextureLoader::ByteArrayToTexture2DFilename(::g::Uno::Buffer::New1(data), uPtr(_file)->Name, uDelegate::New(::TYPES[2/*Uno.Action<texture2D>*/], (void*)::g::Fuse::Resources::LoadingImageSource__SetTexture_fn, this));
        OnChanged();
    }
    catch (const uThrowable& __t)
    {
        ::g::Uno::Exception* e = __t.Exception;
        Cleanup(1);
        OnError(::STRINGS[1/*"BundleFileI...*/], e);
    }
}

// public FileImageSourceImpl New(Uno.UX.FileSource file) [static] :153
FileImageSourceImpl* FileImageSourceImpl::New2(::g::Uno::UX::FileSource* file)
{
    FileImageSourceImpl* obj1 = (FileImageSourceImpl*)uNew(FileImageSourceImpl_typeof());
    obj1->ctor_3(file);
    return obj1;
}
// }

// /Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Common/0.47.7/resources/$.uno
// ------------------------------------------------------------------------------------------------

// public sealed class FileResource :181
// {
static void FileResource_build(uType* type)
{
    type->SetFields(2,
        ::g::Uno::UX::FileSource_typeof(), offsetof(::g::Fuse::Resources::FileResource, _file), 0);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)FileResource__New1_fn, 0, true, type, 1, ::g::Uno::UX::FileSource_typeof()));
}

::g::Uno::UX::FileSource_type* FileResource_typeof()
{
    static uSStrong< ::g::Uno::UX::FileSource_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::FileSource_typeof();
    options.FieldCount = 3;
    options.ObjectSize = sizeof(FileResource);
    options.TypeSize = sizeof(::g::Uno::UX::FileSource_type);
    type = (::g::Uno::UX::FileSource_type*)uClassType::New("Fuse.Resources.FileResource", options);
    type->fp_build_ = FileResource_build;
    type->fp_OpenRead = (void(*)(::g::Uno::UX::FileSource*, ::g::Uno::IO::Stream**))FileResource__OpenRead_fn;
    return type;
}

// public FileResource(Uno.UX.FileSource file) :186
void FileResource__ctor_1_fn(FileResource* __this, ::g::Uno::UX::FileSource* file)
{
    __this->ctor_1(file);
}

// public FileResource New(Uno.UX.FileSource file) :186
void FileResource__New1_fn(::g::Uno::UX::FileSource* file, FileResource** __retval)
{
    *__retval = FileResource::New1(file);
}

// public override sealed Uno.IO.Stream OpenRead() :191
void FileResource__OpenRead_fn(FileResource* __this, ::g::Uno::IO::Stream** __retval)
{
    uStackFrame __("Fuse.Resources.FileResource", "OpenRead()");
    return *__retval = uPtr(__this->_file)->OpenRead(), void();
}

// public FileResource(Uno.UX.FileSource file) [instance] :186
void FileResource::ctor_1(::g::Uno::UX::FileSource* file)
{
    uStackFrame __("Fuse.Resources.FileResource", ".ctor(Uno.UX.FileSource)");
    ctor_(uPtr(file)->Name);
    _file = file;
}

// public FileResource New(Uno.UX.FileSource file) [static] :186
FileResource* FileResource::New1(::g::Uno::UX::FileSource* file)
{
    FileResource* obj1 = (FileResource*)uNew(FileResource_typeof());
    obj1->ctor_1(file);
    return obj1;
}
// }

// /Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Nodes/0.47.7/$.uno
// -------------------------------------------------------------------------------------

// internal sealed class FloatResourceConverter :3446
// {
static void FloatResourceConverter_build(uType* type)
{
    type->SetBase(::g::Fuse::Resources::NumericResourceConverter_typeof()->MakeType(::g::Uno::Float_typeof(), NULL));
    type->SetInterfaces(
        ::g::Fuse::Resources::IResourceConverter_typeof()->MakeType(::g::Uno::Float_typeof(), NULL), offsetof(::g::Fuse::Resources::NumericResourceConverter_type, interface0));
}

::g::Fuse::Resources::NumericResourceConverter_type* FloatResourceConverter_typeof()
{
    static uSStrong< ::g::Fuse::Resources::NumericResourceConverter_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Resources::NumericResourceConverter_typeof();
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(FloatResourceConverter);
    options.TypeSize = sizeof(::g::Fuse::Resources::NumericResourceConverter_type);
    type = (::g::Fuse::Resources::NumericResourceConverter_type*)uClassType::New("Fuse.Resources.FloatResourceConverter", options);
    type->fp_build_ = FloatResourceConverter_build;
    type->fp_ctor_ = (void*)FloatResourceConverter__New1_fn;
    type->fp_Convert = (void(*)(::g::Fuse::Resources::NumericResourceConverter*, uObject*, uTRef))FloatResourceConverter__Convert_fn;
    type->interface0.fp_Accept = (void(*)(uObject*, uObject*, bool*))::g::Fuse::Resources::NumericResourceConverter__Accept_fn;
    type->interface0.fp_Convert = (void(*)(uObject*, uObject*, uTRef))FloatResourceConverter__Convert_fn;
    return type;
}

// public generated FloatResourceConverter() :3446
void FloatResourceConverter__ctor_1_fn(FloatResourceConverter* __this)
{
    __this->ctor_1();
}

// public override sealed float Convert(object o) :3448
void FloatResourceConverter__Convert_fn(FloatResourceConverter* __this, uObject* o, float* __retval)
{
    uStackFrame __("Fuse.Resources.FloatResourceConverter", "Convert(object)");
    return *__retval = (float)__this->InternConvert(o), void();
}

// public generated FloatResourceConverter New() :3446
void FloatResourceConverter__New1_fn(FloatResourceConverter** __retval)
{
    *__retval = FloatResourceConverter::New1();
}

// public generated FloatResourceConverter() [instance] :3446
void FloatResourceConverter::ctor_1()
{
    ctor_();
}

// public generated FloatResourceConverter New() [static] :3446
FloatResourceConverter* FloatResourceConverter::New1()
{
    FloatResourceConverter* obj1 = (FloatResourceConverter*)uNew(FloatResourceConverter_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// /Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Nodes/0.47.7/$.uno
// -------------------------------------------------------------------------------------

// internal sealed class GenericResourceConverter<T> :3459
// {
static void GenericResourceConverter_build(uType* type)
{
    type->SetPrecalc(
        type->T(0));
    type->SetInterfaces(
        ::g::Fuse::Resources::IResourceConverter_typeof()->MakeType(type->T(0), NULL), offsetof(GenericResourceConverter_type, interface0));
}

GenericResourceConverter_type* GenericResourceConverter_typeof()
{
    static uSStrong<GenericResourceConverter_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.GenericCount = 1;
    options.InterfaceCount = 1;
    options.PrecalcCount = 1;
    options.ObjectSize = sizeof(GenericResourceConverter);
    options.TypeSize = sizeof(GenericResourceConverter_type);
    type = (GenericResourceConverter_type*)uClassType::New("Fuse.Resources.GenericResourceConverter`1", options);
    type->fp_build_ = GenericResourceConverter_build;
    type->fp_ctor_ = (void*)GenericResourceConverter__New1_fn;
    type->interface0.fp_Accept = (void(*)(uObject*, uObject*, bool*))GenericResourceConverter__Accept_fn;
    type->interface0.fp_Convert = (void(*)(uObject*, uObject*, uTRef))GenericResourceConverter__Convert_fn;
    return type;
}

// public generated GenericResourceConverter() :3459
void GenericResourceConverter__ctor__fn(GenericResourceConverter* __this)
{
    __this->ctor_();
}

// public bool Accept(object o) :3461
void GenericResourceConverter__Accept_fn(GenericResourceConverter* __this, uObject* o, bool* __retval)
{
    *__retval = __this->Accept(o);
}

// public T Convert(object o) :3466
void GenericResourceConverter__Convert_fn(GenericResourceConverter* __this, uObject* o, uTRef __retval)
{
    uStackFrame __("Fuse.Resources.GenericResourceConverter`1", "Convert(object)");
    return __retval.Store(__this->__type->T(0), uUnboxAny(__this->__type->T(0), o)), void();
}

// public generated GenericResourceConverter New() :3459
void GenericResourceConverter__New1_fn(uType* __type, GenericResourceConverter** __retval)
{
    *__retval = GenericResourceConverter::New1(__type);
}

// public generated GenericResourceConverter() [instance] :3459
void GenericResourceConverter::ctor_()
{
}

// public bool Accept(object o) [instance] :3461
bool GenericResourceConverter::Accept(uObject* o)
{
    uType* __types[] = {
        __type->Precalced(0/*T*/),
    };
    return uIs(o, __types[0]);
}

// public generated GenericResourceConverter New() [static] :3459
GenericResourceConverter* GenericResourceConverter::New1(uType* __type)
{
    GenericResourceConverter* obj1 = (GenericResourceConverter*)uNew(__type);
    obj1->ctor_();
    return obj1;
}
// }

// /Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Elements/0.47.7/resources/$.uno
// --------------------------------------------------------------------------------------------------

// public sealed class HttpImageSource :314
// {
static void HttpImageSource_build(uType* type)
{
    ::STRINGS[2] = uString::Const("");
    ::TYPES[13] = ::g::Fuse::Resources::HttpImageSourceImpl_typeof();
    type->SetFields(5,
        ::g::Fuse::Resources::ProxyImageSource_typeof(), offsetof(::g::Fuse::Resources::HttpImageSource, _proxy), 0);
    type->Reflection.SetFunctions(9,
        new uFunction("set_DefaultPolicy", NULL, (void*)HttpImageSource__set_DefaultPolicy_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Resources::MemoryPolicy_typeof()),
        new uFunction("get_Density", NULL, (void*)HttpImageSource__get_Density_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("set_Density", NULL, (void*)HttpImageSource__set_Density_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction(".ctor", NULL, (void*)HttpImageSource__New2_fn, 0, true, type, 0),
        new uFunction(".ctor", NULL, (void*)HttpImageSource__New3_fn, 0, true, type, 1, ::g::Uno::String_typeof()),
        new uFunction("get_Policy", NULL, (void*)HttpImageSource__get_Policy_fn, 0, false, ::g::Fuse::Resources::MemoryPolicy_typeof(), 0),
        new uFunction("set_Policy", NULL, (void*)HttpImageSource__set_Policy_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Resources::MemoryPolicy_typeof()),
        new uFunction("get_Url", NULL, (void*)HttpImageSource__get_Url_fn, 0, false, ::g::Uno::String_typeof(), 0),
        new uFunction("set_Url", NULL, (void*)HttpImageSource__set_Url_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::String_typeof()));
}

::g::Fuse::Resources::ImageSource_type* HttpImageSource_typeof()
{
    static uSStrong< ::g::Fuse::Resources::ImageSource_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Resources::ImageSource_typeof();
    options.FieldCount = 6;
    options.ObjectSize = sizeof(HttpImageSource);
    options.TypeSize = sizeof(::g::Fuse::Resources::ImageSource_type);
    type = (::g::Fuse::Resources::ImageSource_type*)uClassType::New("Fuse.Resources.HttpImageSource", options);
    type->fp_build_ = HttpImageSource_build;
    type->fp_ctor_ = (void*)HttpImageSource__New2_fn;
    type->fp_GetTexture = (void(*)(::g::Fuse::Resources::ImageSource*, ::g::Uno::Graphics::Texture2D**))HttpImageSource__GetTexture_fn;
    type->fp_OnPinChanged = (void(*)(::g::Fuse::Resources::ImageSource*))HttpImageSource__OnPinChanged_fn;
    type->fp_get_PixelSize = (void(*)(::g::Fuse::Resources::ImageSource*, ::g::Uno::Int2*))HttpImageSource__get_PixelSize_fn;
    type->fp_Reload = (void(*)(::g::Fuse::Resources::ImageSource*))HttpImageSource__Reload_fn;
    type->fp_get_Size = (void(*)(::g::Fuse::Resources::ImageSource*, ::g::Uno::Float2*))HttpImageSource__get_Size_fn;
    type->fp_get_SizeDensity = (void(*)(::g::Fuse::Resources::ImageSource*, float*))HttpImageSource__get_SizeDensity_fn;
    type->fp_get_State = (void(*)(::g::Fuse::Resources::ImageSource*, int*))HttpImageSource__get_State_fn;
    return type;
}

// public HttpImageSource() :333
void HttpImageSource__ctor_2_fn(HttpImageSource* __this)
{
    __this->ctor_2();
}

// public HttpImageSource(string url) :338
void HttpImageSource__ctor_3_fn(HttpImageSource* __this, uString* url)
{
    __this->ctor_3(url);
}

// public void set_DefaultPolicy(Fuse.Resources.MemoryPolicy value) :344
void HttpImageSource__set_DefaultPolicy_fn(HttpImageSource* __this, ::g::Fuse::Resources::MemoryPolicy* value)
{
    __this->DefaultPolicy(value);
}

// public float get_Density() :358
void HttpImageSource__get_Density_fn(HttpImageSource* __this, float* __retval)
{
    *__retval = __this->Density();
}

// public void set_Density(float value) :358
void HttpImageSource__set_Density_fn(HttpImageSource* __this, float* value)
{
    __this->Density(*value);
}

// public override sealed texture2D GetTexture() :351
void HttpImageSource__GetTexture_fn(HttpImageSource* __this, ::g::Uno::Graphics::Texture2D** __retval)
{
    uStackFrame __("Fuse.Resources.HttpImageSource", "GetTexture()");
    return *__retval = uPtr(__this->_proxy)->GetTexture(), void();
}

// public HttpImageSource New() :333
void HttpImageSource__New2_fn(HttpImageSource** __retval)
{
    *__retval = HttpImageSource::New2();
}

// public HttpImageSource New(string url) :338
void HttpImageSource__New3_fn(uString* url, HttpImageSource** __retval)
{
    *__retval = HttpImageSource::New3(url);
}

// protected override sealed void OnPinChanged() :347
void HttpImageSource__OnPinChanged_fn(HttpImageSource* __this)
{
    uStackFrame __("Fuse.Resources.HttpImageSource", "OnPinChanged()");
    uPtr(__this->_proxy)->OnPinChanged();
}

// public override sealed int2 get_PixelSize() :349
void HttpImageSource__get_PixelSize_fn(HttpImageSource* __this, ::g::Uno::Int2* __retval)
{
    uStackFrame __("Fuse.Resources.HttpImageSource", "get_PixelSize()");
    return *__retval = uPtr(__this->_proxy)->PixelSize(), void();
}

// public Fuse.Resources.MemoryPolicy get_Policy() :346
void HttpImageSource__get_Policy_fn(HttpImageSource* __this, ::g::Fuse::Resources::MemoryPolicy** __retval)
{
    *__retval = __this->Policy();
}

// public void set_Policy(Fuse.Resources.MemoryPolicy value) :346
void HttpImageSource__set_Policy_fn(HttpImageSource* __this, ::g::Fuse::Resources::MemoryPolicy* value)
{
    __this->Policy(value);
}

// public override sealed void Reload() :352
void HttpImageSource__Reload_fn(HttpImageSource* __this)
{
    uStackFrame __("Fuse.Resources.HttpImageSource", "Reload()");
    uPtr(__this->_proxy)->Reload();
}

// public override sealed float2 get_Size() :348
void HttpImageSource__get_Size_fn(HttpImageSource* __this, ::g::Uno::Float2* __retval)
{
    uStackFrame __("Fuse.Resources.HttpImageSource", "get_Size()");
    return *__retval = uPtr(__this->_proxy)->Size(), void();
}

// public override sealed float get_SizeDensity() :353
void HttpImageSource__get_SizeDensity_fn(HttpImageSource* __this, float* __retval)
{
    uStackFrame __("Fuse.Resources.HttpImageSource", "get_SizeDensity()");
    return *__retval = __this->Density(), void();
}

// public override sealed Fuse.Resources.ImageSourceState get_State() :350
void HttpImageSource__get_State_fn(HttpImageSource* __this, int* __retval)
{
    uStackFrame __("Fuse.Resources.HttpImageSource", "get_State()");
    return *__retval = uPtr(__this->_proxy)->State(), void();
}

// public string get_Url() :320
void HttpImageSource__get_Url_fn(HttpImageSource* __this, uString** __retval)
{
    *__retval = __this->Url();
}

// public void set_Url(string value) :321
void HttpImageSource__set_Url_fn(HttpImageSource* __this, uString* value)
{
    __this->Url(value);
}

// public HttpImageSource() [instance] :333
void HttpImageSource::ctor_2()
{
    ctor_1();
    _proxy = ::g::Fuse::Resources::ProxyImageSource::New1(this);
}

// public HttpImageSource(string url) [instance] :338
void HttpImageSource::ctor_3(uString* url)
{
    uStackFrame __("Fuse.Resources.HttpImageSource", ".ctor(string)");
    ctor_1();
    _proxy = ::g::Fuse::Resources::ProxyImageSource::New1(this);
    Url(url);
}

// public void set_DefaultPolicy(Fuse.Resources.MemoryPolicy value) [instance] :344
void HttpImageSource::DefaultPolicy(::g::Fuse::Resources::MemoryPolicy* value)
{
    uStackFrame __("Fuse.Resources.HttpImageSource", "set_DefaultPolicy(Fuse.Resources.MemoryPolicy)");
    uPtr(_proxy)->DefaultSetPolicy(value);
}

// public float get_Density() [instance] :358
float HttpImageSource::Density()
{
    uStackFrame __("Fuse.Resources.HttpImageSource", "get_Density()");
    return uPtr(_proxy)->Density();
}

// public void set_Density(float value) [instance] :358
void HttpImageSource::Density(float value)
{
    uStackFrame __("Fuse.Resources.HttpImageSource", "set_Density(float)");
    uPtr(_proxy)->Density(value);
}

// public Fuse.Resources.MemoryPolicy get_Policy() [instance] :346
::g::Fuse::Resources::MemoryPolicy* HttpImageSource::Policy()
{
    uStackFrame __("Fuse.Resources.HttpImageSource", "get_Policy()");
    return uPtr(_proxy)->Policy();
}

// public void set_Policy(Fuse.Resources.MemoryPolicy value) [instance] :346
void HttpImageSource::Policy(::g::Fuse::Resources::MemoryPolicy* value)
{
    uStackFrame __("Fuse.Resources.HttpImageSource", "set_Policy(Fuse.Resources.MemoryPolicy)");
    uPtr(_proxy)->Policy(value);
}

// public string get_Url() [instance] :320
uString* HttpImageSource::Url()
{
    uStackFrame __("Fuse.Resources.HttpImageSource", "get_Url()");
    return (uPtr(_proxy)->Impl() == NULL) ? ::STRINGS[2/*""*/] : (uString*)uPtr(uAs< ::g::Fuse::Resources::HttpImageSourceImpl*>(uPtr(_proxy)->Impl(), ::TYPES[13/*Fuse.Resources.HttpImageSourceImpl*/]))->Url();
}

// public void set_Url(string value) [instance] :321
void HttpImageSource::Url(uString* value)
{
    uStackFrame __("Fuse.Resources.HttpImageSource", "set_Url(string)");
    uPtr(_proxy)->Release();

    if (::g::Uno::String::op_Equality(value, NULL) || ::g::Uno::String::op_Equality(value, ::STRINGS[2/*""*/]))
        return;

    uPtr(_proxy)->Attach(::g::Fuse::Resources::HttpImageSourceCache::GetUrl(value));
}

// public HttpImageSource New() [static] :333
HttpImageSource* HttpImageSource::New2()
{
    HttpImageSource* obj1 = (HttpImageSource*)uNew(HttpImageSource_typeof());
    obj1->ctor_2();
    return obj1;
}

// public HttpImageSource New(string url) [static] :338
HttpImageSource* HttpImageSource::New3(uString* url)
{
    HttpImageSource* obj2 = (HttpImageSource*)uNew(HttpImageSource_typeof());
    obj2->ctor_3(url);
    return obj2;
}
// }

// /Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Elements/0.47.7/resources/$.uno
// --------------------------------------------------------------------------------------------------

// internal static class HttpImageSourceCache :361
// {
// static HttpImageSourceCache() :361
static void HttpImageSourceCache__cctor__fn(uType* __type)
{
    HttpImageSourceCache::_cache_ = ((::g::Uno::Collections::Dictionary*)::g::Uno::Collections::Dictionary::New1(::TYPES[14/*Uno.Collections.Dictionary<string, Uno.WeakReference<Fuse.Resources.HttpImageSourceImpl>>*/]));
}

static void HttpImageSourceCache_build(uType* type)
{
    ::TYPES[14] = ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Uno::String_typeof(), ::g::Uno::WeakReference_typeof()->MakeType(::g::Fuse::Resources::HttpImageSourceImpl_typeof(), NULL), NULL);
    ::TYPES[15] = ::g::Uno::WeakReference_typeof()->MakeType(::g::Fuse::Resources::HttpImageSourceImpl_typeof(), NULL);
    type->SetFields(0,
        ::TYPES[14/*Uno.Collections.Dictionary<string, Uno.WeakReference<Fuse.Resources.HttpImageSourceImpl>>*/], (uintptr_t)&::g::Fuse::Resources::HttpImageSourceCache::_cache_, uFieldFlagsStatic);
}

uClassType* HttpImageSourceCache_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Resources.HttpImageSourceCache", options);
    type->fp_build_ = HttpImageSourceCache_build;
    type->fp_cctor_ = HttpImageSourceCache__cctor__fn;
    return type;
}

// public static Fuse.Resources.HttpImageSourceImpl GetUrl(string url) :364
void HttpImageSourceCache__GetUrl_fn(uString* url, ::g::Fuse::Resources::HttpImageSourceImpl** __retval)
{
    *__retval = HttpImageSourceCache::GetUrl(url);
}

uSStrong< ::g::Uno::Collections::Dictionary*> HttpImageSourceCache::_cache_;

// public static Fuse.Resources.HttpImageSourceImpl GetUrl(string url) [static] :364
::g::Fuse::Resources::HttpImageSourceImpl* HttpImageSourceCache::GetUrl(uString* url)
{
    uStackFrame __("Fuse.Resources.HttpImageSourceCache", "GetUrl(string)");
    HttpImageSourceCache_typeof()->Init();
    bool ret1;
    bool ret2;
    ::g::Uno::WeakReference* value = NULL;

    if ((::g::Uno::Collections::Dictionary__TryGetValue_fn(uPtr(HttpImageSourceCache::_cache()), url, (void**)(&value), &ret1), ret1))
    {
        ::g::Fuse::Resources::HttpImageSourceImpl* his;

        if (uPtr(value)->TryGetTarget((uObject**)(&his)))
            return his;

        ::g::Uno::Collections::Dictionary__Remove_fn(uPtr(HttpImageSourceCache::_cache()), url, &ret2);
    }

    ::g::Fuse::Resources::HttpImageSourceImpl* nv = ::g::Fuse::Resources::HttpImageSourceImpl::New2(url);
    ::g::Uno::Collections::Dictionary__Add_fn(uPtr(HttpImageSourceCache::_cache()), url, (::g::Uno::WeakReference*)::g::Uno::WeakReference::New1(::TYPES[15/*Uno.WeakReference<Fuse.Resources.HttpImageSourceImpl>*/], nv));
    return nv;
}
// }

// /Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Elements/0.47.7/resources/$.uno
// --------------------------------------------------------------------------------------------------

// internal sealed class HttpImageSourceImpl :381
// {
static void HttpImageSourceImpl_build(uType* type)
{
    ::STRINGS[3] = uString::Const("HttpImageSource-failed-request");
    ::STRINGS[4] = uString::Const("HttpImageSource-failed-converson");
    ::STRINGS[5] = uString::Const("HttpImageSource-failed-status: ");
    ::STRINGS[6] = uString::Const(" ");
    ::STRINGS[7] = uString::Const("content-type");
    ::STRINGS[8] = uString::Const("x-missing");
    ::STRINGS[9] = uString::Const("HttpImageSource-protocol-failure for url '");
    ::STRINGS[10] = uString::Const("' : ");
    ::TYPES[1] = ::g::Uno::Exception_typeof();
    ::TYPES[16] = ::g::Uno::Action2_typeof()->MakeType(::g::Experimental::Http::HttpResponseHeader_typeof(), ::g::Uno::Buffer_typeof(), NULL);
    ::TYPES[17] = ::g::Uno::Action1_typeof()->MakeType(::g::Uno::String_typeof(), NULL);
    ::TYPES[2] = ::g::Uno::Action1_typeof()->MakeType(::g::Uno::Graphics::Texture2D_typeof(), NULL);
    ::TYPES[12] = ::g::Uno::Action1_typeof()->MakeType(::TYPES[1/*Uno.Exception*/], NULL);
    type->SetInterfaces(
        ::g::Fuse::Resources::IMemoryResource_typeof(), offsetof(::g::Fuse::Resources::LoadingImageSource_type, interface0));
    type->SetFields(13,
        ::g::Uno::String_typeof(), offsetof(::g::Fuse::Resources::HttpImageSourceImpl, _contentType), 0,
        ::g::Uno::String_typeof(), offsetof(::g::Fuse::Resources::HttpImageSourceImpl, _url), 0);
}

::g::Fuse::Resources::LoadingImageSource_type* HttpImageSourceImpl_typeof()
{
    static uSStrong< ::g::Fuse::Resources::LoadingImageSource_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Resources::LoadingImageSource_typeof();
    options.FieldCount = 15;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(HttpImageSourceImpl);
    options.TypeSize = sizeof(::g::Fuse::Resources::LoadingImageSource_type);
    type = (::g::Fuse::Resources::LoadingImageSource_type*)uClassType::New("Fuse.Resources.HttpImageSourceImpl", options);
    type->fp_build_ = HttpImageSourceImpl_build;
    type->fp_AttemptLoad = (void(*)(::g::Fuse::Resources::LoadingImageSource*))HttpImageSourceImpl__AttemptLoad_fn;
    type->interface0.fp_SoftDispose = (void(*)(uObject*))::g::Fuse::Resources::LoadingImageSource__FuseResourcesIMemoryResourceSoftDispose_fn;
    type->interface0.fp_get_MemoryPolicy = (void(*)(uObject*, ::g::Fuse::Resources::MemoryPolicy**))::g::Fuse::Resources::LoadingImageSource__FuseResourcesIMemoryResourceget_MemoryPolicy_fn;
    type->interface0.fp_get_IsPinned = (void(*)(uObject*, bool*))::g::Fuse::Resources::LoadingImageSource__FuseResourcesIMemoryResourceget_IsPinned_fn;
    type->interface0.fp_get_LastUsed = (void(*)(uObject*, double*))::g::Fuse::Resources::LoadingImageSource__FuseResourcesIMemoryResourceget_LastUsed_fn;
    return type;
}

// public HttpImageSourceImpl(string url) :387
void HttpImageSourceImpl__ctor_3_fn(HttpImageSourceImpl* __this, uString* url)
{
    __this->ctor_3(url);
}

// protected override sealed void AttemptLoad() :392
void HttpImageSourceImpl__AttemptLoad_fn(HttpImageSourceImpl* __this)
{
    uStackFrame __("Fuse.Resources.HttpImageSourceImpl", "AttemptLoad()");

    try
    {
        ::g::Experimental::Http::HttpLoader::LoadBinary(__this->Url(), uDelegate::New(::TYPES[16/*Uno.Action<Experimental.Http.HttpResponseHeader, Uno.Buffer>*/], (void*)HttpImageSourceImpl__HttpCallback_fn, __this), uDelegate::New(::TYPES[17/*Uno.Action<string>*/], (void*)HttpImageSourceImpl__LoadFailed_fn, __this));
        __this->_loading = true;
        __this->OnChanged();
    }
    catch (const uThrowable& __t)
    {
        ::g::Uno::Exception* e = __t.Exception;
        __this->Fail(::STRINGS[3/*"HttpImageSo...*/], e);
    }
}

// private void Fail(string msg, [Uno.Exception e]) :493
void HttpImageSourceImpl__Fail_fn(HttpImageSourceImpl* __this, uString* msg, ::g::Uno::Exception* e)
{
    __this->Fail(msg, e);
}

// private void FailureCallback(Uno.Exception e) :412
void HttpImageSourceImpl__FailureCallback_fn(HttpImageSourceImpl* __this, ::g::Uno::Exception* e)
{
    __this->FailureCallback(e);
}

// private void HttpCallback(Experimental.Http.HttpResponseHeader response, Uno.Buffer data) :418
void HttpImageSourceImpl__HttpCallback_fn(HttpImageSourceImpl* __this, ::g::Experimental::Http::HttpResponseHeader* response, ::g::Uno::Buffer* data)
{
    __this->HttpCallback(response, data);
}

// private void LoadFailed(string reason) :488
void HttpImageSourceImpl__LoadFailed_fn(HttpImageSourceImpl* __this, uString* reason)
{
    __this->LoadFailed(reason);
}

// public HttpImageSourceImpl New(string url) :387
void HttpImageSourceImpl__New2_fn(uString* url, HttpImageSourceImpl** __retval)
{
    *__retval = HttpImageSourceImpl::New2(url);
}

// private void SuccessCallback(texture2D texture) :406
void HttpImageSourceImpl__SuccessCallback_fn(HttpImageSourceImpl* __this, ::g::Uno::Graphics::Texture2D* texture)
{
    __this->SuccessCallback(texture);
}

// public string get_Url() :384
void HttpImageSourceImpl__get_Url_fn(HttpImageSourceImpl* __this, uString** __retval)
{
    *__retval = __this->Url();
}

// public HttpImageSourceImpl(string url) [instance] :387
void HttpImageSourceImpl::ctor_3(uString* url)
{
    ctor_2();
    _url = url;
}

// private void Fail(string msg, [Uno.Exception e]) [instance] :493
void HttpImageSourceImpl::Fail(uString* msg, ::g::Uno::Exception* e)
{
    uStackFrame __("Fuse.Resources.HttpImageSourceImpl", "Fail(string,[Uno.Exception])");
    Cleanup(1);
    OnError(msg, e);
    ::g::Experimental::Http::HttpLoader::Discard(_url);
}

// private void FailureCallback(Uno.Exception e) [instance] :412
void HttpImageSourceImpl::FailureCallback(::g::Uno::Exception* e)
{
    uStackFrame __("Fuse.Resources.HttpImageSourceImpl", "FailureCallback(Uno.Exception)");
    _loading = false;
    Fail(::STRINGS[4/*"HttpImageSo...*/], e);
}

// private void HttpCallback(Experimental.Http.HttpResponseHeader response, Uno.Buffer data) [instance] :418
void HttpImageSourceImpl::HttpCallback(::g::Experimental::Http::HttpResponseHeader* response, ::g::Uno::Buffer* data)
{
    uStackFrame __("Fuse.Resources.HttpImageSourceImpl", "HttpCallback(Experimental.Http.HttpResponseHeader,Uno.Buffer)");
    bool ret2;

    if (uPtr(response)->StatusCode() != 200)
    {
        Fail(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition1(::STRINGS[5/*"HttpImageSo...*/], uBox<int>(::TYPES[26/*int*/], uPtr(response)->StatusCode())), ::STRINGS[6/*" "*/]), uPtr(response)->ReasonPhrase()), NULL);
        return;
    }

    uString* ct;

    if (!(::g::Uno::Collections::Dictionary__TryGetValue_fn(uPtr(uPtr(response)->Headers()), ::STRINGS[7/*"content-type"*/], (void**)(&ct), &ret2), ret2))
        _contentType = ::STRINGS[8/*"x-missing"*/];
    else
        _contentType = ct;

    HttpImageSourceImpl__BackgroundLoad::New1(data, _contentType, uDelegate::New(::TYPES[2/*Uno.Action<texture2D>*/], (void*)HttpImageSourceImpl__SuccessCallback_fn, this), uDelegate::New(::TYPES[12/*Uno.Action<Uno.Exception>*/], (void*)HttpImageSourceImpl__FailureCallback_fn, this));
}

// private void LoadFailed(string reason) [instance] :488
void HttpImageSourceImpl::LoadFailed(uString* reason)
{
    uStackFrame __("Fuse.Resources.HttpImageSourceImpl", "LoadFailed(string)");
    Fail(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::STRINGS[9/*"HttpImageSo...*/], Url()), ::STRINGS[10/*"' : "*/]), reason), NULL);
}

// private void SuccessCallback(texture2D texture) [instance] :406
void HttpImageSourceImpl::SuccessCallback(::g::Uno::Graphics::Texture2D* texture)
{
    uStackFrame __("Fuse.Resources.HttpImageSourceImpl", "SuccessCallback(texture2D)");
    _loading = false;
    SetTexture(texture);
}

// public string get_Url() [instance] :384
uString* HttpImageSourceImpl::Url()
{
    return _url;
}

// public HttpImageSourceImpl New(string url) [static] :387
HttpImageSourceImpl* HttpImageSourceImpl::New2(uString* url)
{
    HttpImageSourceImpl* obj1 = (HttpImageSourceImpl*)uNew(HttpImageSourceImpl_typeof());
    obj1->ctor_3(url);
    return obj1;
}
// }

// /Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Common/0.47.7/resources/$.uno
// ------------------------------------------------------------------------------------------------

// internal abstract interface IDeferredDisposable :210
// {
uInterfaceType* IDeferredDisposable_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.Resources.IDeferredDisposable", 0, 0);
    return type;
}
// }

// /Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Elements/0.47.7/resources/$.uno
// --------------------------------------------------------------------------------------------------

// public abstract class ImageSource :591
// {
static void ImageSource_build(uType* type)
{
    ::STRINGS[11] = uString::Const("ImageSource error: '");
    ::STRINGS[12] = uString::Const("'");
    ::STRINGS[13] = uString::Const("/Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Elements/0.47.7/resources/$.uno");
    ::STRINGS[14] = uString::Const("OnError");
    ::TYPES[0] = ::g::Uno::Action_typeof();
    ::TYPES[18] = ::g::Uno::EventHandler_typeof();
    ::TYPES[19] = ::g::Fuse::Resources::ImageSourceErrorHandler_typeof();
    type->SetFields(2,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::Resources::ImageSource, _pinCount), 0,
        ::TYPES[18/*Uno.EventHandler*/], offsetof(::g::Fuse::Resources::ImageSource, Changed1), 0,
        ::TYPES[19/*Fuse.Resources.ImageSourceErrorHandler*/], offsetof(::g::Fuse::Resources::ImageSource, Error1), 0);
    type->Reflection.SetFunctions(13,
        new uFunction("add_Changed", NULL, (void*)ImageSource__add_Changed_fn, 0, false, uVoid_typeof(), 1, ::TYPES[18/*Uno.EventHandler*/]),
        new uFunction("remove_Changed", NULL, (void*)ImageSource__remove_Changed_fn, 0, false, uVoid_typeof(), 1, ::TYPES[18/*Uno.EventHandler*/]),
        new uFunction("add_Error", NULL, (void*)ImageSource__add_Error_fn, 0, false, uVoid_typeof(), 1, ::TYPES[19/*Fuse.Resources.ImageSourceErrorHandler*/]),
        new uFunction("remove_Error", NULL, (void*)ImageSource__remove_Error_fn, 0, false, uVoid_typeof(), 1, ::TYPES[19/*Fuse.Resources.ImageSourceErrorHandler*/]),
        new uFunction("GetTexture", NULL, NULL, offsetof(ImageSource_type, fp_GetTexture), false, ::g::Uno::Graphics::Texture2D_typeof(), 0),
        new uFunction("get_IsPinned", NULL, (void*)ImageSource__get_IsPinned_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("Pin", NULL, (void*)ImageSource__Pin_fn, 0, false, uVoid_typeof(), 0),
        new uFunction("get_PixelSize", NULL, NULL, offsetof(ImageSource_type, fp_get_PixelSize), false, ::g::Uno::Int2_typeof(), 0),
        new uFunction("Reload", NULL, NULL, offsetof(ImageSource_type, fp_Reload), false, uVoid_typeof(), 0),
        new uFunction("get_Size", NULL, NULL, offsetof(ImageSource_type, fp_get_Size), false, ::g::Uno::Float2_typeof(), 0),
        new uFunction("get_SizeDensity", NULL, NULL, offsetof(ImageSource_type, fp_get_SizeDensity), false, ::g::Uno::Float_typeof(), 0),
        new uFunction("get_State", NULL, NULL, offsetof(ImageSource_type, fp_get_State), false, ::g::Fuse::Resources::ImageSourceState_typeof(), 0),
        new uFunction("Unpin", NULL, (void*)ImageSource__Unpin_fn, 0, false, uVoid_typeof(), 0));
}

ImageSource_type* ImageSource_typeof()
{
    static uSStrong<ImageSource_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::PropertyObject_typeof();
    options.FieldCount = 5;
    options.ObjectSize = sizeof(ImageSource);
    options.TypeSize = sizeof(ImageSource_type);
    type = (ImageSource_type*)uClassType::New("Fuse.Resources.ImageSource", options);
    type->fp_build_ = ImageSource_build;
    type->fp_OnPinChanged = ImageSource__OnPinChanged_fn;
    type->fp_Reload = ImageSource__Reload_fn;
    return type;
}

// protected generated ImageSource() :591
void ImageSource__ctor_1_fn(ImageSource* __this)
{
    __this->ctor_1();
}

// public generated void add_Changed(Uno.EventHandler value) :593
void ImageSource__add_Changed_fn(ImageSource* __this, uDelegate* value)
{
    __this->add_Changed(value);
}

// public generated void remove_Changed(Uno.EventHandler value) :593
void ImageSource__remove_Changed_fn(ImageSource* __this, uDelegate* value)
{
    __this->remove_Changed(value);
}

// public generated void add_Error(Fuse.Resources.ImageSourceErrorHandler value) :613
void ImageSource__add_Error_fn(ImageSource* __this, uDelegate* value)
{
    __this->add_Error(value);
}

// public generated void remove_Error(Fuse.Resources.ImageSourceErrorHandler value) :613
void ImageSource__remove_Error_fn(ImageSource* __this, uDelegate* value)
{
    __this->remove_Error(value);
}

// internal void FireChanged(Fuse.Resources.ImageSourceChangedArgs args) :607
void ImageSource__FireChanged_fn(ImageSource* __this, ::g::Fuse::Resources::ImageSourceChangedArgs* args)
{
    __this->FireChanged(args);
}

// internal void FireError(Fuse.Resources.ImageSourceErrorArgs args) :630
void ImageSource__FireError_fn(ImageSource* __this, ::g::Fuse::Resources::ImageSourceErrorArgs* args)
{
    __this->FireError(args);
}

// public bool get_IsPinned() :651
void ImageSource__get_IsPinned_fn(ImageSource* __this, bool* __retval)
{
    *__retval = __this->IsPinned();
}

// protected void OnChanged() :594
void ImageSource__OnChanged_fn(ImageSource* __this)
{
    __this->OnChanged();
}

// protected void OnError(string msg, [Uno.Exception e]) :614
void ImageSource__OnError_fn(ImageSource* __this, uString* msg, ::g::Uno::Exception* e)
{
    __this->OnError(msg, e);
}

// protected virtual void OnPinChanged() :653
void ImageSource__OnPinChanged_fn(ImageSource* __this)
{
}

// public void Pin() :637
void ImageSource__Pin_fn(ImageSource* __this)
{
    __this->Pin();
}

// internal void ProxyChanged(object s, Uno.EventArgs a) :602
void ImageSource__ProxyChanged_fn(ImageSource* __this, uObject* s, ::g::Uno::EventArgs* a)
{
    __this->ProxyChanged(s, a);
}

// internal void ProxyError(object s, Fuse.Resources.ImageSourceErrorArgs a) :625
void ImageSource__ProxyError_fn(ImageSource* __this, uObject* s, ::g::Fuse::Resources::ImageSourceErrorArgs* a)
{
    __this->ProxyError(s, a);
}

// public virtual void Reload() :659
void ImageSource__Reload_fn(ImageSource* __this)
{
}

// public void Unpin() :643
void ImageSource__Unpin_fn(ImageSource* __this)
{
    __this->Unpin();
}

// protected generated ImageSource() [instance] :591
void ImageSource::ctor_1()
{
    ctor_();
}

// public generated void add_Changed(Uno.EventHandler value) [instance] :593
void ImageSource::add_Changed(uDelegate* value)
{
    uStackFrame __("Fuse.Resources.ImageSource", "add_Changed(Uno.EventHandler)");
    Changed1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(Changed1, value), ::TYPES[18/*Uno.EventHandler*/]);
}

// public generated void remove_Changed(Uno.EventHandler value) [instance] :593
void ImageSource::remove_Changed(uDelegate* value)
{
    uStackFrame __("Fuse.Resources.ImageSource", "remove_Changed(Uno.EventHandler)");
    Changed1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(Changed1, value), ::TYPES[18/*Uno.EventHandler*/]);
}

// public generated void add_Error(Fuse.Resources.ImageSourceErrorHandler value) [instance] :613
void ImageSource::add_Error(uDelegate* value)
{
    uStackFrame __("Fuse.Resources.ImageSource", "add_Error(Fuse.Resources.ImageSourceErrorHandler)");
    Error1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(Error1, value), ::TYPES[19/*Fuse.Resources.ImageSourceErrorHandler*/]);
}

// public generated void remove_Error(Fuse.Resources.ImageSourceErrorHandler value) [instance] :613
void ImageSource::remove_Error(uDelegate* value)
{
    uStackFrame __("Fuse.Resources.ImageSource", "remove_Error(Fuse.Resources.ImageSourceErrorHandler)");
    Error1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(Error1, value), ::TYPES[19/*Fuse.Resources.ImageSourceErrorHandler*/]);
}

// internal void FireChanged(Fuse.Resources.ImageSourceChangedArgs args) [instance] :607
void ImageSource::FireChanged(::g::Fuse::Resources::ImageSourceChangedArgs* args)
{
    uStackFrame __("Fuse.Resources.ImageSource", "FireChanged(Fuse.Resources.ImageSourceChangedArgs)");

    if (::g::Uno::Delegate::op_Inequality(Changed1, NULL))
        uPtr(Changed1)->Invoke(2, this, args);
}

// internal void FireError(Fuse.Resources.ImageSourceErrorArgs args) [instance] :630
void ImageSource::FireError(::g::Fuse::Resources::ImageSourceErrorArgs* args)
{
    uStackFrame __("Fuse.Resources.ImageSource", "FireError(Fuse.Resources.ImageSourceErrorArgs)");

    if (::g::Uno::Delegate::op_Inequality(Error1, NULL))
        uPtr(Error1)->Invoke(2, this, args);
}

// public bool get_IsPinned() [instance] :651
bool ImageSource::IsPinned()
{
    return _pinCount > 0;
}

// protected void OnChanged() [instance] :594
void ImageSource::OnChanged()
{
    uStackFrame __("Fuse.Resources.ImageSource", "OnChanged()");

    if (::g::Uno::Delegate::op_Inequality(Changed1, NULL))
        ::g::Fuse::UpdateManager::AddDeferredAction(uDelegate::New(::TYPES[0/*Uno.Action*/], (void*)::g::Fuse::Resources::ImageSourceChangedArgs__Post_fn, ::g::Fuse::Resources::ImageSourceChangedArgs::New2(this)), -1, 0);
}

// protected void OnError(string msg, [Uno.Exception e]) [instance] :614
void ImageSource::OnError(uString* msg, ::g::Uno::Exception* e)
{
    uStackFrame __("Fuse.Resources.ImageSource", "OnError(string,[Uno.Exception])");
    ::g::Fuse::Diagnostics::UnknownException(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::STRINGS[11/*"ImageSource...*/], msg), ::STRINGS[12/*"'"*/]), e, this, ::STRINGS[13/*"/Users/medb...*/], 616, ::STRINGS[14/*"OnError"*/]);

    if (::g::Uno::Delegate::op_Inequality(Error1, NULL))
    {
        ::g::Fuse::Resources::ImageSourceErrorArgs* sa = ::g::Fuse::Resources::ImageSourceErrorArgs::New2(this);
        sa->Reason = msg;
        sa->ExceptionCause = e;
        ::g::Fuse::UpdateManager::AddDeferredAction(uDelegate::New(::TYPES[0/*Uno.Action*/], (void*)::g::Fuse::Resources::ImageSourceErrorArgs__Post_fn, sa), -1, 0);
    }
}

// public void Pin() [instance] :637
void ImageSource::Pin()
{
    uStackFrame __("Fuse.Resources.ImageSource", "Pin()");
    _pinCount++;

    if (_pinCount == 1)
        OnPinChanged();
}

// internal void ProxyChanged(object s, Uno.EventArgs a) [instance] :602
void ImageSource::ProxyChanged(uObject* s, ::g::Uno::EventArgs* a)
{
    uStackFrame __("Fuse.Resources.ImageSource", "ProxyChanged(object,Uno.EventArgs)");

    if (::g::Uno::Delegate::op_Inequality(Changed1, NULL))
        uPtr(Changed1)->Invoke(2, s, a);
}

// internal void ProxyError(object s, Fuse.Resources.ImageSourceErrorArgs a) [instance] :625
void ImageSource::ProxyError(uObject* s, ::g::Fuse::Resources::ImageSourceErrorArgs* a)
{
    uStackFrame __("Fuse.Resources.ImageSource", "ProxyError(object,Fuse.Resources.ImageSourceErrorArgs)");

    if (::g::Uno::Delegate::op_Inequality(Error1, NULL))
        uPtr(Error1)->Invoke(2, s, a);
}

// public void Unpin() [instance] :643
void ImageSource::Unpin()
{
    uStackFrame __("Fuse.Resources.ImageSource", "Unpin()");
    _pinCount--;

    if (_pinCount == 0)
        OnPinChanged();
}
// }

// /Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Elements/0.47.7/resources/$.uno
// --------------------------------------------------------------------------------------------------

// internal sealed class ImageSourceChangedArgs :556
// {
static void ImageSourceChangedArgs_build(uType* type)
{
    type->SetFields(0,
        ::g::Fuse::Resources::ImageSource_typeof(), offsetof(::g::Fuse::Resources::ImageSourceChangedArgs, _imageSource), 0);
}

uType* ImageSourceChangedArgs_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::EventArgs_typeof();
    options.FieldCount = 1;
    options.ObjectSize = sizeof(ImageSourceChangedArgs);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Resources.ImageSourceChangedArgs", options);
    type->fp_build_ = ImageSourceChangedArgs_build;
    return type;
}

// internal ImageSourceChangedArgs(Fuse.Resources.ImageSource imageSource) :560
void ImageSourceChangedArgs__ctor_1_fn(ImageSourceChangedArgs* __this, ::g::Fuse::Resources::ImageSource* imageSource)
{
    __this->ctor_1(imageSource);
}

// internal ImageSourceChangedArgs New(Fuse.Resources.ImageSource imageSource) :560
void ImageSourceChangedArgs__New2_fn(::g::Fuse::Resources::ImageSource* imageSource, ImageSourceChangedArgs** __retval)
{
    *__retval = ImageSourceChangedArgs::New2(imageSource);
}

// internal void Post() :565
void ImageSourceChangedArgs__Post_fn(ImageSourceChangedArgs* __this)
{
    __this->Post();
}

// internal ImageSourceChangedArgs(Fuse.Resources.ImageSource imageSource) [instance] :560
void ImageSourceChangedArgs::ctor_1(::g::Fuse::Resources::ImageSource* imageSource)
{
    ctor_();
    _imageSource = imageSource;
}

// internal void Post() [instance] :565
void ImageSourceChangedArgs::Post()
{
    uStackFrame __("Fuse.Resources.ImageSourceChangedArgs", "Post()");
    uPtr(_imageSource)->FireChanged(this);
}

// internal ImageSourceChangedArgs New(Fuse.Resources.ImageSource imageSource) [static] :560
ImageSourceChangedArgs* ImageSourceChangedArgs::New2(::g::Fuse::Resources::ImageSource* imageSource)
{
    ImageSourceChangedArgs* obj1 = (ImageSourceChangedArgs*)uNew(ImageSourceChangedArgs_typeof());
    obj1->ctor_1(imageSource);
    return obj1;
}
// }

// /Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Elements/0.47.7/resources/$.uno
// --------------------------------------------------------------------------------------------------

// public sealed class ImageSourceErrorArgs :530
// {
static void ImageSourceErrorArgs_build(uType* type)
{
    ::STRINGS[15] = uString::Const("reason");
    ::TYPES[20] = ::g::Fuse::Scripting::IEventSerializer_typeof();
    type->SetInterfaces(
        ::g::Fuse::Scripting::IScriptEvent_typeof(), offsetof(ImageSourceErrorArgs_type, interface0));
    type->SetFields(0,
        ::g::Fuse::Resources::ImageSource_typeof(), offsetof(::g::Fuse::Resources::ImageSourceErrorArgs, _imageSource), 0,
        ::g::Uno::Exception_typeof(), offsetof(::g::Fuse::Resources::ImageSourceErrorArgs, ExceptionCause), 0,
        ::g::Uno::String_typeof(), offsetof(::g::Fuse::Resources::ImageSourceErrorArgs, Reason), 0);
    type->Reflection.SetFields(2,
        new uField("ExceptionCause", 1),
        new uField("Reason", 2));
}

ImageSourceErrorArgs_type* ImageSourceErrorArgs_typeof()
{
    static uSStrong<ImageSourceErrorArgs_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::EventArgs_typeof();
    options.FieldCount = 3;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(ImageSourceErrorArgs);
    options.TypeSize = sizeof(ImageSourceErrorArgs_type);
    type = (ImageSourceErrorArgs_type*)uClassType::New("Fuse.Resources.ImageSourceErrorArgs", options);
    type->fp_build_ = ImageSourceErrorArgs_build;
    type->interface0.fp_Serialize = (void(*)(uObject*, uObject*))ImageSourceErrorArgs__FuseScriptingIScriptEventSerialize_fn;
    return type;
}

// internal ImageSourceErrorArgs(Fuse.Resources.ImageSource imageSource) :543
void ImageSourceErrorArgs__ctor_1_fn(ImageSourceErrorArgs* __this, ::g::Fuse::Resources::ImageSource* imageSource)
{
    __this->ctor_1(imageSource);
}

// private void Fuse.Scripting.IScriptEvent.Serialize(Fuse.Scripting.IEventSerializer s) :536
void ImageSourceErrorArgs__FuseScriptingIScriptEventSerialize_fn(ImageSourceErrorArgs* __this, uObject* s)
{
    uStackFrame __("Fuse.Resources.ImageSourceErrorArgs", "Fuse.Scripting.IScriptEvent.Serialize(Fuse.Scripting.IEventSerializer)");
    ::g::Fuse::Scripting::IEventSerializer::AddString(uInterface(uPtr(s), ::TYPES[20/*Fuse.Scripting.IEventSerializer*/]), ::STRINGS[15/*"reason"*/], __this->Reason);
}

// internal ImageSourceErrorArgs New(Fuse.Resources.ImageSource imageSource) :543
void ImageSourceErrorArgs__New2_fn(::g::Fuse::Resources::ImageSource* imageSource, ImageSourceErrorArgs** __retval)
{
    *__retval = ImageSourceErrorArgs::New2(imageSource);
}

// internal void Post() :548
void ImageSourceErrorArgs__Post_fn(ImageSourceErrorArgs* __this)
{
    __this->Post();
}

// internal ImageSourceErrorArgs(Fuse.Resources.ImageSource imageSource) [instance] :543
void ImageSourceErrorArgs::ctor_1(::g::Fuse::Resources::ImageSource* imageSource)
{
    ctor_();
    _imageSource = imageSource;
}

// internal void Post() [instance] :548
void ImageSourceErrorArgs::Post()
{
    uStackFrame __("Fuse.Resources.ImageSourceErrorArgs", "Post()");
    uPtr(_imageSource)->FireError(this);
}

// internal ImageSourceErrorArgs New(Fuse.Resources.ImageSource imageSource) [static] :543
ImageSourceErrorArgs* ImageSourceErrorArgs::New2(::g::Fuse::Resources::ImageSource* imageSource)
{
    ImageSourceErrorArgs* obj1 = (ImageSourceErrorArgs*)uNew(ImageSourceErrorArgs_typeof());
    obj1->ctor_1(imageSource);
    return obj1;
}
// }

// /Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Elements/0.47.7/resources/$.uno
// --------------------------------------------------------------------------------------------------

// public delegate void ImageSourceErrorHandler(object sender, Fuse.Resources.ImageSourceErrorArgs args) :554
uDelegateType* ImageSourceErrorHandler_typeof()
{
    static uSStrong<uDelegateType*> type;
    if (type != NULL) return type;

    type = uDelegateType::New("Fuse.Resources.ImageSourceErrorHandler", 2, 0);
    type->SetSignature(uVoid_typeof(),
        uObject_typeof(),
        ::g::Fuse::Resources::ImageSourceErrorArgs_typeof());
    return type;
}

// /Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Elements/0.47.7/resources/$.uno
// --------------------------------------------------------------------------------------------------

// public enum ImageSourceState :518
uEnumType* ImageSourceState_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Resources.ImageSourceState", ::g::Uno::Int_typeof(), 4);
    type->SetLiterals(
        "Pending", 0LL,
        "Ready", 1LL,
        "Loading", 2LL,
        "Failed", 3LL);
    return type;
}

// /Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Common/0.47.7/resources/$.uno
// ------------------------------------------------------------------------------------------------

// internal abstract interface IMemoryResource :353
// {
uInterfaceType* IMemoryResource_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.Resources.IMemoryResource", 0, 0);
    return type;
}
// }

// /Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Nodes/0.47.7/$.uno
// -------------------------------------------------------------------------------------

// internal sealed class IntResourceConverter :3454
// {
static void IntResourceConverter_build(uType* type)
{
    type->SetBase(::g::Fuse::Resources::NumericResourceConverter_typeof()->MakeType(::g::Uno::Int_typeof(), NULL));
    type->SetInterfaces(
        ::g::Fuse::Resources::IResourceConverter_typeof()->MakeType(::g::Uno::Int_typeof(), NULL), offsetof(::g::Fuse::Resources::NumericResourceConverter_type, interface0));
}

::g::Fuse::Resources::NumericResourceConverter_type* IntResourceConverter_typeof()
{
    static uSStrong< ::g::Fuse::Resources::NumericResourceConverter_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Resources::NumericResourceConverter_typeof();
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(IntResourceConverter);
    options.TypeSize = sizeof(::g::Fuse::Resources::NumericResourceConverter_type);
    type = (::g::Fuse::Resources::NumericResourceConverter_type*)uClassType::New("Fuse.Resources.IntResourceConverter", options);
    type->fp_build_ = IntResourceConverter_build;
    type->fp_ctor_ = (void*)IntResourceConverter__New1_fn;
    type->fp_Convert = (void(*)(::g::Fuse::Resources::NumericResourceConverter*, uObject*, uTRef))IntResourceConverter__Convert_fn;
    type->interface0.fp_Accept = (void(*)(uObject*, uObject*, bool*))::g::Fuse::Resources::NumericResourceConverter__Accept_fn;
    type->interface0.fp_Convert = (void(*)(uObject*, uObject*, uTRef))IntResourceConverter__Convert_fn;
    return type;
}

// public generated IntResourceConverter() :3454
void IntResourceConverter__ctor_1_fn(IntResourceConverter* __this)
{
    __this->ctor_1();
}

// public override sealed int Convert(object o) :3456
void IntResourceConverter__Convert_fn(IntResourceConverter* __this, uObject* o, int* __retval)
{
    uStackFrame __("Fuse.Resources.IntResourceConverter", "Convert(object)");
    return *__retval = (int)__this->InternConvert(o), void();
}

// public generated IntResourceConverter New() :3454
void IntResourceConverter__New1_fn(IntResourceConverter** __retval)
{
    *__retval = IntResourceConverter::New1();
}

// public generated IntResourceConverter() [instance] :3454
void IntResourceConverter::ctor_1()
{
    ctor_();
}

// public generated IntResourceConverter New() [static] :3454
IntResourceConverter* IntResourceConverter::New1()
{
    IntResourceConverter* obj1 = (IntResourceConverter*)uNew(IntResourceConverter_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// /Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Nodes/0.47.7/$.uno
// -------------------------------------------------------------------------------------

// internal abstract interface IResourceConverter<T> :3421
// {
uInterfaceType* IResourceConverter_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.Resources.IResourceConverter`1", 1, 0);
    return type;
}
// }

// /Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Common/0.47.7/resources/$.uno
// ------------------------------------------------------------------------------------------------

// internal abstract interface ISoftDisposable :271
// {
uInterfaceType* ISoftDisposable_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.Resources.ISoftDisposable", 0, 0);
    return type;
}
// }

// /Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Elements/0.47.7/resources/$.uno
// --------------------------------------------------------------------------------------------------

// internal abstract class LoadingImageSource :687
// {
static void LoadingImageSource_build(uType* type)
{
    ::STRINGS[16] = uString::Const("value-cannot-be-null");
    type->SetInterfaces(
        ::g::Fuse::Resources::IMemoryResource_typeof(), offsetof(LoadingImageSource_type, interface0));
    type->SetFields(5,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Resources::LoadingImageSource, _density), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Resources::LoadingImageSource, _failed), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Resources::LoadingImageSource, _inDisposal), 0,
        ::g::Uno::Double_typeof(), offsetof(::g::Fuse::Resources::LoadingImageSource, _lastUsed), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Resources::LoadingImageSource, _loading), 0,
        ::g::Fuse::Resources::MemoryPolicy_typeof(), offsetof(::g::Fuse::Resources::LoadingImageSource, _policy), 0,
        ::g::Uno::Graphics::Texture2D_typeof(), offsetof(::g::Fuse::Resources::LoadingImageSource, _texture), 0,
        ::g::Uno::Int2_typeof(), offsetof(::g::Fuse::Resources::LoadingImageSource, _textureSize), 0);
}

LoadingImageSource_type* LoadingImageSource_typeof()
{
    static uSStrong<LoadingImageSource_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Resources::ImageSource_typeof();
    options.FieldCount = 13;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(LoadingImageSource);
    options.TypeSize = sizeof(LoadingImageSource_type);
    type = (LoadingImageSource_type*)uClassType::New("Fuse.Resources.LoadingImageSource", options);
    type->fp_build_ = LoadingImageSource_build;
    type->fp_GetTexture = (void(*)(::g::Fuse::Resources::ImageSource*, ::g::Uno::Graphics::Texture2D**))LoadingImageSource__GetTexture_fn;
    type->fp_OnPinChanged = (void(*)(::g::Fuse::Resources::ImageSource*))LoadingImageSource__OnPinChanged_fn;
    type->fp_get_PixelSize = (void(*)(::g::Fuse::Resources::ImageSource*, ::g::Uno::Int2*))LoadingImageSource__get_PixelSize_fn;
    type->fp_Reload = (void(*)(::g::Fuse::Resources::ImageSource*))LoadingImageSource__Reload_fn;
    type->fp_get_Size = (void(*)(::g::Fuse::Resources::ImageSource*, ::g::Uno::Float2*))LoadingImageSource__get_Size_fn;
    type->fp_get_SizeDensity = (void(*)(::g::Fuse::Resources::ImageSource*, float*))LoadingImageSource__get_SizeDensity_fn;
    type->fp_get_State = (void(*)(::g::Fuse::Resources::ImageSource*, int*))LoadingImageSource__get_State_fn;
    type->interface0.fp_SoftDispose = (void(*)(uObject*))LoadingImageSource__FuseResourcesIMemoryResourceSoftDispose_fn;
    type->interface0.fp_get_MemoryPolicy = (void(*)(uObject*, ::g::Fuse::Resources::MemoryPolicy**))LoadingImageSource__FuseResourcesIMemoryResourceget_MemoryPolicy_fn;
    type->interface0.fp_get_IsPinned = (void(*)(uObject*, bool*))LoadingImageSource__FuseResourcesIMemoryResourceget_IsPinned_fn;
    type->interface0.fp_get_LastUsed = (void(*)(uObject*, double*))LoadingImageSource__FuseResourcesIMemoryResourceget_LastUsed_fn;
    return type;
}

// protected generated LoadingImageSource() :687
void LoadingImageSource__ctor_2_fn(LoadingImageSource* __this)
{
    __this->ctor_2();
}

// protected void Cleanup(Fuse.Resources.LoadingImageSource.CleanupReason reason) :765
void LoadingImageSource__Cleanup_fn(LoadingImageSource* __this, int* reason)
{
    __this->Cleanup(*reason);
}

// private bool Fuse.Resources.IMemoryResource.get_IsPinned() :697
void LoadingImageSource__FuseResourcesIMemoryResourceget_IsPinned_fn(LoadingImageSource* __this, bool* __retval)
{
    return *__retval = __this->IsPinned(), void();
}

// private double Fuse.Resources.IMemoryResource.get_LastUsed() :699
void LoadingImageSource__FuseResourcesIMemoryResourceget_LastUsed_fn(LoadingImageSource* __this, double* __retval)
{
    return *__retval = __this->_lastUsed, void();
}

// private Fuse.Resources.MemoryPolicy Fuse.Resources.IMemoryResource.get_MemoryPolicy() :696
void LoadingImageSource__FuseResourcesIMemoryResourceget_MemoryPolicy_fn(LoadingImageSource* __this, ::g::Fuse::Resources::MemoryPolicy** __retval)
{
    return *__retval = __this->Policy(), void();
}

// private void Fuse.Resources.IMemoryResource.SoftDispose() :700
void LoadingImageSource__FuseResourcesIMemoryResourceSoftDispose_fn(LoadingImageSource* __this)
{
    uStackFrame __("Fuse.Resources.LoadingImageSource", "Fuse.Resources.IMemoryResource.SoftDispose()");
    __this->Cleanup(2);
}

// public override sealed texture2D GetTexture() :733
void LoadingImageSource__GetTexture_fn(LoadingImageSource* __this, ::g::Uno::Graphics::Texture2D** __retval)
{
    uStackFrame __("Fuse.Resources.LoadingImageSource", "GetTexture()");

    if (__this->_texture != NULL)
    {
        __this->MarkUsed();
        return *__retval = __this->_texture, void();
    }

    __this->LoadTexture();
    return *__retval = __this->_texture, void();
}

// protected bool get_IsLoaded() :786
void LoadingImageSource__get_IsLoaded_fn(LoadingImageSource* __this, bool* __retval)
{
    *__retval = __this->IsLoaded();
}

// private void LoadTexture() :745
void LoadingImageSource__LoadTexture_fn(LoadingImageSource* __this)
{
    __this->LoadTexture();
}

// protected void MarkUsed() :705
void LoadingImageSource__MarkUsed_fn(LoadingImageSource* __this)
{
    __this->MarkUsed();
}

// protected override sealed void OnPinChanged() :843
void LoadingImageSource__OnPinChanged_fn(LoadingImageSource* __this)
{
    ::g::Fuse::Resources::ImageSource__OnPinChanged_fn(__this);
    __this->MarkUsed();
}

// public override sealed int2 get_PixelSize() :833
void LoadingImageSource__get_PixelSize_fn(LoadingImageSource* __this, ::g::Uno::Int2* __retval)
{
    uStackFrame __("Fuse.Resources.LoadingImageSource", "get_PixelSize()");

    if (__this->_texture == NULL)
        __this->LoadTexture();

    __this->MarkUsed();
    return *__retval = __this->_textureSize, void();
}

// public Fuse.Resources.MemoryPolicy get_Policy() :713
void LoadingImageSource__get_Policy_fn(LoadingImageSource* __this, ::g::Fuse::Resources::MemoryPolicy** __retval)
{
    *__retval = __this->Policy();
}

// public void set_Policy(Fuse.Resources.MemoryPolicy value) :714
void LoadingImageSource__set_Policy_fn(LoadingImageSource* __this, ::g::Fuse::Resources::MemoryPolicy* value)
{
    __this->Policy(value);
}

// public override sealed void Reload() :753
void LoadingImageSource__Reload_fn(LoadingImageSource* __this)
{
    uStackFrame __("Fuse.Resources.LoadingImageSource", "Reload()");
    __this->Cleanup(0);
    __this->LoadTexture();
}

// protected void SetTexture(texture2D texture) :788
void LoadingImageSource__SetTexture_fn(LoadingImageSource* __this, ::g::Uno::Graphics::Texture2D* texture)
{
    __this->SetTexture(texture);
}

// public override sealed float2 get_Size() :824
void LoadingImageSource__get_Size_fn(LoadingImageSource* __this, ::g::Uno::Float2* __retval)
{
    uStackFrame __("Fuse.Resources.LoadingImageSource", "get_Size()");
    ::g::Uno::Int2 ts = __this->PixelSize();
    return *__retval = ::g::Uno::Float2__op_Division1(::g::Uno::Float2__New2((float)ts.X, (float)ts.Y), __this->_density), void();
}

// public override sealed float get_SizeDensity() :819
void LoadingImageSource__get_SizeDensity_fn(LoadingImageSource* __this, float* __retval)
{
    return *__retval = __this->_density, void();
}

// public override sealed Fuse.Resources.ImageSourceState get_State() :804
void LoadingImageSource__get_State_fn(LoadingImageSource* __this, int* __retval)
{
    if (__this->_texture != NULL)
        return *__retval = 1, void();

    if (__this->_failed)
        return *__retval = 3, void();

    if (__this->_loading)
        return *__retval = 2, void();

    return *__retval = 0, void();
}

// protected generated LoadingImageSource() [instance] :687
void LoadingImageSource::ctor_2()
{
    _policy = ::g::Fuse::Resources::MemoryPolicy::PreloadRetain();
    _density = 1.0f;
    ctor_1();
}

// protected void Cleanup(Fuse.Resources.LoadingImageSource.CleanupReason reason) [instance] :765
void LoadingImageSource::Cleanup(int reason)
{
    uStackFrame __("Fuse.Resources.LoadingImageSource", "Cleanup(Fuse.Resources.LoadingImageSource.CleanupReason)");

    if (_texture != NULL)
    {
        uPtr(_texture)->Dispose();
        _texture = NULL;
    }

    _textureSize = ::g::Uno::Int2__New1(0);
    _loading = false;
    _failed = (reason == 1);

    if (_inDisposal)
        ::g::Fuse::Resources::DisposalManager::Remove((uObject*)this);

    _inDisposal = false;

    if (reason != 2)
        OnChanged();
}

// protected bool get_IsLoaded() [instance] :786
bool LoadingImageSource::IsLoaded()
{
    return _texture != NULL;
}

// private void LoadTexture() [instance] :745
void LoadingImageSource::LoadTexture()
{
    uStackFrame __("Fuse.Resources.LoadingImageSource", "LoadTexture()");

    if (_loading || _failed)
        return;

    AttemptLoad();
}

// protected void MarkUsed() [instance] :705
void LoadingImageSource::MarkUsed()
{
    _lastUsed = ::g::Fuse::Time::FrameTime();
}

// public Fuse.Resources.MemoryPolicy get_Policy() [instance] :713
::g::Fuse::Resources::MemoryPolicy* LoadingImageSource::Policy()
{
    return _policy;
}

// public void set_Policy(Fuse.Resources.MemoryPolicy value) [instance] :714
void LoadingImageSource::Policy(::g::Fuse::Resources::MemoryPolicy* value)
{
    uStackFrame __("Fuse.Resources.LoadingImageSource", "set_Policy(Fuse.Resources.MemoryPolicy)");

    if (value == NULL)
        U_THROW(::g::Uno::Exception::New2(::STRINGS[16/*"value-canno...*/]));

    _policy = value;
}

// protected void SetTexture(texture2D texture) [instance] :788
void LoadingImageSource::SetTexture(::g::Uno::Graphics::Texture2D* texture)
{
    uStackFrame __("Fuse.Resources.LoadingImageSource", "SetTexture(texture2D)");
    _texture = texture;
    _textureSize = uPtr(texture)->Size();

    if (!_inDisposal)
    {
        ::g::Fuse::Resources::DisposalManager::Add((uObject*)this);
        _inDisposal = true;
    }

    MarkUsed();
    OnChanged();
}
// }

// /Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Common/0.47.7/resources/$.uno
// ------------------------------------------------------------------------------------------------

// public sealed class MemoryPolicy :288
// {
// static MemoryPolicy() :288
static void MemoryPolicy__cctor__fn(uType* __type)
{
    MemoryPolicy* collection3;
    MemoryPolicy* collection2;
    MemoryPolicy* collection1;
    MemoryPolicy::PreloadRetain_ = (collection3 = MemoryPolicy::New1(), uPtr(collection3)->BundlePreload(true), true, collection3);
    MemoryPolicy::UnloadUnused_ = (collection2 = MemoryPolicy::New1(), uPtr(collection2)->UnloadInBackground(true), true, uPtr(collection2)->UnusedTimeout(60.0), 60.0, uPtr(collection2)->UnpinInvisible(true), true, collection2);
    MemoryPolicy::UnloadInBackgroundPolicy_ = (collection1 = MemoryPolicy::New1(), uPtr(collection1)->UnloadInBackground(true), true, collection1);
}

static void MemoryPolicy_build(uType* type)
{
    ::TYPES[5] = ::g::Fuse::Resources::IMemoryResource_typeof();
    type->SetFields(0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Resources::MemoryPolicy, _AllowPinnedFree), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Resources::MemoryPolicy, _BundlePreload), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Resources::MemoryPolicy, _UnloadInBackground), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Resources::MemoryPolicy, _UnpinInvisible), 0,
        ::g::Uno::Double_typeof(), offsetof(::g::Fuse::Resources::MemoryPolicy, _UnusedTimeout), 0,
        type, (uintptr_t)&::g::Fuse::Resources::MemoryPolicy::PreloadRetain_, uFieldFlagsStatic,
        type, (uintptr_t)&::g::Fuse::Resources::MemoryPolicy::UnloadInBackgroundPolicy_, uFieldFlagsStatic,
        type, (uintptr_t)&::g::Fuse::Resources::MemoryPolicy::UnloadUnused_, uFieldFlagsStatic);
    type->Reflection.SetFields(3,
        new uField("PreloadRetain", 5),
        new uField("UnloadInBackgroundPolicy", 6),
        new uField("UnloadUnused", 7));
    type->Reflection.SetFunctions(11,
        new uFunction("get_AllowPinnedFree", NULL, (void*)MemoryPolicy__get_AllowPinnedFree_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("set_AllowPinnedFree", NULL, (void*)MemoryPolicy__set_AllowPinnedFree_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Bool_typeof()),
        new uFunction("get_BundlePreload", NULL, (void*)MemoryPolicy__get_BundlePreload_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("set_BundlePreload", NULL, (void*)MemoryPolicy__set_BundlePreload_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Bool_typeof()),
        new uFunction(".ctor", NULL, (void*)MemoryPolicy__New1_fn, 0, true, type, 0),
        new uFunction("get_UnloadInBackground", NULL, (void*)MemoryPolicy__get_UnloadInBackground_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("set_UnloadInBackground", NULL, (void*)MemoryPolicy__set_UnloadInBackground_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Bool_typeof()),
        new uFunction("get_UnpinInvisible", NULL, (void*)MemoryPolicy__get_UnpinInvisible_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("set_UnpinInvisible", NULL, (void*)MemoryPolicy__set_UnpinInvisible_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Bool_typeof()),
        new uFunction("get_UnusedTimeout", NULL, (void*)MemoryPolicy__get_UnusedTimeout_fn, 0, false, ::g::Uno::Double_typeof(), 0),
        new uFunction("set_UnusedTimeout", NULL, (void*)MemoryPolicy__set_UnusedTimeout_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Double_typeof()));
}

uType* MemoryPolicy_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 8;
    options.ObjectSize = sizeof(MemoryPolicy);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Resources.MemoryPolicy", options);
    type->fp_build_ = MemoryPolicy_build;
    type->fp_ctor_ = (void*)MemoryPolicy__New1_fn;
    type->fp_cctor_ = MemoryPolicy__cctor__fn;
    return type;
}

// public generated MemoryPolicy() :288
void MemoryPolicy__ctor__fn(MemoryPolicy* __this)
{
    __this->ctor_();
}

// public generated bool get_AllowPinnedFree() :328
void MemoryPolicy__get_AllowPinnedFree_fn(MemoryPolicy* __this, bool* __retval)
{
    *__retval = __this->AllowPinnedFree();
}

// public generated void set_AllowPinnedFree(bool value) :328
void MemoryPolicy__set_AllowPinnedFree_fn(MemoryPolicy* __this, bool* value)
{
    __this->AllowPinnedFree(*value);
}

// public generated bool get_BundlePreload() :319
void MemoryPolicy__get_BundlePreload_fn(MemoryPolicy* __this, bool* __retval)
{
    *__retval = __this->BundlePreload();
}

// public generated void set_BundlePreload(bool value) :319
void MemoryPolicy__set_BundlePreload_fn(MemoryPolicy* __this, bool* value)
{
    __this->BundlePreload(*value);
}

// public generated MemoryPolicy New() :288
void MemoryPolicy__New1_fn(MemoryPolicy** __retval)
{
    *__retval = MemoryPolicy::New1();
}

// internal bool ShouldSoftDispose(Fuse.Resources.DisposalRequest dr, Fuse.Resources.IMemoryResource resource) :333
void MemoryPolicy__ShouldSoftDispose_fn(MemoryPolicy* __this, int* dr, uObject* resource, bool* __retval)
{
    *__retval = __this->ShouldSoftDispose(*dr, resource);
}

// public generated bool get_UnloadInBackground() :322
void MemoryPolicy__get_UnloadInBackground_fn(MemoryPolicy* __this, bool* __retval)
{
    *__retval = __this->UnloadInBackground();
}

// public generated void set_UnloadInBackground(bool value) :322
void MemoryPolicy__set_UnloadInBackground_fn(MemoryPolicy* __this, bool* value)
{
    __this->UnloadInBackground(*value);
}

// public generated bool get_UnpinInvisible() :331
void MemoryPolicy__get_UnpinInvisible_fn(MemoryPolicy* __this, bool* __retval)
{
    *__retval = __this->UnpinInvisible();
}

// public generated void set_UnpinInvisible(bool value) :331
void MemoryPolicy__set_UnpinInvisible_fn(MemoryPolicy* __this, bool* value)
{
    __this->UnpinInvisible(*value);
}

// public generated double get_UnusedTimeout() :325
void MemoryPolicy__get_UnusedTimeout_fn(MemoryPolicy* __this, double* __retval)
{
    *__retval = __this->UnusedTimeout();
}

// public generated void set_UnusedTimeout(double value) :325
void MemoryPolicy__set_UnusedTimeout_fn(MemoryPolicy* __this, double* value)
{
    __this->UnusedTimeout(*value);
}

uSStrong<MemoryPolicy*> MemoryPolicy::PreloadRetain_;
uSStrong<MemoryPolicy*> MemoryPolicy::UnloadInBackgroundPolicy_;
uSStrong<MemoryPolicy*> MemoryPolicy::UnloadUnused_;

// public generated MemoryPolicy() [instance] :288
void MemoryPolicy::ctor_()
{
}

// public generated bool get_AllowPinnedFree() [instance] :328
bool MemoryPolicy::AllowPinnedFree()
{
    return _AllowPinnedFree;
}

// public generated void set_AllowPinnedFree(bool value) [instance] :328
void MemoryPolicy::AllowPinnedFree(bool value)
{
    _AllowPinnedFree = value;
}

// public generated bool get_BundlePreload() [instance] :319
bool MemoryPolicy::BundlePreload()
{
    return _BundlePreload;
}

// public generated void set_BundlePreload(bool value) [instance] :319
void MemoryPolicy::BundlePreload(bool value)
{
    _BundlePreload = value;
}

// internal bool ShouldSoftDispose(Fuse.Resources.DisposalRequest dr, Fuse.Resources.IMemoryResource resource) [instance] :333
bool MemoryPolicy::ShouldSoftDispose(int dr, uObject* resource)
{
    uStackFrame __("Fuse.Resources.MemoryPolicy", "ShouldSoftDispose(Fuse.Resources.DisposalRequest,Fuse.Resources.IMemoryResource)");

    if ((dr == 1) && UnloadInBackground())
        return true;

    if ((dr == 2) && (!::g::Fuse::Resources::IMemoryResource::IsPinned(uInterface(uPtr(resource), ::TYPES[5/*Fuse.Resources.IMemoryResource*/])) || AllowPinnedFree()))
        return true;

    if ((AllowPinnedFree() || !::g::Fuse::Resources::IMemoryResource::IsPinned(uInterface(uPtr(resource), ::TYPES[5/*Fuse.Resources.IMemoryResource*/]))) && (UnusedTimeout() > 0.0))
    {
        double elapsed = ::g::Fuse::Time::FrameTime() - ::g::Fuse::Resources::IMemoryResource::LastUsed(uInterface(uPtr(resource), ::TYPES[5/*Fuse.Resources.IMemoryResource*/]));

        if (elapsed > UnusedTimeout())
            return true;
    }

    return false;
}

// public generated bool get_UnloadInBackground() [instance] :322
bool MemoryPolicy::UnloadInBackground()
{
    return _UnloadInBackground;
}

// public generated void set_UnloadInBackground(bool value) [instance] :322
void MemoryPolicy::UnloadInBackground(bool value)
{
    _UnloadInBackground = value;
}

// public generated bool get_UnpinInvisible() [instance] :331
bool MemoryPolicy::UnpinInvisible()
{
    return _UnpinInvisible;
}

// public generated void set_UnpinInvisible(bool value) [instance] :331
void MemoryPolicy::UnpinInvisible(bool value)
{
    _UnpinInvisible = value;
}

// public generated double get_UnusedTimeout() [instance] :325
double MemoryPolicy::UnusedTimeout()
{
    return _UnusedTimeout;
}

// public generated void set_UnusedTimeout(double value) [instance] :325
void MemoryPolicy::UnusedTimeout(double value)
{
    _UnusedTimeout = value;
}

// public generated MemoryPolicy New() [static] :288
MemoryPolicy* MemoryPolicy::New1()
{
    MemoryPolicy* obj4 = (MemoryPolicy*)uNew(MemoryPolicy_typeof());
    obj4->ctor_();
    return obj4;
}
// }

// /Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Elements/0.47.7/resources/$.uno
// --------------------------------------------------------------------------------------------------

// public sealed class MultiDensityImageSource :882
// {
static void MultiDensityImageSource_build(uType* type)
{
    ::TYPES[21] = ::g::Uno::Collections::ObservableList_typeof()->MakeType(::g::Fuse::Resources::ImageSource_typeof(), NULL);
    ::TYPES[22] = ::g::Uno::Action1_typeof()->MakeType(::g::Fuse::Resources::ImageSource_typeof(), NULL);
    ::TYPES[23] = ::g::Uno::Collections::IEnumerator_typeof();
    ::TYPES[24] = ::g::Uno::Collections::IEnumerator1_typeof()->MakeType(::g::Fuse::Resources::ImageSource_typeof(), NULL);
    type->SetFields(5,
        ::g::Fuse::Resources::ImageSource_typeof(), offsetof(::g::Fuse::Resources::MultiDensityImageSource, _active), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Resources::MultiDensityImageSource, _hasMatchDensity), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Resources::MultiDensityImageSource, _matchDensity), 0,
        ::g::Fuse::Resources::ProxyImageSource_typeof(), offsetof(::g::Fuse::Resources::MultiDensityImageSource, _proxy), 0,
        ::TYPES[21/*Uno.Collections.ObservableList<Fuse.Resources.ImageSource>*/], offsetof(::g::Fuse::Resources::MultiDensityImageSource, _sources), 0);
    type->Reflection.SetFunctions(4,
        new uFunction("get_MatchDensity", NULL, (void*)MultiDensityImageSource__get_MatchDensity_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("set_MatchDensity", NULL, (void*)MultiDensityImageSource__set_MatchDensity_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction(".ctor", NULL, (void*)MultiDensityImageSource__New2_fn, 0, true, type, 0),
        new uFunction("get_Sources", NULL, (void*)MultiDensityImageSource__get_Sources_fn, 0, false, ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Resources::ImageSource_typeof(), NULL), 0));
}

::g::Fuse::Resources::ImageSource_type* MultiDensityImageSource_typeof()
{
    static uSStrong< ::g::Fuse::Resources::ImageSource_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Resources::ImageSource_typeof();
    options.FieldCount = 10;
    options.ObjectSize = sizeof(MultiDensityImageSource);
    options.TypeSize = sizeof(::g::Fuse::Resources::ImageSource_type);
    type = (::g::Fuse::Resources::ImageSource_type*)uClassType::New("Fuse.Resources.MultiDensityImageSource", options);
    type->fp_build_ = MultiDensityImageSource_build;
    type->fp_ctor_ = (void*)MultiDensityImageSource__New2_fn;
    type->fp_GetTexture = (void(*)(::g::Fuse::Resources::ImageSource*, ::g::Uno::Graphics::Texture2D**))MultiDensityImageSource__GetTexture_fn;
    type->fp_OnPinChanged = (void(*)(::g::Fuse::Resources::ImageSource*))MultiDensityImageSource__OnPinChanged_fn;
    type->fp_get_PixelSize = (void(*)(::g::Fuse::Resources::ImageSource*, ::g::Uno::Int2*))MultiDensityImageSource__get_PixelSize_fn;
    type->fp_Reload = (void(*)(::g::Fuse::Resources::ImageSource*))MultiDensityImageSource__Reload_fn;
    type->fp_get_Size = (void(*)(::g::Fuse::Resources::ImageSource*, ::g::Uno::Float2*))MultiDensityImageSource__get_Size_fn;
    type->fp_get_SizeDensity = (void(*)(::g::Fuse::Resources::ImageSource*, float*))MultiDensityImageSource__get_SizeDensity_fn;
    type->fp_get_State = (void(*)(::g::Fuse::Resources::ImageSource*, int*))MultiDensityImageSource__get_State_fn;
    return type;
}

// public MultiDensityImageSource() :897
void MultiDensityImageSource__ctor_2_fn(MultiDensityImageSource* __this)
{
    __this->ctor_2();
}

// public override sealed texture2D GetTexture() :1001
void MultiDensityImageSource__GetTexture_fn(MultiDensityImageSource* __this, ::g::Uno::Graphics::Texture2D** __retval)
{
    uStackFrame __("Fuse.Resources.MultiDensityImageSource", "GetTexture()");
    return *__retval = uPtr(__this->_proxy)->GetTexture(), void();
}

// public float get_MatchDensity() :921
void MultiDensityImageSource__get_MatchDensity_fn(MultiDensityImageSource* __this, float* __retval)
{
    *__retval = __this->MatchDensity();
}

// public void set_MatchDensity(float value) :922
void MultiDensityImageSource__set_MatchDensity_fn(MultiDensityImageSource* __this, float* value)
{
    __this->MatchDensity(*value);
}

// public MultiDensityImageSource New() :897
void MultiDensityImageSource__New2_fn(MultiDensityImageSource** __retval)
{
    *__retval = MultiDensityImageSource::New2();
}

// private void OnImageAdded(Fuse.Resources.ImageSource img) :903
void MultiDensityImageSource__OnImageAdded_fn(MultiDensityImageSource* __this, ::g::Fuse::Resources::ImageSource* img)
{
    __this->OnImageAdded(img);
}

// private void OnImageRemoved(Fuse.Resources.ImageSource img) :909
void MultiDensityImageSource__OnImageRemoved_fn(MultiDensityImageSource* __this, ::g::Fuse::Resources::ImageSource* img)
{
    __this->OnImageRemoved(img);
}

// protected override sealed void OnPinChanged() :971
void MultiDensityImageSource__OnPinChanged_fn(MultiDensityImageSource* __this)
{
    uStackFrame __("Fuse.Resources.MultiDensityImageSource", "OnPinChanged()");
    __this->SelectActive();
    uPtr(__this->_proxy)->OnPinChanged();
}

// public override sealed int2 get_PixelSize() :987
void MultiDensityImageSource__get_PixelSize_fn(MultiDensityImageSource* __this, ::g::Uno::Int2* __retval)
{
    uStackFrame __("Fuse.Resources.MultiDensityImageSource", "get_PixelSize()");
    return *__retval = uPtr(__this->_proxy)->PixelSize(), void();
}

// public override sealed void Reload() :1006
void MultiDensityImageSource__Reload_fn(MultiDensityImageSource* __this)
{
    uStackFrame __("Fuse.Resources.MultiDensityImageSource", "Reload()");
    uPtr(__this->_proxy)->Reload();
}

// private void SelectActive() :934
void MultiDensityImageSource__SelectActive_fn(MultiDensityImageSource* __this)
{
    __this->SelectActive();
}

// public override sealed float2 get_Size() :979
void MultiDensityImageSource__get_Size_fn(MultiDensityImageSource* __this, ::g::Uno::Float2* __retval)
{
    uStackFrame __("Fuse.Resources.MultiDensityImageSource", "get_Size()");
    return *__retval = uPtr(__this->_proxy)->Size(), void();
}

// public override sealed float get_SizeDensity() :1013
void MultiDensityImageSource__get_SizeDensity_fn(MultiDensityImageSource* __this, float* __retval)
{
    uStackFrame __("Fuse.Resources.MultiDensityImageSource", "get_SizeDensity()");
    return *__retval = uPtr(__this->_proxy)->Density(), void();
}

// public Uno.Collections.IList<Fuse.Resources.ImageSource> get_Sources() :889
void MultiDensityImageSource__get_Sources_fn(MultiDensityImageSource* __this, uObject** __retval)
{
    *__retval = __this->Sources();
}

// public override sealed Fuse.Resources.ImageSourceState get_State() :995
void MultiDensityImageSource__get_State_fn(MultiDensityImageSource* __this, int* __retval)
{
    uStackFrame __("Fuse.Resources.MultiDensityImageSource", "get_State()");
    return *__retval = uPtr(__this->_proxy)->State(), void();
}

// private void SwapActive(Fuse.Resources.ImageSource use) :953
void MultiDensityImageSource__SwapActive_fn(MultiDensityImageSource* __this, ::g::Fuse::Resources::ImageSource* use)
{
    __this->SwapActive(use);
}

// public MultiDensityImageSource() [instance] :897
void MultiDensityImageSource::ctor_2()
{
    uStackFrame __("Fuse.Resources.MultiDensityImageSource", ".ctor()");
    ctor_1();
    _sources = ((::g::Uno::Collections::ObservableList*)::g::Uno::Collections::ObservableList::New1(::TYPES[21/*Uno.Collections.ObservableList<Fuse.Resources.ImageSource>*/], uDelegate::New(::TYPES[22/*Uno.Action<Fuse.Resources.ImageSource>*/], (void*)MultiDensityImageSource__OnImageAdded_fn, this), uDelegate::New(::TYPES[22/*Uno.Action<Fuse.Resources.ImageSource>*/], (void*)MultiDensityImageSource__OnImageRemoved_fn, this)));
    _proxy = ::g::Fuse::Resources::ProxyImageSource::New1(this);
}

// public float get_MatchDensity() [instance] :921
float MultiDensityImageSource::MatchDensity()
{
    return _matchDensity;
}

// public void set_MatchDensity(float value) [instance] :922
void MultiDensityImageSource::MatchDensity(float value)
{
    uStackFrame __("Fuse.Resources.MultiDensityImageSource", "set_MatchDensity(float)");

    if (_hasMatchDensity && (_matchDensity == value))
        return;

    _hasMatchDensity = true;
    _matchDensity = value;
    SelectActive();
}

// private void OnImageAdded(Fuse.Resources.ImageSource img) [instance] :903
void MultiDensityImageSource::OnImageAdded(::g::Fuse::Resources::ImageSource* img)
{
    uStackFrame __("Fuse.Resources.MultiDensityImageSource", "OnImageAdded(Fuse.Resources.ImageSource)");

    if (IsPinned())
        SelectActive();
}

// private void OnImageRemoved(Fuse.Resources.ImageSource img) [instance] :909
void MultiDensityImageSource::OnImageRemoved(::g::Fuse::Resources::ImageSource* img)
{
    uStackFrame __("Fuse.Resources.MultiDensityImageSource", "OnImageRemoved(Fuse.Resources.ImageSource)");

    if (IsPinned())
        SelectActive();
}

// private void SelectActive() [instance] :934
void MultiDensityImageSource::SelectActive()
{
    uStackFrame __("Fuse.Resources.MultiDensityImageSource", "SelectActive()");
    ::g::Fuse::Resources::ImageSource* ret3;
    float screen = _hasMatchDensity ? _matchDensity : uPtr(::g::Fuse::AppBase::Current2())->PixelsPerPoint();
    float diff = FLT_INF;
    ::g::Fuse::Resources::ImageSource* use = NULL;

    for (uObject* enum1 = (uObject*)uPtr(_sources)->GetEnumerator(); ::g::Uno::Collections::IEnumerator::MoveNext(uInterface(uPtr(enum1), ::TYPES[23/*Uno.Collections.IEnumerator*/])); )
    {
        ::g::Fuse::Resources::ImageSource* source = (::g::Uno::Collections::IEnumerator1::get_Current_ex(uInterface(uPtr(enum1), ::TYPES[24/*Uno.Collections.IEnumerator<Fuse.Resources.ImageSource>*/]), &ret3), ret3);
        float d = ::g::Uno::Math::Abs1(uPtr(source)->SizeDensity() - screen);

        if (d < diff)
        {
            use = source;
            diff = d;
        }
    }

    SwapActive(use);
}

// public Uno.Collections.IList<Fuse.Resources.ImageSource> get_Sources() [instance] :889
uObject* MultiDensityImageSource::Sources()
{
    uStackFrame __("Fuse.Resources.MultiDensityImageSource", "get_Sources()");
    return (uObject*)_sources;
}

// private void SwapActive(Fuse.Resources.ImageSource use) [instance] :953
void MultiDensityImageSource::SwapActive(::g::Fuse::Resources::ImageSource* use)
{
    uStackFrame __("Fuse.Resources.MultiDensityImageSource", "SwapActive(Fuse.Resources.ImageSource)");

    if (use == _active)
        return;

    if (_active != NULL)
        uPtr(_proxy)->Release();

    _active = use;

    if (use != NULL)
        uPtr(_proxy)->Attach(use);
}

// public MultiDensityImageSource New() [static] :897
MultiDensityImageSource* MultiDensityImageSource::New2()
{
    MultiDensityImageSource* obj2 = (MultiDensityImageSource*)uNew(MultiDensityImageSource_typeof());
    obj2->ctor_2();
    return obj2;
}
// }

// /Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Nodes/0.47.7/$.uno
// -------------------------------------------------------------------------------------

// internal abstract class NumericResourceConverter<T> :3427
// {
static void NumericResourceConverter_build(uType* type)
{
    ::TYPES[25] = ::g::Uno::Float_typeof();
    ::TYPES[26] = ::g::Uno::Int_typeof();
    ::TYPES[27] = ::g::Uno::Double_typeof();
    type->SetInterfaces(
        ::g::Fuse::Resources::IResourceConverter_typeof()->MakeType(type->T(0), NULL), offsetof(NumericResourceConverter_type, interface0));
}

NumericResourceConverter_type* NumericResourceConverter_typeof()
{
    static uSStrong<NumericResourceConverter_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.GenericCount = 1;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(NumericResourceConverter);
    options.TypeSize = sizeof(NumericResourceConverter_type);
    type = (NumericResourceConverter_type*)uClassType::New("Fuse.Resources.NumericResourceConverter`1", options);
    type->fp_build_ = NumericResourceConverter_build;
    type->interface0.fp_Accept = (void(*)(uObject*, uObject*, bool*))NumericResourceConverter__Accept_fn;
    return type;
}

// protected generated NumericResourceConverter() :3427
void NumericResourceConverter__ctor__fn(NumericResourceConverter* __this)
{
    __this->ctor_();
}

// public bool Accept(object o) :3429
void NumericResourceConverter__Accept_fn(NumericResourceConverter* __this, uObject* o, bool* __retval)
{
    *__retval = __this->Accept(o);
}

// protected double InternConvert(object o) :3434
void NumericResourceConverter__InternConvert_fn(NumericResourceConverter* __this, uObject* o, double* __retval)
{
    *__retval = __this->InternConvert(o);
}

// protected generated NumericResourceConverter() [instance] :3427
void NumericResourceConverter::ctor_()
{
}

// public bool Accept(object o) [instance] :3429
bool NumericResourceConverter::Accept(uObject* o)
{
    bool q = (uIs(o, ::TYPES[25/*float*/]) || uIs(o, ::TYPES[26/*int*/])) || uIs(o, ::TYPES[27/*double*/]);
    return q;
}

// protected double InternConvert(object o) [instance] :3434
double NumericResourceConverter::InternConvert(uObject* o)
{
    uStackFrame __("Fuse.Resources.NumericResourceConverter`1", "InternConvert(object)");

    if (uIs(o, ::TYPES[25/*float*/]))
        return (double)uUnbox<float>(::TYPES[25/*float*/], o);

    if (uIs(o, ::TYPES[27/*double*/]))
        return uUnbox<double>(::TYPES[27/*double*/], o);

    if (uIs(o, ::TYPES[26/*int*/]))
        return (double)uUnbox<int>(::TYPES[26/*int*/], o);

    return 0.0;
}
// }

// /Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Common/0.47.7/resources/$.uno
// ------------------------------------------------------------------------------------------------

// internal abstract class PolicyDeferredDisposable :217
// {
static void PolicyDeferredDisposable_build(uType* type)
{
    type->SetInterfaces(
        ::g::Fuse::Resources::IDeferredDisposable_typeof(), offsetof(PolicyDeferredDisposable_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(PolicyDeferredDisposable_type, interface1));
    type->SetFields(0,
        ::g::Fuse::Resources::DisposalPolicy_typeof(), offsetof(::g::Fuse::Resources::PolicyDeferredDisposable, Policy), 0);
}

PolicyDeferredDisposable_type* PolicyDeferredDisposable_typeof()
{
    static uSStrong<PolicyDeferredDisposable_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(PolicyDeferredDisposable);
    options.TypeSize = sizeof(PolicyDeferredDisposable_type);
    type = (PolicyDeferredDisposable_type*)uClassType::New("Fuse.Resources.PolicyDeferredDisposable", options);
    type->fp_build_ = PolicyDeferredDisposable_build;
    type->interface0.fp_MarkUsed = (void(*)(uObject*))PolicyDeferredDisposable__MarkUsed_fn;
    type->interface0.fp_CanDispose = (void(*)(uObject*, int*, bool*))PolicyDeferredDisposable__CanDispose_fn;
    return type;
}

// protected generated PolicyDeferredDisposable() :217
void PolicyDeferredDisposable__ctor__fn(PolicyDeferredDisposable* __this)
{
    __this->ctor_();
}

// public bool CanDispose(Fuse.Resources.DisposalRequest dr) :227
void PolicyDeferredDisposable__CanDispose_fn(PolicyDeferredDisposable* __this, int* dr, bool* __retval)
{
    *__retval = __this->CanDispose(*dr);
}

// protected bool get_IsPinned() :236
void PolicyDeferredDisposable__get_IsPinned_fn(PolicyDeferredDisposable* __this, bool* __retval)
{
    *__retval = __this->IsPinned();
}

// public void MarkUsed() :221
void PolicyDeferredDisposable__MarkUsed_fn(PolicyDeferredDisposable* __this)
{
    __this->MarkUsed();
}

// protected generated PolicyDeferredDisposable() [instance] :217
void PolicyDeferredDisposable::ctor_()
{
}

// public bool CanDispose(Fuse.Resources.DisposalRequest dr) [instance] :227
bool PolicyDeferredDisposable::CanDispose(int dr)
{
    uStackFrame __("Fuse.Resources.PolicyDeferredDisposable", "CanDispose(Fuse.Resources.DisposalRequest)");

    if (Policy != NULL)
        return uPtr(Policy)->CanDispose(dr, IsPinned());

    return true;
}

// protected bool get_IsPinned() [instance] :236
bool PolicyDeferredDisposable::IsPinned()
{
    return false;
}

// public void MarkUsed() [instance] :221
void PolicyDeferredDisposable::MarkUsed()
{
    uStackFrame __("Fuse.Resources.PolicyDeferredDisposable", "MarkUsed()");

    if (Policy != NULL)
        uPtr(Policy)->MarkUsed();
}
// }

// /Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Elements/0.47.7/resources/$.uno
// --------------------------------------------------------------------------------------------------

// internal sealed class ProxyImageSource :1029
// {
static void ProxyImageSource_build(uType* type)
{
    ::TYPES[18] = ::g::Uno::EventHandler_typeof();
    ::TYPES[19] = ::g::Fuse::Resources::ImageSourceErrorHandler_typeof();
    ::TYPES[28] = ::g::Fuse::Resources::LoadingImageSource_typeof();
    ::TYPES[29] = ::g::Uno::Graphics::Texture2D_typeof();
    type->SetFields(0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Resources::ProxyImageSource, _density), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Resources::ProxyImageSource, _hasDensity), 0,
        ::g::Fuse::Resources::ImageSource_typeof(), offsetof(::g::Fuse::Resources::ProxyImageSource, _impl), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Resources::ProxyImageSource, _isDefaultPolicy), 0,
        ::g::Fuse::Resources::ImageSource_typeof(), offsetof(::g::Fuse::Resources::ProxyImageSource, _outer), 0,
        ::g::Fuse::Resources::MemoryPolicy_typeof(), offsetof(::g::Fuse::Resources::ProxyImageSource, _policy), 0);
}

uType* ProxyImageSource_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 6;
    options.ObjectSize = sizeof(ProxyImageSource);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Resources.ProxyImageSource", options);
    type->fp_build_ = ProxyImageSource_build;
    return type;
}

// public ProxyImageSource(Fuse.Resources.ImageSource outer) :1032
void ProxyImageSource__ctor__fn(ProxyImageSource* __this, ::g::Fuse::Resources::ImageSource* outer)
{
    __this->ctor_(outer);
}

// public void Attach(Fuse.Resources.ImageSource impl) :1161
void ProxyImageSource__Attach_fn(ProxyImageSource* __this, ::g::Fuse::Resources::ImageSource* impl)
{
    __this->Attach(impl);
}

// public void DefaultSetPolicy(Fuse.Resources.MemoryPolicy mp) :1065
void ProxyImageSource__DefaultSetPolicy_fn(ProxyImageSource* __this, ::g::Fuse::Resources::MemoryPolicy* mp)
{
    __this->DefaultSetPolicy(mp);
}

// public float get_Density() :1110
void ProxyImageSource__get_Density_fn(ProxyImageSource* __this, float* __retval)
{
    *__retval = __this->Density();
}

// public void set_Density(float value) :1116
void ProxyImageSource__set_Density_fn(ProxyImageSource* __this, float* value)
{
    __this->Density(*value);
}

// public texture2D GetTexture() :1128
void ProxyImageSource__GetTexture_fn(ProxyImageSource* __this, ::g::Uno::Graphics::Texture2D** __retval)
{
    *__retval = __this->GetTexture();
}

// public Fuse.Resources.ImageSource get_Impl() :1038
void ProxyImageSource__get_Impl_fn(ProxyImageSource* __this, ::g::Fuse::Resources::ImageSource** __retval)
{
    *__retval = __this->Impl();
}

// public ProxyImageSource New(Fuse.Resources.ImageSource outer) :1032
void ProxyImageSource__New1_fn(::g::Fuse::Resources::ImageSource* outer, ProxyImageSource** __retval)
{
    *__retval = ProxyImageSource::New1(outer);
}

// public void OnPinChanged() :1040
void ProxyImageSource__OnPinChanged_fn(ProxyImageSource* __this)
{
    __this->OnPinChanged();
}

// public int2 get_PixelSize() :1095
void ProxyImageSource__get_PixelSize_fn(ProxyImageSource* __this, ::g::Uno::Int2* __retval)
{
    *__retval = __this->PixelSize();
}

// public Fuse.Resources.MemoryPolicy get_Policy() :1055
void ProxyImageSource__get_Policy_fn(ProxyImageSource* __this, ::g::Fuse::Resources::MemoryPolicy** __retval)
{
    *__retval = __this->Policy();
}

// public void set_Policy(Fuse.Resources.MemoryPolicy value) :1056
void ProxyImageSource__set_Policy_fn(ProxyImageSource* __this, ::g::Fuse::Resources::MemoryPolicy* value)
{
    __this->Policy(value);
}

// private void ProxyOnChanged(object s, Uno.EventArgs a) :1151
void ProxyImageSource__ProxyOnChanged_fn(ProxyImageSource* __this, uObject* s, ::g::Uno::EventArgs* a)
{
    __this->ProxyOnChanged(s, a);
}

// private void ProxyOnError(object s, Fuse.Resources.ImageSourceErrorArgs a) :1156
void ProxyImageSource__ProxyOnError_fn(ProxyImageSource* __this, uObject* s, ::g::Fuse::Resources::ImageSourceErrorArgs* a)
{
    __this->ProxyOnError(s, a);
}

// public void Release() :1139
void ProxyImageSource__Release_fn(ProxyImageSource* __this)
{
    __this->Release();
}

// public void Reload() :1133
void ProxyImageSource__Reload_fn(ProxyImageSource* __this)
{
    __this->Reload();
}

// public float2 get_Size() :1083
void ProxyImageSource__get_Size_fn(ProxyImageSource* __this, ::g::Uno::Float2* __retval)
{
    *__retval = __this->Size();
}

// public Fuse.Resources.ImageSourceState get_State() :1125
void ProxyImageSource__get_State_fn(ProxyImageSource* __this, int* __retval)
{
    *__retval = __this->State();
}

// private void UpdatePolicy() :1074
void ProxyImageSource__UpdatePolicy_fn(ProxyImageSource* __this)
{
    __this->UpdatePolicy();
}

// public ProxyImageSource(Fuse.Resources.ImageSource outer) [instance] :1032
void ProxyImageSource::ctor_(::g::Fuse::Resources::ImageSource* outer)
{
    _isDefaultPolicy = true;
    _policy = ::g::Fuse::Resources::MemoryPolicy::PreloadRetain();
    _density = 1.0f;
    _outer = outer;
}

// public void Attach(Fuse.Resources.ImageSource impl) [instance] :1161
void ProxyImageSource::Attach(::g::Fuse::Resources::ImageSource* impl)
{
    uStackFrame __("Fuse.Resources.ProxyImageSource", "Attach(Fuse.Resources.ImageSource)");
    _impl = impl;
    uPtr(_impl)->add_Changed(uDelegate::New(::TYPES[18/*Uno.EventHandler*/], (void*)ProxyImageSource__ProxyOnChanged_fn, this));
    uPtr(_impl)->add_Error(uDelegate::New(::TYPES[19/*Fuse.Resources.ImageSourceErrorHandler*/], (void*)ProxyImageSource__ProxyOnError_fn, this));

    if (uPtr(_outer)->IsPinned())
        uPtr(_impl)->Pin();

    ::g::Fuse::Resources::LoadingImageSource* loading = uAs< ::g::Fuse::Resources::LoadingImageSource*>(impl, ::TYPES[28/*Fuse.Resources.LoadingImageSource*/]);

    if (loading != NULL)
        uPtr(loading)->Policy(_policy);

    uPtr(_outer)->ProxyChanged(this, ::g::Uno::EventArgs::New1());
}

// public void DefaultSetPolicy(Fuse.Resources.MemoryPolicy mp) [instance] :1065
void ProxyImageSource::DefaultSetPolicy(::g::Fuse::Resources::MemoryPolicy* mp)
{
    uStackFrame __("Fuse.Resources.ProxyImageSource", "DefaultSetPolicy(Fuse.Resources.MemoryPolicy)");

    if (!_isDefaultPolicy)
        return;

    _policy = mp;
    UpdatePolicy();
}

// public float get_Density() [instance] :1110
float ProxyImageSource::Density()
{
    uStackFrame __("Fuse.Resources.ProxyImageSource", "get_Density()");

    if (_hasDensity || (_impl == NULL))
        return _density;

    return uPtr(_impl)->SizeDensity();
}

// public void set_Density(float value) [instance] :1116
void ProxyImageSource::Density(float value)
{
    _density = value;
    _hasDensity = true;
}

// public texture2D GetTexture() [instance] :1128
::g::Uno::Graphics::Texture2D* ProxyImageSource::GetTexture()
{
    uStackFrame __("Fuse.Resources.ProxyImageSource", "GetTexture()");
    return (_impl == NULL) ? uCast< ::g::Uno::Graphics::Texture2D*>(NULL, ::TYPES[29/*texture2D*/]) : (::g::Uno::Graphics::Texture2D*)uPtr(_impl)->GetTexture();
}

// public Fuse.Resources.ImageSource get_Impl() [instance] :1038
::g::Fuse::Resources::ImageSource* ProxyImageSource::Impl()
{
    return _impl;
}

// public void OnPinChanged() [instance] :1040
void ProxyImageSource::OnPinChanged()
{
    uStackFrame __("Fuse.Resources.ProxyImageSource", "OnPinChanged()");

    if (_impl == NULL)
        return;

    if (uPtr(_outer)->IsPinned())
        uPtr(_impl)->Pin();
    else
        uPtr(_impl)->Unpin();
}

// public int2 get_PixelSize() [instance] :1095
::g::Uno::Int2 ProxyImageSource::PixelSize()
{
    uStackFrame __("Fuse.Resources.ProxyImageSource", "get_PixelSize()");

    if (_impl == NULL)
        return ::g::Uno::Int2__New1(0);

    return uPtr(_impl)->PixelSize();
}

// public Fuse.Resources.MemoryPolicy get_Policy() [instance] :1055
::g::Fuse::Resources::MemoryPolicy* ProxyImageSource::Policy()
{
    return _policy;
}

// public void set_Policy(Fuse.Resources.MemoryPolicy value) [instance] :1056
void ProxyImageSource::Policy(::g::Fuse::Resources::MemoryPolicy* value)
{
    uStackFrame __("Fuse.Resources.ProxyImageSource", "set_Policy(Fuse.Resources.MemoryPolicy)");
    _policy = value;
    _isDefaultPolicy = false;
    UpdatePolicy();
}

// private void ProxyOnChanged(object s, Uno.EventArgs a) [instance] :1151
void ProxyImageSource::ProxyOnChanged(uObject* s, ::g::Uno::EventArgs* a)
{
    uStackFrame __("Fuse.Resources.ProxyImageSource", "ProxyOnChanged(object,Uno.EventArgs)");
    uPtr(_outer)->ProxyChanged(this, a);
}

// private void ProxyOnError(object s, Fuse.Resources.ImageSourceErrorArgs a) [instance] :1156
void ProxyImageSource::ProxyOnError(uObject* s, ::g::Fuse::Resources::ImageSourceErrorArgs* a)
{
    uStackFrame __("Fuse.Resources.ProxyImageSource", "ProxyOnError(object,Fuse.Resources.ImageSourceErrorArgs)");
    uPtr(_outer)->ProxyError(this, a);
}

// public void Release() [instance] :1139
void ProxyImageSource::Release()
{
    uStackFrame __("Fuse.Resources.ProxyImageSource", "Release()");

    if (_impl != NULL)
    {
        if (uPtr(_outer)->IsPinned())
            uPtr(_impl)->Unpin();

        uPtr(_impl)->remove_Changed(uDelegate::New(::TYPES[18/*Uno.EventHandler*/], (void*)ProxyImageSource__ProxyOnChanged_fn, this));
        uPtr(_impl)->remove_Error(uDelegate::New(::TYPES[19/*Fuse.Resources.ImageSourceErrorHandler*/], (void*)ProxyImageSource__ProxyOnError_fn, this));
        _impl = NULL;
    }
}

// public void Reload() [instance] :1133
void ProxyImageSource::Reload()
{
    uStackFrame __("Fuse.Resources.ProxyImageSource", "Reload()");

    if (_impl != NULL)
        uPtr(_impl)->Reload();
}

// public float2 get_Size() [instance] :1083
::g::Uno::Float2 ProxyImageSource::Size()
{
    uStackFrame __("Fuse.Resources.ProxyImageSource", "get_Size()");

    if (_impl == NULL)
        return ::g::Uno::Float2__New1(0.0f);

    ::g::Uno::Int2 ps = uPtr(_impl)->PixelSize();
    return ::g::Uno::Float2__op_Division1(::g::Uno::Float2__New2((float)ps.X, (float)ps.Y), _density);
}

// public Fuse.Resources.ImageSourceState get_State() [instance] :1125
int ProxyImageSource::State()
{
    uStackFrame __("Fuse.Resources.ProxyImageSource", "get_State()");
    return (_impl == NULL) ? 0 : uPtr(_impl)->State();
}

// private void UpdatePolicy() [instance] :1074
void ProxyImageSource::UpdatePolicy()
{
    uStackFrame __("Fuse.Resources.ProxyImageSource", "UpdatePolicy()");
    ::g::Fuse::Resources::LoadingImageSource* loading = uAs< ::g::Fuse::Resources::LoadingImageSource*>(_impl, ::TYPES[28/*Fuse.Resources.LoadingImageSource*/]);

    if (loading != NULL)
        uPtr(loading)->Policy(_policy);
}

// public ProxyImageSource New(Fuse.Resources.ImageSource outer) [static] :1032
ProxyImageSource* ProxyImageSource::New1(::g::Fuse::Resources::ImageSource* outer)
{
    ProxyImageSource* obj1 = (ProxyImageSource*)uNew(ProxyImageSource_typeof());
    obj1->ctor_(outer);
    return obj1;
}
// }

// /Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Nodes/0.47.7/$.uno
// -------------------------------------------------------------------------------------

// public sealed class ResourceBinding<T> :3529
// {
static void ResourceBinding_build(uType* type)
{
    ::STRINGS[17] = uString::Const("target");
    ::TYPES[30] = ::g::Uno::Predicate_typeof()->MakeType(uObject_typeof(), NULL);
    ::TYPES[31] = ::g::Fuse::Resources::IResourceConverter_typeof();
    ::TYPES[32] = ::g::Fuse::Resources::ResourceConverters_typeof();
    ::TYPES[0] = ::g::Uno::Action_typeof();
    type->SetPrecalc(
        type->T(0),
        ::g::Fuse::Resources::IResourceConverter_typeof()->MakeType(type->T(0), NULL),
        ::g::Fuse::Resources::ResourceConverters_typeof()->MakeMethod(0/*Get<T>*/, type->T(0), NULL));
    type->SetFields(1,
        ::TYPES[31/*Fuse.Resources.IResourceConverter`1*/]->MakeType(type->T(0), NULL), offsetof(::g::Fuse::Resources::ResourceBinding, _converter), 0,
        ::g::Uno::String_typeof(), offsetof(::g::Fuse::Resources::ResourceBinding, _Key), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(type->T(0), NULL), offsetof(::g::Fuse::Resources::ResourceBinding, _Target), 0);
    type->Reflection.SetFunctions(3,
        new uFunction("get_Key", NULL, (void*)ResourceBinding__get_Key_fn, 0, false, ::g::Uno::String_typeof(), 0),
        new uFunction(".ctor", type, (void*)ResourceBinding__New1_fn, 0, true, type, 2, ::g::Uno::UX::Property1_typeof()->MakeType(type->T(0), NULL), ::g::Uno::String_typeof()),
        new uFunction("get_Target", NULL, (void*)ResourceBinding__get_Target_fn, 0, false, ::g::Uno::UX::Property1_typeof()->MakeType(type->T(0), NULL), 0));
}

::g::Fuse::Binding_type* ResourceBinding_typeof()
{
    static uSStrong< ::g::Fuse::Binding_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Binding_typeof();
    options.FieldCount = 4;
    options.GenericCount = 1;
    options.PrecalcCount = 3;
    options.ObjectSize = sizeof(ResourceBinding);
    options.TypeSize = sizeof(::g::Fuse::Binding_type);
    type = (::g::Fuse::Binding_type*)uClassType::New("Fuse.Resources.ResourceBinding`1", options);
    type->fp_build_ = ResourceBinding_build;
    type->fp_OnRooted = (void(*)(::g::Fuse::Binding*))ResourceBinding__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Binding*))ResourceBinding__OnUnrooted_fn;
    return type;
}

// public ResourceBinding(Uno.UX.Property<T> target, string key) :3538
void ResourceBinding__ctor_1_fn(ResourceBinding* __this, ::g::Uno::UX::Property1* target, uString* key)
{
    __this->ctor_1(target, key);
}

// public generated string get_Key() :3535
void ResourceBinding__get_Key_fn(ResourceBinding* __this, uString** __retval)
{
    *__retval = __this->Key();
}

// private generated void set_Key(string value) :3535
void ResourceBinding__set_Key_fn(ResourceBinding* __this, uString* value)
{
    __this->Key(value);
}

// public ResourceBinding New(Uno.UX.Property<T> target, string key) :3538
void ResourceBinding__New1_fn(uType* __type, ::g::Uno::UX::Property1* target, uString* key, ResourceBinding** __retval)
{
    *__retval = ResourceBinding::New1(__type, target, key);
}

// private void OnChanged() :3559
void ResourceBinding__OnChanged_fn(ResourceBinding* __this)
{
    __this->OnChanged();
}

// protected override sealed void OnRooted() :3547
void ResourceBinding__OnRooted_fn(ResourceBinding* __this)
{
    uType* __types[] = {
        __this->__type->Precalced(2/*Fuse.Resources.ResourceConverters.Get<T>*/),
    };
    uStackFrame __("Fuse.Resources.ResourceBinding`1", "OnRooted()");
    __this->_converter = ((uObject*)::g::Fuse::Resources::ResourceConverters::Get(__types[0]));
    ::g::Fuse::Resources::ResourceRegistry::AddResourceChangedHandler(__this->Key(), uDelegate::New(::TYPES[0/*Uno.Action*/], (void*)ResourceBinding__OnChanged_fn, __this));
    __this->OnChanged();
}

// protected override sealed void OnUnrooted() :3554
void ResourceBinding__OnUnrooted_fn(ResourceBinding* __this)
{
    uStackFrame __("Fuse.Resources.ResourceBinding`1", "OnUnrooted()");
    ::g::Fuse::Resources::ResourceRegistry::RemoveResourceChangedHandler(__this->Key(), uDelegate::New(::TYPES[0/*Uno.Action*/], (void*)ResourceBinding__OnChanged_fn, __this));
}

// public generated Uno.UX.Property<T> get_Target() :3532
void ResourceBinding__get_Target_fn(ResourceBinding* __this, ::g::Uno::UX::Property1** __retval)
{
    *__retval = __this->Target();
}

// private generated void set_Target(Uno.UX.Property<T> value) :3532
void ResourceBinding__set_Target_fn(ResourceBinding* __this, ::g::Uno::UX::Property1* value)
{
    __this->Target(value);
}

// public ResourceBinding(Uno.UX.Property<T> target, string key) [instance] :3538
void ResourceBinding::ctor_1(::g::Uno::UX::Property1* target, uString* key)
{
    uStackFrame __("Fuse.Resources.ResourceBinding`1", ".ctor(Uno.UX.Property<T>,string)");
    ctor_();

    if (target == NULL)
        U_THROW(::g::Uno::ArgumentNullException::New6(::STRINGS[17/*"target"*/]));

    Target(target);
    Key(key);
}

// public generated string get_Key() [instance] :3535
uString* ResourceBinding::Key()
{
    return _Key;
}

// private generated void set_Key(string value) [instance] :3535
void ResourceBinding::Key(uString* value)
{
    _Key = value;
}

// private void OnChanged() [instance] :3559
void ResourceBinding::OnChanged()
{
    uType* __types[] = {
        __type->Precalced(0/*T*/),
        __type->Precalced(1/*Fuse.Resources.IResourceConverter<T>*/),
    };
    uStackFrame __("Fuse.Resources.ResourceBinding`1", "OnChanged()");
    uT ret2(__types[0], U_ALLOCA(__types[0]->ValueSize));
    uObject* resource;

    if (uPtr(Parent())->TryGetResource(Key(), uDelegate::New(::TYPES[30/*Uno.Predicate<object>*/], uInterface(uPtr(_converter), __types[1]), offsetof(::g::Fuse::Resources::IResourceConverter, fp_Accept)), &resource))
        ::g::Uno::UX::Property1__Set_fn(uPtr(Target()), (::g::Fuse::Resources::IResourceConverter::Convert_ex(uInterface(uPtr(_converter), __types[1]), resource, &ret2), ret2), NULL);
}

// public generated Uno.UX.Property<T> get_Target() [instance] :3532
::g::Uno::UX::Property1* ResourceBinding::Target()
{
    return _Target;
}

// private generated void set_Target(Uno.UX.Property<T> value) [instance] :3532
void ResourceBinding::Target(::g::Uno::UX::Property1* value)
{
    _Target = value;
}

// public ResourceBinding New(Uno.UX.Property<T> target, string key) [static] :3538
ResourceBinding* ResourceBinding::New1(uType* __type, ::g::Uno::UX::Property1* target, uString* key)
{
    ResourceBinding* obj1 = (ResourceBinding*)uNew(__type);
    obj1->ctor_1(target, key);
    return obj1;
}
// }

// /Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Nodes/0.47.7/$.uno
// -------------------------------------------------------------------------------------

// public sealed class ResourceBool :3642
// {
static void ResourceBool_build(uType* type)
{
    type->SetBase(::g::Fuse::Resources::ResourceSetter_typeof()->MakeType(::g::Uno::Bool_typeof(), NULL));
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Node_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Node_type, interface1),
        ::g::Fuse::IProperties_typeof(), offsetof(::g::Fuse::Node_type, interface2),
        ::g::Fuse::INotifyUnrooted_typeof(), offsetof(::g::Fuse::Node_type, interface3),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Node_type, interface4),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Node_type, interface5));
    type->SetFields(15);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)ResourceBool__New2_fn, 0, true, type, 0));
}

::g::Fuse::Node_type* ResourceBool_typeof()
{
    static uSStrong< ::g::Fuse::Node_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Resources::ResourceSetter_typeof();
    options.FieldCount = 15;
    options.InterfaceCount = 6;
    options.ObjectSize = sizeof(ResourceBool);
    options.TypeSize = sizeof(::g::Fuse::Node_type);
    type = (::g::Fuse::Node_type*)uClassType::New("Fuse.Resources.ResourceBool", options);
    type->fp_build_ = ResourceBool_build;
    type->fp_ctor_ = (void*)ResourceBool__New2_fn;
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

// public generated ResourceBool() :3642
void ResourceBool__ctor_4_fn(ResourceBool* __this)
{
    __this->ctor_4();
}

// public generated ResourceBool New() :3642
void ResourceBool__New2_fn(ResourceBool** __retval)
{
    *__retval = ResourceBool::New2();
}

// public generated ResourceBool() [instance] :3642
void ResourceBool::ctor_4()
{
    ctor_3();
}

// public generated ResourceBool New() [static] :3642
ResourceBool* ResourceBool::New2()
{
    ResourceBool* obj1 = (ResourceBool*)uNew(ResourceBool_typeof());
    obj1->ctor_4();
    return obj1;
}
// }

// /Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Nodes/0.47.7/$.uno
// -------------------------------------------------------------------------------------

// internal static class ResourceConverters :3476
// {
// static ResourceConverters() :3476
static void ResourceConverters__cctor__fn(uType* __type)
{
    ResourceConverters::_converters_ = ((::g::Uno::Collections::Dictionary*)::g::Uno::Collections::Dictionary::New1(::TYPES[33/*Uno.Collections.Dictionary<Uno.Type, object>*/]));
}

static void ResourceConverters_build(uType* type)
{
    ::TYPES[33] = ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Uno::Type_typeof(), uObject_typeof(), NULL);
    ::TYPES[34] = ::g::Uno::Type_typeof();
    ::TYPES[35] = ::g::Fuse::Resources::GenericResourceConverter_typeof();
    type->MethodTypes[0]->SetPrecalc(
        ::TYPES[35/*Fuse.Resources.GenericResourceConverter`1*/]->MakeType(type->MethodTypes[0]->U(0), NULL));
    type->SetFields(0,
        ::TYPES[33/*Uno.Collections.Dictionary<Uno.Type, object>*/], (uintptr_t)&::g::Fuse::Resources::ResourceConverters::_converters_, uFieldFlagsStatic);
}

uClassType* ResourceConverters_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.MethodTypeCount = 1;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Resources.ResourceConverters", options);
    type->MethodTypes[0] = type->NewMethodType(1, 1);
    type->fp_build_ = ResourceConverters_build;
    type->fp_cctor_ = ResourceConverters__cctor__fn;
    return type;
}

// public static Fuse.Resources.IResourceConverter<T> Get<T>() :3480
void ResourceConverters__Get_fn(uType* __type, uObject** __retval)
{
    *__retval = ResourceConverters::Get(__type);
}

uSStrong< ::g::Uno::Collections::Dictionary*> ResourceConverters::_converters_;

// public static Fuse.Resources.IResourceConverter<T> Get<T>() [static] :3480
uObject* ResourceConverters::Get(uType* __type)
{
    uType* __types[] = {
        __type->Precalced(0/*Fuse.Resources.GenericResourceConverter<T>*/),
    };
    uStackFrame __("Fuse.Resources.ResourceConverters", "Get`1()");
    __type->Base->Init();
    bool ret1;
    uObject* converter;

    if (!(::g::Uno::Collections::Dictionary__TryGetValue_fn(uPtr(ResourceConverters::_converters()), __type->U(0), (void**)(&converter), &ret1), ret1))
    {
        if (::g::Uno::Type::op_Equality(__type->U(0), ::TYPES[25/*float*/]))
            converter = ::g::Fuse::Resources::FloatResourceConverter::New1();
        else if (::g::Uno::Type::op_Equality(__type->U(0), ::TYPES[27/*double*/]))
            converter = ::g::Fuse::Resources::DoubleResourceConverter::New1();
        else if (::g::Uno::Type::op_Equality(__type->U(0), ::TYPES[26/*int*/]))
            converter = ::g::Fuse::Resources::IntResourceConverter::New1();
        else
            converter = (::g::Fuse::Resources::GenericResourceConverter*)::g::Fuse::Resources::GenericResourceConverter::New1(__types[0]);

        ::g::Uno::Collections::Dictionary__Add_fn(uPtr(ResourceConverters::_converters()), __type->U(0), converter);
    }

    return (uObject*)converter;
}
// }

// /Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Nodes/0.47.7/$.uno
// -------------------------------------------------------------------------------------

// public sealed class ResourceFloat :3643
// {
static void ResourceFloat_build(uType* type)
{
    type->SetBase(::g::Fuse::Resources::ResourceSetter_typeof()->MakeType(::g::Uno::Float_typeof(), NULL));
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Node_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Node_type, interface1),
        ::g::Fuse::IProperties_typeof(), offsetof(::g::Fuse::Node_type, interface2),
        ::g::Fuse::INotifyUnrooted_typeof(), offsetof(::g::Fuse::Node_type, interface3),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Node_type, interface4),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Node_type, interface5));
    type->SetFields(15);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)ResourceFloat__New2_fn, 0, true, type, 0));
}

::g::Fuse::Node_type* ResourceFloat_typeof()
{
    static uSStrong< ::g::Fuse::Node_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Resources::ResourceSetter_typeof();
    options.FieldCount = 15;
    options.InterfaceCount = 6;
    options.ObjectSize = sizeof(ResourceFloat);
    options.TypeSize = sizeof(::g::Fuse::Node_type);
    type = (::g::Fuse::Node_type*)uClassType::New("Fuse.Resources.ResourceFloat", options);
    type->fp_build_ = ResourceFloat_build;
    type->fp_ctor_ = (void*)ResourceFloat__New2_fn;
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

// public generated ResourceFloat() :3643
void ResourceFloat__ctor_4_fn(ResourceFloat* __this)
{
    __this->ctor_4();
}

// public generated ResourceFloat New() :3643
void ResourceFloat__New2_fn(ResourceFloat** __retval)
{
    *__retval = ResourceFloat::New2();
}

// public generated ResourceFloat() [instance] :3643
void ResourceFloat::ctor_4()
{
    ctor_3();
}

// public generated ResourceFloat New() [static] :3643
ResourceFloat* ResourceFloat::New2()
{
    ResourceFloat* obj1 = (ResourceFloat*)uNew(ResourceFloat_typeof());
    obj1->ctor_4();
    return obj1;
}
// }

// /Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Nodes/0.47.7/$.uno
// -------------------------------------------------------------------------------------

// public sealed class ResourceFloat2 :3644
// {
static void ResourceFloat2_build(uType* type)
{
    type->SetBase(::g::Fuse::Resources::ResourceSetter_typeof()->MakeType(::g::Uno::Float2_typeof(), NULL));
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Node_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Node_type, interface1),
        ::g::Fuse::IProperties_typeof(), offsetof(::g::Fuse::Node_type, interface2),
        ::g::Fuse::INotifyUnrooted_typeof(), offsetof(::g::Fuse::Node_type, interface3),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Node_type, interface4),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Node_type, interface5));
    type->SetFields(15);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)ResourceFloat2__New2_fn, 0, true, type, 0));
}

::g::Fuse::Node_type* ResourceFloat2_typeof()
{
    static uSStrong< ::g::Fuse::Node_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Resources::ResourceSetter_typeof();
    options.FieldCount = 15;
    options.InterfaceCount = 6;
    options.ObjectSize = sizeof(ResourceFloat2);
    options.TypeSize = sizeof(::g::Fuse::Node_type);
    type = (::g::Fuse::Node_type*)uClassType::New("Fuse.Resources.ResourceFloat2", options);
    type->fp_build_ = ResourceFloat2_build;
    type->fp_ctor_ = (void*)ResourceFloat2__New2_fn;
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

// public generated ResourceFloat2() :3644
void ResourceFloat2__ctor_4_fn(ResourceFloat2* __this)
{
    __this->ctor_4();
}

// public generated ResourceFloat2 New() :3644
void ResourceFloat2__New2_fn(ResourceFloat2** __retval)
{
    *__retval = ResourceFloat2::New2();
}

// public generated ResourceFloat2() [instance] :3644
void ResourceFloat2::ctor_4()
{
    ctor_3();
}

// public generated ResourceFloat2 New() [static] :3644
ResourceFloat2* ResourceFloat2::New2()
{
    ResourceFloat2* obj1 = (ResourceFloat2*)uNew(ResourceFloat2_typeof());
    obj1->ctor_4();
    return obj1;
}
// }

// /Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Nodes/0.47.7/$.uno
// -------------------------------------------------------------------------------------

// public sealed class ResourceFloat3 :3645
// {
static void ResourceFloat3_build(uType* type)
{
    type->SetBase(::g::Fuse::Resources::ResourceSetter_typeof()->MakeType(::g::Uno::Float3_typeof(), NULL));
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Node_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Node_type, interface1),
        ::g::Fuse::IProperties_typeof(), offsetof(::g::Fuse::Node_type, interface2),
        ::g::Fuse::INotifyUnrooted_typeof(), offsetof(::g::Fuse::Node_type, interface3),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Node_type, interface4),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Node_type, interface5));
    type->SetFields(15);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)ResourceFloat3__New2_fn, 0, true, type, 0));
}

::g::Fuse::Node_type* ResourceFloat3_typeof()
{
    static uSStrong< ::g::Fuse::Node_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Resources::ResourceSetter_typeof();
    options.FieldCount = 15;
    options.InterfaceCount = 6;
    options.ObjectSize = sizeof(ResourceFloat3);
    options.TypeSize = sizeof(::g::Fuse::Node_type);
    type = (::g::Fuse::Node_type*)uClassType::New("Fuse.Resources.ResourceFloat3", options);
    type->fp_build_ = ResourceFloat3_build;
    type->fp_ctor_ = (void*)ResourceFloat3__New2_fn;
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

// public generated ResourceFloat3() :3645
void ResourceFloat3__ctor_4_fn(ResourceFloat3* __this)
{
    __this->ctor_4();
}

// public generated ResourceFloat3 New() :3645
void ResourceFloat3__New2_fn(ResourceFloat3** __retval)
{
    *__retval = ResourceFloat3::New2();
}

// public generated ResourceFloat3() [instance] :3645
void ResourceFloat3::ctor_4()
{
    ctor_3();
}

// public generated ResourceFloat3 New() [static] :3645
ResourceFloat3* ResourceFloat3::New2()
{
    ResourceFloat3* obj1 = (ResourceFloat3*)uNew(ResourceFloat3_typeof());
    obj1->ctor_4();
    return obj1;
}
// }

// /Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Nodes/0.47.7/$.uno
// -------------------------------------------------------------------------------------

// public sealed class ResourceFloat4 :3646
// {
static void ResourceFloat4_build(uType* type)
{
    type->SetBase(::g::Fuse::Resources::ResourceSetter_typeof()->MakeType(::g::Uno::Float4_typeof(), NULL));
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Node_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Node_type, interface1),
        ::g::Fuse::IProperties_typeof(), offsetof(::g::Fuse::Node_type, interface2),
        ::g::Fuse::INotifyUnrooted_typeof(), offsetof(::g::Fuse::Node_type, interface3),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Node_type, interface4),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Node_type, interface5));
    type->SetFields(15);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)ResourceFloat4__New2_fn, 0, true, type, 0));
}

::g::Fuse::Node_type* ResourceFloat4_typeof()
{
    static uSStrong< ::g::Fuse::Node_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Resources::ResourceSetter_typeof();
    options.FieldCount = 15;
    options.InterfaceCount = 6;
    options.ObjectSize = sizeof(ResourceFloat4);
    options.TypeSize = sizeof(::g::Fuse::Node_type);
    type = (::g::Fuse::Node_type*)uClassType::New("Fuse.Resources.ResourceFloat4", options);
    type->fp_build_ = ResourceFloat4_build;
    type->fp_ctor_ = (void*)ResourceFloat4__New2_fn;
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

// public generated ResourceFloat4() :3646
void ResourceFloat4__ctor_4_fn(ResourceFloat4* __this)
{
    __this->ctor_4();
}

// public generated ResourceFloat4 New() :3646
void ResourceFloat4__New2_fn(ResourceFloat4** __retval)
{
    *__retval = ResourceFloat4::New2();
}

// public generated ResourceFloat4() [instance] :3646
void ResourceFloat4::ctor_4()
{
    ctor_3();
}

// public generated ResourceFloat4 New() [static] :3646
ResourceFloat4* ResourceFloat4::New2()
{
    ResourceFloat4* obj1 = (ResourceFloat4*)uNew(ResourceFloat4_typeof());
    obj1->ctor_4();
    return obj1;
}
// }

// /Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Nodes/0.47.7/$.uno
// -------------------------------------------------------------------------------------

// public sealed class ResourceObject :3641
// {
static void ResourceObject_build(uType* type)
{
    type->SetBase(::g::Fuse::Resources::ResourceSetter_typeof()->MakeType(uObject_typeof(), NULL));
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Node_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Node_type, interface1),
        ::g::Fuse::IProperties_typeof(), offsetof(::g::Fuse::Node_type, interface2),
        ::g::Fuse::INotifyUnrooted_typeof(), offsetof(::g::Fuse::Node_type, interface3),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Node_type, interface4),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Node_type, interface5));
    type->SetFields(15);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)ResourceObject__New2_fn, 0, true, type, 0));
}

::g::Fuse::Node_type* ResourceObject_typeof()
{
    static uSStrong< ::g::Fuse::Node_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Resources::ResourceSetter_typeof();
    options.FieldCount = 15;
    options.InterfaceCount = 6;
    options.ObjectSize = sizeof(ResourceObject);
    options.TypeSize = sizeof(::g::Fuse::Node_type);
    type = (::g::Fuse::Node_type*)uClassType::New("Fuse.Resources.ResourceObject", options);
    type->fp_build_ = ResourceObject_build;
    type->fp_ctor_ = (void*)ResourceObject__New2_fn;
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

// public generated ResourceObject() :3641
void ResourceObject__ctor_4_fn(ResourceObject* __this)
{
    __this->ctor_4();
}

// public generated ResourceObject New() :3641
void ResourceObject__New2_fn(ResourceObject** __retval)
{
    *__retval = ResourceObject::New2();
}

// public generated ResourceObject() [instance] :3641
void ResourceObject::ctor_4()
{
    ctor_3();
}

// public generated ResourceObject New() [static] :3641
ResourceObject* ResourceObject::New2()
{
    ResourceObject* obj1 = (ResourceObject*)uNew(ResourceObject_typeof());
    obj1->ctor_4();
    return obj1;
}
// }

// /Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Common/0.47.7/resources/$.uno
// ------------------------------------------------------------------------------------------------

// public static class ResourceRegistry :371
// {
// static ResourceRegistry() :371
static void ResourceRegistry__cctor__fn(uType* __type)
{
    ResourceRegistry::_handlers_ = ((::g::Uno::Collections::Dictionary*)::g::Uno::Collections::Dictionary::New1(::TYPES[36/*Uno.Collections.Dictionary<string, Uno.Collections.List<Uno.Action>>*/]));
}

static void ResourceRegistry_build(uType* type)
{
    ::TYPES[36] = ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Uno::String_typeof(), ::g::Uno::Collections::List_typeof()->MakeType(::g::Uno::Action_typeof(), NULL), NULL);
    ::TYPES[37] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Uno::Action_typeof(), NULL);
    ::TYPES[38] = ::g::Uno::Collections::List__Enumerator_typeof()->MakeType(::g::Uno::Action_typeof(), NULL);
    type->SetFields(0,
        ::TYPES[36/*Uno.Collections.Dictionary<string, Uno.Collections.List<Uno.Action>>*/], (uintptr_t)&::g::Fuse::Resources::ResourceRegistry::_handlers_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(3,
        new uFunction("AddResourceChangedHandler", NULL, (void*)ResourceRegistry__AddResourceChangedHandler_fn, 0, true, uVoid_typeof(), 2, ::g::Uno::String_typeof(), ::g::Uno::Action_typeof()),
        new uFunction("NotifyResourceChanged", NULL, (void*)ResourceRegistry__NotifyResourceChanged_fn, 0, true, uVoid_typeof(), 1, ::g::Uno::String_typeof()),
        new uFunction("RemoveResourceChangedHandler", NULL, (void*)ResourceRegistry__RemoveResourceChangedHandler_fn, 0, true, uVoid_typeof(), 2, ::g::Uno::String_typeof(), ::g::Uno::Action_typeof()));
}

uClassType* ResourceRegistry_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Resources.ResourceRegistry", options);
    type->fp_build_ = ResourceRegistry_build;
    type->fp_cctor_ = ResourceRegistry__cctor__fn;
    return type;
}

// public static void AddResourceChangedHandler(string key, Uno.Action handler) :375
void ResourceRegistry__AddResourceChangedHandler_fn(uString* key, uDelegate* handler)
{
    ResourceRegistry::AddResourceChangedHandler(key, handler);
}

// public static void NotifyResourceChanged(string key) :391
void ResourceRegistry__NotifyResourceChanged_fn(uString* key)
{
    ResourceRegistry::NotifyResourceChanged(key);
}

// public static void RemoveResourceChangedHandler(string key, Uno.Action handler) :385
void ResourceRegistry__RemoveResourceChangedHandler_fn(uString* key, uDelegate* handler)
{
    ResourceRegistry::RemoveResourceChangedHandler(key, handler);
}

uSStrong< ::g::Uno::Collections::Dictionary*> ResourceRegistry::_handlers_;

// public static void AddResourceChangedHandler(string key, Uno.Action handler) [static] :375
void ResourceRegistry::AddResourceChangedHandler(uString* key, uDelegate* handler)
{
    uStackFrame __("Fuse.Resources.ResourceRegistry", "AddResourceChangedHandler(string,Uno.Action)");
    ResourceRegistry_typeof()->Init();
    bool ret2;
    ::g::Uno::Collections::List* ret3;

    if (!(::g::Uno::Collections::Dictionary__ContainsKey_fn(uPtr(ResourceRegistry::_handlers()), key, &ret2), ret2))
        ::g::Uno::Collections::Dictionary__Add_fn(uPtr(ResourceRegistry::_handlers()), key, (::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[37/*Uno.Collections.List<Uno.Action>*/]));

    ::g::Uno::Collections::List__Add_fn(uPtr((::g::Uno::Collections::Dictionary__get_Item_fn(uPtr(ResourceRegistry::_handlers()), key, &ret3), ret3)), handler);
}

// public static void NotifyResourceChanged(string key) [static] :391
void ResourceRegistry::NotifyResourceChanged(uString* key)
{
    uStackFrame __("Fuse.Resources.ResourceRegistry", "NotifyResourceChanged(string)");
    ResourceRegistry_typeof()->Init();
    bool ret4;
    ::g::Uno::Collections::List__Enumerator<uStrong<uDelegate*> > ret5;
    ::g::Uno::Collections::List* list;

    if ((::g::Uno::Collections::Dictionary__TryGetValue_fn(uPtr(ResourceRegistry::_handlers()), key, (void**)(&list), &ret4), ret4))

        for (::g::Uno::Collections::List__Enumerator<uStrong<uDelegate*> > enum1 = (::g::Uno::Collections::List__GetEnumerator_fn(uPtr(list), &ret5), ret5); enum1.MoveNext(::TYPES[38/*Uno.Collections.List<Uno.Action>.Enumerator*/]); )
        {
            uDelegate* h = enum1.Current(::TYPES[38/*Uno.Collections.List<Uno.Action>.Enumerator*/]);
            uPtr(h)->InvokeVoid();
        }
}

// public static void RemoveResourceChangedHandler(string key, Uno.Action handler) [static] :385
void ResourceRegistry::RemoveResourceChangedHandler(uString* key, uDelegate* handler)
{
    uStackFrame __("Fuse.Resources.ResourceRegistry", "RemoveResourceChangedHandler(string,Uno.Action)");
    ResourceRegistry_typeof()->Init();
    bool ret6;
    bool ret7;
    ::g::Uno::Collections::List* ret8;

    if (!(::g::Uno::Collections::Dictionary__ContainsKey_fn(uPtr(ResourceRegistry::_handlers()), key, &ret6), ret6))
        U_THROW(::g::Uno::Exception::New1());

    ::g::Uno::Collections::List__Remove_fn(uPtr((::g::Uno::Collections::Dictionary__get_Item_fn(uPtr(ResourceRegistry::_handlers()), key, &ret8), ret8)), handler, &ret7);
}
// }

// /Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Nodes/0.47.7/$.uno
// -------------------------------------------------------------------------------------

// public abstract class ResourceSetter<T> :3598
// {
static void ResourceSetter_build(uType* type)
{
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Node_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Node_type, interface1),
        ::g::Fuse::IProperties_typeof(), offsetof(::g::Fuse::Node_type, interface2),
        ::g::Fuse::INotifyUnrooted_typeof(), offsetof(::g::Fuse::Node_type, interface3),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Node_type, interface4),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Node_type, interface5));
    type->SetFields(13,
        ::g::Uno::String_typeof(), offsetof(::g::Fuse::Resources::ResourceSetter, _key), 0,
        type->T(0), (uintptr_t)0, uFieldFlagsConstrained);
    type->Reflection.SetFunctions(4,
        new uFunction("get_Key", NULL, (void*)ResourceSetter__get_Key_fn, 0, false, ::g::Uno::String_typeof(), 0),
        new uFunction("set_Key", NULL, (void*)ResourceSetter__set_Key_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::String_typeof()),
        new uFunction("get_Value", NULL, (void*)ResourceSetter__get_Value_fn, 0, false, type->T(0), 0),
        new uFunction("set_Value", NULL, (void*)ResourceSetter__set_Value_fn, 0, false, uVoid_typeof(), 1, type->T(0)));
}

::g::Fuse::Node_type* ResourceSetter_typeof()
{
    static uSStrong< ::g::Fuse::Node_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Behavior_typeof();
    options.FieldCount = 15;
    options.GenericCount = 1;
    options.InterfaceCount = 6;
    options.ObjectSize = sizeof(ResourceSetter);
    options.TypeSize = sizeof(::g::Fuse::Node_type);
    type = (::g::Fuse::Node_type*)uClassType::New("Fuse.Resources.ResourceSetter`1", options);
    type->fp_build_ = ResourceSetter_build;
    type->fp_OnRooted = (void(*)(::g::Fuse::Node*))ResourceSetter__OnRooted_fn;
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

// protected generated ResourceSetter() :3598
void ResourceSetter__ctor_3_fn(ResourceSetter* __this)
{
    __this->ctor_3();
}

// public string get_Key() :3603
void ResourceSetter__get_Key_fn(ResourceSetter* __this, uString** __retval)
{
    *__retval = __this->Key();
}

// public void set_Key(string value) :3604
void ResourceSetter__set_Key_fn(ResourceSetter* __this, uString* value)
{
    __this->Key(value);
}

// private void OnChanged() :3631
void ResourceSetter__OnChanged_fn(ResourceSetter* __this)
{
    __this->OnChanged();
}

// protected override sealed void OnRooted() :3625
void ResourceSetter__OnRooted_fn(ResourceSetter* __this)
{
    uStackFrame __("Fuse.Resources.ResourceSetter`1", "OnRooted()");
    ::g::Fuse::Node__OnRooted_fn(__this);
    __this->OnChanged();
}

// public T get_Value() :3614
void ResourceSetter__get_Value_fn(ResourceSetter* __this, uTRef __retval)
{
    return __retval.Store(__this->_value()), void();
}

// public void set_Value(T value) :3615
void ResourceSetter__set_Value_fn(ResourceSetter* __this, void* value)
{
    uStackFrame __("Fuse.Resources.ResourceSetter`1", "set_Value(T)");

    if (!::g::Uno::Object::Equals1(uBoxPtr(__this->__type->GetBase(ResourceSetter_typeof())->T(0), __this->_value()), uBoxPtr(__this->__type->GetBase(ResourceSetter_typeof())->T(0), value)))
    {
        __this->_value() = value;
        __this->OnChanged();
    }
}

// protected generated ResourceSetter() [instance] :3598
void ResourceSetter::ctor_3()
{
    ctor_2();
}

// public string get_Key() [instance] :3603
uString* ResourceSetter::Key()
{
    return _key;
}

// public void set_Key(string value) [instance] :3604
void ResourceSetter::Key(uString* value)
{
    uStackFrame __("Fuse.Resources.ResourceSetter`1", "set_Key(string)");
    _key = value;
    OnChanged();
}

// private void OnChanged() [instance] :3631
void ResourceSetter::OnChanged()
{
    uStackFrame __("Fuse.Resources.ResourceSetter`1", "OnChanged()");

    if ((Parent() != NULL) && ::g::Uno::String::op_Inequality(_key, NULL))
        uPtr(Parent())->SetResource(_key, uBoxPtr(__type->GetBase(ResourceSetter_typeof())->T(0), _value()));
}
// }

// /Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Nodes/0.47.7/$.uno
// -------------------------------------------------------------------------------------

// public sealed class ResourceString :3640
// {
static void ResourceString_build(uType* type)
{
    type->SetBase(::g::Fuse::Resources::ResourceSetter_typeof()->MakeType(::g::Uno::String_typeof(), NULL));
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Node_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Node_type, interface1),
        ::g::Fuse::IProperties_typeof(), offsetof(::g::Fuse::Node_type, interface2),
        ::g::Fuse::INotifyUnrooted_typeof(), offsetof(::g::Fuse::Node_type, interface3),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Node_type, interface4),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Node_type, interface5));
    type->SetFields(15);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)ResourceString__New2_fn, 0, true, type, 0));
}

::g::Fuse::Node_type* ResourceString_typeof()
{
    static uSStrong< ::g::Fuse::Node_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Resources::ResourceSetter_typeof();
    options.FieldCount = 15;
    options.InterfaceCount = 6;
    options.ObjectSize = sizeof(ResourceString);
    options.TypeSize = sizeof(::g::Fuse::Node_type);
    type = (::g::Fuse::Node_type*)uClassType::New("Fuse.Resources.ResourceString", options);
    type->fp_build_ = ResourceString_build;
    type->fp_ctor_ = (void*)ResourceString__New2_fn;
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

// public generated ResourceString() :3640
void ResourceString__ctor_4_fn(ResourceString* __this)
{
    __this->ctor_4();
}

// public generated ResourceString New() :3640
void ResourceString__New2_fn(ResourceString** __retval)
{
    *__retval = ResourceString::New2();
}

// public generated ResourceString() [instance] :3640
void ResourceString::ctor_4()
{
    ctor_3();
}

// public generated ResourceString New() [static] :3640
ResourceString* ResourceString::New2()
{
    ResourceString* obj1 = (ResourceString*)uNew(ResourceString_typeof());
    obj1->ctor_4();
    return obj1;
}
// }

// /Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Common/0.47.7/resources/$.uno
// ------------------------------------------------------------------------------------------------

// internal sealed class RetainDisposalPolicy :164
// {
static void RetainDisposalPolicy_build(uType* type)
{
}

::g::Fuse::Resources::DisposalPolicy_type* RetainDisposalPolicy_typeof()
{
    static uSStrong< ::g::Fuse::Resources::DisposalPolicy_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Resources::DisposalPolicy_typeof();
    options.ObjectSize = sizeof(RetainDisposalPolicy);
    options.TypeSize = sizeof(::g::Fuse::Resources::DisposalPolicy_type);
    type = (::g::Fuse::Resources::DisposalPolicy_type*)uClassType::New("Fuse.Resources.RetainDisposalPolicy", options);
    type->fp_build_ = RetainDisposalPolicy_build;
    type->fp_ctor_ = (void*)RetainDisposalPolicy__New1_fn;
    type->fp_CanDispose = (void(*)(::g::Fuse::Resources::DisposalPolicy*, int*, bool*, bool*))RetainDisposalPolicy__CanDispose_fn;
    type->fp_Clone = (void(*)(::g::Fuse::Resources::DisposalPolicy*, ::g::Fuse::Resources::DisposalPolicy**))RetainDisposalPolicy__Clone_fn;
    type->fp_MarkUsed = (void(*)(::g::Fuse::Resources::DisposalPolicy*))RetainDisposalPolicy__MarkUsed_fn;
    return type;
}

// public generated RetainDisposalPolicy() :164
void RetainDisposalPolicy__ctor_1_fn(RetainDisposalPolicy* __this)
{
    __this->ctor_1();
}

// public override sealed bool CanDispose(Fuse.Resources.DisposalRequest dr, bool pinned) :167
void RetainDisposalPolicy__CanDispose_fn(RetainDisposalPolicy* __this, int* dr, bool* pinned, bool* __retval)
{
    return *__retval = false, void();
}

// public override sealed Fuse.Resources.DisposalPolicy Clone() :168
void RetainDisposalPolicy__Clone_fn(RetainDisposalPolicy* __this, ::g::Fuse::Resources::DisposalPolicy** __retval)
{
    return *__retval = RetainDisposalPolicy::New1(), void();
}

// public override sealed void MarkUsed() :166
void RetainDisposalPolicy__MarkUsed_fn(RetainDisposalPolicy* __this)
{
}

// public generated RetainDisposalPolicy New() :164
void RetainDisposalPolicy__New1_fn(RetainDisposalPolicy** __retval)
{
    *__retval = RetainDisposalPolicy::New1();
}

// public generated RetainDisposalPolicy() [instance] :164
void RetainDisposalPolicy::ctor_1()
{
    ctor_();
}

// public generated RetainDisposalPolicy New() [static] :164
RetainDisposalPolicy* RetainDisposalPolicy::New1()
{
    RetainDisposalPolicy* obj1 = (RetainDisposalPolicy*)uNew(RetainDisposalPolicy_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// /Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Common/0.47.7/resources/$.uno
// ------------------------------------------------------------------------------------------------

// internal sealed class SystemFileSource :409
// {
static void SystemFileSource_build(uType* type)
{
    type->SetFields(2);
}

::g::Uno::UX::FileSource_type* SystemFileSource_typeof()
{
    static uSStrong< ::g::Uno::UX::FileSource_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::FileSource_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(SystemFileSource);
    options.TypeSize = sizeof(::g::Uno::UX::FileSource_type);
    type = (::g::Uno::UX::FileSource_type*)uClassType::New("Fuse.Resources.SystemFileSource", options);
    type->fp_build_ = SystemFileSource_build;
    type->fp_OpenRead = (void(*)(::g::Uno::UX::FileSource*, ::g::Uno::IO::Stream**))SystemFileSource__OpenRead_fn;
    return type;
}

// public SystemFileSource(string file) :411
void SystemFileSource__ctor_1_fn(SystemFileSource* __this, uString* file)
{
    __this->ctor_1(file);
}

// public SystemFileSource New(string file) :411
void SystemFileSource__New1_fn(uString* file, SystemFileSource** __retval)
{
    *__retval = SystemFileSource::New1(file);
}

// public override sealed Uno.IO.Stream OpenRead() :416
void SystemFileSource__OpenRead_fn(SystemFileSource* __this, ::g::Uno::IO::Stream** __retval)
{
    return *__retval = ::g::Uno::IO::File::OpenRead(__this->Name), void();
}

// public SystemFileSource(string file) [instance] :411
void SystemFileSource::ctor_1(uString* file)
{
    uStackFrame __("Fuse.Resources.SystemFileSource", ".ctor(string)");
    ctor_(file);
}

// public SystemFileSource New(string file) [static] :411
SystemFileSource* SystemFileSource::New1(uString* file)
{
    SystemFileSource* obj1 = (SystemFileSource*)uNew(SystemFileSource_typeof());
    obj1->ctor_1(file);
    return obj1;
}
// }

// /Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Elements/0.47.7/resources/$.uno
// --------------------------------------------------------------------------------------------------

// public sealed class TextureImageSource :1197
// {
static void TextureImageSource_build(uType* type)
{
    type->SetFields(5,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Resources::TextureImageSource, _density), 0,
        ::g::Uno::Graphics::Texture2D_typeof(), offsetof(::g::Fuse::Resources::TextureImageSource, _texture), 0);
    type->Reflection.SetFunctions(5,
        new uFunction("get_Density", NULL, (void*)TextureImageSource__get_Density_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("set_Density", NULL, (void*)TextureImageSource__set_Density_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction(".ctor", NULL, (void*)TextureImageSource__New2_fn, 0, true, type, 0),
        new uFunction("get_Texture", NULL, (void*)TextureImageSource__get_Texture_fn, 0, false, ::g::Uno::Graphics::Texture2D_typeof(), 0),
        new uFunction("set_Texture", NULL, (void*)TextureImageSource__set_Texture_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Graphics::Texture2D_typeof()));
}

::g::Fuse::Resources::ImageSource_type* TextureImageSource_typeof()
{
    static uSStrong< ::g::Fuse::Resources::ImageSource_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Resources::ImageSource_typeof();
    options.FieldCount = 7;
    options.ObjectSize = sizeof(TextureImageSource);
    options.TypeSize = sizeof(::g::Fuse::Resources::ImageSource_type);
    type = (::g::Fuse::Resources::ImageSource_type*)uClassType::New("Fuse.Resources.TextureImageSource", options);
    type->fp_build_ = TextureImageSource_build;
    type->fp_ctor_ = (void*)TextureImageSource__New2_fn;
    type->fp_GetTexture = (void(*)(::g::Fuse::Resources::ImageSource*, ::g::Uno::Graphics::Texture2D**))TextureImageSource__GetTexture_fn;
    type->fp_get_PixelSize = (void(*)(::g::Fuse::Resources::ImageSource*, ::g::Uno::Int2*))TextureImageSource__get_PixelSize_fn;
    type->fp_get_Size = (void(*)(::g::Fuse::Resources::ImageSource*, ::g::Uno::Float2*))TextureImageSource__get_Size_fn;
    type->fp_get_SizeDensity = (void(*)(::g::Fuse::Resources::ImageSource*, float*))TextureImageSource__get_SizeDensity_fn;
    type->fp_get_State = (void(*)(::g::Fuse::Resources::ImageSource*, int*))TextureImageSource__get_State_fn;
    return type;
}

// public generated TextureImageSource() :1197
void TextureImageSource__ctor_2_fn(TextureImageSource* __this)
{
    __this->ctor_2();
}

// public float get_Density() :1219
void TextureImageSource__get_Density_fn(TextureImageSource* __this, float* __retval)
{
    *__retval = __this->Density();
}

// public void set_Density(float value) :1220
void TextureImageSource__set_Density_fn(TextureImageSource* __this, float* value)
{
    __this->Density(*value);
}

// public override sealed texture2D GetTexture() :1265
void TextureImageSource__GetTexture_fn(TextureImageSource* __this, ::g::Uno::Graphics::Texture2D** __retval)
{
    return *__retval = __this->_texture, void();
}

// public generated TextureImageSource New() :1197
void TextureImageSource__New2_fn(TextureImageSource** __retval)
{
    *__retval = TextureImageSource::New2();
}

// public override sealed int2 get_PixelSize() :1247
void TextureImageSource__get_PixelSize_fn(TextureImageSource* __this, ::g::Uno::Int2* __retval)
{
    uStackFrame __("Fuse.Resources.TextureImageSource", "get_PixelSize()");

    if (__this->_texture != NULL)
        return *__retval = uPtr(__this->_texture)->Size(), void();

    return *__retval = ::g::Uno::Int2__New1(0), void();
}

// public override sealed float2 get_Size() :1237
void TextureImageSource__get_Size_fn(TextureImageSource* __this, ::g::Uno::Float2* __retval)
{
    uStackFrame __("Fuse.Resources.TextureImageSource", "get_Size()");

    if (__this->_texture != NULL)
        return *__retval = ::g::Uno::Float2__op_Division1(::g::Uno::Float2__New2((float)uPtr(__this->_texture)->Size().X, (float)uPtr(__this->_texture)->Size().Y), __this->_density), void();

    return *__retval = ::g::Uno::Float2__New1(0.0f), void();
}

// public override sealed float get_SizeDensity() :1232
void TextureImageSource__get_SizeDensity_fn(TextureImageSource* __this, float* __retval)
{
    return *__retval = __this->Density(), void();
}

// public override sealed Fuse.Resources.ImageSourceState get_State() :1257
void TextureImageSource__get_State_fn(TextureImageSource* __this, int* __retval)
{
    if (__this->_texture != NULL)
        return *__retval = 1, void();

    return *__retval = 0, void();
}

// public texture2D get_Texture() :1203
void TextureImageSource__get_Texture_fn(TextureImageSource* __this, ::g::Uno::Graphics::Texture2D** __retval)
{
    *__retval = __this->Texture();
}

// public void set_Texture(texture2D value) :1204
void TextureImageSource__set_Texture_fn(TextureImageSource* __this, ::g::Uno::Graphics::Texture2D* value)
{
    __this->Texture(value);
}

// public generated TextureImageSource() [instance] :1197
void TextureImageSource::ctor_2()
{
    _density = 1.0f;
    ctor_1();
}

// public float get_Density() [instance] :1219
float TextureImageSource::Density()
{
    return _density;
}

// public void set_Density(float value) [instance] :1220
void TextureImageSource::Density(float value)
{
    uStackFrame __("Fuse.Resources.TextureImageSource", "set_Density(float)");

    if (_density != value)
    {
        _density = value;
        OnChanged();
    }
}

// public texture2D get_Texture() [instance] :1203
::g::Uno::Graphics::Texture2D* TextureImageSource::Texture()
{
    return _texture;
}

// public void set_Texture(texture2D value) [instance] :1204
void TextureImageSource::Texture(::g::Uno::Graphics::Texture2D* value)
{
    uStackFrame __("Fuse.Resources.TextureImageSource", "set_Texture(texture2D)");

    if (_texture != value)
    {
        _texture = value;
        OnChanged();
    }
}

// public generated TextureImageSource New() [static] :1197
TextureImageSource* TextureImageSource::New2()
{
    TextureImageSource* obj1 = (TextureImageSource*)uNew(TextureImageSource_typeof());
    obj1->ctor_2();
    return obj1;
}
// }

}}} // ::g::Fuse::Resources
