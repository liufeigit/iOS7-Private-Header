/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "UIView.h"



@class PLWallpaperButton, _UIBackdropView, _UILegibilityLabel;



@interface PLCropOverlayWallpaperBottomBar : UIView

{

    PLWallpaperButton *_doCancelButton;

    PLWallpaperButton *_doSetButton;

    PLWallpaperButton *_doSetHomeScreenButton;

    PLWallpaperButton *_doSetLockScreenButton;

    PLWallpaperButton *_doSetBothScreenButton;

    _UILegibilityLabel *_titleLabel;

    UIView *_separatorLine;

    _UIBackdropView *_backdropView;

}



- (void)_commonPLCropOverlayWallpaperBottomBarInitialization;

- (void)_commonPLCropOverlayWallpaperBottomBarInitializationPad;

- (void)_commonPLCropOverlayWallpaperBottomBarInitializationPhone;

- (void)_layoutSubviewsPad;

- (void)_layoutSubviewsPhone;

- (struct CGSize)_sizeForString:(id)arg1;

@property(retain, nonatomic) _UIBackdropView *backdropView; // @synthesize backdropView=_backdropView;

- (void)dealloc;

@property(readonly, nonatomic) PLWallpaperButton *doCancelButton; // @synthesize doCancelButton=_doCancelButton;

@property(readonly, nonatomic) PLWallpaperButton *doSetBothScreenButton; // @synthesize doSetBothScreenButton=_doSetBothScreenButton;

@property(readonly, nonatomic) PLWallpaperButton *doSetButton; // @synthesize doSetButton=_doSetButton;

@property(readonly, nonatomic) PLWallpaperButton *doSetHomeScreenButton; // @synthesize doSetHomeScreenButton=_doSetHomeScreenButton;

@property(readonly, nonatomic) PLWallpaperButton *doSetLockScreenButton; // @synthesize doSetLockScreenButton=_doSetLockScreenButton;

- (id)initWithCoder:(id)arg1;

- (id)initWithFrame:(struct CGRect)arg1;

- (void)layoutSubviews;

@property(retain, nonatomic) UIView *separatorLine; // @synthesize separatorLine=_separatorLine;

- (void)setText:(id)arg1;

@property(retain, nonatomic) _UILegibilityLabel *titleLabel; // @synthesize titleLabel=_titleLabel;

- (struct CGSize)sizeThatFits:(struct CGSize)arg1;

- (void)updateForChangedSettings:(id)arg1;



@end

