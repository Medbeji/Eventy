// This file was generated based on '/Users/medbeji/Library/Application Support/Fusetools/Packages/UnoCore/1.0.11/source/uno/time/text/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Uno{namespace Time{namespace Text{struct FixedFormatPattern;}}}}
namespace g{namespace Uno{namespace Time{namespace Text{struct LocalDateTimePattern;}}}}
namespace g{namespace Uno{namespace Time{namespace Text{struct LocalDateTimePattern__LocalDateTimeBucket;}}}}
namespace g{namespace Uno{namespace Time{namespace Text{struct ParseResult;}}}}
namespace g{namespace Uno{namespace Time{struct LocalDateTime;}}}

namespace g{
namespace Uno{
namespace Time{
namespace Text{

// public sealed class LocalDateTimePattern :179
// {
uType* LocalDateTimePattern_typeof();
void LocalDateTimePattern__ctor__fn(LocalDateTimePattern* __this);
void LocalDateTimePattern__Format_fn(LocalDateTimePattern* __this, ::g::Uno::Time::LocalDateTime* value, uString** __retval);
void LocalDateTimePattern__get_GeneralIsoPattern_fn(LocalDateTimePattern** __retval);
void LocalDateTimePattern__GetDay_fn(LocalDateTimePattern* __this, LocalDateTimePattern__LocalDateTimeBucket* value, int* __retval);
void LocalDateTimePattern__GetHour_fn(LocalDateTimePattern* __this, LocalDateTimePattern__LocalDateTimeBucket* value, int* __retval);
void LocalDateTimePattern__GetMinute_fn(LocalDateTimePattern* __this, LocalDateTimePattern__LocalDateTimeBucket* value, int* __retval);
void LocalDateTimePattern__GetMonth_fn(LocalDateTimePattern* __this, LocalDateTimePattern__LocalDateTimeBucket* value, int* __retval);
void LocalDateTimePattern__GetSecond_fn(LocalDateTimePattern* __this, LocalDateTimePattern__LocalDateTimeBucket* value, int* __retval);
void LocalDateTimePattern__GetSign_fn(LocalDateTimePattern* __this, LocalDateTimePattern__LocalDateTimeBucket* value, int* __retval);
void LocalDateTimePattern__GetYear_fn(LocalDateTimePattern* __this, LocalDateTimePattern__LocalDateTimeBucket* value, int* __retval);
void LocalDateTimePattern__New1_fn(LocalDateTimePattern** __retval);
void LocalDateTimePattern__Parse_fn(LocalDateTimePattern* __this, uString* text, ::g::Uno::Time::Text::ParseResult** __retval);
void LocalDateTimePattern__SetDay_fn(LocalDateTimePattern* __this, LocalDateTimePattern__LocalDateTimeBucket* value, int* day);
void LocalDateTimePattern__SetHour_fn(LocalDateTimePattern* __this, LocalDateTimePattern__LocalDateTimeBucket* value, int* hour);
void LocalDateTimePattern__SetMinute_fn(LocalDateTimePattern* __this, LocalDateTimePattern__LocalDateTimeBucket* value, int* minute);
void LocalDateTimePattern__SetMonth_fn(LocalDateTimePattern* __this, LocalDateTimePattern__LocalDateTimeBucket* value, int* month);
void LocalDateTimePattern__SetSecond_fn(LocalDateTimePattern* __this, LocalDateTimePattern__LocalDateTimeBucket* value, int* second);
void LocalDateTimePattern__SetSign_fn(LocalDateTimePattern* __this, LocalDateTimePattern__LocalDateTimeBucket* value, int* sign);
void LocalDateTimePattern__SetYear_fn(LocalDateTimePattern* __this, LocalDateTimePattern__LocalDateTimeBucket* value, int* year);

struct LocalDateTimePattern : uObject
{
    uStrong< ::g::Uno::Time::Text::FixedFormatPattern*> _generalPattern;
    static uSStrong<LocalDateTimePattern*> General_;
    static uSStrong<LocalDateTimePattern*>& General() { return General_; }

    void ctor_();
    uString* Format(::g::Uno::Time::LocalDateTime* value);
    int GetDay(LocalDateTimePattern__LocalDateTimeBucket* value);
    int GetHour(LocalDateTimePattern__LocalDateTimeBucket* value);
    int GetMinute(LocalDateTimePattern__LocalDateTimeBucket* value);
    int GetMonth(LocalDateTimePattern__LocalDateTimeBucket* value);
    int GetSecond(LocalDateTimePattern__LocalDateTimeBucket* value);
    int GetSign(LocalDateTimePattern__LocalDateTimeBucket* value);
    int GetYear(LocalDateTimePattern__LocalDateTimeBucket* value);
    ::g::Uno::Time::Text::ParseResult* Parse(uString* text);
    void SetDay(LocalDateTimePattern__LocalDateTimeBucket* value, int day);
    void SetHour(LocalDateTimePattern__LocalDateTimeBucket* value, int hour);
    void SetMinute(LocalDateTimePattern__LocalDateTimeBucket* value, int minute);
    void SetMonth(LocalDateTimePattern__LocalDateTimeBucket* value, int month);
    void SetSecond(LocalDateTimePattern__LocalDateTimeBucket* value, int second);
    void SetSign(LocalDateTimePattern__LocalDateTimeBucket* value, int sign);
    void SetYear(LocalDateTimePattern__LocalDateTimeBucket* value, int year);
    static LocalDateTimePattern* New1();
    static LocalDateTimePattern* GeneralIsoPattern();
};
// }

}}}} // ::g::Uno::Time::Text
