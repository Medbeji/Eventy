// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Fuse.Controls.HTML.h>
#include <Fuse.Controls.IWebView.h>
#include <Fuse.Controls.Navigator.h>
#include <Fuse.Controls.WebView.h>
#include <Fuse.Diagnostics.h>
#include <Fuse.Elements.Element.h>
#include <Fuse.Input.Focus.h>
#include <Fuse.Internal.Blender-1.h>
#include <Fuse.Internal.BlenderMap.h>
#include <Fuse.LayoutPriority.h>
#include <Fuse.Node.h>
#include <Fuse.Scripting.IEvent-434826af.h>
#include <Fuse.Time.h>
#include <Fuse.Triggers.Actions.Callback.h>
#include <Fuse.Triggers.Actions.Collapse.h>
#include <Fuse.Triggers.Actions.Hide.h>
#include <Fuse.Triggers.Actions.IHide.h>
#include <Fuse.Triggers.Actions.IShow.h>
#include <Fuse.Triggers.Actions.LoadHtml.h>
#include <Fuse.Triggers.Actions.LoadUrl.h>
#include <Fuse.Triggers.Actions.Pause.h>
#include <Fuse.Triggers.Actions.Play.h>
#include <Fuse.Triggers.Actions.PlayTo.h>
#include <Fuse.Triggers.Actions.Pulse.h>
#include <Fuse.Triggers.Actions.Reload.h>
#include <Fuse.Triggers.Actions.Resume.h>
#include <Fuse.Triggers.Actions.Set-1.h>
#include <Fuse.Triggers.Actions.Show.h>
#include <Fuse.Triggers.Actions.Stop.h>
#include <Fuse.Triggers.Actions.Toggle.h>
#include <Fuse.Triggers.Actions-14263c83.h>
#include <Fuse.Triggers.Actions-1510788d.h>
#include <Fuse.Triggers.Actions-18789401.h>
#include <Fuse.Triggers.Actions-18bf0d20.h>
#include <Fuse.Triggers.Actions-32966389.h>
#include <Fuse.Triggers.Actions-38f4649e.h>
#include <Fuse.Triggers.Actions-39642be7.h>
#include <Fuse.Triggers.Actions-3a870264.h>
#include <Fuse.Triggers.Actions-458e75fc.h>
#include <Fuse.Triggers.Actions-5821cb24.h>
#include <Fuse.Triggers.Actions-5af09f89.h>
#include <Fuse.Triggers.Actions-79bb5ad.h>
#include <Fuse.Triggers.Actions-7ea0e0be.h>
#include <Fuse.Triggers.Actions-873d043e.h>
#include <Fuse.Triggers.Actions-967f0fff.h>
#include <Fuse.Triggers.Actions-9b9fd4af.h>
#include <Fuse.Triggers.Actions-a1d52f6d.h>
#include <Fuse.Triggers.Actions-a5e0b480.h>
#include <Fuse.Triggers.Actions-b3c1f4a1.h>
#include <Fuse.Triggers.Actions-b5190bae.h>
#include <Fuse.Triggers.Actions-b8cdaf7f.h>
#include <Fuse.Triggers.Actions-baf069a8.h>
#include <Fuse.Triggers.Actions-d8fdd070.h>
#include <Fuse.Triggers.Actions-e0327300.h>
#include <Fuse.Triggers.Actions-e0dcfc3.h>
#include <Fuse.Triggers.Actions-e65da75e.h>
#include <Fuse.Triggers.Actions-e720de5b.h>
#include <Fuse.Triggers.Actions-ea70af1f.h>
#include <Fuse.Triggers.Actions-f89d8ce6.h>
#include <Fuse.Triggers.Actions-fcab7e57.h>
#include <Fuse.Triggers.Actions-ff0a4af5.h>
#include <Fuse.Triggers.IPlayback.h>
#include <Fuse.Triggers.IPulseTrigger.h>
#include <Fuse.Triggers.LayoutT-3aa69d98.h>
#include <Fuse.Triggers.LayoutT-9d622a39.h>
#include <Fuse.Triggers.LayoutTransition.h>
#include <Fuse.Triggers.StateGroup.h>
#include <Fuse.Triggers.Timeline.h>
#include <Fuse.UpdateManager.h>
#include <Fuse.UpdateStage.h>
#include <Fuse.UserEvent.h>
#include <Fuse.Visual.CancelInt-459c56d4.h>
#include <Fuse.Visual.h>
#include <Fuse.VisualEvent-2.h>
#include <Fuse.VisualEventArgs.h>
#include <Fuse.VisualEventHandler.h>
#include <Fuse.VisualEventMode.h>
#include <Uno.Action.h>
#include <Uno.Action-1.h>
#include <Uno.ArgumentNullException.h>
#include <Uno.Bool.h>
#include <Uno.Collections.Dictionary-2.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IEnumerator.h>
#include <Uno.Collections.IEnumerator-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.Collections.List-1.h>
#include <Uno.Collections.List--251bdc7d.h>
#include <Uno.Delegate.h>
#include <Uno.Diagnostics.Debug.h>
#include <Uno.Double.h>
#include <Uno.Exception.h>
#include <Uno.Float.h>
#include <Uno.Float2.h>
#include <Uno.Float3.h>
#include <Uno.Float4x4.h>
#include <Uno.Int.h>
#include <Uno.Matrix.h>
#include <Uno.Object.h>
#include <Uno.String.h>
#include <Uno.UX.Expression-1.h>
#include <Uno.UX.IPropertyListener.h>
#include <Uno.UX.Property-1.h>
static uString* STRINGS[20];
static uType* TYPES[27];

namespace g{
namespace Fuse{
namespace Triggers{
namespace Actions{

// /Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Elements/1.0.2/triggers/actions/$.uno
// --------------------------------------------------------------------------------------------------------

// public sealed class BringIntoView :41
// {
static void BringIntoView_build(uType* type)
{
    ::TYPES[0] = ::g::Fuse::Elements::Element_typeof();
    type->SetFields(9);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)BringIntoView__New2_fn, 0, true, type, 0));
}

::g::Fuse::Triggers::Actions::TriggerAction_type* BringIntoView_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Actions::TriggerAction_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Triggers::Actions::TriggerAction_typeof();
    options.FieldCount = 9;
    options.ObjectSize = sizeof(BringIntoView);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Actions::TriggerAction_type);
    type = (::g::Fuse::Triggers::Actions::TriggerAction_type*)uClassType::New("Fuse.Triggers.Actions.BringIntoView", options);
    type->fp_build_ = BringIntoView_build;
    type->fp_ctor_ = (void*)BringIntoView__New2_fn;
    type->fp_Perform = (void(*)(::g::Fuse::Triggers::Actions::TriggerAction*, ::g::Fuse::Node*))BringIntoView__Perform_fn;
    return type;
}

// public generated BringIntoView() :41
void BringIntoView__ctor_2_fn(BringIntoView* __this)
{
    __this->ctor_2();
}

// public generated BringIntoView New() :41
void BringIntoView__New2_fn(BringIntoView** __retval)
{
    *__retval = BringIntoView::New2();
}

// protected override sealed void Perform(Fuse.Node target) :43
void BringIntoView__Perform_fn(BringIntoView* __this, ::g::Fuse::Node* target)
{
    uStackFrame __("Fuse.Triggers.Actions.BringIntoView", "Perform(Fuse.Node)");
    ::g::Fuse::Elements::Element* elm = uAs< ::g::Fuse::Elements::Element*>(target, ::TYPES[0/*Fuse.Elements.Element*/]);

    if (elm != NULL)
        uPtr(elm)->BringIntoView();
}

// public generated BringIntoView() [instance] :41
void BringIntoView::ctor_2()
{
    ctor_1();
}

// public generated BringIntoView New() [static] :41
BringIntoView* BringIntoView::New2()
{
    BringIntoView* obj1 = (BringIntoView*)uNew(BringIntoView_typeof());
    obj1->ctor_2();
    return obj1;
}
// }

// /Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Controls/1.0.2/triggers/$.uno
// ------------------------------------------------------------------------------------------------

// public sealed class BringToFront :39
// {
static void BringToFront_build(uType* type)
{
    ::TYPES[1] = ::g::Fuse::Visual_typeof();
    type->SetFields(9,
        ::TYPES[1/*Fuse.Visual*/], offsetof(::g::Fuse::Triggers::Actions::BringToFront, _Target), 0);
    type->Reflection.SetFunctions(3,
        new uFunction(".ctor", NULL, (void*)BringToFront__New2_fn, 0, true, type, 0),
        new uFunction("get_Target", NULL, (void*)BringToFront__get_Target_fn, 0, false, ::TYPES[1/*Fuse.Visual*/], 0),
        new uFunction("set_Target", NULL, (void*)BringToFront__set_Target_fn, 0, false, uVoid_typeof(), 1, ::TYPES[1/*Fuse.Visual*/]));
}

::g::Fuse::Triggers::Actions::TriggerAction_type* BringToFront_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Actions::TriggerAction_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Triggers::Actions::TriggerAction_typeof();
    options.FieldCount = 10;
    options.ObjectSize = sizeof(BringToFront);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Actions::TriggerAction_type);
    type = (::g::Fuse::Triggers::Actions::TriggerAction_type*)uClassType::New("Fuse.Triggers.Actions.BringToFront", options);
    type->fp_build_ = BringToFront_build;
    type->fp_ctor_ = (void*)BringToFront__New2_fn;
    type->fp_Perform = (void(*)(::g::Fuse::Triggers::Actions::TriggerAction*, ::g::Fuse::Node*))BringToFront__Perform_fn;
    return type;
}

// public generated BringToFront() :39
void BringToFront__ctor_2_fn(BringToFront* __this)
{
    __this->ctor_2();
}

// public generated BringToFront New() :39
void BringToFront__New2_fn(BringToFront** __retval)
{
    *__retval = BringToFront::New2();
}

// protected override sealed void Perform(Fuse.Node target) :43
void BringToFront__Perform_fn(BringToFront* __this, ::g::Fuse::Node* target)
{
    uStackFrame __("Fuse.Triggers.Actions.BringToFront", "Perform(Fuse.Node)");
    ::g::Fuse::Visual* ind1 = __this->Target();
    ::g::Fuse::Visual* elm = (ind1 != NULL) ? ind1 : uAs< ::g::Fuse::Visual*>(target, ::TYPES[1/*Fuse.Visual*/]);

    if (elm != NULL)
    {
        ::g::Fuse::Visual* panel = uAs< ::g::Fuse::Visual*>(uPtr(elm)->Parent(), ::TYPES[1/*Fuse.Visual*/]);

        if (panel != NULL)
            uPtr(panel)->BringToFront(elm);
    }
}

// public generated Fuse.Visual get_Target() :41
void BringToFront__get_Target_fn(BringToFront* __this, ::g::Fuse::Visual** __retval)
{
    *__retval = __this->Target();
}

// public generated void set_Target(Fuse.Visual value) :41
void BringToFront__set_Target_fn(BringToFront* __this, ::g::Fuse::Visual* value)
{
    __this->Target(value);
}

// public generated BringToFront() [instance] :39
void BringToFront::ctor_2()
{
    ctor_1();
}

// public generated Fuse.Visual get_Target() [instance] :41
::g::Fuse::Visual* BringToFront::Target()
{
    return _Target;
}

// public generated void set_Target(Fuse.Visual value) [instance] :41
void BringToFront::Target(::g::Fuse::Visual* value)
{
    _Target = value;
}

// public generated BringToFront New() [static] :39
BringToFront* BringToFront::New2()
{
    BringToFront* obj2 = (BringToFront*)uNew(BringToFront_typeof());
    obj2->ctor_2();
    return obj2;
}
// }

// /Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Triggers/1.0.2/actions/$.uno
// -----------------------------------------------------------------------------------------------

// public sealed class Callback :27
// {
static void Callback_build(uType* type)
{
    ::TYPES[1] = ::g::Fuse::Visual_typeof();
    ::TYPES[2] = ::g::Fuse::VisualEventHandler_typeof();
    type->SetFields(9,
        ::g::Uno::Action_typeof(), offsetof(::g::Fuse::Triggers::Actions::Callback, _Action), 0,
        ::TYPES[2/*Fuse.VisualEventHandler*/], offsetof(::g::Fuse::Triggers::Actions::Callback, Handler1), 0);
    type->Reflection.SetFunctions(5,
        new uFunction("get_Action", NULL, (void*)Callback__get_Action_fn, 0, false, ::g::Uno::Action_typeof(), 0),
        new uFunction("set_Action", NULL, (void*)Callback__set_Action_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Action_typeof()),
        new uFunction("add_Handler", NULL, (void*)Callback__add_Handler_fn, 0, false, uVoid_typeof(), 1, ::TYPES[2/*Fuse.VisualEventHandler*/]),
        new uFunction("remove_Handler", NULL, (void*)Callback__remove_Handler_fn, 0, false, uVoid_typeof(), 1, ::TYPES[2/*Fuse.VisualEventHandler*/]),
        new uFunction(".ctor", NULL, (void*)Callback__New2_fn, 0, true, type, 0));
}

::g::Fuse::Triggers::Actions::TriggerAction_type* Callback_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Actions::TriggerAction_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Triggers::Actions::TriggerAction_typeof();
    options.FieldCount = 11;
    options.ObjectSize = sizeof(Callback);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Actions::TriggerAction_type);
    type = (::g::Fuse::Triggers::Actions::TriggerAction_type*)uClassType::New("Fuse.Triggers.Actions.Callback", options);
    type->fp_build_ = Callback_build;
    type->fp_ctor_ = (void*)Callback__New2_fn;
    type->fp_Perform = (void(*)(::g::Fuse::Triggers::Actions::TriggerAction*, ::g::Fuse::Node*))Callback__Perform_fn;
    return type;
}

// public generated Callback() :27
void Callback__ctor_2_fn(Callback* __this)
{
    __this->ctor_2();
}

// public generated Uno.Action get_Action() :30
void Callback__get_Action_fn(Callback* __this, uDelegate** __retval)
{
    *__retval = __this->Action();
}

// public generated void set_Action(Uno.Action value) :30
void Callback__set_Action_fn(Callback* __this, uDelegate* value)
{
    __this->Action(value);
}

// public generated void add_Handler(Fuse.VisualEventHandler value) :33
void Callback__add_Handler_fn(Callback* __this, uDelegate* value)
{
    __this->add_Handler(value);
}

// public generated void remove_Handler(Fuse.VisualEventHandler value) :33
void Callback__remove_Handler_fn(Callback* __this, uDelegate* value)
{
    __this->remove_Handler(value);
}

// public generated Callback New() :27
void Callback__New2_fn(Callback** __retval)
{
    *__retval = Callback::New2();
}

// protected override sealed void Perform(Fuse.Node target) :35
void Callback__Perform_fn(Callback* __this, ::g::Fuse::Node* target)
{
    uStackFrame __("Fuse.Triggers.Actions.Callback", "Perform(Fuse.Node)");

    if (::g::Uno::Delegate::op_Inequality(__this->Action(), NULL))
        uPtr(__this->Action())->InvokeVoid();

    if (::g::Uno::Delegate::op_Inequality(__this->Handler1, NULL))
        uPtr(__this->Handler1)->Invoke(2, target, (::g::Fuse::VisualEventArgs*)::g::Fuse::VisualEventArgs::New2(uAs< ::g::Fuse::Visual*>(target, ::TYPES[1/*Fuse.Visual*/])));
}

// public generated Callback() [instance] :27
void Callback::ctor_2()
{
    ctor_1();
}

// public generated Uno.Action get_Action() [instance] :30
uDelegate* Callback::Action()
{
    return _Action;
}

// public generated void set_Action(Uno.Action value) [instance] :30
void Callback::Action(uDelegate* value)
{
    _Action = value;
}

// public generated void add_Handler(Fuse.VisualEventHandler value) [instance] :33
void Callback::add_Handler(uDelegate* value)
{
    uStackFrame __("Fuse.Triggers.Actions.Callback", "add_Handler(Fuse.VisualEventHandler)");
    Handler1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(Handler1, value), ::TYPES[2/*Fuse.VisualEventHandler*/]);
}

// public generated void remove_Handler(Fuse.VisualEventHandler value) [instance] :33
void Callback::remove_Handler(uDelegate* value)
{
    uStackFrame __("Fuse.Triggers.Actions.Callback", "remove_Handler(Fuse.VisualEventHandler)");
    Handler1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(Handler1, value), ::TYPES[2/*Fuse.VisualEventHandler*/]);
}

// public generated Callback New() [static] :27
Callback* Callback::New2()
{
    Callback* obj1 = (Callback*)uNew(Callback_typeof());
    obj1->ctor_2();
    return obj1;
}
// }

// /Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Triggers/1.0.2/actions/$.uno
// -----------------------------------------------------------------------------------------------

// public sealed class CancelInteractions :56
// {
static void CancelInteractions_build(uType* type)
{
    ::TYPES[1] = ::g::Fuse::Visual_typeof();
    type->SetFields(9,
        ::TYPES[1/*Fuse.Visual*/], offsetof(::g::Fuse::Triggers::Actions::CancelInteractions, _Target), 0);
    type->Reflection.SetFunctions(3,
        new uFunction(".ctor", NULL, (void*)CancelInteractions__New2_fn, 0, true, type, 0),
        new uFunction("get_Target", NULL, (void*)CancelInteractions__get_Target_fn, 0, false, ::TYPES[1/*Fuse.Visual*/], 0),
        new uFunction("set_Target", NULL, (void*)CancelInteractions__set_Target_fn, 0, false, uVoid_typeof(), 1, ::TYPES[1/*Fuse.Visual*/]));
}

::g::Fuse::Triggers::Actions::TriggerAction_type* CancelInteractions_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Actions::TriggerAction_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Triggers::Actions::TriggerAction_typeof();
    options.FieldCount = 10;
    options.ObjectSize = sizeof(CancelInteractions);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Actions::TriggerAction_type);
    type = (::g::Fuse::Triggers::Actions::TriggerAction_type*)uClassType::New("Fuse.Triggers.Actions.CancelInteractions", options);
    type->fp_build_ = CancelInteractions_build;
    type->fp_ctor_ = (void*)CancelInteractions__New2_fn;
    type->fp_Perform = (void(*)(::g::Fuse::Triggers::Actions::TriggerAction*, ::g::Fuse::Node*))CancelInteractions__Perform_fn;
    return type;
}

// public generated CancelInteractions() :56
void CancelInteractions__ctor_2_fn(CancelInteractions* __this)
{
    __this->ctor_2();
}

// public generated CancelInteractions New() :56
void CancelInteractions__New2_fn(CancelInteractions** __retval)
{
    *__retval = CancelInteractions::New2();
}

// protected override sealed void Perform(Fuse.Node target) :60
void CancelInteractions__Perform_fn(CancelInteractions* __this, ::g::Fuse::Node* target)
{
    uStackFrame __("Fuse.Triggers.Actions.CancelInteractions", "Perform(Fuse.Node)");
    ::g::Fuse::Visual* ind1 = __this->Target();
    ::g::Fuse::Visual* t = (ind1 != NULL) ? ind1 : uAs< ::g::Fuse::Visual*>(target, ::TYPES[1/*Fuse.Visual*/]);

    if (t != NULL)
        uPtr(t)->CancelInteractions(1);
}

// public generated Fuse.Visual get_Target() :58
void CancelInteractions__get_Target_fn(CancelInteractions* __this, ::g::Fuse::Visual** __retval)
{
    *__retval = __this->Target();
}

// public generated void set_Target(Fuse.Visual value) :58
void CancelInteractions__set_Target_fn(CancelInteractions* __this, ::g::Fuse::Visual* value)
{
    __this->Target(value);
}

// public generated CancelInteractions() [instance] :56
void CancelInteractions::ctor_2()
{
    ctor_1();
}

// public generated Fuse.Visual get_Target() [instance] :58
::g::Fuse::Visual* CancelInteractions::Target()
{
    return _Target;
}

// public generated void set_Target(Fuse.Visual value) [instance] :58
void CancelInteractions::Target(::g::Fuse::Visual* value)
{
    _Target = value;
}

// public generated CancelInteractions New() [static] :56
CancelInteractions* CancelInteractions::New2()
{
    CancelInteractions* obj2 = (CancelInteractions*)uNew(CancelInteractions_typeof());
    obj2->ctor_2();
    return obj2;
}
// }

// /Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Triggers/1.0.2/actions/$.uno
// -----------------------------------------------------------------------------------------------

// public sealed class Collapse :1129
// {
static void Collapse_build(uType* type)
{
    ::TYPES[3] = ::g::Fuse::Triggers::Actions::ICollapse_typeof();
    type->SetFields(9);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)Collapse__New2_fn, 0, true, type, 0));
}

::g::Fuse::Triggers::Actions::TriggerAction_type* Collapse_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Actions::TriggerAction_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Triggers::Actions::TriggerAction_typeof();
    options.FieldCount = 9;
    options.ObjectSize = sizeof(Collapse);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Actions::TriggerAction_type);
    type = (::g::Fuse::Triggers::Actions::TriggerAction_type*)uClassType::New("Fuse.Triggers.Actions.Collapse", options);
    type->fp_build_ = Collapse_build;
    type->fp_ctor_ = (void*)Collapse__New2_fn;
    type->fp_Perform = (void(*)(::g::Fuse::Triggers::Actions::TriggerAction*, ::g::Fuse::Node*))Collapse__Perform_fn;
    return type;
}

