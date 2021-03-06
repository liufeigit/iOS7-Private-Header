/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class TSCHChartAxis, TSCHChartSeries, TSCHChartValueAxis, TSDShadow, TSDStroke, TSWPParagraphStyle;



__attribute__((visibility("hidden")))

@interface TSCHLineAreaSeriesModelCache : NSObject

{

    unsigned long long mSeriesIndex;

    TSCHChartSeries *mSeries;

    TSCHChartValueAxis *mValueAxis;

    TSCHChartAxis *mGroupAxis;

    TSWPParagraphStyle *mParagraphStyle;

    unsigned int mLabelPosition;

    int mSymbolType;

    TSDStroke *mSymbolStroke;

    TSDStroke *mSeriesStroke;

    TSDShadow *mSeriesShadow;

    double mDataPointSize;

    double mOpacity;

    int mLineType;

    id mSeriesFill;

    id mSymbolFill;

    _Bool mShowValueLabels;

    struct CGPath *mUnitSymbolPath;

}



@property(readonly) double dataPointSize; // @synthesize dataPointSize=mDataPointSize;

- (void)dealloc;

@property(readonly) TSCHChartAxis *groupAxis; // @synthesize groupAxis=mGroupAxis;

- (id)initWithChartModel:(id)arg1 forSeries:(unsigned long long)arg2;

@property(readonly) unsigned int labelPosition; // @synthesize labelPosition=mLabelPosition;

@property(readonly) int lineType; // @synthesize lineType=mLineType;

@property(readonly) double opacity; // @synthesize opacity=mOpacity;

@property(readonly) TSWPParagraphStyle *paragraphStyle; // @synthesize paragraphStyle=mParagraphStyle;

@property(readonly) TSCHChartSeries *series; // @synthesize series=mSeries;

@property(readonly) id seriesFill; // @synthesize seriesFill=mSeriesFill;

@property(readonly) unsigned long long seriesIndex; // @synthesize seriesIndex=mSeriesIndex;

@property(readonly) TSDShadow *seriesShadow; // @synthesize seriesShadow=mSeriesShadow;

@property(readonly) TSDStroke *seriesStroke; // @synthesize seriesStroke=mSeriesStroke;

@property(readonly) _Bool showValueLabels; // @synthesize showValueLabels=mShowValueLabels;

@property(readonly) id symbolFill; // @synthesize symbolFill=mSymbolFill;

@property(readonly) TSDStroke *symbolStroke; // @synthesize symbolStroke=mSymbolStroke;

@property(readonly) int symbolType; // @synthesize symbolType=mSymbolType;

@property(readonly) struct CGPath *unitSymbolPath; // @synthesize unitSymbolPath=mUnitSymbolPath;

@property(readonly) TSCHChartValueAxis *valueAxis; // @synthesize valueAxis=mValueAxis;



@end


