// This file was generated based on /Users/medbeji/Documents/event-app/event-app/build/Android/Preview/cache/ux11/ClubPage.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.ClubPage.h>
#include <_root.ClubPage.Template.h>
#include <_root.EventApp_Explor-2333b7cc.h>
#include <_root.EventApp_Explor-2b141a06.h>
#include <_root.EventApp_Explor-41fa3c46.h>
#include <_root.EventApp_Explor-a95a9e89.h>
#include <_root.EventApp_Explor-cc1acfc8.h>
#include <_root.EventApp_FuseSe-2d3a3fbc.h>
#include <_root.ExploreItem.h>
#include <Fuse.Animations.Animator.h>
#include <Fuse.Animations.Change-1.h>
#include <Fuse.Binding.h>
#include <Fuse.Controls.Panel.h>
#include <Fuse.Effects.DropShadow.h>
#include <Fuse.Elements.Alignment.h>
#include <Fuse.Elements.Element.h>
#include <Fuse.Gestures.Tapped.h>
#include <Fuse.Node.h>
#include <Fuse.Reactive.BindingMode.h>
#include <Fuse.Reactive.Data.h>
#include <Fuse.Reactive.DataBinding.h>
#include <Fuse.Reactive.IExpression.h>
#include <Fuse.Selection.Selectable.h>
#include <Fuse.Selection.ToggleSelection.h>
#include <Fuse.Selection.WhileSelected.h>
#include <Fuse.Triggers.Actions-fcab7e57.h>
#include <Fuse.Triggers.Trigger.h>
#include <Fuse.Visual.h>
#include <Uno.Bool.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.Float.h>
#include <Uno.Object.h>
#include <Uno.String.h>
#include <Uno.UX.NameTable.h>
#include <Uno.UX.Property.h>
#include <Uno.UX.Property-1.h>
#include <Uno.UX.Selector.h>
#include <Uno.UX.Size.h>
#include <Uno.UX.Unit.h>
static uString* STRINGS[12];
static uType* TYPES[7];

namespace g{

// public partial sealed class ClubPage.Template :6
// {
// static Template() :25
static void ClubPage__Template__cctor__fn(uType* __type)
{
    ClubPage__Template::__g_static_nametable1_ = uArray::Init<uString*>(::TYPES[0/*string[]*/], 1, ::STRINGS[0/*"topItem"*/]);
    ClubPage__Template::__selector0_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[1/*"Value"*/]);
    ClubPage__Template::__selector1_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[2/*"InDetailsMode"*/]);
    ClubPage__Template::__selector2_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[3/*"ImageName"*/]);
    ClubPage__Template::__selector3_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[4/*"Country"*/]);
    ClubPage__Template::__selector4_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[5/*"ForegroundC...*/]);
    ClubPage__Template::__selector5_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[6/*"CardAlignment"*/]);
    ClubPage__Template::__selector6_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[0/*"topItem"*/]);
}

static void ClubPage__Template_build(uType* type)
{
    ::STRINGS[0] = uString::Const("topItem");
    ::STRINGS[1] = uString::Const("Value");
    ::STRINGS[2] = uString::Const("InDetailsMode");
    ::STRINGS[3] = uString::Const("ImageName");
    ::STRINGS[4] = uString::Const("Country");
    ::STRINGS[5] = uString::Const("ForegroundColor");
    ::STRINGS[6] = uString::Const("CardAlignment");
    ::STRINGS[7] = uString::Const("id");
    ::STRINGS[8] = uString::Const("name");
    ::STRINGS[9] = uString::Const("country");
    ::STRINGS[10] = uString::Const("color");
    ::STRINGS[11] = uString::Const("alignment");
    ::TYPES[0] = ::g::Uno::String_typeof()->Array();
    ::TYPES[1] = ::g::Fuse::Animations::Change_typeof()->MakeType(::g::Uno::Bool_typeof(), NULL);
    ::TYPES[2] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL);
    ::TYPES[3] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Animations::Animator_typeof(), NULL);
    ::TYPES[4] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Triggers::Actions::TriggerAction_typeof(), NULL);
    ::TYPES[5] = ::g::Uno::Collections::ICollection_typeof()->MakeType(uObject_typeof(), NULL);
    ::TYPES[6] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL);
    type->SetFields(2,
        ::g::Uno::UX::NameTable_typeof(), offsetof(::g::ClubPage__Template, __g_nametable1), 0,
        ::g::ClubPage_typeof(), offsetof(::g::ClubPage__Template, __parent1), uFieldFlagsWeak,
        ::g::ClubPage_typeof(), offsetof(::g::ClubPage__Template, __parentInstance1), uFieldFlagsWeak,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Fuse::Elements::Alignment_typeof(), NULL), offsetof(::g::ClubPage__Template, __self_CardAlignment_inst1), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(::g::ClubPage__Template, __self_Country_inst1), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float4_typeof(), NULL), offsetof(::g::ClubPage__Template, __self_ForegroundColor_inst1), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(::g::ClubPage__Template, __self_ImageName_inst1), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Bool_typeof(), NULL), offsetof(::g::ClubPage__Template, __self_InDetailsMode_inst1), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(::g::ClubPage__Template, temp_Value_inst), 0,
        ::TYPES[0/*string[]*/], (uintptr_t)&::g::ClubPage__Template::__g_static_nametable1_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::ClubPage__Template::__selector0_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::ClubPage__Template::__selector1_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::ClubPage__Template::__selector2_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::ClubPage__Template::__selector3_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::ClubPage__Template::__selector4_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::ClubPage__Template::__selector5_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::ClubPage__Template::__selector6_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)ClubPage__Template__New2_fn, 0, true, type, 2, ::g::ClubPage_typeof(), ::g::ClubPage_typeof()));
}