// public generated Collapse() :1129
void Collapse__ctor_2_fn(Collapse* __this)
{
    __this->ctor_2();
}

// public generated Collapse New() :1129
void Collapse__New2_fn(Collapse** __retval)
{
    *__retval = Collapse::New2();
}

// protected override sealed void Perform(Fuse.Node target) :1131
void Collapse__Perform_fn(Collapse* __this, ::g::Fuse::Node* target)
{
    uStackFrame __("Fuse.Triggers.Actions.Collapse", "Perform(Fuse.Node)");

    if (uIs(target, ::TYPES[3/*Fuse.Triggers.Actions.ICollapse*/]))
        ::g::Fuse::Triggers::Actions::ICollapse::Collapse(uInterface(uPtr((uObject*)target), ::TYPES[3/*Fuse.Triggers.Actions.ICollapse*/]));
}

// public generated Collapse() [instance] :1129
void Collapse::ctor_2()
{
    ctor_1();
}

// public generated Collapse New() [static] :1129
Collapse* Collapse::New2()
{
    Collapse* obj1 = (Collapse*)uNew(Collapse_typeof());
    obj1->ctor_2();
    return obj1;
}
// }

// /Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Triggers/1.0.2/actions/$.uno
// -----------------------------------------------------------------------------------------------

// public sealed class DebugAction :90
// {
static void DebugAction_build(uType* type)
{
    ::STRINGS[0] = uString::Const(" = ");
    ::TYPES[4] = ::g::Uno::Collections::List__Enumerator_typeof()->MakeType(::g::Fuse::Triggers::Actions::ITaggedDebugProperty_typeof(), NULL);
    ::TYPES[5] = ::g::Fuse::Triggers::Actions::ITaggedDebugProperty_typeof();
    ::TYPES[6] = ::g::Uno::Collections::List_typeof()->MakeType(::TYPES[5/*Fuse.Triggers.Actions.ITaggedDebugProperty*/], NULL);
    type->SetFields(9,
        ::TYPES[6/*Uno.Collections.List<Fuse.Triggers.Actions.ITaggedDebugProperty>*/], offsetof(::g::Fuse::Triggers::Actions::DebugAction, _props), 0,
        ::g::Uno::String_typeof(), offsetof(::g::Fuse::Triggers::Actions::DebugAction, _Message), 0);
    type->Reflection.SetFunctions(4,
        new uFunction("get_Message", NULL, (void*)DebugAction__get_Message_fn, 0, false, ::g::Uno::String_typeof(), 0),
        new uFunction("set_Message", NULL, (void*)DebugAction__set_Message_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::String_typeof()),
        new uFunction(".ctor", NULL, (void*)DebugAction__New2_fn, 0, true, type, 0),
        new uFunction("get_Properties", NULL, (void*)DebugAction__get_Properties_fn, 0, false, ::g::Uno::Collections::IList_typeof()->MakeType(::TYPES[5/*Fuse.Triggers.Actions.ITaggedDebugProperty*/], NULL), 0));
}

::g::Fuse::Triggers::Actions::TriggerAction_type* DebugAction_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Actions::TriggerAction_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Triggers::Actions::TriggerAction_typeof();
    options.FieldCount = 11;
    options.ObjectSize = sizeof(DebugAction);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Actions::TriggerAction_type);
    type = (::g::Fuse::Triggers::Actions::TriggerAction_type*)uClassType::New("Fuse.Triggers.Actions.DebugAction", options);
    type->fp_build_ = DebugAction_build;
    type->fp_ctor_ = (void*)DebugAction__New2_fn;
    type->fp_Perform = (void(*)(::g::Fuse::Triggers::Actions::TriggerAction*, ::g::Fuse::Node*))DebugAction__Perform_fn;
    return type;
}

// public generated DebugAction() :90
void DebugAction__ctor_2_fn(DebugAction* __this)
{
    __this->ctor_2();
}

// public generated string get_Message() :92
void DebugAction__get_Message_fn(DebugAction* __this, uString** __retval)
{
    *__retval = __this->Message();
}

// public generated void set_Message(string value) :92
void DebugAction__set_Message_fn(DebugAction* __this, uString* value)
{
    __this->Message(value);
}

// public generated DebugAction New() :90
void DebugAction__New2_fn(DebugAction** __retval)
{
    *__retval = DebugAction::New2();
}

// protected override sealed void Perform(Fuse.Node target) :106
void DebugAction__Perform_fn(DebugAction* __this, ::g::Fuse::Node* target)
{
    uStackFrame __("Fuse.Triggers.Actions.DebugAction", "Perform(Fuse.Node)");
    ::g::Uno::Collections::List__Enumerator<uStrong<uObject*> > ret3;

    if (::g::Uno::String::op_Inequality(__this->Message(), NULL))
        ::g::Uno::Diagnostics::Debug::Log3(__this->Message());

    if (__this->_props != NULL)

        for (::g::Uno::Collections::List__Enumerator<uStrong<uObject*> > enum1 = (::g::Uno::Collections::List__GetEnumerator_fn(uPtr(__this->_props), &ret3), ret3); enum1.MoveNext(::TYPES[4/*Uno.Collections.List<Fuse.Triggers.Actions.ITaggedDebugProperty>.Enumerator*/]); )
        {
            uObject* prop = enum1.Current(::TYPES[4/*Uno.Collections.List<Fuse.Triggers.Actions.ITaggedDebugProperty>.Enumerator*/]);
            ::g::Uno::Diagnostics::Debug::Log3(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Fuse::Triggers::Actions::ITaggedDebugProperty::GetTag(uInterface(uPtr(prop), ::TYPES[5/*Fuse.Triggers.Actions.ITaggedDebugProperty*/])), ::STRINGS[0/*" = "*/]), ::g::Fuse::Triggers::Actions::ITaggedDebugProperty::GetStringValue(uInterface(uPtr(prop), ::TYPES[5/*Fuse.Triggers.Actions.ITaggedDebugProperty*/]))));
        }
}

// public Uno.Collections.IList<Fuse.Triggers.Actions.ITaggedDebugProperty> get_Properties() :99
void DebugAction__get_Properties_fn(DebugAction* __this, uObject** __retval)
{
    *__retval = __this->Properties();
}

// public generated DebugAction() [instance] :90
void DebugAction::ctor_2()
{
    ctor_1();
}

// public generated string get_Message() [instance] :92
uString* DebugAction::Message()
{
    return _Message;
}

// public generated void set_Message(string value) [instance] :92
void DebugAction::Message(uString* value)
{
    _Message = value;
}

// public Uno.Collections.IList<Fuse.Triggers.Actions.ITaggedDebugProperty> get_Properties() [instance] :99
uObject* DebugAction::Properties()
{
    uStackFrame __("Fuse.Triggers.Actions.DebugAction", "get_Properties()");

    if (_props == NULL)
        _props = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[6/*Uno.Collections.List<Fuse.Triggers.Actions.ITaggedDebugProperty>*/]));

    return (uObject*)_props;
}

// public generated DebugAction New() [static] :90
DebugAction* DebugAction::New2()
{
    DebugAction* obj2 = (DebugAction*)uNew(DebugAction_typeof());
    obj2->ctor_2();
    return obj2;
}
// }

// /Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Triggers/1.0.2/actions/$.uno
// -----------------------------------------------------------------------------------------------

// public sealed class DebugFrame :183
// {
static void DebugFrame_build(uType* type)
{
    ::STRINGS[1] = uString::Const("");
    ::STRINGS[2] = uString::Const("Frame");
    type->SetInterfaces(
        ::g::Fuse::Triggers::Actions::ITaggedDebugProperty_typeof(), offsetof(DebugFrame_type, interface0));
    type->Reflection.SetFunctions(3,
        new uFunction("GetStringValue", NULL, (void*)DebugFrame__GetStringValue_fn, 0, false, ::g::Uno::String_typeof(), 0),
        new uFunction("GetTag", NULL, (void*)DebugFrame__GetTag_fn, 0, false, ::g::Uno::String_typeof(), 0),
        new uFunction(".ctor", NULL, (void*)DebugFrame__New1_fn, 0, true, type, 0));
}

DebugFrame_type* DebugFrame_typeof()
{
    static uSStrong<DebugFrame_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(DebugFrame);
    options.TypeSize = sizeof(DebugFrame_type);
    type = (DebugFrame_type*)uClassType::New("Fuse.Triggers.Actions.DebugFrame", options);
    type->fp_build_ = DebugFrame_build;
    type->fp_ctor_ = (void*)DebugFrame__New1_fn;
    type->interface0.fp_GetTag = (void(*)(uObject*, uString**))DebugFrame__GetTag_fn;
    type->interface0.fp_GetStringValue = (void(*)(uObject*, uString**))DebugFrame__GetStringValue_fn;
    return type;
}

// public generated DebugFrame() :183
void DebugFrame__ctor__fn(DebugFrame* __this)
{
    __this->ctor_();
}

// public string GetStringValue() :190
void DebugFrame__GetStringValue_fn(DebugFrame* __this, uString** __retval)
{
    *__retval = __this->GetStringValue();
}

// public string GetTag() :185
void DebugFrame__GetTag_fn(DebugFrame* __this, uString** __retval)
{
    *__retval = __this->GetTag();
}

// public generated DebugFrame New() :183
void DebugFrame__New1_fn(DebugFrame** __retval)
{
    *__retval = DebugFrame::New1();
}

// public generated DebugFrame() [instance] :183
void DebugFrame::ctor_()
{
}

// public string GetStringValue() [instance] :190
uString* DebugFrame::GetStringValue()
{
    uStackFrame __("Fuse.Triggers.Actions.DebugFrame", "GetStringValue()");
    return ::g::Uno::String::op_Addition1(::STRINGS[1/*""*/], uBox<int>(::g::Uno::Int_typeof(), ::g::Fuse::UpdateManager::FrameIndex()));
}

// public string GetTag() [instance] :185
uString* DebugFrame::GetTag()
{
    return ::STRINGS[2/*"Frame"*/];
}

// public generated DebugFrame New() [static] :183
DebugFrame* DebugFrame::New1()
{
    DebugFrame* obj1 = (DebugFrame*)uNew(DebugFrame_typeof());
    obj1->ctor_();
    return obj1;
}
// }

// /Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Triggers/1.0.2/actions/$.uno
// -----------------------------------------------------------------------------------------------

// public sealed class DebugProperty<T> :139
// {
static void DebugProperty_build(uType* type)
{
    ::STRINGS[1] = uString::Const("");
    type->SetPrecalc(
        type->T(0));
    type->SetInterfaces(
        ::g::Fuse::Triggers::Actions::ITaggedDebugProperty_typeof(), offsetof(DebugProperty_type, interface0));
    type->SetFields(0,
        ::g::Uno::String_typeof(), offsetof(::g::Fuse::Triggers::Actions::DebugProperty, _Tag), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(type->T(0), NULL), offsetof(::g::Fuse::Triggers::Actions::DebugProperty, _Value), 0);
    type->Reflection.SetFunctions(7,
        new uFunction("GetStringValue", NULL, (void*)DebugProperty__GetStringValue_fn, 0, false, ::g::Uno::String_typeof(), 0),
        new uFunction("GetTag", NULL, (void*)DebugProperty__GetTag_fn, 0, false, ::g::Uno::String_typeof(), 0),
        new uFunction(".ctor", type, (void*)DebugProperty__New1_fn, 0, true, type, 1, ::g::Uno::UX::Property1_typeof()->MakeType(type->T(0), NULL)),
        new uFunction("get_Tag", NULL, (void*)DebugProperty__get_Tag_fn, 0, false, ::g::Uno::String_typeof(), 0),
        new uFunction("set_Tag", NULL, (void*)DebugProperty__set_Tag_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::String_typeof()),
        new uFunction("get_Value", NULL, (void*)DebugProperty__get_Value_fn, 0, false, ::g::Uno::UX::Property1_typeof()->MakeType(type->T(0), NULL), 0),
        new uFunction("set_Value", NULL, (void*)DebugProperty__set_Value_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::UX::Property1_typeof()->MakeType(type->T(0), NULL)));
}

DebugProperty_type* DebugProperty_typeof()
{
    static uSStrong<DebugProperty_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.GenericCount = 1;
    options.InterfaceCount = 1;
    options.PrecalcCount = 1;
    options.ObjectSize = sizeof(DebugProperty);
    options.TypeSize = sizeof(DebugProperty_type);
    type = (DebugProperty_type*)uClassType::New("Fuse.Triggers.Actions.DebugProperty`1", options);
    type->fp_build_ = DebugProperty_build;
    type->interface0.fp_GetTag = (void(*)(uObject*, uString**))DebugProperty__GetTag_fn;
    type->interface0.fp_GetStringValue = (void(*)(uObject*, uString**))DebugProperty__GetStringValue_fn;
    return type;
}

// public DebugProperty(Uno.UX.Property<T> val) :145
void DebugProperty__ctor__fn(DebugProperty* __this, ::g::Uno::UX::Property1* val)
{
    __this->ctor_(val);
}

// public string GetStringValue() :155
void DebugProperty__GetStringValue_fn(DebugProperty* __this, uString** __retval)
{
    *__retval = __this->GetStringValue();
}

// public string GetTag() :150
void DebugProperty__GetTag_fn(DebugProperty* __this, uString** __retval)
{
    *__retval = __this->GetTag();
}

// public DebugProperty New(Uno.UX.Property<T> val) :145
void DebugProperty__New1_fn(uType* __type, ::g::Uno::UX::Property1* val, DebugProperty** __retval)
{
    *__retval = DebugProperty::New1(__type, val);
}

// public generated string get_Tag() :141
void DebugProperty__get_Tag_fn(DebugProperty* __this, uString** __retval)
{
    *__retval = __this->Tag();
}

// public generated void set_Tag(string value) :141
void DebugProperty__set_Tag_fn(DebugProperty* __this, uString* value)
{
    __this->Tag(value);
}

// public generated Uno.UX.Property<T> get_Value() :142
void DebugProperty__get_Value_fn(DebugProperty* __this, ::g::Uno::UX::Property1** __retval)
{
    *__retval = __this->Value();
}

// public generated void set_Value(Uno.UX.Property<T> value) :142
void DebugProperty__set_Value_fn(DebugProperty* __this, ::g::Uno::UX::Property1* value)
{
    __this->Value(value);
}

// public DebugProperty(Uno.UX.Property<T> val) [instance] :145
void DebugProperty::ctor_(::g::Uno::UX::Property1* val)
{
    Value(val);
}

// public string GetStringValue() [instance] :155
uString* DebugProperty::GetStringValue()
{
    uType* __types[] = {
        __type->Precalced(0/*T*/),
    };
    uStackFrame __("Fuse.Triggers.Actions.DebugProperty`1", "GetStringValue()");
    uT ret2(__types[0], U_ALLOCA(__types[0]->ValueSize));
    return ::g::Uno::String::op_Addition1(::STRINGS[1/*""*/], uBoxPtr(__types[0], (::g::Uno::UX::Property1__Get_fn(uPtr(Value()), &ret2), ret2)));
}

// public string GetTag() [instance] :150
uString* DebugProperty::GetTag()
{
    return Tag();
}

// public generated string get_Tag() [instance] :141
uString* DebugProperty::Tag()
{
    return _Tag;
}

// public generated void set_Tag(string value) [instance] :141
void DebugProperty::Tag(uString* value)
{
    _Tag = value;
}

// public generated Uno.UX.Property<T> get_Value() [instance] :142
::g::Uno::UX::Property1* DebugProperty::Value()
{
    return _Value;
}

// public generated void set_Value(Uno.UX.Property<T> value) [instance] :142
void DebugProperty::Value(::g::Uno::UX::Property1* value)
{
    _Value = value;
}

// public DebugProperty New(Uno.UX.Property<T> val) [static] :145
DebugProperty* DebugProperty::New1(uType* __type, ::g::Uno::UX::Property1* val)
{
    DebugProperty* obj1 = (DebugProperty*)uNew(__type);
    obj1->ctor_(val);
    return obj1;
}
// }

// /Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Triggers/1.0.2/actions/$.uno
// -----------------------------------------------------------------------------------------------

// public sealed class DebugTime :170
// {
static void DebugTime_build(uType* type)
{
    ::STRINGS[1] = uString::Const("");
    ::STRINGS[3] = uString::Const("Time");
    type->SetInterfaces(
        ::g::Fuse::Triggers::Actions::ITaggedDebugProperty_typeof(), offsetof(DebugTime_type, interface0));
    type->Reflection.SetFunctions(3,
        new uFunction("GetStringValue", NULL, (void*)DebugTime__GetStringValue_fn, 0, false, ::g::Uno::String_typeof(), 0),
        new uFunction("GetTag", NULL, (void*)DebugTime__GetTag_fn, 0, false, ::g::Uno::String_typeof(), 0),
        new uFunction(".ctor", NULL, (void*)DebugTime__New1_fn, 0, true, type, 0));
}

DebugTime_type* DebugTime_typeof()
{
    static uSStrong<DebugTime_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(DebugTime);
    options.TypeSize = sizeof(DebugTime_type);
    type = (DebugTime_type*)uClassType::New("Fuse.Triggers.Actions.DebugTime", options);
    type->fp_build_ = DebugTime_build;
    type->fp_ctor_ = (void*)DebugTime__New1_fn;
    type->interface0.fp_GetTag = (void(*)(uObject*, uString**))DebugTime__GetTag_fn;
    type->interface0.fp_GetStringValue = (void(*)(uObject*, uString**))DebugTime__GetStringValue_fn;
    return type;
}

// public generated DebugTime() :170
void DebugTime__ctor__fn(DebugTime* __this)
{
    __this->ctor_();
}

// public string GetStringValue() :177
void DebugTime__GetStringValue_fn(DebugTime* __this, uString** __retval)
{
    *__retval = __this->GetStringValue();
}

// public string GetTag() :172
void DebugTime__GetTag_fn(DebugTime* __this, uString** __retval)
{
    *__retval = __this->GetTag();
}

// public generated DebugTime New() :170
void DebugTime__New1_fn(DebugTime** __retval)
{
    *__retval = DebugTime::New1();
}

// public generated DebugTime() [instance] :170
void DebugTime::ctor_()
{
}

// public string GetStringValue() [instance] :177
uString* DebugTime::GetStringValue()
{
    uStackFrame __("Fuse.Triggers.Actions.DebugTime", "GetStringValue()");
    return ::g::Uno::String::op_Addition1(::STRINGS[1/*""*/], uBox(::g::Uno::Double_typeof(), ::g::Fuse::Time::FrameTime()));
}

// public string GetTag() [instance] :172
uString* DebugTime::GetTag()
{
    return ::STRINGS[3/*"Time"*/];
}

// public generated DebugTime New() [static] :170
DebugTime* DebugTime::New1()
{
    DebugTime* obj1 = (DebugTime*)uNew(DebugTime_typeof());
    obj1->ctor_();
    return obj1;
}
// }

// /Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Controls.WebView/1.0.2/$.uno
// -----------------------------------------------------------------------------------------------

// public sealed class EvaluateJS :963
// {
static void EvaluateJS_build(uType* type)
{
    ::STRINGS[1] = uString::Const("");
    ::STRINGS[4] = uString::Const("JSON.stringify((function(){");
    ::STRINGS[5] = uString::Const("})());");
    ::TYPES[7] = ::g::Fuse::Controls::IWebView_typeof();
    ::TYPES[8] = ::g::Uno::Action1_typeof()->MakeType(::g::Uno::String_typeof(), NULL);
    ::TYPES[9] = ::g::Fuse::Triggers::Actions::JSEventHandler_typeof();
    type->SetFields(9,
        ::g::Uno::String_typeof(), offsetof(::g::Fuse::Triggers::Actions::EvaluateJS, _processedSource), 0,
        ::g::Uno::String_typeof(), offsetof(::g::Fuse::Triggers::Actions::EvaluateJS, _rawSource), 0,
        ::TYPES[7/*Fuse.Controls.IWebView*/], offsetof(::g::Fuse::Triggers::Actions::EvaluateJS, _target), 0,
        ::TYPES[9/*Fuse.Triggers.Actions.JSEventHandler*/], offsetof(::g::Fuse::Triggers::Actions::EvaluateJS, Handler1), 0);
    type->Reflection.SetFunctions(7,
        new uFunction("add_Handler", NULL, (void*)EvaluateJS__add_Handler_fn, 0, false, uVoid_typeof(), 1, ::TYPES[9/*Fuse.Triggers.Actions.JSEventHandler*/]),
        new uFunction("remove_Handler", NULL, (void*)EvaluateJS__remove_Handler_fn, 0, false, uVoid_typeof(), 1, ::TYPES[9/*Fuse.Triggers.Actions.JSEventHandler*/]),
        new uFunction("get_JavaScript", NULL, (void*)EvaluateJS__get_JavaScript_fn, 0, false, ::g::Uno::String_typeof(), 0),
        new uFunction("set_JavaScript", NULL, (void*)EvaluateJS__set_JavaScript_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::String_typeof()),
        new uFunction(".ctor", NULL, (void*)EvaluateJS__New2_fn, 0, true, type, 0),
        new uFunction("get_WebView", NULL, (void*)EvaluateJS__get_WebView_fn, 0, false, ::TYPES[7/*Fuse.Controls.IWebView*/], 0),
        new uFunction("set_WebView", NULL, (void*)EvaluateJS__set_WebView_fn, 0, false, uVoid_typeof(), 1, ::TYPES[7/*Fuse.Controls.IWebView*/]));
}

