/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "TSCHChartLayoutItem.h"


@class TSCHChartAxisID, TSCHChartAxisLineLayoutItem, TSCHChartAxisPaddingLayoutItem, TSCHChartAxisTickMarksLayoutItem, TSCHChartAxisTitleLayoutItem;



__attribute__((visibility("hidden")))

@interface TSCHChartAxisLayoutItem : TSCHChartLayoutItem

{

    TSCHChartAxisID *mAxisID;

    int mAxisPosition;

    TSCHChartAxisTitleLayoutItem *mAxisTitle;

    TSCHChartAxisPaddingLayoutItem *mAxisPadding;

    TSCHChartAxisTickMarksLayoutItem *mTickMarks;

    TSCHChartAxisLineLayoutItem *mAxisLine;

    struct CGSize mChartBodySize;

}



+ (id)selectionPathType;

@property(retain, nonatomic) TSCHChartAxisID *axisID; // @synthesize axisID=mAxisID;

@property(readonly, nonatomic) TSCHChartAxisLineLayoutItem *axisLineLayoutItem; // @synthesize axisLineLayoutItem=mAxisLine;

@property(readonly, nonatomic) TSCHChartAxisPaddingLayoutItem *axisPaddingLayoutItem; // @synthesize axisPaddingLayoutItem=mAxisPadding;

@property(readonly, nonatomic) int axisPosition; // @synthesize axisPosition=mAxisPosition;

@property(readonly, nonatomic) TSCHChartAxisTickMarksLayoutItem *axisTickMarksLayoutItem; // @synthesize axisTickMarksLayoutItem=mTickMarks;

@property(readonly, nonatomic) TSCHChartAxisTitleLayoutItem *axisTitleLayoutItem; // @synthesize axisTitleLayoutItem=mAxisTitle;

- (struct CGSize)calcMinSize;

- (struct CGRect)calcOverhangRect;

@property(nonatomic) struct CGSize chartBodySize; // @synthesize chartBodySize=mChartBodySize;

- (void)dealloc;

- (id)initWithParent:(id)arg1 axisPosition:(int)arg2;

- (id)p_description;

- (void)p_layoutInward;

- (void)p_layoutLabelsNow;

- (void)p_layoutOutward;

- (id)p_subselectionHaloPositionsForLabelsSelections:(id)arg1;

- (id)p_subselectionKnobPositionsForLabelsSelection:(id)arg1;

- (struct CGRect)protected_layoutSpaceRectForAllLabels;

- (id)renderersWithRep:(id)arg1;

- (id)subselectionHaloPositionsForSelections:(id)arg1;

- (id)subselectionKnobPositionsForSelection:(id)arg1;



@end


