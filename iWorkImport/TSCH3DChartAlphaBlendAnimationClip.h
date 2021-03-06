/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "TSCH3DChartAnimationClip.h"


__attribute__((visibility("hidden")))

@interface TSCH3DChartAlphaBlendAnimationClip : TSCH3DChartAnimationClip

{

    id mLayerKey;

    _Bool mDelayOpaque;

    _Bool mBlendOpaque;

    _Bool mAlwaysRender;

}



@property(nonatomic) _Bool alwaysRender; // @synthesize alwaysRender=mAlwaysRender;

@property(nonatomic) _Bool blendOpaque; // @synthesize blendOpaque=mBlendOpaque;

- (void)dealloc;

@property(nonatomic) _Bool delayOpaque; // @synthesize delayOpaque=mDelayOpaque;

- (void)didGenerateShaderEffects:(id)arg1 sceneObject:(id)arg2 pipeline:(id)arg3 context:(id)arg4;

- (void)didGenerateShaderEffectsForSeriesAtIndex:(const tvec2_3b141483 *)arg1 effects:(id)arg2 sceneObject:(id)arg3 pipeline:(id)arg4 context:(id)arg5;

- (void)didSubmitSceneObject:(id)arg1 pipeline:(id)arg2;

- (void)didTransformElement:(const struct RenderElementInfo *)arg1 sceneObject:(id)arg2 context:(id)arg3;

- (void)didUpdateAnimationTimeForContext:(id)arg1 layers:(id)arg2;

@property(retain, nonatomic) id layerKey; // @synthesize layerKey=mLayerKey;

- (void)p_updateOpacityForLayers:(id)arg1 context:(id)arg2;

- (float)p_updateUniform:(id)arg1 context:(id)arg2;

- (void)protected_addShaderEffect:(id)arg1;

- (float)protected_elementAlphaForContext:(id)arg1;

- (_Bool)renderPassDelayDisallowedForSceneObject:(id)arg1 pipeline:(id)arg2;

- (struct ElementRenderPass)renderPassForElement:(const struct RenderElementInfo *)arg1 sceneObject:(id)arg2 context:(id)arg3;

- (struct ElementRenderPass)renderPassForSceneObject:(id)arg1;

- (void)willRunWithScene:(id)arg1 context:(id)arg2 layers:(id)arg3;

- (_Bool)willSubmitElement:(const struct RenderElementInfo *)arg1 sceneObject:(id)arg2 context:(id)arg3;

- (_Bool)willSubmitLabelForSceneObject:(id)arg1 labelRenderInfo:(const struct ChartLabelsContainingLabelRenderInfo *)arg2 context:(id)arg3;

- (_Bool)willSubmitSceneObject:(id)arg1 pipeline:(id)arg2 context:(id)arg3;



@end