::g::Fuse::Triggers::Actions::TriggerAction_type* EvaluateJS_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Actions::TriggerAction_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Triggers::Actions::TriggerAction_typeof();
    options.FieldCount = 13;
    options.ObjectSize = sizeof(EvaluateJS);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Actions::TriggerAction_type);
    type = (::g::Fuse::Triggers::Actions::TriggerAction_type*)uClassType::New("Fuse.Triggers.Actions.EvaluateJS", options);
    type->fp_build_ = EvaluateJS_build;
    type->fp_ctor_ = (void*)EvaluateJS__New2_fn;
    type->fp_Perform = (void(*)(::g::Fuse::Triggers::Actions::TriggerAction*, ::g::Fuse::Node*))EvaluateJS__Perform_fn;
    return type;
}

// public generated EvaluateJS() :963
void EvaluateJS__ctor_2_fn(EvaluateJS* __this)
{
    __this->ctor_2();
}

// private void Execute() :1007
void EvaluateJS__Execute_fn(EvaluateJS* __this)
{
    __this->Execute();
}

// public generated void add_Handler(Fuse.Triggers.Actions.JSEventHandler value) :969
void EvaluateJS__add_Handler_fn(EvaluateJS* __this, uDelegate* value)
{
    __this->add_Handler(value);
}

// public generated void remove_Handler(Fuse.Triggers.Actions.JSEventHandler value) :969
void EvaluateJS__remove_Handler_fn(EvaluateJS* __this, uDelegate* value)
{
    __this->remove_Handler(value);
}

// public string get_JavaScript() :979
void EvaluateJS__get_JavaScript_fn(EvaluateJS* __this, uString** __retval)
{
    *__retval = __this->JavaScript();
}

// public void set_JavaScript(string value) :980
void EvaluateJS__set_JavaScript_fn(EvaluateJS* __this, uString* value)
{
    __this->JavaScript(value);
}

// public generated EvaluateJS New() :963
void EvaluateJS__New2_fn(EvaluateJS** __retval)
{
    *__retval = EvaluateJS::New2();
}

// protected override sealed void Perform(Fuse.Node target) :994
void EvaluateJS__Perform_fn(EvaluateJS* __this, ::g::Fuse::Node* target)
{
    uStackFrame __("Fuse.Triggers.Actions.EvaluateJS", "Perform(Fuse.Node)");

    if ((__this->_target == NULL) && uIs(target, ::TYPES[7/*Fuse.Controls.IWebView*/]))
        __this->_target = uAs<uObject*>(target, ::TYPES[7/*Fuse.Controls.IWebView*/]);

    if ((__this->_target != NULL) && ::g::Uno::String::op_Inequality(__this->_rawSource, ::STRINGS[1/*""*/]))
        __this->Execute();
}

// private string PrepareScriptForEval(string js) :984
void EvaluateJS__PrepareScriptForEval_fn(EvaluateJS* __this, uString* js, uString** __retval)
{
    *__retval = __this->PrepareScriptForEval(js);
}

// private void ResultHandler(string result) :1012
void EvaluateJS__ResultHandler_fn(EvaluateJS* __this, uString* result)
{
    __this->ResultHandler(result);
}

// public Fuse.Controls.IWebView get_WebView() :972
void EvaluateJS__get_WebView_fn(EvaluateJS* __this, uObject** __retval)
{
    *__retval = __this->WebView();
}

// public void set_WebView(Fuse.Controls.IWebView value) :973
void EvaluateJS__set_WebView_fn(EvaluateJS* __this, uObject* value)
{
    __this->WebView(value);
}

// public generated EvaluateJS() [instance] :963
void EvaluateJS::ctor_2()
{
    ctor_1();
}

// private void Execute() [instance] :1007
void EvaluateJS::Execute()
{
    uStackFrame __("Fuse.Triggers.Actions.EvaluateJS", "Execute()");
    ::g::Fuse::Controls::IWebView::Eval1(uInterface(uPtr(WebView()), ::TYPES[7/*Fuse.Controls.IWebView*/]), _processedSource, uDelegate::New(::TYPES[8/*Uno.Action<string>*/], (void*)EvaluateJS__ResultHandler_fn, this));
}

// public generated void add_Handler(Fuse.Triggers.Actions.JSEventHandler value) [instance] :969
void EvaluateJS::add_Handler(uDelegate* value)
{
    uStackFrame __("Fuse.Triggers.Actions.EvaluateJS", "add_Handler(Fuse.Triggers.Actions.JSEventHandler)");
    Handler1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(Handler1, value), ::TYPES[9/*Fuse.Triggers.Actions.JSEventHandler*/]);
}

// public generated void remove_Handler(Fuse.Triggers.Actions.JSEventHandler value) [instance] :969
void EvaluateJS::remove_Handler(uDelegate* value)
{
    uStackFrame __("Fuse.Triggers.Actions.EvaluateJS", "remove_Handler(Fuse.Triggers.Actions.JSEventHandler)");
    Handler1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(Handler1, value), ::TYPES[9/*Fuse.Triggers.Actions.JSEventHandler*/]);
}

// public string get_JavaScript() [instance] :979
uString* EvaluateJS::JavaScript()
{
    return _processedSource;
}

// public void set_JavaScript(string value) [instance] :980
void EvaluateJS::JavaScript(uString* value)
{
    uStackFrame __("Fuse.Triggers.Actions.EvaluateJS", "set_JavaScript(string)");
    _processedSource = PrepareScriptForEval(_rawSource = value);
}

// private string PrepareScriptForEval(string js) [instance] :984
uString* EvaluateJS::PrepareScriptForEval(uString* js)
{
    uStackFrame __("Fuse.Triggers.Actions.EvaluateJS", "PrepareScriptForEval(string)");

    if (::g::Uno::String::op_Equality(js, NULL))
        return ::STRINGS[1/*""*/];

    js = ::g::Uno::String::Trim(uPtr(js));
    js = ::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::STRINGS[4/*"JSON.string...*/], js), ::STRINGS[5/*"})());"*/]);
    return js;
}

// private void ResultHandler(string result) [instance] :1012
void EvaluateJS::ResultHandler(uString* result)
{
    uStackFrame __("Fuse.Triggers.Actions.EvaluateJS", "ResultHandler(string)");

    if (::g::Uno::Delegate::op_Inequality(Handler1, NULL))
        uPtr(Handler1)->Invoke(2, this, (::g::Fuse::Triggers::Actions::JSEventArgs*)::g::Fuse::Triggers::Actions::JSEventArgs::New2(result));
}

// public Fuse.Controls.IWebView get_WebView() [instance] :972
uObject* EvaluateJS::WebView()
{
    return _target;
}

// public void set_WebView(Fuse.Controls.IWebView value) [instance] :973
void EvaluateJS::WebView(uObject* value)
{
    _target = value;
}

// public generated EvaluateJS New() [static] :963
EvaluateJS* EvaluateJS::New2()
{
    EvaluateJS* obj1 = (EvaluateJS*)uNew(EvaluateJS_typeof());
    obj1->ctor_2();
    return obj1;
}
// }

// /Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Triggers/1.0.2/actions/$.uno
// -----------------------------------------------------------------------------------------------

// public sealed class GiveFocus :224
// {
// static GiveFocus() :224
static void GiveFocus__cctor__fn(uType* __type)
{
    GiveFocus::Singleton_ = GiveFocus::New2();
}

static void GiveFocus_build(uType* type)
{
    ::TYPES[1] = ::g::Fuse::Visual_typeof();
    type->SetFields(9,
        ::TYPES[1/*Fuse.Visual*/], offsetof(::g::Fuse::Triggers::Actions::GiveFocus, _Target), 0,
        ::g::Fuse::Triggers::Actions::TriggerAction_typeof(), (uintptr_t)&::g::Fuse::Triggers::Actions::GiveFocus::Singleton_, uFieldFlagsStatic);
    type->Reflection.SetFields(1,
        new uField("Singleton", 10));
    type->Reflection.SetFunctions(3,
        new uFunction(".ctor", NULL, (void*)GiveFocus__New2_fn, 0, true, type, 0),
        new uFunction("get_Target", NULL, (void*)GiveFocus__get_Target_fn, 0, false, ::TYPES[1/*Fuse.Visual*/], 0),
        new uFunction("set_Target", NULL, (void*)GiveFocus__set_Target_fn, 0, false, uVoid_typeof(), 1, ::TYPES[1/*Fuse.Visual*/]));
}

::g::Fuse::Triggers::Actions::TriggerAction_type* GiveFocus_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Actions::TriggerAction_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Triggers::Actions::TriggerAction_typeof();
    options.FieldCount = 11;
    options.ObjectSize = sizeof(GiveFocus);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Actions::TriggerAction_type);
    type = (::g::Fuse::Triggers::Actions::TriggerAction_type*)uClassType::New("Fuse.Triggers.Actions.GiveFocus", options);
    type->fp_build_ = GiveFocus_build;
    type->fp_ctor_ = (void*)GiveFocus__New2_fn;
    type->fp_cctor_ = GiveFocus__cctor__fn;
    type->fp_Perform = (void(*)(::g::Fuse::Triggers::Actions::TriggerAction*, ::g::Fuse::Node*))GiveFocus__Perform_fn;
    return type;
}

// public generated GiveFocus() :224
void GiveFocus__ctor_2_fn(GiveFocus* __this)
{
    __this->ctor_2();
}

// public generated GiveFocus New() :224
void GiveFocus__New2_fn(GiveFocus** __retval)
{
    *__retval = GiveFocus::New2();
}

// protected override sealed void Perform(Fuse.Node target) :228
void GiveFocus__Perform_fn(GiveFocus* __this, ::g::Fuse::Node* target)
{
    uStackFrame __("Fuse.Triggers.Actions.GiveFocus", "Perform(Fuse.Node)");
    ::g::Fuse::Visual* ind1;
    ::g::Fuse::Input::Focus::GiveTo((ind1 = __this->Target(), (ind1 != NULL) ? ind1 : uAs< ::g::Fuse::Visual*>(target, ::TYPES[1/*Fuse.Visual*/])));
}

// public generated Fuse.Visual get_Target() :226
void GiveFocus__get_Target_fn(GiveFocus* __this, ::g::Fuse::Visual** __retval)
{
    *__retval = __this->Target();
}

// public generated void set_Target(Fuse.Visual value) :226
void GiveFocus__set_Target_fn(GiveFocus* __this, ::g::Fuse::Visual* value)
{
    __this->Target(value);
}

uSStrong< ::g::Fuse::Triggers::Actions::TriggerAction*> GiveFocus::Singleton_;

// public generated GiveFocus() [instance] :224
void GiveFocus::ctor_2()
{
    ctor_1();
}

// public generated Fuse.Visual get_Target() [instance] :226
::g::Fuse::Visual* GiveFocus::Target()
{
    return _Target;
}

// public generated void set_Target(Fuse.Visual value) [instance] :226
void GiveFocus::Target(::g::Fuse::Visual* value)
{
    _Target = value;
}

// public generated GiveFocus New() [static] :224
GiveFocus* GiveFocus::New2()
{
    GiveFocus* obj2 = (GiveFocus*)uNew(GiveFocus_typeof());
    obj2->ctor_2();
    return obj2;
}
// }

// /Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Triggers/1.0.2/actions/$.uno
// -----------------------------------------------------------------------------------------------

// public sealed class Hide :1097
// {
static void Hide_build(uType* type)
{
    ::TYPES[10] = ::g::Fuse::Triggers::Actions::IHide_typeof();
    type->SetFields(9);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)Hide__New2_fn, 0, true, type, 0));
}

::g::Fuse::Triggers::Actions::TriggerAction_type* Hide_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Actions::TriggerAction_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Triggers::Actions::TriggerAction_typeof();
    options.FieldCount = 9;
    options.ObjectSize = sizeof(Hide);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Actions::TriggerAction_type);
    type = (::g::Fuse::Triggers::Actions::TriggerAction_type*)uClassType::New("Fuse.Triggers.Actions.Hide", options);
    type->fp_build_ = Hide_build;
    type->fp_ctor_ = (void*)Hide__New2_fn;
    type->fp_Perform = (void(*)(::g::Fuse::Triggers::Actions::TriggerAction*, ::g::Fuse::Node*))Hide__Perform_fn;
    return type;
}

// public generated Hide() :1097
void Hide__ctor_2_fn(Hide* __this)
{
    __this->ctor_2();
}

// public generated Hide New() :1097
void Hide__New2_fn(Hide** __retval)
{
    *__retval = Hide::New2();
}

// protected override sealed void Perform(Fuse.Node target) :1099
void Hide__Perform_fn(Hide* __this, ::g::Fuse::Node* target)
{
    uStackFrame __("Fuse.Triggers.Actions.Hide", "Perform(Fuse.Node)");

    if (uIs(target, ::TYPES[10/*Fuse.Triggers.Actions.IHide*/]))
        ::g::Fuse::Triggers::Actions::IHide::Hide(uInterface(uPtr((uObject*)target), ::TYPES[10/*Fuse.Triggers.Actions.IHide*/]));
}

// public generated Hide() [instance] :1097
void Hide::ctor_2()
{
    ctor_1();
}

// public generated Hide New() [static] :1097
Hide* Hide::New2()
{
    Hide* obj1 = (Hide*)uNew(Hide_typeof());
    obj1->ctor_2();
    return obj1;
}
// }

// /Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Triggers/1.0.2/actions/$.uno
// -----------------------------------------------------------------------------------------------

// public abstract interface ICollapse :1105
// {
uInterfaceType* ICollapse_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.Triggers.Actions.ICollapse", 0, 0);
    type->Reflection.SetFunctions(1,
        new uFunction("Collapse", NULL, NULL, offsetof(ICollapse, fp_Collapse), false, uVoid_typeof(), 0));
    return type;
}
// }

// /Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Triggers/1.0.2/actions/$.uno
// -----------------------------------------------------------------------------------------------

// public abstract interface IHide :1073
// {
uInterfaceType* IHide_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.Triggers.Actions.IHide", 0, 0);
    type->Reflection.SetFunctions(1,
        new uFunction("Hide", NULL, NULL, offsetof(IHide, fp_Hide), false, uVoid_typeof(), 0));
    return type;
}
// }

// /Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Triggers/1.0.2/actions/$.uno
// -----------------------------------------------------------------------------------------------

// public abstract interface IShow :1040
// {
uInterfaceType* IShow_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.Triggers.Actions.IShow", 0, 0);
    type->Reflection.SetFunctions(1,
        new uFunction("Show", NULL, NULL, offsetof(IShow, fp_Show), false, uVoid_typeof(), 0));
    return type;
}
// }

// /Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Triggers/1.0.2/actions/$.uno
// -----------------------------------------------------------------------------------------------

// public abstract interface ITaggedDebugProperty :133
// {
uInterfaceType* ITaggedDebugProperty_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.Triggers.Actions.ITaggedDebugProperty", 0, 0);
    type->Reflection.SetFunctions(2,
        new uFunction("GetStringValue", NULL, NULL, offsetof(ITaggedDebugProperty, fp_GetStringValue), false, ::g::Uno::String_typeof(), 0),
        new uFunction("GetTag", NULL, NULL, offsetof(ITaggedDebugProperty, fp_GetTag), false, ::g::Uno::String_typeof(), 0));
    return type;
}
// }

// /Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Triggers/1.0.2/actions/$.uno
// -----------------------------------------------------------------------------------------------

// public abstract interface IToggleable :870
// {
uInterfaceType* IToggleable_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.Triggers.Actions.IToggleable", 0, 0);
    type->Reflection.SetFunctions(1,
        new uFunction("Toggle", NULL, NULL, offsetof(IToggleable, fp_Toggle), false, uVoid_typeof(), 0));
    return type;
}
// }

// /Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Controls.WebView/1.0.2/$.uno
// -----------------------------------------------------------------------------------------------

// public sealed class JSEventArgs :868
// {
static void JSEventArgs_build(uType* type)
{
    ::STRINGS[6] = uString::Const("json");
    ::TYPES[11] = ::g::Fuse::Scripting::IEventSerializer_typeof();
    type->SetInterfaces(
        ::g::Fuse::Scripting::IScriptEvent_typeof(), offsetof(JSEventArgs_type, interface0));
    type->SetFields(0,
        ::g::Uno::String_typeof(), offsetof(::g::Fuse::Triggers::Actions::JSEventArgs, ResultJson), 0);
    type->Reflection.SetFields(1,
        new uField("ResultJson", 0));
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)JSEventArgs__New2_fn, 0, true, type, 1, ::g::Uno::String_typeof()));
}

JSEventArgs_type* JSEventArgs_typeof()
{
    static uSStrong<JSEventArgs_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::EventArgs_typeof();
    options.FieldCount = 1;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(JSEventArgs);
    options.TypeSize = sizeof(JSEventArgs_type);
    type = (JSEventArgs_type*)uClassType::New("Fuse.Triggers.Actions.JSEventArgs", options);
    type->fp_build_ = JSEventArgs_build;
    type->interface0.fp_Serialize = (void(*)(uObject*, uObject*))JSEventArgs__FuseScriptingIScriptEventSerialize_fn;
    return type;
}

// public JSEventArgs(string resultJson) :871
void JSEventArgs__ctor_1_fn(JSEventArgs* __this, uString* resultJson)
{
    __this->ctor_1(resultJson);
}

// private void Fuse.Scripting.IScriptEvent.Serialize(Fuse.Scripting.IEventSerializer s) :876
void JSEventArgs__FuseScriptingIScriptEventSerialize_fn(JSEventArgs* __this, uObject* s)
{
    uStackFrame __("Fuse.Triggers.Actions.JSEventArgs", "Fuse.Scripting.IScriptEvent.Serialize(Fuse.Scripting.IEventSerializer)");
    ::g::Fuse::Scripting::IEventSerializer::AddString(uInterface(uPtr(s), ::TYPES[11/*Fuse.Scripting.IEventSerializer*/]), ::STRINGS[6/*"json"*/], __this->ResultJson);
}

// public JSEventArgs New(string resultJson) :871
void JSEventArgs__New2_fn(uString* resultJson, JSEventArgs** __retval)
{
    *__retval = JSEventArgs::New2(resultJson);
}

// public JSEventArgs(string resultJson) [instance] :871
void JSEventArgs::ctor_1(uString* resultJson)
{
    ctor_();
    ResultJson = resultJson;
}

// public JSEventArgs New(string resultJson) [static] :871
JSEventArgs* JSEventArgs::New2(uString* resultJson)
{
    JSEventArgs* obj1 = (JSEventArgs*)uNew(JSEventArgs_typeof());
    obj1->ctor_1(resultJson);
    return obj1;
}
// }

// /Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Controls.WebView/1.0.2/$.uno
// -----------------------------------------------------------------------------------------------

// public delegate void JSEventHandler(object sender, Fuse.Triggers.Actions.JSEventArgs args) :882
uDelegateType* JSEventHandler_typeof()
{
    static uSStrong<uDelegateType*> type;
    if (type != NULL) return type;

    type = uDelegateType::New("Fuse.Triggers.Actions.JSEventHandler", 2, 0);
    type->SetSignature(uVoid_typeof(),
        uObject_typeof(),
        ::g::Fuse::Triggers::Actions::JSEventArgs_typeof());
    return type;
}

// /Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Controls.WebView/1.0.2/$.uno
// -----------------------------------------------------------------------------------------------

// public sealed class LoadHtml :739
// {
static void LoadHtml_build(uType* type)
{
    ::STRINGS[1] = uString::Const("");
    type->SetInterfaces(
        ::g::Fuse::Controls::ISourceReceiver_typeof(), offsetof(LoadHtml_type, interface0));
    type->SetFields(9,
        ::g::Fuse::Controls::HTML_typeof(), offsetof(::g::Fuse::Triggers::Actions::LoadHtml, _html), 0,
        ::g::Uno::String_typeof(), offsetof(::g::Fuse::Triggers::Actions::LoadHtml, _BaseUrl), 0,
        ::g::Uno::String_typeof(), offsetof(::g::Fuse::Triggers::Actions::LoadHtml, _Source), 0);
    type->Reflection.SetFunctions(7,
        new uFunction("get_BaseUrl", NULL, (void*)LoadHtml__get_BaseUrl_fn, 0, false, ::g::Uno::String_typeof(), 0),
        new uFunction("set_BaseUrl", NULL, (void*)LoadHtml__set_BaseUrl_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::String_typeof()),
        new uFunction("get_HTMLSource", NULL, (void*)LoadHtml__get_HTMLSource_fn, 0, false, ::g::Fuse::Controls::HTML_typeof(), 0),
        new uFunction("set_HTMLSource", NULL, (void*)LoadHtml__set_HTMLSource_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Controls::HTML_typeof()),
        new uFunction(".ctor", NULL, (void*)LoadHtml__New2_fn, 0, true, type, 0),
        new uFunction("get_Source", NULL, (void*)LoadHtml__get_Source_fn, 0, false, ::g::Uno::String_typeof(), 0),
        new uFunction("set_Source", NULL, (void*)LoadHtml__set_Source_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::String_typeof()));
}

