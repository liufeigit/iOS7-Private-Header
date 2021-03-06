/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "EDFormula.h"


@class EDReference;



__attribute__((visibility("hidden")))

@interface EDSharedFormula : EDFormula

{

    unsigned long long mBaseFormulaIndex;

    int mRowBaseOrOffset;

    int mColumnBaseOrOffset;

    EDReference *mBaseFormulaRange;

}



- (void)archiveByAppendingToMutableData:(struct __CFData *)arg1;

- (unsigned long long)baseFormulaIndex;

- (id)baseFormulaRange;

- (id)baseFormulaWithRowBlocks:(id)arg1;

- (int)columnBaseOrOffset;

- (void)dealloc;

- (id)init;

- (id)initWithFormula:(id)arg1;

- (_Bool)isBaseFormula;

- (_Bool)isSharedFormula;

- (int)rowBaseOrOffset;

- (void)setBaseFormulaIndex:(unsigned long long)arg1;

- (void)setColumnBaseOrOffset:(int)arg1;

- (void)setRowBaseOrOffset:(int)arg1;

- (void)unarchiveFromData:(struct __CFData *)arg1 offset:(unsigned long long *)arg2;

- (void)updateBaseFormulaRangeWithRow:(int)arg1 column:(int)arg2;

- (id)warningWithRowBlocks:(id)arg1;



@end


