// This file was generated based on '/Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Nodes/1.0.2/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Fuse{struct NameRegistry;}}
namespace g{namespace Fuse{struct Node;}}
namespace g{namespace Uno{namespace Collections{struct Dictionary;}}}
namespace g{namespace Uno{namespace Collections{struct List;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}

namespace g{
namespace Fuse{

// public static class NameRegistry :2101
// {
uClassType* NameRegistry_typeof();
void NameRegistry__AddListener_fn(::g::Uno::UX::Selector* name, uObject* listener);
void NameRegistry__ClearName_fn(::g::Fuse::Node* obj);
void NameRegistry__GetName_fn(::g::Fuse::Node* obj, ::g::Uno::UX::Selector* __retval);
void NameRegistry__GetObjectsWithName_fn(::g::Uno::UX::Selector* name, ::g::Uno::Collections::List** __retval);
void NameRegistry__NotifyNameChanged_fn(::g::Fuse::Node* obj, ::g::Uno::UX::Selector* name);
void NameRegistry__RemoveListener_fn(uObject* listener);
void NameRegistry__SetName_fn(::g::Fuse::Node* obj, ::g::Uno::UX::Selector* name);

struct NameRegistry : uObject
{
    static uSStrong< ::g::Uno::Collections::Dictionary*> _listeners_;
    static uSStrong< ::g::Uno::Collections::Dictionary*>& _listeners() { return NameRegistry_typeof()->Init(), _listeners_; }
    static uSStrong< ::g::Uno::Collections::Dictionary*> _names_;
    static uSStrong< ::g::Uno::Collections::Dictionary*>& _names() { return NameRegistry_typeof()->Init(), _names_; }
    static uSStrong< ::g::Uno::Collections::Dictionary*> _nameToObj_;
    static uSStrong< ::g::Uno::Collections::Dictionary*>& _nameToObj() { return NameRegistry_typeof()->Init(), _nameToObj_; }

    static void AddListener(::g::Uno::UX::Selector name, uObject* listener);
    static void ClearName(::g::Fuse::Node* obj);
    static ::g::Uno::UX::Selector GetName(::g::Fuse::Node* obj);
    static ::g::Uno::Collections::List* GetObjectsWithName(::g::Uno::UX::Selector name);
    static void NotifyNameChanged(::g::Fuse::Node* obj, ::g::Uno::UX::Selector name);
    static void RemoveListener(uObject* listener);
    static void SetName(::g::Fuse::Node* obj, ::g::Uno::UX::Selector name);
};
// }

}} // ::g::Fuse