LoadHtml_type* LoadHtml_typeof()
{
    static uSStrong<LoadHtml_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Triggers::Actions::WebViewNavAction_typeof();
    options.FieldCount = 12;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(LoadHtml);
    options.TypeSize = sizeof(LoadHtml_type);
    type = (LoadHtml_type*)uClassType::New("Fuse.Triggers.Actions.LoadHtml", options);
    type->fp_build_ = LoadHtml_build;
    type->fp_ctor_ = (void*)LoadHtml__New2_fn;
    type->fp_Execute = (void(*)(::g::Fuse::Triggers::Actions::WebViewNavAction*, ::g::Fuse::Controls::WebView*))LoadHtml__Execute_fn;
    type->interface0.fp_get_Source = (void(*)(uObject*, uString**))LoadHtml__get_Source_fn;
    type->interface0.fp_set_Source = (void(*)(uObject*, uString*))LoadHtml__set_Source_fn;
    return type;
}

// public generated LoadHtml() :739
void LoadHtml__ctor_3_fn(LoadHtml* __this)
{
    __this->ctor_3();
}

// public generated string get_BaseUrl() :762
void LoadHtml__get_BaseUrl_fn(LoadHtml* __this, uString** __retval)
{
    *__retval = __this->BaseUrl();
}

// public generated void set_BaseUrl(string value) :762
void LoadHtml__set_BaseUrl_fn(LoadHtml* __this, uString* value)
{
    __this->BaseUrl(value);
}

// private override sealed void Execute(Fuse.Controls.WebView webview) :764
void LoadHtml__Execute_fn(LoadHtml* __this, ::g::Fuse::Controls::WebView* webview)
{
    uStackFrame __("Fuse.Triggers.Actions.LoadHtml", "Execute(Fuse.Controls.WebView)");

    if (::g::Uno::String::op_Inequality(__this->Source(), ::STRINGS[1/*""*/]))
        uPtr(webview)->LoadHtml1(__this->Source(), __this->BaseUrl());
}

// public Fuse.Controls.HTML get_HTMLSource() :748
void LoadHtml__get_HTMLSource_fn(LoadHtml* __this, ::g::Fuse::Controls::HTML** __retval)
{
    *__retval = __this->HTMLSource();
}

// public void set_HTMLSource(Fuse.Controls.HTML value) :752
void LoadHtml__set_HTMLSource_fn(LoadHtml* __this, ::g::Fuse::Controls::HTML* value)
{
    __this->HTMLSource(value);
}

// public generated LoadHtml New() :739
void LoadHtml__New2_fn(LoadHtml** __retval)
{
    *__retval = LoadHtml::New2();
}

// public generated string get_Source() :743
void LoadHtml__get_Source_fn(LoadHtml* __this, uString** __retval)
{
    *__retval = __this->Source();
}

// public generated void set_Source(string value) :743
void LoadHtml__set_Source_fn(LoadHtml* __this, uString* value)
{
    __this->Source(value);
}

// public generated LoadHtml() [instance] :739
void LoadHtml::ctor_3()
{
    ctor_2();
}

// public generated string get_BaseUrl() [instance] :762
uString* LoadHtml::BaseUrl()
{
    return _BaseUrl;
}

// public generated void set_BaseUrl(string value) [instance] :762
void LoadHtml::BaseUrl(uString* value)
{
    _BaseUrl = value;
}

// public Fuse.Controls.HTML get_HTMLSource() [instance] :748
::g::Fuse::Controls::HTML* LoadHtml::HTMLSource()
{
    return _html;
}

// public void set_HTMLSource(Fuse.Controls.HTML value) [instance] :752
void LoadHtml::HTMLSource(::g::Fuse::Controls::HTML* value)
{
    uStackFrame __("Fuse.Triggers.Actions.LoadHtml", "set_HTMLSource(Fuse.Controls.HTML)");
    _html = value;
    uPtr(_html)->Receiver = (uObject*)this;
}

// public generated string get_Source() [instance] :743
uString* LoadHtml::Source()
{
    return _Source;
}

// public generated void set_Source(string value) [instance] :743
void LoadHtml::Source(uString* value)
{
    _Source = value;
}

// public generated LoadHtml New() [static] :739
LoadHtml* LoadHtml::New2()
{
    LoadHtml* obj1 = (LoadHtml*)uNew(LoadHtml_typeof());
    obj1->ctor_3();
    return obj1;
}
// }

// /Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Controls.WebView/1.0.2/$.uno
// -----------------------------------------------------------------------------------------------

// public sealed class LoadUrl :697
// {
static void LoadUrl_build(uType* type)
{
    ::STRINGS[1] = uString::Const("");
    type->SetFields(9,
        ::g::Uno::String_typeof(), offsetof(::g::Fuse::Triggers::Actions::LoadUrl, _Url), 0);
    type->Reflection.SetFunctions(3,
        new uFunction(".ctor", NULL, (void*)LoadUrl__New2_fn, 0, true, type, 0),
        new uFunction("get_Url", NULL, (void*)LoadUrl__get_Url_fn, 0, false, ::g::Uno::String_typeof(), 0),
        new uFunction("set_Url", NULL, (void*)LoadUrl__set_Url_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::String_typeof()));
}

::g::Fuse::Triggers::Actions::WebViewNavAction_type* LoadUrl_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Actions::WebViewNavAction_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Triggers::Actions::WebViewNavAction_typeof();
    options.FieldCount = 10;
    options.ObjectSize = sizeof(LoadUrl);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Actions::WebViewNavAction_type);
    type = (::g::Fuse::Triggers::Actions::WebViewNavAction_type*)uClassType::New("Fuse.Triggers.Actions.LoadUrl", options);
    type->fp_build_ = LoadUrl_build;
    type->fp_ctor_ = (void*)LoadUrl__New2_fn;
    type->fp_Execute = (void(*)(::g::Fuse::Triggers::Actions::WebViewNavAction*, ::g::Fuse::Controls::WebView*))LoadUrl__Execute_fn;
    return type;
}

// public generated LoadUrl() :697
void LoadUrl__ctor_3_fn(LoadUrl* __this)
{
    __this->ctor_3();
}

// private override sealed void Execute(Fuse.Controls.WebView webview) :702
void LoadUrl__Execute_fn(LoadUrl* __this, ::g::Fuse::Controls::WebView* webview)
{
    uStackFrame __("Fuse.Triggers.Actions.LoadUrl", "Execute(Fuse.Controls.WebView)");

    if (::g::Uno::String::op_Inequality(__this->Url(), ::STRINGS[1/*""*/]))
        uPtr(webview)->LoadUrl(__this->Url());
}

// public generated LoadUrl New() :697
void LoadUrl__New2_fn(LoadUrl** __retval)
{
    *__retval = LoadUrl::New2();
}

// public generated string get_Url() :700
void LoadUrl__get_Url_fn(LoadUrl* __this, uString** __retval)
{
    *__retval = __this->Url();
}

// public generated void set_Url(string value) :700
void LoadUrl__set_Url_fn(LoadUrl* __this, uString* value)
{
    __this->Url(value);
}

// public generated LoadUrl() [instance] :697
void LoadUrl::ctor_3()
{
    ctor_2();
}

// public generated string get_Url() [instance] :700
uString* LoadUrl::Url()
{
    return _Url;
}

// public generated void set_Url(string value) [instance] :700
void LoadUrl::Url(uString* value)
{
    _Url = value;
}

// public generated LoadUrl New() [static] :697
LoadUrl* LoadUrl::New2()
{
    LoadUrl* obj1 = (LoadUrl*)uNew(LoadUrl_typeof());
    obj1->ctor_3();
    return obj1;
}
// }

// /Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Triggers/1.0.2/actions/$.uno
// -----------------------------------------------------------------------------------------------

// public sealed class Pause :403
// {
static void Pause_build(uType* type)
{
    ::TYPES[12] = ::g::Fuse::Triggers::IPlayback_typeof();
    type->SetFields(10);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)Pause__New2_fn, 0, true, type, 0));
}

::g::Fuse::Triggers::Actions::TriggerAction_type* Pause_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Actions::TriggerAction_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Triggers::Actions::PlaybackAction_typeof();
    options.FieldCount = 10;
    options.ObjectSize = sizeof(Pause);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Actions::TriggerAction_type);
    type = (::g::Fuse::Triggers::Actions::TriggerAction_type*)uClassType::New("Fuse.Triggers.Actions.Pause", options);
    type->fp_build_ = Pause_build;
    type->fp_ctor_ = (void*)Pause__New2_fn;
    type->fp_Perform = (void(*)(::g::Fuse::Triggers::Actions::TriggerAction*, ::g::Fuse::Node*))Pause__Perform_fn;
    return type;
}

// public generated Pause() :403
void Pause__ctor_3_fn(Pause* __this)
{
    __this->ctor_3();
}

// public generated Pause New() :403
void Pause__New2_fn(Pause** __retval)
{
    *__retval = Pause::New2();
}

// protected override sealed void Perform(Fuse.Node target) :405
void Pause__Perform_fn(Pause* __this, ::g::Fuse::Node* target)
{
    uStackFrame __("Fuse.Triggers.Actions.Pause", "Perform(Fuse.Node)");
    uObject* ind1 = __this->Target();
    uObject* t = (ind1 != NULL) ? ind1 : uAs<uObject*>(target, ::TYPES[12/*Fuse.Triggers.IPlayback*/]);

    if (t != NULL)
        ::g::Fuse::Triggers::IPlayback::Pause(uInterface(uPtr(t), ::TYPES[12/*Fuse.Triggers.IPlayback*/]));
}

// public generated Pause() [instance] :403
void Pause::ctor_3()
{
    ctor_2();
}

// public generated Pause New() [static] :403
Pause* Pause::New2()
{
    Pause* obj2 = (Pause*)uNew(Pause_typeof());
    obj2->ctor_3();
    return obj2;
}
// }

// /Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Triggers/1.0.2/actions/$.uno
// -----------------------------------------------------------------------------------------------

// public class Play :472
// {
static void Play_build(uType* type)
{
    ::TYPES[12] = ::g::Fuse::Triggers::IPlayback_typeof();
    type->SetFields(10);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)Play__New2_fn, 0, true, type, 0));
}

::g::Fuse::Triggers::Actions::TriggerAction_type* Play_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Actions::TriggerAction_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Triggers::Actions::PlaybackAction_typeof();
    options.FieldCount = 10;
    options.ObjectSize = sizeof(Play);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Actions::TriggerAction_type);
    type = (::g::Fuse::Triggers::Actions::TriggerAction_type*)uClassType::New("Fuse.Triggers.Actions.Play", options);
    type->fp_build_ = Play_build;
    type->fp_ctor_ = (void*)Play__New2_fn;
    type->fp_Perform = (void(*)(::g::Fuse::Triggers::Actions::TriggerAction*, ::g::Fuse::Node*))Play__Perform_fn;
    return type;
}

// public generated Play() :472
void Play__ctor_3_fn(Play* __this)
{
    __this->ctor_3();
}

// public generated Play New() :472
void Play__New2_fn(Play** __retval)
{
    *__retval = Play::New2();
}

// protected override sealed void Perform(Fuse.Node target) :474
void Play__Perform_fn(Play* __this, ::g::Fuse::Node* target)
{
    uStackFrame __("Fuse.Triggers.Actions.Play", "Perform(Fuse.Node)");
    uObject* ind1 = __this->Target();
    uObject* t = (ind1 != NULL) ? ind1 : uAs<uObject*>(target, ::TYPES[12/*Fuse.Triggers.IPlayback*/]);

    if (t != NULL)
        ::g::Fuse::Triggers::IPlayback::Resume(uInterface(uPtr(t), ::TYPES[12/*Fuse.Triggers.IPlayback*/]));
}

// public generated Play() [instance] :472
void Play::ctor_3()
{
    ctor_2();
}

// public generated Play New() [static] :472
Play* Play::New2()
{
    Play* obj2 = (Play*)uNew(Play_typeof());
    obj2->ctor_3();
    return obj2;
}
// }

// /Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Triggers/1.0.2/actions/$.uno
// -----------------------------------------------------------------------------------------------

// public abstract class PlaybackAction :300
// {
static void PlaybackAction_build(uType* type)
{
    type->SetFields(9,
        ::g::Fuse::Triggers::IPlayback_typeof(), offsetof(::g::Fuse::Triggers::Actions::PlaybackAction, _Target), 0);
    type->Reflection.SetFunctions(2,
        new uFunction("get_Target", NULL, (void*)PlaybackAction__get_Target_fn, 0, false, ::g::Fuse::Triggers::IPlayback_typeof(), 0),
        new uFunction("set_Target", NULL, (void*)PlaybackAction__set_Target_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Triggers::IPlayback_typeof()));
}

::g::Fuse::Triggers::Actions::TriggerAction_type* PlaybackAction_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Actions::TriggerAction_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Triggers::Actions::TriggerAction_typeof();
    options.FieldCount = 10;
    options.ObjectSize = sizeof(PlaybackAction);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Actions::TriggerAction_type);
    type = (::g::Fuse::Triggers::Actions::TriggerAction_type*)uClassType::New("Fuse.Triggers.Actions.PlaybackAction", options);
    type->fp_build_ = PlaybackAction_build;
    return type;
}

// internal PlaybackAction() :304
void PlaybackAction__ctor_2_fn(PlaybackAction* __this)
{
    __this->ctor_2();
}

// public generated Fuse.Triggers.IPlayback get_Target() :302
void PlaybackAction__get_Target_fn(PlaybackAction* __this, uObject** __retval)
{
    *__retval = __this->Target();
}

// public generated void set_Target(Fuse.Triggers.IPlayback value) :302
void PlaybackAction__set_Target_fn(PlaybackAction* __this, uObject* value)
{
    __this->Target(value);
}

// internal PlaybackAction() [instance] :304
void PlaybackAction::ctor_2()
{
    ctor_1();
}

// public generated Fuse.Triggers.IPlayback get_Target() [instance] :302
uObject* PlaybackAction::Target()
{
    return _Target;
}

// public generated void set_Target(Fuse.Triggers.IPlayback value) [instance] :302
void PlaybackAction::Target(uObject* value)
{
    _Target = value;
}
// }

// /Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Triggers/1.0.2/actions/$.uno
// -----------------------------------------------------------------------------------------------

// public sealed class PlayTo :540
// {
static void PlayTo_build(uType* type)
{
    ::STRINGS[7] = uString::Const("Use the TimelineAction with `How=\"PlayTo\" instead.");
    ::STRINGS[8] = uString::Const("/Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Triggers/1.0.2/actions/$.uno");
    ::STRINGS[9] = uString::Const(".ctor");
    ::TYPES[12] = ::g::Fuse::Triggers::IPlayback_typeof();
    type->SetFields(10,
        ::g::Uno::Double_typeof(), offsetof(::g::Fuse::Triggers::Actions::PlayTo, _Progress), 0);
    type->Reflection.SetFunctions(3,
        new uFunction(".ctor", NULL, (void*)PlayTo__New2_fn, 0, true, type, 0),
        new uFunction("get_Progress", NULL, (void*)PlayTo__get_Progress_fn, 0, false, ::g::Uno::Double_typeof(), 0),
        new uFunction("set_Progress", NULL, (void*)PlayTo__set_Progress_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Double_typeof()));
}

::g::Fuse::Triggers::Actions::TriggerAction_type* PlayTo_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Actions::TriggerAction_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Triggers::Actions::PlaybackAction_typeof();
    options.FieldCount = 11;
    options.ObjectSize = sizeof(PlayTo);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Actions::TriggerAction_type);
    type = (::g::Fuse::Triggers::Actions::TriggerAction_type*)uClassType::New("Fuse.Triggers.Actions.PlayTo", options);
    type->fp_build_ = PlayTo_build;
    type->fp_ctor_ = (void*)PlayTo__New2_fn;
    type->fp_Perform = (void(*)(::g::Fuse::Triggers::Actions::TriggerAction*, ::g::Fuse::Node*))PlayTo__Perform_fn;
    return type;
}

// public PlayTo() :544
void PlayTo__ctor_3_fn(PlayTo* __this)
{
    __this->ctor_3();
}

// public PlayTo New() :544
void PlayTo__New2_fn(PlayTo** __retval)
{
    *__retval = PlayTo::New2();
}

// protected override sealed void Perform(Fuse.Node target) :550
void PlayTo__Perform_fn(PlayTo* __this, ::g::Fuse::Node* target)
{
    uStackFrame __("Fuse.Triggers.Actions.PlayTo", "Perform(Fuse.Node)");
    uObject* ind1 = __this->Target();
    uObject* t = (ind1 != NULL) ? ind1 : uAs<uObject*>(target, ::TYPES[12/*Fuse.Triggers.IPlayback*/]);

    if (t != NULL)
        ::g::Fuse::Triggers::IPlayback::PlayTo(uInterface(uPtr(t), ::TYPES[12/*Fuse.Triggers.IPlayback*/]), __this->Progress());
}

// public generated double get_Progress() :542
void PlayTo__get_Progress_fn(PlayTo* __this, double* __retval)
{
    *__retval = __this->Progress();
}

// public generated void set_Progress(double value) :542
void PlayTo__set_Progress_fn(PlayTo* __this, double* value)
{
    __this->Progress(*value);
}

// public PlayTo() [instance] :544
void PlayTo::ctor_3()
{
    ctor_2();
    ::g::Fuse::Diagnostics::Deprecated(::STRINGS[7/*"Use the Tim...*/], this, ::STRINGS[8/*"/Users/medb...*/], 547, ::STRINGS[9/*".ctor"*/]);
}

// public generated double get_Progress() [instance] :542
double PlayTo::Progress()
{
    return _Progress;
}

// public generated void set_Progress(double value) [instance] :542
void PlayTo::Progress(double value)
{
    _Progress = value;
}

// public PlayTo New() [static] :544
PlayTo* PlayTo::New2()
{
    PlayTo* obj2 = (PlayTo*)uNew(PlayTo_typeof());
    obj2->ctor_3();
    return obj2;
}
// }

// /Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Triggers/1.0.2/actions/$.uno
// -----------------------------------------------------------------------------------------------

// public sealed class Pulse :583
// {
static void Pulse_build(uType* type)
{
    ::TYPES[13] = ::g::Fuse::Triggers::IPulseTrigger_typeof();
    type->SetFields(9,
        ::TYPES[13/*Fuse.Triggers.IPulseTrigger*/], offsetof(::g::Fuse::Triggers::Actions::Pulse, _Target), 0);
    type->Reflection.SetFunctions(3,
        new uFunction(".ctor", NULL, (void*)Pulse__New2_fn, 0, true, type, 0),
        new uFunction("get_Target", NULL, (void*)Pulse__get_Target_fn, 0, false, ::TYPES[13/*Fuse.Triggers.IPulseTrigger*/], 0),
        new uFunction("set_Target", NULL, (void*)Pulse__set_Target_fn, 0, false, uVoid_typeof(), 1, ::TYPES[13/*Fuse.Triggers.IPulseTrigger*/]));
}

::g::Fuse::Triggers::Actions::TriggerAction_type* Pulse_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Actions::TriggerAction_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Triggers::Actions::TriggerAction_typeof();
    options.FieldCount = 10;
    options.ObjectSize = sizeof(Pulse);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Actions::TriggerAction_type);
    type = (::g::Fuse::Triggers::Actions::TriggerAction_type*)uClassType::New("Fuse.Triggers.Actions.Pulse", options);
    type->fp_build_ = Pulse_build;
    type->fp_ctor_ = (void*)Pulse__New2_fn;
    type->fp_Perform = (void(*)(::g::Fuse::Triggers::Actions::TriggerAction*, ::g::Fuse::Node*))Pulse__Perform_fn;
    return type;
}

// public generated Pulse() :583
void Pulse__ctor_2_fn(Pulse* __this)
{
    __this->ctor_2();
}

// public generated Pulse New() :583
void Pulse__New2_fn(Pulse** __retval)
{
    *__retval = Pulse::New2();
}

// protected override sealed void Perform(Fuse.Node target) :587
void Pulse__Perform_fn(Pulse* __this, ::g::Fuse::Node* target)
{
    uStackFrame __("Fuse.Triggers.Actions.Pulse", "Perform(Fuse.Node)");
    uObject* t = __this->Target();

    if (t != NULL)
        ::g::Fuse::Triggers::IPulseTrigger::Pulse(uInterface(uPtr(t), ::TYPES[13/*Fuse.Triggers.IPulseTrigger*/]));
}

// public generated Fuse.Triggers.IPulseTrigger get_Target() :585
void Pulse__get_Target_fn(Pulse* __this, uObject** __retval)
{
    *__retval = __this->Target();
}

// public generated void set_Target(Fuse.Triggers.IPulseTrigger value) :585
void Pulse__set_Target_fn(Pulse* __this, uObject* value)
{
    __this->Target(value);
}

// public generated Pulse() [instance] :583
void Pulse::ctor_2()
{
    ctor_1();
}

// public generated Fuse.Triggers.IPulseTrigger get_Target() [instance] :585
uObject* Pulse::Target()
{
    return _Target;
}

// public generated void set_Target(Fuse.Triggers.IPulseTrigger value) [instance] :585
void Pulse::Target(uObject* value)
{
    _Target = value;
}

// public generated Pulse New() [static] :583
Pulse* Pulse::New2()
{
    Pulse* obj1 = (Pulse*)uNew(Pulse_typeof());
    obj1->ctor_2();
    return obj1;
}
// }

