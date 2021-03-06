/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





#import "TSCHSupportsRendering.h"



@class NSArray, TSCHChartInfo, TSCHChartLayout;



__attribute__((visibility("hidden")))

@interface TSCHChartNonRep : NSObject <TSCHSupportsRendering>

{

    TSCHChartInfo *mChartInfo;

    NSArray *mRenderers;

    TSCHChartLayout *mChartLayout;

}



@property(retain, nonatomic) TSCHChartInfo *chartInfo; // @synthesize chartInfo=mChartInfo;

@property(retain, nonatomic) TSCHChartLayout *chartLayout; // @synthesize chartLayout=mChartLayout;

- (void)clearRenderers;

- (id)commandController;

- (struct CGRect)convertUnscaledToBoundsRect:(struct CGRect)arg1;

- (void)dealloc;

- (void)didDrawInLayer:(id)arg1 context:(struct CGContext *)arg2;

- (void)drawInContext:(struct CGContext *)arg1;

- (_Bool)forceRenderBlankBackground;

- (id)geometry;

- (id)initWithChartInfo:(id)arg1;

- (_Bool)isDrawingIntoPDF;

- (struct CGRect)outerShadowFrame;

- (_Bool)renderElements;

- (_Bool)renderElementsShadowOnly;

- (_Bool)renderElementsWithoutShadows;

- (_Bool)renderLabels;

- (id)renderSeriesIndexSet;

- (_Bool)renderTrendLinesForSeriesIndex:(unsigned long long)arg1;

- (id)renderValueIndexSetForSeries:(unsigned long long)arg1;

- (id)renderers;

- (void)setupForDrawingInLayer:(id)arg1 context:(struct CGContext *)arg2;

- (_Bool)shadowsEnabled;

- (_Bool)shouldShowLegendHighlight;

- (double)viewScale;



@end


