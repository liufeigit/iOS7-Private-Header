/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class CALayer, KNAnimationRegistryWithFallbacks, TSDCapabilities;



__attribute__((visibility("hidden")))

@interface KNAnimationContext : NSObject

{

    struct CGRect mSlideRect;

    struct CGRect mUnscaledSlideRect;

    double mViewScale;

    CALayer *mBaseLayer;

    double mFOVInRadians;

    struct CATransform3D mSlideProjectionMatrix;

    double mPixelAspectRatio;

    KNAnimationRegistryWithFallbacks *mRegistry;

    TSDCapabilities *mCapabilities;

    _Bool mBaseLayerVisible;

    struct CGColorSpace *mColorSpace;

}



@property(readonly, nonatomic) CALayer *baseLayer; // @synthesize baseLayer=mBaseLayer;

@property(readonly, nonatomic) TSDCapabilities *capabilities; // @synthesize capabilities=mCapabilities;

@property(nonatomic) struct CGColorSpace *colorSpace; // @synthesize colorSpace=mColorSpace;

- (void)dealloc;

@property(readonly, nonatomic) double fieldOfViewInRadians; // @synthesize fieldOfViewInRadians=mFOVInRadians;

- (id)initWithShowSize:(struct CGSize)arg1 viewScale:(double)arg2 baseLayer:(id)arg3 isBaseLayerVisible:(_Bool)arg4;

@property(readonly, nonatomic, getter=isBaseLayerVisible) _Bool baseLayerVisible; // @synthesize baseLayerVisible=mBaseLayerVisible;

@property(nonatomic) double pixelAspectRatio; // @synthesize pixelAspectRatio=mPixelAspectRatio;

@property(readonly, nonatomic) KNAnimationRegistryWithFallbacks *registry; // @synthesize registry=mRegistry;

@property(readonly, nonatomic) double showScale;

@property(readonly, nonatomic) struct CATransform3D slideProjectionMatrix; // @synthesize slideProjectionMatrix=mSlideProjectionMatrix;

@property(readonly, nonatomic) struct CGRect slideRect; // @synthesize slideRect=mSlideRect;

@property(readonly, nonatomic) struct CGRect unscaledSlideRect; // @synthesize unscaledSlideRect=mUnscaledSlideRect;

- (void)updateGeometryToFitBaseLayerAtViewScale:(double)arg1;

@property(readonly, nonatomic) double viewScale; // @synthesize viewScale=mViewScale;



@end