// /Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Triggers/1.0.2/actions/$.uno
// -----------------------------------------------------------------------------------------------

// public sealed class PulseBackward :598
// {
static void PulseBackward_build(uType* type)
{
    type->SetFields(9,
        ::g::Fuse::Triggers::Timeline_typeof(), offsetof(::g::Fuse::Triggers::Actions::PulseBackward, _Target), 0);
    type->Reflection.SetFunctions(3,
        new uFunction(".ctor", NULL, (void*)PulseBackward__New2_fn, 0, true, type, 0),
        new uFunction("get_Target", NULL, (void*)PulseBackward__get_Target_fn, 0, false, ::g::Fuse::Triggers::Timeline_typeof(), 0),
        new uFunction("set_Target", NULL, (void*)PulseBackward__set_Target_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Triggers::Timeline_typeof()));
}

::g::Fuse::Triggers::Actions::TriggerAction_type* PulseBackward_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Actions::TriggerAction_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Triggers::Actions::TriggerAction_typeof();
    options.FieldCount = 10;
    options.ObjectSize = sizeof(PulseBackward);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Actions::TriggerAction_type);
    type = (::g::Fuse::Triggers::Actions::TriggerAction_type*)uClassType::New("Fuse.Triggers.Actions.PulseBackward", options);
    type->fp_build_ = PulseBackward_build;
    type->fp_ctor_ = (void*)PulseBackward__New2_fn;
    type->fp_Perform = (void(*)(::g::Fuse::Triggers::Actions::TriggerAction*, ::g::Fuse::Node*))PulseBackward__Perform_fn;
    return type;
}

// public generated PulseBackward() :598
void PulseBackward__ctor_2_fn(PulseBackward* __this)
{
    __this->ctor_2();
}

// public generated PulseBackward New() :598
void PulseBackward__New2_fn(PulseBackward** __retval)
{
    *__retval = PulseBackward::New2();
}

// protected override sealed void Perform(Fuse.Node target) :602
void PulseBackward__Perform_fn(PulseBackward* __this, ::g::Fuse::Node* target)
{
    uStackFrame __("Fuse.Triggers.Actions.PulseBackward", "Perform(Fuse.Node)");
    ::g::Fuse::Triggers::Timeline* t = __this->Target();

    if (t != NULL)
        uPtr(t)->PulseBackward1();
}

// public generated Fuse.Triggers.Timeline get_Target() :600
void PulseBackward__get_Target_fn(PulseBackward* __this, ::g::Fuse::Triggers::Timeline** __retval)
{
    *__retval = __this->Target();
}

// public generated void set_Target(Fuse.Triggers.Timeline value) :600
void PulseBackward__set_Target_fn(PulseBackward* __this, ::g::Fuse::Triggers::Timeline* value)
{
    __this->Target(value);
}

// public generated PulseBackward() [instance] :598
void PulseBackward::ctor_2()
{
    ctor_1();
}

// public generated Fuse.Triggers.Timeline get_Target() [instance] :600
::g::Fuse::Triggers::Timeline* PulseBackward::Target()
{
    return _Target;
}

// public generated void set_Target(Fuse.Triggers.Timeline value) [instance] :600
void PulseBackward::Target(::g::Fuse::Triggers::Timeline* value)
{
    _Target = value;
}

// public generated PulseBackward New() [static] :598
PulseBackward* PulseBackward::New2()
{
    PulseBackward* obj1 = (PulseBackward*)uNew(PulseBackward_typeof());
    obj1->ctor_2();
    return obj1;
}
// }

// /Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Triggers/1.0.2/actions/$.uno
// -----------------------------------------------------------------------------------------------

// public sealed class PulseForward :613
// {
static void PulseForward_build(uType* type)
{
    type->SetFields(9,
        ::g::Fuse::Triggers::Timeline_typeof(), offsetof(::g::Fuse::Triggers::Actions::PulseForward, _Target), 0);
    type->Reflection.SetFunctions(3,
        new uFunction(".ctor", NULL, (void*)PulseForward__New2_fn, 0, true, type, 0),
        new uFunction("get_Target", NULL, (void*)PulseForward__get_Target_fn, 0, false, ::g::Fuse::Triggers::Timeline_typeof(), 0),
        new uFunction("set_Target", NULL, (void*)PulseForward__set_Target_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Triggers::Timeline_typeof()));
}

::g::Fuse::Triggers::Actions::TriggerAction_type* PulseForward_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Actions::TriggerAction_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Triggers::Actions::TriggerAction_typeof();
    options.FieldCount = 10;
    options.ObjectSize = sizeof(PulseForward);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Actions::TriggerAction_type);
    type = (::g::Fuse::Triggers::Actions::TriggerAction_type*)uClassType::New("Fuse.Triggers.Actions.PulseForward", options);
    type->fp_build_ = PulseForward_build;
    type->fp_ctor_ = (void*)PulseForward__New2_fn;
    type->fp_Perform = (void(*)(::g::Fuse::Triggers::Actions::TriggerAction*, ::g::Fuse::Node*))PulseForward__Perform_fn;
    return type;
}

// public generated PulseForward() :613
void PulseForward__ctor_2_fn(PulseForward* __this)
{
    __this->ctor_2();
}

// public generated PulseForward New() :613
void PulseForward__New2_fn(PulseForward** __retval)
{
    *__retval = PulseForward::New2();
}

// protected override sealed void Perform(Fuse.Node target) :617
void PulseForward__Perform_fn(PulseForward* __this, ::g::Fuse::Node* target)
{
    uStackFrame __("Fuse.Triggers.Actions.PulseForward", "Perform(Fuse.Node)");
    ::g::Fuse::Triggers::Timeline* t = __this->Target();

    if (t != NULL)
        uPtr(t)->PulseForward();
}

// public generated Fuse.Triggers.Timeline get_Target() :615
void PulseForward__get_Target_fn(PulseForward* __this, ::g::Fuse::Triggers::Timeline** __retval)
{
    *__retval = __this->Target();
}

// public generated void set_Target(Fuse.Triggers.Timeline value) :615
void PulseForward__set_Target_fn(PulseForward* __this, ::g::Fuse::Triggers::Timeline* value)
{
    __this->Target(value);
}

// public generated PulseForward() [instance] :613
void PulseForward::ctor_2()
{
    ctor_1();
}

// public generated Fuse.Triggers.Timeline get_Target() [instance] :615
::g::Fuse::Triggers::Timeline* PulseForward::Target()
{
    return _Target;
}

// public generated void set_Target(Fuse.Triggers.Timeline value) [instance] :615
void PulseForward::Target(::g::Fuse::Triggers::Timeline* value)
{
    _Target = value;
}

// public generated PulseForward New() [static] :613
PulseForward* PulseForward::New2()
{
    PulseForward* obj1 = (PulseForward*)uNew(PulseForward_typeof());
    obj1->ctor_2();
    return obj1;
}
// }

// /Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.UserEvents/1.0.2/$.uno
// -----------------------------------------------------------------------------------------

// public sealed class RaiseUserEvent :192
// {
static void RaiseUserEvent_build(uType* type)
{
    ::STRINGS[10] = uString::Const("no UserEvent found: ");
    ::STRINGS[11] = uString::Const("/Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.UserEvents/1.0.2/$.uno");
    ::STRINGS[12] = uString::Const("Perform");
    ::TYPES[14] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Triggers::Actions::UserEventArg_typeof(), NULL);
    ::TYPES[15] = ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Uno::String_typeof(), uObject_typeof(), NULL);
    ::TYPES[16] = ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Triggers::Actions::UserEventArg_typeof(), NULL);
    ::TYPES[17] = ::g::Uno::Collections::IEnumerator_typeof();
    ::TYPES[18] = ::g::Uno::Collections::IEnumerator1_typeof()->MakeType(::g::Fuse::Triggers::Actions::UserEventArg_typeof(), NULL);
    ::TYPES[1] = ::g::Fuse::Visual_typeof();
    ::TYPES[19] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Triggers::Actions::UserEventArg_typeof(), NULL);
    type->SetFields(9,
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Triggers::Actions::UserEventArg_typeof(), NULL), offsetof(::g::Fuse::Triggers::Actions::RaiseUserEvent, _args), 0,
        ::g::Fuse::UserEvent_typeof(), offsetof(::g::Fuse::Triggers::Actions::RaiseUserEvent, _event), 0,
        ::g::Uno::UX::Selector_typeof(), offsetof(::g::Fuse::Triggers::Actions::RaiseUserEvent, _eventName), 0,
        ::TYPES[1/*Fuse.Visual*/], offsetof(::g::Fuse::Triggers::Actions::RaiseUserEvent, _eventTarget), 0);
    type->Reflection.SetFunctions(4,
        new uFunction("get_ArgList", NULL, (void*)RaiseUserEvent__get_ArgList_fn, 0, false, ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Triggers::Actions::UserEventArg_typeof(), NULL), 0),
        new uFunction("get_EventName", NULL, (void*)RaiseUserEvent__get_EventName_fn, 0, false, ::g::Uno::UX::Selector_typeof(), 0),
        new uFunction("set_EventName", NULL, (void*)RaiseUserEvent__set_EventName_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::UX::Selector_typeof()),
        new uFunction(".ctor", NULL, (void*)RaiseUserEvent__New2_fn, 0, true, type, 0));
}

::g::Fuse::Triggers::Actions::TriggerAction_type* RaiseUserEvent_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Actions::TriggerAction_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Triggers::Actions::TriggerAction_typeof();
    options.FieldCount = 13;
    options.ObjectSize = sizeof(RaiseUserEvent);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Actions::TriggerAction_type);
    type = (::g::Fuse::Triggers::Actions::TriggerAction_type*)uClassType::New("Fuse.Triggers.Actions.RaiseUserEvent", options);
    type->fp_build_ = RaiseUserEvent_build;
    type->fp_ctor_ = (void*)RaiseUserEvent__New2_fn;
    type->fp_Perform = (void(*)(::g::Fuse::Triggers::Actions::TriggerAction*, ::g::Fuse::Node*))RaiseUserEvent__Perform_fn;
    return type;
}

// public generated RaiseUserEvent() :192
void RaiseUserEvent__ctor_2_fn(RaiseUserEvent* __this)
{
    __this->ctor_2();
}

// public Uno.Collections.IList<Fuse.Triggers.Actions.UserEventArg> get_ArgList() :219
void RaiseUserEvent__get_ArgList_fn(RaiseUserEvent* __this, uObject** __retval)
{
    *__retval = __this->ArgList();
}

// private Uno.Collections.Dictionary<string, object> ConvertArgs() :245
void RaiseUserEvent__ConvertArgs_fn(RaiseUserEvent* __this, ::g::Uno::Collections::Dictionary** __retval)
{
    *__retval = __this->ConvertArgs();
}

// public Uno.UX.Selector get_EventName() :200
void RaiseUserEvent__get_EventName_fn(RaiseUserEvent* __this, ::g::Uno::UX::Selector* __retval)
{
    *__retval = __this->EventName();
}

// public void set_EventName(Uno.UX.Selector value) :201
void RaiseUserEvent__set_EventName_fn(RaiseUserEvent* __this, ::g::Uno::UX::Selector* value)
{
    __this->EventName(*value);
}

// public generated RaiseUserEvent New() :192
void RaiseUserEvent__New2_fn(RaiseUserEvent** __retval)
{
    *__retval = RaiseUserEvent::New2();
}

// protected override sealed void Perform(Fuse.Node target) :227
void RaiseUserEvent__Perform_fn(RaiseUserEvent* __this, ::g::Fuse::Node* target)
{
    uStackFrame __("Fuse.Triggers.Actions.RaiseUserEvent", "Perform(Fuse.Node)");
    ::g::Fuse::Visual* v = uAs< ::g::Fuse::Visual*>(target, ::TYPES[1/*Fuse.Visual*/]);

    if (v == NULL)
        return;

    if ((__this->_event == NULL) || (__this->_eventTarget != v))
    {
        ::g::Fuse::Visual* n;
        __this->_event = ::g::Fuse::UserEvent::ScanTree(v, __this->EventName(), &n);
        __this->_eventTarget = v;
    }

    if (__this->_event == NULL)
        ::g::Fuse::Diagnostics::UserError(::g::Uno::String::op_Addition2(::STRINGS[10/*"no UserEven...*/], ::g::Uno::UX::Selector__op_Implicit1(__this->EventName())), __this, ::STRINGS[11/*"/Users/medb...*/], 240, ::STRINGS[12/*"Perform"*/], NULL);
    else
        uPtr(__this->_event)->Raise(__this->ConvertArgs());
}

// public generated RaiseUserEvent() [instance] :192
void RaiseUserEvent::ctor_2()
{
    ctor_1();
}

// public Uno.Collections.IList<Fuse.Triggers.Actions.UserEventArg> get_ArgList() [instance] :219
uObject* RaiseUserEvent::ArgList()
{
    uStackFrame __("Fuse.Triggers.Actions.RaiseUserEvent", "get_ArgList()");

    if (_args == NULL)
        _args = (uObject*)((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[19/*Uno.Collections.List<Fuse.Triggers.Actions.UserEventArg>*/]));

    return _args;
}

// private Uno.Collections.Dictionary<string, object> ConvertArgs() [instance] :245
::g::Uno::Collections::Dictionary* RaiseUserEvent::ConvertArgs()
{
    uStackFrame __("Fuse.Triggers.Actions.RaiseUserEvent", "ConvertArgs()");
    ::g::Fuse::Triggers::Actions::UserEventArg* ret3;

    if ((_args == NULL) || (::g::Uno::Collections::ICollection::Count(uInterface(uPtr(_args), ::TYPES[14/*Uno.Collections.ICollection<Fuse.Triggers.Actions.UserEventArg>*/])) == 0))
        return NULL;

    ::g::Uno::Collections::Dictionary* d = (::g::Uno::Collections::Dictionary*)::g::Uno::Collections::Dictionary::New1(::TYPES[15/*Uno.Collections.Dictionary<string, object>*/]);

    for (uObject* enum1 = (uObject*)::g::Uno::Collections::IEnumerable::GetEnumerator(uInterface(uPtr(_args), ::TYPES[16/*Uno.Collections.IEnumerable<Fuse.Triggers.Actions.UserEventArg>*/])); ::g::Uno::Collections::IEnumerator::MoveNext(uInterface(uPtr(enum1), ::TYPES[17/*Uno.Collections.IEnumerator*/])); )
    {
        ::g::Fuse::Triggers::Actions::UserEventArg* arg = (::g::Uno::Collections::IEnumerator1::get_Current_ex(uInterface(uPtr(enum1), ::TYPES[18/*Uno.Collections.IEnumerator<Fuse.Triggers.Actions.UserEventArg>*/]), &ret3), ret3);
        ::g::Uno::Collections::Dictionary__set_Item_fn(uPtr(d), uPtr(arg)->Name(), uPtr(arg)->Value());
    }

    return d;
}

// public Uno.UX.Selector get_EventName() [instance] :200
::g::Uno::UX::Selector RaiseUserEvent::EventName()
{
    return _eventName;
}

// public void set_EventName(Uno.UX.Selector value) [instance] :201
void RaiseUserEvent::EventName(::g::Uno::UX::Selector value)
{
    _eventName = value;
    _event = NULL;
}

// public generated RaiseUserEvent New() [static] :192
RaiseUserEvent* RaiseUserEvent::New2()
{
    RaiseUserEvent* obj2 = (RaiseUserEvent*)uNew(RaiseUserEvent_typeof());
    obj2->ctor_2();
    return obj2;
}
// }

// /Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Triggers/1.0.2/actions/$.uno
// -----------------------------------------------------------------------------------------------

// public sealed class ReleaseFocus :248
// {
static void ReleaseFocus_build(uType* type)
{
    type->SetFields(9);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)ReleaseFocus__New2_fn, 0, true, type, 0));
}

::g::Fuse::Triggers::Actions::TriggerAction_type* ReleaseFocus_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Actions::TriggerAction_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Triggers::Actions::TriggerAction_typeof();
    options.FieldCount = 9;
    options.ObjectSize = sizeof(ReleaseFocus);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Actions::TriggerAction_type);
    type = (::g::Fuse::Triggers::Actions::TriggerAction_type*)uClassType::New("Fuse.Triggers.Actions.ReleaseFocus", options);
    type->fp_build_ = ReleaseFocus_build;
    type->fp_ctor_ = (void*)ReleaseFocus__New2_fn;
    type->fp_Perform = (void(*)(::g::Fuse::Triggers::Actions::TriggerAction*, ::g::Fuse::Node*))ReleaseFocus__Perform_fn;
    return type;
}

// public generated ReleaseFocus() :248
void ReleaseFocus__ctor_2_fn(ReleaseFocus* __this)
{
    __this->ctor_2();
}

// public generated ReleaseFocus New() :248
void ReleaseFocus__New2_fn(ReleaseFocus** __retval)
{
    *__retval = ReleaseFocus::New2();
}

// protected override sealed void Perform(Fuse.Node target) :250
void ReleaseFocus__Perform_fn(ReleaseFocus* __this, ::g::Fuse::Node* target)
{
    uStackFrame __("Fuse.Triggers.Actions.ReleaseFocus", "Perform(Fuse.Node)");
    ::g::Fuse::Input::Focus::GiveTo(NULL);
}

// public generated ReleaseFocus() [instance] :248
void ReleaseFocus::ctor_2()
{
    ctor_1();
}

// public generated ReleaseFocus New() [static] :248
ReleaseFocus* ReleaseFocus::New2()
{
    ReleaseFocus* obj1 = (ReleaseFocus*)uNew(ReleaseFocus_typeof());
    obj1->ctor_2();
    return obj1;
}
// }

// /Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Controls.Navigation/1.0.2/$.uno
// --------------------------------------------------------------------------------------------------

// public sealed class ReleasePage :273
// {
static void ReleasePage_build(uType* type)
{
    ::STRINGS[13] = uString::Const("Requires a Visual and Navigator parent");
    ::STRINGS[14] = uString::Const("/Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Controls.Navigation/1.0.2/$.uno");
    ::STRINGS[12] = uString::Const("Perform");
    ::TYPES[1] = ::g::Fuse::Visual_typeof();
    ::TYPES[20] = ::g::Fuse::Controls::Navigator_typeof();
    ::TYPES[21] = ::g::Uno::Action_typeof();
    type->SetFields(9,
        ::TYPES[20/*Fuse.Controls.Navigator*/], offsetof(::g::Fuse::Triggers::Actions::ReleasePage, _pendNavigator), 0,
        ::TYPES[1/*Fuse.Visual*/], offsetof(::g::Fuse::Triggers::Actions::ReleasePage, _pendVisual), 0);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)ReleasePage__New2_fn, 0, true, type, 0));
}

::g::Fuse::Triggers::Actions::TriggerAction_type* ReleasePage_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Actions::TriggerAction_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Triggers::Actions::TriggerAction_typeof();
    options.FieldCount = 11;
    options.ObjectSize = sizeof(ReleasePage);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Actions::TriggerAction_type);
    type = (::g::Fuse::Triggers::Actions::TriggerAction_type*)uClassType::New("Fuse.Triggers.Actions.ReleasePage", options);
    type->fp_build_ = ReleasePage_build;
    type->fp_ctor_ = (void*)ReleasePage__New2_fn;
    type->fp_Perform = (void(*)(::g::Fuse::Triggers::Actions::TriggerAction*, ::g::Fuse::Node*))ReleasePage__Perform_fn;
    return type;
}

// public generated ReleasePage() :273
void ReleasePage__ctor_2_fn(ReleasePage* __this)
{
    __this->ctor_2();
}

// private void DeferredRelease() :292
void ReleasePage__DeferredRelease_fn(ReleasePage* __this)
{
    __this->DeferredRelease();
}

// public generated ReleasePage New() :273
void ReleasePage__New2_fn(ReleasePage** __retval)
{
    *__retval = ReleasePage::New2();
}

// protected override sealed void Perform(Fuse.Node n) :277
void ReleasePage__Perform_fn(ReleasePage* __this, ::g::Fuse::Node* n)
{
    uStackFrame __("Fuse.Triggers.Actions.ReleasePage", "Perform(Fuse.Node)");
    __this->_pendVisual = uAs< ::g::Fuse::Visual*>(n, ::TYPES[1/*Fuse.Visual*/]);
    __this->_pendNavigator = ((n == NULL) ? uCast< ::g::Fuse::Controls::Navigator*>(NULL, ::TYPES[20/*Fuse.Controls.Navigator*/]) : uAs< ::g::Fuse::Controls::Navigator*>(uPtr(n)->Parent(), ::TYPES[20/*Fuse.Controls.Navigator*/]));

    if ((__this->_pendVisual == NULL) || (__this->_pendNavigator == NULL))
    {
        ::g::Fuse::Diagnostics::UserError(::STRINGS[13/*"Requires a ...*/], __this, ::STRINGS[14/*"/Users/medb...*/], 283, ::STRINGS[12/*"Perform"*/], NULL);
        return;
    }

    ::g::Fuse::UpdateManager::AddDeferredAction(uDelegate::New(::TYPES[21/*Uno.Action*/], (void*)ReleasePage__DeferredRelease_fn, __this), -1, 0);
}

// public generated ReleasePage() [instance] :273
void ReleasePage::ctor_2()
{
    ctor_1();
}

