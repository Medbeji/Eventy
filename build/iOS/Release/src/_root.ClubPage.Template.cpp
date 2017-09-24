// This file was generated based on '.uno/ux11/ClubPage.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.ClubPage.h>
#include <_root.ClubPage.Template.h>
#include <_root.EventApp_ExploreItem_CardAlignment_Property.h>
#include <_root.EventApp_ExploreItem_Country_Property.h>
#include <_root.EventApp_ExploreItem_ForegroundColor_Property.h>
#include <_root.EventApp_ExploreItem_ImageName_Property.h>
#include <_root.EventApp_ExploreItem_InDetailsMode_Property.h>
#include <_root.EventApp_FuseSelectionSelectable_Value_Property.h>
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
#include <Fuse.Reactive.DataBinding-1.h>
#include <Fuse.Selection.Selectable.h>
#include <Fuse.Selection.ToggleSelection.h>
#include <Fuse.Selection.WhileSelected.h>
#include <Fuse.Triggers.Actions.TriggerAction.h>
#include <Fuse.Triggers.Trigger.h>
#include <Fuse.Visual.h>
#include <Uno.Bool.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.Float.h>
#include <Uno.Object.h>
#include <Uno.String.h>
#include <Uno.UX.Property-1.h>
#include <Uno.UX.Selector.h>
#include <Uno.UX.Size.h>
#include <Uno.UX.Unit.h>
static uString* STRINGS[12];
static uType* TYPES[8];

namespace g{

// public partial sealed class ClubPage.Template :6
// {
// static Template() :21
static void ClubPage__Template__cctor__fn(uType* __type)
{
    ClubPage__Template::__selector0_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[0/*"Value"*/]);
    ClubPage__Template::__selector1_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[1/*"InDetailsMode"*/]);
    ClubPage__Template::__selector2_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[2/*"ImageName"*/]);
    ClubPage__Template::__selector3_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[3/*"Country"*/]);
    ClubPage__Template::__selector4_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[4/*"ForegroundC...*/]);
    ClubPage__Template::__selector5_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[5/*"CardAlignment"*/]);
    ClubPage__Template::__selector6_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[6/*"topItem"*/]);
}