::g::Uno::UX::Template_type* ClubPage__Template_typeof()
{
    static uSStrong< ::g::Uno::UX::Template_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Template_typeof();
    options.FieldCount = 19;
    options.ObjectSize = sizeof(ClubPage__Template);
    options.TypeSize = sizeof(::g::Uno::UX::Template_type);
    type = (::g::Uno::UX::Template_type*)uClassType::New("ClubPage.Template", options);
    type->fp_build_ = ClubPage__Template_build;
    type->fp_cctor_ = ClubPage__Template__cctor__fn;
    type->fp_New1 = (void(*)(::g::Uno::UX::Template*, uObject**))ClubPage__Template__New1_fn;
    return type;
}

// public Template(ClubPage parent, ClubPage parentInstance) :10
void ClubPage__Template__ctor_1_fn(ClubPage__Template* __this, ::g::ClubPage* parent, ::g::ClubPage* parentInstance)
{
    __this->ctor_1(parent, parentInstance);
}

// public override sealed object New() :28
void ClubPage__Template__New1_fn(ClubPage__Template* __this, uObject** __retval)
{
    uStackFrame __("ClubPage.Template", "New()");
    ::g::ExploreItem* __self1 = ::g::ExploreItem::New4(uPtr(__this->__parent1)->detailsImagePanel, uPtr(__this->__parent1)->detailsPlacesPanel, uPtr(__this->__parent1)->detailsInfoPanel, uPtr(__this->__parent1)->detailsFactsPanel);
    ::g::Fuse::Selection::Selectable* temp = ::g::Fuse::Selection::Selectable::New2();
    __this->temp_Value_inst = ::g::EventApp_FuseSelectionSelectable_Value_Property::New1(temp, ClubPage__Template::__selector0());
    ::g::Fuse::Reactive::Data* temp1 = ::g::Fuse::Reactive::Data::New1(::STRINGS[7/*"id"*/]);
    __this->__g_nametable1 = ::g::Uno::UX::NameTable::New1(uPtr(__this->__parent1)->__g_nametable1, ClubPage__Template::__g_static_nametable1());
    __this->__self_InDetailsMode_inst1 = ::g::EventApp_ExploreItem_InDetailsMode_Property::New1(__self1, ClubPage__Template::__selector1());
    __this->__self_ImageName_inst1 = ::g::EventApp_ExploreItem_ImageName_Property::New1(__self1, ClubPage__Template::__selector2());
    ::g::Fuse::Reactive::Data* temp2 = ::g::Fuse::Reactive::Data::New1(::STRINGS[8/*"name"*/]);
    __this->__self_Country_inst1 = ::g::EventApp_ExploreItem_Country_Property::New1(__self1, ClubPage__Template::__selector3());
    ::g::Fuse::Reactive::Data* temp3 = ::g::Fuse::Reactive::Data::New1(::STRINGS[9/*"country"*/]);
    __this->__self_ForegroundColor_inst1 = ::g::EventApp_ExploreItem_ForegroundColor_Property::New1(__self1, ClubPage__Template::__selector4());
    ::g::Fuse::Reactive::Data* temp4 = ::g::Fuse::Reactive::Data::New1(::STRINGS[10/*"color"*/]);
    __this->__self_CardAlignment_inst1 = ::g::EventApp_ExploreItem_CardAlignment_Property::New1(__self1, ClubPage__Template::__selector5());
    ::g::Fuse::Reactive::Data* temp5 = ::g::Fuse::Reactive::Data::New1(::STRINGS[11/*"alignment"*/]);
    ::g::Fuse::Effects::DropShadow* temp6 = ::g::Fuse::Effects::DropShadow::New2();
    ::g::Fuse::Reactive::DataBinding* temp7 = ::g::Fuse::Reactive::DataBinding::New1(__this->temp_Value_inst, (uObject*)temp1, __this->__g_nametable1, 3);
    ::g::Fuse::Selection::WhileSelected* temp8 = ::g::Fuse::Selection::WhileSelected::New2();
    ::g::Fuse::Animations::Change* temp9 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New2(::TYPES[1/*Fuse.Animations.Change<bool>*/], __this->__self_InDetailsMode_inst1);
    ::g::Fuse::Gestures::Tapped* temp10 = ::g::Fuse::Gestures::Tapped::New2();
    ::g::Fuse::Selection::ToggleSelection* temp11 = ::g::Fuse::Selection::ToggleSelection::New2();
    ::g::Fuse::Reactive::DataBinding* temp12 = ::g::Fuse::Reactive::DataBinding::New1(__this->__self_ImageName_inst1, (uObject*)temp2, __this->__g_nametable1, 3);
    ::g::Fuse::Reactive::DataBinding* temp13 = ::g::Fuse::Reactive::DataBinding::New1(__this->__self_Country_inst1, (uObject*)temp3, __this->__g_nametable1, 3);
    ::g::Fuse::Reactive::DataBinding* temp14 = ::g::Fuse::Reactive::DataBinding::New1(__this->__self_ForegroundColor_inst1, (uObject*)temp4, __this->__g_nametable1, 3);
    ::g::Fuse::Reactive::DataBinding* temp15 = ::g::Fuse::Reactive::DataBinding::New1(__this->__self_CardAlignment_inst1, (uObject*)temp5, __this->__g_nametable1, 3);
    __self1->Height(::g::Uno::UX::Size__New1(200.0f, 1));
    __self1->Name(ClubPage__Template::__selector6());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Bindings()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp7);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp8->Animators()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp9);
    ::g::Fuse::Animations::Change__set_Value_fn(temp9, uCRef(true));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp10->Actions()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp11);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__this->__g_nametable1)->Objects()), ::TYPES[5/*Uno.Collections.ICollection<object>*/]), __self1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(__self1->Children()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Node>*/]), temp6);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(__self1->Children()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Node>*/]), temp);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(__self1->Children()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Node>*/]), temp8);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(__self1->Children()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Node>*/]), temp10);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(__self1->Bindings()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp12);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(__self1->Bindings()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp13);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(__self1->Bindings()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp14);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(__self1->Bindings()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp15);
    return *__retval = __self1, void();
}

