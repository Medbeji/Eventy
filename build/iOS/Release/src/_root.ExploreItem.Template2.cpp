// This file was generated based on '.uno/ux11/ExploreItem.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.EventApp_FuseDrawingSolidColor_Color_Property.h>
#include <_root.ExploreItem.h>
#include <_root.ExploreItem.Template2.h>
#include <Fuse.Animations.Animator.h>
#include <Fuse.Animations.Change-1.h>
#include <Fuse.Animations.Scale.h>
#include <Fuse.Controls.Circle.h>
#include <Fuse.Controls.Shape.h>
#include <Fuse.Drawing.Brush.h>
#include <Fuse.Drawing.SolidColor.h>
#include <Fuse.Drawing.Stroke.h>
#include <Fuse.Elements.Element.h>
#include <Fuse.Navigation.ActivatingAnimation.h>
#include <Fuse.Node.h>
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
static uString* STRINGS[2];
static uType* TYPES[5];

namespace g{

// public partial sealed class ExploreItem.Template2 :157
// {
// static Template2() :168
static void ExploreItem__Template2__cctor__fn(uType* __type)
{
    ExploreItem__Template2::__selector0_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[0/*"Color"*/]);
    ExploreItem__Template2::__selector1_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[1/*"Dot"*/]);
}

static void ExploreItem__Template2_build(uType* type)
{
    ::STRINGS[0] = uString::Const("Color");
    ::STRINGS[1] = uString::Const("Dot");
    ::TYPES[0] = ::g::Fuse::Animations::Change_typeof()->MakeType(::g::Uno::Float4_typeof(), NULL);
    ::TYPES[1] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Animations::Animator_typeof(), NULL);
    ::TYPES[2] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Drawing::Brush_typeof(), NULL);
    ::TYPES[3] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Drawing::Stroke_typeof(), NULL);
    ::TYPES[4] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL);
    type->SetFields(2,
        ::g::ExploreItem_typeof(), offsetof(::g::ExploreItem__Template2, __parent1), uFieldFlagsWeak,
        ::g::ExploreItem_typeof(), offsetof(::g::ExploreItem__Template2, __parentInstance1), uFieldFlagsWeak,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float4_typeof(), NULL), offsetof(::g::ExploreItem__Template2, TheColor_Color_inst), 0,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::ExploreItem__Template2::__selector0_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::ExploreItem__Template2::__selector1_, uFieldFlagsStatic);
}

::g::Uno::UX::Template_type* ExploreItem__Template2_typeof()
{
    static uSStrong< ::g::Uno::UX::Template_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Template_typeof();
    options.FieldCount = 7;
    options.ObjectSize = sizeof(ExploreItem__Template2);
    options.TypeSize = sizeof(::g::Uno::UX::Template_type);
    type = (::g::Uno::UX::Template_type*)uClassType::New("ExploreItem.Template2", options);
    type->fp_build_ = ExploreItem__Template2_build;
    type->fp_cctor_ = ExploreItem__Template2__cctor__fn;
    type->fp_New1 = (void(*)(::g::Uno::UX::Template*, uObject**))ExploreItem__Template2__New1_fn;
    return type;
}

// public Template2(ExploreItem parent, ExploreItem parentInstance) :161
void ExploreItem__Template2__ctor_1_fn(ExploreItem__Template2* __this, ::g::ExploreItem* parent, ::g::ExploreItem* parentInstance)
{
    __this->ctor_1(parent, parentInstance);
}

// public override sealed object New() :171
void ExploreItem__Template2__New1_fn(ExploreItem__Template2* __this, uObject** __retval)
{
    ::g::Fuse::Controls::Circle* self = ::g::Fuse::Controls::Circle::New3();
    ::g::Fuse::Drawing::SolidColor* TheColor1 = ::g::Fuse::Drawing::SolidColor::New2();
    __this->TheColor_Color_inst = ::g::EventApp_FuseDrawingSolidColor_Color_Property::New1(TheColor1, ExploreItem__Template2::__selector0());
    ::g::Fuse::Drawing::Stroke* temp = ::g::Fuse::Drawing::Stroke::New2();
    ::g::Fuse::Navigation::ActivatingAnimation* temp1 = ::g::Fuse::Navigation::ActivatingAnimation::New2();
    ::g::Fuse::Animations::Change* temp2 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New2(::TYPES[0/*Fuse.Animations.Change<float4>*/], __this->TheColor_Color_inst);
    ::g::Fuse::Animations::Scale* temp3 = ::g::Fuse::Animations::Scale::New2();
    self->Width(::g::Uno::UX::Size__New1(6.0f, 1));
    self->Height(::g::Uno::UX::Size__New1(6.0f, 1));
    self->Margin(::g::Uno::Float4__New2(5.0f, 5.0f, 5.0f, 5.0f));
    self->Name(ExploreItem__Template2::__selector1());
    TheColor1->Color(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 0.3f));
    temp->Color(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp->Width(1.0f);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp1->Animators()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp2);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp1->Animators()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp3);
    ::g::Fuse::Animations::Change__set_Value_fn(temp2, uCRef(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f)));
    temp3->Factor(1.2f);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(self->Fills()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Drawing.Brush>*/]), TheColor1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(self->Strokes()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Drawing.Stroke>*/]), temp);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(self->Children()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Node>*/]), temp1);
    return *__retval = self, void();
}

// public Template2 New(ExploreItem parent, ExploreItem parentInstance) :161
void ExploreItem__Template2__New2_fn(::g::ExploreItem* parent, ::g::ExploreItem* parentInstance, ExploreItem__Template2** __retval)
{
    *__retval = ExploreItem__Template2::New2(parent, parentInstance);
}

::g::Uno::UX::Selector ExploreItem__Template2::__selector0_;
::g::Uno::UX::Selector ExploreItem__Template2::__selector1_;

// public Template2(ExploreItem parent, ExploreItem parentInstance) [instance] :161
void ExploreItem__Template2::ctor_1(::g::ExploreItem* parent, ::g::ExploreItem* parentInstance)
{
    ctor_(::STRINGS[1/*"Dot"*/], false);
    __parent1 = parent;
    __parentInstance1 = parentInstance;
}

// public Template2 New(ExploreItem parent, ExploreItem parentInstance) [static] :161
ExploreItem__Template2* ExploreItem__Template2::New2(::g::ExploreItem* parent, ::g::ExploreItem* parentInstance)
{
    ExploreItem__Template2* obj1 = (ExploreItem__Template2*)uNew(ExploreItem__Template2_typeof());
    obj1->ctor_1(parent, parentInstance);
    return obj1;
}
// }

} // ::g