// private void DeferredRelease() [instance] :292
void ReleasePage::DeferredRelease()
{
    uStackFrame __("Fuse.Triggers.Actions.ReleasePage", "DeferredRelease()");

    if ((_pendNavigator == NULL) || (_pendVisual == NULL))
        return;

    uPtr(_pendNavigator)->ReleasePage(_pendVisual);
    _pendNavigator = NULL;
    _pendVisual = NULL;
}

// public generated ReleasePage New() [static] :273
ReleasePage* ReleasePage::New2()
{
    ReleasePage* obj1 = (ReleasePage*)uNew(ReleasePage_typeof());
    obj1->ctor_2();
    return obj1;
}
// }

// /Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Controls.WebView/1.0.2/$.uno
// -----------------------------------------------------------------------------------------------

// public sealed class Reload :673
// {
static void Reload_build(uType* type)
{
    type->SetFields(9);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)Reload__New2_fn, 0, true, type, 0));
}

::g::Fuse::Triggers::Actions::WebViewNavAction_type* Reload_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Actions::WebViewNavAction_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Triggers::Actions::WebViewNavAction_typeof();
    options.FieldCount = 9;
    options.ObjectSize = sizeof(Reload);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Actions::WebViewNavAction_type);
    type = (::g::Fuse::Triggers::Actions::WebViewNavAction_type*)uClassType::New("Fuse.Triggers.Actions.Reload", options);
    type->fp_build_ = Reload_build;
    type->fp_ctor_ = (void*)Reload__New2_fn;
    type->fp_Execute = (void(*)(::g::Fuse::Triggers::Actions::WebViewNavAction*, ::g::Fuse::Controls::WebView*))Reload__Execute_fn;
    return type;
}

// public generated Reload() :673
void Reload__ctor_3_fn(Reload* __this)
{
    __this->ctor_3();
}

// private override sealed void Execute(Fuse.Controls.WebView webview) :675
void Reload__Execute_fn(Reload* __this, ::g::Fuse::Controls::WebView* webview)
{
    uStackFrame __("Fuse.Triggers.Actions.Reload", "Execute(Fuse.Controls.WebView)");
    uPtr(webview)->Reload();
}

// public generated Reload New() :673
void Reload__New2_fn(Reload** __retval)
{
    *__retval = Reload::New2();
}

// public generated Reload() [instance] :673
void Reload::ctor_3()
{
    ctor_2();
}

// public generated Reload New() [static] :673
Reload* Reload::New2()
{
    Reload* obj1 = (Reload*)uNew(Reload_typeof());
    obj1->ctor_3();
    return obj1;
}
// }

// /Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Triggers/1.0.2/actions/$.uno
// -----------------------------------------------------------------------------------------------

// public sealed class Resume :485
// {
static void Resume_build(uType* type)
{
    ::STRINGS[15] = uString::Const("Use `Play` instead of `Resume`");
    ::STRINGS[8] = uString::Const("/Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Triggers/1.0.2/actions/$.uno");
    ::STRINGS[9] = uString::Const(".ctor");
    type->SetFields(10);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)Resume__New3_fn, 0, true, type, 0));
}

::g::Fuse::Triggers::Actions::TriggerAction_type* Resume_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Actions::TriggerAction_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Triggers::Actions::Play_typeof();
    options.FieldCount = 10;
    options.ObjectSize = sizeof(Resume);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Actions::TriggerAction_type);
    type = (::g::Fuse::Triggers::Actions::TriggerAction_type*)uClassType::New("Fuse.Triggers.Actions.Resume", options);
    type->fp_build_ = Resume_build;
    type->fp_ctor_ = (void*)Resume__New3_fn;
    return type;
}

// public Resume() :487
void Resume__ctor_4_fn(Resume* __this)
{
    __this->ctor_4();
}

// public Resume New() :487
void Resume__New3_fn(Resume** __retval)
{
    *__retval = Resume::New3();
}

// public Resume() [instance] :487
void Resume::ctor_4()
{
    ctor_3();
    ::g::Fuse::Diagnostics::Deprecated(::STRINGS[15/*"Use `Play` ...*/], this, ::STRINGS[8/*"/Users/medb...*/], 490, ::STRINGS[9/*".ctor"*/]);
}

// public Resume New() [static] :487
Resume* Resume::New3()
{
    Resume* obj1 = (Resume*)uNew(Resume_typeof());
    obj1->ctor_4();
    return obj1;
}
// }

// /Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Controls/1.0.2/triggers/$.uno
// ------------------------------------------------------------------------------------------------

// public sealed class SendToBack :84
// {
static void SendToBack_build(uType* type)
{
    ::TYPES[1] = ::g::Fuse::Visual_typeof();
    type->SetFields(9,
        ::TYPES[1/*Fuse.Visual*/], offsetof(::g::Fuse::Triggers::Actions::SendToBack, _Target), 0);
    type->Reflection.SetFunctions(3,
        new uFunction(".ctor", NULL, (void*)SendToBack__New2_fn, 0, true, type, 0),
        new uFunction("get_Target", NULL, (void*)SendToBack__get_Target_fn, 0, false, ::TYPES[1/*Fuse.Visual*/], 0),
        new uFunction("set_Target", NULL, (void*)SendToBack__set_Target_fn, 0, false, uVoid_typeof(), 1, ::TYPES[1/*Fuse.Visual*/]));
}

::g::Fuse::Triggers::Actions::TriggerAction_type* SendToBack_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Actions::TriggerAction_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Triggers::Actions::TriggerAction_typeof();
    options.FieldCount = 10;
    options.ObjectSize = sizeof(SendToBack);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Actions::TriggerAction_type);
    type = (::g::Fuse::Triggers::Actions::TriggerAction_type*)uClassType::New("Fuse.Triggers.Actions.SendToBack", options);
    type->fp_build_ = SendToBack_build;
    type->fp_ctor_ = (void*)SendToBack__New2_fn;
    type->fp_Perform = (void(*)(::g::Fuse::Triggers::Actions::TriggerAction*, ::g::Fuse::Node*))SendToBack__Perform_fn;
    return type;
}

// public generated SendToBack() :84
void SendToBack__ctor_2_fn(SendToBack* __this)
{
    __this->ctor_2();
}

// public generated SendToBack New() :84
void SendToBack__New2_fn(SendToBack** __retval)
{
    *__retval = SendToBack::New2();
}

// protected override sealed void Perform(Fuse.Node target) :88
void SendToBack__Perform_fn(SendToBack* __this, ::g::Fuse::Node* target)
{
    uStackFrame __("Fuse.Triggers.Actions.SendToBack", "Perform(Fuse.Node)");
    ::g::Fuse::Visual* ind1 = __this->Target();
    ::g::Fuse::Visual* elm = (ind1 != NULL) ? ind1 : uAs< ::g::Fuse::Visual*>(target, ::TYPES[1/*Fuse.Visual*/]);

    if (elm != NULL)
    {
        ::g::Fuse::Visual* panel = uAs< ::g::Fuse::Visual*>(uPtr(elm)->Parent(), ::TYPES[1/*Fuse.Visual*/]);

        if (panel != NULL)
            uPtr(panel)->SendToBack(elm);
    }
}

// public generated Fuse.Visual get_Target() :86
void SendToBack__get_Target_fn(SendToBack* __this, ::g::Fuse::Visual** __retval)
{
    *__retval = __this->Target();
}

// public generated void set_Target(Fuse.Visual value) :86
void SendToBack__set_Target_fn(SendToBack* __this, ::g::Fuse::Visual* value)
{
    __this->Target(value);
}

// public generated SendToBack() [instance] :84
void SendToBack::ctor_2()
{
    ctor_1();
}

// public generated Fuse.Visual get_Target() [instance] :86
::g::Fuse::Visual* SendToBack::Target()
{
    return _Target;
}

// public generated void set_Target(Fuse.Visual value) [instance] :86
void SendToBack::Target(::g::Fuse::Visual* value)
{
    _Target = value;
}

// public generated SendToBack New() [static] :84
SendToBack* SendToBack::New2()
{
    SendToBack* obj2 = (SendToBack*)uNew(SendToBack_typeof());
    obj2->ctor_2();
    return obj2;
}
// }

// /Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Triggers/1.0.2/actions/$.uno
// -----------------------------------------------------------------------------------------------

// public sealed class Set<T> :664
// {
static void Set_build(uType* type)
{
    ::STRINGS[16] = uString::Const("target");
    ::TYPES[22] = ::g::Fuse::Internal::BlenderMap_typeof();
    type->SetPrecalc(
        type->T(0),
        ::g::Fuse::Internal::BlenderMap_typeof()->MakeMethod(0/*Get<T>*/, type->T(0), NULL));
    type->SetFields(9,
        ::g::Fuse::Internal::Blender_typeof()->MakeType(type->T(0), NULL), offsetof(::g::Fuse::Triggers::Actions::Set, _blender), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Triggers::Actions::Set, _hasIncrement), 0,
        type->T(0), (uintptr_t)0, uFieldFlagsConstrained,
        ::g::Uno::UX::Expression_typeof()->MakeType(type->T(0), NULL), offsetof(::g::Fuse::Triggers::Actions::Set, _Expression), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(type->T(0), NULL), offsetof(::g::Fuse::Triggers::Actions::Set, _Target), 0,
        type->T(0), (uintptr_t)0, uFieldFlagsConstrained);
    type->Reflection.SetFunctions(8,
        new uFunction("get_Expression", NULL, (void*)Set__get_Expression_fn, 0, false, ::g::Uno::UX::Expression_typeof()->MakeType(type->T(0), NULL), 0),
        new uFunction("set_Expression", NULL, (void*)Set__set_Expression_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::UX::Expression_typeof()->MakeType(type->T(0), NULL)),
        new uFunction("get_Increment", NULL, (void*)Set__get_Increment_fn, 0, false, type->T(0), 0),
        new uFunction("set_Increment", NULL, (void*)Set__set_Increment_fn, 0, false, uVoid_typeof(), 1, type->T(0)),
        new uFunction(".ctor", type, (void*)Set__New2_fn, 0, true, type, 1, ::g::Uno::UX::Property1_typeof()->MakeType(type->T(0), NULL)),
        new uFunction("get_Target", NULL, (void*)Set__get_Target_fn, 0, false, ::g::Uno::UX::Property1_typeof()->MakeType(type->T(0), NULL), 0),
        new uFunction("get_Value", NULL, (void*)Set__get_Value_fn, 0, false, type->T(0), 0),
        new uFunction("set_Value", NULL, (void*)Set__set_Value_fn, 0, false, uVoid_typeof(), 1, type->T(0)));
}

::g::Fuse::Triggers::Actions::TriggerAction_type* Set_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Actions::TriggerAction_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Triggers::Actions::TriggerAction_typeof();
    options.FieldCount = 15;
    options.GenericCount = 1;
    options.PrecalcCount = 2;
    options.ObjectSize = sizeof(Set);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Actions::TriggerAction_type);
    type = (::g::Fuse::Triggers::Actions::TriggerAction_type*)uClassType::New("Fuse.Triggers.Actions.Set`1", options);
    type->fp_build_ = Set_build;
    type->fp_Perform = (void(*)(::g::Fuse::Triggers::Actions::TriggerAction*, ::g::Fuse::Node*))Set__Perform_fn;
    return type;
}

// public Set(Uno.UX.Property<T> target) :689
void Set__ctor_2_fn(Set* __this, ::g::Uno::UX::Property1* target)
{
    __this->ctor_2(target);
}

// public generated Uno.UX.Expression<T> get_Expression() :686
void Set__get_Expression_fn(Set* __this, uDelegate** __retval)
{
    *__retval = __this->Expression();
}

// public generated void set_Expression(Uno.UX.Expression<T> value) :686
void Set__set_Expression_fn(Set* __this, uDelegate* value)
{
    __this->Expression(value);
}

// public T get_Increment() :730
void Set__get_Increment_fn(Set* __this, uTRef __retval)
{
    return __retval.Store(__this->_increment()), void();
}

// public void set_Increment(T value) :731
void Set__set_Increment_fn(Set* __this, void* value)
{
    uType* __types[] = {
        __this->__type->Precalced(1/*Fuse.Internal.BlenderMap.Get<T>*/),
    };
    uStackFrame __("Fuse.Triggers.Actions.Set`1", "set_Increment(T)");
    __this->_increment() = value;
    __this->_hasIncrement = true;

    if (__this->_blender == NULL)
        __this->_blender = ((::g::Fuse::Internal::Blender*)::g::Fuse::Internal::BlenderMap::Get(__types[0]));
}

// public Set New(Uno.UX.Property<T> target) :689
void Set__New2_fn(uType* __type, ::g::Uno::UX::Property1* target, Set** __retval)
{
    *__retval = Set::New2(__type, target);
}

// protected override sealed void Perform(Fuse.Node target) :701
void Set__Perform_fn(Set* __this, ::g::Fuse::Node* target)
{
    uType* __types[] = {
        __this->__type->Precalced(0/*T*/),
    };
    uStackFrame __("Fuse.Triggers.Actions.Set`1", "Perform(Fuse.Node)");
    uT ret2(__types[0], U_ALLOCA(__types[0]->ValueSize));
    uT ret3(__types[0], U_ALLOCA(__types[0]->ValueSize));
    uT ret4(__types[0], U_ALLOCA(__types[0]->ValueSize));
    uT ret5(__types[0], U_ALLOCA(__types[0]->ValueSize));

    if (__this->_hasIncrement)
        Set__Update_fn(__this, (uPtr(__this->_blender)->Add_ex((::g::Uno::UX::Property1__Get_fn(uPtr(__this->Target()), &ret3), ret3), __this->_increment(), &ret2), ret2));
    else if (::g::Uno::Delegate::op_Inequality(__this->Expression(), NULL))
        Set__Update_fn(__this, (uPtr(__this->Expression())->Invoke(&ret4), ret4));
    else
        Set__Update_fn(__this, (Set__get_Value_fn(__this, &ret5), ret5));
}

// public generated Uno.UX.Property<T> get_Target() :677
void Set__get_Target_fn(Set* __this, ::g::Uno::UX::Property1** __retval)
{
    *__retval = __this->Target();
}

// private generated void set_Target(Uno.UX.Property<T> value) :677
void Set__set_Target_fn(Set* __this, ::g::Uno::UX::Property1* value)
{
    __this->Target(value);
}

// private void Update(T value) :696
void Set__Update_fn(Set* __this, void* value)
{
    uStackFrame __("Fuse.Triggers.Actions.Set`1", "Update(T)");
    ::g::Uno::UX::Property1__Set_fn(uPtr(__this->Target()), value, NULL);
}

// public generated T get_Value() :683
void Set__get_Value_fn(Set* __this, uTRef __retval)
{
    return __retval.Store(__this->_Value()), void();
}

// public generated void set_Value(T value) :683
void Set__set_Value_fn(Set* __this, void* value)
{
    __this->_Value() = value;
}

// public Set(Uno.UX.Property<T> target) [instance] :689
void Set::ctor_2(::g::Uno::UX::Property1* target)
{
    uStackFrame __("Fuse.Triggers.Actions.Set`1", ".ctor(Uno.UX.Property<T>)");
    ctor_1();

    if (target == NULL)
        U_THROW(::g::Uno::ArgumentNullException::New6(::STRINGS[16/*"target"*/]));

    Target(target);
}

// public generated Uno.UX.Expression<T> get_Expression() [instance] :686
uDelegate* Set::Expression()
{
    return _Expression;
}

// public generated void set_Expression(Uno.UX.Expression<T> value) [instance] :686
void Set::Expression(uDelegate* value)
{
    _Expression = value;
}

// public generated Uno.UX.Property<T> get_Target() [instance] :677
::g::Uno::UX::Property1* Set::Target()
{
    return _Target;
}

// private generated void set_Target(Uno.UX.Property<T> value) [instance] :677
void Set::Target(::g::Uno::UX::Property1* value)
{
    _Target = value;
}

// public Set New(Uno.UX.Property<T> target) [static] :689
Set* Set::New2(uType* __type, ::g::Uno::UX::Property1* target)
{
    Set* obj1 = (Set*)uNew(__type);
    obj1->ctor_2(target);
    return obj1;
}
// }

// /Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Triggers/1.0.2/actions/$.uno
// -----------------------------------------------------------------------------------------------

// public sealed class Show :1065
// {
static void Show_build(uType* type)
{
    ::TYPES[23] = ::g::Fuse::Triggers::Actions::IShow_typeof();
    type->SetFields(9);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)Show__New2_fn, 0, true, type, 0));
}

::g::Fuse::Triggers::Actions::TriggerAction_type* Show_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Actions::TriggerAction_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Triggers::Actions::TriggerAction_typeof();
    options.FieldCount = 9;
    options.ObjectSize = sizeof(Show);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Actions::TriggerAction_type);
    type = (::g::Fuse::Triggers::Actions::TriggerAction_type*)uClassType::New("Fuse.Triggers.Actions.Show", options);
    type->fp_build_ = Show_build;
    type->fp_ctor_ = (void*)Show__New2_fn;
    type->fp_Perform = (void(*)(::g::Fuse::Triggers::Actions::TriggerAction*, ::g::Fuse::Node*))Show__Perform_fn;
    return type;
}

// public generated Show() :1065
void Show__ctor_2_fn(Show* __this)
{
    __this->ctor_2();
}

// public generated Show New() :1065
void Show__New2_fn(Show** __retval)
{
    *__retval = Show::New2();
}

// protected override sealed void Perform(Fuse.Node target) :1067
void Show__Perform_fn(Show* __this, ::g::Fuse::Node* target)
{
    uStackFrame __("Fuse.Triggers.Actions.Show", "Perform(Fuse.Node)");

    if (uIs(target, ::TYPES[23/*Fuse.Triggers.Actions.IShow*/]))
        ::g::Fuse::Triggers::Actions::IShow::Show(uInterface(uPtr((uObject*)target), ::TYPES[23/*Fuse.Triggers.Actions.IShow*/]));
}

// public generated Show() [instance] :1065
void Show::ctor_2()
{
    ctor_1();
}

// public generated Show New() [static] :1065
Show* Show::New2()
{
    Show* obj1 = (Show*)uNew(Show_typeof());
    obj1->ctor_2();
    return obj1;
}
// }

// /Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Triggers/1.0.2/actions/$.uno
// -----------------------------------------------------------------------------------------------

// public sealed class Stop :371
// {
static void Stop_build(uType* type)
{
    ::TYPES[12] = ::g::Fuse::Triggers::IPlayback_typeof();
    type->SetFields(10);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)Stop__New2_fn, 0, true, type, 0));
}

::g::Fuse::Triggers::Actions::TriggerAction_type* Stop_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Actions::TriggerAction_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Triggers::Actions::PlaybackAction_typeof();
    options.FieldCount = 10;
    options.ObjectSize = sizeof(Stop);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Actions::TriggerAction_type);
    type = (::g::Fuse::Triggers::Actions::TriggerAction_type*)uClassType::New("Fuse.Triggers.Actions.Stop", options);
    type->fp_build_ = Stop_build;
    type->fp_ctor_ = (void*)Stop__New2_fn;
    type->fp_Perform = (void(*)(::g::Fuse::Triggers::Actions::TriggerAction*, ::g::Fuse::Node*))Stop__Perform_fn;
    return type;
}

// public generated Stop() :371
void Stop__ctor_3_fn(Stop* __this)
{
    __this->ctor_3();
}

// public generated Stop New() :371
void Stop__New2_fn(Stop** __retval)
{
    *__retval = Stop::New2();
}

// protected override sealed void Perform(Fuse.Node target) :373
void Stop__Perform_fn(Stop* __this, ::g::Fuse::Node* target)
{
    uStackFrame __("Fuse.Triggers.Actions.Stop", "Perform(Fuse.Node)");
    uObject* ind1 = __this->Target();
    uObject* t = (ind1 != NULL) ? ind1 : uAs<uObject*>(target, ::TYPES[12/*Fuse.Triggers.IPlayback*/]);

    if (t != NULL)
        ::g::Fuse::Triggers::IPlayback::Stop(uInterface(uPtr(t), ::TYPES[12/*Fuse.Triggers.IPlayback*/]));
}

// public generated Stop() [instance] :371
void Stop::ctor_3()
{
    ctor_2();
}

// public generated Stop New() [static] :371
Stop* Stop::New2()
{
    Stop* obj2 = (Stop*)uNew(Stop_typeof());
    obj2->ctor_3();
    return obj2;
}
// }

// /Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Controls.WebView/1.0.2/$.uno
// -----------------------------------------------------------------------------------------------

// public sealed class StopLoading :685
// {
static void StopLoading_build(uType* type)
{
    type->SetFields(9);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)StopLoading__New2_fn, 0, true, type, 0));
}

::g::Fuse::Triggers::Actions::WebViewNavAction_type* StopLoading_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Actions::WebViewNavAction_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Triggers::Actions::WebViewNavAction_typeof();
    options.FieldCount = 9;
    options.ObjectSize = sizeof(StopLoading);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Actions::WebViewNavAction_type);
    type = (::g::Fuse::Triggers::Actions::WebViewNavAction_type*)uClassType::New("Fuse.Triggers.Actions.StopLoading", options);
    type->fp_build_ = StopLoading_build;
    type->fp_ctor_ = (void*)StopLoading__New2_fn;
    type->fp_Execute = (void(*)(::g::Fuse::Triggers::Actions::WebViewNavAction*, ::g::Fuse::Controls::WebView*))StopLoading__Execute_fn;
    return type;
}

