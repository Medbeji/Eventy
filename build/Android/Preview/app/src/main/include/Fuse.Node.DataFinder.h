// This file was generated based on '/Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Nodes/0.47.7/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Node.IDataEnumerator.h>
#include <Uno.Object.h>
namespace g{namespace Fuse{struct Node__DataFinder;}}

namespace g{
namespace Fuse{

// internal abstract class Node.DataFinder :2370
// {
struct Node__DataFinder_type : uType
{
    ::g::Fuse::Node__IDataEnumerator interface0;
    void(*fp_Resolve)(::g::Fuse::Node__DataFinder*, uObject*);
};

Node__DataFinder_type* Node__DataFinder_typeof();
void Node__DataFinder__ctor__fn(Node__DataFinder* __this, uString* key);
void Node__DataFinder__get_Key_fn(Node__DataFinder* __this, uString** __retval);
void Node__DataFinder__NextData_fn(Node__DataFinder* __this, uObject* data, bool* __retval);

struct Node__DataFinder : uObject
{
    uStrong<uString*> _key;

    void ctor_(uString* key);
    uString* Key();
    bool NextData(uObject* data);
    void Resolve(uObject* data) { (((Node__DataFinder_type*)__type)->fp_Resolve)(this, data); }
};
// }

}} // ::g::Fuse
