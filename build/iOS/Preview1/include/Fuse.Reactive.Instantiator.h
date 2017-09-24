// This file was generated based on '/Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Reactive.Bindings/1.0.2/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Behavior.h>
#include <Fuse.Binding.h>
#include <Fuse.IDeferred.h>
#include <Fuse.INotifyUnrooted.h>
#include <Fuse.IProperties.h>
#include <Fuse.ITemplateObserver.h>
#include <Fuse.Node.ISubtreeDataProvider.h>
#include <Fuse.Reactive.IObserver.h>
#include <Fuse.Scripting.IScriptObject.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
namespace g{namespace Fuse{namespace Reactive{struct Instantiator;}}}
namespace g{namespace Fuse{namespace Reactive{struct Instantiator__WindowItem;}}}
namespace g{namespace Fuse{namespace Triggers{struct BusyTask;}}}
namespace g{namespace Fuse{struct Node;}}
namespace g{namespace Fuse{struct Visual;}}
namespace g{namespace Uno{namespace Collections{struct Dictionary;}}}
namespace g{namespace Uno{namespace Collections{struct List;}}}
namespace g{namespace Uno{namespace Collections{struct RootableList;}}}
namespace g{namespace Uno{namespace UX{struct Template;}}}

namespace g{
namespace Fuse{
namespace Reactive{

// public class Instantiator :872
// {
struct Instantiator_type : ::g::Fuse::Node_type
{
    ::g::Fuse::Reactive::IObserver interface6;
    ::g::Fuse::ITemplateObserver interface7;
    ::g::Fuse::Node__ISubtreeDataProvider interface8;
    ::g::Fuse::IDeferred interface9;
};

Instantiator_type* Instantiator_typeof();
void Instantiator__ctor_3_fn(Instantiator* __this);
void Instantiator__ctor_4_fn(Instantiator* __this, uObject* templates);
void Instantiator__AddTemplate_fn(Instantiator* __this, uObject* data, ::g::Uno::UX::Template* f, ::g::Uno::Collections::List* newElements);
void Instantiator__CompletedRemove_fn(Instantiator* __this, ::g::Fuse::Node* n);
void Instantiator__CompleteWindowItem_fn(Instantiator* __this, Instantiator__WindowItem* wi, int* windowIndex);
void Instantiator__CompleteWindowItems_fn(Instantiator* __this, bool* one, bool* __retval);
void Instantiator__CompleteWindowItemsAction_fn(Instantiator* __this);
void Instantiator__get_Count_fn(Instantiator* __this, int* __retval);
void Instantiator__set_Count_fn(Instantiator* __this, int* value);
void Instantiator__get_Defer_fn(Instantiator* __this, int* __retval);
void Instantiator__set_Defer_fn(Instantiator* __this, int* value);
void Instantiator__get_DeferredPriority_fn(Instantiator* __this, float* __retval);
void Instantiator__set_DeferredPriority_fn(Instantiator* __this, float* value);
void Instantiator__FuseIDeferredPerform_fn(Instantiator* __this, bool* __retval);
void Instantiator__FuseITemplateObserverOnTemplatesChangedWileRooted_fn(Instantiator* __this);
void Instantiator__FuseNodeISubtreeDataProviderGetData_fn(Instantiator* __this, ::g::Fuse::Node* n, uObject** __retval);
void Instantiator__FuseReactiveIObserverOnAdd_fn(Instantiator* __this, uObject* addedValue);
void Instantiator__FuseReactiveIObserverOnClear_fn(Instantiator* __this);
void Instantiator__FuseReactiveIObserverOnFailed_fn(Instantiator* __this, uString* message);
void Instantiator__FuseReactiveIObserverOnInsertAt_fn(Instantiator* __this, int* index, uObject* value);
void Instantiator__FuseReactiveIObserverOnNewAll_fn(Instantiator* __this, uObject* values);
void Instantiator__FuseReactiveIObserverOnNewAt_fn(Instantiator* __this, int* index, uObject* value);
void Instantiator__FuseReactiveIObserverOnRemoveAt_fn(Instantiator* __this, int* index);
void Instantiator__FuseReactiveIObserverOnSet_fn(Instantiator* __this, uObject* newValue);
void Instantiator__GetData_fn(Instantiator* __this, int* dataIndex, uObject** __retval);
void Instantiator__GetDataCount_fn(Instantiator* __this, int* __retval);
void Instantiator__GetLastNodeFromIndex_fn(Instantiator* __this, int* windowIndex, ::g::Fuse::Node** __retval);
void Instantiator__GetLastNodeInGroup_fn(Instantiator* __this, ::g::Fuse::Node** __retval);
void Instantiator__GetMatchKey_fn(Instantiator* __this, uObject* data, uString** __retval);
void Instantiator__get_HasLimit_fn(Instantiator* __this, bool* __retval);
void Instantiator__InsertNew_fn(Instantiator* __this, int* dataIndex);
void Instantiator__get_Limit_fn(Instantiator* __this, int* __retval);
void Instantiator__set_Limit_fn(Instantiator* __this, int* value);
void Instantiator__get_MatchKey_fn(Instantiator* __this, uString** __retval);
void Instantiator__set_MatchKey_fn(Instantiator* __this, uString* value);
void Instantiator__New2_fn(Instantiator** __retval);
void Instantiator__New3_fn(uObject* templates, Instantiator** __retval);
void Instantiator__get_Offset_fn(Instantiator* __this, int* __retval);
void Instantiator__set_Offset_fn(Instantiator* __this, int* value);
void Instantiator__OnItemsChanged_fn(Instantiator* __this);
void Instantiator__OnRooted_fn(Instantiator* __this);
void Instantiator__OnTemplatesChanged_fn(Instantiator* __this, ::g::Uno::UX::Template* factory);
void Instantiator__OnUnrooted_fn(Instantiator* __this);
void Instantiator__RemoveAll_fn(Instantiator* __this);
void Instantiator__RemoveAt_fn(Instantiator* __this, int* dataIndex);
void Instantiator__RemoveFromParent_fn(Instantiator* __this, ::g::Fuse::Node* n);
void Instantiator__ReplaceAll_fn(Instantiator* __this, uArray* dcs);
void Instantiator__Repopulate_fn(Instantiator* __this);
void Instantiator__SetFailed_fn(Instantiator* __this, uString* message);
void Instantiator__SetValid_fn(Instantiator* __this);
void Instantiator__get_TemplateKey_fn(Instantiator* __this, uString** __retval);
void Instantiator__set_TemplateKey_fn(Instantiator* __this, uString* value);
void Instantiator__get_Templates_fn(Instantiator* __this, uObject** __retval);
void Instantiator__get_TemplateSource_fn(Instantiator* __this, ::g::Fuse::Visual** __retval);
void Instantiator__set_TemplateSource_fn(Instantiator* __this, ::g::Fuse::Visual* value);
void Instantiator__TrimAndPad_fn(Instantiator* __this);

struct Instantiator : ::g::Fuse::Behavior
{
    uStrong< ::g::Fuse::Triggers::BusyTask*> _busyTask;
    int _count;
    uStrong< ::g::Uno::Collections::Dictionary*> _dataMap;
    int _defer;
    float _deferredPriority;
    bool _hasLimit;
    uStrong<uObject*> _items;
    int _limit;
    bool _listening;
    uStrong<uString*> _matchKey;
    int _offset;
    bool _pendingNew;
    uStrong< ::g::Uno::Collections::RootableList*> _rootTemplates;
    uStrong<uObject*> _subscription;
    uStrong<uObject*> _templates;
    uStrong< ::g::Uno::Collections::List*> _windowItems;
    uStrong<uString*> _TemplateKey;
    uStrong< ::g::Fuse::Visual*> _TemplateSource;

