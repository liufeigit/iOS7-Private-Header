/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "TSCH3DChartBasicElementProperties.h"


__attribute__((visibility("hidden")))

@interface TSCH3DChartPieElementProperties : TSCH3DChartBasicElementProperties

{

    vector_ec52ae8c mPercentOfTotal;

    vector_ec52ae8c mRotation;

    vector_ec52ae8c mExplode;

}



- (id).cxx_construct;

- (void).cxx_destruct;

- (_Bool)anyHasExplosion;

- (_Bool)applyElementTransform:(struct ObjectTransforms *)arg1 series:(id)arg2 index:(const tvec2_3b141483 *)arg3 propertyAccessor:(const struct ChartScenePropertyAccessor *)arg4;

- (struct GeometryResource)boundsGeometryForSeries:(id)arg1 index:(const tvec2_3b141483 *)arg2;

- (id)copyWithZone:(struct _NSZone *)arg1;

- (float)elementTransformDepthFromPropertyAccessor:(const struct ChartScenePropertyAccessor *)arg1;

- (float)explosionAtElementIndex:(const tvec2_3b141483 *)arg1;

- (float)explosionAtElementIndex:(const tvec2_3b141483 *)arg1 propertyAccessor:(const struct ChartScenePropertyAccessor *)arg2;

- (long long)flatIndex:(const tvec2_3b141483 *)arg1;

- (float)percentOfTotalAtElementIndex:(const tvec2_3b141483 *)arg1;

- (void)reset;

- (float)rotationAtElementIndex:(const tvec2_3b141483 *)arg1;

- (void)setExplosion:(float)arg1 atElementIndex:(const tvec2_3b141483 *)arg2;

- (void)setPercentOfTotal:(float)arg1 atElementIndex:(const tvec2_3b141483 *)arg2;

- (void)setRotation:(float)arg1 atElementIndex:(const tvec2_3b141483 *)arg2;

- (void)updateLabels;

- (void)updateValues;



@end


