/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class NSString;



__attribute__((visibility("hidden")))

@interface TSCEReference : NSObject

{

    CDStruct_39788696 mRef;

    NSString *mOverrideText;

    NSString *mOverrideTextAsTyped;

    unsigned char mStickyBits;

    _Bool mWasConstructedViaNames;

}



- (id).cxx_construct;

- (CDStruct_39788696)cReference;

- (void)dealloc;

- (id)initWithCellReference:(CDStruct_78b871e1)arg1;

- (id)initWithRangeReference:(CDStruct_5744d895)arg1;

- (_Bool)isEqual:(id)arg1;

- (id)overrideText;

- (id)overrideTextAsTyped;

- (id)p_stringByUnescapingQuotedStringWithPossibleDollarPrefix:(id)arg1 partial:(_Bool)arg2;

- (CDStruct_5744d895)rangeReference;

- (id)referenceTextForAutocompleteWithCalculationEngine:(id)arg1 contextSheetName:(id)arg2 stickyBits:(unsigned char)arg3 inputString:(id)arg4 inputStringIsComplete:(_Bool)arg5;

- (id)referenceTextForAutocompleteWithCalculationEngine:(id)arg1 hostTableID:(struct __CFUUID *)arg2 stickyBits:(unsigned char)arg3 inputString:(id)arg4 inputStringIsComplete:(_Bool)arg5;

- (id)referenceTextWithCalculationEngine:(id)arg1 contextSheetName:(id)arg2;

- (id)referenceTextWithCalculationEngine:(id)arg1 hostTableID:(struct __CFUUID *)arg2;

- (void)setOverrideText:(id)arg1;

- (void)setOverrideTextAsTyped:(id)arg1;

- (void)setStickyBits:(unsigned char)arg1;

- (void)setWasConstructedViaNames:(_Bool)arg1;

- (unsigned char)stickyBits;

- (struct __CFUUID *)tableID;

- (_Bool)wasConstructedViaNames;



@end