    void ctor_3();
    void ctor_4(uObject* templates);
    void AddTemplate(uObject* data, ::g::Uno::UX::Template* f, ::g::Uno::Collections::List* newElements);
    void CompletedRemove(::g::Fuse::Node* n);
    void CompleteWindowItem(Instantiator__WindowItem* wi, int windowIndex);
    bool CompleteWindowItems(bool one);
    void CompleteWindowItemsAction();
    int Count();
    void Count(int value);
    int Defer();
    void Defer(int value);
    float DeferredPriority();
    void DeferredPriority(float value);
    uObject* GetData(int dataIndex);
    int GetDataCount();
    ::g::Fuse::Node* GetLastNodeFromIndex(int windowIndex);
    uString* GetMatchKey(uObject* data);
    bool HasLimit();
    void InsertNew(int dataIndex);
    int Limit();
    void Limit(int value);
    uString* MatchKey();
    void MatchKey(uString* value);
    int Offset();
    void Offset(int value);
    void OnItemsChanged();
    void OnTemplatesChanged(::g::Uno::UX::Template* factory);
    void RemoveAll();
    void RemoveAt(int dataIndex);
    void RemoveFromParent(::g::Fuse::Node* n);
    void ReplaceAll(uArray* dcs);
    void Repopulate();
    void SetFailed(uString* message);
    void SetValid();
    uString* TemplateKey();
    void TemplateKey(uString* value);
    uObject* Templates();
    ::g::Fuse::Visual* TemplateSource();
    void TemplateSource(::g::Fuse::Visual* value);
    void TrimAndPad();
    static Instantiator* New2();
    static Instantiator* New3(uObject* templates);
};
// }

}}} // ::g::Fuse::Reactive
