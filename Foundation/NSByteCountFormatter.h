/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "NSFormatter.h"


@interface NSByteCountFormatter : NSFormatter

{

    unsigned int _allowedUnits;

    BOOL _countStyle;

    _Bool _allowsNonnumericFormatting;

    _Bool _includesUnit;

    _Bool _includesCount;

    _Bool _includesActualByteCount;

    _Bool _adaptive;

    _Bool _zeroPadsFractionDigits;

    int _reserved[6];

}



+ (id)stringFromByteCount:(long long)arg1 countStyle:(long long)arg2;

- (unsigned long long)_options;

@property unsigned long long allowedUnits;

@property _Bool allowsNonnumericFormatting; // @synthesize allowsNonnumericFormatting=_allowsNonnumericFormatting;

- (id)copyWithZone:(struct _NSZone *)arg1;

@property long long countStyle;

- (void)encodeWithCoder:(id)arg1;

- (_Bool)getObjectValue:(out id *)arg1 forString:(id)arg2 errorDescription:(out id *)arg3;

@property _Bool includesActualByteCount; // @synthesize includesActualByteCount=_includesActualByteCount;

@property _Bool includesCount; // @synthesize includesCount=_includesCount;

@property _Bool includesUnit; // @synthesize includesUnit=_includesUnit;

- (id)init;

- (id)initWithCoder:(id)arg1;

@property(getter=isAdaptive) _Bool adaptive; // @synthesize adaptive=_adaptive;

- (_Bool)isPartialStringValid:(id *)arg1 proposedSelectedRange:(struct _NSRange *)arg2 originalString:(id)arg3 originalSelectedRange:(struct _NSRange)arg4 errorDescription:(id *)arg5;

@property _Bool zeroPadsFractionDigits; // @synthesize zeroPadsFractionDigits=_zeroPadsFractionDigits;

- (id)stringForObjectValue:(id)arg1;

- (id)stringFromByteCount:(long long)arg1;



@end