// public generated StopLoading() :685
void StopLoading__ctor_3_fn(StopLoading* __this)
{
    __this->ctor_3();
}

// private override sealed void Execute(Fuse.Controls.WebView webview) :687
void StopLoading__Execute_fn(StopLoading* __this, ::g::Fuse::Controls::WebView* webview)
{
    uStackFrame __("Fuse.Triggers.Actions.StopLoading", "Execute(Fuse.Controls.WebView)");
    uPtr(webview)->Stop();
}

// public generated StopLoading New() :685
void StopLoading__New2_fn(StopLoading** __retval)
{
    *__retval = StopLoading::New2();
}

// public generated StopLoading() [instance] :685
void StopLoading::ctor_3()
{
    ctor_2();
}

// public generated StopLoading New() [static] :685
StopLoading* StopLoading::New2()
{
    StopLoading* obj1 = (StopLoading*)uNew(StopLoading_typeof());
    obj1->ctor_3();
    return obj1;
}
// }

// /Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Triggers/1.0.2/actions/$.uno
// -----------------------------------------------------------------------------------------------

// public sealed class TimelineAction :811
// {
static void TimelineAction_build(uType* type)
{
    ::STRINGS[17] = uString::Const("`TimelineAction` called without a `Timeline` `Target`");
    ::STRINGS[8] = uString::Const("/Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Triggers/1.0.2/actions/$.uno");
    ::STRINGS[12] = uString::Const("Perform");
    type->SetFields(9,
        ::g::Fuse::Triggers::Actions::TimelineActionHow_typeof(), offsetof(::g::Fuse::Triggers::Actions::TimelineAction, _How), 0,
        ::g::Uno::Double_typeof(), offsetof(::g::Fuse::Triggers::Actions::TimelineAction, _Progress), 0,
        ::g::Fuse::Triggers::Timeline_typeof(), offsetof(::g::Fuse::Triggers::Actions::TimelineAction, _Target), 0);
    type->Reflection.SetFunctions(7,
        new uFunction("get_How", NULL, (void*)TimelineAction__get_How_fn, 0, false, ::g::Fuse::Triggers::Actions::TimelineActionHow_typeof(), 0),
        new uFunction("set_How", NULL, (void*)TimelineAction__set_How_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Triggers::Actions::TimelineActionHow_typeof()),
        new uFunction(".ctor", NULL, (void*)TimelineAction__New2_fn, 0, true, type, 0),
        new uFunction("get_Progress", NULL, (void*)TimelineAction__get_Progress_fn, 0, false, ::g::Uno::Double_typeof(), 0),
        new uFunction("set_Progress", NULL, (void*)TimelineAction__set_Progress_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Double_typeof()),
        new uFunction("get_Target", NULL, (void*)TimelineAction__get_Target_fn, 0, false, ::g::Fuse::Triggers::Timeline_typeof(), 0),
        new uFunction("set_Target", NULL, (void*)TimelineAction__set_Target_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Triggers::Timeline_typeof()));
}

::g::Fuse::Triggers::Actions::TriggerAction_type* TimelineAction_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Actions::TriggerAction_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Triggers::Actions::TriggerAction_typeof();
    options.FieldCount = 12;
    options.ObjectSize = sizeof(TimelineAction);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Actions::TriggerAction_type);
    type = (::g::Fuse::Triggers::Actions::TriggerAction_type*)uClassType::New("Fuse.Triggers.Actions.TimelineAction", options);
    type->fp_build_ = TimelineAction_build;
    type->fp_ctor_ = (void*)TimelineAction__New2_fn;
    type->fp_Perform = (void(*)(::g::Fuse::Triggers::Actions::TriggerAction*, ::g::Fuse::Node*))TimelineAction__Perform_fn;
    return type;
}

// public generated TimelineAction() :811
void TimelineAction__ctor_2_fn(TimelineAction* __this)
{
    __this->ctor_2();
}

// public generated Fuse.Triggers.Actions.TimelineActionHow get_How() :815
void TimelineAction__get_How_fn(TimelineAction* __this, int* __retval)
{
    *__retval = __this->How();
}

// public generated void set_How(Fuse.Triggers.Actions.TimelineActionHow value) :815
void TimelineAction__set_How_fn(TimelineAction* __this, int* value)
{
    __this->How(*value);
}

// public generated TimelineAction New() :811
void TimelineAction__New2_fn(TimelineAction** __retval)
{
    *__retval = TimelineAction::New2();
}

// protected override sealed void Perform(Fuse.Node target) :822
void TimelineAction__Perform_fn(TimelineAction* __this, ::g::Fuse::Node* target)
{
    uStackFrame __("Fuse.Triggers.Actions.TimelineAction", "Perform(Fuse.Node)");
    ::g::Fuse::Triggers::Timeline* t = __this->Target();

    if (t == NULL)
    {
        ::g::Fuse::Diagnostics::UserError(::STRINGS[17/*"`TimelineAc...*/], __this, ::STRINGS[8/*"/Users/medb...*/], 827, ::STRINGS[12/*"Perform"*/], NULL);
        return;
    }

    switch (__this->How())
    {
        case 0:
        {
            uPtr(t)->Pause();
            break;
        }
        case 2:
        {
            uPtr(t)->PlayTo1(__this->Progress());
            break;
        }
        case 3:
        {
            uPtr(t)->Pulse1();
            break;
        }
        case 4:
        {
            uPtr(t)->PulseBackward1();
            break;
        }
        case 5:
        {
            uPtr(t)->PulseForward();
            break;
        }
        case 1:
        case 6:
        {
            uPtr(t)->Resume();
            break;
        }
        case 7:
        {
            uPtr(t)->Progress1(__this->Progress());
            break;
        }
        case 8:
        {
            uPtr(t)->Stop1();
            break;
        }
    }
}

// public generated double get_Progress() :820
void TimelineAction__get_Progress_fn(TimelineAction* __this, double* __retval)
{
    *__retval = __this->Progress();
}

// public generated void set_Progress(double value) :820
void TimelineAction__set_Progress_fn(TimelineAction* __this, double* value)
{
    __this->Progress(*value);
}

// public generated Fuse.Triggers.Timeline get_Target() :813
void TimelineAction__get_Target_fn(TimelineAction* __this, ::g::Fuse::Triggers::Timeline** __retval)
{
    *__retval = __this->Target();
}

// public generated void set_Target(Fuse.Triggers.Timeline value) :813
void TimelineAction__set_Target_fn(TimelineAction* __this, ::g::Fuse::Triggers::Timeline* value)
{
    __this->Target(value);
}

// public generated TimelineAction() [instance] :811
void TimelineAction::ctor_2()
{
    ctor_1();
}

// public generated Fuse.Triggers.Actions.TimelineActionHow get_How() [instance] :815
int TimelineAction::How()
{
    return _How;
}

// public generated void set_How(Fuse.Triggers.Actions.TimelineActionHow value) [instance] :815
void TimelineAction::How(int value)
{
    _How = value;
}

// public generated double get_Progress() [instance] :820
double TimelineAction::Progress()
{
    return _Progress;
}

// public generated void set_Progress(double value) [instance] :820
void TimelineAction::Progress(double value)
{
    _Progress = value;
}

// public generated Fuse.Triggers.Timeline get_Target() [instance] :813
::g::Fuse::Triggers::Timeline* TimelineAction::Target()
{
    return _Target;
}

// public generated void set_Target(Fuse.Triggers.Timeline value) [instance] :813
void TimelineAction::Target(::g::Fuse::Triggers::Timeline* value)
{
    _Target = value;
}

// public generated TimelineAction New() [static] :811
TimelineAction* TimelineAction::New2()
{
    TimelineAction* obj1 = (TimelineAction*)uNew(TimelineAction_typeof());
    obj1->ctor_2();
    return obj1;
}
// }

// /Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Triggers/1.0.2/actions/$.uno
// -----------------------------------------------------------------------------------------------

// public enum TimelineActionHow :784
uEnumType* TimelineActionHow_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Triggers.Actions.TimelineActionHow", ::g::Uno::Int_typeof(), 9);
    type->SetLiterals(
        "Pause", 0LL,
        "Play", 1LL,
        "PlayTo", 2LL,
        "Pulse", 3LL,
        "PulseBackward", 4LL,
        "PulseForward", 5LL,
        "Resume", 6LL,
        "Seek", 7LL,
        "Stop", 8LL);
    return type;
}

// /Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Triggers/1.0.2/actions/$.uno
// -----------------------------------------------------------------------------------------------

// public sealed class Toggle :894
// {
static void Toggle_build(uType* type)
{
    ::TYPES[24] = ::g::Fuse::Triggers::Actions::IToggleable_typeof();
    type->SetFields(9,
        ::TYPES[24/*Fuse.Triggers.Actions.IToggleable*/], offsetof(::g::Fuse::Triggers::Actions::Toggle, _Target), 0);
    type->Reflection.SetFunctions(3,
        new uFunction(".ctor", NULL, (void*)Toggle__New2_fn, 0, true, type, 0),
        new uFunction("get_Target", NULL, (void*)Toggle__get_Target_fn, 0, false, ::TYPES[24/*Fuse.Triggers.Actions.IToggleable*/], 0),
        new uFunction("set_Target", NULL, (void*)Toggle__set_Target_fn, 0, false, uVoid_typeof(), 1, ::TYPES[24/*Fuse.Triggers.Actions.IToggleable*/]));
}

::g::Fuse::Triggers::Actions::TriggerAction_type* Toggle_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Actions::TriggerAction_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Triggers::Actions::TriggerAction_typeof();
    options.FieldCount = 10;
    options.ObjectSize = sizeof(Toggle);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Actions::TriggerAction_type);
    type = (::g::Fuse::Triggers::Actions::TriggerAction_type*)uClassType::New("Fuse.Triggers.Actions.Toggle", options);
    type->fp_build_ = Toggle_build;
    type->fp_ctor_ = (void*)Toggle__New2_fn;
    type->fp_Perform = (void(*)(::g::Fuse::Triggers::Actions::TriggerAction*, ::g::Fuse::Node*))Toggle__Perform_fn;
    return type;
}

// public generated Toggle() :894
void Toggle__ctor_2_fn(Toggle* __this)
{
    __this->ctor_2();
}

// private Fuse.Triggers.Actions.IToggleable FindTarget(Fuse.Node n) :904
void Toggle__FindTarget_fn(Toggle* __this, ::g::Fuse::Node* n, uObject** __retval)
{
    *__retval = __this->FindTarget(n);
}

// public generated Toggle New() :894
void Toggle__New2_fn(Toggle** __retval)
{
    *__retval = Toggle::New2();
}

// protected override sealed void Perform(Fuse.Node target) :898
void Toggle__Perform_fn(Toggle* __this, ::g::Fuse::Node* target)
{
    uStackFrame __("Fuse.Triggers.Actions.Toggle", "Perform(Fuse.Node)");
    uObject* ind1 = __this->Target();
    uObject* t = (ind1 != NULL) ? ind1 : (uObject*)__this->FindTarget(target);

    if (t != NULL)
        ::g::Fuse::Triggers::Actions::IToggleable::Toggle(uInterface(uPtr(t), ::TYPES[24/*Fuse.Triggers.Actions.IToggleable*/]));
}

// public generated Fuse.Triggers.Actions.IToggleable get_Target() :896
void Toggle__get_Target_fn(Toggle* __this, uObject** __retval)
{
    *__retval = __this->Target();
}

// public generated void set_Target(Fuse.Triggers.Actions.IToggleable value) :896
void Toggle__set_Target_fn(Toggle* __this, uObject* value)
{
    __this->Target(value);
}

// public generated Toggle() [instance] :894
void Toggle::ctor_2()
{
    ctor_1();
}

// private Fuse.Triggers.Actions.IToggleable FindTarget(Fuse.Node n) [instance] :904
uObject* Toggle::FindTarget(::g::Fuse::Node* n)
{
    uStackFrame __("Fuse.Triggers.Actions.Toggle", "FindTarget(Fuse.Node)");

    while (n != NULL)
    {
        uObject* iv = uAs<uObject*>(n, ::TYPES[24/*Fuse.Triggers.Actions.IToggleable*/]);

        if (iv != NULL)
            return iv;

        n = uPtr(n)->Parent();
    }

    return NULL;
}

// public generated Fuse.Triggers.Actions.IToggleable get_Target() [instance] :896
uObject* Toggle::Target()
{
    return _Target;
}

// public generated void set_Target(Fuse.Triggers.Actions.IToggleable value) [instance] :896
void Toggle::Target(uObject* value)
{
    _Target = value;
}

// public generated Toggle New() [static] :894
Toggle* Toggle::New2()
{
    Toggle* obj2 = (Toggle*)uNew(Toggle_typeof());
    obj2->ctor_2();
    return obj2;
}
// }

// /Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Elements/1.0.2/triggers/$.uno
// ------------------------------------------------------------------------------------------------

// public sealed class TransitionLayout :343
// {
static void TransitionLayout_build(uType* type)
{
    ::TYPES[0] = ::g::Fuse::Elements::Element_typeof();
    ::TYPES[21] = ::g::Uno::Action_typeof();
    type->SetFields(9,
        ::TYPES[0/*Fuse.Elements.Element*/], offsetof(::g::Fuse::Triggers::Actions::TransitionLayout, _perform), 0,
        ::TYPES[0/*Fuse.Elements.Element*/], offsetof(::g::Fuse::Triggers::Actions::TransitionLayout, _From), 0);
    type->Reflection.SetFunctions(3,
        new uFunction("get_From", NULL, (void*)TransitionLayout__get_From_fn, 0, false, ::TYPES[0/*Fuse.Elements.Element*/], 0),
        new uFunction("set_From", NULL, (void*)TransitionLayout__set_From_fn, 0, false, uVoid_typeof(), 1, ::TYPES[0/*Fuse.Elements.Element*/]),
        new uFunction(".ctor", NULL, (void*)TransitionLayout__New2_fn, 0, true, type, 0));
}

::g::Fuse::Triggers::Actions::TriggerAction_type* TransitionLayout_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Actions::TriggerAction_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Triggers::Actions::TriggerAction_typeof();
    options.FieldCount = 11;
    options.ObjectSize = sizeof(TransitionLayout);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Actions::TriggerAction_type);
    type = (::g::Fuse::Triggers::Actions::TriggerAction_type*)uClassType::New("Fuse.Triggers.Actions.TransitionLayout", options);
    type->fp_build_ = TransitionLayout_build;
    type->fp_ctor_ = (void*)TransitionLayout__New2_fn;
    type->fp_Perform = (void(*)(::g::Fuse::Triggers::Actions::TriggerAction*, ::g::Fuse::Node*))TransitionLayout__Perform_fn;
    return type;
}

// public generated TransitionLayout() :343
void TransitionLayout__ctor_2_fn(TransitionLayout* __this)
{
    __this->ctor_2();
}

// public generated Fuse.Elements.Element get_From() :345
void TransitionLayout__get_From_fn(TransitionLayout* __this, ::g::Fuse::Elements::Element** __retval)
{
    *__retval = __this->From();
}

// public generated void set_From(Fuse.Elements.Element value) :345
void TransitionLayout__set_From_fn(TransitionLayout* __this, ::g::Fuse::Elements::Element* value)
{
    __this->From(value);
}

// public generated TransitionLayout New() :343
void TransitionLayout__New2_fn(TransitionLayout** __retval)
{
    *__retval = TransitionLayout::New2();
}

// protected override sealed void Perform(Fuse.Node target) :346
void TransitionLayout__Perform_fn(TransitionLayout* __this, ::g::Fuse::Node* target)
{
    uStackFrame __("Fuse.Triggers.Actions.TransitionLayout", "Perform(Fuse.Node)");
    __this->_perform = uAs< ::g::Fuse::Elements::Element*>(target, ::TYPES[0/*Fuse.Elements.Element*/]);

    if ((__this->_perform == NULL) || (__this->From() == NULL))
        return;

    ::g::Fuse::UpdateManager::AddDeferredAction(uDelegate::New(::TYPES[21/*Uno.Action*/], (void*)TransitionLayout__Transition_fn, __this), 1, ::g::Fuse::LayoutPriority::Placement());
}

// private void Transition() :357
void TransitionLayout__Transition_fn(TransitionLayout* __this)
{
    __this->Transition();
}

// public generated TransitionLayout() [instance] :343
void TransitionLayout::ctor_2()
{
    ctor_1();
}

// public generated Fuse.Elements.Element get_From() [instance] :345
::g::Fuse::Elements::Element* TransitionLayout::From()
{
    return _From;
}

// public generated void set_From(Fuse.Elements.Element value) [instance] :345
void TransitionLayout::From(::g::Fuse::Elements::Element* value)
{
    _From = value;
}

// private void Transition() [instance] :357
void TransitionLayout::Transition()
{
    uStackFrame __("Fuse.Triggers.Actions.TransitionLayout", "Transition()");
    ::g::Uno::Float4x4 ind1 = uPtr(From())->LocalTransform();
    ::g::Uno::Float2 oldPosition = ::g::Uno::Float2__New2(ind1.M41, ind1.M42);
    ::g::Uno::Float2 oldSize = uPtr(From())->ActualSize();
    ::g::Uno::Float4x4 m = ::g::Uno::Matrix::Mul8(uPtr(From())->WorldTransform(), uPtr(uPtr(_perform)->Parent())->WorldTransformInverse());
    ::g::Uno::Float3 worldChange = ::g::Uno::Float3__op_Subtraction2(::g::Uno::Float3__New2(m.M41, m.M42, m.M43), ::g::Uno::Float3__New4(uPtr(_perform)->IntendedPosition(), 0.0f));
    ::g::Fuse::Triggers::LayoutTransition::SetWorldPositionChange(_perform, worldChange);
    ::g::Fuse::Triggers::LayoutTransition::SetPositionChange(_perform, oldPosition, uPtr(_perform)->IntendedPosition());
    ::g::Fuse::Triggers::LayoutTransition::SetSizeChange(_perform, oldSize, uPtr(_perform)->IntendedSize());
    uPtr(::g::Fuse::Triggers::LayoutTransition::Transitioned())->RaiseWithoutBubble(::g::Fuse::Triggers::LayoutTransitionedArgs::New3(_perform), 0);
}

// public generated TransitionLayout New() [static] :343
TransitionLayout* TransitionLayout::New2()
{
    TransitionLayout* obj2 = (TransitionLayout*)uNew(TransitionLayout_typeof());
    obj2->ctor_2();
    return obj2;
}
// }

// /Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Triggers/1.0.2/actions/$.uno
// -----------------------------------------------------------------------------------------------

// public sealed class TransitionState :759
// {
static void TransitionState_build(uType* type)
{
    type->SetFields(9,
        ::g::Fuse::Triggers::StateGroup_typeof(), offsetof(::g::Fuse::Triggers::Actions::TransitionState, _Target), 0,
        ::g::Fuse::Triggers::Actions::TransitionStateType_typeof(), offsetof(::g::Fuse::Triggers::Actions::TransitionState, _Type), 0);
    type->Reflection.SetFunctions(5,
        new uFunction(".ctor", NULL, (void*)TransitionState__New2_fn, 0, true, type, 0),
        new uFunction("get_Target", NULL, (void*)TransitionState__get_Target_fn, 0, false, ::g::Fuse::Triggers::StateGroup_typeof(), 0),
        new uFunction("set_Target", NULL, (void*)TransitionState__set_Target_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Triggers::StateGroup_typeof()),
        new uFunction("get_Type", NULL, (void*)TransitionState__get_Type_fn, 0, false, ::g::Fuse::Triggers::Actions::TransitionStateType_typeof(), 0),
        new uFunction("set_Type", NULL, (void*)TransitionState__set_Type_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Triggers::Actions::TransitionStateType_typeof()));
}

::g::Fuse::Triggers::Actions::TriggerAction_type* TransitionState_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Actions::TriggerAction_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Triggers::Actions::TriggerAction_typeof();
    options.FieldCount = 11;
    options.ObjectSize = sizeof(TransitionState);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Actions::TriggerAction_type);
    type = (::g::Fuse::Triggers::Actions::TriggerAction_type*)uClassType::New("Fuse.Triggers.Actions.TransitionState", options);
    type->fp_build_ = TransitionState_build;
    type->fp_ctor_ = (void*)TransitionState__New2_fn;
    type->fp_Perform = (void(*)(::g::Fuse::Triggers::Actions::TriggerAction*, ::g::Fuse::Node*))TransitionState__Perform_fn;
    return type;
}

// public generated TransitionState() :759
void TransitionState__ctor_2_fn(TransitionState* __this)
{
    __this->ctor_2();
}

// public generated TransitionState New() :759
void TransitionState__New2_fn(TransitionState** __retval)
{
    *__retval = TransitionState::New2();
}

// protected override sealed void Perform(Fuse.Node target) :765
void TransitionState__Perform_fn(TransitionState* __this, ::g::Fuse::Node* target)
{
    uStackFrame __("Fuse.Triggers.Actions.TransitionState", "Perform(Fuse.Node)");
    ::g::Fuse::Triggers::StateGroup* t = __this->Target();

    switch (__this->Type())
    {
        case 0:
        {
            uPtr(t)->GotoNextState();
            break;
        }
    }
}

