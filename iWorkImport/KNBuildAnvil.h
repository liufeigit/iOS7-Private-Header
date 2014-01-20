/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "KNAnimationEffect.h"


#import "KNFrameBuildAnimator.h"



@class TSDGLDataBuffer, TSDGLParticleSystem, TSDGLShader, TSDGLTextureInfo;



__attribute__((visibility("hidden")))

@interface KNBuildAnvil : KNAnimationEffect <KNFrameBuildAnimator>

{

    TSDGLParticleSystem *_smokeSystem;

    TSDGLShader *_smokeShader;

    TSDGLTextureInfo *_smokeTexture;

    TSDGLParticleSystem *_specksSystem;

    TSDGLShader *_specksShader;

    TSDGLTextureInfo *_specksTexture;

    struct CGPoint *_cameraShakePoints;

    struct CATransform3D _baseTransform;

    TSDGLShader *_objectShader;

    TSDGLShader *_objectBlurShader;

    TSDGLDataBuffer *_objectDataBuffer;

    TSDGLDataBuffer *_objectBlurDataBuffer;

    struct CGRect _drawableFrame;

    struct CGRect _frameRect;

    _Bool _shouldDrawMotionBlur;

}



+ (int)animationCategory;

+ (id)animationFilter;

+ (id)animationName;

+ (id)defaultAttributes;

+ (unsigned long long)directionType;

+ (void)fillLocalizedDirectionMenu:(id)arg1 forType:(int)arg2;

+ (id)localizedMenuString:(int)arg1;

+ (_Bool)requiresSingleTexturePerStage;

+ (id)supportedTypes;

+ (id)thumbnailImageNameForType:(int)arg1;

- (void)animationDidEndWithContext:(id)arg1;

- (void)animationWillBeginWithContext:(id)arg1;

- (void)dealloc;

- (struct CGRect)frameOfEffectWithFrame:(struct CGRect)arg1 context:(id)arg2;

- (struct CGPoint *)p_cameraShakePoints;

- (struct CGPoint)p_objectTranslationAtPercent:(double)arg1 duration:(double)arg2 objectSmashDuration:(double)arg3 objectFrame:(struct CGRect)arg4;

- (id)p_smokeSystemForTR:(id)arg1 build:(id)arg2;

- (id)p_specksSystemForTR:(id)arg1 build:(id)arg2;

- (void)renderFrameWithContext:(id)arg1;



@end

