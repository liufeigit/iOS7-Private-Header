/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "CALayer.h"



@class AVPlayer, AVPlayerLayerInternal, NSString;



@interface AVPlayerLayer : CALayer

{

    AVPlayerLayerInternal *_playerLayer;

}



+ (id)keyPathsForValuesAffectingVideoRect;

+ (id)playerLayerWithPlayer:(id)arg1;

- (void)_addAnimationsForContentLayer:(id)arg1 size:(struct CGSize)arg2 gravity:(id)arg3;

- (void)_addAnimationsForMaskLayer:(id)arg1;

- (void)_addAnimationsForSubtitleLayer:(id)arg1 size:(struct CGSize)arg2;

- (void)_calculateSubtitleLayerBounds:(struct CGRect)arg1 presentationSize:(struct CGSize)arg2 playLayerTransform:(struct CATransform3D)arg3 shouldUpdateCachedSubtitleSample:(_Bool)arg4 outBound:(struct CGRect *)arg5;

- (void)_connectContentLayerToPlayer;

- (void)_disconnectContentLayerFromPlayer;

- (struct CGSize)_getAVPlayerCurrentItemPresentationSizeKeyFromPlayer:(id)arg1;

- (struct CGRect)_minRectToFitVideoAndSubtitlesInBounds:(struct CGRect)arg1;

- (double)_pctOfSubtitleLayerHeight;

- (void)_setHasPlayerToObserve:(long long)arg1 andShouldObserveIt:(long long)arg2;

- (void)_setItem:(id)arg1 readyForDisplay:(_Bool)arg2;

- (void)_setSubtitleDisplayEnabled:(_Bool)arg1;

- (void)_setSubtitleGravity:(id)arg1;

- (_Bool)_subtitleDisplayEnabled;

- (id)_subtitleGravity;

- (void)_subtitlesDidChange:(id)arg1;

- (void)_updatePresentationSize:(struct CGSize)arg1 forceUpdate:(_Bool)arg2;

- (void)_updateSubtitleLayerForPlayerLayerBounds:(struct CGRect)arg1 presentationSize:(struct CGSize)arg2 playLayerTransform:(struct CATransform3D)arg3 forceRender:(_Bool)arg4;

- (void)_updateSubtitles:(id)arg1 forceRender:(_Bool)arg2;

- (struct CGRect)_videoRectForBounds:(struct CGRect)arg1;

- (void)addAnimation:(id)arg1 forKey:(id)arg2;

- (void)dealloc;

- (void)finalize;

- (id)init;

- (id)initWithLayer:(id)arg1;

- (_Bool)isOverscanSubtitleSupportEnabled;

@property(readonly, nonatomic, getter=isReadyForDisplay) _Bool readyForDisplay;

- (void)layerDidBecomeVisible:(_Bool)arg1;

- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;

@property(retain, nonatomic) AVPlayer *player;

- (void)removeAllAnimations;

- (void)removeAnimationForKey:(id)arg1;

- (void)setBounds:(struct CGRect)arg1;

- (void)setOverscanSubtitleSupportEnabled:(_Bool)arg1;

@property(copy) NSString *videoGravity;

- (void)subtitleLayerNeedsLayout:(id)arg1;

@property(readonly, nonatomic) struct CGRect videoRect;



@end