// public generated Fuse.Triggers.StateGroup get_Target() :761
void TransitionState__get_Target_fn(TransitionState* __this, ::g::Fuse::Triggers::StateGroup** __retval)
{
    *__retval = __this->Target();
}

// public generated void set_Target(Fuse.Triggers.StateGroup value) :761
void TransitionState__set_Target_fn(TransitionState* __this, ::g::Fuse::Triggers::StateGroup* value)
{
    __this->Target(value);
}

// public generated Fuse.Triggers.Actions.TransitionStateType get_Type() :763
void TransitionState__get_Type_fn(TransitionState* __this, int* __retval)
{
    *__retval = __this->Type();
}

// public generated void set_Type(Fuse.Triggers.Actions.TransitionStateType value) :763
void TransitionState__set_Type_fn(TransitionState* __this, int* value)
{
    __this->Type(*value);
}

// public generated TransitionState() [instance] :759
void TransitionState::ctor_2()
{
    ctor_1();
}

// public generated Fuse.Triggers.StateGroup get_Target() [instance] :761
::g::Fuse::Triggers::StateGroup* TransitionState::Target()
{
    return _Target;
}

// public generated void set_Target(Fuse.Triggers.StateGroup value) [instance] :761
void TransitionState::Target(::g::Fuse::Triggers::StateGroup* value)
{
    _Target = value;
}

// public generated Fuse.Triggers.Actions.TransitionStateType get_Type() [instance] :763
int TransitionState::Type()
{
    return _Type;
}

// public generated void set_Type(Fuse.Triggers.Actions.TransitionStateType value) [instance] :763
void TransitionState::Type(int value)
{
    _Type = value;
}

// public generated TransitionState New() [static] :759
TransitionState* TransitionState::New2()
{
    TransitionState* obj1 = (TransitionState*)uNew(TransitionState_typeof());
    obj1->ctor_2();
    return obj1;
}
// }

// /Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Triggers/1.0.2/actions/$.uno
// -----------------------------------------------------------------------------------------------

// public enum TransitionStateType :751
uEnumType* TransitionStateType_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Triggers.Actions.TransitionStateType", ::g::Uno::Int_typeof(), 1);
    type->SetLiterals(
        "Next", 0LL);
    return type;
}

// /Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Triggers/1.0.2/actions/$.uno
// -----------------------------------------------------------------------------------------------

// public abstract class TriggerAction :948
// {
static void TriggerAction_build(uType* type)
{
    ::STRINGS[18] = uString::Const("Use `Trigger.When` instead of `Trigger.Direction`");
    ::STRINGS[8] = uString::Const("/Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Triggers/1.0.2/actions/$.uno");
    ::STRINGS[19] = uString::Const("set_Direction");
    type->SetFields(2,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Triggers::Actions::TriggerAction, _delay), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Triggers::Actions::TriggerAction, _hasDelay), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Triggers::Actions::TriggerAction, _hasProgress), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Triggers::Actions::TriggerAction, _isActive), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Triggers::Actions::TriggerAction, _progress), 0,
        ::g::Fuse::Triggers::Actions::TriggerWhen_typeof(), offsetof(::g::Fuse::Triggers::Actions::TriggerAction, _when), 0,
        ::g::Fuse::Node_typeof(), offsetof(::g::Fuse::Triggers::Actions::TriggerAction, _TargetNode), 0);
    type->Reflection.SetFunctions(15,
        new uFunction("get_AtProgress", NULL, (void*)TriggerAction__get_AtProgress_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("set_AtProgress", NULL, (void*)TriggerAction__set_AtProgress_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("get_Delay", NULL, (void*)TriggerAction__get_Delay_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("set_Delay", NULL, (void*)TriggerAction__set_Delay_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("get_Direction", NULL, (void*)TriggerAction__get_Direction_fn, 0, false, ::g::Fuse::Triggers::Actions::TriggerWhen_typeof(), 0),
        new uFunction("set_Direction", NULL, (void*)TriggerAction__set_Direction_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Triggers::Actions::TriggerWhen_typeof()),
        new uFunction("get_IsActive", NULL, (void*)TriggerAction__get_IsActive_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("set_IsActive", NULL, (void*)TriggerAction__set_IsActive_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Bool_typeof()),
        new uFunction("get_IsProgressTriggered", NULL, (void*)TriggerAction__get_IsProgressTriggered_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("PerformFromNode", NULL, (void*)TriggerAction__PerformFromNode_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Node_typeof()),
        new uFunction("ProgressWhen", NULL, (void*)TriggerAction__ProgressWhen_fn, 0, false, ::g::Uno::Float_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("get_TargetNode", NULL, (void*)TriggerAction__get_TargetNode_fn, 0, false, ::g::Fuse::Node_typeof(), 0),
        new uFunction("set_TargetNode", NULL, (void*)TriggerAction__set_TargetNode_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Node_typeof()),
        new uFunction("get_When", NULL, (void*)TriggerAction__get_When_fn, 0, false, ::g::Fuse::Triggers::Actions::TriggerWhen_typeof(), 0),
        new uFunction("set_When", NULL, (void*)TriggerAction__set_When_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Triggers::Actions::TriggerWhen_typeof()));
}

TriggerAction_type* TriggerAction_typeof()
{
    static uSStrong<TriggerAction_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::PropertyObject_typeof();
    options.FieldCount = 9;
    options.ObjectSize = sizeof(TriggerAction);
    options.TypeSize = sizeof(TriggerAction_type);
    type = (TriggerAction_type*)uClassType::New("Fuse.Triggers.Actions.TriggerAction", options);
    type->fp_build_ = TriggerAction_build;
    return type;
}

// protected generated TriggerAction() :948
void TriggerAction__ctor_1_fn(TriggerAction* __this)
{
    __this->ctor_1();
}

// public float get_AtProgress() :983
void TriggerAction__get_AtProgress_fn(TriggerAction* __this, float* __retval)
{
    *__retval = __this->AtProgress();
}

// public void set_AtProgress(float value) :984
void TriggerAction__set_AtProgress_fn(TriggerAction* __this, float* value)
{
    __this->AtProgress(*value);
}

// public float get_Delay() :993
void TriggerAction__get_Delay_fn(TriggerAction* __this, float* __retval)
{
    *__retval = __this->Delay();
}

// public void set_Delay(float value) :994
void TriggerAction__set_Delay_fn(TriggerAction* __this, float* value)
{
    __this->Delay(*value);
}

// public Fuse.Triggers.Actions.TriggerWhen get_Direction() :959
void TriggerAction__get_Direction_fn(TriggerAction* __this, int* __retval)
{
    *__retval = __this->Direction();
}

// public void set_Direction(Fuse.Triggers.Actions.TriggerWhen value) :960
void TriggerAction__set_Direction_fn(TriggerAction* __this, int* value)
{
    __this->Direction(*value);
}

// public bool get_IsActive() :1009
void TriggerAction__get_IsActive_fn(TriggerAction* __this, bool* __retval)
{
    *__retval = __this->IsActive();
}

// public void set_IsActive(bool value) :1010
void TriggerAction__set_IsActive_fn(TriggerAction* __this, bool* value)
{
    __this->IsActive(*value);
}

// public bool get_IsProgressTriggered() :1003
void TriggerAction__get_IsProgressTriggered_fn(TriggerAction* __this, bool* __retval)
{
    *__retval = __this->IsProgressTriggered();
}

// public void PerformFromNode(Fuse.Node target) :1022
void TriggerAction__PerformFromNode_fn(TriggerAction* __this, ::g::Fuse::Node* target)
{
    __this->PerformFromNode(target);
}

// public float ProgressWhen(float totalDuration) :1013
void TriggerAction__ProgressWhen_fn(TriggerAction* __this, float* totalDuration, float* __retval)
{
    *__retval = __this->ProgressWhen(*totalDuration);
}

// public generated Fuse.Node get_TargetNode() :969
void TriggerAction__get_TargetNode_fn(TriggerAction* __this, ::g::Fuse::Node** __retval)
{
    *__retval = __this->TargetNode();
}

// public generated void set_TargetNode(Fuse.Node value) :969
void TriggerAction__set_TargetNode_fn(TriggerAction* __this, ::g::Fuse::Node* value)
{
    __this->TargetNode(value);
}

// public Fuse.Triggers.Actions.TriggerWhen get_When() :953
void TriggerAction__get_When_fn(TriggerAction* __this, int* __retval)
{
    *__retval = __this->When();
}

// public void set_When(Fuse.Triggers.Actions.TriggerWhen value) :954
void TriggerAction__set_When_fn(TriggerAction* __this, int* value)
{
    __this->When(*value);
}

// protected generated TriggerAction() [instance] :948
void TriggerAction::ctor_1()
{
    _isActive = true;
    ctor_();
}

// public float get_AtProgress() [instance] :983
float TriggerAction::AtProgress()
{
    return _progress;
}

// public void set_AtProgress(float value) [instance] :984
void TriggerAction::AtProgress(float value)
{
    _hasProgress = true;
    _progress = value;
}

// public float get_Delay() [instance] :993
float TriggerAction::Delay()
{
    return _delay;
}

// public void set_Delay(float value) [instance] :994
void TriggerAction::Delay(float value)
{
    _hasDelay = true;
    _delay = value;
}

// public Fuse.Triggers.Actions.TriggerWhen get_Direction() [instance] :959
int TriggerAction::Direction()
{
    return When();
}

// public void set_Direction(Fuse.Triggers.Actions.TriggerWhen value) [instance] :960
void TriggerAction::Direction(int value)
{
    ::g::Fuse::Diagnostics::Deprecated(::STRINGS[18/*"Use `Trigge...*/], this, ::STRINGS[8/*"/Users/medb...*/], 963, ::STRINGS[19/*"set_Direction"*/]);
    When(value);
}

// public bool get_IsActive() [instance] :1009
bool TriggerAction::IsActive()
{
    return _isActive;
}

// public void set_IsActive(bool value) [instance] :1010
void TriggerAction::IsActive(bool value)
{
    _isActive = value;
}

// public bool get_IsProgressTriggered() [instance] :1003
bool TriggerAction::IsProgressTriggered()
{
    return _hasProgress || _hasDelay;
}

// public void PerformFromNode(Fuse.Node target) [instance] :1022
void TriggerAction::PerformFromNode(::g::Fuse::Node* target)
{
    uStackFrame __("Fuse.Triggers.Actions.TriggerAction", "PerformFromNode(Fuse.Node)");
    ::g::Fuse::Node* ind1;

    if (IsActive())
        Perform((ind1 = TargetNode(), (ind1 != NULL) ? ind1 : target));
}

// public float ProgressWhen(float totalDuration) [instance] :1013
float TriggerAction::ProgressWhen(float totalDuration)
{
    if (_hasProgress)
        return _progress;

    if (_hasDelay)
        return _delay / totalDuration;

    return 0.0f;
}

// public generated Fuse.Node get_TargetNode() [instance] :969
::g::Fuse::Node* TriggerAction::TargetNode()
{
    return _TargetNode;
}

// public generated void set_TargetNode(Fuse.Node value) [instance] :969
void TriggerAction::TargetNode(::g::Fuse::Node* value)
{
    _TargetNode = value;
}

// public Fuse.Triggers.Actions.TriggerWhen get_When() [instance] :953
int TriggerAction::When()
{
    return _when;
}

// public void set_When(Fuse.Triggers.Actions.TriggerWhen value) [instance] :954
void TriggerAction::When(int value)
{
    _when = value;
}
// }

// /Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Triggers/1.0.2/actions/$.uno
// -----------------------------------------------------------------------------------------------

// public enum TriggerWhen :924
uEnumType* TriggerWhen_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Triggers.Actions.TriggerWhen", ::g::Uno::Int_typeof(), 6);
    type->SetLiterals(
        "Forward", 0LL,
        "Backward", 1LL,
        "ForwardAndBackward", 2LL,
        "Start", 3LL,
        "Stop", 4LL,
        "Both", 2LL);
    return type;
}

// /Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.UserEvents/1.0.2/$.uno
// -----------------------------------------------------------------------------------------

// public sealed class UserEventArg :286
// {
static void UserEventArg_build(uType* type)
{
    ::TYPES[25] = ::g::Uno::String_typeof();
    type->SetFields(2,
        ::TYPES[25/*string*/], offsetof(::g::Fuse::Triggers::Actions::UserEventArg, _Name), 0,
        uObject_typeof(), offsetof(::g::Fuse::Triggers::Actions::UserEventArg, _Value), 0);
    type->Reflection.SetFunctions(12,
        new uFunction("get_BoolValue", NULL, (void*)UserEventArg__get_BoolValue_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("set_BoolValue", NULL, (void*)UserEventArg__set_BoolValue_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Bool_typeof()),
        new uFunction("get_FloatValue", NULL, (void*)UserEventArg__get_FloatValue_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("set_FloatValue", NULL, (void*)UserEventArg__set_FloatValue_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("get_IntValue", NULL, (void*)UserEventArg__get_IntValue_fn, 0, false, ::g::Uno::Int_typeof(), 0),
        new uFunction("set_IntValue", NULL, (void*)UserEventArg__set_IntValue_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Int_typeof()),
        new uFunction("get_Name", NULL, (void*)UserEventArg__get_Name_fn, 0, false, ::TYPES[25/*string*/], 0),
        new uFunction(".ctor", NULL, (void*)UserEventArg__New2_fn, 0, true, type, 1, ::TYPES[25/*string*/]),
        new uFunction("get_StringValue", NULL, (void*)UserEventArg__get_StringValue_fn, 0, false, ::TYPES[25/*string*/], 0),
        new uFunction("set_StringValue", NULL, (void*)UserEventArg__set_StringValue_fn, 0, false, uVoid_typeof(), 1, ::TYPES[25/*string*/]),
        new uFunction("get_Value", NULL, (void*)UserEventArg__get_Value_fn, 0, false, uObject_typeof(), 0),
        new uFunction("set_Value", NULL, (void*)UserEventArg__set_Value_fn, 0, false, uVoid_typeof(), 1, uObject_typeof()));
}

uType* UserEventArg_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::PropertyObject_typeof();
    options.FieldCount = 4;
    options.ObjectSize = sizeof(UserEventArg);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Triggers.Actions.UserEventArg", options);
    type->fp_build_ = UserEventArg_build;
    return type;
}

// public UserEventArg(string name) :294
void UserEventArg__ctor_1_fn(UserEventArg* __this, uString* name)
{
    __this->ctor_1(name);
}

// public bool get_BoolValue() :337
void UserEventArg__get_BoolValue_fn(UserEventArg* __this, bool* __retval)
{
    *__retval = __this->BoolValue();
}

// public void set_BoolValue(bool value) :338
void UserEventArg__set_BoolValue_fn(UserEventArg* __this, bool* value)
{
    __this->BoolValue(*value);
}

// public float get_FloatValue() :319
void UserEventArg__get_FloatValue_fn(UserEventArg* __this, float* __retval)
{
    *__retval = __this->FloatValue();
}

// public void set_FloatValue(float value) :320
void UserEventArg__set_FloatValue_fn(UserEventArg* __this, float* value)
{
    __this->FloatValue(*value);
}

// public int get_IntValue() :309
void UserEventArg__get_IntValue_fn(UserEventArg* __this, int* __retval)
{
    *__retval = __this->IntValue();
}

// public void set_IntValue(int value) :310
void UserEventArg__set_IntValue_fn(UserEventArg* __this, int* value)
{
    __this->IntValue(*value);
}

// public generated string get_Name() :291
void UserEventArg__get_Name_fn(UserEventArg* __this, uString** __retval)
{
    *__retval = __this->Name();
}

// private generated void set_Name(string value) :291
void UserEventArg__set_Name_fn(UserEventArg* __this, uString* value)
{
    __this->Name(value);
}

// public UserEventArg New(string name) :294
void UserEventArg__New2_fn(uString* name, UserEventArg** __retval)
{
    *__retval = UserEventArg::New2(name);
}

// public string get_StringValue() :328
void UserEventArg__get_StringValue_fn(UserEventArg* __this, uString** __retval)
{
    *__retval = __this->StringValue();
}

// public void set_StringValue(string value) :329
void UserEventArg__set_StringValue_fn(UserEventArg* __this, uString* value)
{
    __this->StringValue(value);
}

// public generated object get_Value() :302
void UserEventArg__get_Value_fn(UserEventArg* __this, uObject** __retval)
{
    *__retval = __this->Value();
}

// public generated void set_Value(object value) :302
void UserEventArg__set_Value_fn(UserEventArg* __this, uObject* value)
{
    __this->Value(value);
}

// public UserEventArg(string name) [instance] :294
void UserEventArg::ctor_1(uString* name)
{
    ctor_();
    Name(name);
}

// public bool get_BoolValue() [instance] :337
bool UserEventArg::BoolValue()
{
    uStackFrame __("Fuse.Triggers.Actions.UserEventArg", "get_BoolValue()");
    return uUnbox<bool>(::g::Uno::Bool_typeof(), Value());
}

// public void set_BoolValue(bool value) [instance] :338
void UserEventArg::BoolValue(bool value)
{
    Value(uBox(::g::Uno::Bool_typeof(), value));
}

// public float get_FloatValue() [instance] :319
float UserEventArg::FloatValue()
{
    uStackFrame __("Fuse.Triggers.Actions.UserEventArg", "get_FloatValue()");
    return (float)uUnbox<double>(::g::Uno::Double_typeof(), Value());
}

// public void set_FloatValue(float value) [instance] :320
void UserEventArg::FloatValue(float value)
{
    Value(uBox(::g::Uno::Double_typeof(), (double)value));
}

// public int get_IntValue() [instance] :309
int UserEventArg::IntValue()
{
    uStackFrame __("Fuse.Triggers.Actions.UserEventArg", "get_IntValue()");
    return uUnbox<int>(::g::Uno::Int_typeof(), Value());
}

// public void set_IntValue(int value) [instance] :310
void UserEventArg::IntValue(int value)
{
    Value(uBox<int>(::g::Uno::Int_typeof(), value));
}

// public generated string get_Name() [instance] :291
uString* UserEventArg::Name()
{
    return _Name;
}

// private generated void set_Name(string value) [instance] :291
void UserEventArg::Name(uString* value)
{
    _Name = value;
}

// public string get_StringValue() [instance] :328
uString* UserEventArg::StringValue()
{
    uStackFrame __("Fuse.Triggers.Actions.UserEventArg", "get_StringValue()");
    return uCast<uString*>(Value(), ::TYPES[25/*string*/]);
}

// public void set_StringValue(string value) [instance] :329
void UserEventArg::StringValue(uString* value)
{
    Value(value);
}

// public generated object get_Value() [instance] :302
uObject* UserEventArg::Value()
{
    return _Value;
}

// public generated void set_Value(object value) [instance] :302
void UserEventArg::Value(uObject* value)
{
    _Value = value;
}

// public UserEventArg New(string name) [static] :294
UserEventArg* UserEventArg::New2(uString* name)
{
    UserEventArg* obj1 = (UserEventArg*)uNew(UserEventArg_typeof());
    obj1->ctor_1(name);
    return obj1;
}
// }

// /Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Controls.WebView/1.0.2/$.uno
// -----------------------------------------------------------------------------------------------

// public abstract class WebViewNavAction :651
// {
static void WebViewNavAction_build(uType* type)
{
    ::TYPES[1] = ::g::Fuse::Visual_typeof();
    ::TYPES[26] = ::TYPES[1/*Fuse.Visual*/]->MakeMethod(2/*FindByType<Fuse.Controls.WebView>*/, ::g::Fuse::Controls::WebView_typeof(), NULL);
    type->SetFields(9);
}

WebViewNavAction_type* WebViewNavAction_typeof()
{
    static uSStrong<WebViewNavAction_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Triggers::Actions::TriggerAction_typeof();
    options.FieldCount = 9;
    options.ObjectSize = sizeof(WebViewNavAction);
    options.TypeSize = sizeof(WebViewNavAction_type);
    type = (WebViewNavAction_type*)uClassType::New("Fuse.Triggers.Actions.WebViewNavAction", options);
    type->fp_build_ = WebViewNavAction_build;
    type->fp_Perform = (void(*)(::g::Fuse::Triggers::Actions::TriggerAction*, ::g::Fuse::Node*))WebViewNavAction__Perform_fn;
    return type;
}

// internal WebViewNavAction() :653
void WebViewNavAction__ctor_2_fn(WebViewNavAction* __this)
{
    __this->ctor_2();
}

// protected override sealed void Perform(Fuse.Node target) :655
void WebViewNavAction__Perform_fn(WebViewNavAction* __this, ::g::Fuse::Node* target)
{
    uStackFrame __("Fuse.Triggers.Actions.WebViewNavAction", "Perform(Fuse.Node)");
    ::g::Fuse::Visual* v = uAs< ::g::Fuse::Visual*>(target, ::TYPES[1/*Fuse.Visual*/]);

    if (v == NULL)
        return;

    ::g::Fuse::Controls::WebView* webView = (::g::Fuse::Controls::WebView*)uPtr(v)->FindByType(::TYPES[26/*Fuse.Visual.FindByType<Fuse.Controls.WebView>*/]);

    if (webView != NULL)
        __this->Execute(webView);
}

// internal WebViewNavAction() [instance] :653
void WebViewNavAction::ctor_2()
{
    ctor_1();
}
// }

}}}} // ::g::Fuse::Triggers::Actions
