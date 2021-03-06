/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "TSCH3DChartSceneRenderSetup.h"


@class CALayer, CALayer<TSCH3DGLLayer>;



__attribute__((visibility("hidden")))

@interface TSCH3DChartLayerBasedSceneRenderSetup : TSCH3DChartSceneRenderSetup

{

    CALayer<TSCH3DGLLayer> *mLayer;

    CALayer *mPixelAlignmentLayer;

    struct CGRect mLayerVisibleBounds;

}



- (id).cxx_construct;

- (_Bool)allocateFramebufferWithAllocationInfo:(const struct FramebufferAllocationInfo *)arg1 forRenderCycle:(id)arg2;

- (void)copyFromChartRenderSetup:(id)arg1;

- (void)dealloc;

- (box_80622335)fullBoxForRenderingCamera;

- (id)init;

@property(retain, nonatomic) CALayer<TSCH3DGLLayer> *layer; // @synthesize layer=mLayer;

- (struct CGRect)layerVisibleBounds;

- (box_80622335)pixelAlignBodyCanvasBounds:(const box_80622335 *)arg1;

@property(retain, nonatomic) CALayer *pixelAlignmentLayer; // @synthesize pixelAlignmentLayer=mPixelAlignmentLayer;

- (void)setLayerVisibleBounds:(struct CGRect)arg1;

- (_Bool)setupLayerFromLayerProvider:(id)arg1 canvas:(id)arg2 visible:(struct CGRect)arg3 pixelAlignmentLayer:(id)arg4;



@end