// public Template New(ClubPage parent, ClubPage parentInstance) :10
void ClubPage__Template__New2_fn(::g::ClubPage* parent, ::g::ClubPage* parentInstance, ClubPage__Template** __retval)
{
    *__retval = ClubPage__Template::New2(parent, parentInstance);
}

uSStrong<uArray*> ClubPage__Template::__g_static_nametable1_;
::g::Uno::UX::Selector ClubPage__Template::__selector0_;
::g::Uno::UX::Selector ClubPage__Template::__selector1_;
::g::Uno::UX::Selector ClubPage__Template::__selector2_;
::g::Uno::UX::Selector ClubPage__Template::__selector3_;
::g::Uno::UX::Selector ClubPage__Template::__selector4_;
::g::Uno::UX::Selector ClubPage__Template::__selector5_;
::g::Uno::UX::Selector ClubPage__Template::__selector6_;

// public Template(ClubPage parent, ClubPage parentInstance) [instance] :10
void ClubPage__Template::ctor_1(::g::ClubPage* parent, ::g::ClubPage* parentInstance)
{
    ctor_(NULL, false);
    __parent1 = parent;
    __parentInstance1 = parentInstance;
}

// public Template New(ClubPage parent, ClubPage parentInstance) [static] :10
ClubPage__Template* ClubPage__Template::New2(::g::ClubPage* parent, ::g::ClubPage* parentInstance)
{
    ClubPage__Template* obj1 = (ClubPage__Template*)uNew(ClubPage__Template_typeof());
    obj1->ctor_1(parent, parentInstance);
    return obj1;
}
// }

} // ::g
