/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class TSCH3DGeometryInterleavedArray;



__attribute__((visibility("hidden")))

@interface TSCH3DChartAnimationDataGeometryResource : NSObject

{

    TSCH3DGeometryInterleavedArray *mInterleavedArray;

    struct GeometryArrays mGeometryArrays;

}



+ (id)animationData;

- (id).cxx_construct;

- (void)dealloc;

@property(nonatomic) struct GeometryArrays geometryArrays; // @synthesize geometryArrays=mGeometryArrays;

@property(retain, nonatomic) TSCH3DGeometryInterleavedArray *interleavedArray; // @synthesize interleavedArray=mInterleavedArray;



@end

