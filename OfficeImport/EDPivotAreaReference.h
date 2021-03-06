/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





__attribute__((visibility("hidden")))

@interface EDPivotAreaReference : NSObject

{

    _Bool mByPosition;

    _Bool mRelative;

    _Bool mSelected;

    unsigned long long mFieldId;

    unsigned long long mCount;

}



+ (id)pivotAreaReference;

- (_Bool)byPosition;

- (unsigned long long)count;

- (unsigned long long)fieldId;

- (id)init;

- (_Bool)relative;

- (_Bool)selected;

- (void)setByPosition:(_Bool)arg1;

- (void)setCount:(unsigned long long)arg1;

- (void)setFieldId:(unsigned long long)arg1;

- (void)setRelative:(_Bool)arg1;

- (void)setSelected:(_Bool)arg1;



@end


