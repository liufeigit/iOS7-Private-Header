/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





#import "NSCopying.h"



@class NSString;



__attribute__((visibility("hidden")))

@interface TSCHSelectionPathType : NSObject <NSCopying>

{

    NSString *mType;

    NSString *mName;

}



+ (id)axisLabelsType;

+ (id)axisLineType;

+ (id)axisTitleType;

+ (id)categoryAxisType;

+ (id)chartBodyType;

+ (id)chartDataSetNameType;

+ (id)chartTitleType;

+ (id)errorBarType;

+ (id)gridLineType;

+ (id)legendSeriesNameType;

+ (id)legendType;

+ (id)selectionPathTypeWithType:(id)arg1 name:(id)arg2;

+ (id)seriesLabelType;

+ (id)seriesSymbolType;

+ (id)seriesType;

+ (id)seriesValueLabelType;

+ (id)trendLineEquationType;

+ (id)trendLineR2Type;

+ (id)trendLineType;

+ (id)valueAxisType;

- (_Bool)canApplyChartStyleWithDescription:(id)arg1;

- (_Bool)canApplyParagraphStyle;

- (_Bool)canApplyShapeStyle;

- (id)copyWithZone:(struct _NSZone *)arg1;

- (void)dealloc;

- (id)description;

- (unsigned long long)hash;

- (id)init;

- (id)initWithArchive:(const struct ChartSelectionPathTypeArchive *)arg1;

- (id)initWithType:(id)arg1 name:(id)arg2;

- (_Bool)isEqual:(id)arg1;

@property(readonly, nonatomic) NSString *name; // @synthesize name=mName;

- (void)saveToArchive:(struct ChartSelectionPathTypeArchive *)arg1;

@property(readonly, nonatomic) NSString *type; // @synthesize type=mType;



@end


