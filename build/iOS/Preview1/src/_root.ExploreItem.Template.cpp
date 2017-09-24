// This file was generated based on /Users/medbeji/Documents/event-app/event-app/build/iOS/Preview1/cache/ux11/ExploreItem.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.EventApp_FuseCo-eb648b08.h>
#include <_root.ExploreItem.h>
#include <_root.ExploreItem.Template.h>
#include <Fuse.Binding.h>
#include <Fuse.Controls.Grid.h>
#include <Fuse.Controls.Text.h>
#include <Fuse.Controls.TextControl.h>
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
#include <Uno.UX.Size.h>
#include <Uno.UX.Unit.h>
static uString* STRINGS[4];
static uType* TYPES[3];

namespace g{

// public partial sealed class ExploreItem.Template :84
// {
// static Template() :98
static void ExploreItem__Template__cctor__fn(uType* __type)
{
    ExploreItem__Template::__g_static_nametable1_ = uArray::Init<uString*>(::TYPES[0/*string[]*/], 0);
    ExploreItem__Template::__selector0_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[0/*"Value"*/]);
}

static void ExploreItem__Template_build(uType* type)
{
    ::STRINGS[0] = uString::Const("Value");
    ::STRINGS[1] = uString::Const("title");
    ::STRINGS[2] = uString::Const("fact");
    ::STRINGS[3] = uString::Const("1*,1*");
    ::TYPES[0] = ::g::Uno::String_typeof()->Array();
    ::TYPES[1] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL);
    ::TYPES[2] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL);
    type->SetFields(2,
        ::g::Uno::UX::NameTable_typeof(), offsetof(::g::ExploreItem__Template, __g_nametable1), 0,
        ::g::ExploreItem_typeof(), offsetof(::g::ExploreItem__Template, __parent1), uFieldFlagsWeak,
        ::g::ExploreItem_typeof(), offsetof(::g::ExploreItem__Template, __parentInstance1), uFieldFlagsWeak,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(::g::ExploreItem__Template, temp_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(::g::ExploreItem__Template, temp1_Value_inst), 0,
        ::TYPES[0/*string[]*/], (uintptr_t)&::g::ExploreItem__Template::__g_static_nametable1_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::ExploreItem__Template::__selector0_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)ExploreItem__Template__New2_fn, 0, true, type, 2, ::g::ExploreItem_typeof(), ::g::ExploreItem_typeof()));
}

::g::Uno::UX::Template_type* ExploreItem__Template_typeof()
{
    static uSStrong< ::g::Uno::UX::Template_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Template_typeof();
    options.FieldCount = 9;
    options.ObjectSize = sizeof(ExploreItem__Template);
    options.TypeSize = sizeof(::g::Uno::UX::Template_type);
    type = (::g::Uno::UX::Template_type*)uClassType::New("ExploreItem.Template", options);
    type->fp_build_ = ExploreItem__Template_build;
    type->fp_cctor_ = ExploreItem__Template__cctor__fn;
    type->fp_New1 = (void(*)(::g::Uno::UX::Template*, uObject**))ExploreItem__Template__New1_fn;
    return type;
}

// public Template(ExploreItem parent, ExploreItem parentInstance) :88
void ExploreItem__Template__ctor_1_fn(ExploreItem__Template* __this, ::g::ExploreItem* parent, ::g::ExploreItem* parentInstance)
{
    __this->ctor_1(parent, parentInstance);
}

// public override sealed object New() :101
void ExploreItem__Template__New1_fn(ExploreItem__Template* __this, uObject** __retval)
{
    uStackFrame __("ExploreItem.Template", "New()");
    ::g::Fuse::Controls::Grid* __self1 = ::g::Fuse::Controls::Grid::New4();
    ::g::Fuse::Controls::Text* temp = ::g::Fuse::Controls::Text::New3();
    __this->temp_Value_inst = ::g::EventApp_FuseControlsTextControl_Value_Property::New1(temp, ExploreItem__Template::__selector0());
    ::g::Fuse::Reactive::Data* temp2 = ::g::Fuse::Reactive::Data::New1(::STRINGS[1/*"title"*/]);
    __this->__g_nametable1 = ::g::Uno::UX::NameTable::New1(uPtr(__this->__parent1)->__g_nametable1, ExploreItem__Template::__g_static_nametable1());
    ::g::Fuse::Controls::Text* temp1 = ::g::Fuse::Controls::Text::New3();
    __this->temp1_Value_inst = ::g::EventApp_FuseControlsTextControl_Value_Property::New1(temp1, ExploreItem__Template::__selector0());
    ::g::Fuse::Reactive::Data* temp3 = ::g::Fuse::Reactive::Data::New1(::STRINGS[2/*"fact"*/]);
    ::g::Fuse::Reactive::DataBinding* temp4 = ::g::Fuse::Reactive::DataBinding::New1(__this->temp_Value_inst, (uObject*)temp2, __this->__g_nametable1, 3);
    ::g::Fuse::Reactive::DataBinding* temp5 = ::g::Fuse::Reactive::DataBinding::New1(__this->temp1_Value_inst, (uObject*)temp3, __this->__g_nametable1, 3);
    __self1->Rows(::STRINGS[3/*"1*,1*"*/]);
    __self1->Height(::g::Uno::UX::Size__New1(60.0f, 1));
    temp->FontSize(20.0f);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Bindings()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp4);
    temp1->FontSize(10.0f);
    temp1->TextColor(::g::Uno::Float4__New2(0.6666667f, 0.6666667f, 0.6666667f, 1.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp1->Bindings()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp5);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(__self1->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(__self1->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp1);
    return *__retval = __self1, void();
}

// public Template New(ExploreItem parent, ExploreItem parentInstance) :88
void ExploreItem__Template__New2_fn(::g::ExploreItem* parent, ::g::ExploreItem* parentInstance, ExploreItem__Template** __retval)
{
    *__retval = ExploreItem__Template::New2(parent, parentInstance);
}

uSStrong<uArray*> ExploreItem__Template::__g_static_nametable1_;
::g::Uno::UX::Selector ExploreItem__Template::__selector0_;

// public Template(ExploreItem parent, ExploreItem parentInstance) [instance] :88
void ExploreItem__Template::ctor_1(::g::ExploreItem* parent, ::g::ExploreItem* parentInstance)
{
    ctor_(NULL, false);
    __parent1 = parent;
    __parentInstance1 = parentInstance;
}

// public Template New(ExploreItem parent, ExploreItem parentInstance) [static] :88
ExploreItem__Template* ExploreItem__Template::New2(::g::ExploreItem* parent, ::g::ExploreItem* parentInstance)
{
    ExploreItem__Template* obj1 = (ExploreItem__Template*)uNew(ExploreItem__Template_typeof());
    obj1->ctor_1(parent, parentInstance);
    return obj1;
}
// }

} // ::g
