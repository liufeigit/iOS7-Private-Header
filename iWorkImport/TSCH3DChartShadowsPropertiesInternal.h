/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class NSObject<TSCH3DShadowsRenderer>, TSCH3DCamera, TSCH3DDataBufferResource;



__attribute__((visibility("hidden")))

@interface TSCH3DChartShadowsPropertiesInternal : NSObject

{

    _Bool mEnabled;

    TSCH3DCamera *mCamera;

    TSCH3DDataBufferResource *mQuad;

    TSCH3DDataBufferResource *mTexcoords;

    TSCH3DDataBufferResource *mFadecoords;

    NSObject<TSCH3DShadowsRenderer> *mRenderer;

    box_a3bd9649 mShadowPlanePadding;

}



- (id).cxx_construct;

@property(retain, nonatomic) TSCH3DCamera *camera; // @synthesize camera=mCamera;

- (void)dealloc;

@property(nonatomic) _Bool enabled; // @synthesize enabled=mEnabled;

@property(retain, nonatomic) TSCH3DDataBufferResource *fadecoords; // @synthesize fadecoords=mFadecoords;

- (id)initWithCamera:(id)arg1 renderer:(id)arg2;

- (void)invalidate;

@property(retain, nonatomic) TSCH3DDataBufferResource *quad; // @synthesize quad=mQuad;

@property(readonly, nonatomic) NSObject<TSCH3DShadowsRenderer> *renderer; // @synthesize renderer=mRenderer;

@property(retain, nonatomic) TSCH3DDataBufferResource *texcoords; // @synthesize texcoords=mTexcoords;

- (void)setupResources;

@property(readonly, nonatomic) _Bool shadowPlaneValid;



@end

