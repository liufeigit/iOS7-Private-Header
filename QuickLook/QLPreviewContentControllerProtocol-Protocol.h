/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@protocol QLPreviewContentControllerProtocol <NSObject>

- (void)becomeForeground;

- (void)beginScrubbing;

- (void)checkCurrentPreviewItem;

- (void)configureWithParameters:(id)arg1;

- (long long)currentPreviewItemIndex;

@property id <QLPreviewContentDataSource> dataSource;

@property id <QLPreviewContentDelegate> delegate;

- (void)endScrubbing;

- (void)enterBackground;

- (void)forceResignFirstResponder;

@property int previewMode;

- (id)printPageHelper;

- (id)printPageRenderer;

- (void)refreshCurrentPreviewItem;

- (void)scrubToValue:(double)arg1;

- (void)setBlockRemoteImages:(_Bool)arg1;

- (void)setContentFrame:(struct CGRect)arg1;

- (void)setCurrentPreviewItemIndex:(long long)arg1;

- (void)setLoadingTextForMissingFiles:(id)arg1;

- (void)setOverlayHidden:(_Bool)arg1 duration:(double)arg2;

- (void)setTransitioning:(_Bool)arg1 synchronizedWithBlock:(id)arg2;

- (void)togglePlayState;

- (void)willChangeContentFrame;

@end

