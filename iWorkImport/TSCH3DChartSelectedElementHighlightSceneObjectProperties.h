/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class TSCH3DPrefilteredLineRenderer, TSCH3Dvec3DataBuffer;



__attribute__((visibility("hidden")))

@interface TSCH3DChartSelectedElementHighlightSceneObjectProperties : NSObject

{

    TSCH3Dvec3DataBuffer *edgeVertices;

    TSCH3DPrefilteredLineRenderer *mRenderer;

    unsigned long long mSelectedSeriesIndex;

    tvec4_ac57c72d mColor;

    TSCH3Dvec3DataBuffer *mEdgeVertices;

}



- (id).cxx_construct;

@property(nonatomic) tvec4_ac57c72d color; // @synthesize color=mColor;

- (void)dealloc;

@property(retain, nonatomic) TSCH3Dvec3DataBuffer *edgeVertices; // @synthesize edgeVertices=mEdgeVertices;

- (id)init;

@property(readonly, nonatomic) TSCH3DPrefilteredLineRenderer *renderer;

@property(nonatomic) unsigned long long selectedSeriesIndex; // @synthesize selectedSeriesIndex=mSelectedSeriesIndex;



@end


