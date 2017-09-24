// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Outracks.NullToNone.h>
#include <Outracks.Optional.h>
#include <Outracks.Optional-1.h>
#include <Outracks.Simulator.By-1619eafd.h>
#include <Outracks.Simulator.By-1684483d.h>
#include <Outracks.Simulator.By-1c4c0d48.h>
#include <Outracks.Simulator.By-208998dc.h>
#include <Outracks.Simulator.By-23c23568.h>
#include <Outracks.Simulator.By-26aaeb.h>
#include <Outracks.Simulator.By-2e56d011.h>
#include <Outracks.Simulator.By-2f78ce91.h>
#include <Outracks.Simulator.By-305f2ddf.h>
#include <Outracks.Simulator.By-33674781.h>
#include <Outracks.Simulator.By-38b982f5.h>
#include <Outracks.Simulator.By-3fb73d1c.h>
#include <Outracks.Simulator.By-40074639.h>
#include <Outracks.Simulator.By-4365c5a7.h>
#include <Outracks.Simulator.By-44a16ccb.h>
#include <Outracks.Simulator.By-4880aa5b.h>
#include <Outracks.Simulator.By-518b5b82.h>
#include <Outracks.Simulator.By-658d6872.h>
#include <Outracks.Simulator.By-683bc37a.h>
#include <Outracks.Simulator.By-698e9475.h>
#include <Outracks.Simulator.By-6bef3a2c.h>
#include <Outracks.Simulator.By-748f5455.h>
#include <Outracks.Simulator.By-750e3557.h>
#include <Outracks.Simulator.By-783f7836.h>
#include <Outracks.Simulator.By-90f619f6.h>
#include <Outracks.Simulator.By-96e5bda0.h>
#include <Outracks.Simulator.By-9809b1b1.h>
#include <Outracks.Simulator.By-9ef54f7b.h>
#include <Outracks.Simulator.By-a34605c5.h>
#include <Outracks.Simulator.By-a693896d.h>
#include <Outracks.Simulator.By-c3cf8464.h>
#include <Outracks.Simulator.By-c66e3e07.h>
#include <Outracks.Simulator.By-c84bc03d.h>
#include <Outracks.Simulator.By-c9416ac3.h>
#include <Outracks.Simulator.By-cb371e67.h>
#include <Outracks.Simulator.By-ceabdc0b.h>
#include <Outracks.Simulator.By-d2373bff.h>
#include <Outracks.Simulator.By-dfa1cd91.h>
#include <Outracks.Simulator.By-f2188f8.h>
#include <Outracks.Simulator.By-f6505b42.h>
#include <Outracks.Simulator.By-fba2a916.h>
#include <Outracks.Simulator.By-fda889fc.h>
#include <Outracks.Simulator.Im-4687ab12.h>
#include <Outracks.Simulator.In-54f82bd4.h>
#include <Outracks.Simulator.In-8ad043b5.h>
#include <Outracks.Simulator.List.h>
#include <Outracks.Simulator.No-322dacc.h>
#include <Outracks.Simulator.Ob-98516f34.h>
#include <Outracks.Simulator.Se-c68500b4.h>
#include <Outracks.Simulator.St-4bd16e5b.h>
#include <System.IO.BinaryReader.h>
#include <System.IO.BinaryWriter.h>
#include <Uno.Action-1.h>
#include <Uno.Action-2.h>
#include <Uno.ArgumentNullException.h>
#include <Uno.Bool.h>
#include <Uno.Byte.h>
#include <Uno.Char.h>
#include <Uno.Collections.Enume-8ddd045.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IEnumerator.h>
#include <Uno.Collections.IEnumerator-1.h>
#include <Uno.Collections.List-1.h>
#include <Uno.Double.h>
#include <Uno.Exception.h>
#include <Uno.Func-2.h>
#include <Uno.Func-3.h>
#include <Uno.Int.h>
#include <Uno.Object.h>
#include <Uno.Runtime.Implement-eca777ec.h>
#include <Uno.String.h>
#include <Uno.Text.StringBuilder.h>
static uString* STRINGS[35];
static uType* TYPES[111];

namespace g{
namespace Outracks{
namespace Simulator{
namespace Bytecode{

// /usr/local/share/uno/Packages/Outracks.Simulator.Common.Uno/0.0.0/bytecode/$.uno
// --------------------------------------------------------------------------------

// public sealed class AddEventHandler :594
// {
static void AddEventHandler_build(uType* type)
{
    ::STRINGS[0] = uString::Const(".");
    ::STRINGS[1] = uString::Const(" += ");
    type->SetFields(0,
        ::g::Outracks::Simulator::Bytecode::TypeMemberName_typeof(), offsetof(::g::Outracks::Simulator::Bytecode::AddEventHandler, Event), 0,
        ::g::Outracks::Simulator::Bytecode::Expression_typeof(), offsetof(::g::Outracks::Simulator::Bytecode::AddEventHandler, Handler), 0,
        ::g::Outracks::Simulator::Bytecode::Expression_typeof(), offsetof(::g::Outracks::Simulator::Bytecode::AddEventHandler, Object), 0);
    type->Reflection.SetFields(3,
        new uField("Event", 0),
        new uField("Handler", 1),
        new uField("Object", 2));
    type->Reflection.SetFunctions(3,
        new uFunction(".ctor", NULL, (void*)AddEventHandler__New1_fn, 0, true, type, 3, ::g::Outracks::Simulator::Bytecode::Expression_typeof(), ::g::Outracks::Simulator::Bytecode::TypeMemberName_typeof(), ::g::Outracks::Simulator::Bytecode::Expression_typeof()),
        new uFunction("Read", NULL, (void*)AddEventHandler__Read2_fn, 0, true, type, 1, ::g::System::IO::BinaryReader_typeof()),
        new uFunction("Write", NULL, (void*)AddEventHandler__Write2_fn, 0, true, uVoid_typeof(), 2, type, ::g::System::IO::BinaryWriter_typeof()));
}

::g::Outracks::Simulator::Bytecode::Expression_type* AddEventHandler_typeof()
{
    static uSStrong< ::g::Outracks::Simulator::Bytecode::Expression_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Outracks::Simulator::Bytecode::Expression_typeof();
    options.FieldCount = 3;
    options.ObjectSize = sizeof(AddEventHandler);
    options.TypeSize = sizeof(::g::Outracks::Simulator::Bytecode::Expression_type);
    type = (::g::Outracks::Simulator::Bytecode::Expression_type*)uClassType::New("Outracks.Simulator.Bytecode.AddEventHandler", options);
    type->fp_build_ = AddEventHandler_build;
    type->fp_get_ExpressionId = (void(*)(::g::Outracks::Simulator::Bytecode::Expression*, uChar*))AddEventHandler__get_ExpressionId_fn;
    type->fp_ToString = (void(*)(uObject*, uString**))AddEventHandler__ToString_fn;
    type->fp_WriteExpression = (void(*)(::g::Outracks::Simulator::Bytecode::Expression*, ::g::System::IO::BinaryWriter*))AddEventHandler__WriteExpression_fn;
    return type;
}

// public AddEventHandler(Outracks.Simulator.Bytecode.Expression o, Outracks.Simulator.Bytecode.TypeMemberName ev, Outracks.Simulator.Bytecode.Expression handler) :602
void AddEventHandler__ctor_2_fn(AddEventHandler* __this, ::g::Outracks::Simulator::Bytecode::Expression* o, ::g::Outracks::Simulator::Bytecode::TypeMemberName* ev, ::g::Outracks::Simulator::Bytecode::Expression* handler)
{
    __this->ctor_2(o, ev, handler);
}

// public override sealed char get_ExpressionId() :600
void AddEventHandler__get_ExpressionId_fn(AddEventHandler* __this, uChar* __retval)
{
    return *__retval = 'n', void();
}

// public AddEventHandler New(Outracks.Simulator.Bytecode.Expression o, Outracks.Simulator.Bytecode.TypeMemberName ev, Outracks.Simulator.Bytecode.Expression handler) :602
void AddEventHandler__New1_fn(::g::Outracks::Simulator::Bytecode::Expression* o, ::g::Outracks::Simulator::Bytecode::TypeMemberName* ev, ::g::Outracks::Simulator::Bytecode::Expression* handler, AddEventHandler** __retval)
{
    *__retval = AddEventHandler::New1(o, ev, handler);
}

// public static new Outracks.Simulator.Bytecode.AddEventHandler Read(System.IO.BinaryReader reader) :626
void AddEventHandler__Read2_fn(::g::System::IO::BinaryReader* reader, AddEventHandler** __retval)
{
    *__retval = AddEventHandler::Read2(reader);
}

// public override sealed string ToString() :609
void AddEventHandler__ToString_fn(AddEventHandler* __this, uString** __retval)
{
    uStackFrame __("Outracks.Simulator.Bytecode.AddEventHandler", "ToString()");
    return *__retval = ::g::Uno::String::op_Addition1(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition(__this->Object, ::STRINGS[0/*"."*/]), uPtr(__this->Event)->Name), ::STRINGS[1/*" += "*/]), __this->Handler), void();
}

// public static void Write(Outracks.Simulator.Bytecode.AddEventHandler o, System.IO.BinaryWriter writer) :614
void AddEventHandler__Write2_fn(AddEventHandler* o, ::g::System::IO::BinaryWriter* writer)
{
    AddEventHandler::Write2(o, writer);
}

// protected override sealed void WriteExpression(System.IO.BinaryWriter writer) :619
void AddEventHandler__WriteExpression_fn(AddEventHandler* __this, ::g::System::IO::BinaryWriter* writer)
{
    uStackFrame __("Outracks.Simulator.Bytecode.AddEventHandler", "WriteExpression(System.IO.BinaryWriter)");
    ::g::Outracks::Simulator::Bytecode::Expression::Write1(__this->Object, writer);
    ::g::Outracks::Simulator::Bytecode::TypeMemberName::Write(__this->Event, writer);
    ::g::Outracks::Simulator::Bytecode::Expression::Write1(__this->Handler, writer);
}

// public AddEventHandler(Outracks.Simulator.Bytecode.Expression o, Outracks.Simulator.Bytecode.TypeMemberName ev, Outracks.Simulator.Bytecode.Expression handler) [instance] :602
void AddEventHandler::ctor_2(::g::Outracks::Simulator::Bytecode::Expression* o, ::g::Outracks::Simulator::Bytecode::TypeMemberName* ev, ::g::Outracks::Simulator::Bytecode::Expression* handler)
{
    ctor_1();
    Object = o;
    Event = ev;
    Handler = handler;
}

// public AddEventHandler New(Outracks.Simulator.Bytecode.Expression o, Outracks.Simulator.Bytecode.TypeMemberName ev, Outracks.Simulator.Bytecode.Expression handler) [static] :602
AddEventHandler* AddEventHandler::New1(::g::Outracks::Simulator::Bytecode::Expression* o, ::g::Outracks::Simulator::Bytecode::TypeMemberName* ev, ::g::Outracks::Simulator::Bytecode::Expression* handler)
{
    AddEventHandler* obj1 = (AddEventHandler*)uNew(AddEventHandler_typeof());
    obj1->ctor_2(o, ev, handler);
    return obj1;
}

// public static new Outracks.Simulator.Bytecode.AddEventHandler Read(System.IO.BinaryReader reader) [static] :626
AddEventHandler* AddEventHandler::Read2(::g::System::IO::BinaryReader* reader)
{
    uStackFrame __("Outracks.Simulator.Bytecode.AddEventHandler", "Read(System.IO.BinaryReader)");
    ::g::Outracks::Simulator::Bytecode::Expression* _Object = (::g::Outracks::Simulator::Bytecode::Expression*)uPtr(::g::Outracks::Simulator::Bytecode::Expression::Read1())->Invoke(1, reader);
    ::g::Outracks::Simulator::Bytecode::TypeMemberName* _Event = ::g::Outracks::Simulator::Bytecode::TypeMemberName::Read(reader);
    ::g::Outracks::Simulator::Bytecode::Expression* _Handler = (::g::Outracks::Simulator::Bytecode::Expression*)uPtr(::g::Outracks::Simulator::Bytecode::Expression::Read1())->Invoke(1, reader);
    return AddEventHandler::New1(_Object, _Event, _Handler);
}

// public static void Write(Outracks.Simulator.Bytecode.AddEventHandler o, System.IO.BinaryWriter writer) [static] :614
void AddEventHandler::Write2(AddEventHandler* o, ::g::System::IO::BinaryWriter* writer)
{
    uStackFrame __("Outracks.Simulator.Bytecode.AddEventHandler", "Write(Outracks.Simulator.Bytecode.AddEventHandler,System.IO.BinaryWriter)");
    uPtr(o)->WriteExpression(writer);
}
// }

// /usr/local/share/uno/Packages/Outracks.Simulator.Common.Uno/0.0.0/bytecode/$.uno
// --------------------------------------------------------------------------------

// public sealed class BindVariable :694
// {
// static BindVariable() :694
static void BindVariable__cctor__fn(uType* __type)
{
    BindVariable::Write_ = uDelegate::New(::TYPES[0/*Uno.Action<Outracks.Simulator.Bytecode.BindVariable, System.IO.BinaryWriter>*/], (void*)BindVariable___Write_fn);
    BindVariable::Read_ = uDelegate::New(::TYPES[1/*Uno.Func<System.IO.BinaryReader, Outracks.Simulator.Bytecode.BindVariable>*/], (void*)BindVariable___Read_fn);
}

static void BindVariable_build(uType* type)
{
    ::STRINGS[2] = uString::Const("var ");
    ::STRINGS[3] = uString::Const(" = ");
    ::TYPES[0] = ::g::Uno::Action2_typeof()->MakeType(type, ::g::System::IO::BinaryWriter_typeof(), NULL);
    ::TYPES[1] = ::g::Uno::Func1_typeof()->MakeType(::g::System::IO::BinaryReader_typeof(), type, NULL);
    type->SetFields(0,
        ::g::Outracks::Simulator::Bytecode::Expression_typeof(), offsetof(::g::Outracks::Simulator::Bytecode::BindVariable, Expression), 0,
        ::g::Outracks::Simulator::Bytecode::Variable_typeof(), offsetof(::g::Outracks::Simulator::Bytecode::BindVariable, Variable), 0,
        ::TYPES[1/*Uno.Func<System.IO.BinaryReader, Outracks.Simulator.Bytecode.BindVariable>*/], (uintptr_t)&::g::Outracks::Simulator::Bytecode::BindVariable::Read_, uFieldFlagsStatic,
        ::TYPES[0/*Uno.Action<Outracks.Simulator.Bytecode.BindVariable, System.IO.BinaryWriter>*/], (uintptr_t)&::g::Outracks::Simulator::Bytecode::BindVariable::Write_, uFieldFlagsStatic);
    type->Reflection.SetFields(4,
        new uField("Expression", 0),
        new uField("Read", 2),
        new uField("Variable", 1),
        new uField("Write", 3));
    type->Reflection.SetFunctions(3,
        new uFunction("_Read", NULL, (void*)BindVariable___Read_fn, 0, true, type, 1, ::g::System::IO::BinaryReader_typeof()),
        new uFunction("_Write", NULL, (void*)BindVariable___Write_fn, 0, true, uVoid_typeof(), 2, type, ::g::System::IO::BinaryWriter_typeof()),
        new uFunction(".ctor", NULL, (void*)BindVariable__New1_fn, 0, true, type, 2, ::g::Outracks::Simulator::Bytecode::Variable_typeof(), ::g::Outracks::Simulator::Bytecode::Expression_typeof()));
}

uType* BindVariable_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 4;
    options.ObjectSize = sizeof(BindVariable);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Outracks.Simulator.Bytecode.BindVariable", options);
    type->fp_build_ = BindVariable_build;
    type->fp_cctor_ = BindVariable__cctor__fn;
    type->fp_ToString = (void(*)(uObject*, uString**))BindVariable__ToString_fn;
    return type;
}

// public BindVariable(Outracks.Simulator.Bytecode.Variable variable, Outracks.Simulator.Bytecode.Expression expression) :699
void BindVariable__ctor__fn(BindVariable* __this, ::g::Outracks::Simulator::Bytecode::Variable* variable, ::g::Outracks::Simulator::Bytecode::Expression* expression)
{
    __this->ctor_(variable, expression);
}

// public static Outracks.Simulator.Bytecode.BindVariable _Read(System.IO.BinaryReader reader) :720
void BindVariable___Read_fn(::g::System::IO::BinaryReader* reader, BindVariable** __retval)
{
    *__retval = BindVariable::_Read(reader);
}

// public static void _Write(Outracks.Simulator.Bytecode.BindVariable s, System.IO.BinaryWriter writer) :712
void BindVariable___Write_fn(BindVariable* s, ::g::System::IO::BinaryWriter* writer)
{
    BindVariable::_Write(s, writer);
}

// public BindVariable New(Outracks.Simulator.Bytecode.Variable variable, Outracks.Simulator.Bytecode.Expression expression) :699
void BindVariable__New1_fn(::g::Outracks::Simulator::Bytecode::Variable* variable, ::g::Outracks::Simulator::Bytecode::Expression* expression, BindVariable** __retval)
{
    *__retval = BindVariable::New1(variable, expression);
}

// public override sealed string ToString() :705
void BindVariable__ToString_fn(BindVariable* __this, uString** __retval)
{
    uStackFrame __("Outracks.Simulator.Bytecode.BindVariable", "ToString()");
    return *__retval = ::g::Uno::String::op_Addition1(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::STRINGS[2/*"var "*/], uPtr(__this->Variable)->Name), ::STRINGS[3/*" = "*/]), __this->Expression), void();
}

uSStrong<uDelegate*> BindVariable::Read_;
uSStrong<uDelegate*> BindVariable::Write_;

// public BindVariable(Outracks.Simulator.Bytecode.Variable variable, Outracks.Simulator.Bytecode.Expression expression) [instance] :699
void BindVariable::ctor_(::g::Outracks::Simulator::Bytecode::Variable* variable, ::g::Outracks::Simulator::Bytecode::Expression* expression)
{
    Variable = variable;
    Expression = expression;
}

// public static Outracks.Simulator.Bytecode.BindVariable _Read(System.IO.BinaryReader reader) [static] :720
BindVariable* BindVariable::_Read(::g::System::IO::BinaryReader* reader)
{
    uStackFrame __("Outracks.Simulator.Bytecode.BindVariable", "_Read(System.IO.BinaryReader)");
    BindVariable_typeof()->Init();
    ::g::Outracks::Simulator::Bytecode::Variable* variable = (::g::Outracks::Simulator::Bytecode::Variable*)uPtr(::g::Outracks::Simulator::Bytecode::Variable::Read())->Invoke(1, reader);
    ::g::Outracks::Simulator::Bytecode::Expression* expression = (::g::Outracks::Simulator::Bytecode::Expression*)uPtr(::g::Outracks::Simulator::Bytecode::Expression::Read1())->Invoke(1, reader);
    return BindVariable::New1(variable, expression);
}

// public static void _Write(Outracks.Simulator.Bytecode.BindVariable s, System.IO.BinaryWriter writer) [static] :712
void BindVariable::_Write(BindVariable* s, ::g::System::IO::BinaryWriter* writer)
{
    uStackFrame __("Outracks.Simulator.Bytecode.BindVariable", "_Write(Outracks.Simulator.Bytecode.BindVariable,System.IO.BinaryWriter)");
    BindVariable_typeof()->Init();
    uPtr(::g::Outracks::Simulator::Bytecode::Variable::Write())->Invoke(2, (::g::Outracks::Simulator::Bytecode::Variable*)uPtr(s)->Variable, writer);
    ::g::Outracks::Simulator::Bytecode::Expression::Write1(s->Expression, writer);
}

// public BindVariable New(Outracks.Simulator.Bytecode.Variable variable, Outracks.Simulator.Bytecode.Expression expression) [static] :699
BindVariable* BindVariable::New1(::g::Outracks::Simulator::Bytecode::Variable* variable, ::g::Outracks::Simulator::Bytecode::Expression* expression)
{
    BindVariable* obj1 = (BindVariable*)uNew(BindVariable_typeof());
    obj1->ctor_(variable, expression);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Outracks.Simulator.Common.Uno/0.0.0/bytecode/$.uno
// --------------------------------------------------------------------------------

// public sealed class BlobLiteral :932
// {
static void BlobLiteral_build(uType* type)
{
    ::STRINGS[4] = uString::Const("new byte[");
    ::STRINGS[5] = uString::Const("]");
    type->SetFields(0,
        ::g::Uno::Byte_typeof()->Array(), offsetof(::g::Outracks::Simulator::Bytecode::BlobLiteral, Bytes), 0);
    type->Reflection.SetFields(1,
        new uField("Bytes", 0));
    type->Reflection.SetFunctions(3,
        new uFunction(".ctor", NULL, (void*)BlobLiteral__New1_fn, 0, true, type, 1, ::g::Uno::Byte_typeof()->Array()),
        new uFunction("Read", NULL, (void*)BlobLiteral__Read3_fn, 0, true, type, 1, ::g::System::IO::BinaryReader_typeof()),
        new uFunction("Write", NULL, (void*)BlobLiteral__Write3_fn, 0, true, uVoid_typeof(), 2, type, ::g::System::IO::BinaryWriter_typeof()));
}

::g::Outracks::Simulator::Bytecode::Literal_type* BlobLiteral_typeof()
{
    static uSStrong< ::g::Outracks::Simulator::Bytecode::Literal_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Outracks::Simulator::Bytecode::Literal_typeof();
    options.FieldCount = 1;
    options.ObjectSize = sizeof(BlobLiteral);
    options.TypeSize = sizeof(::g::Outracks::Simulator::Bytecode::Literal_type);
    type = (::g::Outracks::Simulator::Bytecode::Literal_type*)uClassType::New("Outracks.Simulator.Bytecode.BlobLiteral", options);
    type->fp_build_ = BlobLiteral_build;
    type->fp_get_LiteralId = (void(*)(::g::Outracks::Simulator::Bytecode::Literal*, uChar*))BlobLiteral__get_LiteralId_fn;
    type->fp_ToString = (void(*)(uObject*, uString**))BlobLiteral__ToString_fn;
    type->fp_WriteLiteral = (void(*)(::g::Outracks::Simulator::Bytecode::Literal*, ::g::System::IO::BinaryWriter*))BlobLiteral__WriteLiteral_fn;
    return type;
}

// public BlobLiteral(byte[] bytes) :938
void BlobLiteral__ctor_3_fn(BlobLiteral* __this, uArray* bytes)
{
    __this->ctor_3(bytes);
}

// public override sealed char get_LiteralId() :936
void BlobLiteral__get_LiteralId_fn(BlobLiteral* __this, uChar* __retval)
{
    return *__retval = 'd', void();
}

// public BlobLiteral New(byte[] bytes) :938
void BlobLiteral__New1_fn(uArray* bytes, BlobLiteral** __retval)
{
    *__retval = BlobLiteral::New1(bytes);
}

// public static new Outracks.Simulator.Bytecode.BlobLiteral Read(System.IO.BinaryReader reader) :959
void BlobLiteral__Read3_fn(::g::System::IO::BinaryReader* reader, BlobLiteral** __retval)
{
    *__retval = BlobLiteral::Read3(reader);
}

// public override sealed string ToString() :943
void BlobLiteral__ToString_fn(BlobLiteral* __this, uString** __retval)
{
    uStackFrame __("Outracks.Simulator.Bytecode.BlobLiteral", "ToString()");
    return *__retval = ::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition1(::STRINGS[4/*"new byte["*/], uBox<int>(::g::Uno::Int_typeof(), uPtr(__this->Bytes)->Length())), ::STRINGS[5/*"]"*/]), void();
}

// public static void Write(Outracks.Simulator.Bytecode.BlobLiteral blob, System.IO.BinaryWriter writer) :948
void BlobLiteral__Write3_fn(BlobLiteral* blob, ::g::System::IO::BinaryWriter* writer)
{
    BlobLiteral::Write3(blob, writer);
}

// protected override sealed void WriteLiteral(System.IO.BinaryWriter writer) :954
void BlobLiteral__WriteLiteral_fn(BlobLiteral* __this, ::g::System::IO::BinaryWriter* writer)
{
    uStackFrame __("Outracks.Simulator.Bytecode.BlobLiteral", "WriteLiteral(System.IO.BinaryWriter)");
    BlobLiteral::Write3(__this, writer);
}

// public BlobLiteral(byte[] bytes) [instance] :938
void BlobLiteral::ctor_3(uArray* bytes)
{
    ctor_2();
    Bytes = bytes;
}

// public BlobLiteral New(byte[] bytes) [static] :938
BlobLiteral* BlobLiteral::New1(uArray* bytes)
{
    BlobLiteral* obj1 = (BlobLiteral*)uNew(BlobLiteral_typeof());
    obj1->ctor_3(bytes);
    return obj1;
}

// public static new Outracks.Simulator.Bytecode.BlobLiteral Read(System.IO.BinaryReader reader) [static] :959
BlobLiteral* BlobLiteral::Read3(::g::System::IO::BinaryReader* reader)
{
    uStackFrame __("Outracks.Simulator.Bytecode.BlobLiteral", "Read(System.IO.BinaryReader)");
    int length = uPtr(reader)->ReadInt32();
    uArray* bytes = reader->ReadBytes(length);
    return BlobLiteral::New1(bytes);
}

// public static void Write(Outracks.Simulator.Bytecode.BlobLiteral blob, System.IO.BinaryWriter writer) [static] :948
void BlobLiteral::Write3(BlobLiteral* blob, ::g::System::IO::BinaryWriter* writer)
{
    uStackFrame __("Outracks.Simulator.Bytecode.BlobLiteral", "Write(Outracks.Simulator.Bytecode.BlobLiteral,System.IO.BinaryWriter)");
    uPtr(writer)->Write5(uPtr(uPtr(blob)->Bytes)->Length());
    writer->Write1(blob->Bytes);
}
// }

// /usr/local/share/uno/Packages/Outracks.Simulator.Common.Uno/0.0.0/bytecode/$.uno
// --------------------------------------------------------------------------------

// public sealed class BooleanLiteral :967
// {
static void BooleanLiteral_build(uType* type)
{
    ::TYPES[2] = ::g::Uno::Bool_typeof();
    type->SetFields(0,
        ::TYPES[2/*bool*/], offsetof(::g::Outracks::Simulator::Bytecode::BooleanLiteral, BooleanValue), 0);
    type->Reflection.SetFields(1,
        new uField("BooleanValue", 0));
    type->Reflection.SetFunctions(3,
        new uFunction(".ctor", NULL, (void*)BooleanLiteral__New1_fn, 0, true, type, 1, ::TYPES[2/*bool*/]),
        new uFunction("Read", NULL, (void*)BooleanLiteral__Read3_fn, 0, true, type, 1, ::g::System::IO::BinaryReader_typeof()),
        new uFunction("Write", NULL, (void*)BooleanLiteral__Write3_fn, 0, true, uVoid_typeof(), 2, type, ::g::System::IO::BinaryWriter_typeof()));
}

::g::Outracks::Simulator::Bytecode::Literal_type* BooleanLiteral_typeof()
{
    static uSStrong< ::g::Outracks::Simulator::Bytecode::Literal_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Outracks::Simulator::Bytecode::Literal_typeof();
    options.FieldCount = 1;
    options.ObjectSize = sizeof(BooleanLiteral);
    options.TypeSize = sizeof(::g::Outracks::Simulator::Bytecode::Literal_type);
    type = (::g::Outracks::Simulator::Bytecode::Literal_type*)uClassType::New("Outracks.Simulator.Bytecode.BooleanLiteral", options);
    type->fp_build_ = BooleanLiteral_build;
    type->fp_get_LiteralId = (void(*)(::g::Outracks::Simulator::Bytecode::Literal*, uChar*))BooleanLiteral__get_LiteralId_fn;
    type->fp_ToString = (void(*)(uObject*, uString**))BooleanLiteral__ToString_fn;
    type->fp_WriteLiteral = (void(*)(::g::Outracks::Simulator::Bytecode::Literal*, ::g::System::IO::BinaryWriter*))BooleanLiteral__WriteLiteral_fn;
    return type;
}

// public BooleanLiteral(bool booleanValue) :973
void BooleanLiteral__ctor_3_fn(BooleanLiteral* __this, bool* booleanValue)
{
    __this->ctor_3(*booleanValue);
}

// public override sealed char get_LiteralId() :971
void BooleanLiteral__get_LiteralId_fn(BooleanLiteral* __this, uChar* __retval)
{
    return *__retval = 'b', void();
}

// public BooleanLiteral New(bool booleanValue) :973
void BooleanLiteral__New1_fn(bool* booleanValue, BooleanLiteral** __retval)
{
    *__retval = BooleanLiteral::New1(*booleanValue);
}

// public static new Outracks.Simulator.Bytecode.BooleanLiteral Read(System.IO.BinaryReader reader) :993
void BooleanLiteral__Read3_fn(::g::System::IO::BinaryReader* reader, BooleanLiteral** __retval)
{
    *__retval = BooleanLiteral::Read3(reader);
}

// public override sealed string ToString() :978
void BooleanLiteral__ToString_fn(BooleanLiteral* __this, uString** __retval)
{
    uStackFrame __("Outracks.Simulator.Bytecode.BooleanLiteral", "ToString()");
    bool ind1;
    return *__retval = ::g::Uno::Bool::ToString((ind1 = __this->BooleanValue, ind1), ::TYPES[2/*bool*/]), void();
}

// public static void Write(Outracks.Simulator.Bytecode.BooleanLiteral l, System.IO.BinaryWriter writer) :983
void BooleanLiteral__Write3_fn(BooleanLiteral* l, ::g::System::IO::BinaryWriter* writer)
{
    BooleanLiteral::Write3(l, writer);
}

// protected override sealed void WriteLiteral(System.IO.BinaryWriter writer) :988
void BooleanLiteral__WriteLiteral_fn(BooleanLiteral* __this, ::g::System::IO::BinaryWriter* writer)
{
    uStackFrame __("Outracks.Simulator.Bytecode.BooleanLiteral", "WriteLiteral(System.IO.BinaryWriter)");
    BooleanLiteral::Write3(__this, writer);
}

// public BooleanLiteral(bool booleanValue) [instance] :973
void BooleanLiteral::ctor_3(bool booleanValue)
{
    ctor_2();
    BooleanValue = booleanValue;
}

// public BooleanLiteral New(bool booleanValue) [static] :973
BooleanLiteral* BooleanLiteral::New1(bool booleanValue)
{
    BooleanLiteral* obj2 = (BooleanLiteral*)uNew(BooleanLiteral_typeof());
    obj2->ctor_3(booleanValue);
    return obj2;
}

// public static new Outracks.Simulator.Bytecode.BooleanLiteral Read(System.IO.BinaryReader reader) [static] :993
BooleanLiteral* BooleanLiteral::Read3(::g::System::IO::BinaryReader* reader)
{
    uStackFrame __("Outracks.Simulator.Bytecode.BooleanLiteral", "Read(System.IO.BinaryReader)");
    return BooleanLiteral::New1(uPtr(reader)->ReadBoolean());
}

// public static void Write(Outracks.Simulator.Bytecode.BooleanLiteral l, System.IO.BinaryWriter writer) [static] :983
void BooleanLiteral::Write3(BooleanLiteral* l, ::g::System::IO::BinaryWriter* writer)
{
    uStackFrame __("Outracks.Simulator.Bytecode.BooleanLiteral", "Write(Outracks.Simulator.Bytecode.BooleanLiteral,System.IO.BinaryWriter)");
    uPtr(writer)->Write(uPtr(l)->BooleanValue);
}
// }

// /usr/local/share/uno/Packages/Outracks.Simulator.Common.Uno/0.0.0/bytecode/$.uno
// --------------------------------------------------------------------------------

// public sealed class CallDynamicMethod :428
// {
static void CallDynamicMethod_build(uType* type)
{
    ::STRINGS[0] = uString::Const(".");
    ::STRINGS[6] = uString::Const("(");
    ::STRINGS[7] = uString::Const(", ");
    ::STRINGS[8] = uString::Const(")");
    ::TYPES[3] = ::g::Outracks::Simulator::List_typeof()->MakeMethod(3/*ToImmutableList<Outracks.Simulator.Bytecode.Expression>*/, ::g::Outracks::Simulator::Bytecode::Expression_typeof(), NULL);
    ::TYPES[4] = ::g::Uno::Runtime::Implementation::Internal::ArrayEnumerable_typeof()->MakeType(::g::Outracks::Simulator::Bytecode::Expression_typeof(), NULL);
    ::TYPES[5] = ::g::Outracks::Simulator::List_typeof()->MakeMethod(1/*Read<Outracks.Simulator.Bytecode.Expression>*/, ::g::Outracks::Simulator::Bytecode::Expression_typeof(), NULL);
    ::TYPES[6] = ::g::Outracks::Simulator::StringSplitting_typeof()->MakeMethod(0/*JoinToString<Outracks.Simulator.Bytecode.Expression>*/, ::g::Outracks::Simulator::Bytecode::Expression_typeof(), NULL);
    ::TYPES[7] = ::g::Outracks::Simulator::List_typeof()->MakeMethod(6/*Write<Outracks.Simulator.Bytecode.Expression>*/, ::g::Outracks::Simulator::Bytecode::Expression_typeof(), NULL);
    ::TYPES[8] = ::g::Uno::Action2_typeof()->MakeType(::g::Outracks::Simulator::Bytecode::Expression_typeof(), ::g::System::IO::BinaryWriter_typeof(), NULL);
    type->SetFields(0,
        ::g::Outracks::Simulator::ImmutableList_typeof()->MakeType(::g::Outracks::Simulator::Bytecode::Expression_typeof(), NULL), offsetof(::g::Outracks::Simulator::Bytecode::CallDynamicMethod, Arguments), 0,
        ::g::Outracks::Simulator::Bytecode::TypeMemberName_typeof(), offsetof(::g::Outracks::Simulator::Bytecode::CallDynamicMethod, Method), 0,
        ::g::Outracks::Simulator::Bytecode::Expression_typeof(), offsetof(::g::Outracks::Simulator::Bytecode::CallDynamicMethod, Object), 0);
    type->Reflection.SetFields(3,
        new uField("Arguments", 0),
        new uField("Method", 1),
        new uField("Object", 2));
    type->Reflection.SetFunctions(4,
        new uFunction(".ctor", NULL, (void*)CallDynamicMethod__New1_fn, 0, true, type, 3, ::g::Outracks::Simulator::Bytecode::Expression_typeof(), ::g::Outracks::Simulator::Bytecode::TypeMemberName_typeof(), ::g::Outracks::Simulator::Bytecode::Expression_typeof()->Array()),
        new uFunction(".ctor", NULL, (void*)CallDynamicMethod__New2_fn, 0, true, type, 3, ::g::Outracks::Simulator::Bytecode::Expression_typeof(), ::g::Outracks::Simulator::Bytecode::TypeMemberName_typeof(), ::g::Outracks::Simulator::ImmutableList_typeof()->MakeType(::g::Outracks::Simulator::Bytecode::Expression_typeof(), NULL)),
        new uFunction("Read", NULL, (void*)CallDynamicMethod__Read2_fn, 0, true, type, 1, ::g::System::IO::BinaryReader_typeof()),
        new uFunction("Write", NULL, (void*)CallDynamicMethod__Write2_fn, 0, true, uVoid_typeof(), 2, type, ::g::System::IO::BinaryWriter_typeof()));
}

::g::Outracks::Simulator::Bytecode::Expression_type* CallDynamicMethod_typeof()
{
    static uSStrong< ::g::Outracks::Simulator::Bytecode::Expression_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Outracks::Simulator::Bytecode::Expression_typeof();
    options.FieldCount = 3;
    options.ObjectSize = sizeof(CallDynamicMethod);
    options.TypeSize = sizeof(::g::Outracks::Simulator::Bytecode::Expression_type);
    type = (::g::Outracks::Simulator::Bytecode::Expression_type*)uClassType::New("Outracks.Simulator.Bytecode.CallDynamicMethod", options);
    type->fp_build_ = CallDynamicMethod_build;
    type->fp_get_ExpressionId = (void(*)(::g::Outracks::Simulator::Bytecode::Expression*, uChar*))CallDynamicMethod__get_ExpressionId_fn;
    type->fp_ToString = (void(*)(uObject*, uString**))CallDynamicMethod__ToString_fn;
    type->fp_WriteExpression = (void(*)(::g::Outracks::Simulator::Bytecode::Expression*, ::g::System::IO::BinaryWriter*))CallDynamicMethod__WriteExpression_fn;
    return type;
}

// public CallDynamicMethod(Outracks.Simulator.Bytecode.Expression o, Outracks.Simulator.Bytecode.TypeMemberName method, Outracks.Simulator.Bytecode.Expression[] arguments) :436
void CallDynamicMethod__ctor_2_fn(CallDynamicMethod* __this, ::g::Outracks::Simulator::Bytecode::Expression* o, ::g::Outracks::Simulator::Bytecode::TypeMemberName* method, uArray* arguments)
{
    __this->ctor_2(o, method, arguments);
}

// public CallDynamicMethod(Outracks.Simulator.Bytecode.Expression o, Outracks.Simulator.Bytecode.TypeMemberName method, Outracks.Simulator.ImmutableList<Outracks.Simulator.Bytecode.Expression> arguments) :440
void CallDynamicMethod__ctor_3_fn(CallDynamicMethod* __this, ::g::Outracks::Simulator::Bytecode::Expression* o, ::g::Outracks::Simulator::Bytecode::TypeMemberName* method, ::g::Outracks::Simulator::ImmutableList* arguments)
{
    __this->ctor_3(o, method, arguments);
}

// public override sealed char get_ExpressionId() :434
void CallDynamicMethod__get_ExpressionId_fn(CallDynamicMethod* __this, uChar* __retval)
{
    return *__retval = 'j', void();
}

// public CallDynamicMethod New(Outracks.Simulator.Bytecode.Expression o, Outracks.Simulator.Bytecode.TypeMemberName method, Outracks.Simulator.Bytecode.Expression[] arguments) :436
void CallDynamicMethod__New1_fn(::g::Outracks::Simulator::Bytecode::Expression* o, ::g::Outracks::Simulator::Bytecode::TypeMemberName* method, uArray* arguments, CallDynamicMethod** __retval)
{
    *__retval = CallDynamicMethod::New1(o, method, arguments);
}

// public CallDynamicMethod New(Outracks.Simulator.Bytecode.Expression o, Outracks.Simulator.Bytecode.TypeMemberName method, Outracks.Simulator.ImmutableList<Outracks.Simulator.Bytecode.Expression> arguments) :440
void CallDynamicMethod__New2_fn(::g::Outracks::Simulator::Bytecode::Expression* o, ::g::Outracks::Simulator::Bytecode::TypeMemberName* method, ::g::Outracks::Simulator::ImmutableList* arguments, CallDynamicMethod** __retval)
{
    *__retval = CallDynamicMethod::New2(o, method, arguments);
}

// public static new Outracks.Simulator.Bytecode.CallDynamicMethod Read(System.IO.BinaryReader reader) :464
void CallDynamicMethod__Read2_fn(::g::System::IO::BinaryReader* reader, CallDynamicMethod** __retval)
{
    *__retval = CallDynamicMethod::Read2(reader);
}

// public override sealed string ToString() :447
void CallDynamicMethod__ToString_fn(CallDynamicMethod* __this, uString** __retval)
{
    uStackFrame __("Outracks.Simulator.Bytecode.CallDynamicMethod", "ToString()");
    return *__retval = ::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition(__this->Object, ::STRINGS[0/*"."*/]), uPtr(__this->Method)->Name), ::STRINGS[6/*"("*/]), ::g::Outracks::Simulator::StringSplitting::JoinToString(::TYPES[6/*Outracks.Simulator.StringSplitting.JoinToString<Outracks.Simulator.Bytecode.Expression>*/], (uObject*)__this->Arguments, ::STRINGS[7/*", "*/])), ::STRINGS[8/*")"*/]), void();
}

// public static void Write(Outracks.Simulator.Bytecode.CallDynamicMethod o, System.IO.BinaryWriter writer) :452
void CallDynamicMethod__Write2_fn(CallDynamicMethod* o, ::g::System::IO::BinaryWriter* writer)
{
    CallDynamicMethod::Write2(o, writer);
}

// protected override sealed void WriteExpression(System.IO.BinaryWriter writer) :457
void CallDynamicMethod__WriteExpression_fn(CallDynamicMethod* __this, ::g::System::IO::BinaryWriter* writer)
{
    uStackFrame __("Outracks.Simulator.Bytecode.CallDynamicMethod", "WriteExpression(System.IO.BinaryWriter)");
    ::g::Outracks::Simulator::Bytecode::Expression::Write1(__this->Object, writer);
    ::g::Outracks::Simulator::Bytecode::TypeMemberName::Write(__this->Method, writer);
    ::g::Outracks::Simulator::List::Write1(::TYPES[7/*Outracks.Simulator.List.Write<Outracks.Simulator.Bytecode.Expression>*/], writer, __this->Arguments, uDelegate::New(::TYPES[8/*Uno.Action<Outracks.Simulator.Bytecode.Expression, System.IO.BinaryWriter>*/], (void*)::g::Outracks::Simulator::Bytecode::Expression__Write1_fn));
}

// public CallDynamicMethod(Outracks.Simulator.Bytecode.Expression o, Outracks.Simulator.Bytecode.TypeMemberName method, Outracks.Simulator.Bytecode.Expression[] arguments) [instance] :436
void CallDynamicMethod::ctor_2(::g::Outracks::Simulator::Bytecode::Expression* o, ::g::Outracks::Simulator::Bytecode::TypeMemberName* method, uArray* arguments)
{
    uStackFrame __("Outracks.Simulator.Bytecode.CallDynamicMethod", ".ctor(Outracks.Simulator.Bytecode.Expression,Outracks.Simulator.Bytecode.TypeMemberName,Outracks.Simulator.Bytecode.Expression[])");
    ctor_3(o, method, (::g::Outracks::Simulator::ImmutableList*)::g::Outracks::Simulator::List::ToImmutableList(::TYPES[3/*Outracks.Simulator.List.ToImmutableList<Outracks.Simulator.Bytecode.Expression>*/], (uObject*)((::g::Uno::Runtime::Implementation::Internal::ArrayEnumerable*)::g::Uno::Runtime::Implementation::Internal::ArrayEnumerable::New1(::TYPES[4/*Uno.Runtime.Implementation.Internal.ArrayEnumerable<Outracks.Simulator.Bytecode.Expression>*/], arguments))));
}

// public CallDynamicMethod(Outracks.Simulator.Bytecode.Expression o, Outracks.Simulator.Bytecode.TypeMemberName method, Outracks.Simulator.ImmutableList<Outracks.Simulator.Bytecode.Expression> arguments) [instance] :440
void CallDynamicMethod::ctor_3(::g::Outracks::Simulator::Bytecode::Expression* o, ::g::Outracks::Simulator::Bytecode::TypeMemberName* method, ::g::Outracks::Simulator::ImmutableList* arguments)
{
    ctor_1();
    Object = o;
    Method = method;
    Arguments = arguments;
}

// public CallDynamicMethod New(Outracks.Simulator.Bytecode.Expression o, Outracks.Simulator.Bytecode.TypeMemberName method, Outracks.Simulator.Bytecode.Expression[] arguments) [static] :436
CallDynamicMethod* CallDynamicMethod::New1(::g::Outracks::Simulator::Bytecode::Expression* o, ::g::Outracks::Simulator::Bytecode::TypeMemberName* method, uArray* arguments)
{
    CallDynamicMethod* obj1 = (CallDynamicMethod*)uNew(CallDynamicMethod_typeof());
    obj1->ctor_2(o, method, arguments);
    return obj1;
}

// public CallDynamicMethod New(Outracks.Simulator.Bytecode.Expression o, Outracks.Simulator.Bytecode.TypeMemberName method, Outracks.Simulator.ImmutableList<Outracks.Simulator.Bytecode.Expression> arguments) [static] :440
CallDynamicMethod* CallDynamicMethod::New2(::g::Outracks::Simulator::Bytecode::Expression* o, ::g::Outracks::Simulator::Bytecode::TypeMemberName* method, ::g::Outracks::Simulator::ImmutableList* arguments)
{
    CallDynamicMethod* obj2 = (CallDynamicMethod*)uNew(CallDynamicMethod_typeof());
    obj2->ctor_3(o, method, arguments);
    return obj2;
}

// public static new Outracks.Simulator.Bytecode.CallDynamicMethod Read(System.IO.BinaryReader reader) [static] :464
CallDynamicMethod* CallDynamicMethod::Read2(::g::System::IO::BinaryReader* reader)
{
    uStackFrame __("Outracks.Simulator.Bytecode.CallDynamicMethod", "Read(System.IO.BinaryReader)");
    ::g::Outracks::Simulator::Bytecode::Expression* _Object = (::g::Outracks::Simulator::Bytecode::Expression*)uPtr(::g::Outracks::Simulator::Bytecode::Expression::Read1())->Invoke(1, reader);
    ::g::Outracks::Simulator::Bytecode::TypeMemberName* _Method = ::g::Outracks::Simulator::Bytecode::TypeMemberName::Read(reader);
    ::g::Outracks::Simulator::ImmutableList* _Arguments = (::g::Outracks::Simulator::ImmutableList*)::g::Outracks::Simulator::List::Read(::TYPES[5/*Outracks.Simulator.List.Read<Outracks.Simulator.Bytecode.Expression>*/], reader, ::g::Outracks::Simulator::Bytecode::Expression::Read1());
    return CallDynamicMethod::New2(_Object, _Method, _Arguments);
}

// public static void Write(Outracks.Simulator.Bytecode.CallDynamicMethod o, System.IO.BinaryWriter writer) [static] :452
void CallDynamicMethod::Write2(CallDynamicMethod* o, ::g::System::IO::BinaryWriter* writer)
{
    uStackFrame __("Outracks.Simulator.Bytecode.CallDynamicMethod", "Write(Outracks.Simulator.Bytecode.CallDynamicMethod,System.IO.BinaryWriter)");
    uPtr(o)->WriteExpression(writer);
}
// }

// /usr/local/share/uno/Packages/Outracks.Simulator.Common.Uno/0.0.0/bytecode/$.uno
// --------------------------------------------------------------------------------

// public sealed class CallLambda :342
// {
static void CallLambda_build(uType* type)
{
    ::STRINGS[6] = uString::Const("(");
    ::STRINGS[7] = uString::Const(", ");
    ::STRINGS[8] = uString::Const(")");
    ::TYPES[3] = ::g::Outracks::Simulator::List_typeof()->MakeMethod(3/*ToImmutableList<Outracks.Simulator.Bytecode.Expression>*/, ::g::Outracks::Simulator::Bytecode::Expression_typeof(), NULL);
    ::TYPES[4] = ::g::Uno::Runtime::Implementation::Internal::ArrayEnumerable_typeof()->MakeType(::g::Outracks::Simulator::Bytecode::Expression_typeof(), NULL);
    ::TYPES[5] = ::g::Outracks::Simulator::List_typeof()->MakeMethod(1/*Read<Outracks.Simulator.Bytecode.Expression>*/, ::g::Outracks::Simulator::Bytecode::Expression_typeof(), NULL);
    ::TYPES[6] = ::g::Outracks::Simulator::StringSplitting_typeof()->MakeMethod(0/*JoinToString<Outracks.Simulator.Bytecode.Expression>*/, ::g::Outracks::Simulator::Bytecode::Expression_typeof(), NULL);
    ::TYPES[7] = ::g::Outracks::Simulator::List_typeof()->MakeMethod(6/*Write<Outracks.Simulator.Bytecode.Expression>*/, ::g::Outracks::Simulator::Bytecode::Expression_typeof(), NULL);
    ::TYPES[8] = ::g::Uno::Action2_typeof()->MakeType(::g::Outracks::Simulator::Bytecode::Expression_typeof(), ::g::System::IO::BinaryWriter_typeof(), NULL);
    type->SetFields(0,
        ::g::Outracks::Simulator::ImmutableList_typeof()->MakeType(::g::Outracks::Simulator::Bytecode::Expression_typeof(), NULL), offsetof(::g::Outracks::Simulator::Bytecode::CallLambda, Arguments), 0,
        ::g::Outracks::Simulator::Bytecode::Expression_typeof(), offsetof(::g::Outracks::Simulator::Bytecode::CallLambda, Lambda), 0);
    type->Reflection.SetFields(2,
        new uField("Arguments", 0),
        new uField("Lambda", 1));
    type->Reflection.SetFunctions(4,
        new uFunction(".ctor", NULL, (void*)CallLambda__New1_fn, 0, true, type, 2, ::g::Outracks::Simulator::Bytecode::Expression_typeof(), ::g::Outracks::Simulator::Bytecode::Expression_typeof()->Array()),
        new uFunction(".ctor", NULL, (void*)CallLambda__New2_fn, 0, true, type, 2, ::g::Outracks::Simulator::Bytecode::Expression_typeof(), ::g::Outracks::Simulator::ImmutableList_typeof()->MakeType(::g::Outracks::Simulator::Bytecode::Expression_typeof(), NULL)),
        new uFunction("Read", NULL, (void*)CallLambda__Read2_fn, 0, true, type, 1, ::g::System::IO::BinaryReader_typeof()),
        new uFunction("Write", NULL, (void*)CallLambda__Write2_fn, 0, true, uVoid_typeof(), 2, type, ::g::System::IO::BinaryWriter_typeof()));
}

::g::Outracks::Simulator::Bytecode::Expression_type* CallLambda_typeof()
{
    static uSStrong< ::g::Outracks::Simulator::Bytecode::Expression_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Outracks::Simulator::Bytecode::Expression_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(CallLambda);
    options.TypeSize = sizeof(::g::Outracks::Simulator::Bytecode::Expression_type);
    type = (::g::Outracks::Simulator::Bytecode::Expression_type*)uClassType::New("Outracks.Simulator.Bytecode.CallLambda", options);
    type->fp_build_ = CallLambda_build;
    type->fp_get_ExpressionId = (void(*)(::g::Outracks::Simulator::Bytecode::Expression*, uChar*))CallLambda__get_ExpressionId_fn;
    type->fp_ToString = (void(*)(uObject*, uString**))CallLambda__ToString_fn;
    type->fp_WriteExpression = (void(*)(::g::Outracks::Simulator::Bytecode::Expression*, ::g::System::IO::BinaryWriter*))CallLambda__WriteExpression_fn;
    return type;
}

// public CallLambda(Outracks.Simulator.Bytecode.Expression lambda, Outracks.Simulator.Bytecode.Expression[] arguments) :349
void CallLambda__ctor_2_fn(CallLambda* __this, ::g::Outracks::Simulator::Bytecode::Expression* lambda, uArray* arguments)
{
    __this->ctor_2(lambda, arguments);
}

// public CallLambda(Outracks.Simulator.Bytecode.Expression lanbda, Outracks.Simulator.ImmutableList<Outracks.Simulator.Bytecode.Expression> arguments) :353
void CallLambda__ctor_3_fn(CallLambda* __this, ::g::Outracks::Simulator::Bytecode::Expression* lanbda, ::g::Outracks::Simulator::ImmutableList* arguments)
{
    __this->ctor_3(lanbda, arguments);
}

// public override sealed char get_ExpressionId() :347
void CallLambda__get_ExpressionId_fn(CallLambda* __this, uChar* __retval)
{
    return *__retval = 'h', void();
}

// public CallLambda New(Outracks.Simulator.Bytecode.Expression lambda, Outracks.Simulator.Bytecode.Expression[] arguments) :349
void CallLambda__New1_fn(::g::Outracks::Simulator::Bytecode::Expression* lambda, uArray* arguments, CallLambda** __retval)
{
    *__retval = CallLambda::New1(lambda, arguments);
}

// public CallLambda New(Outracks.Simulator.Bytecode.Expression lanbda, Outracks.Simulator.ImmutableList<Outracks.Simulator.Bytecode.Expression> arguments) :353
void CallLambda__New2_fn(::g::Outracks::Simulator::Bytecode::Expression* lanbda, ::g::Outracks::Simulator::ImmutableList* arguments, CallLambda** __retval)
{
    *__retval = CallLambda::New2(lanbda, arguments);
}

// public static new Outracks.Simulator.Bytecode.CallLambda Read(System.IO.BinaryReader reader) :375
void CallLambda__Read2_fn(::g::System::IO::BinaryReader* reader, CallLambda** __retval)
{
    *__retval = CallLambda::Read2(reader);
}

// public override sealed string ToString() :359
void CallLambda__ToString_fn(CallLambda* __this, uString** __retval)
{
    uStackFrame __("Outracks.Simulator.Bytecode.CallLambda", "ToString()");
    return *__retval = ::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition(__this->Lambda, ::STRINGS[6/*"("*/]), ::g::Outracks::Simulator::StringSplitting::JoinToString(::TYPES[6/*Outracks.Simulator.StringSplitting.JoinToString<Outracks.Simulator.Bytecode.Expression>*/], (uObject*)__this->Arguments, ::STRINGS[7/*", "*/])), ::STRINGS[8/*")"*/]), void();
}

// public static void Write(Outracks.Simulator.Bytecode.CallLambda o, System.IO.BinaryWriter writer) :364
void CallLambda__Write2_fn(CallLambda* o, ::g::System::IO::BinaryWriter* writer)
{
    CallLambda::Write2(o, writer);
}

// protected override sealed void WriteExpression(System.IO.BinaryWriter writer) :370
void CallLambda__WriteExpression_fn(CallLambda* __this, ::g::System::IO::BinaryWriter* writer)
{
    uStackFrame __("Outracks.Simulator.Bytecode.CallLambda", "WriteExpression(System.IO.BinaryWriter)");
    CallLambda::Write2(__this, writer);
}

// public CallLambda(Outracks.Simulator.Bytecode.Expression lambda, Outracks.Simulator.Bytecode.Expression[] arguments) [instance] :349
void CallLambda::ctor_2(::g::Outracks::Simulator::Bytecode::Expression* lambda, uArray* arguments)
{
    uStackFrame __("Outracks.Simulator.Bytecode.CallLambda", ".ctor(Outracks.Simulator.Bytecode.Expression,Outracks.Simulator.Bytecode.Expression[])");
    ctor_3(lambda, (::g::Outracks::Simulator::ImmutableList*)::g::Outracks::Simulator::List::ToImmutableList(::TYPES[3/*Outracks.Simulator.List.ToImmutableList<Outracks.Simulator.Bytecode.Expression>*/], (uObject*)((::g::Uno::Runtime::Implementation::Internal::ArrayEnumerable*)::g::Uno::Runtime::Implementation::Internal::ArrayEnumerable::New1(::TYPES[4/*Uno.Runtime.Implementation.Internal.ArrayEnumerable<Outracks.Simulator.Bytecode.Expression>*/], arguments))));
}

// public CallLambda(Outracks.Simulator.Bytecode.Expression lanbda, Outracks.Simulator.ImmutableList<Outracks.Simulator.Bytecode.Expression> arguments) [instance] :353
void CallLambda::ctor_3(::g::Outracks::Simulator::Bytecode::Expression* lanbda, ::g::Outracks::Simulator::ImmutableList* arguments)
{
    ctor_1();
    Lambda = lanbda;
    Arguments = arguments;
}

// public CallLambda New(Outracks.Simulator.Bytecode.Expression lambda, Outracks.Simulator.Bytecode.Expression[] arguments) [static] :349
CallLambda* CallLambda::New1(::g::Outracks::Simulator::Bytecode::Expression* lambda, uArray* arguments)
{
    CallLambda* obj1 = (CallLambda*)uNew(CallLambda_typeof());
    obj1->ctor_2(lambda, arguments);
    return obj1;
}

// public CallLambda New(Outracks.Simulator.Bytecode.Expression lanbda, Outracks.Simulator.ImmutableList<Outracks.Simulator.Bytecode.Expression> arguments) [static] :353
CallLambda* CallLambda::New2(::g::Outracks::Simulator::Bytecode::Expression* lanbda, ::g::Outracks::Simulator::ImmutableList* arguments)
{
    CallLambda* obj2 = (CallLambda*)uNew(CallLambda_typeof());
    obj2->ctor_3(lanbda, arguments);
    return obj2;
}

// public static new Outracks.Simulator.Bytecode.CallLambda Read(System.IO.BinaryReader reader) [static] :375
CallLambda* CallLambda::Read2(::g::System::IO::BinaryReader* reader)
{
    uStackFrame __("Outracks.Simulator.Bytecode.CallLambda", "Read(System.IO.BinaryReader)");
    ::g::Outracks::Simulator::Bytecode::Expression* lambda = (::g::Outracks::Simulator::Bytecode::Expression*)uPtr(::g::Outracks::Simulator::Bytecode::Expression::Read1())->Invoke(1, reader);
    ::g::Outracks::Simulator::ImmutableList* arguments = (::g::Outracks::Simulator::ImmutableList*)::g::Outracks::Simulator::List::Read(::TYPES[5/*Outracks.Simulator.List.Read<Outracks.Simulator.Bytecode.Expression>*/], reader, ::g::Outracks::Simulator::Bytecode::Expression::Read1());
    return CallLambda::New2(lambda, arguments);
}

// public static void Write(Outracks.Simulator.Bytecode.CallLambda o, System.IO.BinaryWriter writer) [static] :364
void CallLambda::Write2(CallLambda* o, ::g::System::IO::BinaryWriter* writer)
{
    uStackFrame __("Outracks.Simulator.Bytecode.CallLambda", "Write(Outracks.Simulator.Bytecode.CallLambda,System.IO.BinaryWriter)");
    ::g::Outracks::Simulator::Bytecode::Expression::Write1(uPtr(o)->Lambda, writer);
    ::g::Outracks::Simulator::List::Write1(::TYPES[7/*Outracks.Simulator.List.Write<Outracks.Simulator.Bytecode.Expression>*/], writer, o->Arguments, uDelegate::New(::TYPES[8/*Uno.Action<Outracks.Simulator.Bytecode.Expression, System.IO.BinaryWriter>*/], (void*)::g::Outracks::Simulator::Bytecode::Expression__Write1_fn));
}
// }

// /usr/local/share/uno/Packages/Outracks.Simulator.Common.Uno/0.0.0/bytecode/$.uno
// --------------------------------------------------------------------------------

// public sealed class CallStaticMethod :385
// {
static void CallStaticMethod_build(uType* type)
{
    ::STRINGS[6] = uString::Const("(");
    ::STRINGS[7] = uString::Const(", ");
    ::STRINGS[8] = uString::Const(")");
    ::TYPES[3] = ::g::Outracks::Simulator::List_typeof()->MakeMethod(3/*ToImmutableList<Outracks.Simulator.Bytecode.Expression>*/, ::g::Outracks::Simulator::Bytecode::Expression_typeof(), NULL);
    ::TYPES[4] = ::g::Uno::Runtime::Implementation::Internal::ArrayEnumerable_typeof()->MakeType(::g::Outracks::Simulator::Bytecode::Expression_typeof(), NULL);
    ::TYPES[5] = ::g::Outracks::Simulator::List_typeof()->MakeMethod(1/*Read<Outracks.Simulator.Bytecode.Expression>*/, ::g::Outracks::Simulator::Bytecode::Expression_typeof(), NULL);
    ::TYPES[6] = ::g::Outracks::Simulator::StringSplitting_typeof()->MakeMethod(0/*JoinToString<Outracks.Simulator.Bytecode.Expression>*/, ::g::Outracks::Simulator::Bytecode::Expression_typeof(), NULL);
    ::TYPES[7] = ::g::Outracks::Simulator::List_typeof()->MakeMethod(6/*Write<Outracks.Simulator.Bytecode.Expression>*/, ::g::Outracks::Simulator::Bytecode::Expression_typeof(), NULL);
    ::TYPES[8] = ::g::Uno::Action2_typeof()->MakeType(::g::Outracks::Simulator::Bytecode::Expression_typeof(), ::g::System::IO::BinaryWriter_typeof(), NULL);
    type->SetFields(0,
        ::g::Outracks::Simulator::ImmutableList_typeof()->MakeType(::g::Outracks::Simulator::Bytecode::Expression_typeof(), NULL), offsetof(::g::Outracks::Simulator::Bytecode::CallStaticMethod, Arguments), 0,
        ::g::Outracks::Simulator::Bytecode::StaticMemberName_typeof(), offsetof(::g::Outracks::Simulator::Bytecode::CallStaticMethod, StaticMethod), 0);
    type->Reflection.SetFields(2,
        new uField("Arguments", 0),
        new uField("StaticMethod", 1));
    type->Reflection.SetFunctions(4,
        new uFunction(".ctor", NULL, (void*)CallStaticMethod__New1_fn, 0, true, type, 2, ::g::Outracks::Simulator::Bytecode::StaticMemberName_typeof(), ::g::Outracks::Simulator::Bytecode::Expression_typeof()->Array()),
        new uFunction(".ctor", NULL, (void*)CallStaticMethod__New2_fn, 0, true, type, 2, ::g::Outracks::Simulator::Bytecode::StaticMemberName_typeof(), ::g::Outracks::Simulator::ImmutableList_typeof()->MakeType(::g::Outracks::Simulator::Bytecode::Expression_typeof(), NULL)),
        new uFunction("Read", NULL, (void*)CallStaticMethod__Read2_fn, 0, true, type, 1, ::g::System::IO::BinaryReader_typeof()),
        new uFunction("Write", NULL, (void*)CallStaticMethod__Write2_fn, 0, true, uVoid_typeof(), 2, type, ::g::System::IO::BinaryWriter_typeof()));
}

::g::Outracks::Simulator::Bytecode::Expression_type* CallStaticMethod_typeof()
{
    static uSStrong< ::g::Outracks::Simulator::Bytecode::Expression_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Outracks::Simulator::Bytecode::Expression_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(CallStaticMethod);
    options.TypeSize = sizeof(::g::Outracks::Simulator::Bytecode::Expression_type);
    type = (::g::Outracks::Simulator::Bytecode::Expression_type*)uClassType::New("Outracks.Simulator.Bytecode.CallStaticMethod", options);
    type->fp_build_ = CallStaticMethod_build;
    type->fp_get_ExpressionId = (void(*)(::g::Outracks::Simulator::Bytecode::Expression*, uChar*))CallStaticMethod__get_ExpressionId_fn;
    type->fp_ToString = (void(*)(uObject*, uString**))CallStaticMethod__ToString_fn;
    type->fp_WriteExpression = (void(*)(::g::Outracks::Simulator::Bytecode::Expression*, ::g::System::IO::BinaryWriter*))CallStaticMethod__WriteExpression_fn;
    return type;
}

// public CallStaticMethod(Outracks.Simulator.Bytecode.StaticMemberName staticMethod, Outracks.Simulator.Bytecode.Expression[] arguments) :392
void CallStaticMethod__ctor_2_fn(CallStaticMethod* __this, ::g::Outracks::Simulator::Bytecode::StaticMemberName* staticMethod, uArray* arguments)
{
    __this->ctor_2(staticMethod, arguments);
}

// public CallStaticMethod(Outracks.Simulator.Bytecode.StaticMemberName staticMethod, Outracks.Simulator.ImmutableList<Outracks.Simulator.Bytecode.Expression> arguments) :396
void CallStaticMethod__ctor_3_fn(CallStaticMethod* __this, ::g::Outracks::Simulator::Bytecode::StaticMemberName* staticMethod, ::g::Outracks::Simulator::ImmutableList* arguments)
{
    __this->ctor_3(staticMethod, arguments);
}

// public override sealed char get_ExpressionId() :390
void CallStaticMethod__get_ExpressionId_fn(CallStaticMethod* __this, uChar* __retval)
{
    return *__retval = 'i', void();
}

// public CallStaticMethod New(Outracks.Simulator.Bytecode.StaticMemberName staticMethod, Outracks.Simulator.Bytecode.Expression[] arguments) :392
void CallStaticMethod__New1_fn(::g::Outracks::Simulator::Bytecode::StaticMemberName* staticMethod, uArray* arguments, CallStaticMethod** __retval)
{
    *__retval = CallStaticMethod::New1(staticMethod, arguments);
}

// public CallStaticMethod New(Outracks.Simulator.Bytecode.StaticMemberName staticMethod, Outracks.Simulator.ImmutableList<Outracks.Simulator.Bytecode.Expression> arguments) :396
void CallStaticMethod__New2_fn(::g::Outracks::Simulator::Bytecode::StaticMemberName* staticMethod, ::g::Outracks::Simulator::ImmutableList* arguments, CallStaticMethod** __retval)
{
    *__retval = CallStaticMethod::New2(staticMethod, arguments);
}

// public static new Outracks.Simulator.Bytecode.CallStaticMethod Read(System.IO.BinaryReader reader) :418
void CallStaticMethod__Read2_fn(::g::System::IO::BinaryReader* reader, CallStaticMethod** __retval)
{
    *__retval = CallStaticMethod::Read2(reader);
}

// public override sealed string ToString() :402
void CallStaticMethod__ToString_fn(CallStaticMethod* __this, uString** __retval)
{
    uStackFrame __("Outracks.Simulator.Bytecode.CallStaticMethod", "ToString()");
    return *__retval = ::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition(__this->StaticMethod, ::STRINGS[6/*"("*/]), ::g::Outracks::Simulator::StringSplitting::JoinToString(::TYPES[6/*Outracks.Simulator.StringSplitting.JoinToString<Outracks.Simulator.Bytecode.Expression>*/], (uObject*)__this->Arguments, ::STRINGS[7/*", "*/])), ::STRINGS[8/*")"*/]), void();
}

// public static void Write(Outracks.Simulator.Bytecode.CallStaticMethod o, System.IO.BinaryWriter writer) :407
void CallStaticMethod__Write2_fn(CallStaticMethod* o, ::g::System::IO::BinaryWriter* writer)
{
    CallStaticMethod::Write2(o, writer);
}

// protected override sealed void WriteExpression(System.IO.BinaryWriter writer) :412
void CallStaticMethod__WriteExpression_fn(CallStaticMethod* __this, ::g::System::IO::BinaryWriter* writer)
{
    uStackFrame __("Outracks.Simulator.Bytecode.CallStaticMethod", "WriteExpression(System.IO.BinaryWriter)");
    ::g::Outracks::Simulator::Bytecode::StaticMemberName::Write(__this->StaticMethod, writer);
    ::g::Outracks::Simulator::List::Write1(::TYPES[7/*Outracks.Simulator.List.Write<Outracks.Simulator.Bytecode.Expression>*/], writer, __this->Arguments, uDelegate::New(::TYPES[8/*Uno.Action<Outracks.Simulator.Bytecode.Expression, System.IO.BinaryWriter>*/], (void*)::g::Outracks::Simulator::Bytecode::Expression__Write1_fn));
}

// public CallStaticMethod(Outracks.Simulator.Bytecode.StaticMemberName staticMethod, Outracks.Simulator.Bytecode.Expression[] arguments) [instance] :392
void CallStaticMethod::ctor_2(::g::Outracks::Simulator::Bytecode::StaticMemberName* staticMethod, uArray* arguments)
{
    uStackFrame __("Outracks.Simulator.Bytecode.CallStaticMethod", ".ctor(Outracks.Simulator.Bytecode.StaticMemberName,Outracks.Simulator.Bytecode.Expression[])");
    ctor_3(staticMethod, (::g::Outracks::Simulator::ImmutableList*)::g::Outracks::Simulator::List::ToImmutableList(::TYPES[3/*Outracks.Simulator.List.ToImmutableList<Outracks.Simulator.Bytecode.Expression>*/], (uObject*)((::g::Uno::Runtime::Implementation::Internal::ArrayEnumerable*)::g::Uno::Runtime::Implementation::Internal::ArrayEnumerable::New1(::TYPES[4/*Uno.Runtime.Implementation.Internal.ArrayEnumerable<Outracks.Simulator.Bytecode.Expression>*/], arguments))));
}

// public CallStaticMethod(Outracks.Simulator.Bytecode.StaticMemberName staticMethod, Outracks.Simulator.ImmutableList<Outracks.Simulator.Bytecode.Expression> arguments) [instance] :396
void CallStaticMethod::ctor_3(::g::Outracks::Simulator::Bytecode::StaticMemberName* staticMethod, ::g::Outracks::Simulator::ImmutableList* arguments)
{
    ctor_1();
    StaticMethod = staticMethod;
    Arguments = arguments;
}

// public CallStaticMethod New(Outracks.Simulator.Bytecode.StaticMemberName staticMethod, Outracks.Simulator.Bytecode.Expression[] arguments) [static] :392
CallStaticMethod* CallStaticMethod::New1(::g::Outracks::Simulator::Bytecode::StaticMemberName* staticMethod, uArray* arguments)
{
    CallStaticMethod* obj1 = (CallStaticMethod*)uNew(CallStaticMethod_typeof());
    obj1->ctor_2(staticMethod, arguments);
    return obj1;
}

// public CallStaticMethod New(Outracks.Simulator.Bytecode.StaticMemberName staticMethod, Outracks.Simulator.ImmutableList<Outracks.Simulator.Bytecode.Expression> arguments) [static] :396
CallStaticMethod* CallStaticMethod::New2(::g::Outracks::Simulator::Bytecode::StaticMemberName* staticMethod, ::g::Outracks::Simulator::ImmutableList* arguments)
{
    CallStaticMethod* obj2 = (CallStaticMethod*)uNew(CallStaticMethod_typeof());
    obj2->ctor_3(staticMethod, arguments);
    return obj2;
}

// public static new Outracks.Simulator.Bytecode.CallStaticMethod Read(System.IO.BinaryReader reader) [static] :418
CallStaticMethod* CallStaticMethod::Read2(::g::System::IO::BinaryReader* reader)
{
    uStackFrame __("Outracks.Simulator.Bytecode.CallStaticMethod", "Read(System.IO.BinaryReader)");
    ::g::Outracks::Simulator::Bytecode::StaticMemberName* _StaticMethod = ::g::Outracks::Simulator::Bytecode::StaticMemberName::Read(reader);
    ::g::Outracks::Simulator::ImmutableList* _Arguments = (::g::Outracks::Simulator::ImmutableList*)::g::Outracks::Simulator::List::Read(::TYPES[5/*Outracks.Simulator.List.Read<Outracks.Simulator.Bytecode.Expression>*/], reader, ::g::Outracks::Simulator::Bytecode::Expression::Read1());
    return CallStaticMethod::New2(_StaticMethod, _Arguments);
}

// public static void Write(Outracks.Simulator.Bytecode.CallStaticMethod o, System.IO.BinaryWriter writer) [static] :407
void CallStaticMethod::Write2(CallStaticMethod* o, ::g::System::IO::BinaryWriter* writer)
{
    uStackFrame __("Outracks.Simulator.Bytecode.CallStaticMethod", "Write(Outracks.Simulator.Bytecode.CallStaticMethod,System.IO.BinaryWriter)");
    uPtr(o)->WriteExpression(writer);
}
// }

// /usr/local/share/uno/Packages/Outracks.Simulator.Common.Uno/0.0.0/bytecode/$.uno
// --------------------------------------------------------------------------------

// public sealed class EnumLiteral :1097
// {
static void EnumLiteral_build(uType* type)
{
    type->SetFields(0,
        ::g::Outracks::Simulator::Bytecode::StaticMemberName_typeof(), offsetof(::g::Outracks::Simulator::Bytecode::EnumLiteral, Value), 0);
    type->Reflection.SetFields(1,
        new uField("Value", 0));
    type->Reflection.SetFunctions(3,
        new uFunction(".ctor", NULL, (void*)EnumLiteral__New1_fn, 0, true, type, 1, ::g::Outracks::Simulator::Bytecode::StaticMemberName_typeof()),
        new uFunction("Read", NULL, (void*)EnumLiteral__Read3_fn, 0, true, type, 1, ::g::System::IO::BinaryReader_typeof()),
        new uFunction("Write", NULL, (void*)EnumLiteral__Write3_fn, 0, true, uVoid_typeof(), 2, type, ::g::System::IO::BinaryWriter_typeof()));
}

::g::Outracks::Simulator::Bytecode::Literal_type* EnumLiteral_typeof()
{
    static uSStrong< ::g::Outracks::Simulator::Bytecode::Literal_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Outracks::Simulator::Bytecode::Literal_typeof();
    options.FieldCount = 1;
    options.ObjectSize = sizeof(EnumLiteral);
    options.TypeSize = sizeof(::g::Outracks::Simulator::Bytecode::Literal_type);
    type = (::g::Outracks::Simulator::Bytecode::Literal_type*)uClassType::New("Outracks.Simulator.Bytecode.EnumLiteral", options);
    type->fp_build_ = EnumLiteral_build;
    type->fp_get_LiteralId = (void(*)(::g::Outracks::Simulator::Bytecode::Literal*, uChar*))EnumLiteral__get_LiteralId_fn;
    type->fp_ToString = (void(*)(uObject*, uString**))EnumLiteral__ToString_fn;
    type->fp_WriteLiteral = (void(*)(::g::Outracks::Simulator::Bytecode::Literal*, ::g::System::IO::BinaryWriter*))EnumLiteral__WriteLiteral_fn;
    return type;
}

// public EnumLiteral(Outracks.Simulator.Bytecode.StaticMemberName value) :1103
void EnumLiteral__ctor_3_fn(EnumLiteral* __this, ::g::Outracks::Simulator::Bytecode::StaticMemberName* value)
{
    __this->ctor_3(value);
}

// public override sealed char get_LiteralId() :1101
void EnumLiteral__get_LiteralId_fn(EnumLiteral* __this, uChar* __retval)
{
    return *__retval = 'e', void();
}

// public EnumLiteral New(Outracks.Simulator.Bytecode.StaticMemberName value) :1103
void EnumLiteral__New1_fn(::g::Outracks::Simulator::Bytecode::StaticMemberName* value, EnumLiteral** __retval)
{
    *__retval = EnumLiteral::New1(value);
}

// public static new Outracks.Simulator.Bytecode.EnumLiteral Read(System.IO.BinaryReader reader) :1123
void EnumLiteral__Read3_fn(::g::System::IO::BinaryReader* reader, EnumLiteral** __retval)
{
    *__retval = EnumLiteral::Read3(reader);
}

// public override sealed string ToString() :1108
void EnumLiteral__ToString_fn(EnumLiteral* __this, uString** __retval)
{
    uStackFrame __("Outracks.Simulator.Bytecode.EnumLiteral", "ToString()");
    return *__retval = uPtr(__this->Value)->ToString(), void();
}

// public static void Write(Outracks.Simulator.Bytecode.EnumLiteral l, System.IO.BinaryWriter writer) :1113
void EnumLiteral__Write3_fn(EnumLiteral* l, ::g::System::IO::BinaryWriter* writer)
{
    EnumLiteral::Write3(l, writer);
}

// protected override sealed void WriteLiteral(System.IO.BinaryWriter writer) :1118
void EnumLiteral__WriteLiteral_fn(EnumLiteral* __this, ::g::System::IO::BinaryWriter* writer)
{
    uStackFrame __("Outracks.Simulator.Bytecode.EnumLiteral", "WriteLiteral(System.IO.BinaryWriter)");
    EnumLiteral::Write3(__this, writer);
}

// public EnumLiteral(Outracks.Simulator.Bytecode.StaticMemberName value) [instance] :1103
void EnumLiteral::ctor_3(::g::Outracks::Simulator::Bytecode::StaticMemberName* value)
{
    ctor_2();
    Value = value;
}

// public EnumLiteral New(Outracks.Simulator.Bytecode.StaticMemberName value) [static] :1103
EnumLiteral* EnumLiteral::New1(::g::Outracks::Simulator::Bytecode::StaticMemberName* value)
{
    EnumLiteral* obj1 = (EnumLiteral*)uNew(EnumLiteral_typeof());
    obj1->ctor_3(value);
    return obj1;
}

// public static new Outracks.Simulator.Bytecode.EnumLiteral Read(System.IO.BinaryReader reader) [static] :1123
EnumLiteral* EnumLiteral::Read3(::g::System::IO::BinaryReader* reader)
{
    uStackFrame __("Outracks.Simulator.Bytecode.EnumLiteral", "Read(System.IO.BinaryReader)");
    return EnumLiteral::New1(::g::Outracks::Simulator::Bytecode::StaticMemberName::Read(reader));
}

// public static void Write(Outracks.Simulator.Bytecode.EnumLiteral l, System.IO.BinaryWriter writer) [static] :1113
void EnumLiteral::Write3(EnumLiteral* l, ::g::System::IO::BinaryWriter* writer)
{
    uStackFrame __("Outracks.Simulator.Bytecode.EnumLiteral", "Write(Outracks.Simulator.Bytecode.EnumLiteral,System.IO.BinaryWriter)");
    ::g::Outracks::Simulator::Bytecode::StaticMemberName::Write(uPtr(l)->Value, writer);
}
// }

// /usr/local/share/uno/Packages/Outracks.Simulator.Common.Uno/0.0.0/bytecode/$.uno
// --------------------------------------------------------------------------------

// public abstract class Expression :9
// {
// static Expression() :9
static void Expression__cctor_1_fn(uType* __type)
{
    Expression::Read1_ = uDelegate::New(::TYPES[9/*Uno.Func<System.IO.BinaryReader, Outracks.Simulator.Bytecode.Expression>*/], (void*)Expression___Read1_fn);
}

static void Expression_build(uType* type)
{
    ::TYPES[9] = ::g::Uno::Func1_typeof()->MakeType(::g::System::IO::BinaryReader_typeof(), type, NULL);
    ::TYPES[10] = ::g::Outracks::Simulator::Bytecode::ReadVariable_typeof();
    ::TYPES[11] = ::g::Outracks::Simulator::Bytecode::Literal_typeof();
    ::TYPES[12] = ::g::Outracks::Simulator::Bytecode::Lambda_typeof();
    ::TYPES[13] = ::g::Outracks::Simulator::Bytecode::MethodGroup_typeof();
    ::TYPES[14] = ::g::Outracks::Simulator::Bytecode::IsType_typeof();
    ::TYPES[15] = ::g::Outracks::Simulator::Bytecode::LogicalOr_typeof();
    ::TYPES[16] = ::g::Outracks::Simulator::Bytecode::Instantiate_typeof();
    ::TYPES[17] = ::g::Outracks::Simulator::Bytecode::CallLambda_typeof();
    ::TYPES[18] = ::g::Outracks::Simulator::Bytecode::CallStaticMethod_typeof();
    ::TYPES[19] = ::g::Outracks::Simulator::Bytecode::CallDynamicMethod_typeof();
    ::TYPES[20] = ::g::Outracks::Simulator::Bytecode::ReadStaticField_typeof();
    ::TYPES[21] = ::g::Outracks::Simulator::Bytecode::ReadProperty_typeof();
    ::TYPES[22] = ::g::Outracks::Simulator::Bytecode::WriteProperty_typeof();
    ::TYPES[23] = ::g::Outracks::Simulator::Bytecode::AddEventHandler_typeof();
    ::TYPES[24] = ::g::Outracks::Simulator::Bytecode::RemoveEventHandler_typeof();
    type->SetFields(0,
        ::TYPES[9/*Uno.Func<System.IO.BinaryReader, Outracks.Simulator.Bytecode.Expression>*/], (uintptr_t)&::g::Outracks::Simulator::Bytecode::Expression::Read1_, uFieldFlagsStatic);
    type->Reflection.SetFields(1,
        new uField("Read", 0));
    type->Reflection.SetFunctions(6,
        new uFunction("_Read", NULL, (void*)Expression___Read1_fn, 0, true, type, 1, ::g::System::IO::BinaryReader_typeof()),
        new uFunction("get_ExpressionId", NULL, NULL, offsetof(Expression_type, fp_get_ExpressionId), false, ::g::Uno::Char_typeof(), 0),
        new uFunction("Match", NULL, (void*)Expression__Match2_fn, 0, false, uVoid_typeof(), 15, ::g::Uno::Action1_typeof()->MakeType(::TYPES[10/*Outracks.Simulator.Bytecode.ReadVariable*/], NULL), ::g::Uno::Action1_typeof()->MakeType(::TYPES[11/*Outracks.Simulator.Bytecode.Literal*/], NULL), ::g::Uno::Action1_typeof()->MakeType(::TYPES[12/*Outracks.Simulator.Bytecode.Lambda*/], NULL), ::g::Uno::Action1_typeof()->MakeType(::TYPES[13/*Outracks.Simulator.Bytecode.MethodGroup*/], NULL), ::g::Uno::Action1_typeof()->MakeType(::TYPES[14/*Outracks.Simulator.Bytecode.IsType*/], NULL), ::g::Uno::Action1_typeof()->MakeType(::TYPES[15/*Outracks.Simulator.Bytecode.LogicalOr*/], NULL), ::g::Uno::Action1_typeof()->MakeType(::TYPES[16/*Outracks.Simulator.Bytecode.Instantiate*/], NULL), ::g::Uno::Action1_typeof()->MakeType(::TYPES[17/*Outracks.Simulator.Bytecode.CallLambda*/], NULL), ::g::Uno::Action1_typeof()->MakeType(::TYPES[18/*Outracks.Simulator.Bytecode.CallStaticMethod*/], NULL), ::g::Uno::Action1_typeof()->MakeType(::TYPES[19/*Outracks.Simulator.Bytecode.CallDynamicMethod*/], NULL), ::g::Uno::Action1_typeof()->MakeType(::TYPES[20/*Outracks.Simulator.Bytecode.ReadStaticField*/], NULL), ::g::Uno::Action1_typeof()->MakeType(::TYPES[21/*Outracks.Simulator.Bytecode.ReadProperty*/], NULL), ::g::Uno::Action1_typeof()->MakeType(::TYPES[22/*Outracks.Simulator.Bytecode.WriteProperty*/], NULL), ::g::Uno::Action1_typeof()->MakeType(::TYPES[23/*Outracks.Simulator.Bytecode.AddEventHandler*/], NULL), ::g::Uno::Action1_typeof()->MakeType(::TYPES[24/*Outracks.Simulator.Bytecode.RemoveEventHandler*/], NULL)),
        new uFunction("Match`1", type->MethodTypes[0], (void*)Expression__Match3_fn, 0, false, type->MethodTypes[0]->U(0), 15, ::g::Uno::Func1_typeof()->MakeType(::TYPES[10/*Outracks.Simulator.Bytecode.ReadVariable*/], type->MethodTypes[0]->U(0), NULL), ::g::Uno::Func1_typeof()->MakeType(::TYPES[11/*Outracks.Simulator.Bytecode.Literal*/], type->MethodTypes[0]->U(0), NULL), ::g::Uno::Func1_typeof()->MakeType(::TYPES[12/*Outracks.Simulator.Bytecode.Lambda*/], type->MethodTypes[0]->U(0), NULL), ::g::Uno::Func1_typeof()->MakeType(::TYPES[13/*Outracks.Simulator.Bytecode.MethodGroup*/], type->MethodTypes[0]->U(0), NULL), ::g::Uno::Func1_typeof()->MakeType(::TYPES[14/*Outracks.Simulator.Bytecode.IsType*/], type->MethodTypes[0]->U(0), NULL), ::g::Uno::Func1_typeof()->MakeType(::TYPES[15/*Outracks.Simulator.Bytecode.LogicalOr*/], type->MethodTypes[0]->U(0), NULL), ::g::Uno::Func1_typeof()->MakeType(::TYPES[16/*Outracks.Simulator.Bytecode.Instantiate*/], type->MethodTypes[0]->U(0), NULL), ::g::Uno::Func1_typeof()->MakeType(::TYPES[17/*Outracks.Simulator.Bytecode.CallLambda*/], type->MethodTypes[0]->U(0), NULL), ::g::Uno::Func1_typeof()->MakeType(::TYPES[18/*Outracks.Simulator.Bytecode.CallStaticMethod*/], type->MethodTypes[0]->U(0), NULL), ::g::Uno::Func1_typeof()->MakeType(::TYPES[19/*Outracks.Simulator.Bytecode.CallDynamicMethod*/], type->MethodTypes[0]->U(0), NULL), ::g::Uno::Func1_typeof()->MakeType(::TYPES[20/*Outracks.Simulator.Bytecode.ReadStaticField*/], type->MethodTypes[0]->U(0), NULL), ::g::Uno::Func1_typeof()->MakeType(::TYPES[21/*Outracks.Simulator.Bytecode.ReadProperty*/], type->MethodTypes[0]->U(0), NULL), ::g::Uno::Func1_typeof()->MakeType(::TYPES[22/*Outracks.Simulator.Bytecode.WriteProperty*/], type->MethodTypes[0]->U(0), NULL), ::g::Uno::Func1_typeof()->MakeType(::TYPES[23/*Outracks.Simulator.Bytecode.AddEventHandler*/], type->MethodTypes[0]->U(0), NULL), ::g::Uno::Func1_typeof()->MakeType(::TYPES[24/*Outracks.Simulator.Bytecode.RemoveEventHandler*/], type->MethodTypes[0]->U(0), NULL)),
        new uFunction("Throw", NULL, (void*)Expression__Throw_fn, 0, true, type, 1, ::g::Uno::Exception_typeof()),
        new uFunction("Write", NULL, (void*)Expression__Write1_fn, 0, true, uVoid_typeof(), 2, type, ::g::System::IO::BinaryWriter_typeof()));
}

Expression_type* Expression_typeof()
{
    static uSStrong<Expression_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Outracks::Simulator::Bytecode::Statement_typeof();
    options.FieldCount = 1;
    options.MethodTypeCount = 1;
    options.ObjectSize = sizeof(Expression);
    options.TypeSize = sizeof(Expression_type);
    type = (Expression_type*)uClassType::New("Outracks.Simulator.Bytecode.Expression", options);
    type->MethodTypes[0] = type->NewMethodType(1, 0);
    type->fp_build_ = Expression_build;
    type->fp_cctor_ = Expression__cctor_1_fn;
    type->fp_get_StatementId = (void(*)(::g::Outracks::Simulator::Bytecode::Statement*, uChar*))Expression__get_StatementId_fn;
    type->fp_WriteStatement = (void(*)(::g::Outracks::Simulator::Bytecode::Statement*, ::g::System::IO::BinaryWriter*))Expression__WriteStatement_fn;
    return type;
}

// protected generated Expression() :9
void Expression__ctor_1_fn(Expression* __this)
{
    __this->ctor_1();
}

// public static new Outracks.Simulator.Bytecode.Expression _Read(System.IO.BinaryReader reader) :119
void Expression___Read1_fn(::g::System::IO::BinaryReader* reader, Expression** __retval)
{
    *__retval = Expression::_Read1(reader);
}

// public void Match(Uno.Action<Outracks.Simulator.Bytecode.ReadVariable> a1, Uno.Action<Outracks.Simulator.Bytecode.Literal> a2, Uno.Action<Outracks.Simulator.Bytecode.Lambda> a3, Uno.Action<Outracks.Simulator.Bytecode.MethodGroup> a4, Uno.Action<Outracks.Simulator.Bytecode.IsType> a5, Uno.Action<Outracks.Simulator.Bytecode.LogicalOr> a6, Uno.Action<Outracks.Simulator.Bytecode.Instantiate> a7, Uno.Action<Outracks.Simulator.Bytecode.CallLambda> a8, Uno.Action<Outracks.Simulator.Bytecode.CallStaticMethod> a9, Uno.Action<Outracks.Simulator.Bytecode.CallDynamicMethod> a10, Uno.Action<Outracks.Simulator.Bytecode.ReadStaticField> a11, Uno.Action<Outracks.Simulator.Bytecode.ReadProperty> a12, Uno.Action<Outracks.Simulator.Bytecode.WriteProperty> a13, Uno.Action<Outracks.Simulator.Bytecode.AddEventHandler> a15, Uno.Action<Outracks.Simulator.Bytecode.RemoveEventHandler> a16) :70
void Expression__Match2_fn(Expression* __this, uDelegate* a1, uDelegate* a2, uDelegate* a3, uDelegate* a4, uDelegate* a5, uDelegate* a6, uDelegate* a7, uDelegate* a8, uDelegate* a9, uDelegate* a10, uDelegate* a11, uDelegate* a12, uDelegate* a13, uDelegate* a15, uDelegate* a16)
{
    __this->Match2(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a15, a16);
}

// public T Match<T>(Uno.Func<Outracks.Simulator.Bytecode.ReadVariable, T> a1, Uno.Func<Outracks.Simulator.Bytecode.Literal, T> a2, Uno.Func<Outracks.Simulator.Bytecode.Lambda, T> a3, Uno.Func<Outracks.Simulator.Bytecode.MethodGroup, T> a4, Uno.Func<Outracks.Simulator.Bytecode.IsType, T> a5, Uno.Func<Outracks.Simulator.Bytecode.LogicalOr, T> a6, Uno.Func<Outracks.Simulator.Bytecode.Instantiate, T> a7, Uno.Func<Outracks.Simulator.Bytecode.CallLambda, T> a8, Uno.Func<Outracks.Simulator.Bytecode.CallStaticMethod, T> a9, Uno.Func<Outracks.Simulator.Bytecode.CallDynamicMethod, T> a10, Uno.Func<Outracks.Simulator.Bytecode.ReadStaticField, T> a11, Uno.Func<Outracks.Simulator.Bytecode.ReadProperty, T> a12, Uno.Func<Outracks.Simulator.Bytecode.WriteProperty, T> a13, Uno.Func<Outracks.Simulator.Bytecode.AddEventHandler, T> a15, Uno.Func<Outracks.Simulator.Bytecode.RemoveEventHandler, T> a16) :34
void Expression__Match3_fn(Expression* __this, uType* __type, uDelegate* a1, uDelegate* a2, uDelegate* a3, uDelegate* a4, uDelegate* a5, uDelegate* a6, uDelegate* a7, uDelegate* a8, uDelegate* a9, uDelegate* a10, uDelegate* a11, uDelegate* a12, uDelegate* a13, uDelegate* a15, uDelegate* a16, uTRef __retval)
{
    uType* __types[] = {
        __type->U(0),
    };
    uStackFrame __("Outracks.Simulator.Bytecode.Expression", "Match`1(Uno.Func<Outracks.Simulator.Bytecode.ReadVariable, T>,Uno.Func<Outracks.Simulator.Bytecode.Literal, T>,Uno.Func<Outracks.Simulator.Bytecode.Lambda, T>,Uno.Func<Outracks.Simulator.Bytecode.MethodGroup, T>,Uno.Func<Outracks.Simulator.Bytecode.IsType, T>,Uno.Func<Outracks.Simulator.Bytecode.LogicalOr, T>,Uno.Func<Outracks.Simulator.Bytecode.Instantiate, T>,Uno.Func<Outracks.Simulator.Bytecode.CallLambda, T>,Uno.Func<Outracks.Simulator.Bytecode.CallStaticMethod, T>,Uno.Func<Outracks.Simulator.Bytecode.CallDynamicMethod, T>,Uno.Func<Outracks.Simulator.Bytecode.ReadStaticField, T>,Uno.Func<Outracks.Simulator.Bytecode.ReadProperty, T>,Uno.Func<Outracks.Simulator.Bytecode.WriteProperty, T>,Uno.Func<Outracks.Simulator.Bytecode.AddEventHandler, T>,Uno.Func<Outracks.Simulator.Bytecode.RemoveEventHandler, T>)");
    uT ret1(__types[0], U_ALLOCA(__types[0]->ValueSize));
    uT ret2(__types[0], U_ALLOCA(__types[0]->ValueSize));
    uT ret3(__types[0], U_ALLOCA(__types[0]->ValueSize));
    uT ret4(__types[0], U_ALLOCA(__types[0]->ValueSize));
    uT ret5(__types[0], U_ALLOCA(__types[0]->ValueSize));
    uT ret6(__types[0], U_ALLOCA(__types[0]->ValueSize));
    uT ret7(__types[0], U_ALLOCA(__types[0]->ValueSize));
    uT ret8(__types[0], U_ALLOCA(__types[0]->ValueSize));
    uT ret9(__types[0], U_ALLOCA(__types[0]->ValueSize));
    uT ret10(__types[0], U_ALLOCA(__types[0]->ValueSize));
    uT ret11(__types[0], U_ALLOCA(__types[0]->ValueSize));
    uT ret12(__types[0], U_ALLOCA(__types[0]->ValueSize));
    uT ret13(__types[0], U_ALLOCA(__types[0]->ValueSize));
    uT ret14(__types[0], U_ALLOCA(__types[0]->ValueSize));
    uT ret15(__types[0], U_ALLOCA(__types[0]->ValueSize));
    Expression* self = __this;
    ::g::Outracks::Simulator::Bytecode::ReadVariable* t1 = uAs< ::g::Outracks::Simulator::Bytecode::ReadVariable*>(self, ::TYPES[10/*Outracks.Simulator.Bytecode.ReadVariable*/]);

    if (t1 != NULL)
        return __retval.Store((uPtr(a1)->Invoke(&ret1, 1, t1), ret1)), void();

    ::g::Outracks::Simulator::Bytecode::Literal* t2 = uAs< ::g::Outracks::Simulator::Bytecode::Literal*>(self, ::TYPES[11/*Outracks.Simulator.Bytecode.Literal*/]);

    if (t2 != NULL)
        return __retval.Store((uPtr(a2)->Invoke(&ret2, 1, t2), ret2)), void();

    ::g::Outracks::Simulator::Bytecode::Lambda* t3 = uAs< ::g::Outracks::Simulator::Bytecode::Lambda*>(self, ::TYPES[12/*Outracks.Simulator.Bytecode.Lambda*/]);

    if (t3 != NULL)
        return __retval.Store((uPtr(a3)->Invoke(&ret3, 1, t3), ret3)), void();

    ::g::Outracks::Simulator::Bytecode::MethodGroup* t4 = uAs< ::g::Outracks::Simulator::Bytecode::MethodGroup*>(self, ::TYPES[13/*Outracks.Simulator.Bytecode.MethodGroup*/]);

    if (t4 != NULL)
        return __retval.Store((uPtr(a4)->Invoke(&ret4, 1, t4), ret4)), void();

    ::g::Outracks::Simulator::Bytecode::IsType* t5 = uAs< ::g::Outracks::Simulator::Bytecode::IsType*>(self, ::TYPES[14/*Outracks.Simulator.Bytecode.IsType*/]);

    if (t5 != NULL)
        return __retval.Store((uPtr(a5)->Invoke(&ret5, 1, t5), ret5)), void();

    ::g::Outracks::Simulator::Bytecode::LogicalOr* t6 = uAs< ::g::Outracks::Simulator::Bytecode::LogicalOr*>(self, ::TYPES[15/*Outracks.Simulator.Bytecode.LogicalOr*/]);

    if (t6 != NULL)
        return __retval.Store((uPtr(a6)->Invoke(&ret6, 1, t6), ret6)), void();

    ::g::Outracks::Simulator::Bytecode::Instantiate* t7 = uAs< ::g::Outracks::Simulator::Bytecode::Instantiate*>(self, ::TYPES[16/*Outracks.Simulator.Bytecode.Instantiate*/]);

    if (t7 != NULL)
        return __retval.Store((uPtr(a7)->Invoke(&ret7, 1, t7), ret7)), void();

    ::g::Outracks::Simulator::Bytecode::CallLambda* t8 = uAs< ::g::Outracks::Simulator::Bytecode::CallLambda*>(self, ::TYPES[17/*Outracks.Simulator.Bytecode.CallLambda*/]);

    if (t8 != NULL)
        return __retval.Store((uPtr(a8)->Invoke(&ret8, 1, t8), ret8)), void();

    ::g::Outracks::Simulator::Bytecode::CallStaticMethod* t9 = uAs< ::g::Outracks::Simulator::Bytecode::CallStaticMethod*>(self, ::TYPES[18/*Outracks.Simulator.Bytecode.CallStaticMethod*/]);

    if (t9 != NULL)
        return __retval.Store((uPtr(a9)->Invoke(&ret9, 1, t9), ret9)), void();

    ::g::Outracks::Simulator::Bytecode::CallDynamicMethod* t10 = uAs< ::g::Outracks::Simulator::Bytecode::CallDynamicMethod*>(self, ::TYPES[19/*Outracks.Simulator.Bytecode.CallDynamicMethod*/]);

    if (t10 != NULL)
        return __retval.Store((uPtr(a10)->Invoke(&ret10, 1, t10), ret10)), void();

    ::g::Outracks::Simulator::Bytecode::ReadStaticField* t11 = uAs< ::g::Outracks::Simulator::Bytecode::ReadStaticField*>(self, ::TYPES[20/*Outracks.Simulator.Bytecode.ReadStaticField*/]);

    if (t11 != NULL)
        return __retval.Store((uPtr(a11)->Invoke(&ret11, 1, t11), ret11)), void();

    ::g::Outracks::Simulator::Bytecode::ReadProperty* t12 = uAs< ::g::Outracks::Simulator::Bytecode::ReadProperty*>(self, ::TYPES[21/*Outracks.Simulator.Bytecode.ReadProperty*/]);

    if (t12 != NULL)
        return __retval.Store((uPtr(a12)->Invoke(&ret12, 1, t12), ret12)), void();

    ::g::Outracks::Simulator::Bytecode::WriteProperty* t13 = uAs< ::g::Outracks::Simulator::Bytecode::WriteProperty*>(self, ::TYPES[22/*Outracks.Simulator.Bytecode.WriteProperty*/]);

    if (t13 != NULL)
        return __retval.Store((uPtr(a13)->Invoke(&ret13, 1, t13), ret13)), void();

    ::g::Outracks::Simulator::Bytecode::AddEventHandler* t15 = uAs< ::g::Outracks::Simulator::Bytecode::AddEventHandler*>(self, ::TYPES[23/*Outracks.Simulator.Bytecode.AddEventHandler*/]);

    if (t15 != NULL)
        return __retval.Store((uPtr(a15)->Invoke(&ret14, 1, t15), ret14)), void();

    ::g::Outracks::Simulator::Bytecode::RemoveEventHandler* t16 = uAs< ::g::Outracks::Simulator::Bytecode::RemoveEventHandler*>(self, ::TYPES[24/*Outracks.Simulator.Bytecode.RemoveEventHandler*/]);

    if (t16 != NULL)
        return __retval.Store((uPtr(a16)->Invoke(&ret15, 1, t16), ret15)), void();

    U_THROW(::g::Outracks::Simulator::NonExhaustiveMatch::New4());
}

// public override sealed char get_StatementId() :145
void Expression__get_StatementId_fn(Expression* __this, uChar* __retval)
{
    return *__retval = 'e', void();
}

// public static Outracks.Simulator.Bytecode.Expression Throw(Uno.Exception e) :148
void Expression__Throw_fn(::g::Uno::Exception* e, Expression** __retval)
{
    *__retval = Expression::Throw(e);
}

// public static void Write(Outracks.Simulator.Bytecode.Expression expression, System.IO.BinaryWriter writer) :106
void Expression__Write1_fn(Expression* expression, ::g::System::IO::BinaryWriter* writer)
{
    Expression::Write1(expression, writer);
}

// protected override sealed void WriteStatement(System.IO.BinaryWriter writer) :112
void Expression__WriteStatement_fn(Expression* __this, ::g::System::IO::BinaryWriter* writer)
{
    uStackFrame __("Outracks.Simulator.Bytecode.Expression", "WriteStatement(System.IO.BinaryWriter)");
    Expression::Write1(__this, writer);
}

uSStrong<uDelegate*> Expression::Read1_;

// protected generated Expression() [instance] :9
void Expression::ctor_1()
{
    ctor_();
}

// public void Match(Uno.Action<Outracks.Simulator.Bytecode.ReadVariable> a1, Uno.Action<Outracks.Simulator.Bytecode.Literal> a2, Uno.Action<Outracks.Simulator.Bytecode.Lambda> a3, Uno.Action<Outracks.Simulator.Bytecode.MethodGroup> a4, Uno.Action<Outracks.Simulator.Bytecode.IsType> a5, Uno.Action<Outracks.Simulator.Bytecode.LogicalOr> a6, Uno.Action<Outracks.Simulator.Bytecode.Instantiate> a7, Uno.Action<Outracks.Simulator.Bytecode.CallLambda> a8, Uno.Action<Outracks.Simulator.Bytecode.CallStaticMethod> a9, Uno.Action<Outracks.Simulator.Bytecode.CallDynamicMethod> a10, Uno.Action<Outracks.Simulator.Bytecode.ReadStaticField> a11, Uno.Action<Outracks.Simulator.Bytecode.ReadProperty> a12, Uno.Action<Outracks.Simulator.Bytecode.WriteProperty> a13, Uno.Action<Outracks.Simulator.Bytecode.AddEventHandler> a15, Uno.Action<Outracks.Simulator.Bytecode.RemoveEventHandler> a16) [instance] :70
void Expression::Match2(uDelegate* a1, uDelegate* a2, uDelegate* a3, uDelegate* a4, uDelegate* a5, uDelegate* a6, uDelegate* a7, uDelegate* a8, uDelegate* a9, uDelegate* a10, uDelegate* a11, uDelegate* a12, uDelegate* a13, uDelegate* a15, uDelegate* a16)
{
    uStackFrame __("Outracks.Simulator.Bytecode.Expression", "Match(Uno.Action<Outracks.Simulator.Bytecode.ReadVariable>,Uno.Action<Outracks.Simulator.Bytecode.Literal>,Uno.Action<Outracks.Simulator.Bytecode.Lambda>,Uno.Action<Outracks.Simulator.Bytecode.MethodGroup>,Uno.Action<Outracks.Simulator.Bytecode.IsType>,Uno.Action<Outracks.Simulator.Bytecode.LogicalOr>,Uno.Action<Outracks.Simulator.Bytecode.Instantiate>,Uno.Action<Outracks.Simulator.Bytecode.CallLambda>,Uno.Action<Outracks.Simulator.Bytecode.CallStaticMethod>,Uno.Action<Outracks.Simulator.Bytecode.CallDynamicMethod>,Uno.Action<Outracks.Simulator.Bytecode.ReadStaticField>,Uno.Action<Outracks.Simulator.Bytecode.ReadProperty>,Uno.Action<Outracks.Simulator.Bytecode.WriteProperty>,Uno.Action<Outracks.Simulator.Bytecode.AddEventHandler>,Uno.Action<Outracks.Simulator.Bytecode.RemoveEventHandler>)");
    Expression* self = this;
    ::g::Outracks::Simulator::Bytecode::ReadVariable* t1 = uAs< ::g::Outracks::Simulator::Bytecode::ReadVariable*>(self, ::TYPES[10/*Outracks.Simulator.Bytecode.ReadVariable*/]);

    if (t1 != NULL)
    {
        uPtr(a1)->InvokeVoid(t1);
        return;
    }

    ::g::Outracks::Simulator::Bytecode::Literal* t2 = uAs< ::g::Outracks::Simulator::Bytecode::Literal*>(self, ::TYPES[11/*Outracks.Simulator.Bytecode.Literal*/]);

    if (t2 != NULL)
    {
        uPtr(a2)->InvokeVoid(t2);
        return;
    }

    ::g::Outracks::Simulator::Bytecode::Lambda* t3 = uAs< ::g::Outracks::Simulator::Bytecode::Lambda*>(self, ::TYPES[12/*Outracks.Simulator.Bytecode.Lambda*/]);

    if (t3 != NULL)
    {
        uPtr(a3)->InvokeVoid(t3);
        return;
    }

    ::g::Outracks::Simulator::Bytecode::MethodGroup* t4 = uAs< ::g::Outracks::Simulator::Bytecode::MethodGroup*>(self, ::TYPES[13/*Outracks.Simulator.Bytecode.MethodGroup*/]);

    if (t4 != NULL)
    {
        uPtr(a4)->InvokeVoid(t4);
        return;
    }

    ::g::Outracks::Simulator::Bytecode::IsType* t5 = uAs< ::g::Outracks::Simulator::Bytecode::IsType*>(self, ::TYPES[14/*Outracks.Simulator.Bytecode.IsType*/]);

    if (t5 != NULL)
    {
        uPtr(a5)->InvokeVoid(t5);
        return;
    }

    ::g::Outracks::Simulator::Bytecode::LogicalOr* t6 = uAs< ::g::Outracks::Simulator::Bytecode::LogicalOr*>(self, ::TYPES[15/*Outracks.Simulator.Bytecode.LogicalOr*/]);

    if (t6 != NULL)
    {
        uPtr(a6)->InvokeVoid(t6);
        return;
    }

    ::g::Outracks::Simulator::Bytecode::Instantiate* t7 = uAs< ::g::Outracks::Simulator::Bytecode::Instantiate*>(self, ::TYPES[16/*Outracks.Simulator.Bytecode.Instantiate*/]);

    if (t7 != NULL)
    {
        uPtr(a7)->InvokeVoid(t7);
        return;
    }

    ::g::Outracks::Simulator::Bytecode::CallLambda* t8 = uAs< ::g::Outracks::Simulator::Bytecode::CallLambda*>(self, ::TYPES[17/*Outracks.Simulator.Bytecode.CallLambda*/]);

    if (t8 != NULL)
    {
        uPtr(a8)->InvokeVoid(t8);
        return;
    }

    ::g::Outracks::Simulator::Bytecode::CallStaticMethod* t9 = uAs< ::g::Outracks::Simulator::Bytecode::CallStaticMethod*>(self, ::TYPES[18/*Outracks.Simulator.Bytecode.CallStaticMethod*/]);

    if (t9 != NULL)
    {
        uPtr(a9)->InvokeVoid(t9);
        return;
    }

    ::g::Outracks::Simulator::Bytecode::CallDynamicMethod* t10 = uAs< ::g::Outracks::Simulator::Bytecode::CallDynamicMethod*>(self, ::TYPES[19/*Outracks.Simulator.Bytecode.CallDynamicMethod*/]);

    if (t10 != NULL)
    {
        uPtr(a10)->InvokeVoid(t10);
        return;
    }

    ::g::Outracks::Simulator::Bytecode::ReadStaticField* t11 = uAs< ::g::Outracks::Simulator::Bytecode::ReadStaticField*>(self, ::TYPES[20/*Outracks.Simulator.Bytecode.ReadStaticField*/]);

    if (t11 != NULL)
    {
        uPtr(a11)->InvokeVoid(t11);
        return;
    }

    ::g::Outracks::Simulator::Bytecode::ReadProperty* t12 = uAs< ::g::Outracks::Simulator::Bytecode::ReadProperty*>(self, ::TYPES[21/*Outracks.Simulator.Bytecode.ReadProperty*/]);

    if (t12 != NULL)
    {
        uPtr(a12)->InvokeVoid(t12);
        return;
    }

    ::g::Outracks::Simulator::Bytecode::WriteProperty* t13 = uAs< ::g::Outracks::Simulator::Bytecode::WriteProperty*>(self, ::TYPES[22/*Outracks.Simulator.Bytecode.WriteProperty*/]);

    if (t13 != NULL)
    {
        uPtr(a13)->InvokeVoid(t13);
        return;
    }

    ::g::Outracks::Simulator::Bytecode::AddEventHandler* t15 = uAs< ::g::Outracks::Simulator::Bytecode::AddEventHandler*>(self, ::TYPES[23/*Outracks.Simulator.Bytecode.AddEventHandler*/]);

    if (t15 != NULL)
    {
        uPtr(a15)->InvokeVoid(t15);
        return;
    }

    ::g::Outracks::Simulator::Bytecode::RemoveEventHandler* t16 = uAs< ::g::Outracks::Simulator::Bytecode::RemoveEventHandler*>(self, ::TYPES[24/*Outracks.Simulator.Bytecode.RemoveEventHandler*/]);

    if (t16 != NULL)
    {
        uPtr(a16)->InvokeVoid(t16);
        return;
    }

    U_THROW(::g::Outracks::Simulator::NonExhaustiveMatch::New4());
}

// public static new Outracks.Simulator.Bytecode.Expression _Read(System.IO.BinaryReader reader) [static] :119
Expression* Expression::_Read1(::g::System::IO::BinaryReader* reader)
{
    uStackFrame __("Outracks.Simulator.Bytecode.Expression", "_Read(System.IO.BinaryReader)");
    Expression_typeof()->Init();
    uChar c = uPtr(reader)->ReadChar();

    switch (c)
    {
        case 'a':
            return ::g::Outracks::Simulator::Bytecode::ReadVariable::Read2(reader);
        case 'b':
            return ::g::Outracks::Simulator::Bytecode::Literal::Read2(reader);
        case 'c':
            return ::g::Outracks::Simulator::Bytecode::Lambda::Read2(reader);
        case 'd':
            return ::g::Outracks::Simulator::Bytecode::MethodGroup::Read2(reader);
        case 'e':
            return ::g::Outracks::Simulator::Bytecode::IsType::Read2(reader);
        case 'f':
            return ::g::Outracks::Simulator::Bytecode::LogicalOr::Read2(reader);
        case 'g':
            return ::g::Outracks::Simulator::Bytecode::Instantiate::Read2(reader);
        case 'h':
            return ::g::Outracks::Simulator::Bytecode::CallLambda::Read2(reader);
        case 'i':
            return ::g::Outracks::Simulator::Bytecode::CallStaticMethod::Read2(reader);
        case 'j':
            return ::g::Outracks::Simulator::Bytecode::CallDynamicMethod::Read2(reader);
        case 'k':
            return ::g::Outracks::Simulator::Bytecode::ReadStaticField::Read2(reader);
        case 'l':
            return ::g::Outracks::Simulator::Bytecode::ReadProperty::Read2(reader);
        case 'm':
            return ::g::Outracks::Simulator::Bytecode::WriteProperty::Read2(reader);
        case 'n':
            return ::g::Outracks::Simulator::Bytecode::AddEventHandler::Read2(reader);
        case 'o':
            return ::g::Outracks::Simulator::Bytecode::RemoveEventHandler::Read2(reader);
    }

    U_THROW(::g::Outracks::Simulator::InvalidDataException::New4());
}

// public static Outracks.Simulator.Bytecode.Expression Throw(Uno.Exception e) [static] :148
Expression* Expression::Throw(::g::Uno::Exception* e)
{
    uStackFrame __("Outracks.Simulator.Bytecode.Expression", "Throw(Uno.Exception)");
    Expression_typeof()->Init();
    U_THROW(e);
}

// public static void Write(Outracks.Simulator.Bytecode.Expression expression, System.IO.BinaryWriter writer) [static] :106
void Expression::Write1(Expression* expression, ::g::System::IO::BinaryWriter* writer)
{
    uStackFrame __("Outracks.Simulator.Bytecode.Expression", "Write(Outracks.Simulator.Bytecode.Expression,System.IO.BinaryWriter)");
    Expression_typeof()->Init();
    uPtr(writer)->Write2(uPtr(expression)->ExpressionId());
    expression->WriteExpression(writer);
}
// }

// /usr/local/share/uno/Packages/Outracks.Simulator.Common.Uno/0.0.0/bytecode/$.uno
// --------------------------------------------------------------------------------

// internal static class ExpressionIdRegistry :159
// {
static void ExpressionIdRegistry_build(uType* type)
{
}

uClassType* ExpressionIdRegistry_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Outracks.Simulator.Bytecode.ExpressionIdRegistry", options);
    type->fp_build_ = ExpressionIdRegistry_build;
    return type;
}
// }

// /usr/local/share/uno/Packages/Outracks.Simulator.Common.Uno/0.0.0/bytecode/$.uno
// --------------------------------------------------------------------------------

// public sealed class Instantiate :299
// {
static void Instantiate_build(uType* type)
{
    ::STRINGS[9] = uString::Const("new ");
    ::STRINGS[6] = uString::Const("(");
    ::STRINGS[7] = uString::Const(", ");
    ::STRINGS[8] = uString::Const(")");
    ::TYPES[3] = ::g::Outracks::Simulator::List_typeof()->MakeMethod(3/*ToImmutableList<Outracks.Simulator.Bytecode.Expression>*/, ::g::Outracks::Simulator::Bytecode::Expression_typeof(), NULL);
    ::TYPES[4] = ::g::Uno::Runtime::Implementation::Internal::ArrayEnumerable_typeof()->MakeType(::g::Outracks::Simulator::Bytecode::Expression_typeof(), NULL);
    ::TYPES[5] = ::g::Outracks::Simulator::List_typeof()->MakeMethod(1/*Read<Outracks.Simulator.Bytecode.Expression>*/, ::g::Outracks::Simulator::Bytecode::Expression_typeof(), NULL);
    ::TYPES[6] = ::g::Outracks::Simulator::StringSplitting_typeof()->MakeMethod(0/*JoinToString<Outracks.Simulator.Bytecode.Expression>*/, ::g::Outracks::Simulator::Bytecode::Expression_typeof(), NULL);
    ::TYPES[7] = ::g::Outracks::Simulator::List_typeof()->MakeMethod(6/*Write<Outracks.Simulator.Bytecode.Expression>*/, ::g::Outracks::Simulator::Bytecode::Expression_typeof(), NULL);
    ::TYPES[8] = ::g::Uno::Action2_typeof()->MakeType(::g::Outracks::Simulator::Bytecode::Expression_typeof(), ::g::System::IO::BinaryWriter_typeof(), NULL);
    type->SetFields(0,
        ::g::Outracks::Simulator::ImmutableList_typeof()->MakeType(::g::Outracks::Simulator::Bytecode::Expression_typeof(), NULL), offsetof(::g::Outracks::Simulator::Bytecode::Instantiate, Arguments), 0,
        ::g::Outracks::Simulator::Bytecode::TypeName_typeof(), offsetof(::g::Outracks::Simulator::Bytecode::Instantiate, Type), 0);
    type->Reflection.SetFields(2,
        new uField("Arguments", 0),
        new uField("Type", 1));
    type->Reflection.SetFunctions(4,
        new uFunction(".ctor", NULL, (void*)Instantiate__New1_fn, 0, true, type, 2, ::g::Outracks::Simulator::Bytecode::TypeName_typeof(), ::g::Outracks::Simulator::Bytecode::Expression_typeof()->Array()),
        new uFunction(".ctor", NULL, (void*)Instantiate__New2_fn, 0, true, type, 2, ::g::Outracks::Simulator::Bytecode::TypeName_typeof(), ::g::Outracks::Simulator::ImmutableList_typeof()->MakeType(::g::Outracks::Simulator::Bytecode::Expression_typeof(), NULL)),
        new uFunction("Read", NULL, (void*)Instantiate__Read2_fn, 0, true, type, 1, ::g::System::IO::BinaryReader_typeof()),
        new uFunction("Write", NULL, (void*)Instantiate__Write2_fn, 0, true, uVoid_typeof(), 2, type, ::g::System::IO::BinaryWriter_typeof()));
}

::g::Outracks::Simulator::Bytecode::Expression_type* Instantiate_typeof()
{
    static uSStrong< ::g::Outracks::Simulator::Bytecode::Expression_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Outracks::Simulator::Bytecode::Expression_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(Instantiate);
    options.TypeSize = sizeof(::g::Outracks::Simulator::Bytecode::Expression_type);
    type = (::g::Outracks::Simulator::Bytecode::Expression_type*)uClassType::New("Outracks.Simulator.Bytecode.Instantiate", options);
    type->fp_build_ = Instantiate_build;
    type->fp_get_ExpressionId = (void(*)(::g::Outracks::Simulator::Bytecode::Expression*, uChar*))Instantiate__get_ExpressionId_fn;
    type->fp_ToString = (void(*)(uObject*, uString**))Instantiate__ToString_fn;
    type->fp_WriteExpression = (void(*)(::g::Outracks::Simulator::Bytecode::Expression*, ::g::System::IO::BinaryWriter*))Instantiate__WriteExpression_fn;
    return type;
}

// public Instantiate(Outracks.Simulator.Bytecode.TypeName type, Outracks.Simulator.Bytecode.Expression[] arguments) :306
void Instantiate__ctor_2_fn(Instantiate* __this, ::g::Outracks::Simulator::Bytecode::TypeName* type, uArray* arguments)
{
    __this->ctor_2(type, arguments);
}

// public Instantiate(Outracks.Simulator.Bytecode.TypeName type, Outracks.Simulator.ImmutableList<Outracks.Simulator.Bytecode.Expression> arguments) :310
void Instantiate__ctor_3_fn(Instantiate* __this, ::g::Outracks::Simulator::Bytecode::TypeName* type, ::g::Outracks::Simulator::ImmutableList* arguments)
{
    __this->ctor_3(type, arguments);
}

// public override sealed char get_ExpressionId() :304
void Instantiate__get_ExpressionId_fn(Instantiate* __this, uChar* __retval)
{
    return *__retval = 'g', void();
}

// public Instantiate New(Outracks.Simulator.Bytecode.TypeName type, Outracks.Simulator.Bytecode.Expression[] arguments) :306
void Instantiate__New1_fn(::g::Outracks::Simulator::Bytecode::TypeName* type, uArray* arguments, Instantiate** __retval)
{
    *__retval = Instantiate::New1(type, arguments);
}

// public Instantiate New(Outracks.Simulator.Bytecode.TypeName type, Outracks.Simulator.ImmutableList<Outracks.Simulator.Bytecode.Expression> arguments) :310
void Instantiate__New2_fn(::g::Outracks::Simulator::Bytecode::TypeName* type, ::g::Outracks::Simulator::ImmutableList* arguments, Instantiate** __retval)
{
    *__retval = Instantiate::New2(type, arguments);
}

// public static new Outracks.Simulator.Bytecode.Instantiate Read(System.IO.BinaryReader reader) :332
void Instantiate__Read2_fn(::g::System::IO::BinaryReader* reader, Instantiate** __retval)
{
    *__retval = Instantiate::Read2(reader);
}

// public override sealed string ToString() :316
void Instantiate__ToString_fn(Instantiate* __this, uString** __retval)
{
    uStackFrame __("Outracks.Simulator.Bytecode.Instantiate", "ToString()");
    return *__retval = ::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::STRINGS[9/*"new "*/], uPtr(__this->Type)->FullName()), ::STRINGS[6/*"("*/]), ::g::Outracks::Simulator::StringSplitting::JoinToString(::TYPES[6/*Outracks.Simulator.StringSplitting.JoinToString<Outracks.Simulator.Bytecode.Expression>*/], (uObject*)__this->Arguments, ::STRINGS[7/*", "*/])), ::STRINGS[8/*")"*/]), void();
}

// public static void Write(Outracks.Simulator.Bytecode.Instantiate o, System.IO.BinaryWriter writer) :321
void Instantiate__Write2_fn(Instantiate* o, ::g::System::IO::BinaryWriter* writer)
{
    Instantiate::Write2(o, writer);
}

// protected override sealed void WriteExpression(System.IO.BinaryWriter writer) :326
void Instantiate__WriteExpression_fn(Instantiate* __this, ::g::System::IO::BinaryWriter* writer)
{
    uStackFrame __("Outracks.Simulator.Bytecode.Instantiate", "WriteExpression(System.IO.BinaryWriter)");
    uPtr(::g::Outracks::Simulator::Bytecode::TypeName::Write())->Invoke(2, (::g::Outracks::Simulator::Bytecode::TypeName*)__this->Type, writer);
    ::g::Outracks::Simulator::List::Write1(::TYPES[7/*Outracks.Simulator.List.Write<Outracks.Simulator.Bytecode.Expression>*/], writer, __this->Arguments, uDelegate::New(::TYPES[8/*Uno.Action<Outracks.Simulator.Bytecode.Expression, System.IO.BinaryWriter>*/], (void*)::g::Outracks::Simulator::Bytecode::Expression__Write1_fn));
}

// public Instantiate(Outracks.Simulator.Bytecode.TypeName type, Outracks.Simulator.Bytecode.Expression[] arguments) [instance] :306
void Instantiate::ctor_2(::g::Outracks::Simulator::Bytecode::TypeName* type, uArray* arguments)
{
    uStackFrame __("Outracks.Simulator.Bytecode.Instantiate", ".ctor(Outracks.Simulator.Bytecode.TypeName,Outracks.Simulator.Bytecode.Expression[])");
    ctor_3(type, (::g::Outracks::Simulator::ImmutableList*)::g::Outracks::Simulator::List::ToImmutableList(::TYPES[3/*Outracks.Simulator.List.ToImmutableList<Outracks.Simulator.Bytecode.Expression>*/], (uObject*)((::g::Uno::Runtime::Implementation::Internal::ArrayEnumerable*)::g::Uno::Runtime::Implementation::Internal::ArrayEnumerable::New1(::TYPES[4/*Uno.Runtime.Implementation.Internal.ArrayEnumerable<Outracks.Simulator.Bytecode.Expression>*/], arguments))));
}

// public Instantiate(Outracks.Simulator.Bytecode.TypeName type, Outracks.Simulator.ImmutableList<Outracks.Simulator.Bytecode.Expression> arguments) [instance] :310
void Instantiate::ctor_3(::g::Outracks::Simulator::Bytecode::TypeName* type, ::g::Outracks::Simulator::ImmutableList* arguments)
{
    ctor_1();
    Type = type;
    Arguments = arguments;
}

// public Instantiate New(Outracks.Simulator.Bytecode.TypeName type, Outracks.Simulator.Bytecode.Expression[] arguments) [static] :306
Instantiate* Instantiate::New1(::g::Outracks::Simulator::Bytecode::TypeName* type, uArray* arguments)
{
    Instantiate* obj1 = (Instantiate*)uNew(Instantiate_typeof());
    obj1->ctor_2(type, arguments);
    return obj1;
}

// public Instantiate New(Outracks.Simulator.Bytecode.TypeName type, Outracks.Simulator.ImmutableList<Outracks.Simulator.Bytecode.Expression> arguments) [static] :310
Instantiate* Instantiate::New2(::g::Outracks::Simulator::Bytecode::TypeName* type, ::g::Outracks::Simulator::ImmutableList* arguments)
{
    Instantiate* obj2 = (Instantiate*)uNew(Instantiate_typeof());
    obj2->ctor_3(type, arguments);
    return obj2;
}

// public static new Outracks.Simulator.Bytecode.Instantiate Read(System.IO.BinaryReader reader) [static] :332
Instantiate* Instantiate::Read2(::g::System::IO::BinaryReader* reader)
{
    uStackFrame __("Outracks.Simulator.Bytecode.Instantiate", "Read(System.IO.BinaryReader)");
    ::g::Outracks::Simulator::Bytecode::TypeName* _Type = (::g::Outracks::Simulator::Bytecode::TypeName*)uPtr(::g::Outracks::Simulator::Bytecode::TypeName::Read())->Invoke(1, reader);
    ::g::Outracks::Simulator::ImmutableList* _Arguments = (::g::Outracks::Simulator::ImmutableList*)::g::Outracks::Simulator::List::Read(::TYPES[5/*Outracks.Simulator.List.Read<Outracks.Simulator.Bytecode.Expression>*/], reader, ::g::Outracks::Simulator::Bytecode::Expression::Read1());
    return Instantiate::New2(_Type, _Arguments);
}

// public static void Write(Outracks.Simulator.Bytecode.Instantiate o, System.IO.BinaryWriter writer) [static] :321
void Instantiate::Write2(Instantiate* o, ::g::System::IO::BinaryWriter* writer)
{
    uStackFrame __("Outracks.Simulator.Bytecode.Instantiate", "Write(Outracks.Simulator.Bytecode.Instantiate,System.IO.BinaryWriter)");
    uPtr(o)->WriteExpression(writer);
}
// }

// /usr/local/share/uno/Packages/Outracks.Simulator.Common.Uno/0.0.0/bytecode/$.uno
// --------------------------------------------------------------------------------

// public sealed class IsType :226
// {
static void IsType_build(uType* type)
{
    type->SetFields(0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Outracks::Simulator::Bytecode::IsType, IncludeSubtypes), 0,
        ::g::Outracks::Simulator::Bytecode::Expression_typeof(), offsetof(::g::Outracks::Simulator::Bytecode::IsType, Object), 0,
        ::g::Outracks::Simulator::Bytecode::TypeName_typeof(), offsetof(::g::Outracks::Simulator::Bytecode::IsType, Type), 0);
    type->Reflection.SetFields(3,
        new uField("IncludeSubtypes", 0),
        new uField("Object", 1),
        new uField("Type", 2));
    type->Reflection.SetFunctions(3,
        new uFunction(".ctor", NULL, (void*)IsType__New1_fn, 0, true, type, 3, ::g::Outracks::Simulator::Bytecode::Expression_typeof(), ::g::Outracks::Simulator::Bytecode::TypeName_typeof(), ::g::Uno::Bool_typeof()),
        new uFunction("Read", NULL, (void*)IsType__Read2_fn, 0, true, type, 1, ::g::System::IO::BinaryReader_typeof()),
        new uFunction("Write", NULL, (void*)IsType__Write2_fn, 0, true, uVoid_typeof(), 2, type, ::g::System::IO::BinaryWriter_typeof()));
}

::g::Outracks::Simulator::Bytecode::Expression_type* IsType_typeof()
{
    static uSStrong< ::g::Outracks::Simulator::Bytecode::Expression_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Outracks::Simulator::Bytecode::Expression_typeof();
    options.FieldCount = 3;
    options.ObjectSize = sizeof(IsType);
    options.TypeSize = sizeof(::g::Outracks::Simulator::Bytecode::Expression_type);
    type = (::g::Outracks::Simulator::Bytecode::Expression_type*)uClassType::New("Outracks.Simulator.Bytecode.IsType", options);
    type->fp_build_ = IsType_build;
    type->fp_get_ExpressionId = (void(*)(::g::Outracks::Simulator::Bytecode::Expression*, uChar*))IsType__get_ExpressionId_fn;
    type->fp_WriteExpression = (void(*)(::g::Outracks::Simulator::Bytecode::Expression*, ::g::System::IO::BinaryWriter*))IsType__WriteExpression_fn;
    return type;
}

// public IsType(Outracks.Simulator.Bytecode.Expression o, Outracks.Simulator.Bytecode.TypeName type, [bool includeSubtypes]) :234
void IsType__ctor_2_fn(IsType* __this, ::g::Outracks::Simulator::Bytecode::Expression* o, ::g::Outracks::Simulator::Bytecode::TypeName* type, bool* includeSubtypes)
{
    __this->ctor_2(o, type, *includeSubtypes);
}

// public override sealed char get_ExpressionId() :232
void IsType__get_ExpressionId_fn(IsType* __this, uChar* __retval)
{
    return *__retval = 'e', void();
}

// public IsType New(Outracks.Simulator.Bytecode.Expression o, Outracks.Simulator.Bytecode.TypeName type, [bool includeSubtypes]) :234
void IsType__New1_fn(::g::Outracks::Simulator::Bytecode::Expression* o, ::g::Outracks::Simulator::Bytecode::TypeName* type, bool* includeSubtypes, IsType** __retval)
{
    *__retval = IsType::New1(o, type, *includeSubtypes);
}

// public static new Outracks.Simulator.Bytecode.IsType Read(System.IO.BinaryReader reader) :253
void IsType__Read2_fn(::g::System::IO::BinaryReader* reader, IsType** __retval)
{
    *__retval = IsType::Read2(reader);
}

// public static void Write(Outracks.Simulator.Bytecode.IsType o, System.IO.BinaryWriter writer) :241
void IsType__Write2_fn(IsType* o, ::g::System::IO::BinaryWriter* writer)
{
    IsType::Write2(o, writer);
}

// protected override sealed void WriteExpression(System.IO.BinaryWriter writer) :246
void IsType__WriteExpression_fn(IsType* __this, ::g::System::IO::BinaryWriter* writer)
{
    uStackFrame __("Outracks.Simulator.Bytecode.IsType", "WriteExpression(System.IO.BinaryWriter)");
    ::g::Outracks::Simulator::Bytecode::Expression::Write1(__this->Object, writer);
    uPtr(::g::Outracks::Simulator::Bytecode::TypeName::Write())->Invoke(2, (::g::Outracks::Simulator::Bytecode::TypeName*)__this->Type, writer);
    uPtr(writer)->Write(__this->IncludeSubtypes);
}

// public IsType(Outracks.Simulator.Bytecode.Expression o, Outracks.Simulator.Bytecode.TypeName type, [bool includeSubtypes]) [instance] :234
void IsType::ctor_2(::g::Outracks::Simulator::Bytecode::Expression* o, ::g::Outracks::Simulator::Bytecode::TypeName* type, bool includeSubtypes)
{
    ctor_1();
    Object = o;
    Type = type;
    IncludeSubtypes = includeSubtypes;
}

// public IsType New(Outracks.Simulator.Bytecode.Expression o, Outracks.Simulator.Bytecode.TypeName type, [bool includeSubtypes]) [static] :234
IsType* IsType::New1(::g::Outracks::Simulator::Bytecode::Expression* o, ::g::Outracks::Simulator::Bytecode::TypeName* type, bool includeSubtypes)
{
    IsType* obj1 = (IsType*)uNew(IsType_typeof());
    obj1->ctor_2(o, type, includeSubtypes);
    return obj1;
}

// public static new Outracks.Simulator.Bytecode.IsType Read(System.IO.BinaryReader reader) [static] :253
IsType* IsType::Read2(::g::System::IO::BinaryReader* reader)
{
    uStackFrame __("Outracks.Simulator.Bytecode.IsType", "Read(System.IO.BinaryReader)");
    ::g::Outracks::Simulator::Bytecode::Expression* _Object = (::g::Outracks::Simulator::Bytecode::Expression*)uPtr(::g::Outracks::Simulator::Bytecode::Expression::Read1())->Invoke(1, reader);
    ::g::Outracks::Simulator::Bytecode::TypeName* _Type = (::g::Outracks::Simulator::Bytecode::TypeName*)uPtr(::g::Outracks::Simulator::Bytecode::TypeName::Read())->Invoke(1, reader);
    bool _IncludeSubtypes = uPtr(reader)->ReadBoolean();
    return IsType::New1(_Object, _Type, _IncludeSubtypes);
}

// public static void Write(Outracks.Simulator.Bytecode.IsType o, System.IO.BinaryWriter writer) [static] :241
void IsType::Write2(IsType* o, ::g::System::IO::BinaryWriter* writer)
{
    uStackFrame __("Outracks.Simulator.Bytecode.IsType", "Write(Outracks.Simulator.Bytecode.IsType,System.IO.BinaryWriter)");
    uPtr(o)->WriteExpression(writer);
}
// }

// /usr/local/share/uno/Packages/Outracks.Simulator.Common.Uno/0.0.0/bytecode/$.uno
// --------------------------------------------------------------------------------

// public sealed class Lambda :730
// {
static void Lambda_build(uType* type)
{
    ::STRINGS[10] = uString::Const("a");
    ::STRINGS[11] = uString::Const(";\n"
        "");
    ::STRINGS[12] = uString::Const("object");
    ::STRINGS[13] = uString::Const(" => \n"
        "");
    ::STRINGS[14] = uString::Const("{\n"
        "");
    ::STRINGS[15] = uString::Const("\n"
        "}");
    ::TYPES[25] = ::g::Outracks::Simulator::List_typeof()->MakeMethod(3/*ToImmutableList<Outracks.Simulator.Bytecode.BindVariable>*/, ::g::Outracks::Simulator::Bytecode::BindVariable_typeof(), NULL);
    ::TYPES[26] = ::g::Outracks::Simulator::List_typeof()->MakeMethod(3/*ToImmutableList<Outracks.Simulator.Bytecode.Statement>*/, ::g::Outracks::Simulator::Bytecode::Statement_typeof(), NULL);
    ::TYPES[27] = ::g::Outracks::Simulator::Bytecode::Variable_typeof()->Array();
    ::TYPES[28] = ::g::Uno::Runtime::Implementation::Internal::ArrayEnumerable_typeof()->MakeType(::g::Outracks::Simulator::Bytecode::BindVariable_typeof(), NULL);
    ::TYPES[29] = ::g::Outracks::Simulator::Bytecode::BindVariable_typeof()->Array();
    ::TYPES[30] = ::g::Uno::Runtime::Implementation::Internal::ArrayEnumerable_typeof()->MakeType(::g::Outracks::Simulator::Bytecode::Statement_typeof(), NULL);
    ::TYPES[31] = ::g::Outracks::Simulator::Bytecode::Statement_typeof()->Array();
    ::TYPES[32] = ::g::Outracks::Simulator::List_typeof()->MakeMethod(1/*Read<Outracks.Simulator.Bytecode.BindVariable>*/, ::g::Outracks::Simulator::Bytecode::BindVariable_typeof(), NULL);
    ::TYPES[33] = ::g::Outracks::Simulator::List_typeof()->MakeMethod(1/*Read<Outracks.Simulator.Bytecode.Statement>*/, ::g::Outracks::Simulator::Bytecode::Statement_typeof(), NULL);
    ::TYPES[34] = ::g::Uno::Collections::IEnumerator_typeof();
    ::TYPES[35] = ::g::Uno::Collections::IEnumerator1_typeof()->MakeType(::g::Outracks::Simulator::Bytecode::BindVariable_typeof(), NULL);
    ::TYPES[36] = ::g::Uno::Collections::IEnumerator1_typeof()->MakeType(::g::Outracks::Simulator::Bytecode::Statement_typeof(), NULL);
    ::TYPES[37] = ::g::Outracks::Simulator::List_typeof()->MakeMethod(6/*Write<Outracks.Simulator.Bytecode.BindVariable>*/, ::g::Outracks::Simulator::Bytecode::BindVariable_typeof(), NULL);
    ::TYPES[38] = ::g::Outracks::Simulator::List_typeof()->MakeMethod(6/*Write<Outracks.Simulator.Bytecode.Statement>*/, ::g::Outracks::Simulator::Bytecode::Statement_typeof(), NULL);
    ::TYPES[39] = ::g::Uno::Action2_typeof()->MakeType(::g::Outracks::Simulator::Bytecode::Statement_typeof(), ::g::System::IO::BinaryWriter_typeof(), NULL);
    type->SetFields(0,
        ::g::Outracks::Simulator::ImmutableList_typeof()->MakeType(::g::Outracks::Simulator::Bytecode::BindVariable_typeof(), NULL), offsetof(::g::Outracks::Simulator::Bytecode::Lambda, LocalVariables), 0,
        ::g::Outracks::Simulator::Bytecode::Signature_typeof(), offsetof(::g::Outracks::Simulator::Bytecode::Lambda, Signature), 0,
        ::g::Outracks::Simulator::ImmutableList_typeof()->MakeType(::g::Outracks::Simulator::Bytecode::Statement_typeof(), NULL), offsetof(::g::Outracks::Simulator::Bytecode::Lambda, Statements), 0,
        ::g::Uno::Int_typeof(), (uintptr_t)&::g::Outracks::Simulator::Bytecode::Lambda::fguid_, uFieldFlagsStatic);
    type->Reflection.SetFields(3,
        new uField("LocalVariables", 0),
        new uField("Signature", 1),
        new uField("Statements", 2));
    type->Reflection.SetFunctions(7,
        new uFunction("Action", NULL, (void*)Lambda__Action_fn, 0, true, type, 1, ::g::Uno::Func2_typeof()->MakeType(::g::Outracks::Simulator::Bytecode::Expression_typeof(), ::g::Outracks::Simulator::Bytecode::Expression_typeof(), ::g::Outracks::Simulator::Bytecode::Statement_typeof(), NULL)),
        new uFunction("Action", NULL, (void*)Lambda__Action1_fn, 0, true, type, 1, ::g::Uno::Func1_typeof()->MakeType(::g::Outracks::Simulator::Bytecode::Expression_typeof(), ::g::Outracks::Simulator::Bytecode::Statement_typeof(), NULL)),
        new uFunction("Func", NULL, (void*)Lambda__Func_fn, 0, true, type, 1, ::g::Uno::Func1_typeof()->MakeType(::g::Outracks::Simulator::Bytecode::Expression_typeof(), ::g::Outracks::Simulator::Bytecode::Statement_typeof(), NULL)),
        new uFunction(".ctor", NULL, (void*)Lambda__New1_fn, 0, true, type, 3, ::g::Outracks::Simulator::Bytecode::Signature_typeof(), ::g::Outracks::Simulator::ImmutableList_typeof()->MakeType(::g::Outracks::Simulator::Bytecode::BindVariable_typeof(), NULL), ::g::Outracks::Simulator::ImmutableList_typeof()->MakeType(::g::Outracks::Simulator::Bytecode::Statement_typeof(), NULL)),
        new uFunction(".ctor", NULL, (void*)Lambda__New2_fn, 0, true, type, 3, ::g::Outracks::Simulator::Bytecode::Signature_typeof(), ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Outracks::Simulator::Bytecode::BindVariable_typeof(), NULL), ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Outracks::Simulator::Bytecode::Statement_typeof(), NULL)),
        new uFunction("Read", NULL, (void*)Lambda__Read2_fn, 0, true, type, 1, ::g::System::IO::BinaryReader_typeof()),
        new uFunction("Write", NULL, (void*)Lambda__Write2_fn, 0, true, uVoid_typeof(), 2, type, ::g::System::IO::BinaryWriter_typeof()));
}

::g::Outracks::Simulator::Bytecode::Expression_type* Lambda_typeof()
{
    static uSStrong< ::g::Outracks::Simulator::Bytecode::Expression_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Outracks::Simulator::Bytecode::Expression_typeof();
    options.FieldCount = 4;
    options.ObjectSize = sizeof(Lambda);
    options.TypeSize = sizeof(::g::Outracks::Simulator::Bytecode::Expression_type);
    type = (::g::Outracks::Simulator::Bytecode::Expression_type*)uClassType::New("Outracks.Simulator.Bytecode.Lambda", options);
    type->fp_build_ = Lambda_build;
    type->fp_get_ExpressionId = (void(*)(::g::Outracks::Simulator::Bytecode::Expression*, uChar*))Lambda__get_ExpressionId_fn;
    type->fp_ToString = (void(*)(uObject*, uString**))Lambda__ToString_fn;
    type->fp_WriteExpression = (void(*)(::g::Outracks::Simulator::Bytecode::Expression*, ::g::System::IO::BinaryWriter*))Lambda__WriteExpression_fn;
    return type;
}

// public Lambda(Outracks.Simulator.Bytecode.Signature signature, Outracks.Simulator.ImmutableList<Outracks.Simulator.Bytecode.BindVariable> localVariables, Outracks.Simulator.ImmutableList<Outracks.Simulator.Bytecode.Statement> statements) :778
void Lambda__ctor_2_fn(Lambda* __this, ::g::Outracks::Simulator::Bytecode::Signature* signature, ::g::Outracks::Simulator::ImmutableList* localVariables, ::g::Outracks::Simulator::ImmutableList* statements)
{
    __this->ctor_2(signature, localVariables, statements);
}

// public Lambda(Outracks.Simulator.Bytecode.Signature signature, Uno.Collections.IEnumerable<Outracks.Simulator.Bytecode.BindVariable> localVariables, Uno.Collections.IEnumerable<Outracks.Simulator.Bytecode.Statement> statements) :771
void Lambda__ctor_3_fn(Lambda* __this, ::g::Outracks::Simulator::Bytecode::Signature* signature, uObject* localVariables, uObject* statements)
{
    __this->ctor_3(signature, localVariables, statements);
}

// public static Outracks.Simulator.Bytecode.Lambda Action(Uno.Func<Outracks.Simulator.Bytecode.Expression, Outracks.Simulator.Bytecode.Expression, Outracks.Simulator.Bytecode.Statement> body) :753
void Lambda__Action_fn(uDelegate* body, Lambda** __retval)
{
    *__retval = Lambda::Action(body);
}

// public static Outracks.Simulator.Bytecode.Lambda Action(Uno.Func<Outracks.Simulator.Bytecode.Expression, Outracks.Simulator.Bytecode.Statement> body) :735
void Lambda__Action1_fn(uDelegate* body, Lambda** __retval)
{
    *__retval = Lambda::Action1(body);
}

// private static string AddStatementSeparator(object s) :802
void Lambda__AddStatementSeparator_fn(uObject* s, uString** __retval)
{
    *__retval = Lambda::AddStatementSeparator(s);
}

// public override sealed char get_ExpressionId() :769
void Lambda__get_ExpressionId_fn(Lambda* __this, uChar* __retval)
{
    return *__retval = 'c', void();
}

// public static Outracks.Simulator.Bytecode.Lambda Func(Uno.Func<Outracks.Simulator.Bytecode.Expression, Outracks.Simulator.Bytecode.Statement> body) :744
void Lambda__Func_fn(uDelegate* body, Lambda** __retval)
{
    *__retval = Lambda::Func(body);
}

// public Lambda New(Outracks.Simulator.Bytecode.Signature signature, Outracks.Simulator.ImmutableList<Outracks.Simulator.Bytecode.BindVariable> localVariables, Outracks.Simulator.ImmutableList<Outracks.Simulator.Bytecode.Statement> statements) :778
void Lambda__New1_fn(::g::Outracks::Simulator::Bytecode::Signature* signature, ::g::Outracks::Simulator::ImmutableList* localVariables, ::g::Outracks::Simulator::ImmutableList* statements, Lambda** __retval)
{
    *__retval = Lambda::New1(signature, localVariables, statements);
}

// public Lambda New(Outracks.Simulator.Bytecode.Signature signature, Uno.Collections.IEnumerable<Outracks.Simulator.Bytecode.BindVariable> localVariables, Uno.Collections.IEnumerable<Outracks.Simulator.Bytecode.Statement> statements) :771
void Lambda__New2_fn(::g::Outracks::Simulator::Bytecode::Signature* signature, uObject* localVariables, uObject* statements, Lambda** __retval)
{
    *__retval = Lambda::New2(signature, localVariables, statements);
}

// public static new Outracks.Simulator.Bytecode.Lambda Read(System.IO.BinaryReader reader) :819
void Lambda__Read2_fn(::g::System::IO::BinaryReader* reader, Lambda** __retval)
{
    *__retval = Lambda::Read2(reader);
}

// public override sealed string ToString() :788
void Lambda__ToString_fn(Lambda* __this, uString** __retval)
{
    uStackFrame __("Outracks.Simulator.Bytecode.Lambda", "ToString()");
    ::g::Outracks::Simulator::Bytecode::BindVariable* ret5;
    ::g::Outracks::Simulator::Bytecode::Statement* ret6;
    ::g::Uno::Text::StringBuilder* code = ::g::Uno::Text::StringBuilder::New1();

    for (uObject* enum1 = (uObject*)uPtr(__this->LocalVariables)->GetEnumerator(); ::g::Uno::Collections::IEnumerator::MoveNext(uInterface(uPtr(enum1), ::TYPES[34/*Uno.Collections.IEnumerator*/])); )
    {
        ::g::Outracks::Simulator::Bytecode::BindVariable* stmnt = (::g::Uno::Collections::IEnumerator1::get_Current_ex(uInterface(uPtr(enum1), ::TYPES[35/*Uno.Collections.IEnumerator<Outracks.Simulator.Bytecode.BindVariable>*/]), &ret5), ret5);
        uPtr(code)->Append2(Lambda::AddStatementSeparator(stmnt));
    }

    for (uObject* enum2 = (uObject*)uPtr(__this->Statements)->GetEnumerator(); ::g::Uno::Collections::IEnumerator::MoveNext(uInterface(uPtr(enum2), ::TYPES[34/*Uno.Collections.IEnumerator*/])); )
    {
        ::g::Outracks::Simulator::Bytecode::Statement* stmnt1 = (::g::Uno::Collections::IEnumerator1::get_Current_ex(uInterface(uPtr(enum2), ::TYPES[36/*Uno.Collections.IEnumerator<Outracks.Simulator.Bytecode.Statement>*/]), &ret6), ret6);
        uPtr(code)->Append2(Lambda::AddStatementSeparator(stmnt1));
    }

    return *__retval = ::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition(__this->Signature, ::STRINGS[13/*" => \n"*/]), ::STRINGS[14/*"{\n"*/]), ::g::Outracks::Simulator::IndentString::Indent(code->ToString())), ::STRINGS[15/*"\n}"*/]), void();
}

// public static void Write(Outracks.Simulator.Bytecode.Lambda l, System.IO.BinaryWriter writer) :807
void Lambda__Write2_fn(Lambda* l, ::g::System::IO::BinaryWriter* writer)
{
    Lambda::Write2(l, writer);
}

// protected override sealed void WriteExpression(System.IO.BinaryWriter writer) :814
void Lambda__WriteExpression_fn(Lambda* __this, ::g::System::IO::BinaryWriter* writer)
{
    uStackFrame __("Outracks.Simulator.Bytecode.Lambda", "WriteExpression(System.IO.BinaryWriter)");
    Lambda::Write2(__this, writer);
}

int Lambda::fguid_;

// public Lambda(Outracks.Simulator.Bytecode.Signature signature, Outracks.Simulator.ImmutableList<Outracks.Simulator.Bytecode.BindVariable> localVariables, Outracks.Simulator.ImmutableList<Outracks.Simulator.Bytecode.Statement> statements) [instance] :778
void Lambda::ctor_2(::g::Outracks::Simulator::Bytecode::Signature* signature, ::g::Outracks::Simulator::ImmutableList* localVariables, ::g::Outracks::Simulator::ImmutableList* statements)
{
    ctor_1();
    Signature = signature;
    LocalVariables = localVariables;
    Statements = statements;
}

// public Lambda(Outracks.Simulator.Bytecode.Signature signature, Uno.Collections.IEnumerable<Outracks.Simulator.Bytecode.BindVariable> localVariables, Uno.Collections.IEnumerable<Outracks.Simulator.Bytecode.Statement> statements) [instance] :771
void Lambda::ctor_3(::g::Outracks::Simulator::Bytecode::Signature* signature, uObject* localVariables, uObject* statements)
{
    ctor_2(signature, (::g::Outracks::Simulator::ImmutableList*)::g::Outracks::Simulator::List::ToImmutableList(::TYPES[25/*Outracks.Simulator.List.ToImmutableList<Outracks.Simulator.Bytecode.BindVariable>*/], localVariables), (::g::Outracks::Simulator::ImmutableList*)::g::Outracks::Simulator::List::ToImmutableList(::TYPES[26/*Outracks.Simulator.List.ToImmutableList<Outracks.Simulator.Bytecode.Statement>*/], statements));
}

// public static Outracks.Simulator.Bytecode.Lambda Action(Uno.Func<Outracks.Simulator.Bytecode.Expression, Outracks.Simulator.Bytecode.Expression, Outracks.Simulator.Bytecode.Statement> body) [static] :753
Lambda* Lambda::Action(uDelegate* body)
{
    uStackFrame __("Outracks.Simulator.Bytecode.Lambda", "Action(Uno.Func<Outracks.Simulator.Bytecode.Expression, Outracks.Simulator.Bytecode.Expression, Outracks.Simulator.Bytecode.Statement>)");
    ::g::Outracks::Simulator::Bytecode::Variable* a = ::g::Outracks::Simulator::Bytecode::Variable::New1(::g::Uno::String::op_Addition1(::STRINGS[10/*"a"*/], uBox<int>(::g::Uno::Int_typeof(), Lambda::fguid_++)));
    ::g::Outracks::Simulator::Bytecode::Variable* b = ::g::Outracks::Simulator::Bytecode::Variable::New1(::g::Uno::String::op_Addition1(::STRINGS[10/*"a"*/], uBox<int>(::g::Uno::Int_typeof(), Lambda::fguid_++)));
    return Lambda::New2(::g::Outracks::Simulator::Bytecode::Signature::Action(uArray::Init< ::g::Outracks::Simulator::Bytecode::Variable*>(::TYPES[27/*Outracks.Simulator.Bytecode.Variable[]*/], 2, a, b)), (uObject*)((::g::Uno::Runtime::Implementation::Internal::ArrayEnumerable*)::g::Uno::Runtime::Implementation::Internal::ArrayEnumerable::New1(::TYPES[28/*Uno.Runtime.Implementation.Internal.ArrayEnumerable<Outracks.Simulator.Bytecode.BindVariable>*/], uArray::New(::TYPES[29/*Outracks.Simulator.Bytecode.BindVariable[]*/], 0))), (uObject*)((::g::Uno::Runtime::Implementation::Internal::ArrayEnumerable*)::g::Uno::Runtime::Implementation::Internal::ArrayEnumerable::New1(::TYPES[30/*Uno.Runtime.Implementation.Internal.ArrayEnumerable<Outracks.Simulator.Bytecode.Statement>*/], uArray::Init< ::g::Outracks::Simulator::Bytecode::Statement*>(::TYPES[31/*Outracks.Simulator.Bytecode.Statement[]*/], 1, (::g::Outracks::Simulator::Bytecode::Statement*)uPtr(body)->Invoke(2, (::g::Outracks::Simulator::Bytecode::ReadVariable*)::g::Outracks::Simulator::Bytecode::ReadVariable::New1(a), (::g::Outracks::Simulator::Bytecode::ReadVariable*)::g::Outracks::Simulator::Bytecode::ReadVariable::New1(b))))));
}

// public static Outracks.Simulator.Bytecode.Lambda Action(Uno.Func<Outracks.Simulator.Bytecode.Expression, Outracks.Simulator.Bytecode.Statement> body) [static] :735
Lambda* Lambda::Action1(uDelegate* body)
{
    uStackFrame __("Outracks.Simulator.Bytecode.Lambda", "Action(Uno.Func<Outracks.Simulator.Bytecode.Expression, Outracks.Simulator.Bytecode.Statement>)");
    ::g::Outracks::Simulator::Bytecode::Variable* a = ::g::Outracks::Simulator::Bytecode::Variable::New1(::g::Uno::String::op_Addition1(::STRINGS[10/*"a"*/], uBox<int>(::g::Uno::Int_typeof(), Lambda::fguid_++)));
    return Lambda::New2(::g::Outracks::Simulator::Bytecode::Signature::Action(uArray::Init< ::g::Outracks::Simulator::Bytecode::Variable*>(::TYPES[27/*Outracks.Simulator.Bytecode.Variable[]*/], 1, a)), (uObject*)((::g::Uno::Runtime::Implementation::Internal::ArrayEnumerable*)::g::Uno::Runtime::Implementation::Internal::ArrayEnumerable::New1(::TYPES[28/*Uno.Runtime.Implementation.Internal.ArrayEnumerable<Outracks.Simulator.Bytecode.BindVariable>*/], uArray::New(::TYPES[29/*Outracks.Simulator.Bytecode.BindVariable[]*/], 0))), (uObject*)((::g::Uno::Runtime::Implementation::Internal::ArrayEnumerable*)::g::Uno::Runtime::Implementation::Internal::ArrayEnumerable::New1(::TYPES[30/*Uno.Runtime.Implementation.Internal.ArrayEnumerable<Outracks.Simulator.Bytecode.Statement>*/], uArray::Init< ::g::Outracks::Simulator::Bytecode::Statement*>(::TYPES[31/*Outracks.Simulator.Bytecode.Statement[]*/], 1, (::g::Outracks::Simulator::Bytecode::Statement*)uPtr(body)->Invoke(1, (::g::Outracks::Simulator::Bytecode::ReadVariable*)::g::Outracks::Simulator::Bytecode::ReadVariable::New1(a))))));
}

// private static string AddStatementSeparator(object s) [static] :802
uString* Lambda::AddStatementSeparator(uObject* s)
{
    uStackFrame __("Outracks.Simulator.Bytecode.Lambda", "AddStatementSeparator(object)");
    return ::g::Uno::String::op_Addition(s, ::STRINGS[11/*";\n"*/]);
}

// public static Outracks.Simulator.Bytecode.Lambda Func(Uno.Func<Outracks.Simulator.Bytecode.Expression, Outracks.Simulator.Bytecode.Statement> body) [static] :744
Lambda* Lambda::Func(uDelegate* body)
{
    uStackFrame __("Outracks.Simulator.Bytecode.Lambda", "Func(Uno.Func<Outracks.Simulator.Bytecode.Expression, Outracks.Simulator.Bytecode.Statement>)");
    ::g::Outracks::Simulator::Bytecode::Variable* a = ::g::Outracks::Simulator::Bytecode::Variable::New1(::g::Uno::String::op_Addition1(::STRINGS[10/*"a"*/], uBox<int>(::g::Uno::Int_typeof(), Lambda::fguid_++)));
    return Lambda::New2(::g::Outracks::Simulator::Bytecode::Signature::Func(::g::Outracks::Simulator::Bytecode::TypeName::Parse(::STRINGS[12/*"object"*/]), uArray::Init< ::g::Outracks::Simulator::Bytecode::Variable*>(::TYPES[27/*Outracks.Simulator.Bytecode.Variable[]*/], 1, a)), (uObject*)((::g::Uno::Runtime::Implementation::Internal::ArrayEnumerable*)::g::Uno::Runtime::Implementation::Internal::ArrayEnumerable::New1(::TYPES[28/*Uno.Runtime.Implementation.Internal.ArrayEnumerable<Outracks.Simulator.Bytecode.BindVariable>*/], uArray::New(::TYPES[29/*Outracks.Simulator.Bytecode.BindVariable[]*/], 0))), (uObject*)((::g::Uno::Runtime::Implementation::Internal::ArrayEnumerable*)::g::Uno::Runtime::Implementation::Internal::ArrayEnumerable::New1(::TYPES[30/*Uno.Runtime.Implementation.Internal.ArrayEnumerable<Outracks.Simulator.Bytecode.Statement>*/], uArray::Init< ::g::Outracks::Simulator::Bytecode::Statement*>(::TYPES[31/*Outracks.Simulator.Bytecode.Statement[]*/], 1, (::g::Outracks::Simulator::Bytecode::Statement*)uPtr(body)->Invoke(1, (::g::Outracks::Simulator::Bytecode::ReadVariable*)::g::Outracks::Simulator::Bytecode::ReadVariable::New1(a))))));
}

// public Lambda New(Outracks.Simulator.Bytecode.Signature signature, Outracks.Simulator.ImmutableList<Outracks.Simulator.Bytecode.BindVariable> localVariables, Outracks.Simulator.ImmutableList<Outracks.Simulator.Bytecode.Statement> statements) [static] :778
Lambda* Lambda::New1(::g::Outracks::Simulator::Bytecode::Signature* signature, ::g::Outracks::Simulator::ImmutableList* localVariables, ::g::Outracks::Simulator::ImmutableList* statements)
{
    Lambda* obj4 = (Lambda*)uNew(Lambda_typeof());
    obj4->ctor_2(signature, localVariables, statements);
    return obj4;
}

// public Lambda New(Outracks.Simulator.Bytecode.Signature signature, Uno.Collections.IEnumerable<Outracks.Simulator.Bytecode.BindVariable> localVariables, Uno.Collections.IEnumerable<Outracks.Simulator.Bytecode.Statement> statements) [static] :771
Lambda* Lambda::New2(::g::Outracks::Simulator::Bytecode::Signature* signature, uObject* localVariables, uObject* statements)
{
    Lambda* obj3 = (Lambda*)uNew(Lambda_typeof());
    obj3->ctor_3(signature, localVariables, statements);
    return obj3;
}

// public static new Outracks.Simulator.Bytecode.Lambda Read(System.IO.BinaryReader reader) [static] :819
Lambda* Lambda::Read2(::g::System::IO::BinaryReader* reader)
{
    uStackFrame __("Outracks.Simulator.Bytecode.Lambda", "Read(System.IO.BinaryReader)");
    ::g::Outracks::Simulator::Bytecode::Signature* signature = (::g::Outracks::Simulator::Bytecode::Signature*)uPtr(::g::Outracks::Simulator::Bytecode::Signature::Read())->Invoke(1, reader);
    ::g::Outracks::Simulator::ImmutableList* localVariables = (::g::Outracks::Simulator::ImmutableList*)::g::Outracks::Simulator::List::Read(::TYPES[32/*Outracks.Simulator.List.Read<Outracks.Simulator.Bytecode.BindVariable>*/], reader, ::g::Outracks::Simulator::Bytecode::BindVariable::Read());
    ::g::Outracks::Simulator::ImmutableList* statements = (::g::Outracks::Simulator::ImmutableList*)::g::Outracks::Simulator::List::Read(::TYPES[33/*Outracks.Simulator.List.Read<Outracks.Simulator.Bytecode.Statement>*/], reader, ::g::Outracks::Simulator::Bytecode::Statement::Read());
    return Lambda::New1(signature, localVariables, statements);
}

// public static void Write(Outracks.Simulator.Bytecode.Lambda l, System.IO.BinaryWriter writer) [static] :807
void Lambda::Write2(Lambda* l, ::g::System::IO::BinaryWriter* writer)
{
    uStackFrame __("Outracks.Simulator.Bytecode.Lambda", "Write(Outracks.Simulator.Bytecode.Lambda,System.IO.BinaryWriter)");
    ::g::Outracks::Simulator::Bytecode::Signature::Write(uPtr(l)->Signature, writer);
    ::g::Outracks::Simulator::List::Write1(::TYPES[37/*Outracks.Simulator.List.Write<Outracks.Simulator.Bytecode.BindVariable>*/], writer, l->LocalVariables, ::g::Outracks::Simulator::Bytecode::BindVariable::Write());
    ::g::Outracks::Simulator::List::Write1(::TYPES[38/*Outracks.Simulator.List.Write<Outracks.Simulator.Bytecode.Statement>*/], writer, l->Statements, uDelegate::New(::TYPES[39/*Uno.Action<Outracks.Simulator.Bytecode.Statement, System.IO.BinaryWriter>*/], (void*)::g::Outracks::Simulator::Bytecode::Statement__Write_fn));
}
// }

// /usr/local/share/uno/Packages/Outracks.Simulator.Common.Uno/0.0.0/bytecode/$.uno
// --------------------------------------------------------------------------------

// public abstract class Literal :839
// {
static void Literal_build(uType* type)
{
    ::TYPES[40] = ::g::Outracks::Simulator::Bytecode::BooleanLiteral_typeof();
    ::TYPES[41] = ::g::Outracks::Simulator::Bytecode::StringLiteral_typeof();
    ::TYPES[42] = ::g::Outracks::Simulator::Bytecode::NumberLiteral_typeof();
    ::TYPES[43] = ::g::Outracks::Simulator::Bytecode::EnumLiteral_typeof();
    ::TYPES[44] = ::g::Outracks::Simulator::Bytecode::BlobLiteral_typeof();
    type->Reflection.SetFunctions(5,
        new uFunction("get_LiteralId", NULL, NULL, offsetof(Literal_type, fp_get_LiteralId), false, ::g::Uno::Char_typeof(), 0),
        new uFunction("Match", NULL, (void*)Literal__Match4_fn, 0, false, uVoid_typeof(), 5, ::g::Uno::Action1_typeof()->MakeType(::TYPES[40/*Outracks.Simulator.Bytecode.BooleanLiteral*/], NULL), ::g::Uno::Action1_typeof()->MakeType(::TYPES[41/*Outracks.Simulator.Bytecode.StringLiteral*/], NULL), ::g::Uno::Action1_typeof()->MakeType(::TYPES[42/*Outracks.Simulator.Bytecode.NumberLiteral*/], NULL), ::g::Uno::Action1_typeof()->MakeType(::TYPES[43/*Outracks.Simulator.Bytecode.EnumLiteral*/], NULL), ::g::Uno::Action1_typeof()->MakeType(::TYPES[44/*Outracks.Simulator.Bytecode.BlobLiteral*/], NULL)),
        new uFunction("Match`1", type->MethodTypes[0], (void*)Literal__Match5_fn, 0, false, type->MethodTypes[0]->U(0), 5, ::g::Uno::Func1_typeof()->MakeType(::TYPES[40/*Outracks.Simulator.Bytecode.BooleanLiteral*/], type->MethodTypes[0]->U(0), NULL), ::g::Uno::Func1_typeof()->MakeType(::TYPES[41/*Outracks.Simulator.Bytecode.StringLiteral*/], type->MethodTypes[0]->U(0), NULL), ::g::Uno::Func1_typeof()->MakeType(::TYPES[42/*Outracks.Simulator.Bytecode.NumberLiteral*/], type->MethodTypes[0]->U(0), NULL), ::g::Uno::Func1_typeof()->MakeType(::TYPES[43/*Outracks.Simulator.Bytecode.EnumLiteral*/], type->MethodTypes[0]->U(0), NULL), ::g::Uno::Func1_typeof()->MakeType(::TYPES[44/*Outracks.Simulator.Bytecode.BlobLiteral*/], type->MethodTypes[0]->U(0), NULL)),
        new uFunction("Read", NULL, (void*)Literal__Read2_fn, 0, true, type, 1, ::g::System::IO::BinaryReader_typeof()),
        new uFunction("Write", NULL, (void*)Literal__Write2_fn, 0, true, uVoid_typeof(), 2, type, ::g::System::IO::BinaryWriter_typeof()));
}

Literal_type* Literal_typeof()
{
    static uSStrong<Literal_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Outracks::Simulator::Bytecode::Expression_typeof();
    options.MethodTypeCount = 1;
    options.ObjectSize = sizeof(Literal);
    options.TypeSize = sizeof(Literal_type);
    type = (Literal_type*)uClassType::New("Outracks.Simulator.Bytecode.Literal", options);
    type->MethodTypes[0] = type->NewMethodType(1, 0);
    type->fp_build_ = Literal_build;
    type->fp_get_ExpressionId = (void(*)(::g::Outracks::Simulator::Bytecode::Expression*, uChar*))Literal__get_ExpressionId_fn;
    type->fp_WriteExpression = (void(*)(::g::Outracks::Simulator::Bytecode::Expression*, ::g::System::IO::BinaryWriter*))Literal__WriteExpression_fn;
    return type;
}

// protected generated Literal() :839
void Literal__ctor_2_fn(Literal* __this)
{
    __this->ctor_2();
}

// public override sealed char get_ExpressionId() :850
void Literal__get_ExpressionId_fn(Literal* __this, uChar* __retval)
{
    return *__retval = 'b', void();
}

// public void Match(Uno.Action<Outracks.Simulator.Bytecode.BooleanLiteral> a1, Uno.Action<Outracks.Simulator.Bytecode.StringLiteral> a2, Uno.Action<Outracks.Simulator.Bytecode.NumberLiteral> a3, Uno.Action<Outracks.Simulator.Bytecode.EnumLiteral> a4, Uno.Action<Outracks.Simulator.Bytecode.BlobLiteral> a5) :868
void Literal__Match4_fn(Literal* __this, uDelegate* a1, uDelegate* a2, uDelegate* a3, uDelegate* a4, uDelegate* a5)
{
    __this->Match4(a1, a2, a3, a4, a5);
}

// public T Match<T>(Uno.Func<Outracks.Simulator.Bytecode.BooleanLiteral, T> a1, Uno.Func<Outracks.Simulator.Bytecode.StringLiteral, T> a2, Uno.Func<Outracks.Simulator.Bytecode.NumberLiteral, T> a3, Uno.Func<Outracks.Simulator.Bytecode.EnumLiteral, T> a4, Uno.Func<Outracks.Simulator.Bytecode.BlobLiteral, T> a5) :852
void Literal__Match5_fn(Literal* __this, uType* __type, uDelegate* a1, uDelegate* a2, uDelegate* a3, uDelegate* a4, uDelegate* a5, uTRef __retval)
{
    uType* __types[] = {
        __type->U(0),
    };
    uStackFrame __("Outracks.Simulator.Bytecode.Literal", "Match`1(Uno.Func<Outracks.Simulator.Bytecode.BooleanLiteral, T>,Uno.Func<Outracks.Simulator.Bytecode.StringLiteral, T>,Uno.Func<Outracks.Simulator.Bytecode.NumberLiteral, T>,Uno.Func<Outracks.Simulator.Bytecode.EnumLiteral, T>,Uno.Func<Outracks.Simulator.Bytecode.BlobLiteral, T>)");
    uT ret1(__types[0], U_ALLOCA(__types[0]->ValueSize));
    uT ret2(__types[0], U_ALLOCA(__types[0]->ValueSize));
    uT ret3(__types[0], U_ALLOCA(__types[0]->ValueSize));
    uT ret4(__types[0], U_ALLOCA(__types[0]->ValueSize));
    uT ret5(__types[0], U_ALLOCA(__types[0]->ValueSize));
    Literal* self = __this;
    ::g::Outracks::Simulator::Bytecode::BooleanLiteral* t1 = uAs< ::g::Outracks::Simulator::Bytecode::BooleanLiteral*>(self, ::TYPES[40/*Outracks.Simulator.Bytecode.BooleanLiteral*/]);

    if (t1 != NULL)
        return __retval.Store((uPtr(a1)->Invoke(&ret1, 1, t1), ret1)), void();

    ::g::Outracks::Simulator::Bytecode::StringLiteral* t2 = uAs< ::g::Outracks::Simulator::Bytecode::StringLiteral*>(self, ::TYPES[41/*Outracks.Simulator.Bytecode.StringLiteral*/]);

    if (t2 != NULL)
        return __retval.Store((uPtr(a2)->Invoke(&ret2, 1, t2), ret2)), void();

    ::g::Outracks::Simulator::Bytecode::NumberLiteral* t3 = uAs< ::g::Outracks::Simulator::Bytecode::NumberLiteral*>(self, ::TYPES[42/*Outracks.Simulator.Bytecode.NumberLiteral*/]);

    if (t3 != NULL)
        return __retval.Store((uPtr(a3)->Invoke(&ret3, 1, t3), ret3)), void();

    ::g::Outracks::Simulator::Bytecode::EnumLiteral* t4 = uAs< ::g::Outracks::Simulator::Bytecode::EnumLiteral*>(self, ::TYPES[43/*Outracks.Simulator.Bytecode.EnumLiteral*/]);

    if (t4 != NULL)
        return __retval.Store((uPtr(a4)->Invoke(&ret4, 1, t4), ret4)), void();

    ::g::Outracks::Simulator::Bytecode::BlobLiteral* t5 = uAs< ::g::Outracks::Simulator::Bytecode::BlobLiteral*>(self, ::TYPES[44/*Outracks.Simulator.Bytecode.BlobLiteral*/]);

    if (t5 != NULL)
        return __retval.Store((uPtr(a5)->Invoke(&ret5, 1, t5), ret5)), void();

    U_THROW(::g::Outracks::Simulator::NonExhaustiveMatch::New4());
}

// public static new Outracks.Simulator.Bytecode.Literal Read(System.IO.BinaryReader reader) :895
void Literal__Read2_fn(::g::System::IO::BinaryReader* reader, Literal** __retval)
{
    *__retval = Literal::Read2(reader);
}

// public static void Write(Outracks.Simulator.Bytecode.Literal literal, System.IO.BinaryWriter writer) :884
void Literal__Write2_fn(Literal* literal, ::g::System::IO::BinaryWriter* writer)
{
    Literal::Write2(literal, writer);
}

// protected override sealed void WriteExpression(System.IO.BinaryWriter writer) :890
void Literal__WriteExpression_fn(Literal* __this, ::g::System::IO::BinaryWriter* writer)
{
    uStackFrame __("Outracks.Simulator.Bytecode.Literal", "WriteExpression(System.IO.BinaryWriter)");
    Literal::Write2(__this, writer);
}

// protected generated Literal() [instance] :839
void Literal::ctor_2()
{
    ctor_1();
}

// public void Match(Uno.Action<Outracks.Simulator.Bytecode.BooleanLiteral> a1, Uno.Action<Outracks.Simulator.Bytecode.StringLiteral> a2, Uno.Action<Outracks.Simulator.Bytecode.NumberLiteral> a3, Uno.Action<Outracks.Simulator.Bytecode.EnumLiteral> a4, Uno.Action<Outracks.Simulator.Bytecode.BlobLiteral> a5) [instance] :868
void Literal::Match4(uDelegate* a1, uDelegate* a2, uDelegate* a3, uDelegate* a4, uDelegate* a5)
{
    uStackFrame __("Outracks.Simulator.Bytecode.Literal", "Match(Uno.Action<Outracks.Simulator.Bytecode.BooleanLiteral>,Uno.Action<Outracks.Simulator.Bytecode.StringLiteral>,Uno.Action<Outracks.Simulator.Bytecode.NumberLiteral>,Uno.Action<Outracks.Simulator.Bytecode.EnumLiteral>,Uno.Action<Outracks.Simulator.Bytecode.BlobLiteral>)");
    Literal* self = this;
    ::g::Outracks::Simulator::Bytecode::BooleanLiteral* t1 = uAs< ::g::Outracks::Simulator::Bytecode::BooleanLiteral*>(self, ::TYPES[40/*Outracks.Simulator.Bytecode.BooleanLiteral*/]);

    if (t1 != NULL)
    {
        uPtr(a1)->InvokeVoid(t1);
        return;
    }

    ::g::Outracks::Simulator::Bytecode::StringLiteral* t2 = uAs< ::g::Outracks::Simulator::Bytecode::StringLiteral*>(self, ::TYPES[41/*Outracks.Simulator.Bytecode.StringLiteral*/]);

    if (t2 != NULL)
    {
        uPtr(a2)->InvokeVoid(t2);
        return;
    }

    ::g::Outracks::Simulator::Bytecode::NumberLiteral* t3 = uAs< ::g::Outracks::Simulator::Bytecode::NumberLiteral*>(self, ::TYPES[42/*Outracks.Simulator.Bytecode.NumberLiteral*/]);

    if (t3 != NULL)
    {
        uPtr(a3)->InvokeVoid(t3);
        return;
    }

    ::g::Outracks::Simulator::Bytecode::EnumLiteral* t4 = uAs< ::g::Outracks::Simulator::Bytecode::EnumLiteral*>(self, ::TYPES[43/*Outracks.Simulator.Bytecode.EnumLiteral*/]);

    if (t4 != NULL)
    {
        uPtr(a4)->InvokeVoid(t4);
        return;
    }

    ::g::Outracks::Simulator::Bytecode::BlobLiteral* t5 = uAs< ::g::Outracks::Simulator::Bytecode::BlobLiteral*>(self, ::TYPES[44/*Outracks.Simulator.Bytecode.BlobLiteral*/]);

    if (t5 != NULL)
    {
        uPtr(a5)->InvokeVoid(t5);
        return;
    }

    U_THROW(::g::Outracks::Simulator::NonExhaustiveMatch::New4());
}

// public static new Outracks.Simulator.Bytecode.Literal Read(System.IO.BinaryReader reader) [static] :895
Literal* Literal::Read2(::g::System::IO::BinaryReader* reader)
{
    uStackFrame __("Outracks.Simulator.Bytecode.Literal", "Read(System.IO.BinaryReader)");
    uChar token = uPtr(reader)->ReadChar();

    switch (token)
    {
        case 'b':
            return ::g::Outracks::Simulator::Bytecode::BooleanLiteral::Read3(reader);
        case 's':
            return ::g::Outracks::Simulator::Bytecode::StringLiteral::Read3(reader);
        case 'n':
            return ::g::Outracks::Simulator::Bytecode::NumberLiteral::Read3(reader);
        case 'e':
            return ::g::Outracks::Simulator::Bytecode::EnumLiteral::Read3(reader);
        case 'd':
            return ::g::Outracks::Simulator::Bytecode::BlobLiteral::Read3(reader);
    }

    U_THROW(::g::Outracks::Simulator::InvalidDataException::New4());
}

// public static void Write(Outracks.Simulator.Bytecode.Literal literal, System.IO.BinaryWriter writer) [static] :884
void Literal::Write2(Literal* literal, ::g::System::IO::BinaryWriter* writer)
{
    uStackFrame __("Outracks.Simulator.Bytecode.Literal", "Write(Outracks.Simulator.Bytecode.Literal,System.IO.BinaryWriter)");
    uPtr(writer)->Write2(uPtr(literal)->LiteralId());
    literal->WriteLiteral(writer);
}
// }

// /usr/local/share/uno/Packages/Outracks.Simulator.Common.Uno/0.0.0/bytecode/$.uno
// --------------------------------------------------------------------------------

// internal static class LiteralIdRegistry :915
// {
static void LiteralIdRegistry_build(uType* type)
{
}

uClassType* LiteralIdRegistry_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Outracks.Simulator.Bytecode.LiteralIdRegistry", options);
    type->fp_build_ = LiteralIdRegistry_build;
    return type;
}
// }

// /usr/local/share/uno/Packages/Outracks.Simulator.Common.Uno/0.0.0/bytecode/$.uno
// --------------------------------------------------------------------------------

// public sealed class LogicalOr :187
// {
static void LogicalOr_build(uType* type)
{
    ::STRINGS[6] = uString::Const("(");
    ::STRINGS[16] = uString::Const(" || ");
    ::STRINGS[8] = uString::Const(")");
    type->SetFields(0,
        ::g::Outracks::Simulator::Bytecode::Expression_typeof(), offsetof(::g::Outracks::Simulator::Bytecode::LogicalOr, Left), 0,
        ::g::Outracks::Simulator::Bytecode::Expression_typeof(), offsetof(::g::Outracks::Simulator::Bytecode::LogicalOr, Right), 0);
    type->Reflection.SetFields(2,
        new uField("Left", 0),
        new uField("Right", 1));
    type->Reflection.SetFunctions(3,
        new uFunction(".ctor", NULL, (void*)LogicalOr__New1_fn, 0, true, type, 2, ::g::Outracks::Simulator::Bytecode::Expression_typeof(), ::g::Outracks::Simulator::Bytecode::Expression_typeof()),
        new uFunction("Read", NULL, (void*)LogicalOr__Read2_fn, 0, true, type, 1, ::g::System::IO::BinaryReader_typeof()),
        new uFunction("Write", NULL, (void*)LogicalOr__Write2_fn, 0, true, uVoid_typeof(), 2, type, ::g::System::IO::BinaryWriter_typeof()));
}

::g::Outracks::Simulator::Bytecode::Expression_type* LogicalOr_typeof()
{
    static uSStrong< ::g::Outracks::Simulator::Bytecode::Expression_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Outracks::Simulator::Bytecode::Expression_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(LogicalOr);
    options.TypeSize = sizeof(::g::Outracks::Simulator::Bytecode::Expression_type);
    type = (::g::Outracks::Simulator::Bytecode::Expression_type*)uClassType::New("Outracks.Simulator.Bytecode.LogicalOr", options);
    type->fp_build_ = LogicalOr_build;
    type->fp_get_ExpressionId = (void(*)(::g::Outracks::Simulator::Bytecode::Expression*, uChar*))LogicalOr__get_ExpressionId_fn;
    type->fp_ToString = (void(*)(uObject*, uString**))LogicalOr__ToString_fn;
    type->fp_WriteExpression = (void(*)(::g::Outracks::Simulator::Bytecode::Expression*, ::g::System::IO::BinaryWriter*))LogicalOr__WriteExpression_fn;
    return type;
}

// public LogicalOr(Outracks.Simulator.Bytecode.Expression left, Outracks.Simulator.Bytecode.Expression right) :194
void LogicalOr__ctor_2_fn(LogicalOr* __this, ::g::Outracks::Simulator::Bytecode::Expression* left, ::g::Outracks::Simulator::Bytecode::Expression* right)
{
    __this->ctor_2(left, right);
}

// public override sealed char get_ExpressionId() :192
void LogicalOr__get_ExpressionId_fn(LogicalOr* __this, uChar* __retval)
{
    return *__retval = 'f', void();
}

// public LogicalOr New(Outracks.Simulator.Bytecode.Expression left, Outracks.Simulator.Bytecode.Expression right) :194
void LogicalOr__New1_fn(::g::Outracks::Simulator::Bytecode::Expression* left, ::g::Outracks::Simulator::Bytecode::Expression* right, LogicalOr** __retval)
{
    *__retval = LogicalOr::New1(left, right);
}

// public static new Outracks.Simulator.Bytecode.LogicalOr Read(System.IO.BinaryReader reader) :216
void LogicalOr__Read2_fn(::g::System::IO::BinaryReader* reader, LogicalOr** __retval)
{
    *__retval = LogicalOr::Read2(reader);
}

// public override sealed string ToString() :200
void LogicalOr__ToString_fn(LogicalOr* __this, uString** __retval)
{
    uStackFrame __("Outracks.Simulator.Bytecode.LogicalOr", "ToString()");
    return *__retval = ::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition1(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition1(::STRINGS[6/*"("*/], __this->Left), ::STRINGS[16/*" || "*/]), __this->Right), ::STRINGS[8/*")"*/]), void();
}

// public static void Write(Outracks.Simulator.Bytecode.LogicalOr o, System.IO.BinaryWriter writer) :205
void LogicalOr__Write2_fn(LogicalOr* o, ::g::System::IO::BinaryWriter* writer)
{
    LogicalOr::Write2(o, writer);
}

// protected override sealed void WriteExpression(System.IO.BinaryWriter writer) :210
void LogicalOr__WriteExpression_fn(LogicalOr* __this, ::g::System::IO::BinaryWriter* writer)
{
    uStackFrame __("Outracks.Simulator.Bytecode.LogicalOr", "WriteExpression(System.IO.BinaryWriter)");
    ::g::Outracks::Simulator::Bytecode::Expression::Write1(__this->Left, writer);
    ::g::Outracks::Simulator::Bytecode::Expression::Write1(__this->Right, writer);
}

// public LogicalOr(Outracks.Simulator.Bytecode.Expression left, Outracks.Simulator.Bytecode.Expression right) [instance] :194
void LogicalOr::ctor_2(::g::Outracks::Simulator::Bytecode::Expression* left, ::g::Outracks::Simulator::Bytecode::Expression* right)
{
    ctor_1();
    Left = left;
    Right = right;
}

// public LogicalOr New(Outracks.Simulator.Bytecode.Expression left, Outracks.Simulator.Bytecode.Expression right) [static] :194
LogicalOr* LogicalOr::New1(::g::Outracks::Simulator::Bytecode::Expression* left, ::g::Outracks::Simulator::Bytecode::Expression* right)
{
    LogicalOr* obj1 = (LogicalOr*)uNew(LogicalOr_typeof());
    obj1->ctor_2(left, right);
    return obj1;
}

// public static new Outracks.Simulator.Bytecode.LogicalOr Read(System.IO.BinaryReader reader) [static] :216
LogicalOr* LogicalOr::Read2(::g::System::IO::BinaryReader* reader)
{
    uStackFrame __("Outracks.Simulator.Bytecode.LogicalOr", "Read(System.IO.BinaryReader)");
    ::g::Outracks::Simulator::Bytecode::Expression* _Left = (::g::Outracks::Simulator::Bytecode::Expression*)uPtr(::g::Outracks::Simulator::Bytecode::Expression::Read1())->Invoke(1, reader);
    ::g::Outracks::Simulator::Bytecode::Expression* _Right = (::g::Outracks::Simulator::Bytecode::Expression*)uPtr(::g::Outracks::Simulator::Bytecode::Expression::Read1())->Invoke(1, reader);
    return LogicalOr::New1(_Left, _Right);
}

// public static void Write(Outracks.Simulator.Bytecode.LogicalOr o, System.IO.BinaryWriter writer) [static] :205
void LogicalOr::Write2(LogicalOr* o, ::g::System::IO::BinaryWriter* writer)
{
    uStackFrame __("Outracks.Simulator.Bytecode.LogicalOr", "Write(Outracks.Simulator.Bytecode.LogicalOr,System.IO.BinaryWriter)");
    uPtr(o)->WriteExpression(writer);
}
// }

// /usr/local/share/uno/Packages/Outracks.Simulator.Common.Uno/0.0.0/bytecode/$.uno
// --------------------------------------------------------------------------------

// public sealed class MethodGroup :1139
// {
static void MethodGroup_build(uType* type)
{
    ::STRINGS[17] = uString::Const("((");
    ::STRINGS[18] = uString::Const(")(");
    ::STRINGS[19] = uString::Const(").");
    ::STRINGS[8] = uString::Const(")");
    ::TYPES[45] = ::g::Outracks::Optional_typeof()->MakeMethod(1/*Read<Outracks.Simulator.Bytecode.Signature>*/, ::g::Outracks::Simulator::Bytecode::Signature_typeof(), NULL);
    ::TYPES[46] = ::g::Outracks::Optional_typeof()->MakeMethod(5/*Write<Outracks.Simulator.Bytecode.Signature>*/, ::g::Outracks::Simulator::Bytecode::Signature_typeof(), NULL);
    ::TYPES[47] = ::g::Uno::Action2_typeof()->MakeType(::g::Outracks::Simulator::Bytecode::Signature_typeof(), ::g::System::IO::BinaryWriter_typeof(), NULL);
    type->SetFields(0,
        ::g::Outracks::Simulator::Bytecode::TypeName_typeof(), offsetof(::g::Outracks::Simulator::Bytecode::MethodGroup, DelegateType), 0,
        ::g::Outracks::Simulator::Bytecode::TypeMemberName_typeof(), offsetof(::g::Outracks::Simulator::Bytecode::MethodGroup, MethodName), 0,
        ::g::Outracks::Optional1_typeof()->MakeType(::g::Outracks::Simulator::Bytecode::Signature_typeof(), NULL), (uintptr_t)0, uFieldFlagsConstrained,
        ::g::Outracks::Simulator::Bytecode::Expression_typeof(), offsetof(::g::Outracks::Simulator::Bytecode::MethodGroup, Object), 0);
    type->Reflection.SetFields(4,
        new uField("DelegateType", 0),
        new uField("MethodName", 1),
        new uField("MethodSignature", 2),
        new uField("Object", 3));
    type->Reflection.SetFunctions(3,
        new uFunction(".ctor", NULL, (void*)MethodGroup__New1_fn, 0, true, type, 4, ::g::Outracks::Simulator::Bytecode::Expression_typeof(), ::g::Outracks::Simulator::Bytecode::TypeMemberName_typeof(), ::g::Outracks::Optional1_typeof()->MakeType(::g::Outracks::Simulator::Bytecode::Signature_typeof(), NULL), ::g::Outracks::Simulator::Bytecode::TypeName_typeof()),
        new uFunction("Read", NULL, (void*)MethodGroup__Read2_fn, 0, true, type, 1, ::g::System::IO::BinaryReader_typeof()),
        new uFunction("Write", NULL, (void*)MethodGroup__Write2_fn, 0, true, uVoid_typeof(), 2, type, ::g::System::IO::BinaryWriter_typeof()));
}

::g::Outracks::Simulator::Bytecode::Expression_type* MethodGroup_typeof()
{
    static uSStrong< ::g::Outracks::Simulator::Bytecode::Expression_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Outracks::Simulator::Bytecode::Expression_typeof();
    options.FieldCount = 4;
    options.ObjectSize = sizeof(MethodGroup);
    options.TypeSize = sizeof(::g::Outracks::Simulator::Bytecode::Expression_type);
    type = (::g::Outracks::Simulator::Bytecode::Expression_type*)uClassType::New("Outracks.Simulator.Bytecode.MethodGroup", options);
    type->fp_build_ = MethodGroup_build;
    type->fp_get_ExpressionId = (void(*)(::g::Outracks::Simulator::Bytecode::Expression*, uChar*))MethodGroup__get_ExpressionId_fn;
    type->fp_ToString = (void(*)(uObject*, uString**))MethodGroup__ToString_fn;
    type->fp_WriteExpression = (void(*)(::g::Outracks::Simulator::Bytecode::Expression*, ::g::System::IO::BinaryWriter*))MethodGroup__WriteExpression_fn;
    return type;
}

// public MethodGroup(Outracks.Simulator.Bytecode.Expression o, Outracks.Simulator.Bytecode.TypeMemberName methodName, Outracks.Optional<Outracks.Simulator.Bytecode.Signature> methodSignature, Outracks.Simulator.Bytecode.TypeName delegateType) :1148
void MethodGroup__ctor_2_fn(MethodGroup* __this, ::g::Outracks::Simulator::Bytecode::Expression* o, ::g::Outracks::Simulator::Bytecode::TypeMemberName* methodName, ::g::Outracks::Optional1<uStrong< ::g::Outracks::Simulator::Bytecode::Signature*> >* methodSignature, ::g::Outracks::Simulator::Bytecode::TypeName* delegateType)
{
    __this->ctor_2(o, methodName, *methodSignature, delegateType);
}

// public override sealed char get_ExpressionId() :1146
void MethodGroup__get_ExpressionId_fn(MethodGroup* __this, uChar* __retval)
{
    return *__retval = 'd', void();
}

// public MethodGroup New(Outracks.Simulator.Bytecode.Expression o, Outracks.Simulator.Bytecode.TypeMemberName methodName, Outracks.Optional<Outracks.Simulator.Bytecode.Signature> methodSignature, Outracks.Simulator.Bytecode.TypeName delegateType) :1148
void MethodGroup__New1_fn(::g::Outracks::Simulator::Bytecode::Expression* o, ::g::Outracks::Simulator::Bytecode::TypeMemberName* methodName, ::g::Outracks::Optional1<uStrong< ::g::Outracks::Simulator::Bytecode::Signature*> >* methodSignature, ::g::Outracks::Simulator::Bytecode::TypeName* delegateType, MethodGroup** __retval)
{
    *__retval = MethodGroup::New1(o, methodName, *methodSignature, delegateType);
}

// public static new Outracks.Simulator.Bytecode.MethodGroup Read(System.IO.BinaryReader reader) :1174
void MethodGroup__Read2_fn(::g::System::IO::BinaryReader* reader, MethodGroup** __retval)
{
    *__retval = MethodGroup::Read2(reader);
}

// public override sealed string ToString() :1156
void MethodGroup__ToString_fn(MethodGroup* __this, uString** __retval)
{
    uStackFrame __("Outracks.Simulator.Bytecode.MethodGroup", "ToString()");
    return *__retval = ::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition1(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition1(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition1(::STRINGS[17/*"(("*/], __this->DelegateType), ::STRINGS[18/*")("*/]), __this->Object), ::STRINGS[19/*")."*/]), __this->MethodName), ::STRINGS[8/*")"*/]), void();
}

// public static void Write(Outracks.Simulator.Bytecode.MethodGroup l, System.IO.BinaryWriter writer) :1161
void MethodGroup__Write2_fn(MethodGroup* l, ::g::System::IO::BinaryWriter* writer)
{
    MethodGroup::Write2(l, writer);
}

// protected override sealed void WriteExpression(System.IO.BinaryWriter writer) :1169
void MethodGroup__WriteExpression_fn(MethodGroup* __this, ::g::System::IO::BinaryWriter* writer)
{
    uStackFrame __("Outracks.Simulator.Bytecode.MethodGroup", "WriteExpression(System.IO.BinaryWriter)");
    MethodGroup::Write2(__this, writer);
}

// public MethodGroup(Outracks.Simulator.Bytecode.Expression o, Outracks.Simulator.Bytecode.TypeMemberName methodName, Outracks.Optional<Outracks.Simulator.Bytecode.Signature> methodSignature, Outracks.Simulator.Bytecode.TypeName delegateType) [instance] :1148
void MethodGroup::ctor_2(::g::Outracks::Simulator::Bytecode::Expression* o, ::g::Outracks::Simulator::Bytecode::TypeMemberName* methodName, ::g::Outracks::Optional1<uStrong< ::g::Outracks::Simulator::Bytecode::Signature*> > methodSignature, ::g::Outracks::Simulator::Bytecode::TypeName* delegateType)
{
    ctor_1();
    Object = o;
    MethodName = methodName;
    MethodSignature().Value< ::g::Outracks::Optional1<uStrong< ::g::Outracks::Simulator::Bytecode::Signature*> > >() = methodSignature;
    DelegateType = delegateType;
}

// public MethodGroup New(Outracks.Simulator.Bytecode.Expression o, Outracks.Simulator.Bytecode.TypeMemberName methodName, Outracks.Optional<Outracks.Simulator.Bytecode.Signature> methodSignature, Outracks.Simulator.Bytecode.TypeName delegateType) [static] :1148
MethodGroup* MethodGroup::New1(::g::Outracks::Simulator::Bytecode::Expression* o, ::g::Outracks::Simulator::Bytecode::TypeMemberName* methodName, ::g::Outracks::Optional1<uStrong< ::g::Outracks::Simulator::Bytecode::Signature*> > methodSignature, ::g::Outracks::Simulator::Bytecode::TypeName* delegateType)
{
    MethodGroup* obj1 = (MethodGroup*)uNew(MethodGroup_typeof());
    obj1->ctor_2(o, methodName, methodSignature, delegateType);
    return obj1;
}

// public static new Outracks.Simulator.Bytecode.MethodGroup Read(System.IO.BinaryReader reader) [static] :1174
MethodGroup* MethodGroup::Read2(::g::System::IO::BinaryReader* reader)
{
    uStackFrame __("Outracks.Simulator.Bytecode.MethodGroup", "Read(System.IO.BinaryReader)");
    ::g::Outracks::Optional1<uStrong< ::g::Outracks::Simulator::Bytecode::Signature*> > ret2;
    ::g::Outracks::Simulator::Bytecode::Expression* a = (::g::Outracks::Simulator::Bytecode::Expression*)uPtr(::g::Outracks::Simulator::Bytecode::Expression::Read1())->Invoke(1, reader);
    ::g::Outracks::Simulator::Bytecode::TypeMemberName* b = ::g::Outracks::Simulator::Bytecode::TypeMemberName::Read(reader);
    ::g::Outracks::Optional1<uStrong< ::g::Outracks::Simulator::Bytecode::Signature*> > c = (::g::Outracks::Optional__Read_fn(::TYPES[45/*Outracks.Optional.Read<Outracks.Simulator.Bytecode.Signature>*/], reader, ::g::Outracks::Simulator::Bytecode::Signature::Read(), &ret2), ret2);
    ::g::Outracks::Simulator::Bytecode::TypeName* d = (::g::Outracks::Simulator::Bytecode::TypeName*)uPtr(::g::Outracks::Simulator::Bytecode::TypeName::Read())->Invoke(1, reader);
    return MethodGroup::New1(a, b, c, d);
}

// public static void Write(Outracks.Simulator.Bytecode.MethodGroup l, System.IO.BinaryWriter writer) [static] :1161
void MethodGroup::Write2(MethodGroup* l, ::g::System::IO::BinaryWriter* writer)
{
    uStackFrame __("Outracks.Simulator.Bytecode.MethodGroup", "Write(Outracks.Simulator.Bytecode.MethodGroup,System.IO.BinaryWriter)");
    ::g::Outracks::Simulator::Bytecode::Expression::Write1(uPtr(l)->Object, writer);
    ::g::Outracks::Simulator::Bytecode::TypeMemberName::Write(l->MethodName, writer);
    ::g::Outracks::Optional__Write1_fn(::TYPES[46/*Outracks.Optional.Write<Outracks.Simulator.Bytecode.Signature>*/], writer, uCRef(l->MethodSignature().Value< ::g::Outracks::Optional1<uStrong< ::g::Outracks::Simulator::Bytecode::Signature*> > >()), uDelegate::New(::TYPES[47/*Uno.Action<Outracks.Simulator.Bytecode.Signature, System.IO.BinaryWriter>*/], (void*)::g::Outracks::Simulator::Bytecode::Signature__Write_fn));
    uPtr(::g::Outracks::Simulator::Bytecode::TypeName::Write())->Invoke(2, (::g::Outracks::Simulator::Bytecode::TypeName*)l->DelegateType, writer);
}
// }

// /usr/local/share/uno/Packages/Outracks.Simulator.Common.Uno/0.0.0/bytecode/$.uno
// --------------------------------------------------------------------------------

// public sealed class NamespaceName :1196
// {
// static NamespaceName() :1196
static void NamespaceName__cctor__fn(uType* __type)
{
    NamespaceName::Write_ = uDelegate::New(::TYPES[48/*Uno.Action<Outracks.Simulator.Bytecode.NamespaceName, System.IO.BinaryWriter>*/], (void*)NamespaceName___Write_fn);
    NamespaceName::Read_ = uDelegate::New(::TYPES[49/*Uno.Func<System.IO.BinaryReader, Outracks.Simulator.Bytecode.NamespaceName>*/], (void*)NamespaceName___Read_fn);
}

static void NamespaceName_build(uType* type)
{
    ::TYPES[48] = ::g::Uno::Action2_typeof()->MakeType(type, ::g::System::IO::BinaryWriter_typeof(), NULL);
    ::TYPES[49] = ::g::Uno::Func1_typeof()->MakeType(::g::System::IO::BinaryReader_typeof(), type, NULL);
    type->SetFields(0,
        ::g::Uno::String_typeof(), offsetof(::g::Outracks::Simulator::Bytecode::NamespaceName, FullName), 0,
        ::TYPES[49/*Uno.Func<System.IO.BinaryReader, Outracks.Simulator.Bytecode.NamespaceName>*/], (uintptr_t)&::g::Outracks::Simulator::Bytecode::NamespaceName::Read_, uFieldFlagsStatic,
        ::TYPES[48/*Uno.Action<Outracks.Simulator.Bytecode.NamespaceName, System.IO.BinaryWriter>*/], (uintptr_t)&::g::Outracks::Simulator::Bytecode::NamespaceName::Write_, uFieldFlagsStatic);
    type->Reflection.SetFields(3,
        new uField("FullName", 0),
        new uField("Read", 1),
        new uField("Write", 2));
    type->Reflection.SetFunctions(4,
        new uFunction("_Read", NULL, (void*)NamespaceName___Read_fn, 0, true, type, 1, ::g::System::IO::BinaryReader_typeof()),
        new uFunction("_Write", NULL, (void*)NamespaceName___Write_fn, 0, true, uVoid_typeof(), 2, type, ::g::System::IO::BinaryWriter_typeof()),
        new uFunction("Equals", NULL, (void*)NamespaceName__Equals2_fn, 0, false, ::g::Uno::Bool_typeof(), 1, type),
        new uFunction(".ctor", NULL, (void*)NamespaceName__New1_fn, 0, true, type, 1, ::g::Uno::String_typeof()));
}

uType* NamespaceName_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.ObjectSize = sizeof(NamespaceName);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Outracks.Simulator.Bytecode.NamespaceName", options);
    type->fp_build_ = NamespaceName_build;
    type->fp_cctor_ = NamespaceName__cctor__fn;
    type->fp_Equals = (void(*)(uObject*, uObject*, bool*))NamespaceName__Equals_fn;
    type->fp_GetHashCode = (void(*)(uObject*, int*))NamespaceName__GetHashCode_fn;
    type->fp_ToString = (void(*)(uObject*, uString**))NamespaceName__ToString_fn;
    return type;
}

// public NamespaceName(string fullName) :1199
void NamespaceName__ctor__fn(NamespaceName* __this, uString* fullName)
{
    __this->ctor_(fullName);
}

// public static Outracks.Simulator.Bytecode.NamespaceName _Read(System.IO.BinaryReader reader) :1247
void NamespaceName___Read_fn(::g::System::IO::BinaryReader* reader, NamespaceName** __retval)
{
    *__retval = NamespaceName::_Read(reader);
}

// public static void _Write(Outracks.Simulator.Bytecode.NamespaceName name, System.IO.BinaryWriter writer) :1240
void NamespaceName___Write_fn(NamespaceName* name, ::g::System::IO::BinaryWriter* writer)
{
    NamespaceName::_Write(name, writer);
}

// public override sealed bool Equals(object obj) :1211
void NamespaceName__Equals_fn(NamespaceName* __this, uObject* obj, bool* __retval)
{
    uStackFrame __("Outracks.Simulator.Bytecode.NamespaceName", "Equals(object)");

    if (::g::Uno::Object::ReferenceEquals(NULL, obj))
        return *__retval = false, void();

    if (::g::Uno::Object::ReferenceEquals(__this, obj))
        return *__retval = true, void();

    return *__retval = uIs(obj, __this->__type) && __this->Equals2(uCast<NamespaceName*>(obj, __this->__type)), void();
}

// public bool Equals(Outracks.Simulator.Bytecode.NamespaceName other) :1204
void NamespaceName__Equals2_fn(NamespaceName* __this, NamespaceName* other, bool* __retval)
{
    *__retval = __this->Equals2(other);
}

// public override sealed int GetHashCode() :1218
void NamespaceName__GetHashCode_fn(NamespaceName* __this, int* __retval)
{
    uStackFrame __("Outracks.Simulator.Bytecode.NamespaceName", "GetHashCode()");
    return *__retval = ::g::Uno::String::op_Inequality(__this->FullName, NULL) ? uPtr(__this->FullName)->GetHashCode() : 0, void();
}

// public NamespaceName New(string fullName) :1199
void NamespaceName__New1_fn(uString* fullName, NamespaceName** __retval)
{
    *__retval = NamespaceName::New1(fullName);
}

// public static operator ==(Outracks.Simulator.Bytecode.NamespaceName left, Outracks.Simulator.Bytecode.NamespaceName right) :1223
void NamespaceName__op_Equality_fn(NamespaceName* left, NamespaceName* right, bool* __retval)
{
    *__retval = NamespaceName::op_Equality(left, right);
}

// public static operator !=(Outracks.Simulator.Bytecode.NamespaceName left, Outracks.Simulator.Bytecode.NamespaceName right) :1228
void NamespaceName__op_Inequality_fn(NamespaceName* left, NamespaceName* right, bool* __retval)
{
    *__retval = NamespaceName::op_Inequality(left, right);
}

// public override sealed string ToString() :1233
void NamespaceName__ToString_fn(NamespaceName* __this, uString** __retval)
{
    return *__retval = __this->FullName, void();
}

uSStrong<uDelegate*> NamespaceName::Read_;
uSStrong<uDelegate*> NamespaceName::Write_;

// public NamespaceName(string fullName) [instance] :1199
void NamespaceName::ctor_(uString* fullName)
{
    FullName = fullName;
}

// public bool Equals(Outracks.Simulator.Bytecode.NamespaceName other) [instance] :1204
bool NamespaceName::Equals2(NamespaceName* other)
{
    uStackFrame __("Outracks.Simulator.Bytecode.NamespaceName", "Equals(Outracks.Simulator.Bytecode.NamespaceName)");

    if (::g::Uno::Object::ReferenceEquals(NULL, other))
        return false;

    if (::g::Uno::Object::ReferenceEquals(this, other))
        return true;

    return ::g::Uno::String::Equals3(FullName, uPtr(other)->FullName);
}

// public static Outracks.Simulator.Bytecode.NamespaceName _Read(System.IO.BinaryReader reader) [static] :1247
NamespaceName* NamespaceName::_Read(::g::System::IO::BinaryReader* reader)
{
    uStackFrame __("Outracks.Simulator.Bytecode.NamespaceName", "_Read(System.IO.BinaryReader)");
    NamespaceName_typeof()->Init();
    return NamespaceName::New1(uPtr(reader)->ReadString());
}

// public static void _Write(Outracks.Simulator.Bytecode.NamespaceName name, System.IO.BinaryWriter writer) [static] :1240
void NamespaceName::_Write(NamespaceName* name, ::g::System::IO::BinaryWriter* writer)
{
    uStackFrame __("Outracks.Simulator.Bytecode.NamespaceName", "_Write(Outracks.Simulator.Bytecode.NamespaceName,System.IO.BinaryWriter)");
    NamespaceName_typeof()->Init();
    uPtr(writer)->Write6(uPtr(name)->FullName);
}

// public NamespaceName New(string fullName) [static] :1199
NamespaceName* NamespaceName::New1(uString* fullName)
{
    NamespaceName* obj1 = (NamespaceName*)uNew(NamespaceName_typeof());
    obj1->ctor_(fullName);
    return obj1;
}

// public static operator ==(Outracks.Simulator.Bytecode.NamespaceName left, Outracks.Simulator.Bytecode.NamespaceName right) [static] :1223
bool NamespaceName::op_Equality(NamespaceName* left, NamespaceName* right)
{
    uStackFrame __("Outracks.Simulator.Bytecode.NamespaceName", "==(Outracks.Simulator.Bytecode.NamespaceName,Outracks.Simulator.Bytecode.NamespaceName)");
    NamespaceName_typeof()->Init();
    return ::g::Uno::Object::Equals1(left, right);
}

// public static operator !=(Outracks.Simulator.Bytecode.NamespaceName left, Outracks.Simulator.Bytecode.NamespaceName right) [static] :1228
bool NamespaceName::op_Inequality(NamespaceName* left, NamespaceName* right)
{
    uStackFrame __("Outracks.Simulator.Bytecode.NamespaceName", "!=(Outracks.Simulator.Bytecode.NamespaceName,Outracks.Simulator.Bytecode.NamespaceName)");
    NamespaceName_typeof()->Init();
    return !::g::Uno::Object::Equals1(left, right);
}
// }

// /usr/local/share/uno/Packages/Outracks.Simulator.Common.Uno/0.0.0/bytecode/$.uno
// --------------------------------------------------------------------------------

// public sealed class NoOperation :1674
// {
static void NoOperation_build(uType* type)
{
    ::STRINGS[20] = uString::Const("// ");
    ::TYPES[50] = ::g::Outracks::Optional_typeof()->MakeMethod(1/*Read<string>*/, ::g::Uno::String_typeof(), NULL);
    ::TYPES[51] = ::g::Outracks::Optional_typeof()->MakeMethod(6/*Write<string>*/, ::g::Uno::String_typeof(), NULL);
    ::TYPES[52] = ::g::Uno::Action1_typeof()->MakeType(::g::Uno::String_typeof(), NULL);
    type->SetFields(0,
        ::g::Outracks::Optional1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), (uintptr_t)0, uFieldFlagsConstrained);
    type->Reflection.SetFields(1,
        new uField("Description", 0));
    type->Reflection.SetFunctions(2,
        new uFunction(".ctor", NULL, (void*)NoOperation__New1_fn, 0, true, type, 1, ::g::Outracks::Optional1_typeof()->MakeType(::g::Uno::String_typeof(), NULL)),
        new uFunction("Read", NULL, (void*)NoOperation__Read1_fn, 0, true, type, 1, ::g::System::IO::BinaryReader_typeof()));
}

::g::Outracks::Simulator::Bytecode::Statement_type* NoOperation_typeof()
{
    static uSStrong< ::g::Outracks::Simulator::Bytecode::Statement_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Outracks::Simulator::Bytecode::Statement_typeof();
    options.FieldCount = 1;
    options.ObjectSize = sizeof(NoOperation);
    options.TypeSize = sizeof(::g::Outracks::Simulator::Bytecode::Statement_type);
    type = (::g::Outracks::Simulator::Bytecode::Statement_type*)uClassType::New("Outracks.Simulator.Bytecode.NoOperation", options);
    type->fp_build_ = NoOperation_build;
    type->fp_get_StatementId = (void(*)(::g::Outracks::Simulator::Bytecode::Statement*, uChar*))NoOperation__get_StatementId_fn;
    type->fp_ToString = (void(*)(uObject*, uString**))NoOperation__ToString_fn;
    type->fp_WriteStatement = (void(*)(::g::Outracks::Simulator::Bytecode::Statement*, ::g::System::IO::BinaryWriter*))NoOperation__WriteStatement_fn;
    return type;
}

// public NoOperation([Outracks.Optional<string> description]) :1678
void NoOperation__ctor_1_fn(NoOperation* __this, ::g::Outracks::Optional1<uStrong<uString*> >* description)
{
    __this->ctor_1(*description);
}

// public NoOperation New([Outracks.Optional<string> description]) :1678
void NoOperation__New1_fn(::g::Outracks::Optional1<uStrong<uString*> >* description, NoOperation** __retval)
{
    *__retval = NoOperation::New1(*description);
}

// public static new Outracks.Simulator.Bytecode.NoOperation Read(System.IO.BinaryReader reader) :1693
void NoOperation__Read1_fn(::g::System::IO::BinaryReader* reader, NoOperation** __retval)
{
    *__retval = NoOperation::Read1(reader);
}

// public override sealed char get_StatementId() :1698
void NoOperation__get_StatementId_fn(NoOperation* __this, uChar* __retval)
{
    return *__retval = 'n', void();
}

// public override sealed string ToString() :1683
void NoOperation__ToString_fn(NoOperation* __this, uString** __retval)
{
    uStackFrame __("Outracks.Simulator.Bytecode.NoOperation", "ToString()");
    return *__retval = ::g::Uno::String::op_Addition1(::STRINGS[20/*"// "*/], uBox(::TYPES[89/*Outracks.Optional<string>*/], __this->Description().Value< ::g::Outracks::Optional1<uStrong<uString*> > >())), void();
}

// protected override sealed void WriteStatement(System.IO.BinaryWriter writer) :1688
void NoOperation__WriteStatement_fn(NoOperation* __this, ::g::System::IO::BinaryWriter* writer)
{
    uStackFrame __("Outracks.Simulator.Bytecode.NoOperation", "WriteStatement(System.IO.BinaryWriter)");
    ::g::Outracks::Optional__Write2_fn(::TYPES[51/*Outracks.Optional.Write<string>*/], writer, uCRef(__this->Description().Value< ::g::Outracks::Optional1<uStrong<uString*> > >()), uDelegate::New(::TYPES[52/*Uno.Action<string>*/], (void*)::g::System::IO::BinaryWriter__Write6_fn, uPtr(writer)));
}

// public NoOperation([Outracks.Optional<string> description]) [instance] :1678
void NoOperation::ctor_1(::g::Outracks::Optional1<uStrong<uString*> > description)
{
    ctor_();
    Description().Value< ::g::Outracks::Optional1<uStrong<uString*> > >() = description;
}

// public NoOperation New([Outracks.Optional<string> description]) [static] :1678
NoOperation* NoOperation::New1(::g::Outracks::Optional1<uStrong<uString*> > description)
{
    NoOperation* obj1 = (NoOperation*)uNew(NoOperation_typeof());
    obj1->ctor_1(description);
    return obj1;
}

// public static new Outracks.Simulator.Bytecode.NoOperation Read(System.IO.BinaryReader reader) [static] :1693
NoOperation* NoOperation::Read1(::g::System::IO::BinaryReader* reader)
{
    uStackFrame __("Outracks.Simulator.Bytecode.NoOperation", "Read(System.IO.BinaryReader)");
    ::g::Outracks::Optional1<uStrong<uString*> > ret2;
    return NoOperation::New1((::g::Outracks::Optional__Read_fn(::TYPES[50/*Outracks.Optional.Read<string>*/], reader, ::g::Outracks::Simulator::Serialization::ReadString(), &ret2), ret2));
}
// }

// /usr/local/share/uno/Packages/Outracks.Simulator.Common.Uno/0.0.0/bytecode/$.uno
// --------------------------------------------------------------------------------

// public sealed class NumberLiteral :1058
// {
static void NumberLiteral_build(uType* type)
{
    ::TYPES[53] = ::g::Uno::Double_typeof();
    type->SetFields(0,
        ::TYPES[53/*double*/], offsetof(::g::Outracks::Simulator::Bytecode::NumberLiteral, DoubleValue), 0,
        ::g::Outracks::Simulator::Bytecode::NumberType_typeof(), offsetof(::g::Outracks::Simulator::Bytecode::NumberLiteral, NumberType), 0);
    type->Reflection.SetFields(2,
        new uField("DoubleValue", 0),
        new uField("NumberType", 1));
    type->Reflection.SetFunctions(3,
        new uFunction(".ctor", NULL, (void*)NumberLiteral__New1_fn, 0, true, type, 2, ::g::Outracks::Simulator::Bytecode::NumberType_typeof(), ::TYPES[53/*double*/]),
        new uFunction("Read", NULL, (void*)NumberLiteral__Read3_fn, 0, true, type, 1, ::g::System::IO::BinaryReader_typeof()),
        new uFunction("Write", NULL, (void*)NumberLiteral__Write3_fn, 0, true, uVoid_typeof(), 2, type, ::g::System::IO::BinaryWriter_typeof()));
}

::g::Outracks::Simulator::Bytecode::Literal_type* NumberLiteral_typeof()
{
    static uSStrong< ::g::Outracks::Simulator::Bytecode::Literal_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Outracks::Simulator::Bytecode::Literal_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(NumberLiteral);
    options.TypeSize = sizeof(::g::Outracks::Simulator::Bytecode::Literal_type);
    type = (::g::Outracks::Simulator::Bytecode::Literal_type*)uClassType::New("Outracks.Simulator.Bytecode.NumberLiteral", options);
    type->fp_build_ = NumberLiteral_build;
    type->fp_get_LiteralId = (void(*)(::g::Outracks::Simulator::Bytecode::Literal*, uChar*))NumberLiteral__get_LiteralId_fn;
    type->fp_ToString = (void(*)(uObject*, uString**))NumberLiteral__ToString_fn;
    type->fp_WriteLiteral = (void(*)(::g::Outracks::Simulator::Bytecode::Literal*, ::g::System::IO::BinaryWriter*))NumberLiteral__WriteLiteral_fn;
    return type;
}

// public NumberLiteral(Outracks.Simulator.Bytecode.NumberType numberType, double doubleValue) :1065
void NumberLiteral__ctor_3_fn(NumberLiteral* __this, int* numberType, double* doubleValue)
{
    __this->ctor_3(*numberType, *doubleValue);
}

// public override sealed char get_LiteralId() :1063
void NumberLiteral__get_LiteralId_fn(NumberLiteral* __this, uChar* __retval)
{
    return *__retval = 'n', void();
}

// public NumberLiteral New(Outracks.Simulator.Bytecode.NumberType numberType, double doubleValue) :1065
void NumberLiteral__New1_fn(int* numberType, double* doubleValue, NumberLiteral** __retval)
{
    *__retval = NumberLiteral::New1(*numberType, *doubleValue);
}

// public static new Outracks.Simulator.Bytecode.NumberLiteral Read(System.IO.BinaryReader reader) :1087
void NumberLiteral__Read3_fn(::g::System::IO::BinaryReader* reader, NumberLiteral** __retval)
{
    *__retval = NumberLiteral::Read3(reader);
}

// public override sealed string ToString() :1071
void NumberLiteral__ToString_fn(NumberLiteral* __this, uString** __retval)
{
    uStackFrame __("Outracks.Simulator.Bytecode.NumberLiteral", "ToString()");
    double ind1;
    return *__retval = ::g::Uno::Double::ToString((ind1 = __this->DoubleValue, ind1), ::TYPES[53/*double*/]), void();
}

// public static void Write(Outracks.Simulator.Bytecode.NumberLiteral l, System.IO.BinaryWriter writer) :1076
void NumberLiteral__Write3_fn(NumberLiteral* l, ::g::System::IO::BinaryWriter* writer)
{
    NumberLiteral::Write3(l, writer);
}

// protected override sealed void WriteLiteral(System.IO.BinaryWriter writer) :1082
void NumberLiteral__WriteLiteral_fn(NumberLiteral* __this, ::g::System::IO::BinaryWriter* writer)
{
    uStackFrame __("Outracks.Simulator.Bytecode.NumberLiteral", "WriteLiteral(System.IO.BinaryWriter)");
    NumberLiteral::Write3(__this, writer);
}

// public NumberLiteral(Outracks.Simulator.Bytecode.NumberType numberType, double doubleValue) [instance] :1065
void NumberLiteral::ctor_3(int numberType, double doubleValue)
{
    ctor_2();
    DoubleValue = doubleValue;
    NumberType = numberType;
}

// public NumberLiteral New(Outracks.Simulator.Bytecode.NumberType numberType, double doubleValue) [static] :1065
NumberLiteral* NumberLiteral::New1(int numberType, double doubleValue)
{
    NumberLiteral* obj2 = (NumberLiteral*)uNew(NumberLiteral_typeof());
    obj2->ctor_3(numberType, doubleValue);
    return obj2;
}

// public static new Outracks.Simulator.Bytecode.NumberLiteral Read(System.IO.BinaryReader reader) [static] :1087
NumberLiteral* NumberLiteral::Read3(::g::System::IO::BinaryReader* reader)
{
    uStackFrame __("Outracks.Simulator.Bytecode.NumberLiteral", "Read(System.IO.BinaryReader)");
    int nubmerType = uPtr(reader)->ReadInt32();
    double doubleValue = reader->ReadDouble();
    return NumberLiteral::New1(nubmerType, doubleValue);
}

// public static void Write(Outracks.Simulator.Bytecode.NumberLiteral l, System.IO.BinaryWriter writer) [static] :1076
void NumberLiteral::Write3(NumberLiteral* l, ::g::System::IO::BinaryWriter* writer)
{
    uStackFrame __("Outracks.Simulator.Bytecode.NumberLiteral", "Write(Outracks.Simulator.Bytecode.NumberLiteral,System.IO.BinaryWriter)");
    uPtr(writer)->Write5(uPtr(l)->NumberType);
    writer->Write3(l->DoubleValue);
}
// }

// /usr/local/share/uno/Packages/Outracks.Simulator.Common.Uno/0.0.0/bytecode/$.uno
// --------------------------------------------------------------------------------

// public enum NumberType :1046
uEnumType* NumberType_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Outracks.Simulator.Bytecode.NumberType", ::g::Uno::Int_typeof(), 8);
    type->SetLiterals(
        "Double", 0LL,
        "Float", 1LL,
        "Int", 2LL,
        "UInt", 3LL,
        "Short", 4LL,
        "UShort", 5LL,
        "SByte", 6LL,
        "Byte", 7LL);
    return type;
}

// /usr/local/share/uno/Packages/Outracks.Simulator.Common.Uno/0.0.0/bytecode/$.uno
// --------------------------------------------------------------------------------

// public sealed class Parameter :1263
// {
// static Parameter() :1263
static void Parameter__cctor__fn(uType* __type)
{
    Parameter::Read_ = uDelegate::New(::TYPES[54/*Uno.Func<System.IO.BinaryReader, Outracks.Simulator.Bytecode.Parameter>*/], (void*)Parameter___Read_fn);
    Parameter::Write_ = uDelegate::New(::TYPES[55/*Uno.Action<Outracks.Simulator.Bytecode.Parameter, System.IO.BinaryWriter>*/], (void*)Parameter___Write_fn);
}

static void Parameter_build(uType* type)
{
    ::STRINGS[21] = uString::Const(" ");
    ::TYPES[54] = ::g::Uno::Func1_typeof()->MakeType(::g::System::IO::BinaryReader_typeof(), type, NULL);
    ::TYPES[55] = ::g::Uno::Action2_typeof()->MakeType(type, ::g::System::IO::BinaryWriter_typeof(), NULL);
    type->SetFields(0,
        ::g::Outracks::Simulator::Bytecode::Variable_typeof(), offsetof(::g::Outracks::Simulator::Bytecode::Parameter, Name), 0,
        ::g::Outracks::Simulator::Bytecode::TypeName_typeof(), offsetof(::g::Outracks::Simulator::Bytecode::Parameter, Type), 0,
        ::TYPES[54/*Uno.Func<System.IO.BinaryReader, Outracks.Simulator.Bytecode.Parameter>*/], (uintptr_t)&::g::Outracks::Simulator::Bytecode::Parameter::Read_, uFieldFlagsStatic,
        ::TYPES[55/*Uno.Action<Outracks.Simulator.Bytecode.Parameter, System.IO.BinaryWriter>*/], (uintptr_t)&::g::Outracks::Simulator::Bytecode::Parameter::Write_, uFieldFlagsStatic);
    type->Reflection.SetFields(4,
        new uField("Name", 0),
        new uField("Read", 2),
        new uField("Type", 1),
        new uField("Write", 3));
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)Parameter__New1_fn, 0, true, type, 2, ::g::Outracks::Simulator::Bytecode::TypeName_typeof(), ::g::Outracks::Simulator::Bytecode::Variable_typeof()));
}

uType* Parameter_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 4;
    options.ObjectSize = sizeof(Parameter);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Outracks.Simulator.Bytecode.Parameter", options);
    type->fp_build_ = Parameter_build;
    type->fp_cctor_ = Parameter__cctor__fn;
    type->fp_ToString = (void(*)(uObject*, uString**))Parameter__ToString_fn;
    return type;
}

// public Parameter(Outracks.Simulator.Bytecode.TypeName type, Outracks.Simulator.Bytecode.Variable name) :1268
void Parameter__ctor__fn(Parameter* __this, ::g::Outracks::Simulator::Bytecode::TypeName* type, ::g::Outracks::Simulator::Bytecode::Variable* name)
{
    __this->ctor_(type, name);
}

// private static Outracks.Simulator.Bytecode.Parameter _Read(System.IO.BinaryReader reader) :1278
void Parameter___Read_fn(::g::System::IO::BinaryReader* reader, Parameter** __retval)
{
    *__retval = Parameter::_Read(reader);
}

// private static void _Write(Outracks.Simulator.Bytecode.Parameter p, System.IO.BinaryWriter writer) :1287
void Parameter___Write_fn(Parameter* p, ::g::System::IO::BinaryWriter* writer)
{
    Parameter::_Write(p, writer);
}

// public Parameter New(Outracks.Simulator.Bytecode.TypeName type, Outracks.Simulator.Bytecode.Variable name) :1268
void Parameter__New1_fn(::g::Outracks::Simulator::Bytecode::TypeName* type, ::g::Outracks::Simulator::Bytecode::Variable* name, Parameter** __retval)
{
    *__retval = Parameter::New1(type, name);
}

// public override sealed string ToString() :1293
void Parameter__ToString_fn(Parameter* __this, uString** __retval)
{
    uStackFrame __("Outracks.Simulator.Bytecode.Parameter", "ToString()");
    return *__retval = ::g::Uno::String::op_Addition1(::g::Uno::String::op_Addition(__this->Type, ::STRINGS[21/*" "*/]), __this->Name), void();
}

uSStrong<uDelegate*> Parameter::Read_;
uSStrong<uDelegate*> Parameter::Write_;

// public Parameter(Outracks.Simulator.Bytecode.TypeName type, Outracks.Simulator.Bytecode.Variable name) [instance] :1268
void Parameter::ctor_(::g::Outracks::Simulator::Bytecode::TypeName* type, ::g::Outracks::Simulator::Bytecode::Variable* name)
{
    Type = type;
    Name = name;
}

// private static Outracks.Simulator.Bytecode.Parameter _Read(System.IO.BinaryReader reader) [static] :1278
Parameter* Parameter::_Read(::g::System::IO::BinaryReader* reader)
{
    uStackFrame __("Outracks.Simulator.Bytecode.Parameter", "_Read(System.IO.BinaryReader)");
    Parameter_typeof()->Init();
    ::g::Outracks::Simulator::Bytecode::TypeName* type = (::g::Outracks::Simulator::Bytecode::TypeName*)uPtr(::g::Outracks::Simulator::Bytecode::TypeName::Read())->Invoke(1, reader);
    ::g::Outracks::Simulator::Bytecode::Variable* name = (::g::Outracks::Simulator::Bytecode::Variable*)uPtr(::g::Outracks::Simulator::Bytecode::Variable::Read())->Invoke(1, reader);
    return Parameter::New1(type, name);
}

// private static void _Write(Outracks.Simulator.Bytecode.Parameter p, System.IO.BinaryWriter writer) [static] :1287
void Parameter::_Write(Parameter* p, ::g::System::IO::BinaryWriter* writer)
{
    uStackFrame __("Outracks.Simulator.Bytecode.Parameter", "_Write(Outracks.Simulator.Bytecode.Parameter,System.IO.BinaryWriter)");
    Parameter_typeof()->Init();
    uPtr(::g::Outracks::Simulator::Bytecode::TypeName::Write())->Invoke(2, (::g::Outracks::Simulator::Bytecode::TypeName*)uPtr(p)->Type, writer);
    uPtr(::g::Outracks::Simulator::Bytecode::Variable::Write())->Invoke(2, (::g::Outracks::Simulator::Bytecode::Variable*)p->Name, writer);
}

// public Parameter New(Outracks.Simulator.Bytecode.TypeName type, Outracks.Simulator.Bytecode.Variable name) [static] :1268
Parameter* Parameter::New1(::g::Outracks::Simulator::Bytecode::TypeName* type, ::g::Outracks::Simulator::Bytecode::Variable* name)
{
    Parameter* obj1 = (Parameter*)uNew(Parameter_typeof());
    obj1->ctor_(type, name);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Outracks.Simulator.Common.Uno/0.0.0/bytecode/$.uno
// --------------------------------------------------------------------------------

// public sealed class PrecompiledElement :1467
// {
static void PrecompiledElement_build(uType* type)
{
    type->SetFields(0,
        ::g::Outracks::Simulator::ObjectIdentifier_typeof(), offsetof(::g::Outracks::Simulator::Bytecode::PrecompiledElement, Id), 0,
        ::g::Uno::String_typeof(), offsetof(::g::Outracks::Simulator::Bytecode::PrecompiledElement, Source), 0);
    type->Reflection.SetFields(2,
        new uField("Id", 0),
        new uField("Source", 1));
    type->Reflection.SetFunctions(3,
        new uFunction(".ctor", NULL, (void*)PrecompiledElement__New1_fn, 0, true, type, 2, ::g::Outracks::Simulator::ObjectIdentifier_typeof(), ::g::Uno::String_typeof()),
        new uFunction("Read", NULL, (void*)PrecompiledElement__Read_fn, 0, true, type, 1, ::g::System::IO::BinaryReader_typeof()),
        new uFunction("Write", NULL, (void*)PrecompiledElement__Write_fn, 0, true, uVoid_typeof(), 2, type, ::g::System::IO::BinaryWriter_typeof()));
}

uType* PrecompiledElement_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ObjectSize = sizeof(PrecompiledElement);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Outracks.Simulator.Bytecode.PrecompiledElement", options);
    type->fp_build_ = PrecompiledElement_build;
    type->fp_ToString = (void(*)(uObject*, uString**))PrecompiledElement__ToString_fn;
    return type;
}

// public PrecompiledElement(Outracks.Simulator.ObjectIdentifier id, string source) :1472
void PrecompiledElement__ctor__fn(PrecompiledElement* __this, ::g::Outracks::Simulator::ObjectIdentifier* id, uString* source)
{
    __this->ctor_(id, source);
}

// public PrecompiledElement New(Outracks.Simulator.ObjectIdentifier id, string source) :1472
void PrecompiledElement__New1_fn(::g::Outracks::Simulator::ObjectIdentifier* id, uString* source, PrecompiledElement** __retval)
{
    *__retval = PrecompiledElement::New1(id, source);
}

// public static Outracks.Simulator.Bytecode.PrecompiledElement Read(System.IO.BinaryReader reader) :1484
void PrecompiledElement__Read_fn(::g::System::IO::BinaryReader* reader, PrecompiledElement** __retval)
{
    *__retval = PrecompiledElement::Read(reader);
}

// public override sealed string ToString() :1491
void PrecompiledElement__ToString_fn(PrecompiledElement* __this, uString** __retval)
{
    return *__retval = __this->Source, void();
}

// public static void Write(Outracks.Simulator.Bytecode.PrecompiledElement dependency, System.IO.BinaryWriter writer) :1478
void PrecompiledElement__Write_fn(PrecompiledElement* dependency, ::g::System::IO::BinaryWriter* writer)
{
    PrecompiledElement::Write(dependency, writer);
}

// public PrecompiledElement(Outracks.Simulator.ObjectIdentifier id, string source) [instance] :1472
void PrecompiledElement::ctor_(::g::Outracks::Simulator::ObjectIdentifier* id, uString* source)
{
    Id = id;
    Source = source;
}

// public PrecompiledElement New(Outracks.Simulator.ObjectIdentifier id, string source) [static] :1472
PrecompiledElement* PrecompiledElement::New1(::g::Outracks::Simulator::ObjectIdentifier* id, uString* source)
{
    PrecompiledElement* obj1 = (PrecompiledElement*)uNew(PrecompiledElement_typeof());
    obj1->ctor_(id, source);
    return obj1;
}

// public static Outracks.Simulator.Bytecode.PrecompiledElement Read(System.IO.BinaryReader reader) [static] :1484
PrecompiledElement* PrecompiledElement::Read(::g::System::IO::BinaryReader* reader)
{
    uStackFrame __("Outracks.Simulator.Bytecode.PrecompiledElement", "Read(System.IO.BinaryReader)");
    ::g::Outracks::Simulator::ObjectIdentifier* id = ::g::Outracks::Simulator::ObjectIdentifier::Read(reader);
    uString* source = uPtr(reader)->ReadString();
    return PrecompiledElement::New1(id, source);
}

// public static void Write(Outracks.Simulator.Bytecode.PrecompiledElement dependency, System.IO.BinaryWriter writer) [static] :1478
void PrecompiledElement::Write(PrecompiledElement* dependency, ::g::System::IO::BinaryWriter* writer)
{
    uStackFrame __("Outracks.Simulator.Bytecode.PrecompiledElement", "Write(Outracks.Simulator.Bytecode.PrecompiledElement,System.IO.BinaryWriter)");
    ::g::Outracks::Simulator::ObjectIdentifier::Write(uPtr(dependency)->Id, writer);
    uPtr(writer)->Write6(dependency->Source);
}
// }

// /usr/local/share/uno/Packages/Outracks.Simulator.Common.Uno/0.0.0/bytecode/$.uno
// --------------------------------------------------------------------------------

// public sealed class ProjectBytecode :1308
// {
static void ProjectBytecode_build(uType* type)
{
    ::TYPES[56] = ::g::Outracks::Simulator::List_typeof()->MakeMethod(3/*ToImmutableList<Outracks.Simulator.Bytecode.ProjectDependency>*/, ::g::Outracks::Simulator::Bytecode::ProjectDependency_typeof(), NULL);
    ::TYPES[57] = ::g::Outracks::Simulator::List_typeof()->MakeMethod(1/*Read<Outracks.Simulator.Bytecode.ProjectDependency>*/, ::g::Outracks::Simulator::Bytecode::ProjectDependency_typeof(), NULL);
    ::TYPES[58] = ::g::Uno::Func1_typeof()->MakeType(::g::System::IO::BinaryReader_typeof(), ::g::Outracks::Simulator::Bytecode::ProjectDependency_typeof(), NULL);
    ::TYPES[59] = ::g::Outracks::Simulator::List_typeof()->MakeMethod(6/*Write<Outracks.Simulator.Bytecode.ProjectDependency>*/, ::g::Outracks::Simulator::Bytecode::ProjectDependency_typeof(), NULL);
    ::TYPES[60] = ::g::Uno::Action2_typeof()->MakeType(::g::Outracks::Simulator::Bytecode::ProjectDependency_typeof(), ::g::System::IO::BinaryWriter_typeof(), NULL);
    type->SetFields(0,
        ::g::Outracks::Simulator::ImmutableList_typeof()->MakeType(::g::Outracks::Simulator::Bytecode::ProjectDependency_typeof(), NULL), offsetof(::g::Outracks::Simulator::Bytecode::ProjectBytecode, Dependencies), 0,
        ::g::Outracks::Simulator::Bytecode::ProjectMetadata_typeof(), offsetof(::g::Outracks::Simulator::Bytecode::ProjectBytecode, Metadata), 0,
        ::g::Outracks::Simulator::Bytecode::Lambda_typeof(), offsetof(::g::Outracks::Simulator::Bytecode::ProjectBytecode, Reify), 0);
    type->Reflection.SetFields(3,
        new uField("Dependencies", 0),
        new uField("Metadata", 1),
        new uField("Reify", 2));
    type->Reflection.SetFunctions(3,
        new uFunction(".ctor", NULL, (void*)ProjectBytecode__New1_fn, 0, true, type, 3, ::g::Outracks::Simulator::Bytecode::Lambda_typeof(), ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Outracks::Simulator::Bytecode::ProjectDependency_typeof(), NULL), ::g::Outracks::Simulator::Bytecode::ProjectMetadata_typeof()),
        new uFunction("ReadDataFrom", NULL, (void*)ProjectBytecode__ReadDataFrom_fn, 0, true, type, 1, ::g::System::IO::BinaryReader_typeof()),
        new uFunction("WriteDataTo", NULL, (void*)ProjectBytecode__WriteDataTo_fn, 0, false, uVoid_typeof(), 1, ::g::System::IO::BinaryWriter_typeof()));
}

uType* ProjectBytecode_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.ObjectSize = sizeof(ProjectBytecode);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Outracks.Simulator.Bytecode.ProjectBytecode", options);
    type->fp_build_ = ProjectBytecode_build;
    type->fp_ToString = (void(*)(uObject*, uString**))ProjectBytecode__ToString_fn;
    return type;
}

// public ProjectBytecode(Outracks.Simulator.Bytecode.Lambda reify, Uno.Collections.IEnumerable<Outracks.Simulator.Bytecode.ProjectDependency> dependencies, Outracks.Simulator.Bytecode.ProjectMetadata metadata) :1314
void ProjectBytecode__ctor__fn(ProjectBytecode* __this, ::g::Outracks::Simulator::Bytecode::Lambda* reify, uObject* dependencies, ::g::Outracks::Simulator::Bytecode::ProjectMetadata* metadata)
{
    __this->ctor_(reify, dependencies, metadata);
}

// public ProjectBytecode New(Outracks.Simulator.Bytecode.Lambda reify, Uno.Collections.IEnumerable<Outracks.Simulator.Bytecode.ProjectDependency> dependencies, Outracks.Simulator.Bytecode.ProjectMetadata metadata) :1314
void ProjectBytecode__New1_fn(::g::Outracks::Simulator::Bytecode::Lambda* reify, uObject* dependencies, ::g::Outracks::Simulator::Bytecode::ProjectMetadata* metadata, ProjectBytecode** __retval)
{
    *__retval = ProjectBytecode::New1(reify, dependencies, metadata);
}

// public static Outracks.Simulator.Bytecode.ProjectBytecode ReadDataFrom(System.IO.BinaryReader reader) :1336
void ProjectBytecode__ReadDataFrom_fn(::g::System::IO::BinaryReader* reader, ProjectBytecode** __retval)
{
    *__retval = ProjectBytecode::ReadDataFrom(reader);
}

// public override sealed string ToString() :1324
void ProjectBytecode__ToString_fn(ProjectBytecode* __this, uString** __retval)
{
    uStackFrame __("Outracks.Simulator.Bytecode.ProjectBytecode", "ToString()");
    return *__retval = uPtr(__this->Reify)->ToString(), void();
}

// public void WriteDataTo(System.IO.BinaryWriter writer) :1329
void ProjectBytecode__WriteDataTo_fn(ProjectBytecode* __this, ::g::System::IO::BinaryWriter* writer)
{
    __this->WriteDataTo(writer);
}

// public ProjectBytecode(Outracks.Simulator.Bytecode.Lambda reify, Uno.Collections.IEnumerable<Outracks.Simulator.Bytecode.ProjectDependency> dependencies, Outracks.Simulator.Bytecode.ProjectMetadata metadata) [instance] :1314
void ProjectBytecode::ctor_(::g::Outracks::Simulator::Bytecode::Lambda* reify, uObject* dependencies, ::g::Outracks::Simulator::Bytecode::ProjectMetadata* metadata)
{
    Reify = reify;
    Dependencies = ((::g::Outracks::Simulator::ImmutableList*)::g::Outracks::Simulator::List::ToImmutableList(::TYPES[56/*Outracks.Simulator.List.ToImmutableList<Outracks.Simulator.Bytecode.ProjectDependency>*/], dependencies));
    Metadata = metadata;
}

// public void WriteDataTo(System.IO.BinaryWriter writer) [instance] :1329
void ProjectBytecode::WriteDataTo(::g::System::IO::BinaryWriter* writer)
{
    uStackFrame __("Outracks.Simulator.Bytecode.ProjectBytecode", "WriteDataTo(System.IO.BinaryWriter)");
    uPtr(Metadata)->WriteDataTo(writer);
    ::g::Outracks::Simulator::Bytecode::Lambda::Write2(Reify, writer);
    ::g::Outracks::Simulator::List::Write1(::TYPES[59/*Outracks.Simulator.List.Write<Outracks.Simulator.Bytecode.ProjectDependency>*/], writer, Dependencies, uDelegate::New(::TYPES[60/*Uno.Action<Outracks.Simulator.Bytecode.ProjectDependency, System.IO.BinaryWriter>*/], (void*)::g::Outracks::Simulator::Bytecode::ProjectDependency__Write_fn));
}

// public ProjectBytecode New(Outracks.Simulator.Bytecode.Lambda reify, Uno.Collections.IEnumerable<Outracks.Simulator.Bytecode.ProjectDependency> dependencies, Outracks.Simulator.Bytecode.ProjectMetadata metadata) [static] :1314
ProjectBytecode* ProjectBytecode::New1(::g::Outracks::Simulator::Bytecode::Lambda* reify, uObject* dependencies, ::g::Outracks::Simulator::Bytecode::ProjectMetadata* metadata)
{
    ProjectBytecode* obj1 = (ProjectBytecode*)uNew(ProjectBytecode_typeof());
    obj1->ctor_(reify, dependencies, metadata);
    return obj1;
}

// public static Outracks.Simulator.Bytecode.ProjectBytecode ReadDataFrom(System.IO.BinaryReader reader) [static] :1336
ProjectBytecode* ProjectBytecode::ReadDataFrom(::g::System::IO::BinaryReader* reader)
{
    uStackFrame __("Outracks.Simulator.Bytecode.ProjectBytecode", "ReadDataFrom(System.IO.BinaryReader)");
    ::g::Outracks::Simulator::Bytecode::ProjectMetadata* metadata = ::g::Outracks::Simulator::Bytecode::ProjectMetadata::ReadDataFrom(reader);
    ::g::Outracks::Simulator::Bytecode::Lambda* lambda = ::g::Outracks::Simulator::Bytecode::Lambda::Read2(reader);
    ::g::Outracks::Simulator::ImmutableList* dependencies = (::g::Outracks::Simulator::ImmutableList*)::g::Outracks::Simulator::List::Read(::TYPES[57/*Outracks.Simulator.List.Read<Outracks.Simulator.Bytecode.ProjectDependency>*/], reader, uDelegate::New(::TYPES[58/*Uno.Func<System.IO.BinaryReader, Outracks.Simulator.Bytecode.ProjectDependency>*/], (void*)::g::Outracks::Simulator::Bytecode::ProjectDependency__Read_fn));
    return ProjectBytecode::New1(lambda, (uObject*)dependencies, metadata);
}
// }

// /usr/local/share/uno/Packages/Outracks.Simulator.Common.Uno/0.0.0/bytecode/$.uno
// --------------------------------------------------------------------------------

// public sealed class ProjectDependency :1355
// {
static void ProjectDependency_build(uType* type)
{
    ::STRINGS[22] = uString::Const("{ Path: ");
    ::STRINGS[23] = uString::Const(", Descriptor: ");
    ::STRINGS[24] = uString::Const(" }");
    type->SetFields(0,
        ::g::Uno::String_typeof(), offsetof(::g::Outracks::Simulator::Bytecode::ProjectDependency, Descriptor), 0,
        ::g::Uno::String_typeof(), offsetof(::g::Outracks::Simulator::Bytecode::ProjectDependency, Path), 0);
    type->Reflection.SetFields(2,
        new uField("Descriptor", 0),
        new uField("Path", 1));
    type->Reflection.SetFunctions(4,
        new uFunction("Equals", NULL, (void*)ProjectDependency__Equals2_fn, 0, false, ::g::Uno::Bool_typeof(), 1, type),
        new uFunction(".ctor", NULL, (void*)ProjectDependency__New1_fn, 0, true, type, 2, ::g::Uno::String_typeof(), ::g::Uno::String_typeof()),
        new uFunction("Read", NULL, (void*)ProjectDependency__Read_fn, 0, true, type, 1, ::g::System::IO::BinaryReader_typeof()),
        new uFunction("Write", NULL, (void*)ProjectDependency__Write_fn, 0, true, uVoid_typeof(), 2, type, ::g::System::IO::BinaryWriter_typeof()));
}

uType* ProjectDependency_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ObjectSize = sizeof(ProjectDependency);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Outracks.Simulator.Bytecode.ProjectDependency", options);
    type->fp_build_ = ProjectDependency_build;
    type->fp_Equals = (void(*)(uObject*, uObject*, bool*))ProjectDependency__Equals_fn;
    type->fp_GetHashCode = (void(*)(uObject*, int*))ProjectDependency__GetHashCode_fn;
    type->fp_ToString = (void(*)(uObject*, uString**))ProjectDependency__ToString_fn;
    return type;
}

// public ProjectDependency(string path, string descriptor) :1360
void ProjectDependency__ctor__fn(ProjectDependency* __this, uString* path, uString* descriptor)
{
    __this->ctor_(path, descriptor);
}

// public override sealed bool Equals(object obj) :1386
void ProjectDependency__Equals_fn(ProjectDependency* __this, uObject* obj, bool* __retval)
{
    uStackFrame __("Outracks.Simulator.Bytecode.ProjectDependency", "Equals(object)");

    if (::g::Uno::Object::ReferenceEquals(NULL, obj))
        return *__retval = false, void();

    if (::g::Uno::Object::ReferenceEquals(__this, obj))
        return *__retval = true, void();

    return *__retval = uIs(obj, __this->__type) && __this->Equals2(uCast<ProjectDependency*>(obj, __this->__type)), void();
}

// public bool Equals(Outracks.Simulator.Bytecode.ProjectDependency other) :1379
void ProjectDependency__Equals2_fn(ProjectDependency* __this, ProjectDependency* other, bool* __retval)
{
    *__retval = __this->Equals2(other);
}

// public override sealed int GetHashCode() :1393
void ProjectDependency__GetHashCode_fn(ProjectDependency* __this, int* __retval)
{
    uStackFrame __("Outracks.Simulator.Bytecode.ProjectDependency", "GetHashCode()");
    return *__retval = (uPtr(__this->Path)->GetHashCode() * 397) ^ uPtr(__this->Descriptor)->GetHashCode(), void();
}

// public ProjectDependency New(string path, string descriptor) :1360
void ProjectDependency__New1_fn(uString* path, uString* descriptor, ProjectDependency** __retval)
{
    *__retval = ProjectDependency::New1(path, descriptor);
}

// public static operator ==(Outracks.Simulator.Bytecode.ProjectDependency left, Outracks.Simulator.Bytecode.ProjectDependency right) :1401
void ProjectDependency__op_Equality_fn(ProjectDependency* left, ProjectDependency* right, bool* __retval)
{
    *__retval = ProjectDependency::op_Equality(left, right);
}

// public static operator !=(Outracks.Simulator.Bytecode.ProjectDependency left, Outracks.Simulator.Bytecode.ProjectDependency right) :1406
void ProjectDependency__op_Inequality_fn(ProjectDependency* left, ProjectDependency* right, bool* __retval)
{
    *__retval = ProjectDependency::op_Inequality(left, right);
}

// public static Outracks.Simulator.Bytecode.ProjectDependency Read(System.IO.BinaryReader reader) :1372
void ProjectDependency__Read_fn(::g::System::IO::BinaryReader* reader, ProjectDependency** __retval)
{
    *__retval = ProjectDependency::Read(reader);
}

// public override sealed string ToString() :1411
void ProjectDependency__ToString_fn(ProjectDependency* __this, uString** __retval)
{
    uStackFrame __("Outracks.Simulator.Bytecode.ProjectDependency", "ToString()");
    return *__retval = ::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::STRINGS[22/*"{ Path: "*/], __this->Path), ::STRINGS[23/*", Descripto...*/]), __this->Descriptor), ::STRINGS[24/*" }"*/]), void();
}

// public static void Write(Outracks.Simulator.Bytecode.ProjectDependency dependency, System.IO.BinaryWriter writer) :1366
void ProjectDependency__Write_fn(ProjectDependency* dependency, ::g::System::IO::BinaryWriter* writer)
{
    ProjectDependency::Write(dependency, writer);
}

// public ProjectDependency(string path, string descriptor) [instance] :1360
void ProjectDependency::ctor_(uString* path, uString* descriptor)
{
    Path = path;
    Descriptor = descriptor;
}

// public bool Equals(Outracks.Simulator.Bytecode.ProjectDependency other) [instance] :1379
bool ProjectDependency::Equals2(ProjectDependency* other)
{
    uStackFrame __("Outracks.Simulator.Bytecode.ProjectDependency", "Equals(Outracks.Simulator.Bytecode.ProjectDependency)");

    if (::g::Uno::Object::ReferenceEquals(NULL, other))
        return false;

    if (::g::Uno::Object::ReferenceEquals(this, other))
        return true;

    return ::g::Uno::String::Equals2(uPtr(Path), uPtr(other)->Path) && ::g::Uno::String::Equals3(Descriptor, uPtr(other)->Descriptor);
}

// public ProjectDependency New(string path, string descriptor) [static] :1360
ProjectDependency* ProjectDependency::New1(uString* path, uString* descriptor)
{
    ProjectDependency* obj1 = (ProjectDependency*)uNew(ProjectDependency_typeof());
    obj1->ctor_(path, descriptor);
    return obj1;
}

// public static operator ==(Outracks.Simulator.Bytecode.ProjectDependency left, Outracks.Simulator.Bytecode.ProjectDependency right) [static] :1401
bool ProjectDependency::op_Equality(ProjectDependency* left, ProjectDependency* right)
{
    uStackFrame __("Outracks.Simulator.Bytecode.ProjectDependency", "==(Outracks.Simulator.Bytecode.ProjectDependency,Outracks.Simulator.Bytecode.ProjectDependency)");
    return ::g::Uno::Object::Equals1(left, right);
}

// public static operator !=(Outracks.Simulator.Bytecode.ProjectDependency left, Outracks.Simulator.Bytecode.ProjectDependency right) [static] :1406
bool ProjectDependency::op_Inequality(ProjectDependency* left, ProjectDependency* right)
{
    uStackFrame __("Outracks.Simulator.Bytecode.ProjectDependency", "!=(Outracks.Simulator.Bytecode.ProjectDependency,Outracks.Simulator.Bytecode.ProjectDependency)");
    return !::g::Uno::Object::Equals1(left, right);
}

// public static Outracks.Simulator.Bytecode.ProjectDependency Read(System.IO.BinaryReader reader) [static] :1372
ProjectDependency* ProjectDependency::Read(::g::System::IO::BinaryReader* reader)
{
    uStackFrame __("Outracks.Simulator.Bytecode.ProjectDependency", "Read(System.IO.BinaryReader)");
    uString* path = uPtr(reader)->ReadString();
    uString* descriptor = reader->ReadString();
    return ProjectDependency::New1(path, descriptor);
}

// public static void Write(Outracks.Simulator.Bytecode.ProjectDependency dependency, System.IO.BinaryWriter writer) [static] :1366
void ProjectDependency::Write(ProjectDependency* dependency, ::g::System::IO::BinaryWriter* writer)
{
    uStackFrame __("Outracks.Simulator.Bytecode.ProjectDependency", "Write(Outracks.Simulator.Bytecode.ProjectDependency,System.IO.BinaryWriter)");
    uPtr(writer)->Write6(uPtr(dependency)->Path);
    writer->Write6(dependency->Descriptor);
}
// }

// /usr/local/share/uno/Packages/Outracks.Simulator.Common.Uno/0.0.0/bytecode/$.uno
// --------------------------------------------------------------------------------

// public sealed class ProjectMetadata :1427
// {
static void ProjectMetadata_build(uType* type)
{
    ::TYPES[61] = ::g::Outracks::Simulator::List_typeof()->MakeMethod(1/*Read<Uno.Collections.KeyValuePair<Outracks.Simulator.ObjectIdentifier, Uno.Collections.IEnumerable<Outracks.Simulator.ObjectIdentifier>>>*/, ::g::Uno::Collections::KeyValuePair_typeof()->MakeType(::g::Outracks::Simulator::ObjectIdentifier_typeof(), ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Outracks::Simulator::ObjectIdentifier_typeof(), NULL), NULL), NULL);
    ::TYPES[62] = ::g::Uno::Func1_typeof()->MakeType(::g::System::IO::BinaryReader_typeof(), ::g::Uno::Collections::KeyValuePair_typeof()->MakeType(::g::Outracks::Simulator::ObjectIdentifier_typeof(), ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Outracks::Simulator::ObjectIdentifier_typeof(), NULL), NULL), NULL);
    ::TYPES[63] = ::g::Outracks::Simulator::List_typeof()->MakeMethod(1/*Read<Outracks.Simulator.Bytecode.PrecompiledElement>*/, ::g::Outracks::Simulator::Bytecode::PrecompiledElement_typeof(), NULL);
    ::TYPES[64] = ::g::Uno::Func1_typeof()->MakeType(::g::System::IO::BinaryReader_typeof(), ::g::Outracks::Simulator::Bytecode::PrecompiledElement_typeof(), NULL);
    ::TYPES[65] = ::g::Outracks::Simulator::List_typeof()->MakeMethod(1/*Read<Outracks.Simulator.ObjectIdentifier>*/, ::g::Outracks::Simulator::ObjectIdentifier_typeof(), NULL);
    ::TYPES[66] = ::g::Uno::Func1_typeof()->MakeType(::g::System::IO::BinaryReader_typeof(), ::g::Outracks::Simulator::ObjectIdentifier_typeof(), NULL);
    ::TYPES[67] = ::g::Uno::Collections::KeyValuePair_typeof()->MakeType(::g::Outracks::Simulator::ObjectIdentifier_typeof(), ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Outracks::Simulator::ObjectIdentifier_typeof(), NULL), NULL);
    ::TYPES[68] = ::g::Outracks::Simulator::List_typeof()->MakeMethod(6/*Write<Uno.Collections.KeyValuePair<Outracks.Simulator.ObjectIdentifier, Uno.Collections.IEnumerable<Outracks.Simulator.ObjectIdentifier>>>*/, ::TYPES[67/*Uno.Collections.KeyValuePair<Outracks.Simulator.ObjectIdentifier, Uno.Collections.IEnumerable<Outracks.Simulator.ObjectIdentifier>>*/], NULL);
    ::TYPES[69] = ::g::Uno::Action2_typeof()->MakeType(::TYPES[67/*Uno.Collections.KeyValuePair<Outracks.Simulator.ObjectIdentifier, Uno.Collections.IEnumerable<Outracks.Simulator.ObjectIdentifier>>*/], ::g::System::IO::BinaryWriter_typeof(), NULL);
    ::TYPES[70] = ::g::Outracks::Simulator::List_typeof()->MakeMethod(6/*Write<Outracks.Simulator.Bytecode.PrecompiledElement>*/, ::g::Outracks::Simulator::Bytecode::PrecompiledElement_typeof(), NULL);
    ::TYPES[71] = ::g::Uno::Action2_typeof()->MakeType(::g::Outracks::Simulator::Bytecode::PrecompiledElement_typeof(), ::g::System::IO::BinaryWriter_typeof(), NULL);
    ::TYPES[72] = ::g::Outracks::Simulator::List_typeof()->MakeMethod(7/*Write<Outracks.Simulator.ObjectIdentifier>*/, ::g::Outracks::Simulator::ObjectIdentifier_typeof(), NULL);
    ::TYPES[73] = ::g::Uno::Action2_typeof()->MakeType(::g::Outracks::Simulator::ObjectIdentifier_typeof(), ::g::System::IO::BinaryWriter_typeof(), NULL);
    type->SetFields(0,
        ::g::Outracks::Simulator::ImmutableList_typeof()->MakeType(::TYPES[67/*Uno.Collections.KeyValuePair<Outracks.Simulator.ObjectIdentifier, Uno.Collections.IEnumerable<Outracks.Simulator.ObjectIdentifier>>*/], NULL), offsetof(::g::Outracks::Simulator::Bytecode::ProjectMetadata, ElementTypeHierarchy), 0,
        ::g::Outracks::Simulator::ImmutableList_typeof()->MakeType(::g::Outracks::Simulator::Bytecode::PrecompiledElement_typeof(), NULL), offsetof(::g::Outracks::Simulator::Bytecode::ProjectMetadata, PrecompiledElements), 0);
    type->Reflection.SetFields(2,
        new uField("ElementTypeHierarchy", 0),
        new uField("PrecompiledElements", 1));
    type->Reflection.SetFunctions(3,
        new uFunction(".ctor", NULL, (void*)ProjectMetadata__New1_fn, 0, true, type, 2, ::g::Outracks::Simulator::ImmutableList_typeof()->MakeType(::TYPES[67/*Uno.Collections.KeyValuePair<Outracks.Simulator.ObjectIdentifier, Uno.Collections.IEnumerable<Outracks.Simulator.ObjectIdentifier>>*/], NULL), ::g::Outracks::Simulator::ImmutableList_typeof()->MakeType(::g::Outracks::Simulator::Bytecode::PrecompiledElement_typeof(), NULL)),
        new uFunction("ReadDataFrom", NULL, (void*)ProjectMetadata__ReadDataFrom_fn, 0, true, type, 1, ::g::System::IO::BinaryReader_typeof()),
        new uFunction("WriteDataTo", NULL, (void*)ProjectMetadata__WriteDataTo_fn, 0, false, uVoid_typeof(), 1, ::g::System::IO::BinaryWriter_typeof()));
}

uType* ProjectMetadata_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ObjectSize = sizeof(ProjectMetadata);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Outracks.Simulator.Bytecode.ProjectMetadata", options);
    type->fp_build_ = ProjectMetadata_build;
    return type;
}

// public ProjectMetadata(Outracks.Simulator.ImmutableList<Uno.Collections.KeyValuePair<Outracks.Simulator.ObjectIdentifier, Uno.Collections.IEnumerable<Outracks.Simulator.ObjectIdentifier>>> hierarchy, Outracks.Simulator.ImmutableList<Outracks.Simulator.Bytecode.PrecompiledElement> elements) :1432
void ProjectMetadata__ctor__fn(ProjectMetadata* __this, ::g::Outracks::Simulator::ImmutableList* hierarchy, ::g::Outracks::Simulator::ImmutableList* elements)
{
    __this->ctor_(hierarchy, elements);
}

// public ProjectMetadata New(Outracks.Simulator.ImmutableList<Uno.Collections.KeyValuePair<Outracks.Simulator.ObjectIdentifier, Uno.Collections.IEnumerable<Outracks.Simulator.ObjectIdentifier>>> hierarchy, Outracks.Simulator.ImmutableList<Outracks.Simulator.Bytecode.PrecompiledElement> elements) :1432
void ProjectMetadata__New1_fn(::g::Outracks::Simulator::ImmutableList* hierarchy, ::g::Outracks::Simulator::ImmutableList* elements, ProjectMetadata** __retval)
{
    *__retval = ProjectMetadata::New1(hierarchy, elements);
}

// public static Outracks.Simulator.Bytecode.ProjectMetadata ReadDataFrom(System.IO.BinaryReader reader) :1446
void ProjectMetadata__ReadDataFrom_fn(::g::System::IO::BinaryReader* reader, ProjectMetadata** __retval)
{
    *__retval = ProjectMetadata::ReadDataFrom(reader);
}

// private static Uno.Collections.KeyValuePair<Outracks.Simulator.ObjectIdentifier, Uno.Collections.IEnumerable<Outracks.Simulator.ObjectIdentifier>> ReadType(System.IO.BinaryReader reader) :1459
void ProjectMetadata__ReadType_fn(::g::System::IO::BinaryReader* reader, ::g::Uno::Collections::KeyValuePair<uStrong< ::g::Outracks::Simulator::ObjectIdentifier*>, uStrong<uObject*> >* __retval)
{
    *__retval = ProjectMetadata::ReadType(reader);
}

// public void WriteDataTo(System.IO.BinaryWriter writer) :1440
void ProjectMetadata__WriteDataTo_fn(ProjectMetadata* __this, ::g::System::IO::BinaryWriter* writer)
{
    __this->WriteDataTo(writer);
}

// private static void WriteType(Uno.Collections.KeyValuePair<Outracks.Simulator.ObjectIdentifier, Uno.Collections.IEnumerable<Outracks.Simulator.ObjectIdentifier>> type, System.IO.BinaryWriter writer) :1453
void ProjectMetadata__WriteType_fn(::g::Uno::Collections::KeyValuePair<uStrong< ::g::Outracks::Simulator::ObjectIdentifier*>, uStrong<uObject*> >* type, ::g::System::IO::BinaryWriter* writer)
{
    ProjectMetadata::WriteType(*type, writer);
}

// public ProjectMetadata(Outracks.Simulator.ImmutableList<Uno.Collections.KeyValuePair<Outracks.Simulator.ObjectIdentifier, Uno.Collections.IEnumerable<Outracks.Simulator.ObjectIdentifier>>> hierarchy, Outracks.Simulator.ImmutableList<Outracks.Simulator.Bytecode.PrecompiledElement> elements) [instance] :1432
void ProjectMetadata::ctor_(::g::Outracks::Simulator::ImmutableList* hierarchy, ::g::Outracks::Simulator::ImmutableList* elements)
{
    ElementTypeHierarchy = hierarchy;
    PrecompiledElements = elements;
}

// public void WriteDataTo(System.IO.BinaryWriter writer) [instance] :1440
void ProjectMetadata::WriteDataTo(::g::System::IO::BinaryWriter* writer)
{
    uStackFrame __("Outracks.Simulator.Bytecode.ProjectMetadata", "WriteDataTo(System.IO.BinaryWriter)");
    ::g::Outracks::Simulator::List::Write1(::TYPES[68/*Outracks.Simulator.List.Write<Uno.Collections.KeyValuePair<Outracks.Simulator.ObjectIdentifier, Uno.Collections.IEnumerable<Outracks.Simulator.ObjectIdentifier>>>*/], writer, ElementTypeHierarchy, uDelegate::New(::TYPES[69/*Uno.Action<Uno.Collections.KeyValuePair<Outracks.Simulator.ObjectIdentifier, Uno.Collections.IEnumerable<Outracks.Simulator.ObjectIdentifier>>, System.IO.BinaryWriter>*/], (void*)ProjectMetadata__WriteType_fn));
    ::g::Outracks::Simulator::List::Write1(::TYPES[70/*Outracks.Simulator.List.Write<Outracks.Simulator.Bytecode.PrecompiledElement>*/], writer, PrecompiledElements, uDelegate::New(::TYPES[71/*Uno.Action<Outracks.Simulator.Bytecode.PrecompiledElement, System.IO.BinaryWriter>*/], (void*)::g::Outracks::Simulator::Bytecode::PrecompiledElement__Write_fn));
}

// public ProjectMetadata New(Outracks.Simulator.ImmutableList<Uno.Collections.KeyValuePair<Outracks.Simulator.ObjectIdentifier, Uno.Collections.IEnumerable<Outracks.Simulator.ObjectIdentifier>>> hierarchy, Outracks.Simulator.ImmutableList<Outracks.Simulator.Bytecode.PrecompiledElement> elements) [static] :1432
ProjectMetadata* ProjectMetadata::New1(::g::Outracks::Simulator::ImmutableList* hierarchy, ::g::Outracks::Simulator::ImmutableList* elements)
{
    ProjectMetadata* obj1 = (ProjectMetadata*)uNew(ProjectMetadata_typeof());
    obj1->ctor_(hierarchy, elements);
    return obj1;
}

// public static Outracks.Simulator.Bytecode.ProjectMetadata ReadDataFrom(System.IO.BinaryReader reader) [static] :1446
ProjectMetadata* ProjectMetadata::ReadDataFrom(::g::System::IO::BinaryReader* reader)
{
    ::g::Outracks::Simulator::ImmutableList* hierarchy = (::g::Outracks::Simulator::ImmutableList*)::g::Outracks::Simulator::List::Read(::TYPES[61/*Outracks.Simulator.List.Read<Uno.Collections.KeyValuePair<Outracks.Simulator.ObjectIdentifier, Uno.Collections.IEnumerable<Outracks.Simulator.ObjectIdentifier>>>*/], reader, uDelegate::New(::TYPES[62/*Uno.Func<System.IO.BinaryReader, Uno.Collections.KeyValuePair<Outracks.Simulator.ObjectIdentifier, Uno.Collections.IEnumerable<Outracks.Simulator.ObjectIdentifier>>>*/], (void*)ProjectMetadata__ReadType_fn));
    ::g::Outracks::Simulator::ImmutableList* elements = (::g::Outracks::Simulator::ImmutableList*)::g::Outracks::Simulator::List::Read(::TYPES[63/*Outracks.Simulator.List.Read<Outracks.Simulator.Bytecode.PrecompiledElement>*/], reader, uDelegate::New(::TYPES[64/*Uno.Func<System.IO.BinaryReader, Outracks.Simulator.Bytecode.PrecompiledElement>*/], (void*)::g::Outracks::Simulator::Bytecode::PrecompiledElement__Read_fn));
    return ProjectMetadata::New1(hierarchy, elements);
}

// private static Uno.Collections.KeyValuePair<Outracks.Simulator.ObjectIdentifier, Uno.Collections.IEnumerable<Outracks.Simulator.ObjectIdentifier>> ReadType(System.IO.BinaryReader reader) [static] :1459
::g::Uno::Collections::KeyValuePair<uStrong< ::g::Outracks::Simulator::ObjectIdentifier*>, uStrong<uObject*> > ProjectMetadata::ReadType(::g::System::IO::BinaryReader* reader)
{
    uStackFrame __("Outracks.Simulator.Bytecode.ProjectMetadata", "ReadType(System.IO.BinaryReader)");
    ::g::Uno::Collections::KeyValuePair<uStrong< ::g::Outracks::Simulator::ObjectIdentifier*>, uStrong<uObject*> > ret2;
    ::g::Outracks::Simulator::ObjectIdentifier* key = ::g::Outracks::Simulator::ObjectIdentifier::Read(reader);
    ::g::Outracks::Simulator::ImmutableList* value = (::g::Outracks::Simulator::ImmutableList*)::g::Outracks::Simulator::List::Read(::TYPES[65/*Outracks.Simulator.List.Read<Outracks.Simulator.ObjectIdentifier>*/], reader, uDelegate::New(::TYPES[66/*Uno.Func<System.IO.BinaryReader, Outracks.Simulator.ObjectIdentifier>*/], (void*)::g::Outracks::Simulator::ObjectIdentifier__Read_fn));
    return (::g::Uno::Collections::KeyValuePair__New1_fn(::TYPES[67/*Uno.Collections.KeyValuePair<Outracks.Simulator.ObjectIdentifier, Uno.Collections.IEnumerable<Outracks.Simulator.ObjectIdentifier>>*/], key, (uObject*)value, &ret2), ret2);
}

// private static void WriteType(Uno.Collections.KeyValuePair<Outracks.Simulator.ObjectIdentifier, Uno.Collections.IEnumerable<Outracks.Simulator.ObjectIdentifier>> type, System.IO.BinaryWriter writer) [static] :1453
void ProjectMetadata::WriteType(::g::Uno::Collections::KeyValuePair<uStrong< ::g::Outracks::Simulator::ObjectIdentifier*>, uStrong<uObject*> > type, ::g::System::IO::BinaryWriter* writer)
{
    uStackFrame __("Outracks.Simulator.Bytecode.ProjectMetadata", "WriteType(Uno.Collections.KeyValuePair<Outracks.Simulator.ObjectIdentifier, Uno.Collections.IEnumerable<Outracks.Simulator.ObjectIdentifier>>,System.IO.BinaryWriter)");
    ::g::Outracks::Simulator::ObjectIdentifier::Write(type.Key(::TYPES[67/*Uno.Collections.KeyValuePair<Outracks.Simulator.ObjectIdentifier, Uno.Collections.IEnumerable<Outracks.Simulator.ObjectIdentifier>>*/]), writer);
    ::g::Outracks::Simulator::List::Write2(::TYPES[72/*Outracks.Simulator.List.Write<Outracks.Simulator.ObjectIdentifier>*/], writer, type.Value(::TYPES[67/*Uno.Collections.KeyValuePair<Outracks.Simulator.ObjectIdentifier, Uno.Collections.IEnumerable<Outracks.Simulator.ObjectIdentifier>>*/]), uDelegate::New(::TYPES[73/*Uno.Action<Outracks.Simulator.ObjectIdentifier, System.IO.BinaryWriter>*/], (void*)::g::Outracks::Simulator::ObjectIdentifier__Write_fn));
}
// }

// /usr/local/share/uno/Packages/Outracks.Simulator.Common.Uno/0.0.0/bytecode/$.uno
// --------------------------------------------------------------------------------

// public sealed class ReadProperty :510
// {
static void ReadProperty_build(uType* type)
{
    ::STRINGS[0] = uString::Const(".");
    type->SetFields(0,
        ::g::Outracks::Simulator::Bytecode::Expression_typeof(), offsetof(::g::Outracks::Simulator::Bytecode::ReadProperty, Object), 0,
        ::g::Outracks::Simulator::Bytecode::TypeMemberName_typeof(), offsetof(::g::Outracks::Simulator::Bytecode::ReadProperty, Property), 0);
    type->Reflection.SetFields(2,
        new uField("Object", 0),
        new uField("Property", 1));
    type->Reflection.SetFunctions(3,
        new uFunction(".ctor", NULL, (void*)ReadProperty__New1_fn, 0, true, type, 2, ::g::Outracks::Simulator::Bytecode::Expression_typeof(), ::g::Outracks::Simulator::Bytecode::TypeMemberName_typeof()),
        new uFunction("Read", NULL, (void*)ReadProperty__Read2_fn, 0, true, type, 1, ::g::System::IO::BinaryReader_typeof()),
        new uFunction("Write", NULL, (void*)ReadProperty__Write2_fn, 0, true, uVoid_typeof(), 2, type, ::g::System::IO::BinaryWriter_typeof()));
}

::g::Outracks::Simulator::Bytecode::Expression_type* ReadProperty_typeof()
{
    static uSStrong< ::g::Outracks::Simulator::Bytecode::Expression_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Outracks::Simulator::Bytecode::Expression_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(ReadProperty);
    options.TypeSize = sizeof(::g::Outracks::Simulator::Bytecode::Expression_type);
    type = (::g::Outracks::Simulator::Bytecode::Expression_type*)uClassType::New("Outracks.Simulator.Bytecode.ReadProperty", options);
    type->fp_build_ = ReadProperty_build;
    type->fp_get_ExpressionId = (void(*)(::g::Outracks::Simulator::Bytecode::Expression*, uChar*))ReadProperty__get_ExpressionId_fn;
    type->fp_ToString = (void(*)(uObject*, uString**))ReadProperty__ToString_fn;
    type->fp_WriteExpression = (void(*)(::g::Outracks::Simulator::Bytecode::Expression*, ::g::System::IO::BinaryWriter*))ReadProperty__WriteExpression_fn;
    return type;
}

// public ReadProperty(Outracks.Simulator.Bytecode.Expression o, Outracks.Simulator.Bytecode.TypeMemberName property) :517
void ReadProperty__ctor_2_fn(ReadProperty* __this, ::g::Outracks::Simulator::Bytecode::Expression* o, ::g::Outracks::Simulator::Bytecode::TypeMemberName* property)
{
    __this->ctor_2(o, property);
}

// public override sealed char get_ExpressionId() :515
void ReadProperty__get_ExpressionId_fn(ReadProperty* __this, uChar* __retval)
{
    return *__retval = 'l', void();
}

// public ReadProperty New(Outracks.Simulator.Bytecode.Expression o, Outracks.Simulator.Bytecode.TypeMemberName property) :517
void ReadProperty__New1_fn(::g::Outracks::Simulator::Bytecode::Expression* o, ::g::Outracks::Simulator::Bytecode::TypeMemberName* property, ReadProperty** __retval)
{
    *__retval = ReadProperty::New1(o, property);
}

// public static new Outracks.Simulator.Bytecode.ReadProperty Read(System.IO.BinaryReader reader) :539
void ReadProperty__Read2_fn(::g::System::IO::BinaryReader* reader, ReadProperty** __retval)
{
    *__retval = ReadProperty::Read2(reader);
}

// public override sealed string ToString() :523
void ReadProperty__ToString_fn(ReadProperty* __this, uString** __retval)
{
    uStackFrame __("Outracks.Simulator.Bytecode.ReadProperty", "ToString()");
    return *__retval = ::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition(__this->Object, ::STRINGS[0/*"."*/]), uPtr(__this->Property)->Name), void();
}

// public static void Write(Outracks.Simulator.Bytecode.ReadProperty o, System.IO.BinaryWriter writer) :528
void ReadProperty__Write2_fn(ReadProperty* o, ::g::System::IO::BinaryWriter* writer)
{
    ReadProperty::Write2(o, writer);
}

// protected override sealed void WriteExpression(System.IO.BinaryWriter writer) :533
void ReadProperty__WriteExpression_fn(ReadProperty* __this, ::g::System::IO::BinaryWriter* writer)
{
    uStackFrame __("Outracks.Simulator.Bytecode.ReadProperty", "WriteExpression(System.IO.BinaryWriter)");
    ::g::Outracks::Simulator::Bytecode::Expression::Write1(__this->Object, writer);
    ::g::Outracks::Simulator::Bytecode::TypeMemberName::Write(__this->Property, writer);
}

// public ReadProperty(Outracks.Simulator.Bytecode.Expression o, Outracks.Simulator.Bytecode.TypeMemberName property) [instance] :517
void ReadProperty::ctor_2(::g::Outracks::Simulator::Bytecode::Expression* o, ::g::Outracks::Simulator::Bytecode::TypeMemberName* property)
{
    ctor_1();
    Object = o;
    Property = property;
}

// public ReadProperty New(Outracks.Simulator.Bytecode.Expression o, Outracks.Simulator.Bytecode.TypeMemberName property) [static] :517
ReadProperty* ReadProperty::New1(::g::Outracks::Simulator::Bytecode::Expression* o, ::g::Outracks::Simulator::Bytecode::TypeMemberName* property)
{
    ReadProperty* obj1 = (ReadProperty*)uNew(ReadProperty_typeof());
    obj1->ctor_2(o, property);
    return obj1;
}

// public static new Outracks.Simulator.Bytecode.ReadProperty Read(System.IO.BinaryReader reader) [static] :539
ReadProperty* ReadProperty::Read2(::g::System::IO::BinaryReader* reader)
{
    uStackFrame __("Outracks.Simulator.Bytecode.ReadProperty", "Read(System.IO.BinaryReader)");
    ::g::Outracks::Simulator::Bytecode::Expression* _Object = (::g::Outracks::Simulator::Bytecode::Expression*)uPtr(::g::Outracks::Simulator::Bytecode::Expression::Read1())->Invoke(1, reader);
    ::g::Outracks::Simulator::Bytecode::TypeMemberName* _Property = ::g::Outracks::Simulator::Bytecode::TypeMemberName::Read(reader);
    return ReadProperty::New1(_Object, _Property);
}

// public static void Write(Outracks.Simulator.Bytecode.ReadProperty o, System.IO.BinaryWriter writer) [static] :528
void ReadProperty::Write2(ReadProperty* o, ::g::System::IO::BinaryWriter* writer)
{
    uStackFrame __("Outracks.Simulator.Bytecode.ReadProperty", "Write(Outracks.Simulator.Bytecode.ReadProperty,System.IO.BinaryWriter)");
    uPtr(o)->WriteExpression(writer);
}
// }

// /usr/local/share/uno/Packages/Outracks.Simulator.Common.Uno/0.0.0/bytecode/$.uno
// --------------------------------------------------------------------------------

// public sealed class ReadStaticField :476
// {
static void ReadStaticField_build(uType* type)
{
    ::STRINGS[0] = uString::Const(".");
    type->SetFields(0,
        ::g::Outracks::Simulator::Bytecode::StaticMemberName_typeof(), offsetof(::g::Outracks::Simulator::Bytecode::ReadStaticField, Field), 0);
    type->Reflection.SetFields(1,
        new uField("Field", 0));
    type->Reflection.SetFunctions(3,
        new uFunction(".ctor", NULL, (void*)ReadStaticField__New1_fn, 0, true, type, 1, ::g::Outracks::Simulator::Bytecode::StaticMemberName_typeof()),
        new uFunction("Read", NULL, (void*)ReadStaticField__Read2_fn, 0, true, type, 1, ::g::System::IO::BinaryReader_typeof()),
        new uFunction("Write", NULL, (void*)ReadStaticField__Write2_fn, 0, true, uVoid_typeof(), 2, type, ::g::System::IO::BinaryWriter_typeof()));
}

::g::Outracks::Simulator::Bytecode::Expression_type* ReadStaticField_typeof()
{
    static uSStrong< ::g::Outracks::Simulator::Bytecode::Expression_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Outracks::Simulator::Bytecode::Expression_typeof();
    options.FieldCount = 1;
    options.ObjectSize = sizeof(ReadStaticField);
    options.TypeSize = sizeof(::g::Outracks::Simulator::Bytecode::Expression_type);
    type = (::g::Outracks::Simulator::Bytecode::Expression_type*)uClassType::New("Outracks.Simulator.Bytecode.ReadStaticField", options);
    type->fp_build_ = ReadStaticField_build;
    type->fp_get_ExpressionId = (void(*)(::g::Outracks::Simulator::Bytecode::Expression*, uChar*))ReadStaticField__get_ExpressionId_fn;
    type->fp_ToString = (void(*)(uObject*, uString**))ReadStaticField__ToString_fn;
    type->fp_WriteExpression = (void(*)(::g::Outracks::Simulator::Bytecode::Expression*, ::g::System::IO::BinaryWriter*))ReadStaticField__WriteExpression_fn;
    return type;
}

// public ReadStaticField(Outracks.Simulator.Bytecode.StaticMemberName field) :482
void ReadStaticField__ctor_2_fn(ReadStaticField* __this, ::g::Outracks::Simulator::Bytecode::StaticMemberName* field)
{
    __this->ctor_2(field);
}

// public override sealed char get_ExpressionId() :480
void ReadStaticField__get_ExpressionId_fn(ReadStaticField* __this, uChar* __retval)
{
    return *__retval = 'k', void();
}

// public ReadStaticField New(Outracks.Simulator.Bytecode.StaticMemberName field) :482
void ReadStaticField__New1_fn(::g::Outracks::Simulator::Bytecode::StaticMemberName* field, ReadStaticField** __retval)
{
    *__retval = ReadStaticField::New1(field);
}

// public static new Outracks.Simulator.Bytecode.ReadStaticField Read(System.IO.BinaryReader reader) :502
void ReadStaticField__Read2_fn(::g::System::IO::BinaryReader* reader, ReadStaticField** __retval)
{
    *__retval = ReadStaticField::Read2(reader);
}

// public override sealed string ToString() :487
void ReadStaticField__ToString_fn(ReadStaticField* __this, uString** __retval)
{
    uStackFrame __("Outracks.Simulator.Bytecode.ReadStaticField", "ToString()");
    return *__retval = ::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(uPtr(uPtr(__this->Field)->TypeName)->FullName(), ::STRINGS[0/*"."*/]), uPtr(uPtr(__this->Field)->MemberName)->Name), void();
}

// public static void Write(Outracks.Simulator.Bytecode.ReadStaticField o, System.IO.BinaryWriter writer) :492
void ReadStaticField__Write2_fn(ReadStaticField* o, ::g::System::IO::BinaryWriter* writer)
{
    ReadStaticField::Write2(o, writer);
}

// protected override sealed void WriteExpression(System.IO.BinaryWriter writer) :497
void ReadStaticField__WriteExpression_fn(ReadStaticField* __this, ::g::System::IO::BinaryWriter* writer)
{
    uStackFrame __("Outracks.Simulator.Bytecode.ReadStaticField", "WriteExpression(System.IO.BinaryWriter)");
    ::g::Outracks::Simulator::Bytecode::StaticMemberName::Write(__this->Field, writer);
}

// public ReadStaticField(Outracks.Simulator.Bytecode.StaticMemberName field) [instance] :482
void ReadStaticField::ctor_2(::g::Outracks::Simulator::Bytecode::StaticMemberName* field)
{
    ctor_1();
    Field = field;
}

// public ReadStaticField New(Outracks.Simulator.Bytecode.StaticMemberName field) [static] :482
ReadStaticField* ReadStaticField::New1(::g::Outracks::Simulator::Bytecode::StaticMemberName* field)
{
    ReadStaticField* obj1 = (ReadStaticField*)uNew(ReadStaticField_typeof());
    obj1->ctor_2(field);
    return obj1;
}

// public static new Outracks.Simulator.Bytecode.ReadStaticField Read(System.IO.BinaryReader reader) [static] :502
ReadStaticField* ReadStaticField::Read2(::g::System::IO::BinaryReader* reader)
{
    uStackFrame __("Outracks.Simulator.Bytecode.ReadStaticField", "Read(System.IO.BinaryReader)");
    ::g::Outracks::Simulator::Bytecode::StaticMemberName* _Field = ::g::Outracks::Simulator::Bytecode::StaticMemberName::Read(reader);
    return ReadStaticField::New1(_Field);
}

// public static void Write(Outracks.Simulator.Bytecode.ReadStaticField o, System.IO.BinaryWriter writer) [static] :492
void ReadStaticField::Write2(ReadStaticField* o, ::g::System::IO::BinaryWriter* writer)
{
    uStackFrame __("Outracks.Simulator.Bytecode.ReadStaticField", "Write(Outracks.Simulator.Bytecode.ReadStaticField,System.IO.BinaryWriter)");
    uPtr(o)->WriteExpression(writer);
}
// }

// /usr/local/share/uno/Packages/Outracks.Simulator.Common.Uno/0.0.0/bytecode/$.uno
// --------------------------------------------------------------------------------

// public sealed class ReadVariable :265
// {
static void ReadVariable_build(uType* type)
{
    type->SetFields(0,
        ::g::Outracks::Simulator::Bytecode::Variable_typeof(), offsetof(::g::Outracks::Simulator::Bytecode::ReadVariable, Variable), 0);
    type->Reflection.SetFields(1,
        new uField("Variable", 0));
    type->Reflection.SetFunctions(3,
        new uFunction(".ctor", NULL, (void*)ReadVariable__New1_fn, 0, true, type, 1, ::g::Outracks::Simulator::Bytecode::Variable_typeof()),
        new uFunction("Read", NULL, (void*)ReadVariable__Read2_fn, 0, true, type, 1, ::g::System::IO::BinaryReader_typeof()),
        new uFunction("Write", NULL, (void*)ReadVariable__Write2_fn, 0, true, uVoid_typeof(), 2, type, ::g::System::IO::BinaryWriter_typeof()));
}

::g::Outracks::Simulator::Bytecode::Expression_type* ReadVariable_typeof()
{
    static uSStrong< ::g::Outracks::Simulator::Bytecode::Expression_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Outracks::Simulator::Bytecode::Expression_typeof();
    options.FieldCount = 1;
    options.ObjectSize = sizeof(ReadVariable);
    options.TypeSize = sizeof(::g::Outracks::Simulator::Bytecode::Expression_type);
    type = (::g::Outracks::Simulator::Bytecode::Expression_type*)uClassType::New("Outracks.Simulator.Bytecode.ReadVariable", options);
    type->fp_build_ = ReadVariable_build;
    type->fp_get_ExpressionId = (void(*)(::g::Outracks::Simulator::Bytecode::Expression*, uChar*))ReadVariable__get_ExpressionId_fn;
    type->fp_ToString = (void(*)(uObject*, uString**))ReadVariable__ToString_fn;
    type->fp_WriteExpression = (void(*)(::g::Outracks::Simulator::Bytecode::Expression*, ::g::System::IO::BinaryWriter*))ReadVariable__WriteExpression_fn;
    return type;
}

// public ReadVariable(Outracks.Simulator.Bytecode.Variable variable) :271
void ReadVariable__ctor_2_fn(ReadVariable* __this, ::g::Outracks::Simulator::Bytecode::Variable* variable)
{
    __this->ctor_2(variable);
}

// public override sealed char get_ExpressionId() :269
void ReadVariable__get_ExpressionId_fn(ReadVariable* __this, uChar* __retval)
{
    return *__retval = 'a', void();
}

// public ReadVariable New(Outracks.Simulator.Bytecode.Variable variable) :271
void ReadVariable__New1_fn(::g::Outracks::Simulator::Bytecode::Variable* variable, ReadVariable** __retval)
{
    *__retval = ReadVariable::New1(variable);
}

// public static new Outracks.Simulator.Bytecode.ReadVariable Read(System.IO.BinaryReader reader) :291
void ReadVariable__Read2_fn(::g::System::IO::BinaryReader* reader, ReadVariable** __retval)
{
    *__retval = ReadVariable::Read2(reader);
}

// public override sealed string ToString() :276
void ReadVariable__ToString_fn(ReadVariable* __this, uString** __retval)
{
    uStackFrame __("Outracks.Simulator.Bytecode.ReadVariable", "ToString()");
    return *__retval = uPtr(__this->Variable)->Name, void();
}

// public static void Write(Outracks.Simulator.Bytecode.ReadVariable o, System.IO.BinaryWriter writer) :281
void ReadVariable__Write2_fn(ReadVariable* o, ::g::System::IO::BinaryWriter* writer)
{
    ReadVariable::Write2(o, writer);
}

// protected override sealed void WriteExpression(System.IO.BinaryWriter writer) :286
void ReadVariable__WriteExpression_fn(ReadVariable* __this, ::g::System::IO::BinaryWriter* writer)
{
    uStackFrame __("Outracks.Simulator.Bytecode.ReadVariable", "WriteExpression(System.IO.BinaryWriter)");
    uPtr(::g::Outracks::Simulator::Bytecode::Variable::Write())->Invoke(2, (::g::Outracks::Simulator::Bytecode::Variable*)__this->Variable, writer);
}

// public ReadVariable(Outracks.Simulator.Bytecode.Variable variable) [instance] :271
void ReadVariable::ctor_2(::g::Outracks::Simulator::Bytecode::Variable* variable)
{
    ctor_1();
    Variable = variable;
}

// public ReadVariable New(Outracks.Simulator.Bytecode.Variable variable) [static] :271
ReadVariable* ReadVariable::New1(::g::Outracks::Simulator::Bytecode::Variable* variable)
{
    ReadVariable* obj1 = (ReadVariable*)uNew(ReadVariable_typeof());
    obj1->ctor_2(variable);
    return obj1;
}

// public static new Outracks.Simulator.Bytecode.ReadVariable Read(System.IO.BinaryReader reader) [static] :291
ReadVariable* ReadVariable::Read2(::g::System::IO::BinaryReader* reader)
{
    uStackFrame __("Outracks.Simulator.Bytecode.ReadVariable", "Read(System.IO.BinaryReader)");
    ::g::Outracks::Simulator::Bytecode::Variable* variable = (::g::Outracks::Simulator::Bytecode::Variable*)uPtr(::g::Outracks::Simulator::Bytecode::Variable::Read())->Invoke(1, reader);
    return ReadVariable::New1(variable);
}

// public static void Write(Outracks.Simulator.Bytecode.ReadVariable o, System.IO.BinaryWriter writer) [static] :281
void ReadVariable::Write2(ReadVariable* o, ::g::System::IO::BinaryWriter* writer)
{
    uStackFrame __("Outracks.Simulator.Bytecode.ReadVariable", "Write(Outracks.Simulator.Bytecode.ReadVariable,System.IO.BinaryWriter)");
    uPtr(o)->WriteExpression(writer);
}
// }

// /usr/local/share/uno/Packages/Outracks.Simulator.Common.Uno/0.0.0/bytecode/$.uno
// --------------------------------------------------------------------------------

// public sealed class RemoveEventHandler :638
// {
static void RemoveEventHandler_build(uType* type)
{
    ::STRINGS[0] = uString::Const(".");
    ::STRINGS[25] = uString::Const(" -= ");
    type->SetFields(0,
        ::g::Outracks::Simulator::Bytecode::TypeMemberName_typeof(), offsetof(::g::Outracks::Simulator::Bytecode::RemoveEventHandler, Event), 0,
        ::g::Outracks::Simulator::Bytecode::Expression_typeof(), offsetof(::g::Outracks::Simulator::Bytecode::RemoveEventHandler, Handler), 0,
        ::g::Outracks::Simulator::Bytecode::Expression_typeof(), offsetof(::g::Outracks::Simulator::Bytecode::RemoveEventHandler, Object), 0);
    type->Reflection.SetFields(3,
        new uField("Event", 0),
        new uField("Handler", 1),
        new uField("Object", 2));
    type->Reflection.SetFunctions(3,
        new uFunction(".ctor", NULL, (void*)RemoveEventHandler__New1_fn, 0, true, type, 3, ::g::Outracks::Simulator::Bytecode::Expression_typeof(), ::g::Outracks::Simulator::Bytecode::TypeMemberName_typeof(), ::g::Outracks::Simulator::Bytecode::Expression_typeof()),
        new uFunction("Read", NULL, (void*)RemoveEventHandler__Read2_fn, 0, true, type, 1, ::g::System::IO::BinaryReader_typeof()),
        new uFunction("Write", NULL, (void*)RemoveEventHandler__Write2_fn, 0, true, uVoid_typeof(), 2, type, ::g::System::IO::BinaryWriter_typeof()));
}

::g::Outracks::Simulator::Bytecode::Expression_type* RemoveEventHandler_typeof()
{
    static uSStrong< ::g::Outracks::Simulator::Bytecode::Expression_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Outracks::Simulator::Bytecode::Expression_typeof();
    options.FieldCount = 3;
    options.ObjectSize = sizeof(RemoveEventHandler);
    options.TypeSize = sizeof(::g::Outracks::Simulator::Bytecode::Expression_type);
    type = (::g::Outracks::Simulator::Bytecode::Expression_type*)uClassType::New("Outracks.Simulator.Bytecode.RemoveEventHandler", options);
    type->fp_build_ = RemoveEventHandler_build;
    type->fp_get_ExpressionId = (void(*)(::g::Outracks::Simulator::Bytecode::Expression*, uChar*))RemoveEventHandler__get_ExpressionId_fn;
    type->fp_ToString = (void(*)(uObject*, uString**))RemoveEventHandler__ToString_fn;
    type->fp_WriteExpression = (void(*)(::g::Outracks::Simulator::Bytecode::Expression*, ::g::System::IO::BinaryWriter*))RemoveEventHandler__WriteExpression_fn;
    return type;
}

// public RemoveEventHandler(Outracks.Simulator.Bytecode.Expression o, Outracks.Simulator.Bytecode.TypeMemberName ev, Outracks.Simulator.Bytecode.Expression handler) :646
void RemoveEventHandler__ctor_2_fn(RemoveEventHandler* __this, ::g::Outracks::Simulator::Bytecode::Expression* o, ::g::Outracks::Simulator::Bytecode::TypeMemberName* ev, ::g::Outracks::Simulator::Bytecode::Expression* handler)
{
    __this->ctor_2(o, ev, handler);
}

// public override sealed char get_ExpressionId() :644
void RemoveEventHandler__get_ExpressionId_fn(RemoveEventHandler* __this, uChar* __retval)
{
    return *__retval = 'o', void();
}

// public RemoveEventHandler New(Outracks.Simulator.Bytecode.Expression o, Outracks.Simulator.Bytecode.TypeMemberName ev, Outracks.Simulator.Bytecode.Expression handler) :646
void RemoveEventHandler__New1_fn(::g::Outracks::Simulator::Bytecode::Expression* o, ::g::Outracks::Simulator::Bytecode::TypeMemberName* ev, ::g::Outracks::Simulator::Bytecode::Expression* handler, RemoveEventHandler** __retval)
{
    *__retval = RemoveEventHandler::New1(o, ev, handler);
}

// public static new Outracks.Simulator.Bytecode.RemoveEventHandler Read(System.IO.BinaryReader reader) :670
void RemoveEventHandler__Read2_fn(::g::System::IO::BinaryReader* reader, RemoveEventHandler** __retval)
{
    *__retval = RemoveEventHandler::Read2(reader);
}

// public override sealed string ToString() :653
void RemoveEventHandler__ToString_fn(RemoveEventHandler* __this, uString** __retval)
{
    uStackFrame __("Outracks.Simulator.Bytecode.RemoveEventHandler", "ToString()");
    return *__retval = ::g::Uno::String::op_Addition1(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition(__this->Object, ::STRINGS[0/*"."*/]), uPtr(__this->Event)->Name), ::STRINGS[25/*" -= "*/]), __this->Handler), void();
}

// public static void Write(Outracks.Simulator.Bytecode.RemoveEventHandler o, System.IO.BinaryWriter writer) :658
void RemoveEventHandler__Write2_fn(RemoveEventHandler* o, ::g::System::IO::BinaryWriter* writer)
{
    RemoveEventHandler::Write2(o, writer);
}

// protected override sealed void WriteExpression(System.IO.BinaryWriter writer) :663
void RemoveEventHandler__WriteExpression_fn(RemoveEventHandler* __this, ::g::System::IO::BinaryWriter* writer)
{
    uStackFrame __("Outracks.Simulator.Bytecode.RemoveEventHandler", "WriteExpression(System.IO.BinaryWriter)");
    ::g::Outracks::Simulator::Bytecode::Expression::Write1(__this->Object, writer);
    ::g::Outracks::Simulator::Bytecode::TypeMemberName::Write(__this->Event, writer);
    ::g::Outracks::Simulator::Bytecode::Expression::Write1(__this->Handler, writer);
}

// public RemoveEventHandler(Outracks.Simulator.Bytecode.Expression o, Outracks.Simulator.Bytecode.TypeMemberName ev, Outracks.Simulator.Bytecode.Expression handler) [instance] :646
void RemoveEventHandler::ctor_2(::g::Outracks::Simulator::Bytecode::Expression* o, ::g::Outracks::Simulator::Bytecode::TypeMemberName* ev, ::g::Outracks::Simulator::Bytecode::Expression* handler)
{
    ctor_1();
    Object = o;
    Event = ev;
    Handler = handler;
}

// public RemoveEventHandler New(Outracks.Simulator.Bytecode.Expression o, Outracks.Simulator.Bytecode.TypeMemberName ev, Outracks.Simulator.Bytecode.Expression handler) [static] :646
RemoveEventHandler* RemoveEventHandler::New1(::g::Outracks::Simulator::Bytecode::Expression* o, ::g::Outracks::Simulator::Bytecode::TypeMemberName* ev, ::g::Outracks::Simulator::Bytecode::Expression* handler)
{
    RemoveEventHandler* obj1 = (RemoveEventHandler*)uNew(RemoveEventHandler_typeof());
    obj1->ctor_2(o, ev, handler);
    return obj1;
}

// public static new Outracks.Simulator.Bytecode.RemoveEventHandler Read(System.IO.BinaryReader reader) [static] :670
RemoveEventHandler* RemoveEventHandler::Read2(::g::System::IO::BinaryReader* reader)
{
    uStackFrame __("Outracks.Simulator.Bytecode.RemoveEventHandler", "Read(System.IO.BinaryReader)");
    ::g::Outracks::Simulator::Bytecode::Expression* _Object = (::g::Outracks::Simulator::Bytecode::Expression*)uPtr(::g::Outracks::Simulator::Bytecode::Expression::Read1())->Invoke(1, reader);
    ::g::Outracks::Simulator::Bytecode::TypeMemberName* _Event = ::g::Outracks::Simulator::Bytecode::TypeMemberName::Read(reader);
    ::g::Outracks::Simulator::Bytecode::Expression* _Handler = (::g::Outracks::Simulator::Bytecode::Expression*)uPtr(::g::Outracks::Simulator::Bytecode::Expression::Read1())->Invoke(1, reader);
    return RemoveEventHandler::New1(_Object, _Event, _Handler);
}

// public static void Write(Outracks.Simulator.Bytecode.RemoveEventHandler o, System.IO.BinaryWriter writer) [static] :658
void RemoveEventHandler::Write2(RemoveEventHandler* o, ::g::System::IO::BinaryWriter* writer)
{
    uStackFrame __("Outracks.Simulator.Bytecode.RemoveEventHandler", "Write(Outracks.Simulator.Bytecode.RemoveEventHandler,System.IO.BinaryWriter)");
    uPtr(o)->WriteExpression(writer);
}
// }

// /usr/local/share/uno/Packages/Outracks.Simulator.Common.Uno/0.0.0/bytecode/$.uno
// --------------------------------------------------------------------------------

// public sealed class Return :1701
// {
static void Return_build(uType* type)
{
    ::STRINGS[26] = uString::Const("return ");
    type->SetFields(0,
        ::g::Outracks::Simulator::Bytecode::Expression_typeof(), offsetof(::g::Outracks::Simulator::Bytecode::Return, Value), 0);
    type->Reflection.SetFields(1,
        new uField("Value", 0));
    type->Reflection.SetFunctions(2,
        new uFunction(".ctor", NULL, (void*)Return__New1_fn, 0, true, type, 1, ::g::Outracks::Simulator::Bytecode::Expression_typeof()),
        new uFunction("Read", NULL, (void*)Return__Read1_fn, 0, true, type, 1, ::g::System::IO::BinaryReader_typeof()));
}

::g::Outracks::Simulator::Bytecode::Statement_type* Return_typeof()
{
    static uSStrong< ::g::Outracks::Simulator::Bytecode::Statement_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Outracks::Simulator::Bytecode::Statement_typeof();
    options.FieldCount = 1;
    options.ObjectSize = sizeof(Return);
    options.TypeSize = sizeof(::g::Outracks::Simulator::Bytecode::Statement_type);
    type = (::g::Outracks::Simulator::Bytecode::Statement_type*)uClassType::New("Outracks.Simulator.Bytecode.Return", options);
    type->fp_build_ = Return_build;
    type->fp_get_StatementId = (void(*)(::g::Outracks::Simulator::Bytecode::Statement*, uChar*))Return__get_StatementId_fn;
    type->fp_ToString = (void(*)(uObject*, uString**))Return__ToString_fn;
    type->fp_WriteStatement = (void(*)(::g::Outracks::Simulator::Bytecode::Statement*, ::g::System::IO::BinaryWriter*))Return__WriteStatement_fn;
    return type;
}

// public Return(Outracks.Simulator.Bytecode.Expression value) :1704
void Return__ctor_1_fn(Return* __this, ::g::Outracks::Simulator::Bytecode::Expression* value)
{
    __this->ctor_1(value);
}

// public Return New(Outracks.Simulator.Bytecode.Expression value) :1704
void Return__New1_fn(::g::Outracks::Simulator::Bytecode::Expression* value, Return** __retval)
{
    *__retval = Return::New1(value);
}

// public static new Outracks.Simulator.Bytecode.Return Read(System.IO.BinaryReader reader) :1719
void Return__Read1_fn(::g::System::IO::BinaryReader* reader, Return** __retval)
{
    *__retval = Return::Read1(reader);
}

// public override sealed char get_StatementId() :1724
void Return__get_StatementId_fn(Return* __this, uChar* __retval)
{
    return *__retval = 'r', void();
}

// public override sealed string ToString() :1709
void Return__ToString_fn(Return* __this, uString** __retval)
{
    uStackFrame __("Outracks.Simulator.Bytecode.Return", "ToString()");
    return *__retval = ::g::Uno::String::op_Addition1(::STRINGS[26/*"return "*/], __this->Value), void();
}

// protected override sealed void WriteStatement(System.IO.BinaryWriter writer) :1714
void Return__WriteStatement_fn(Return* __this, ::g::System::IO::BinaryWriter* writer)
{
    uStackFrame __("Outracks.Simulator.Bytecode.Return", "WriteStatement(System.IO.BinaryWriter)");
    ::g::Outracks::Simulator::Bytecode::Expression::Write1(__this->Value, writer);
}

// public Return(Outracks.Simulator.Bytecode.Expression value) [instance] :1704
void Return::ctor_1(::g::Outracks::Simulator::Bytecode::Expression* value)
{
    ctor_();
    Value = value;
}

// public Return New(Outracks.Simulator.Bytecode.Expression value) [static] :1704
Return* Return::New1(::g::Outracks::Simulator::Bytecode::Expression* value)
{
    Return* obj1 = (Return*)uNew(Return_typeof());
    obj1->ctor_1(value);
    return obj1;
}

// public static new Outracks.Simulator.Bytecode.Return Read(System.IO.BinaryReader reader) [static] :1719
Return* Return::Read1(::g::System::IO::BinaryReader* reader)
{
    uStackFrame __("Outracks.Simulator.Bytecode.Return", "Read(System.IO.BinaryReader)");
    return Return::New1((::g::Outracks::Simulator::Bytecode::Expression*)uPtr(::g::Outracks::Simulator::Bytecode::Expression::Read1())->Invoke(1, reader));
}
// }

// /usr/local/share/uno/Packages/Outracks.Simulator.Common.Uno/0.0.0/bytecode/$.uno
// --------------------------------------------------------------------------------

// public sealed class Signature :1508
// {
// static Signature() :1508
static void Signature__cctor__fn(uType* __type)
{
    Signature::Read_ = uDelegate::New(::TYPES[74/*Uno.Func<System.IO.BinaryReader, Outracks.Simulator.Bytecode.Signature>*/], (void*)Signature___Read_fn);
}

static void Signature_build(uType* type)
{
    ::STRINGS[12] = uString::Const("object");
    ::STRINGS[6] = uString::Const("(");
    ::STRINGS[7] = uString::Const(", ");
    ::STRINGS[8] = uString::Const(")");
    ::TYPES[74] = ::g::Uno::Func1_typeof()->MakeType(::g::System::IO::BinaryReader_typeof(), type, NULL);
    ::TYPES[75] = ::g::Outracks::Simulator::List_typeof()->MakeMethod(1/*Read<Outracks.Simulator.Bytecode.Parameter>*/, ::g::Outracks::Simulator::Bytecode::Parameter_typeof(), NULL);
    ::TYPES[76] = ::g::Outracks::Optional_typeof()->MakeMethod(1/*Read<Outracks.Simulator.Bytecode.TypeName>*/, ::g::Outracks::Simulator::Bytecode::TypeName_typeof(), NULL);
    ::TYPES[77] = ::g::Outracks::Simulator::Bytecode::Parameter_typeof()->Array();
    ::TYPES[78] = ::g::Outracks::Simulator::ImmutableList_typeof()->MakeType(::g::Outracks::Simulator::Bytecode::Parameter_typeof(), NULL);
    ::TYPES[79] = ::g::Outracks::Optional_typeof()->MakeMethod(0/*None<Outracks.Simulator.Bytecode.TypeName>*/, ::g::Outracks::Simulator::Bytecode::TypeName_typeof(), NULL);
    ::TYPES[80] = ::g::Outracks::Optional_typeof()->MakeMethod(3/*Some<Outracks.Simulator.Bytecode.TypeName>*/, ::g::Outracks::Simulator::Bytecode::TypeName_typeof(), NULL);
    ::TYPES[81] = ::g::Uno::String_typeof()->Array();
    ::TYPES[82] = ::g::Uno::Runtime::Implementation::Internal::ArrayEnumerable_typeof()->MakeType(::g::Uno::String_typeof(), NULL);
    ::TYPES[83] = ::g::Outracks::Simulator::List_typeof()->MakeMethod(6/*Write<Outracks.Simulator.Bytecode.Parameter>*/, ::g::Outracks::Simulator::Bytecode::Parameter_typeof(), NULL);
    ::TYPES[84] = ::g::Outracks::Optional_typeof()->MakeMethod(5/*Write<Outracks.Simulator.Bytecode.TypeName>*/, ::g::Outracks::Simulator::Bytecode::TypeName_typeof(), NULL);
    type->SetFields(0,
        ::TYPES[78/*Outracks.Simulator.ImmutableList<Outracks.Simulator.Bytecode.Parameter>*/], offsetof(::g::Outracks::Simulator::Bytecode::Signature, Parameters), 0,
        ::g::Outracks::Optional1_typeof()->MakeType(::g::Outracks::Simulator::Bytecode::TypeName_typeof(), NULL), (uintptr_t)0, uFieldFlagsConstrained,
        ::TYPES[74/*Uno.Func<System.IO.BinaryReader, Outracks.Simulator.Bytecode.Signature>*/], (uintptr_t)&::g::Outracks::Simulator::Bytecode::Signature::Read_, uFieldFlagsStatic);
    type->Reflection.SetFields(3,
        new uField("Parameters", 0),
        new uField("Read", 2),
        new uField("ReturnType", 1));
    type->Reflection.SetFunctions(5,
        new uFunction("_Read", NULL, (void*)Signature___Read_fn, 0, true, type, 1, ::g::System::IO::BinaryReader_typeof()),
        new uFunction("Action", NULL, (void*)Signature__Action_fn, 0, true, type, 1, ::g::Outracks::Simulator::Bytecode::Variable_typeof()->Array()),
        new uFunction("Func", NULL, (void*)Signature__Func_fn, 0, true, type, 2, ::g::Outracks::Simulator::Bytecode::TypeName_typeof(), ::g::Outracks::Simulator::Bytecode::Variable_typeof()->Array()),
        new uFunction(".ctor", NULL, (void*)Signature__New1_fn, 0, true, type, 2, ::TYPES[78/*Outracks.Simulator.ImmutableList<Outracks.Simulator.Bytecode.Parameter>*/], ::g::Outracks::Optional1_typeof()->MakeType(::g::Outracks::Simulator::Bytecode::TypeName_typeof(), NULL)),
        new uFunction("Write", NULL, (void*)Signature__Write_fn, 0, true, uVoid_typeof(), 2, type, ::g::System::IO::BinaryWriter_typeof()));
}

uType* Signature_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.ObjectSize = sizeof(Signature);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Outracks.Simulator.Bytecode.Signature", options);
    type->fp_build_ = Signature_build;
    type->fp_cctor_ = Signature__cctor__fn;
    type->fp_ToString = (void(*)(uObject*, uString**))Signature__ToString_fn;
    return type;
}

// public Signature(Outracks.Simulator.ImmutableList<Outracks.Simulator.Bytecode.Parameter> parameters, Outracks.Optional<Outracks.Simulator.Bytecode.TypeName> returnType) :1529
void Signature__ctor__fn(Signature* __this, ::g::Outracks::Simulator::ImmutableList* parameters, ::g::Outracks::Optional1<uStrong< ::g::Outracks::Simulator::Bytecode::TypeName*> >* returnType)
{
    __this->ctor_(parameters, *returnType);
}

// public static Outracks.Simulator.Bytecode.Signature _Read(System.IO.BinaryReader reader) :1545
void Signature___Read_fn(::g::System::IO::BinaryReader* reader, Signature** __retval)
{
    *__retval = Signature::_Read(reader);
}

// public static Outracks.Simulator.Bytecode.Signature Action(Outracks.Simulator.Bytecode.Variable[] variables) :1510
void Signature__Action_fn(uArray* variables, Signature** __retval)
{
    *__retval = Signature::Action(variables);
}

// public static Outracks.Simulator.Bytecode.Signature Func(Outracks.Simulator.Bytecode.TypeName returnType, Outracks.Simulator.Bytecode.Variable[] variables) :1518
void Signature__Func_fn(::g::Outracks::Simulator::Bytecode::TypeName* returnType, uArray* variables, Signature** __retval)
{
    *__retval = Signature::Func(returnType, variables);
}

// public Signature New(Outracks.Simulator.ImmutableList<Outracks.Simulator.Bytecode.Parameter> parameters, Outracks.Optional<Outracks.Simulator.Bytecode.TypeName> returnType) :1529
void Signature__New1_fn(::g::Outracks::Simulator::ImmutableList* parameters, ::g::Outracks::Optional1<uStrong< ::g::Outracks::Simulator::Bytecode::TypeName*> >* returnType, Signature** __retval)
{
    *__retval = Signature::New1(parameters, *returnType);
}

// public override sealed string ToString() :1554
void Signature__ToString_fn(Signature* __this, uString** __retval)
{
    uStackFrame __("Outracks.Simulator.Bytecode.Signature", "ToString()");
    ::g::Outracks::Simulator::Bytecode::Parameter* ret5;
    uArray* names = uArray::New(::TYPES[81/*string[]*/], uPtr(__this->Parameters)->Count());

    for (int i = 0; i < uPtr(__this->Parameters)->Count(); i++)
        uPtr(names)->Strong<uString*>(i) = uPtr((::g::Outracks::Simulator::ImmutableList__get_Item_fn(uPtr(__this->Parameters), uCRef<int>(i), &ret5), ret5))->ToString();

    return *__retval = ::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::STRINGS[6/*"("*/], ::g::Outracks::Simulator::StringSplitting::Join((uObject*)((::g::Uno::Runtime::Implementation::Internal::ArrayEnumerable*)::g::Uno::Runtime::Implementation::Internal::ArrayEnumerable::New1(::TYPES[82/*Uno.Runtime.Implementation.Internal.ArrayEnumerable<string>*/], names)), ::STRINGS[7/*", "*/])), ::STRINGS[8/*")"*/]), void();
}

// public static void Write(Outracks.Simulator.Bytecode.Signature s, System.IO.BinaryWriter writer) :1537
void Signature__Write_fn(Signature* s, ::g::System::IO::BinaryWriter* writer)
{
    Signature::Write(s, writer);
}

uSStrong<uDelegate*> Signature::Read_;

// public Signature(Outracks.Simulator.ImmutableList<Outracks.Simulator.Bytecode.Parameter> parameters, Outracks.Optional<Outracks.Simulator.Bytecode.TypeName> returnType) [instance] :1529
void Signature::ctor_(::g::Outracks::Simulator::ImmutableList* parameters, ::g::Outracks::Optional1<uStrong< ::g::Outracks::Simulator::Bytecode::TypeName*> > returnType)
{
    Parameters = parameters;
    ReturnType().Value< ::g::Outracks::Optional1<uStrong< ::g::Outracks::Simulator::Bytecode::TypeName*> > >() = returnType;
}

// public static Outracks.Simulator.Bytecode.Signature _Read(System.IO.BinaryReader reader) [static] :1545
Signature* Signature::_Read(::g::System::IO::BinaryReader* reader)
{
    uStackFrame __("Outracks.Simulator.Bytecode.Signature", "_Read(System.IO.BinaryReader)");
    Signature_typeof()->Init();
    ::g::Outracks::Optional1<uStrong< ::g::Outracks::Simulator::Bytecode::TypeName*> > ret2;
    ::g::Outracks::Simulator::ImmutableList* parameters = (::g::Outracks::Simulator::ImmutableList*)::g::Outracks::Simulator::List::Read(::TYPES[75/*Outracks.Simulator.List.Read<Outracks.Simulator.Bytecode.Parameter>*/], reader, ::g::Outracks::Simulator::Bytecode::Parameter::Read());
    ::g::Outracks::Optional1<uStrong< ::g::Outracks::Simulator::Bytecode::TypeName*> > returnType = (::g::Outracks::Optional__Read_fn(::TYPES[76/*Outracks.Optional.Read<Outracks.Simulator.Bytecode.TypeName>*/], reader, ::g::Outracks::Simulator::Bytecode::TypeName::Read(), &ret2), ret2);
    return Signature::New1(parameters, returnType);
}

// public static Outracks.Simulator.Bytecode.Signature Action(Outracks.Simulator.Bytecode.Variable[] variables) [static] :1510
Signature* Signature::Action(uArray* variables)
{
    uStackFrame __("Outracks.Simulator.Bytecode.Signature", "Action(Outracks.Simulator.Bytecode.Variable[])");
    Signature_typeof()->Init();
    ::g::Outracks::Optional1<uStrong< ::g::Outracks::Simulator::Bytecode::TypeName*> > ret3;
    uArray* parameters = uArray::New(::TYPES[77/*Outracks.Simulator.Bytecode.Parameter[]*/], uPtr(variables)->Length());

    for (int i = 0; i < variables->Length(); i++)
        uPtr(parameters)->Strong< ::g::Outracks::Simulator::Bytecode::Parameter*>(i) = ::g::Outracks::Simulator::Bytecode::Parameter::New1(::g::Outracks::Simulator::Bytecode::TypeName::Parse(::STRINGS[12/*"object"*/]), uPtr(variables)->Strong< ::g::Outracks::Simulator::Bytecode::Variable*>(i));

    return Signature::New1((::g::Outracks::Simulator::ImmutableList*)::g::Outracks::Simulator::ImmutableList::New1(::TYPES[78/*Outracks.Simulator.ImmutableList<Outracks.Simulator.Bytecode.Parameter>*/], parameters), (::g::Outracks::Optional__None_fn(::TYPES[79/*Outracks.Optional.None<Outracks.Simulator.Bytecode.TypeName>*/], &ret3), ret3));
}

// public static Outracks.Simulator.Bytecode.Signature Func(Outracks.Simulator.Bytecode.TypeName returnType, Outracks.Simulator.Bytecode.Variable[] variables) [static] :1518
Signature* Signature::Func(::g::Outracks::Simulator::Bytecode::TypeName* returnType, uArray* variables)
{
    uStackFrame __("Outracks.Simulator.Bytecode.Signature", "Func(Outracks.Simulator.Bytecode.TypeName,Outracks.Simulator.Bytecode.Variable[])");
    Signature_typeof()->Init();
    ::g::Outracks::Optional1<uStrong< ::g::Outracks::Simulator::Bytecode::TypeName*> > ret4;
    uArray* parameters = uArray::New(::TYPES[77/*Outracks.Simulator.Bytecode.Parameter[]*/], uPtr(variables)->Length());

    for (int i = 0; i < variables->Length(); i++)
        uPtr(parameters)->Strong< ::g::Outracks::Simulator::Bytecode::Parameter*>(i) = ::g::Outracks::Simulator::Bytecode::Parameter::New1(::g::Outracks::Simulator::Bytecode::TypeName::Parse(::STRINGS[12/*"object"*/]), uPtr(variables)->Strong< ::g::Outracks::Simulator::Bytecode::Variable*>(i));

    return Signature::New1((::g::Outracks::Simulator::ImmutableList*)::g::Outracks::Simulator::ImmutableList::New1(::TYPES[78/*Outracks.Simulator.ImmutableList<Outracks.Simulator.Bytecode.Parameter>*/], parameters), (::g::Outracks::Optional__Some_fn(::TYPES[80/*Outracks.Optional.Some<Outracks.Simulator.Bytecode.TypeName>*/], returnType, &ret4), ret4));
}

// public Signature New(Outracks.Simulator.ImmutableList<Outracks.Simulator.Bytecode.Parameter> parameters, Outracks.Optional<Outracks.Simulator.Bytecode.TypeName> returnType) [static] :1529
Signature* Signature::New1(::g::Outracks::Simulator::ImmutableList* parameters, ::g::Outracks::Optional1<uStrong< ::g::Outracks::Simulator::Bytecode::TypeName*> > returnType)
{
    Signature* obj1 = (Signature*)uNew(Signature_typeof());
    obj1->ctor_(parameters, returnType);
    return obj1;
}

// public static void Write(Outracks.Simulator.Bytecode.Signature s, System.IO.BinaryWriter writer) [static] :1537
void Signature::Write(Signature* s, ::g::System::IO::BinaryWriter* writer)
{
    uStackFrame __("Outracks.Simulator.Bytecode.Signature", "Write(Outracks.Simulator.Bytecode.Signature,System.IO.BinaryWriter)");
    Signature_typeof()->Init();
    ::g::Outracks::Simulator::List::Write1(::TYPES[83/*Outracks.Simulator.List.Write<Outracks.Simulator.Bytecode.Parameter>*/], writer, uPtr(s)->Parameters, ::g::Outracks::Simulator::Bytecode::Parameter::Write());
    ::g::Outracks::Optional__Write1_fn(::TYPES[84/*Outracks.Optional.Write<Outracks.Simulator.Bytecode.TypeName>*/], writer, uCRef(s->ReturnType().Value< ::g::Outracks::Optional1<uStrong< ::g::Outracks::Simulator::Bytecode::TypeName*> > >()), ::g::Outracks::Simulator::Bytecode::TypeName::Write());
}
// }

// /usr/local/share/uno/Packages/Outracks.Simulator.Common.Uno/0.0.0/bytecode/$.uno
// --------------------------------------------------------------------------------

// public abstract class Statement :1574
// {
// static Statement() :1574
static void Statement__cctor__fn(uType* __type)
{
    Statement::Read_ = uDelegate::New(::TYPES[85/*Uno.Func<System.IO.BinaryReader, Outracks.Simulator.Bytecode.Statement>*/], (void*)Statement___Read_fn);
}

static void Statement_build(uType* type)
{
    ::STRINGS[27] = uString::Const("NOP");
    ::TYPES[85] = ::g::Uno::Func1_typeof()->MakeType(::g::System::IO::BinaryReader_typeof(), type, NULL);
    ::TYPES[86] = ::g::Outracks::Simulator::Bytecode::NoOperation_typeof();
    ::TYPES[87] = ::g::Outracks::Simulator::Bytecode::Expression_typeof();
    ::TYPES[88] = ::g::Outracks::Simulator::Bytecode::Return_typeof();
    ::TYPES[89] = ::g::Outracks::Optional1_typeof()->MakeType(::g::Uno::String_typeof(), NULL);
    ::TYPES[27] = ::g::Outracks::Simulator::Bytecode::Variable_typeof()->Array();
    ::TYPES[90] = ::g::Outracks::Simulator::ImmutableList_typeof()->MakeType(::g::Outracks::Simulator::Bytecode::BindVariable_typeof(), NULL);
    ::TYPES[91] = ::g::Outracks::Simulator::List_typeof()->MakeMethod(0/*Create<Outracks.Simulator.Bytecode.Statement>*/, type, NULL);
    ::TYPES[31] = type->Array();
    ::TYPES[92] = ::TYPES[87/*Outracks.Simulator.Bytecode.Expression*/]->Array();
    ::TYPES[93] = ::g::Uno::Collections::EnumerableExtensions_typeof()->MakeMethod(12/*Union<Outracks.Simulator.Bytecode.Statement>*/, type, NULL);
    ::TYPES[30] = ::g::Uno::Runtime::Implementation::Internal::ArrayEnumerable_typeof()->MakeType(type, NULL);
    type->SetFields(0,
        ::TYPES[85/*Uno.Func<System.IO.BinaryReader, Outracks.Simulator.Bytecode.Statement>*/], (uintptr_t)&::g::Outracks::Simulator::Bytecode::Statement::Read_, uFieldFlagsStatic);
    type->Reflection.SetFields(1,
        new uField("Read", 0));
    type->Reflection.SetFunctions(6,
        new uFunction("_Read", NULL, (void*)Statement___Read_fn, 0, true, type, 1, ::g::System::IO::BinaryReader_typeof()),
        new uFunction("Match", NULL, (void*)Statement__Match_fn, 0, false, uVoid_typeof(), 3, ::g::Uno::Action1_typeof()->MakeType(::TYPES[86/*Outracks.Simulator.Bytecode.NoOperation*/], NULL), ::g::Uno::Action1_typeof()->MakeType(::TYPES[87/*Outracks.Simulator.Bytecode.Expression*/], NULL), ::g::Uno::Action1_typeof()->MakeType(::TYPES[88/*Outracks.Simulator.Bytecode.Return*/], NULL)),
        new uFunction("Match`1", type->MethodTypes[0], (void*)Statement__Match1_fn, 0, false, type->MethodTypes[0]->U(0), 3, ::g::Uno::Func1_typeof()->MakeType(::TYPES[86/*Outracks.Simulator.Bytecode.NoOperation*/], type->MethodTypes[0]->U(0), NULL), ::g::Uno::Func1_typeof()->MakeType(::TYPES[87/*Outracks.Simulator.Bytecode.Expression*/], type->MethodTypes[0]->U(0), NULL), ::g::Uno::Func1_typeof()->MakeType(::TYPES[88/*Outracks.Simulator.Bytecode.Return*/], type->MethodTypes[0]->U(0), NULL)),
        new uFunction("Nop", NULL, (void*)Statement__Nop_fn, 0, true, type, 0),
        new uFunction("get_StatementId", NULL, NULL, offsetof(Statement_type, fp_get_StatementId), false, ::g::Uno::Char_typeof(), 0),
        new uFunction("Write", NULL, (void*)Statement__Write_fn, 0, true, uVoid_typeof(), 2, type, ::g::System::IO::BinaryWriter_typeof()));
}

Statement_type* Statement_typeof()
{
    static uSStrong<Statement_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.MethodTypeCount = 1;
    options.ObjectSize = sizeof(Statement);
    options.TypeSize = sizeof(Statement_type);
    type = (Statement_type*)uClassType::New("Outracks.Simulator.Bytecode.Statement", options);
    type->MethodTypes[0] = type->NewMethodType(1, 0);
    type->fp_build_ = Statement_build;
    type->fp_cctor_ = Statement__cctor__fn;
    return type;
}

// protected generated Statement() :1574
void Statement__ctor__fn(Statement* __this)
{
    __this->ctor_();
}

// public static Outracks.Simulator.Bytecode.Statement _Read(System.IO.BinaryReader reader) :1617
void Statement___Read_fn(::g::System::IO::BinaryReader* reader, Statement** __retval)
{
    *__retval = Statement::_Read(reader);
}

// public void Match(Uno.Action<Outracks.Simulator.Bytecode.NoOperation> a1, Uno.Action<Outracks.Simulator.Bytecode.Expression> a3, Uno.Action<Outracks.Simulator.Bytecode.Return> a4) :1595
void Statement__Match_fn(Statement* __this, uDelegate* a1, uDelegate* a3, uDelegate* a4)
{
    __this->Match(a1, a3, a4);
}

// public T Match<T>(Uno.Func<Outracks.Simulator.Bytecode.NoOperation, T> a1, Uno.Func<Outracks.Simulator.Bytecode.Expression, T> a3, Uno.Func<Outracks.Simulator.Bytecode.Return, T> a4) :1583
void Statement__Match1_fn(Statement* __this, uType* __type, uDelegate* a1, uDelegate* a3, uDelegate* a4, uTRef __retval)
{
    uType* __types[] = {
        __type->U(0),
    };
    uStackFrame __("Outracks.Simulator.Bytecode.Statement", "Match`1(Uno.Func<Outracks.Simulator.Bytecode.NoOperation, T>,Uno.Func<Outracks.Simulator.Bytecode.Expression, T>,Uno.Func<Outracks.Simulator.Bytecode.Return, T>)");
    uT ret1(__types[0], U_ALLOCA(__types[0]->ValueSize));
    uT ret2(__types[0], U_ALLOCA(__types[0]->ValueSize));
    uT ret3(__types[0], U_ALLOCA(__types[0]->ValueSize));
    Statement* self = __this;
    ::g::Outracks::Simulator::Bytecode::NoOperation* t1 = uAs< ::g::Outracks::Simulator::Bytecode::NoOperation*>(self, ::TYPES[86/*Outracks.Simulator.Bytecode.NoOperation*/]);

    if (t1 != NULL)
        return __retval.Store((uPtr(a1)->Invoke(&ret1, 1, t1), ret1)), void();

    ::g::Outracks::Simulator::Bytecode::Expression* t3 = uAs< ::g::Outracks::Simulator::Bytecode::Expression*>(self, ::TYPES[87/*Outracks.Simulator.Bytecode.Expression*/]);

    if (t3 != NULL)
        return __retval.Store((uPtr(a3)->Invoke(&ret2, 1, t3), ret2)), void();

    ::g::Outracks::Simulator::Bytecode::Return* t4 = uAs< ::g::Outracks::Simulator::Bytecode::Return*>(self, ::TYPES[88/*Outracks.Simulator.Bytecode.Return*/]);

    if (t4 != NULL)
        return __retval.Store((uPtr(a4)->Invoke(&ret3, 1, t4), ret3)), void();

    U_THROW(::g::Outracks::Simulator::NonExhaustiveMatch::New4());
}

// public static Outracks.Simulator.Bytecode.Statement Nop() :1629
void Statement__Nop_fn(Statement** __retval)
{
    *__retval = Statement::Nop();
}

// public static operator +(Outracks.Simulator.Bytecode.Statement left, Outracks.Simulator.Bytecode.Statement right) :1634
void Statement__op_Addition_fn(Statement* left, Statement* right, Statement** __retval)
{
    *__retval = Statement::op_Addition(left, right);
}

// public static operator +(Outracks.Simulator.Bytecode.Statement statement, Uno.Collections.IEnumerable<Outracks.Simulator.Bytecode.Statement> statements) :1643
void Statement__op_Addition1_fn(Statement* statement, uObject* statements, uObject** __retval)
{
    *__retval = Statement::op_Addition1(statement, statements);
}

// public static operator +(Uno.Collections.IEnumerable<Outracks.Simulator.Bytecode.Statement> statements, Outracks.Simulator.Bytecode.Statement statement) :1648
void Statement__op_Addition2_fn(uObject* statements, Statement* statement, uObject** __retval)
{
    *__retval = Statement::op_Addition2(statements, statement);
}

// public static void Write(Outracks.Simulator.Bytecode.Statement statement, System.IO.BinaryWriter writer) :1607
void Statement__Write_fn(Statement* statement, ::g::System::IO::BinaryWriter* writer)
{
    Statement::Write(statement, writer);
}

uSStrong<uDelegate*> Statement::Read_;

// protected generated Statement() [instance] :1574
void Statement::ctor_()
{
}

// public void Match(Uno.Action<Outracks.Simulator.Bytecode.NoOperation> a1, Uno.Action<Outracks.Simulator.Bytecode.Expression> a3, Uno.Action<Outracks.Simulator.Bytecode.Return> a4) [instance] :1595
void Statement::Match(uDelegate* a1, uDelegate* a3, uDelegate* a4)
{
    uStackFrame __("Outracks.Simulator.Bytecode.Statement", "Match(Uno.Action<Outracks.Simulator.Bytecode.NoOperation>,Uno.Action<Outracks.Simulator.Bytecode.Expression>,Uno.Action<Outracks.Simulator.Bytecode.Return>)");
    Statement* self = this;
    ::g::Outracks::Simulator::Bytecode::NoOperation* t1 = uAs< ::g::Outracks::Simulator::Bytecode::NoOperation*>(self, ::TYPES[86/*Outracks.Simulator.Bytecode.NoOperation*/]);

    if (t1 != NULL)
    {
        uPtr(a1)->InvokeVoid(t1);
        return;
    }

    ::g::Outracks::Simulator::Bytecode::Expression* t3 = uAs< ::g::Outracks::Simulator::Bytecode::Expression*>(self, ::TYPES[87/*Outracks.Simulator.Bytecode.Expression*/]);

    if (t3 != NULL)
    {
        uPtr(a3)->InvokeVoid(t3);
        return;
    }

    ::g::Outracks::Simulator::Bytecode::Return* t4 = uAs< ::g::Outracks::Simulator::Bytecode::Return*>(self, ::TYPES[88/*Outracks.Simulator.Bytecode.Return*/]);

    if (t4 != NULL)
    {
        uPtr(a4)->InvokeVoid(t4);
        return;
    }

    U_THROW(::g::Outracks::Simulator::NonExhaustiveMatch::New4());
}

// public static Outracks.Simulator.Bytecode.Statement _Read(System.IO.BinaryReader reader) [static] :1617
Statement* Statement::_Read(::g::System::IO::BinaryReader* reader)
{
    uStackFrame __("Outracks.Simulator.Bytecode.Statement", "_Read(System.IO.BinaryReader)");
    Statement_typeof()->Init();
    uChar c = uPtr(reader)->ReadChar();

    switch (c)
    {
        case 'n':
            return ::g::Outracks::Simulator::Bytecode::NoOperation::Read1(reader);
        case 'e':
            return (::g::Outracks::Simulator::Bytecode::Expression*)uPtr(::g::Outracks::Simulator::Bytecode::Expression::Read1())->Invoke(1, reader);
        case 'r':
            return ::g::Outracks::Simulator::Bytecode::Return::Read1(reader);
    }

    U_THROW(::g::Outracks::Simulator::InvalidDataException::New4());
}

// public static Outracks.Simulator.Bytecode.Statement Nop() [static] :1629
Statement* Statement::Nop()
{
    Statement_typeof()->Init();
    ::g::Outracks::Optional1<uStrong<uString*> > ret4;
    return ::g::Outracks::Simulator::Bytecode::NoOperation::New1((::g::Outracks::Optional1__op_Implicit_fn(::TYPES[89/*Outracks.Optional<string>*/], ::STRINGS[27/*"NOP"*/], &ret4), ret4));
}

// public static operator +(Outracks.Simulator.Bytecode.Statement left, Outracks.Simulator.Bytecode.Statement right) [static] :1634
Statement* Statement::op_Addition(Statement* left, Statement* right)
{
    uStackFrame __("Outracks.Simulator.Bytecode.Statement", "+(Outracks.Simulator.Bytecode.Statement,Outracks.Simulator.Bytecode.Statement)");
    Statement_typeof()->Init();
    return ::g::Outracks::Simulator::Bytecode::CallLambda::New1(::g::Outracks::Simulator::Bytecode::Lambda::New1(::g::Outracks::Simulator::Bytecode::Signature::Action(uArray::New(::TYPES[27/*Outracks.Simulator.Bytecode.Variable[]*/], 0)), (::g::Outracks::Simulator::ImmutableList*)::g::Outracks::Simulator::ImmutableList::Empty(::TYPES[90/*Outracks.Simulator.ImmutableList<Outracks.Simulator.Bytecode.BindVariable>*/]), (::g::Outracks::Simulator::ImmutableList*)::g::Outracks::Simulator::List::Create(::TYPES[91/*Outracks.Simulator.List.Create<Outracks.Simulator.Bytecode.Statement>*/], uArray::Init<Statement*>(::TYPES[31/*Outracks.Simulator.Bytecode.Statement[]*/], 2, left, right))), uArray::New(::TYPES[92/*Outracks.Simulator.Bytecode.Expression[]*/], 0));
}

// public static operator +(Outracks.Simulator.Bytecode.Statement statement, Uno.Collections.IEnumerable<Outracks.Simulator.Bytecode.Statement> statements) [static] :1643
uObject* Statement::op_Addition1(Statement* statement, uObject* statements)
{
    uStackFrame __("Outracks.Simulator.Bytecode.Statement", "+(Outracks.Simulator.Bytecode.Statement,Uno.Collections.IEnumerable<Outracks.Simulator.Bytecode.Statement>)");
    Statement_typeof()->Init();
    return (uObject*)::g::Uno::Collections::EnumerableExtensions::Union(::TYPES[93/*Uno.Collections.EnumerableExtensions.Union<Outracks.Simulator.Bytecode.Statement>*/], (uObject*)((::g::Uno::Runtime::Implementation::Internal::ArrayEnumerable*)::g::Uno::Runtime::Implementation::Internal::ArrayEnumerable::New1(::TYPES[30/*Uno.Runtime.Implementation.Internal.ArrayEnumerable<Outracks.Simulator.Bytecode.Statement>*/], uArray::Init<Statement*>(::TYPES[31/*Outracks.Simulator.Bytecode.Statement[]*/], 1, statement))), statements);
}

// public static operator +(Uno.Collections.IEnumerable<Outracks.Simulator.Bytecode.Statement> statements, Outracks.Simulator.Bytecode.Statement statement) [static] :1648
uObject* Statement::op_Addition2(uObject* statements, Statement* statement)
{
    uStackFrame __("Outracks.Simulator.Bytecode.Statement", "+(Uno.Collections.IEnumerable<Outracks.Simulator.Bytecode.Statement>,Outracks.Simulator.Bytecode.Statement)");
    Statement_typeof()->Init();
    return (uObject*)::g::Uno::Collections::EnumerableExtensions::Union(::TYPES[93/*Uno.Collections.EnumerableExtensions.Union<Outracks.Simulator.Bytecode.Statement>*/], statements, (uObject*)((::g::Uno::Runtime::Implementation::Internal::ArrayEnumerable*)::g::Uno::Runtime::Implementation::Internal::ArrayEnumerable::New1(::TYPES[30/*Uno.Runtime.Implementation.Internal.ArrayEnumerable<Outracks.Simulator.Bytecode.Statement>*/], uArray::Init<Statement*>(::TYPES[31/*Outracks.Simulator.Bytecode.Statement[]*/], 1, statement))));
}

// public static void Write(Outracks.Simulator.Bytecode.Statement statement, System.IO.BinaryWriter writer) [static] :1607
void Statement::Write(Statement* statement, ::g::System::IO::BinaryWriter* writer)
{
    uStackFrame __("Outracks.Simulator.Bytecode.Statement", "Write(Outracks.Simulator.Bytecode.Statement,System.IO.BinaryWriter)");
    Statement_typeof()->Init();
    uPtr(writer)->Write2(uPtr(statement)->StatementId());
    statement->WriteStatement(writer);
}
// }

// /usr/local/share/uno/Packages/Outracks.Simulator.Common.Uno/0.0.0/bytecode/$.uno
// --------------------------------------------------------------------------------

// internal static class StatementIdRegistry :1659
// {
static void StatementIdRegistry_build(uType* type)
{
}

uClassType* StatementIdRegistry_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Outracks.Simulator.Bytecode.StatementIdRegistry", options);
    type->fp_build_ = StatementIdRegistry_build;
    return type;
}
// }

// /usr/local/share/uno/Packages/Outracks.Simulator.Common.Uno/0.0.0/bytecode/$.uno
// --------------------------------------------------------------------------------

// public sealed class StaticMemberName :1737
// {
static void StaticMemberName_build(uType* type)
{
    ::STRINGS[0] = uString::Const(".");
    type->SetFields(0,
        ::g::Outracks::Simulator::Bytecode::TypeMemberName_typeof(), offsetof(::g::Outracks::Simulator::Bytecode::StaticMemberName, MemberName), 0,
        ::g::Outracks::Simulator::Bytecode::TypeName_typeof(), offsetof(::g::Outracks::Simulator::Bytecode::StaticMemberName, TypeName), 0);
    type->Reflection.SetFields(2,
        new uField("MemberName", 0),
        new uField("TypeName", 1));
    type->Reflection.SetFunctions(5,
        new uFunction("Equals", NULL, (void*)StaticMemberName__Equals2_fn, 0, false, ::g::Uno::Bool_typeof(), 1, type),
        new uFunction(".ctor", NULL, (void*)StaticMemberName__New1_fn, 0, true, type, 2, ::g::Outracks::Simulator::Bytecode::TypeName_typeof(), ::g::Outracks::Simulator::Bytecode::TypeMemberName_typeof()),
        new uFunction("Parse", NULL, (void*)StaticMemberName__Parse_fn, 0, true, type, 1, ::g::Uno::String_typeof()),
        new uFunction("Read", NULL, (void*)StaticMemberName__Read_fn, 0, true, type, 1, ::g::System::IO::BinaryReader_typeof()),
        new uFunction("Write", NULL, (void*)StaticMemberName__Write_fn, 0, true, uVoid_typeof(), 2, type, ::g::System::IO::BinaryWriter_typeof()));
}

uType* StaticMemberName_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ObjectSize = sizeof(StaticMemberName);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Outracks.Simulator.Bytecode.StaticMemberName", options);
    type->fp_build_ = StaticMemberName_build;
    type->fp_Equals = (void(*)(uObject*, uObject*, bool*))StaticMemberName__Equals_fn;
    type->fp_GetHashCode = (void(*)(uObject*, int*))StaticMemberName__GetHashCode_fn;
    type->fp_ToString = (void(*)(uObject*, uString**))StaticMemberName__ToString_fn;
    return type;
}

// public StaticMemberName(Outracks.Simulator.Bytecode.TypeName typeName, Outracks.Simulator.Bytecode.TypeMemberName memberName) :1749
void StaticMemberName__ctor__fn(StaticMemberName* __this, ::g::Outracks::Simulator::Bytecode::TypeName* typeName, ::g::Outracks::Simulator::Bytecode::TypeMemberName* memberName)
{
    __this->ctor_(typeName, memberName);
}

// public override sealed bool Equals(object obj) :1762
void StaticMemberName__Equals_fn(StaticMemberName* __this, uObject* obj, bool* __retval)
{
    uStackFrame __("Outracks.Simulator.Bytecode.StaticMemberName", "Equals(object)");

    if (::g::Uno::Object::ReferenceEquals(NULL, obj))
        return *__retval = false, void();

    if (::g::Uno::Object::ReferenceEquals(__this, obj))
        return *__retval = true, void();

    return *__retval = uIs(obj, __this->__type) && __this->Equals2(uCast<StaticMemberName*>(obj, __this->__type)), void();
}

// public bool Equals(Outracks.Simulator.Bytecode.StaticMemberName other) :1755
void StaticMemberName__Equals2_fn(StaticMemberName* __this, StaticMemberName* other, bool* __retval)
{
    *__retval = __this->Equals2(other);
}

// public override sealed int GetHashCode() :1769
void StaticMemberName__GetHashCode_fn(StaticMemberName* __this, int* __retval)
{
    uStackFrame __("Outracks.Simulator.Bytecode.StaticMemberName", "GetHashCode()");
    return *__retval = (uPtr(__this->TypeName)->GetHashCode() * 397) ^ ((__this->MemberName != NULL) ? uPtr(__this->MemberName)->GetHashCode() : 0), void();
}

// public StaticMemberName New(Outracks.Simulator.Bytecode.TypeName typeName, Outracks.Simulator.Bytecode.TypeMemberName memberName) :1749
void StaticMemberName__New1_fn(::g::Outracks::Simulator::Bytecode::TypeName* typeName, ::g::Outracks::Simulator::Bytecode::TypeMemberName* memberName, StaticMemberName** __retval)
{
    *__retval = StaticMemberName::New1(typeName, memberName);
}

// public static operator ==(Outracks.Simulator.Bytecode.StaticMemberName left, Outracks.Simulator.Bytecode.StaticMemberName right) :1777
void StaticMemberName__op_Equality_fn(StaticMemberName* left, StaticMemberName* right, bool* __retval)
{
    *__retval = StaticMemberName::op_Equality(left, right);
}

// public static operator !=(Outracks.Simulator.Bytecode.StaticMemberName left, Outracks.Simulator.Bytecode.StaticMemberName right) :1782
void StaticMemberName__op_Inequality_fn(StaticMemberName* left, StaticMemberName* right, bool* __retval)
{
    *__retval = StaticMemberName::op_Inequality(left, right);
}

// public static Outracks.Simulator.Bytecode.StaticMemberName Parse(string value) :1739
void StaticMemberName__Parse_fn(uString* value, StaticMemberName** __retval)
{
    *__retval = StaticMemberName::Parse(value);
}

// public static Outracks.Simulator.Bytecode.StaticMemberName Read(System.IO.BinaryReader reader) :1798
void StaticMemberName__Read_fn(::g::System::IO::BinaryReader* reader, StaticMemberName** __retval)
{
    *__retval = StaticMemberName::Read(reader);
}

// public override sealed string ToString() :1787
void StaticMemberName__ToString_fn(StaticMemberName* __this, uString** __retval)
{
    uStackFrame __("Outracks.Simulator.Bytecode.StaticMemberName", "ToString()");
    return *__retval = ::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(uPtr(__this->TypeName)->FullName(), ::STRINGS[0/*"."*/]), uPtr(__this->MemberName)->Name), void();
}

// public static void Write(Outracks.Simulator.Bytecode.StaticMemberName m, System.IO.BinaryWriter writer) :1792
void StaticMemberName__Write_fn(StaticMemberName* m, ::g::System::IO::BinaryWriter* writer)
{
    StaticMemberName::Write(m, writer);
}

// public StaticMemberName(Outracks.Simulator.Bytecode.TypeName typeName, Outracks.Simulator.Bytecode.TypeMemberName memberName) [instance] :1749
void StaticMemberName::ctor_(::g::Outracks::Simulator::Bytecode::TypeName* typeName, ::g::Outracks::Simulator::Bytecode::TypeMemberName* memberName)
{
    TypeName = typeName;
    MemberName = memberName;
}

// public bool Equals(Outracks.Simulator.Bytecode.StaticMemberName other) [instance] :1755
bool StaticMemberName::Equals2(StaticMemberName* other)
{
    uStackFrame __("Outracks.Simulator.Bytecode.StaticMemberName", "Equals(Outracks.Simulator.Bytecode.StaticMemberName)");

    if (::g::Uno::Object::ReferenceEquals(NULL, other))
        return false;

    if (::g::Uno::Object::ReferenceEquals(this, other))
        return true;

    return uPtr(TypeName)->Equals2(uPtr(other)->TypeName) && ::g::Uno::Object::Equals1(MemberName, uPtr(other)->MemberName);
}

// public StaticMemberName New(Outracks.Simulator.Bytecode.TypeName typeName, Outracks.Simulator.Bytecode.TypeMemberName memberName) [static] :1749
StaticMemberName* StaticMemberName::New1(::g::Outracks::Simulator::Bytecode::TypeName* typeName, ::g::Outracks::Simulator::Bytecode::TypeMemberName* memberName)
{
    StaticMemberName* obj1 = (StaticMemberName*)uNew(StaticMemberName_typeof());
    obj1->ctor_(typeName, memberName);
    return obj1;
}

// public static operator ==(Outracks.Simulator.Bytecode.StaticMemberName left, Outracks.Simulator.Bytecode.StaticMemberName right) [static] :1777
bool StaticMemberName::op_Equality(StaticMemberName* left, StaticMemberName* right)
{
    uStackFrame __("Outracks.Simulator.Bytecode.StaticMemberName", "==(Outracks.Simulator.Bytecode.StaticMemberName,Outracks.Simulator.Bytecode.StaticMemberName)");
    return ::g::Uno::Object::Equals1(left, right);
}

// public static operator !=(Outracks.Simulator.Bytecode.StaticMemberName left, Outracks.Simulator.Bytecode.StaticMemberName right) [static] :1782
bool StaticMemberName::op_Inequality(StaticMemberName* left, StaticMemberName* right)
{
    uStackFrame __("Outracks.Simulator.Bytecode.StaticMemberName", "!=(Outracks.Simulator.Bytecode.StaticMemberName,Outracks.Simulator.Bytecode.StaticMemberName)");
    return !::g::Uno::Object::Equals1(left, right);
}

// public static Outracks.Simulator.Bytecode.StaticMemberName Parse(string value) [static] :1739
StaticMemberName* StaticMemberName::Parse(uString* value)
{
    uStackFrame __("Outracks.Simulator.Bytecode.StaticMemberName", "Parse(string)");
    return StaticMemberName::New1(::g::Outracks::Simulator::Bytecode::TypeName::Parse(::g::Outracks::Simulator::StringSplitting::BeforeLast(value, ::STRINGS[0/*"."*/])), ::g::Outracks::Simulator::Bytecode::TypeMemberName::New1(::g::Outracks::Simulator::StringSplitting::AfterLast(value, ::STRINGS[0/*"."*/])));
}

// public static Outracks.Simulator.Bytecode.StaticMemberName Read(System.IO.BinaryReader reader) [static] :1798
StaticMemberName* StaticMemberName::Read(::g::System::IO::BinaryReader* reader)
{
    uStackFrame __("Outracks.Simulator.Bytecode.StaticMemberName", "Read(System.IO.BinaryReader)");
    ::g::Outracks::Simulator::Bytecode::TypeName* typeName = (::g::Outracks::Simulator::Bytecode::TypeName*)uPtr(::g::Outracks::Simulator::Bytecode::TypeName::Read())->Invoke(1, reader);
    ::g::Outracks::Simulator::Bytecode::TypeMemberName* memberName = ::g::Outracks::Simulator::Bytecode::TypeMemberName::Read(reader);
    return StaticMemberName::New1(typeName, memberName);
}

// public static void Write(Outracks.Simulator.Bytecode.StaticMemberName m, System.IO.BinaryWriter writer) [static] :1792
void StaticMemberName::Write(StaticMemberName* m, ::g::System::IO::BinaryWriter* writer)
{
    uStackFrame __("Outracks.Simulator.Bytecode.StaticMemberName", "Write(Outracks.Simulator.Bytecode.StaticMemberName,System.IO.BinaryWriter)");
    uPtr(::g::Outracks::Simulator::Bytecode::TypeName::Write())->Invoke(2, (::g::Outracks::Simulator::Bytecode::TypeName*)uPtr(m)->TypeName, writer);
    ::g::Outracks::Simulator::Bytecode::TypeMemberName::Write(m->MemberName, writer);
}
// }

// /usr/local/share/uno/Packages/Outracks.Simulator.Common.Uno/0.0.0/bytecode/$.uno
// --------------------------------------------------------------------------------

// public sealed class StringLiteral :1000
// {
static void StringLiteral_build(uType* type)
{
    ::STRINGS[28] = uString::Const("\"");
    ::TYPES[50] = ::g::Outracks::Optional_typeof()->MakeMethod(1/*Read<string>*/, ::g::Uno::String_typeof(), NULL);
    ::TYPES[94] = ::g::Uno::Func1_typeof()->MakeType(::g::System::IO::BinaryReader_typeof(), ::g::Uno::String_typeof(), NULL);
    ::TYPES[89] = ::g::Outracks::Optional1_typeof()->MakeType(::g::Uno::String_typeof(), NULL);
    ::TYPES[95] = ::g::Outracks::Optional_typeof()->MakeMethod(5/*Write<string>*/, ::g::Uno::String_typeof(), NULL);
    ::TYPES[96] = ::g::Outracks::NullToNone_typeof()->MakeMethod(0/*ToOptional<string>*/, ::g::Uno::String_typeof(), NULL);
    ::TYPES[97] = ::g::Uno::Action2_typeof()->MakeType(::g::Uno::String_typeof(), ::g::System::IO::BinaryWriter_typeof(), NULL);
    type->SetFields(0,
        ::g::Uno::String_typeof(), offsetof(::g::Outracks::Simulator::Bytecode::StringLiteral, StringValue), 0);
    type->Reflection.SetFields(1,
        new uField("StringValue", 0));
    type->Reflection.SetFunctions(3,
        new uFunction(".ctor", NULL, (void*)StringLiteral__New1_fn, 0, true, type, 1, ::g::Uno::String_typeof()),
        new uFunction("Read", NULL, (void*)StringLiteral__Read3_fn, 0, true, type, 1, ::g::System::IO::BinaryReader_typeof()),
        new uFunction("Write", NULL, (void*)StringLiteral__Write3_fn, 0, true, uVoid_typeof(), 2, type, ::g::System::IO::BinaryWriter_typeof()));
}

::g::Outracks::Simulator::Bytecode::Literal_type* StringLiteral_typeof()
{
    static uSStrong< ::g::Outracks::Simulator::Bytecode::Literal_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Outracks::Simulator::Bytecode::Literal_typeof();
    options.FieldCount = 1;
    options.ObjectSize = sizeof(StringLiteral);
    options.TypeSize = sizeof(::g::Outracks::Simulator::Bytecode::Literal_type);
    type = (::g::Outracks::Simulator::Bytecode::Literal_type*)uClassType::New("Outracks.Simulator.Bytecode.StringLiteral", options);
    type->fp_build_ = StringLiteral_build;
    type->fp_get_LiteralId = (void(*)(::g::Outracks::Simulator::Bytecode::Literal*, uChar*))StringLiteral__get_LiteralId_fn;
    type->fp_ToString = (void(*)(uObject*, uString**))StringLiteral__ToString_fn;
    type->fp_WriteLiteral = (void(*)(::g::Outracks::Simulator::Bytecode::Literal*, ::g::System::IO::BinaryWriter*))StringLiteral__WriteLiteral_fn;
    return type;
}

// public StringLiteral(string stringValue) :1006
void StringLiteral__ctor_3_fn(StringLiteral* __this, uString* stringValue)
{
    __this->ctor_3(stringValue);
}

// public override sealed char get_LiteralId() :1004
void StringLiteral__get_LiteralId_fn(StringLiteral* __this, uChar* __retval)
{
    return *__retval = 's', void();
}

// public StringLiteral New(string stringValue) :1006
void StringLiteral__New1_fn(uString* stringValue, StringLiteral** __retval)
{
    *__retval = StringLiteral::New1(stringValue);
}

// public static new Outracks.Simulator.Bytecode.StringLiteral Read(System.IO.BinaryReader reader) :1031
void StringLiteral__Read3_fn(::g::System::IO::BinaryReader* reader, StringLiteral** __retval)
{
    *__retval = StringLiteral::Read3(reader);
}

// private static string ReadString(System.IO.BinaryReader reader) :1040
void StringLiteral__ReadString_fn(::g::System::IO::BinaryReader* reader, uString** __retval)
{
    *__retval = StringLiteral::ReadString(reader);
}

// public override sealed string ToString() :1011
void StringLiteral__ToString_fn(StringLiteral* __this, uString** __retval)
{
    uStackFrame __("Outracks.Simulator.Bytecode.StringLiteral", "ToString()");
    return *__retval = ::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::STRINGS[28/*"\""*/], __this->StringValue), ::STRINGS[28/*"\""*/]), void();
}

// public static void Write(Outracks.Simulator.Bytecode.StringLiteral l, System.IO.BinaryWriter writer) :1016
void StringLiteral__Write3_fn(StringLiteral* l, ::g::System::IO::BinaryWriter* writer)
{
    StringLiteral::Write3(l, writer);
}

// protected override sealed void WriteLiteral(System.IO.BinaryWriter writer) :1021
void StringLiteral__WriteLiteral_fn(StringLiteral* __this, ::g::System::IO::BinaryWriter* writer)
{
    uStackFrame __("Outracks.Simulator.Bytecode.StringLiteral", "WriteLiteral(System.IO.BinaryWriter)");
    StringLiteral::Write3(__this, writer);
}

// private static void WriteString(string str, System.IO.BinaryWriter writer) :1026
void StringLiteral__WriteString_fn(uString* str, ::g::System::IO::BinaryWriter* writer)
{
    StringLiteral::WriteString(str, writer);
}

// public StringLiteral(string stringValue) [instance] :1006
void StringLiteral::ctor_3(uString* stringValue)
{
    ctor_2();
    StringValue = stringValue;
}

// public StringLiteral New(string stringValue) [static] :1006
StringLiteral* StringLiteral::New1(uString* stringValue)
{
    StringLiteral* obj1 = (StringLiteral*)uNew(StringLiteral_typeof());
    obj1->ctor_3(stringValue);
    return obj1;
}

// public static new Outracks.Simulator.Bytecode.StringLiteral Read(System.IO.BinaryReader reader) [static] :1031
StringLiteral* StringLiteral::Read3(::g::System::IO::BinaryReader* reader)
{
    uStackFrame __("Outracks.Simulator.Bytecode.StringLiteral", "Read(System.IO.BinaryReader)");
    ::g::Outracks::Optional1<uStrong<uString*> > ret2;
    ::g::Outracks::Optional1<uStrong<uString*> > maybeString = (::g::Outracks::Optional__Read_fn(::TYPES[50/*Outracks.Optional.Read<string>*/], reader, uDelegate::New(::TYPES[94/*Uno.Func<System.IO.BinaryReader, string>*/], (void*)StringLiteral__ReadString_fn), &ret2), ret2);
    return StringLiteral::New1(maybeString.HasValue(::TYPES[89/*Outracks.Optional<string>*/]) ? (uString*)maybeString.Value(::TYPES[89/*Outracks.Optional<string>*/]) : NULL);
}

// private static string ReadString(System.IO.BinaryReader reader) [static] :1040
uString* StringLiteral::ReadString(::g::System::IO::BinaryReader* reader)
{
    uStackFrame __("Outracks.Simulator.Bytecode.StringLiteral", "ReadString(System.IO.BinaryReader)");
    return uPtr(reader)->ReadString();
}

// public static void Write(Outracks.Simulator.Bytecode.StringLiteral l, System.IO.BinaryWriter writer) [static] :1016
void StringLiteral::Write3(StringLiteral* l, ::g::System::IO::BinaryWriter* writer)
{
    uStackFrame __("Outracks.Simulator.Bytecode.StringLiteral", "Write(Outracks.Simulator.Bytecode.StringLiteral,System.IO.BinaryWriter)");
    ::g::Outracks::Optional__Write1_fn(::TYPES[95/*Outracks.Optional.Write<string>*/], writer, uCRef(::g::Outracks::NullToNone::ToOptional(::TYPES[96/*Outracks.NullToNone.ToOptional<string>*/], uPtr(l)->StringValue)), uDelegate::New(::TYPES[97/*Uno.Action<string, System.IO.BinaryWriter>*/], (void*)StringLiteral__WriteString_fn));
}

// private static void WriteString(string str, System.IO.BinaryWriter writer) [static] :1026
void StringLiteral::WriteString(uString* str, ::g::System::IO::BinaryWriter* writer)
{
    uStackFrame __("Outracks.Simulator.Bytecode.StringLiteral", "WriteString(string,System.IO.BinaryWriter)");
    uPtr(writer)->Write6(str);
}
// }

// /usr/local/share/uno/Packages/Outracks.Simulator.Common.Uno/0.0.0/bytecode/$.uno
// --------------------------------------------------------------------------------

// public sealed class TypeMemberName :1816
// {
static void TypeMemberName_build(uType* type)
{
    type->SetFields(0,
        ::g::Uno::String_typeof(), offsetof(::g::Outracks::Simulator::Bytecode::TypeMemberName, Name), 0);
    type->Reflection.SetFields(1,
        new uField("Name", 0));
    type->Reflection.SetFunctions(5,
        new uFunction("Equals", NULL, (void*)TypeMemberName__Equals2_fn, 0, false, ::g::Uno::Bool_typeof(), 1, type),
        new uFunction(".ctor", NULL, (void*)TypeMemberName__New1_fn, 0, true, type, 1, ::g::Uno::String_typeof()),
        new uFunction("Read", NULL, (void*)TypeMemberName__Read_fn, 0, true, type, 1, ::g::System::IO::BinaryReader_typeof()),
        new uFunction("Write", NULL, (void*)TypeMemberName__Write_fn, 0, true, uVoid_typeof(), 2, type, ::g::System::IO::BinaryWriter_typeof()),
        new uFunction("Write", NULL, (void*)TypeMemberName__Write1_fn, 0, false, uVoid_typeof(), 1, ::g::System::IO::BinaryWriter_typeof()));
}

uType* TypeMemberName_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.ObjectSize = sizeof(TypeMemberName);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Outracks.Simulator.Bytecode.TypeMemberName", options);
    type->fp_build_ = TypeMemberName_build;
    type->fp_Equals = (void(*)(uObject*, uObject*, bool*))TypeMemberName__Equals_fn;
    type->fp_GetHashCode = (void(*)(uObject*, int*))TypeMemberName__GetHashCode_fn;
    type->fp_ToString = (void(*)(uObject*, uString**))TypeMemberName__ToString_fn;
    return type;
}

// public TypeMemberName(string name) :1820
void TypeMemberName__ctor__fn(TypeMemberName* __this, uString* name)
{
    __this->ctor_(name);
}

// public override sealed bool Equals(object obj) :1831
void TypeMemberName__Equals_fn(TypeMemberName* __this, uObject* obj, bool* __retval)
{
    uStackFrame __("Outracks.Simulator.Bytecode.TypeMemberName", "Equals(object)");
    TypeMemberName* other = uAs<TypeMemberName*>(obj, __this->__type);
    return *__retval = (other != NULL) && __this->Equals2(other), void();
}

// public bool Equals(Outracks.Simulator.Bytecode.TypeMemberName other) :1837
void TypeMemberName__Equals2_fn(TypeMemberName* __this, TypeMemberName* other, bool* __retval)
{
    *__retval = __this->Equals2(other);
}

// public override sealed int GetHashCode() :1842
void TypeMemberName__GetHashCode_fn(TypeMemberName* __this, int* __retval)
{
    uStackFrame __("Outracks.Simulator.Bytecode.TypeMemberName", "GetHashCode()");
    return *__retval = uPtr(__this->Name)->GetHashCode(), void();
}

// public TypeMemberName New(string name) :1820
void TypeMemberName__New1_fn(uString* name, TypeMemberName** __retval)
{
    *__retval = TypeMemberName::New1(name);
}

// public static operator +(Outracks.Simulator.Bytecode.TypeName typeName, Outracks.Simulator.Bytecode.TypeMemberName memberName) :1826
void TypeMemberName__op_Addition_fn(::g::Outracks::Simulator::Bytecode::TypeName* typeName, TypeMemberName* memberName, ::g::Outracks::Simulator::Bytecode::StaticMemberName** __retval)
{
    *__retval = TypeMemberName::op_Addition(typeName, memberName);
}

// public static Outracks.Simulator.Bytecode.TypeMemberName Read(System.IO.BinaryReader reader) :1852
void TypeMemberName__Read_fn(::g::System::IO::BinaryReader* reader, TypeMemberName** __retval)
{
    *__retval = TypeMemberName::Read(reader);
}

// public override sealed string ToString() :1847
void TypeMemberName__ToString_fn(TypeMemberName* __this, uString** __retval)
{
    return *__retval = __this->Name, void();
}

// public static void Write(Outracks.Simulator.Bytecode.TypeMemberName name, System.IO.BinaryWriter writer) :1857
void TypeMemberName__Write_fn(TypeMemberName* name, ::g::System::IO::BinaryWriter* writer)
{
    TypeMemberName::Write(name, writer);
}

// public void Write(System.IO.BinaryWriter writer) :1862
void TypeMemberName__Write1_fn(TypeMemberName* __this, ::g::System::IO::BinaryWriter* writer)
{
    __this->Write1(writer);
}

// public TypeMemberName(string name) [instance] :1820
void TypeMemberName::ctor_(uString* name)
{
    uStackFrame __("Outracks.Simulator.Bytecode.TypeMemberName", ".ctor(string)");

    if (::g::Uno::String::op_Equality(name, NULL))
        U_THROW(::g::Uno::ArgumentNullException::New6(name));

    Name = name;
}

// public bool Equals(Outracks.Simulator.Bytecode.TypeMemberName other) [instance] :1837
bool TypeMemberName::Equals2(TypeMemberName* other)
{
    uStackFrame __("Outracks.Simulator.Bytecode.TypeMemberName", "Equals(Outracks.Simulator.Bytecode.TypeMemberName)");
    return ::g::Uno::String::op_Equality(uPtr(other)->Name, Name);
}

// public void Write(System.IO.BinaryWriter writer) [instance] :1862
void TypeMemberName::Write1(::g::System::IO::BinaryWriter* writer)
{
    uStackFrame __("Outracks.Simulator.Bytecode.TypeMemberName", "Write(System.IO.BinaryWriter)");
    uPtr(writer)->Write6(Name);
}

// public TypeMemberName New(string name) [static] :1820
TypeMemberName* TypeMemberName::New1(uString* name)
{
    TypeMemberName* obj1 = (TypeMemberName*)uNew(TypeMemberName_typeof());
    obj1->ctor_(name);
    return obj1;
}

// public static operator +(Outracks.Simulator.Bytecode.TypeName typeName, Outracks.Simulator.Bytecode.TypeMemberName memberName) [static] :1826
::g::Outracks::Simulator::Bytecode::StaticMemberName* TypeMemberName::op_Addition(::g::Outracks::Simulator::Bytecode::TypeName* typeName, TypeMemberName* memberName)
{
    return ::g::Outracks::Simulator::Bytecode::StaticMemberName::New1(typeName, memberName);
}

// public static Outracks.Simulator.Bytecode.TypeMemberName Read(System.IO.BinaryReader reader) [static] :1852
TypeMemberName* TypeMemberName::Read(::g::System::IO::BinaryReader* reader)
{
    uStackFrame __("Outracks.Simulator.Bytecode.TypeMemberName", "Read(System.IO.BinaryReader)");
    return TypeMemberName::New1(uPtr(reader)->ReadString());
}

// public static void Write(Outracks.Simulator.Bytecode.TypeMemberName name, System.IO.BinaryWriter writer) [static] :1857
void TypeMemberName::Write(TypeMemberName* name, ::g::System::IO::BinaryWriter* writer)
{
    uStackFrame __("Outracks.Simulator.Bytecode.TypeMemberName", "Write(Outracks.Simulator.Bytecode.TypeMemberName,System.IO.BinaryWriter)");
    uPtr(name)->Write1(writer);
}
// }

// /usr/local/share/uno/Packages/Outracks.Simulator.Common.Uno/0.0.0/bytecode/$.uno
// --------------------------------------------------------------------------------

// public partial sealed class TypeName :1878
// {
// static TypeName() :1878
static void TypeName__cctor__fn(uType* __type)
{
    TypeName::Write_ = uDelegate::New(::TYPES[98/*Uno.Action<Outracks.Simulator.Bytecode.TypeName, System.IO.BinaryWriter>*/], (void*)TypeName___Write_fn);
    TypeName::Read_ = uDelegate::New(::TYPES[99/*Uno.Func<System.IO.BinaryReader, Outracks.Simulator.Bytecode.TypeName>*/], (void*)TypeName___Read_fn);
}

static void TypeName_build(uType* type)
{
    ::STRINGS[0] = uString::Const(".");
    ::STRINGS[29] = uString::Const("");
    ::STRINGS[30] = uString::Const("<");
    ::STRINGS[31] = uString::Const(",");
    ::STRINGS[32] = uString::Const(">");
    ::STRINGS[33] = uString::Const("`");
    ::TYPES[98] = ::g::Uno::Action2_typeof()->MakeType(type, ::g::System::IO::BinaryWriter_typeof(), NULL);
    ::TYPES[99] = ::g::Uno::Func1_typeof()->MakeType(::g::System::IO::BinaryReader_typeof(), type, NULL);
    ::TYPES[76] = ::g::Outracks::Optional_typeof()->MakeMethod(1/*Read<Outracks.Simulator.Bytecode.TypeName>*/, type, NULL);
    ::TYPES[100] = ::g::Outracks::Simulator::List_typeof()->MakeMethod(1/*Read<Outracks.Simulator.Bytecode.TypeName>*/, type, NULL);
    ::TYPES[84] = ::g::Outracks::Optional_typeof()->MakeMethod(5/*Write<Outracks.Simulator.Bytecode.TypeName>*/, type, NULL);
    ::TYPES[101] = ::g::Outracks::Simulator::List_typeof()->MakeMethod(6/*Write<Outracks.Simulator.Bytecode.TypeName>*/, type, NULL);
    ::TYPES[102] = ::g::Outracks::Simulator::List_typeof()->MakeMethod(3/*ToImmutableList<Outracks.Simulator.Bytecode.TypeName>*/, type, NULL);
    ::TYPES[103] = ::g::Uno::Runtime::Implementation::Internal::ArrayEnumerable_typeof()->MakeType(type, NULL);
    ::TYPES[104] = ::g::Outracks::Optional1_typeof()->MakeType(type, NULL);
    ::TYPES[105] = ::g::Uno::Collections::List_typeof()->MakeType(type, NULL);
    ::TYPES[106] = ::g::Outracks::Simulator::StringSplitting_typeof()->MakeMethod(0/*JoinToString<Outracks.Simulator.Bytecode.TypeName>*/, type, NULL);
    ::TYPES[80] = ::g::Outracks::Optional_typeof()->MakeMethod(3/*Some<Outracks.Simulator.Bytecode.TypeName>*/, type, NULL);
    ::TYPES[79] = ::g::Outracks::Optional_typeof()->MakeMethod(0/*None<Outracks.Simulator.Bytecode.TypeName>*/, type, NULL);
    ::TYPES[107] = ::g::Outracks::Simulator::ImmutableList_typeof()->MakeType(type, NULL);
    type->SetFields(0,
        ::TYPES[104/*Outracks.Optional<Outracks.Simulator.Bytecode.TypeName>*/], (uintptr_t)0, uFieldFlagsConstrained,
        ::TYPES[107/*Outracks.Simulator.ImmutableList<Outracks.Simulator.Bytecode.TypeName>*/], offsetof(::g::Outracks::Simulator::Bytecode::TypeName, GenericArguments), 0,
        ::g::Uno::String_typeof(), offsetof(::g::Outracks::Simulator::Bytecode::TypeName, Surname), 0,
        ::TYPES[99/*Uno.Func<System.IO.BinaryReader, Outracks.Simulator.Bytecode.TypeName>*/], (uintptr_t)&::g::Outracks::Simulator::Bytecode::TypeName::Read_, uFieldFlagsStatic,
        ::TYPES[98/*Uno.Action<Outracks.Simulator.Bytecode.TypeName, System.IO.BinaryWriter>*/], (uintptr_t)&::g::Outracks::Simulator::Bytecode::TypeName::Write_, uFieldFlagsStatic);
    type->Reflection.SetFields(5,
        new uField("ContainingType", 0),
        new uField("GenericArguments", 1),
        new uField("Read", 3),
        new uField("Surname", 2),
        new uField("Write", 4));
    type->Reflection.SetFunctions(12,
        new uFunction("_Read", NULL, (void*)TypeName___Read_fn, 0, true, type, 1, ::g::System::IO::BinaryReader_typeof()),
        new uFunction("_Write", NULL, (void*)TypeName___Write_fn, 0, true, uVoid_typeof(), 2, type, ::g::System::IO::BinaryWriter_typeof()),
        new uFunction("_Write", NULL, (void*)TypeName___Write1_fn, 0, false, uVoid_typeof(), 1, ::g::System::IO::BinaryWriter_typeof()),
        new uFunction("Equals", NULL, (void*)TypeName__Equals2_fn, 0, false, ::g::Uno::Bool_typeof(), 1, type),
        new uFunction("get_FullName", NULL, (void*)TypeName__get_FullName_fn, 0, false, ::g::Uno::String_typeof(), 0),
        new uFunction("get_GenericArgumentsRecursively", NULL, (void*)TypeName__get_GenericArgumentsRecursively_fn, 0, false, ::TYPES[107/*Outracks.Simulator.ImmutableList<Outracks.Simulator.Bytecode.TypeName>*/], 0),
        new uFunction("get_IsParameterizedGenericType", NULL, (void*)TypeName__get_IsParameterizedGenericType_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("get_Name", NULL, (void*)TypeName__get_Name_fn, 0, false, ::g::Uno::String_typeof(), 0),
        new uFunction(".ctor", NULL, (void*)TypeName__New1_fn, 0, true, type, 3, ::TYPES[104/*Outracks.Optional<Outracks.Simulator.Bytecode.TypeName>*/], ::g::Uno::String_typeof(), ::TYPES[107/*Outracks.Simulator.ImmutableList<Outracks.Simulator.Bytecode.TypeName>*/]),
        new uFunction("Parameterize", NULL, (void*)TypeName__Parameterize_fn, 0, false, type, 1, type->Array()),
        new uFunction("Parse", NULL, (void*)TypeName__Parse_fn, 0, true, type, 1, ::g::Uno::String_typeof()),
        new uFunction("get_WithGenericSuffix", NULL, (void*)TypeName__get_WithGenericSuffix_fn, 0, false, type, 0));
}

uType* TypeName_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 5;
    options.ObjectSize = sizeof(TypeName);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Outracks.Simulator.Bytecode.TypeName", options);
    type->fp_build_ = TypeName_build;
    type->fp_cctor_ = TypeName__cctor__fn;
    type->fp_Equals = (void(*)(uObject*, uObject*, bool*))TypeName__Equals_fn;
    type->fp_GetHashCode = (void(*)(uObject*, int*))TypeName__GetHashCode_fn;
    type->fp_ToString = (void(*)(uObject*, uString**))TypeName__ToString_fn;
    return type;
}

// public TypeName(Outracks.Optional<Outracks.Simulator.Bytecode.TypeName> containingType, string surname, Outracks.Simulator.ImmutableList<Outracks.Simulator.Bytecode.TypeName> genericArguments) :1884
void TypeName__ctor__fn(TypeName* __this, ::g::Outracks::Optional1<uStrong<TypeName*> >* containingType, uString* surname, ::g::Outracks::Simulator::ImmutableList* genericArguments)
{
    __this->ctor_(*containingType, surname, genericArguments);
}

// public static Outracks.Simulator.Bytecode.TypeName _Read(System.IO.BinaryReader reader) :1987
void TypeName___Read_fn(::g::System::IO::BinaryReader* reader, TypeName** __retval)
{
    *__retval = TypeName::_Read(reader);
}

// public static void _Write(Outracks.Simulator.Bytecode.TypeName name, System.IO.BinaryWriter writer) :1973
void TypeName___Write_fn(TypeName* name, ::g::System::IO::BinaryWriter* writer)
{
    TypeName::_Write(name, writer);
}

// public void _Write(System.IO.BinaryWriter writer) :1978
void TypeName___Write1_fn(TypeName* __this, ::g::System::IO::BinaryWriter* writer)
{
    __this->_Write1(writer);
}

// public override sealed bool Equals(object obj) :1951
void TypeName__Equals_fn(TypeName* __this, uObject* obj, bool* __retval)
{
    uStackFrame __("Outracks.Simulator.Bytecode.TypeName", "Equals(object)");
    return *__retval = uIs(obj, __this->__type) && __this->Equals2(uCast<TypeName*>(obj, __this->__type)), void();
}

// public bool Equals(Outracks.Simulator.Bytecode.TypeName other) :1956
void TypeName__Equals2_fn(TypeName* __this, TypeName* other, bool* __retval)
{
    *__retval = __this->Equals2(other);
}

// public string get_FullName() :1893
void TypeName__get_FullName_fn(TypeName* __this, uString** __retval)
{
    *__retval = __this->FullName();
}

// public Outracks.Simulator.ImmutableList<Outracks.Simulator.Bytecode.TypeName> get_GenericArgumentsRecursively() :1918
void TypeName__get_GenericArgumentsRecursively_fn(TypeName* __this, ::g::Outracks::Simulator::ImmutableList** __retval)
{
    *__retval = __this->GenericArgumentsRecursively();
}

// public override sealed int GetHashCode() :1946
void TypeName__GetHashCode_fn(TypeName* __this, int* __retval)
{
    uStackFrame __("Outracks.Simulator.Bytecode.TypeName", "GetHashCode()");
    return *__retval = uPtr(__this->FullName())->GetHashCode(), void();
}

// public bool get_IsParameterizedGenericType() :1902
void TypeName__get_IsParameterizedGenericType_fn(TypeName* __this, bool* __retval)
{
    *__retval = __this->IsParameterizedGenericType();
}

// public string get_Name() :1933
void TypeName__get_Name_fn(TypeName* __this, uString** __retval)
{
    *__retval = __this->Name();
}

// public TypeName New(Outracks.Optional<Outracks.Simulator.Bytecode.TypeName> containingType, string surname, Outracks.Simulator.ImmutableList<Outracks.Simulator.Bytecode.TypeName> genericArguments) :1884
void TypeName__New1_fn(::g::Outracks::Optional1<uStrong<TypeName*> >* containingType, uString* surname, ::g::Outracks::Simulator::ImmutableList* genericArguments, TypeName** __retval)
{
    *__retval = TypeName::New1(*containingType, surname, genericArguments);
}

// public static operator ==(Outracks.Simulator.Bytecode.TypeName a, Outracks.Simulator.Bytecode.TypeName b) :1961
void TypeName__op_Equality_fn(TypeName* a, TypeName* b, bool* __retval)
{
    *__retval = TypeName::op_Equality(a, b);
}

// public static operator !=(Outracks.Simulator.Bytecode.TypeName a, Outracks.Simulator.Bytecode.TypeName b) :1966
void TypeName__op_Inequality_fn(TypeName* a, TypeName* b, bool* __retval)
{
    *__retval = TypeName::op_Inequality(a, b);
}

// public Outracks.Simulator.Bytecode.TypeName Parameterize(Outracks.Simulator.Bytecode.TypeName[] methodArgumentTypes) :1999
void TypeName__Parameterize_fn(TypeName* __this, uArray* methodArgumentTypes, TypeName** __retval)
{
    *__retval = __this->Parameterize(methodArgumentTypes);
}

// public static Outracks.Simulator.Bytecode.TypeName Parse(string name) :2004
void TypeName__Parse_fn(uString* name, TypeName** __retval)
{
    *__retval = TypeName::Parse(name);
}

// public override sealed string ToString() :1941
void TypeName__ToString_fn(TypeName* __this, uString** __retval)
{
    uStackFrame __("Outracks.Simulator.Bytecode.TypeName", "ToString()");
    return *__retval = __this->FullName(), void();
}

// public Outracks.Simulator.Bytecode.TypeName get_WithGenericSuffix() :1907
void TypeName__get_WithGenericSuffix_fn(TypeName* __this, TypeName** __retval)
{
    *__retval = __this->WithGenericSuffix();
}

uSStrong<uDelegate*> TypeName::Read_;
uSStrong<uDelegate*> TypeName::Write_;

// public TypeName(Outracks.Optional<Outracks.Simulator.Bytecode.TypeName> containingType, string surname, Outracks.Simulator.ImmutableList<Outracks.Simulator.Bytecode.TypeName> genericArguments) [instance] :1884
void TypeName::ctor_(::g::Outracks::Optional1<uStrong<TypeName*> > containingType, uString* surname, ::g::Outracks::Simulator::ImmutableList* genericArguments)
{
    ContainingType().Value< ::g::Outracks::Optional1<uStrong<TypeName*> > >() = containingType;
    Surname = surname;
    GenericArguments = genericArguments;
}

// public void _Write(System.IO.BinaryWriter writer) [instance] :1978
void TypeName::_Write1(::g::System::IO::BinaryWriter* writer)
{
    uStackFrame __("Outracks.Simulator.Bytecode.TypeName", "_Write(System.IO.BinaryWriter)");
    ::g::Outracks::Optional__Write1_fn(::TYPES[84/*Outracks.Optional.Write<Outracks.Simulator.Bytecode.TypeName>*/], writer, uCRef(ContainingType().Value< ::g::Outracks::Optional1<uStrong<TypeName*> > >()), TypeName::Write());
    uPtr(writer)->Write6(Surname);
    ::g::Outracks::Simulator::List::Write1(::TYPES[101/*Outracks.Simulator.List.Write<Outracks.Simulator.Bytecode.TypeName>*/], writer, GenericArguments, TypeName::Write());
}

// public bool Equals(Outracks.Simulator.Bytecode.TypeName other) [instance] :1956
bool TypeName::Equals2(TypeName* other)
{
    uStackFrame __("Outracks.Simulator.Bytecode.TypeName", "Equals(Outracks.Simulator.Bytecode.TypeName)");
    return ::g::Uno::String::op_Equality(FullName(), uPtr(other)->FullName());
}

// public string get_FullName() [instance] :1893
uString* TypeName::FullName()
{
    uStackFrame __("Outracks.Simulator.Bytecode.TypeName", "get_FullName()");
    ::g::Outracks::Optional1<uStrong<TypeName*> > ind1;
    ::g::Outracks::Optional1<uStrong<TypeName*> > ind2;
    return ::g::Uno::String::op_Addition2((ind1 = ContainingType().Value< ::g::Outracks::Optional1<uStrong<TypeName*> > >(), (&ind1))->HasValue(::TYPES[104/*Outracks.Optional<Outracks.Simulator.Bytecode.TypeName>*/]) ? (uString*)::g::Uno::String::op_Addition2(uPtr((ind2 = ContainingType().Value< ::g::Outracks::Optional1<uStrong<TypeName*> > >(), (&ind2))->Value(::TYPES[104/*Outracks.Optional<Outracks.Simulator.Bytecode.TypeName>*/]))->FullName(), ::STRINGS[0/*"."*/]) : ::STRINGS[29/*""*/], Name());
}

// public Outracks.Simulator.ImmutableList<Outracks.Simulator.Bytecode.TypeName> get_GenericArgumentsRecursively() [instance] :1918
::g::Outracks::Simulator::ImmutableList* TypeName::GenericArgumentsRecursively()
{
    uStackFrame __("Outracks.Simulator.Bytecode.TypeName", "get_GenericArgumentsRecursively()");
    ::g::Outracks::Optional1<uStrong<TypeName*> > ind7;
    ::g::Outracks::Optional1<uStrong<TypeName*> > ind8;
    ::g::Uno::Collections::List* args = (::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[105/*Uno.Collections.List<Outracks.Simulator.Bytecode.TypeName>*/]);
    TypeName* typeName = this;

    while ((ind7 = typeName->ContainingType().Value< ::g::Outracks::Optional1<uStrong<TypeName*> > >(), (&ind7))->HasValue(::TYPES[104/*Outracks.Optional<Outracks.Simulator.Bytecode.TypeName>*/]))
    {
        uPtr(args)->AddRange((uObject*)uPtr(typeName)->GenericArguments);
        typeName = (ind8 = uPtr(typeName)->ContainingType().Value< ::g::Outracks::Optional1<uStrong<TypeName*> > >(), (&ind8))->Value(::TYPES[104/*Outracks.Optional<Outracks.Simulator.Bytecode.TypeName>*/]);
    }

    return (::g::Outracks::Simulator::ImmutableList*)::g::Outracks::Simulator::List::ToImmutableList(::TYPES[102/*Outracks.Simulator.List.ToImmutableList<Outracks.Simulator.Bytecode.TypeName>*/], (uObject*)args);
}

// public bool get_IsParameterizedGenericType() [instance] :1902
bool TypeName::IsParameterizedGenericType()
{
    uStackFrame __("Outracks.Simulator.Bytecode.TypeName", "get_IsParameterizedGenericType()");
    ::g::Outracks::Optional1<uStrong<TypeName*> > ind3;
    ::g::Outracks::Optional1<uStrong<TypeName*> > ind4;
    return (uPtr(GenericArguments)->Count() != 0) || ((ind3 = ContainingType().Value< ::g::Outracks::Optional1<uStrong<TypeName*> > >(), (&ind3))->HasValue(::TYPES[104/*Outracks.Optional<Outracks.Simulator.Bytecode.TypeName>*/]) && uPtr((ind4 = ContainingType().Value< ::g::Outracks::Optional1<uStrong<TypeName*> > >(), (&ind4))->Value(::TYPES[104/*Outracks.Optional<Outracks.Simulator.Bytecode.TypeName>*/]))->IsParameterizedGenericType());
}

// public string get_Name() [instance] :1933
uString* TypeName::Name()
{
    uStackFrame __("Outracks.Simulator.Bytecode.TypeName", "get_Name()");
    return (uPtr(GenericArguments)->Count() != 0) ? (uString*)::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(Surname, ::STRINGS[30/*"<"*/]), ::g::Outracks::Simulator::StringSplitting::JoinToString(::TYPES[106/*Outracks.Simulator.StringSplitting.JoinToString<Outracks.Simulator.Bytecode.TypeName>*/], (uObject*)GenericArguments, ::STRINGS[31/*","*/])), ::STRINGS[32/*">"*/]) : (uString*)Surname;
}

// public Outracks.Simulator.Bytecode.TypeName Parameterize(Outracks.Simulator.Bytecode.TypeName[] methodArgumentTypes) [instance] :1999
TypeName* TypeName::Parameterize(uArray* methodArgumentTypes)
{
    uStackFrame __("Outracks.Simulator.Bytecode.TypeName", "Parameterize(Outracks.Simulator.Bytecode.TypeName[])");
    return TypeName::New1(ContainingType().Value< ::g::Outracks::Optional1<uStrong<TypeName*> > >(), Surname, (::g::Outracks::Simulator::ImmutableList*)::g::Outracks::Simulator::List::ToImmutableList(::TYPES[102/*Outracks.Simulator.List.ToImmutableList<Outracks.Simulator.Bytecode.TypeName>*/], (uObject*)((::g::Uno::Runtime::Implementation::Internal::ArrayEnumerable*)::g::Uno::Runtime::Implementation::Internal::ArrayEnumerable::New1(::TYPES[103/*Uno.Runtime.Implementation.Internal.ArrayEnumerable<Outracks.Simulator.Bytecode.TypeName>*/], methodArgumentTypes))));
}

// public Outracks.Simulator.Bytecode.TypeName get_WithGenericSuffix() [instance] :1907
TypeName* TypeName::WithGenericSuffix()
{
    uStackFrame __("Outracks.Simulator.Bytecode.TypeName", "get_WithGenericSuffix()");
    ::g::Outracks::Optional1<uStrong<TypeName*> > ind5;
    ::g::Outracks::Optional1<uStrong<TypeName*> > ind6;
    ::g::Outracks::Optional1<uStrong<TypeName*> > ret11;
    ::g::Outracks::Optional1<uStrong<TypeName*> > ret12;
    return TypeName::New1((ind5 = ContainingType().Value< ::g::Outracks::Optional1<uStrong<TypeName*> > >(), (&ind5))->HasValue(::TYPES[104/*Outracks.Optional<Outracks.Simulator.Bytecode.TypeName>*/]) ? (::g::Outracks::Optional__Some_fn(::TYPES[80/*Outracks.Optional.Some<Outracks.Simulator.Bytecode.TypeName>*/], uPtr((ind6 = ContainingType().Value< ::g::Outracks::Optional1<uStrong<TypeName*> > >(), (&ind6))->Value(::TYPES[104/*Outracks.Optional<Outracks.Simulator.Bytecode.TypeName>*/]))->WithGenericSuffix(), &ret11), ret11) : (::g::Outracks::Optional__None_fn(::TYPES[79/*Outracks.Optional.None<Outracks.Simulator.Bytecode.TypeName>*/], &ret12), ret12), ::g::Uno::String::op_Addition2(Surname, (uPtr(GenericArguments)->Count() == 0) ? ::STRINGS[29/*""*/] : (uString*)::g::Uno::String::op_Addition1(::STRINGS[33/*"`"*/], uBox<int>(::g::Uno::Int_typeof(), uPtr(GenericArguments)->Count()))), (::g::Outracks::Simulator::ImmutableList*)::g::Outracks::Simulator::ImmutableList::Empty(::TYPES[107/*Outracks.Simulator.ImmutableList<Outracks.Simulator.Bytecode.TypeName>*/]));
}

// public static Outracks.Simulator.Bytecode.TypeName _Read(System.IO.BinaryReader reader) [static] :1987
TypeName* TypeName::_Read(::g::System::IO::BinaryReader* reader)
{
    uStackFrame __("Outracks.Simulator.Bytecode.TypeName", "_Read(System.IO.BinaryReader)");
    TypeName_typeof()->Init();
    ::g::Outracks::Optional1<uStrong<TypeName*> > ret10;
    ::g::Outracks::Optional1<uStrong<TypeName*> > containingType = (::g::Outracks::Optional__Read_fn(::TYPES[76/*Outracks.Optional.Read<Outracks.Simulator.Bytecode.TypeName>*/], reader, TypeName::Read(), &ret10), ret10);
    uString* surname = uPtr(reader)->ReadString();
    ::g::Outracks::Simulator::ImmutableList* genericArguments = (::g::Outracks::Simulator::ImmutableList*)::g::Outracks::Simulator::List::Read(::TYPES[100/*Outracks.Simulator.List.Read<Outracks.Simulator.Bytecode.TypeName>*/], reader, TypeName::Read());
    return TypeName::New1(containingType, surname, genericArguments);
}

// public static void _Write(Outracks.Simulator.Bytecode.TypeName name, System.IO.BinaryWriter writer) [static] :1973
void TypeName::_Write(TypeName* name, ::g::System::IO::BinaryWriter* writer)
{
    uStackFrame __("Outracks.Simulator.Bytecode.TypeName", "_Write(Outracks.Simulator.Bytecode.TypeName,System.IO.BinaryWriter)");
    TypeName_typeof()->Init();
    uPtr(name)->_Write1(writer);
}

// public TypeName New(Outracks.Optional<Outracks.Simulator.Bytecode.TypeName> containingType, string surname, Outracks.Simulator.ImmutableList<Outracks.Simulator.Bytecode.TypeName> genericArguments) [static] :1884
TypeName* TypeName::New1(::g::Outracks::Optional1<uStrong<TypeName*> > containingType, uString* surname, ::g::Outracks::Simulator::ImmutableList* genericArguments)
{
    TypeName* obj9 = (TypeName*)uNew(TypeName_typeof());
    obj9->ctor_(containingType, surname, genericArguments);
    return obj9;
}

// public static operator ==(Outracks.Simulator.Bytecode.TypeName a, Outracks.Simulator.Bytecode.TypeName b) [static] :1961
bool TypeName::op_Equality(TypeName* a, TypeName* b)
{
    uStackFrame __("Outracks.Simulator.Bytecode.TypeName", "==(Outracks.Simulator.Bytecode.TypeName,Outracks.Simulator.Bytecode.TypeName)");
    TypeName_typeof()->Init();
    return uPtr(a)->Equals2(b);
}

// public static operator !=(Outracks.Simulator.Bytecode.TypeName a, Outracks.Simulator.Bytecode.TypeName b) [static] :1966
bool TypeName::op_Inequality(TypeName* a, TypeName* b)
{
    uStackFrame __("Outracks.Simulator.Bytecode.TypeName", "!=(Outracks.Simulator.Bytecode.TypeName,Outracks.Simulator.Bytecode.TypeName)");
    TypeName_typeof()->Init();
    return !uPtr(a)->Equals2(b);
}

// public static Outracks.Simulator.Bytecode.TypeName Parse(string name) [static] :2004
TypeName* TypeName::Parse(uString* name)
{
    TypeName_typeof()->Init();
    return ::g::Outracks::Simulator::Bytecode::TypeNameParser::Parse(name);
}
// }

// /usr/local/share/uno/Packages/Outracks.Simulator.Common.Uno/0.0.0/bytecode/$.uno
// --------------------------------------------------------------------------------

// public sealed class TypeNameParser :2019
// {
static void TypeNameParser_build(uType* type)
{
    ::STRINGS[0] = uString::Const(".");
    ::STRINGS[30] = uString::Const("<");
    ::STRINGS[32] = uString::Const(">");
    ::STRINGS[31] = uString::Const(",");
    ::TYPES[102] = ::g::Outracks::Simulator::List_typeof()->MakeMethod(3/*ToImmutableList<Outracks.Simulator.Bytecode.TypeName>*/, ::g::Outracks::Simulator::Bytecode::TypeName_typeof(), NULL);
    ::TYPES[104] = ::g::Outracks::Optional1_typeof()->MakeType(::g::Outracks::Simulator::Bytecode::TypeName_typeof(), NULL);
    ::TYPES[105] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Outracks::Simulator::Bytecode::TypeName_typeof(), NULL);
    type->SetFields(0,
        ::g::Uno::Int_typeof(), offsetof(::g::Outracks::Simulator::Bytecode::TypeNameParser, _idx), 0,
        ::g::Uno::Collections::List_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(::g::Outracks::Simulator::Bytecode::TypeNameParser, _tokens), 0);
    type->Reflection.SetFunctions(3,
        new uFunction(".ctor", NULL, (void*)TypeNameParser__New1_fn, 0, true, type, 1, ::g::Uno::Collections::List_typeof()->MakeType(::g::Uno::String_typeof(), NULL)),
        new uFunction("Parse", NULL, (void*)TypeNameParser__Parse_fn, 0, true, ::g::Outracks::Simulator::Bytecode::TypeName_typeof(), 1, ::g::Uno::String_typeof()),
        new uFunction("ParseTypeName", NULL, (void*)TypeNameParser__ParseTypeName_fn, 0, false, ::g::Outracks::Simulator::Bytecode::TypeName_typeof(), 1, ::TYPES[104/*Outracks.Optional<Outracks.Simulator.Bytecode.TypeName>*/]));
}

uType* TypeNameParser_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ObjectSize = sizeof(TypeNameParser);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Outracks.Simulator.Bytecode.TypeNameParser", options);
    type->fp_build_ = TypeNameParser_build;
    return type;
}

// public TypeNameParser(Uno.Collections.List<string> tokens) :2029
void TypeNameParser__ctor__fn(TypeNameParser* __this, ::g::Uno::Collections::List* tokens)
{
    __this->ctor_(tokens);
}

// private string get_Cur() :2036
void TypeNameParser__get_Cur_fn(TypeNameParser* __this, uString** __retval)
{
    *__retval = __this->Cur();
}

// public TypeNameParser New(Uno.Collections.List<string> tokens) :2029
void TypeNameParser__New1_fn(::g::Uno::Collections::List* tokens, TypeNameParser** __retval)
{
    *__retval = TypeNameParser::New1(tokens);
}

// private static Uno.Collections.List<Outracks.Simulator.Bytecode.TypeName> get_NoTypes() :2034
void TypeNameParser__get_NoTypes_fn(::g::Uno::Collections::List** __retval)
{
    *__retval = TypeNameParser::NoTypes();
}

// public static Outracks.Simulator.Bytecode.TypeName Parse(string typeName) :2024
void TypeNameParser__Parse_fn(uString* typeName, ::g::Outracks::Simulator::Bytecode::TypeName** __retval)
{
    *__retval = TypeNameParser::Parse(typeName);
}

// private void ParsePossibleDot() :2074
void TypeNameParser__ParsePossibleDot_fn(TypeNameParser* __this)
{
    __this->ParsePossibleDot();
}

// private Uno.Collections.List<Outracks.Simulator.Bytecode.TypeName> ParsePossibleGenericArguments() :2056
void TypeNameParser__ParsePossibleGenericArguments_fn(TypeNameParser* __this, ::g::Uno::Collections::List** __retval)
{
    *__retval = __this->ParsePossibleGenericArguments();
}

// private Outracks.Simulator.Bytecode.TypeName ParseSingleTypeName([Outracks.Optional<Outracks.Simulator.Bytecode.TypeName> containingType]) :2050
void TypeNameParser__ParseSingleTypeName_fn(TypeNameParser* __this, ::g::Outracks::Optional1<uStrong< ::g::Outracks::Simulator::Bytecode::TypeName*> >* containingType, ::g::Outracks::Simulator::Bytecode::TypeName** __retval)
{
    *__retval = __this->ParseSingleTypeName(*containingType);
}

// public Outracks.Simulator.Bytecode.TypeName ParseTypeName([Outracks.Optional<Outracks.Simulator.Bytecode.TypeName> containingType]) :2038
void TypeNameParser__ParseTypeName_fn(TypeNameParser* __this, ::g::Outracks::Optional1<uStrong< ::g::Outracks::Simulator::Bytecode::TypeName*> >* containingType, ::g::Outracks::Simulator::Bytecode::TypeName** __retval)
{
    *__retval = __this->ParseTypeName(*containingType);
}

// public TypeNameParser(Uno.Collections.List<string> tokens) [instance] :2029
void TypeNameParser::ctor_(::g::Uno::Collections::List* tokens)
{
    _tokens = tokens;
}

// private string get_Cur() [instance] :2036
uString* TypeNameParser::Cur()
{
    uStackFrame __("Outracks.Simulator.Bytecode.TypeNameParser", "get_Cur()");
    uString* ret4;
    return (::g::Uno::Collections::List__get_Item_fn(uPtr(_tokens), uCRef<int>(_idx), &ret4), ret4);
}

// private void ParsePossibleDot() [instance] :2074
void TypeNameParser::ParsePossibleDot()
{
    uStackFrame __("Outracks.Simulator.Bytecode.TypeNameParser", "ParsePossibleDot()");

    if ((_idx < uPtr(_tokens)->Count()) && ::g::Uno::String::op_Equality(Cur(), ::STRINGS[0/*"."*/]))
        _idx++;
}

// private Uno.Collections.List<Outracks.Simulator.Bytecode.TypeName> ParsePossibleGenericArguments() [instance] :2056
::g::Uno::Collections::List* TypeNameParser::ParsePossibleGenericArguments()
{
    uStackFrame __("Outracks.Simulator.Bytecode.TypeNameParser", "ParsePossibleGenericArguments()");
    ::g::Uno::Collections::List* genericArugments = TypeNameParser::NoTypes();

    if ((_idx >= uPtr(_tokens)->Count()) || !::g::Uno::String::op_Equality(Cur(), ::STRINGS[30/*"<"*/]))
        return genericArugments;

    _idx++;

    while (!::g::Uno::String::op_Equality(Cur(), ::STRINGS[32/*">"*/]))
    {
        ::g::Uno::Collections::List__Add_fn(uPtr(genericArugments), ParseTypeName(uDefault< ::g::Outracks::Optional1<uStrong< ::g::Outracks::Simulator::Bytecode::TypeName*> > >()));

        if (::g::Uno::String::op_Equality(Cur(), ::STRINGS[31/*","*/]))
            _idx++;
    }

    _idx++;
    return genericArugments;
}

// private Outracks.Simulator.Bytecode.TypeName ParseSingleTypeName([Outracks.Optional<Outracks.Simulator.Bytecode.TypeName> containingType]) [instance] :2050
::g::Outracks::Simulator::Bytecode::TypeName* TypeNameParser::ParseSingleTypeName(::g::Outracks::Optional1<uStrong< ::g::Outracks::Simulator::Bytecode::TypeName*> > containingType)
{
    uStackFrame __("Outracks.Simulator.Bytecode.TypeNameParser", "ParseSingleTypeName([Outracks.Optional<Outracks.Simulator.Bytecode.TypeName>])");
    uString* ret2;
    ::g::Outracks::Simulator::Bytecode::TypeName* typeName = ::g::Outracks::Simulator::Bytecode::TypeName::New1(containingType, (::g::Uno::Collections::List__get_Item_fn(uPtr(_tokens), uCRef<int>(_idx++), &ret2), ret2), (::g::Outracks::Simulator::ImmutableList*)::g::Outracks::Simulator::List::ToImmutableList(::TYPES[102/*Outracks.Simulator.List.ToImmutableList<Outracks.Simulator.Bytecode.TypeName>*/], (uObject*)ParsePossibleGenericArguments()));
    return typeName;
}

// public Outracks.Simulator.Bytecode.TypeName ParseTypeName([Outracks.Optional<Outracks.Simulator.Bytecode.TypeName> containingType]) [instance] :2038
::g::Outracks::Simulator::Bytecode::TypeName* TypeNameParser::ParseTypeName(::g::Outracks::Optional1<uStrong< ::g::Outracks::Simulator::Bytecode::TypeName*> > containingType)
{
    uStackFrame __("Outracks.Simulator.Bytecode.TypeNameParser", "ParseTypeName([Outracks.Optional<Outracks.Simulator.Bytecode.TypeName>])");
    ::g::Outracks::Optional1<uStrong< ::g::Outracks::Simulator::Bytecode::TypeName*> > ret3;
    ::g::Outracks::Simulator::Bytecode::TypeName* typeName = ParseSingleTypeName(containingType);
    ParsePossibleDot();

    if ((_idx < uPtr(_tokens)->Count()) && !::g::Outracks::Simulator::Bytecode::TypeNameTokenizer::IsSpecialChar(uPtr(Cur())->Item(0)))
    {
        ::g::Outracks::Simulator::Bytecode::TypeName* tmp = ParseTypeName((::g::Outracks::Optional1__op_Implicit_fn(::TYPES[104/*Outracks.Optional<Outracks.Simulator.Bytecode.TypeName>*/], typeName, &ret3), ret3));
        return tmp;
    }

    return typeName;
}

// public TypeNameParser New(Uno.Collections.List<string> tokens) [static] :2029
TypeNameParser* TypeNameParser::New1(::g::Uno::Collections::List* tokens)
{
    TypeNameParser* obj1 = (TypeNameParser*)uNew(TypeNameParser_typeof());
    obj1->ctor_(tokens);
    return obj1;
}

// public static Outracks.Simulator.Bytecode.TypeName Parse(string typeName) [static] :2024
::g::Outracks::Simulator::Bytecode::TypeName* TypeNameParser::Parse(uString* typeName)
{
    uStackFrame __("Outracks.Simulator.Bytecode.TypeNameParser", "Parse(string)");
    return TypeNameParser::New1(::g::Outracks::Simulator::Bytecode::TypeNameTokenizer::Tokenize1(typeName))->ParseTypeName(uDefault< ::g::Outracks::Optional1<uStrong< ::g::Outracks::Simulator::Bytecode::TypeName*> > >());
}

// private static Uno.Collections.List<Outracks.Simulator.Bytecode.TypeName> get_NoTypes() [static] :2034
::g::Uno::Collections::List* TypeNameParser::NoTypes()
{
    return (::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[105/*Uno.Collections.List<Outracks.Simulator.Bytecode.TypeName>*/]);
}
// }

// /usr/local/share/uno/Packages/Outracks.Simulator.Common.Uno/0.0.0/bytecode/$.uno
// --------------------------------------------------------------------------------

// public sealed class TypeNameTokenizer :2089
// {
static void TypeNameTokenizer_build(uType* type)
{
    ::STRINGS[0] = uString::Const(".");
    ::STRINGS[30] = uString::Const("<");
    ::STRINGS[32] = uString::Const(">");
    ::STRINGS[31] = uString::Const(",");
    ::TYPES[108] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Uno::String_typeof(), NULL);
    type->SetFields(0,
        ::g::Uno::Int_typeof(), offsetof(::g::Outracks::Simulator::Bytecode::TypeNameTokenizer, _idx), 0,
        ::g::Uno::String_typeof(), offsetof(::g::Outracks::Simulator::Bytecode::TypeNameTokenizer, _name), 0,
        ::TYPES[108/*Uno.Collections.List<string>*/], offsetof(::g::Outracks::Simulator::Bytecode::TypeNameTokenizer, _tokens), 0);
    type->Reflection.SetFunctions(2,
        new uFunction("IsSpecialChar", NULL, (void*)TypeNameTokenizer__IsSpecialChar_fn, 0, true, ::g::Uno::Bool_typeof(), 1, ::g::Uno::Char_typeof()),
        new uFunction("Tokenize", NULL, (void*)TypeNameTokenizer__Tokenize1_fn, 0, true, ::TYPES[108/*Uno.Collections.List<string>*/], 1, ::g::Uno::String_typeof()));
}

uType* TypeNameTokenizer_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.ObjectSize = sizeof(TypeNameTokenizer);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Outracks.Simulator.Bytecode.TypeNameTokenizer", options);
    type->fp_build_ = TypeNameTokenizer_build;
    return type;
}

// private TypeNameTokenizer(string name) :2107
void TypeNameTokenizer__ctor__fn(TypeNameTokenizer* __this, uString* name)
{
    __this->ctor_(name);
}

// public static bool IsSpecialChar(char c) :2102
void TypeNameTokenizer__IsSpecialChar_fn(uChar* c, bool* __retval)
{
    *__retval = TypeNameTokenizer::IsSpecialChar(*c);
}

// private TypeNameTokenizer New(string name) :2107
void TypeNameTokenizer__New1_fn(uString* name, TypeNameTokenizer** __retval)
{
    *__retval = TypeNameTokenizer::New1(name);
}

// private void ReadName() :2140
void TypeNameTokenizer__ReadName_fn(TypeNameTokenizer* __this)
{
    __this->ReadName();
}

// private void Tokenize() :2112
void TypeNameTokenizer__Tokenize_fn(TypeNameTokenizer* __this)
{
    __this->Tokenize();
}

// public static Uno.Collections.List<string> Tokenize(string name) :2095
void TypeNameTokenizer__Tokenize1_fn(uString* name, ::g::Uno::Collections::List** __retval)
{
    *__retval = TypeNameTokenizer::Tokenize1(name);
}

// private TypeNameTokenizer(string name) [instance] :2107
void TypeNameTokenizer::ctor_(uString* name)
{
    _tokens = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[108/*Uno.Collections.List<string>*/]));
    _name = name;
}

// private void ReadName() [instance] :2140
void TypeNameTokenizer::ReadName()
{
    uStackFrame __("Outracks.Simulator.Bytecode.TypeNameTokenizer", "ReadName()");
    int end = _idx + 1;

    while ((end < uPtr(_name)->Length()) && !TypeNameTokenizer::IsSpecialChar(uPtr(_name)->Item(end)))
        end++;

    ::g::Uno::Collections::List__Add_fn(uPtr(_tokens), ::g::Uno::String::Substring1(uPtr(_name), _idx, end - _idx));
    _idx = end;
}

// private void Tokenize() [instance] :2112
void TypeNameTokenizer::Tokenize()
{
    uStackFrame __("Outracks.Simulator.Bytecode.TypeNameTokenizer", "Tokenize()");

    while (_idx < uPtr(_name)->Length())

        switch (uPtr(_name)->Item(_idx))
        {
            case '.':
            {
                ::g::Uno::Collections::List__Add_fn(uPtr(_tokens), ::STRINGS[0/*"."*/]);
                _idx++;
                break;
            }
            case '<':
            {
                ::g::Uno::Collections::List__Add_fn(uPtr(_tokens), ::STRINGS[30/*"<"*/]);
                _idx++;
                break;
            }
            case '>':
            {
                ::g::Uno::Collections::List__Add_fn(uPtr(_tokens), ::STRINGS[32/*">"*/]);
                _idx++;
                break;
            }
            case ',':
            {
                ::g::Uno::Collections::List__Add_fn(uPtr(_tokens), ::STRINGS[31/*","*/]);
                _idx++;
                break;
            }
            default:
            {
                ReadName();
                break;
            }
        }
}

// public static bool IsSpecialChar(char c) [static] :2102
bool TypeNameTokenizer::IsSpecialChar(uChar c)
{
    return (((c == '.') || (c == '<')) || (c == '>')) || (c == ',');
}

// private TypeNameTokenizer New(string name) [static] :2107
TypeNameTokenizer* TypeNameTokenizer::New1(uString* name)
{
    TypeNameTokenizer* obj1 = (TypeNameTokenizer*)uNew(TypeNameTokenizer_typeof());
    obj1->ctor_(name);
    return obj1;
}

// public static Uno.Collections.List<string> Tokenize(string name) [static] :2095
::g::Uno::Collections::List* TypeNameTokenizer::Tokenize1(uString* name)
{
    uStackFrame __("Outracks.Simulator.Bytecode.TypeNameTokenizer", "Tokenize(string)");
    TypeNameTokenizer* tokenizer = TypeNameTokenizer::New1(name);
    tokenizer->Tokenize();
    return tokenizer->_tokens;
}
// }

// /usr/local/share/uno/Packages/Outracks.Simulator.Common.Uno/0.0.0/bytecode/$.uno
// --------------------------------------------------------------------------------

// public sealed class Variable :2160
// {
// static Variable() :2160
static void Variable__cctor__fn(uType* __type)
{
    Variable::This_ = Variable::New1(::STRINGS[34/*"this"*/]);
    Variable::Write_ = uDelegate::New(::TYPES[109/*Uno.Action<Outracks.Simulator.Bytecode.Variable, System.IO.BinaryWriter>*/], (void*)Variable___Write_fn);
    Variable::Read_ = uDelegate::New(::TYPES[110/*Uno.Func<System.IO.BinaryReader, Outracks.Simulator.Bytecode.Variable>*/], (void*)Variable___Read_fn);
}

static void Variable_build(uType* type)
{
    ::STRINGS[34] = uString::Const("this");
    ::TYPES[109] = ::g::Uno::Action2_typeof()->MakeType(type, ::g::System::IO::BinaryWriter_typeof(), NULL);
    ::TYPES[110] = ::g::Uno::Func1_typeof()->MakeType(::g::System::IO::BinaryReader_typeof(), type, NULL);
    type->SetFields(0,
        ::g::Uno::String_typeof(), offsetof(::g::Outracks::Simulator::Bytecode::Variable, Name), 0,
        ::TYPES[110/*Uno.Func<System.IO.BinaryReader, Outracks.Simulator.Bytecode.Variable>*/], (uintptr_t)&::g::Outracks::Simulator::Bytecode::Variable::Read_, uFieldFlagsStatic,
        type, (uintptr_t)&::g::Outracks::Simulator::Bytecode::Variable::This_, uFieldFlagsStatic,
        ::TYPES[109/*Uno.Action<Outracks.Simulator.Bytecode.Variable, System.IO.BinaryWriter>*/], (uintptr_t)&::g::Outracks::Simulator::Bytecode::Variable::Write_, uFieldFlagsStatic);
    type->Reflection.SetFields(4,
        new uField("Name", 0),
        new uField("Read", 1),
        new uField("This", 2),
        new uField("Write", 3));
    type->Reflection.SetFunctions(6,
        new uFunction("_Read", NULL, (void*)Variable___Read_fn, 0, true, type, 1, ::g::System::IO::BinaryReader_typeof()),
        new uFunction("_Write", NULL, (void*)Variable___Write_fn, 0, true, uVoid_typeof(), 2, type, ::g::System::IO::BinaryWriter_typeof()),
        new uFunction("_Write", NULL, (void*)Variable___Write1_fn, 0, false, uVoid_typeof(), 1, ::g::System::IO::BinaryWriter_typeof()),
        new uFunction("Equals", NULL, (void*)Variable__Equals2_fn, 0, false, ::g::Uno::Bool_typeof(), 1, type),
        new uFunction("GetName", NULL, (void*)Variable__GetName_fn, 0, true, ::g::Uno::String_typeof(), 1, type),
        new uFunction(".ctor", NULL, (void*)Variable__New1_fn, 0, true, type, 1, ::g::Uno::String_typeof()));
}

uType* Variable_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 4;
    options.ObjectSize = sizeof(Variable);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Outracks.Simulator.Bytecode.Variable", options);
    type->fp_build_ = Variable_build;
    type->fp_cctor_ = Variable__cctor__fn;
    type->fp_Equals = (void(*)(uObject*, uObject*, bool*))Variable__Equals_fn;
    type->fp_GetHashCode = (void(*)(uObject*, int*))Variable__GetHashCode_fn;
    type->fp_ToString = (void(*)(uObject*, uString**))Variable__ToString_fn;
    return type;
}

// public Variable(string name) :2167
void Variable__ctor__fn(Variable* __this, uString* name)
{
    __this->ctor_(name);
}

// public static Outracks.Simulator.Bytecode.Variable _Read(System.IO.BinaryReader reader) :2220
void Variable___Read_fn(::g::System::IO::BinaryReader* reader, Variable** __retval)
{
    *__retval = Variable::_Read(reader);
}

// public static void _Write(Outracks.Simulator.Bytecode.Variable v, System.IO.BinaryWriter writer) :2208
void Variable___Write_fn(Variable* v, ::g::System::IO::BinaryWriter* writer)
{
    Variable::_Write(v, writer);
}

// public void _Write(System.IO.BinaryWriter writer) :2213
void Variable___Write1_fn(Variable* __this, ::g::System::IO::BinaryWriter* writer)
{
    __this->_Write1(writer);
}

// public override sealed bool Equals(object obj) :2179
void Variable__Equals_fn(Variable* __this, uObject* obj, bool* __retval)
{
    uStackFrame __("Outracks.Simulator.Bytecode.Variable", "Equals(object)");

    if (::g::Uno::Object::ReferenceEquals(NULL, obj))
        return *__retval = false, void();

    if (::g::Uno::Object::ReferenceEquals(__this, obj))
        return *__retval = true, void();

    return *__retval = uIs(obj, __this->__type) && __this->Equals2(uCast<Variable*>(obj, __this->__type)), void();
}

// public bool Equals(Outracks.Simulator.Bytecode.Variable other) :2172
void Variable__Equals2_fn(Variable* __this, Variable* other, bool* __retval)
{
    *__retval = __this->Equals2(other);
}

// public override sealed int GetHashCode() :2186
void Variable__GetHashCode_fn(Variable* __this, int* __retval)
{
    uStackFrame __("Outracks.Simulator.Bytecode.Variable", "GetHashCode()");
    return *__retval = ::g::Uno::String::op_Inequality(__this->Name, NULL) ? uPtr(__this->Name)->GetHashCode() : 0, void();
}

// public static string GetName(Outracks.Simulator.Bytecode.Variable arg) :2226
void Variable__GetName_fn(Variable* arg, uString** __retval)
{
    *__retval = Variable::GetName(arg);
}

// public Variable New(string name) :2167
void Variable__New1_fn(uString* name, Variable** __retval)
{
    *__retval = Variable::New1(name);
}

// public static operator ==(Outracks.Simulator.Bytecode.Variable left, Outracks.Simulator.Bytecode.Variable right) :2191
void Variable__op_Equality_fn(Variable* left, Variable* right, bool* __retval)
{
    *__retval = Variable::op_Equality(left, right);
}

// public static operator !=(Outracks.Simulator.Bytecode.Variable left, Outracks.Simulator.Bytecode.Variable right) :2196
void Variable__op_Inequality_fn(Variable* left, Variable* right, bool* __retval)
{
    *__retval = Variable::op_Inequality(left, right);
}

// public override sealed string ToString() :2201
void Variable__ToString_fn(Variable* __this, uString** __retval)
{
    return *__retval = __this->Name, void();
}

uSStrong<uDelegate*> Variable::Read_;
uSStrong<Variable*> Variable::This_;
uSStrong<uDelegate*> Variable::Write_;

// public Variable(string name) [instance] :2167
void Variable::ctor_(uString* name)
{
    Name = name;
}

// public void _Write(System.IO.BinaryWriter writer) [instance] :2213
void Variable::_Write1(::g::System::IO::BinaryWriter* writer)
{
    uStackFrame __("Outracks.Simulator.Bytecode.Variable", "_Write(System.IO.BinaryWriter)");
    uPtr(writer)->Write6(Name);
}

// public bool Equals(Outracks.Simulator.Bytecode.Variable other) [instance] :2172
bool Variable::Equals2(Variable* other)
{
    uStackFrame __("Outracks.Simulator.Bytecode.Variable", "Equals(Outracks.Simulator.Bytecode.Variable)");

    if (::g::Uno::Object::ReferenceEquals(NULL, other))
        return false;

    if (::g::Uno::Object::ReferenceEquals(this, other))
        return true;

    return ::g::Uno::String::Equals3(Name, uPtr(other)->Name);
}

// public static Outracks.Simulator.Bytecode.Variable _Read(System.IO.BinaryReader reader) [static] :2220
Variable* Variable::_Read(::g::System::IO::BinaryReader* reader)
{
    uStackFrame __("Outracks.Simulator.Bytecode.Variable", "_Read(System.IO.BinaryReader)");
    Variable_typeof()->Init();
    return Variable::New1(uPtr(reader)->ReadString());
}

// public static void _Write(Outracks.Simulator.Bytecode.Variable v, System.IO.BinaryWriter writer) [static] :2208
void Variable::_Write(Variable* v, ::g::System::IO::BinaryWriter* writer)
{
    uStackFrame __("Outracks.Simulator.Bytecode.Variable", "_Write(Outracks.Simulator.Bytecode.Variable,System.IO.BinaryWriter)");
    Variable_typeof()->Init();
    uPtr(v)->_Write1(writer);
}

// public static string GetName(Outracks.Simulator.Bytecode.Variable arg) [static] :2226
uString* Variable::GetName(Variable* arg)
{
    uStackFrame __("Outracks.Simulator.Bytecode.Variable", "GetName(Outracks.Simulator.Bytecode.Variable)");
    Variable_typeof()->Init();
    return uPtr(arg)->Name;
}

// public Variable New(string name) [static] :2167
Variable* Variable::New1(uString* name)
{
    Variable* obj1 = (Variable*)uNew(Variable_typeof());
    obj1->ctor_(name);
    return obj1;
}

// public static operator ==(Outracks.Simulator.Bytecode.Variable left, Outracks.Simulator.Bytecode.Variable right) [static] :2191
bool Variable::op_Equality(Variable* left, Variable* right)
{
    uStackFrame __("Outracks.Simulator.Bytecode.Variable", "==(Outracks.Simulator.Bytecode.Variable,Outracks.Simulator.Bytecode.Variable)");
    Variable_typeof()->Init();
    return ::g::Uno::Object::Equals1(left, right);
}

// public static operator !=(Outracks.Simulator.Bytecode.Variable left, Outracks.Simulator.Bytecode.Variable right) [static] :2196
bool Variable::op_Inequality(Variable* left, Variable* right)
{
    uStackFrame __("Outracks.Simulator.Bytecode.Variable", "!=(Outracks.Simulator.Bytecode.Variable,Outracks.Simulator.Bytecode.Variable)");
    Variable_typeof()->Init();
    return !::g::Uno::Object::Equals1(left, right);
}
// }

// /usr/local/share/uno/Packages/Outracks.Simulator.Common.Uno/0.0.0/bytecode/$.uno
// --------------------------------------------------------------------------------

// public sealed class WriteProperty :550
// {
static void WriteProperty_build(uType* type)
{
    ::STRINGS[0] = uString::Const(".");
    ::STRINGS[3] = uString::Const(" = ");
    type->SetFields(0,
        ::g::Outracks::Simulator::Bytecode::Expression_typeof(), offsetof(::g::Outracks::Simulator::Bytecode::WriteProperty, Object), 0,
        ::g::Outracks::Simulator::Bytecode::TypeMemberName_typeof(), offsetof(::g::Outracks::Simulator::Bytecode::WriteProperty, Property), 0,
        ::g::Outracks::Simulator::Bytecode::Expression_typeof(), offsetof(::g::Outracks::Simulator::Bytecode::WriteProperty, Value), 0);
    type->Reflection.SetFields(3,
        new uField("Object", 0),
        new uField("Property", 1),
        new uField("Value", 2));
    type->Reflection.SetFunctions(3,
        new uFunction(".ctor", NULL, (void*)WriteProperty__New1_fn, 0, true, type, 3, ::g::Outracks::Simulator::Bytecode::Expression_typeof(), ::g::Outracks::Simulator::Bytecode::TypeMemberName_typeof(), ::g::Outracks::Simulator::Bytecode::Expression_typeof()),
        new uFunction("Read", NULL, (void*)WriteProperty__Read2_fn, 0, true, type, 1, ::g::System::IO::BinaryReader_typeof()),
        new uFunction("Write", NULL, (void*)WriteProperty__Write2_fn, 0, true, uVoid_typeof(), 2, type, ::g::System::IO::BinaryWriter_typeof()));
}

::g::Outracks::Simulator::Bytecode::Expression_type* WriteProperty_typeof()
{
    static uSStrong< ::g::Outracks::Simulator::Bytecode::Expression_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Outracks::Simulator::Bytecode::Expression_typeof();
    options.FieldCount = 3;
    options.ObjectSize = sizeof(WriteProperty);
    options.TypeSize = sizeof(::g::Outracks::Simulator::Bytecode::Expression_type);
    type = (::g::Outracks::Simulator::Bytecode::Expression_type*)uClassType::New("Outracks.Simulator.Bytecode.WriteProperty", options);
    type->fp_build_ = WriteProperty_build;
    type->fp_get_ExpressionId = (void(*)(::g::Outracks::Simulator::Bytecode::Expression*, uChar*))WriteProperty__get_ExpressionId_fn;
    type->fp_ToString = (void(*)(uObject*, uString**))WriteProperty__ToString_fn;
    type->fp_WriteExpression = (void(*)(::g::Outracks::Simulator::Bytecode::Expression*, ::g::System::IO::BinaryWriter*))WriteProperty__WriteExpression_fn;
    return type;
}

// public WriteProperty(Outracks.Simulator.Bytecode.Expression o, Outracks.Simulator.Bytecode.TypeMemberName property, Outracks.Simulator.Bytecode.Expression value) :558
void WriteProperty__ctor_2_fn(WriteProperty* __this, ::g::Outracks::Simulator::Bytecode::Expression* o, ::g::Outracks::Simulator::Bytecode::TypeMemberName* property, ::g::Outracks::Simulator::Bytecode::Expression* value)
{
    __this->ctor_2(o, property, value);
}

// public override sealed char get_ExpressionId() :556
void WriteProperty__get_ExpressionId_fn(WriteProperty* __this, uChar* __retval)
{
    return *__retval = 'm', void();
}

// public WriteProperty New(Outracks.Simulator.Bytecode.Expression o, Outracks.Simulator.Bytecode.TypeMemberName property, Outracks.Simulator.Bytecode.Expression value) :558
void WriteProperty__New1_fn(::g::Outracks::Simulator::Bytecode::Expression* o, ::g::Outracks::Simulator::Bytecode::TypeMemberName* property, ::g::Outracks::Simulator::Bytecode::Expression* value, WriteProperty** __retval)
{
    *__retval = WriteProperty::New1(o, property, value);
}

// public static new Outracks.Simulator.Bytecode.WriteProperty Read(System.IO.BinaryReader reader) :582
void WriteProperty__Read2_fn(::g::System::IO::BinaryReader* reader, WriteProperty** __retval)
{
    *__retval = WriteProperty::Read2(reader);
}

// public override sealed string ToString() :565
void WriteProperty__ToString_fn(WriteProperty* __this, uString** __retval)
{
    uStackFrame __("Outracks.Simulator.Bytecode.WriteProperty", "ToString()");
    return *__retval = ::g::Uno::String::op_Addition1(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition(__this->Object, ::STRINGS[0/*"."*/]), uPtr(__this->Property)->Name), ::STRINGS[3/*" = "*/]), __this->Value), void();
}

// public static void Write(Outracks.Simulator.Bytecode.WriteProperty o, System.IO.BinaryWriter writer) :570
void WriteProperty__Write2_fn(WriteProperty* o, ::g::System::IO::BinaryWriter* writer)
{
    WriteProperty::Write2(o, writer);
}

// protected override sealed void WriteExpression(System.IO.BinaryWriter writer) :575
void WriteProperty__WriteExpression_fn(WriteProperty* __this, ::g::System::IO::BinaryWriter* writer)
{
    uStackFrame __("Outracks.Simulator.Bytecode.WriteProperty", "WriteExpression(System.IO.BinaryWriter)");
    ::g::Outracks::Simulator::Bytecode::Expression::Write1(__this->Object, writer);
    ::g::Outracks::Simulator::Bytecode::TypeMemberName::Write(__this->Property, writer);
    ::g::Outracks::Simulator::Bytecode::Expression::Write1(__this->Value, writer);
}

// public WriteProperty(Outracks.Simulator.Bytecode.Expression o, Outracks.Simulator.Bytecode.TypeMemberName property, Outracks.Simulator.Bytecode.Expression value) [instance] :558
void WriteProperty::ctor_2(::g::Outracks::Simulator::Bytecode::Expression* o, ::g::Outracks::Simulator::Bytecode::TypeMemberName* property, ::g::Outracks::Simulator::Bytecode::Expression* value)
{
    ctor_1();
    Object = o;
    Property = property;
    Value = value;
}

// public WriteProperty New(Outracks.Simulator.Bytecode.Expression o, Outracks.Simulator.Bytecode.TypeMemberName property, Outracks.Simulator.Bytecode.Expression value) [static] :558
WriteProperty* WriteProperty::New1(::g::Outracks::Simulator::Bytecode::Expression* o, ::g::Outracks::Simulator::Bytecode::TypeMemberName* property, ::g::Outracks::Simulator::Bytecode::Expression* value)
{
    WriteProperty* obj1 = (WriteProperty*)uNew(WriteProperty_typeof());
    obj1->ctor_2(o, property, value);
    return obj1;
}

// public static new Outracks.Simulator.Bytecode.WriteProperty Read(System.IO.BinaryReader reader) [static] :582
WriteProperty* WriteProperty::Read2(::g::System::IO::BinaryReader* reader)
{
    uStackFrame __("Outracks.Simulator.Bytecode.WriteProperty", "Read(System.IO.BinaryReader)");
    ::g::Outracks::Simulator::Bytecode::Expression* _Object = (::g::Outracks::Simulator::Bytecode::Expression*)uPtr(::g::Outracks::Simulator::Bytecode::Expression::Read1())->Invoke(1, reader);
    ::g::Outracks::Simulator::Bytecode::TypeMemberName* _Property = ::g::Outracks::Simulator::Bytecode::TypeMemberName::Read(reader);
    ::g::Outracks::Simulator::Bytecode::Expression* _Value = (::g::Outracks::Simulator::Bytecode::Expression*)uPtr(::g::Outracks::Simulator::Bytecode::Expression::Read1())->Invoke(1, reader);
    return WriteProperty::New1(_Object, _Property, _Value);
}

// public static void Write(Outracks.Simulator.Bytecode.WriteProperty o, System.IO.BinaryWriter writer) [static] :570
void WriteProperty::Write2(WriteProperty* o, ::g::System::IO::BinaryWriter* writer)
{
    uStackFrame __("Outracks.Simulator.Bytecode.WriteProperty", "Write(Outracks.Simulator.Bytecode.WriteProperty,System.IO.BinaryWriter)");
    uPtr(o)->WriteExpression(writer);
}
// }

}}}} // ::g::Outracks::Simulator::Bytecode