static void ClubPage__Template_build(uType* type)
{
    ::STRINGS[0] = uString::Const("Value");
    ::STRINGS[1] = uString::Const("InDetailsMode");
    ::STRINGS[2] = uString::Const("ImageName");
    ::STRINGS[3] = uString::Const("Country");
    ::STRINGS[4] = uString::Const("ForegroundColor");
    ::STRINGS[5] = uString::Const("CardAlignment");
    ::STRINGS[6] = uString::Const("topItem");
    ::STRINGS[7] = uString::Const("id");
    ::STRINGS[8] = uString::Const("name");
    ::STRINGS[9] = uString::Const("country");
    ::STRINGS[10] = uString::Const("color");
    ::STRINGS[11] = uString::Const("alignment");
    ::TYPES[0] = ::g::Fuse::Reactive::DataBinding_typeof()->MakeType(::g::Uno::String_typeof(), NULL);
    ::TYPES[1] = ::g::Fuse::Animations::Change_typeof()->MakeType(::g::Uno::Bool_typeof(), NULL);
    ::TYPES[2] = ::g::Fuse::Reactive::DataBinding_typeof()->MakeType(::g::Uno::Float4_typeof(), NULL);
    ::TYPES[3] = ::g::Fuse::Reactive::DataBinding_typeof()->MakeType(::g::Fuse::Elements::Alignment_typeof(), NULL);
    ::TYPES[4] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL);
    ::TYPES[5] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Animations::Animator_typeof(), NULL);
    ::TYPES[6] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Triggers::Actions::TriggerAction_typeof(), NULL);
    ::TYPES[7] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL);
    type->SetFields(2,
        ::g::ClubPage_typeof(), offsetof(::g::ClubPage__Template, __parent1), uFieldFlagsWeak,
        ::g::ClubPage_typeof(), offsetof(::g::ClubPage__Template, __parentInstance1), uFieldFlagsWeak,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Fuse::Elements::Alignment_typeof(), NULL), offsetof(::g::ClubPage__Template, self_CardAlignment_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(::g::ClubPage__Template, self_Country_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float4_typeof(), NULL), offsetof(::g::ClubPage__Template, self_ForegroundColor_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(::g::ClubPage__Template, self_ImageName_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Bool_typeof(), NULL), offsetof(::g::ClubPage__Template, self_InDetailsMode_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(::g::ClubPage__Template, temp_Value_inst), 0,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::ClubPage__Template::__selector0_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::ClubPage__Template::__selector1_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::ClubPage__Template::__selector2_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::ClubPage__Template::__selector3_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::ClubPage__Template::__selector4_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::ClubPage__Template::__selector5_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::ClubPage__Template::__selector6_, uFieldFlagsStatic);
}

::g::Uno::UX::Template_type* ClubPage__Template_typeof()
{
    static uSStrong< ::g::Uno::UX::Template_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Template_typeof();
    options.FieldCount = 17;
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

// public override sealed object New() :24
void ClubPage__Template__New1_fn(ClubPage__Template* __this, uObject** __retval)
{
    ::g::ExploreItem* self = ::g::ExploreItem::New4(uPtr(__this->__parent1)->detailsImagePanel, uPtr(__this->__parent1)->detailsPlacesPanel, uPtr(__this->__parent1)->detailsInfoPanel, uPtr(__this->__parent1)->detailsFactsPanel);
    ::g::Fuse::Selection::Selectable* temp = ::g::Fuse::Selection::Selectable::New2();
    __this->temp_Value_inst = ::g::EventApp_FuseSelectionSelectable_Value_Property::New1(temp, ClubPage__Template::__selector0());
    __this->self_InDetailsMode_inst = ::g::EventApp_ExploreItem_InDetailsMode_Property::New1(self, ClubPage__Template::__selector1());
    __this->self_ImageName_inst = ::g::EventApp_ExploreItem_ImageName_Property::New1(self, ClubPage__Template::__selector2());
    __this->self_Country_inst = ::g::EventApp_ExploreItem_Country_Property::New1(self, ClubPage__Template::__selector3());
    __this->self_ForegroundColor_inst = ::g::EventApp_ExploreItem_ForegroundColor_Property::New1(self, ClubPage__Template::__selector4());
    __this->self_CardAlignment_inst = ::g::EventApp_ExploreItem_CardAlignment_Property::New1(self, ClubPage__Template::__selector5());
    ::g::Fuse::Effects::DropShadow* temp1 = ::g::Fuse::Effects::DropShadow::New2();
    ::g::Fuse::Reactive::DataBinding* temp2 = (::g::Fuse::Reactive::DataBinding*)::g::Fuse::Reactive::DataBinding::New1(::TYPES[0/*Fuse.Reactive.DataBinding<string>*/], __this->temp_Value_inst, ::STRINGS[7/*"id"*/]);
    ::g::Fuse::Selection::WhileSelected* temp3 = ::g::Fuse::Selection::WhileSelected::New2();
    ::g::Fuse::Animations::Change* temp4 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New2(::TYPES[1/*Fuse.Animations.Change<bool>*/], __this->self_InDetailsMode_inst);
    ::g::Fuse::Gestures::Tapped* temp5 = ::g::Fuse::Gestures::Tapped::New2();
    ::g::Fuse::Selection::ToggleSelection* temp6 = ::g::Fuse::Selection::ToggleSelection::New2();
    ::g::Fuse::Reactive::DataBinding* temp7 = (::g::Fuse::Reactive::DataBinding*)::g::Fuse::Reactive::DataBinding::New1(::TYPES[0/*Fuse.Reactive.DataBinding<string>*/], __this->self_ImageName_inst, ::STRINGS[8/*"name"*/]);
    ::g::Fuse::Reactive::DataBinding* temp8 = (::g::Fuse::Reactive::DataBinding*)::g::Fuse::Reactive::DataBinding::New1(::TYPES[0/*Fuse.Reactive.DataBinding<string>*/], __this->self_Country_inst, ::STRINGS[9/*"country"*/]);
    ::g::Fuse::Reactive::DataBinding* temp9 = (::g::Fuse::Reactive::DataBinding*)::g::Fuse::Reactive::DataBinding::New1(::TYPES[2/*Fuse.Reactive.DataBinding<float4>*/], __this->self_ForegroundColor_inst, ::STRINGS[10/*"color"*/]);
    ::g::Fuse::Reactive::DataBinding* temp10 = (::g::Fuse::Reactive::DataBinding*)::g::Fuse::Reactive::DataBinding::New1(::TYPES[3/*Fuse.Reactive.DataBinding<Fuse.Elements.Alignment>*/], __this->self_CardAlignment_inst, ::STRINGS[11/*"alignment"*/]);
    self->Height(::g::Uno::UX::Size__New1(200.0f, 1));
    self->Name(ClubPage__Template::__selector6());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Bindings()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp2);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp3->Animators()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp4);
    ::g::Fuse::Animations::Change__set_Value_fn(temp4, uCRef(true));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp5->Actions()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp6);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(self->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(self->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(self->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp3);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(self->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp5);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(self->Bindings()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp7);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(self->Bindings()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp8);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(self->Bindings()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp9);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(self->Bindings()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp10);
    return *__retval = self, void();
}

// public Template New(ClubPage parent, ClubPage parentInstance) :10
void ClubPage__Template__New2_fn(::g::ClubPage* parent, ::g::ClubPage* parentInstance, ClubPage__Template** __retval)
{
    *__retval = ClubPage__Template::New2(parent, parentInstance);
}

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
