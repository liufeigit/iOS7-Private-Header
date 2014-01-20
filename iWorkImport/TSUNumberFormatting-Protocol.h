/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "TSUDataFormat.h"



@protocol TSUNumberFormatting <TSUDataFormat, NSObject>

- (unsigned short)base;

- (unsigned short)basePlaces;

- (_Bool)baseUseMinusSign;

- (_Bool)canFormatText;

- (id)chartLabelStringFromDouble:(double)arg1;

- (id)currencyCode;

- (_Bool)customFormatShouldAutoInsertPercentSymbol;

- (id)customNumberFormatTokens;

- (unsigned short)decimalPlaces;

- (id)formatName;

- (id)formatString;

- (int)fractionAccuracy;

- (_Bool)hasValidDecimalPlaces;

- (_Bool)isCustom;

- (_Bool)isEquivalent:(id)arg1;

- (_Bool)isTextFormat;

- (int)negativeStyle;

- (id)numberFormatByIncrementingDecimalPlaces:(short)arg1;

- (id)numberFormatBySettingCurrencyCode:(id)arg1;

- (id)numberFormatBySettingDecimalPlaces:(unsigned short)arg1;

- (id)numberFormatBySettingDecimalPlaces:(unsigned short)arg1 andNegativeStyle:(int)arg2;

- (id)numberFormatBySettingFractionAccuracy:(int)arg1;

- (id)numberFormatBySettingNegativeStyle:(int)arg1;

- (id)numberFormatBySettingShowThousandsSeparator:(_Bool)arg1;

- (id)numberFormatBySettingSuffixString:(id)arg1;

- (id)numberFormatBySettingUseAccountingStyle:(_Bool)arg1;

- (id)numberFormatBySettingValueType:(int)arg1;

- (_Bool)requiresParensToBeReplacedWithSpacesForDouble:(double)arg1;

- (double)scaleFactor;

- (void)setFormatName:(id)arg1;

- (_Bool)showThousandsSeparator;

- (id)stringFromDouble:(double)arg1;

- (id)stringFromDouble:(double)arg1 decimalPlaces:(unsigned short)arg2 minimumDecimalPlaces:(unsigned short)arg3;

- (id)stringFromDouble:(double)arg1 minimumDecimalPlaces:(unsigned short)arg2;

- (id)stringFromString:(id)arg1;

- (id)suffixString;

- (_Bool)usesAccountingStyle;

- (_Bool)usesTabs;

- (_Bool)usesTextFormatForValue:(double)arg1;

- (int)valueType;

@end

