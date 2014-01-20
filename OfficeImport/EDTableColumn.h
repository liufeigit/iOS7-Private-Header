/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class EDResources, EDString;



__attribute__((visibility("hidden")))

@interface EDTableColumn : NSObject

{

    EDResources *mResources;

    unsigned long long mHeaderRowDxfIndex;

    unsigned long long mTotalsRowDxfIndex;

    unsigned long long mDataAreaDxfIndex;

    EDString *mName;

    EDString *mUniqueName;

    EDString *mTotalsRowLabel;

}



+ (id)tableColumnWithResources:(id)arg1;

- (id)dataAreaDxf;

- (unsigned long long)dataAreaDxfIndex;

- (void)dealloc;

- (id)headerRowDxf;

- (unsigned long long)headerRowDxfIndex;

- (id)initWithResources:(id)arg1;

- (id)name;

- (void)setDataAreaDxf:(id)arg1;

- (void)setDataAreaDxfIndex:(unsigned long long)arg1;

- (void)setHeaderRowDxf:(id)arg1;

- (void)setHeaderRowDxfIndex:(unsigned long long)arg1;

- (void)setName:(id)arg1;

- (void)setTotalsRowDxf:(id)arg1;

- (void)setTotalsRowDxfIndex:(unsigned long long)arg1;

- (void)setTotalsRowLabel:(id)arg1;

- (void)setUniqueName:(id)arg1;

- (id)totalsRowDxf;

- (unsigned long long)totalsRowDxfIndex;

- (id)totalsRowLabel;

- (id)uniqueName;



@end

