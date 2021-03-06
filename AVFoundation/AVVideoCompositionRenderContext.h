/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class AVVideoComposition, AVVideoCompositionRenderContextInternal;



@interface AVVideoCompositionRenderContext : NSObject

{

    AVVideoCompositionRenderContextInternal *_internal;

}



+ (id)renderContextPropertiesFromFigCompositor:(struct OpaqueFigVideoCompositor *)arg1;

- (struct __CVPixelBufferPool *)_pixelBufferPool;

- (void)_willDeallocOrFinalize;

- (void)dealloc;

@property(readonly, nonatomic) CDStruct_1edcc8d7 edgeWidths;

- (void)finalize;

- (_Bool)hasEqualPropertiesToFigVideoCompositor:(struct OpaqueFigVideoCompositor *)arg1;

@property(readonly, nonatomic) _Bool highQualityRendering;

- (id)initWithFigVideoCompositor:(struct OpaqueFigVideoCompositor *)arg1 clientRequiredPixelBufferAttributes:(id)arg2 videoComposition:(id)arg3;

- (struct __CVBuffer *)newPixelBuffer;

@property(readonly, nonatomic) CDStruct_43f4b5b8 pixelAspectRatio;

@property(readonly, nonatomic) float renderScale;

@property(readonly, nonatomic) struct CGAffineTransform renderTransform;

@property(readonly, nonatomic) struct CGSize size;

@property(readonly, nonatomic) AVVideoComposition *videoComposition;



@end


