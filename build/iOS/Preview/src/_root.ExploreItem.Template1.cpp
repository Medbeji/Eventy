// This file was generated based on /Users/medbeji/Documents/event-app/event-app/build/iOS/Preview/cache/ux11/ExploreItem.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.EventApp_FuseCo-eb648b08.h>
#include <_root.ExploreItem.h>
#include <_root.ExploreItem.Template1.h>
#include <Fuse.Binding.h>
#include <Fuse.Controls.StackPanel.h>
#include <Fuse.Controls.Text.h>
#include <Fuse.Controls.TextControl.h>
#include <Fuse.Controls.TextWrapping.h>
#include <Fuse.Elements.Alignment.h>
#include <Fuse.Elements.Element.h>
#include <Fuse.Node.h>
#include <Fuse.Reactive.BindingMode.h>
#include <Fuse.Reactive.Data.h>
#include <Fuse.Reactive.DataBinding.h>
#include <Fuse.Reactive.IExpression.h>
#include <Fuse.Visual.h>
#include <Uno.Bool.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.Float.h>
#include <Uno.Float4.h>
#include <Uno.Object.h>
#include <Uno.String.h>
#include <Uno.UX.NameTable.h>
#include <Uno.UX.Property.h>
#include <Uno.UX.Property-1.h>
#include <Uno.UX.Selector.h>
static uString* STRINGS[3];
static uType* TYPES[3];

namespace g{

// public partial sealed class ExploreItem.Template1 :127
// {
// static Template1() :140
static void ExploreItem__Template1__cctor__fn(uType* __type)
{
    ExploreItem__Template1::__g_static_nametable1_ = uArray::Init<uString*>(::TYPES[0/*string[]*/], 0);
    ExploreItem__Template1::__selector0_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[0/*"Value"*/]);
}

static void ExploreItem__Template1_build(uType* type)
{
    ::STRINGS[0] = uString::Const("Value");
    ::STRINGS[1] = uString::Const("");
    ::STRINGS[2] = uString::Const("Description");
    ::TYPES[0] = ::g::Uno::String_typeof()->Array();
    ::TYPES[1] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL);
    ::TYPES[2] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL);
    type->SetFields(2,
        ::g::Uno::UX::NameTable_typeof(), offsetof(::g::ExploreItem__Template1, __g_nametable1), 0,
        ::g::ExploreItem_typeof(), offsetof(::g::ExploreItem__Template1, __parent1), uFieldFlagsWeak,
        ::g::ExploreItem_typeof(), offsetof(::g::ExploreItem__Template1, __parentInstance1), uFieldFlagsWeak,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(::g::ExploreItem__Template1, temp_Value_inst), 0,
        ::TYPES[0/*string[]*/], (uintptr_t)&::g::ExploreItem__Template1::__g_static_nametable1_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::ExploreItem__Template1::__selector0_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)ExploreItem__Template1__New2_fn, 0, true, type, 2, ::g::ExploreItem_typeof(), ::g::ExploreItem_typeof()));
}

::g::Uno::UX::Template_type* ExploreItem__Template1_typeof()
{
    static uSStrong< ::g::Uno::UX::Template_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Template_typeof();
    options.FieldCount = 8;
    options.ObjectSize = sizeof(ExploreItem__Template1);
    options.TypeSize = sizeof(::g::Uno::UX::Template_type);
    type = (::g::Uno::UX::Template_type*)uClassType::New("ExploreItem.Template1", options);
    type->fp_build_ = ExploreItem__Template1_build;
    type->fp_cctor_ = ExploreItem__Template1__cctor__fn;
    type->fp_New1 = (void(*)(::g::Uno::UX::Template*, uObject**))ExploreItem__Template1__New1_fn;
    return type;
}

// public Template1(ExploreItem parent, ExploreItem parentInstance) :131
void ExploreItem__Template1__ctor_1_fn(ExploreItem__Template1* __this, ::g::ExploreItem* parent, ::g::ExploreItem* parentInstance)
{
    __this->ctor_1(parent, parentInstance);
}

// public override sealed object New() :143
void ExploreItem__Template1__New1_fn(ExploreItem__Template1* __this, uObject** __retval)
{
    uStackFrame __("ExploreItem.Template1", "New()");
    ::g::Fuse::Controls::StackPanel* __self1 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Controls::Text* temp = ::g::Fuse::Controls::Text::New3();
    __this->temp_Value_inst = ::g::EventApp_FuseControlsTextControl_Value_Property::New1(temp, ExploreItem__Template1::__selector0());
    ::g::Fuse::Reactive::Data* temp1 = ::g::Fuse::Reactive::Data::New1(::STRINGS[1/*""*/]);
    __this->__g_nametable1 = ::g::Uno::UX::NameTable::New1(uPtr(__this->__parent1)->__g_nametable1, ExploreItem__Template1::__g_static_nametable1());
    ::g::Fuse::Controls::Text* temp2 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Reactive::DataBinding* temp3 = ::g::Fuse::Reactive::DataBinding::New1(__this->temp_Value_inst, (uObject*)temp1, __this->__g_nametable1, 3);
    __self1->Alignment(4);
    __self1->Margin(::g::Uno::Float4__New2(30.0f, 30.0f, 30.0f, 30.0f));
    temp2->Value(::STRINGS[2/*"Description"*/]);
    temp2->TextColor(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp->TextWrapping(1);
    temp->FontSize(14.0f);
    temp->TextColor(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp->Margin(::g::Uno::Float4__New2(0.0f, 15.0f, 0.0f, 0.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Bindings()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp3);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(__self1->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp2);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(__self1->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp);
    return *__retval = __self1, void();
}

// public Template1 New(ExploreItem parent, ExploreItem parentInstance) :131
void ExploreItem__Template1__New2_fn(::g::ExploreItem* parent, ::g::ExploreItem* parentInstance, ExploreItem__Template1** __retval)
{
    *__retval = ExploreItem__Template1::New2(parent, parentInstance);
}

uSStrong<uArray*> ExploreItem__Template1::__g_static_nametable1_;
::g::Uno::UX::Selector ExploreItem__Template1::__selector0_;

// public Template1(ExploreItem parent, ExploreItem parentInstance) [instance] :131
void ExploreItem__Template1::ctor_1(::g::ExploreItem* parent, ::g::ExploreItem* parentInstance)
{
    ctor_(NULL, false);
    __parent1 = parent;
    __parentInstance1 = parentInstance;
}

// public Template1 New(ExploreItem parent, ExploreItem parentInstance) [static] :131
ExploreItem__Template1* ExploreItem__Template1::New2(::g::ExploreItem* parent, ::g::ExploreItem* parentInstance)
{
    ExploreItem__Template1* obj1 = (ExploreItem__Template1*)uNew(ExploreItem__Template1_typeof());
    obj1->ctor_1(parent, parentInstance);
    return obj1;
}
// }

} // ::g
