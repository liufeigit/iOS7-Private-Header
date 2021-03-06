/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "UIPopoverBackgroundView.h"


@class NSArray, UIColor, UIView, _UIBackdropView;



__attribute__((visibility("hidden")))

@interface _UIPopoverStandardChromeView : UIPopoverBackgroundView

{

    UIView *_arrowView;

    UIView *_leftCapView;

    UIView *_rightCapView;

    _UIBackdropView *_blurView;

    NSArray *_dimmingViews;

    UIColor *_popoverBackgroundColor;

    double _arrowOffset;

    unsigned long long _arrowDirection;

    long long _backgroundStyle;

    _Bool _arrowVisible;

    _Bool useShortMode;

    _Bool _debugMode;

}



+ (double)arrowBase;

+ (double)arrowHeight;

+ (struct UIEdgeInsets)contentViewInsets;

- (void)_layoutArrowViewsLeftOrRight;

- (void)_layoutArrowViewsNone;

- (void)_layoutArrowViewsUpOrDown;

- (void)_loadNecessaryViews;

- (struct UIEdgeInsets)_shadowInsets;

- (struct CGSize)_shadowOffset;

- (double)_shadowOpacity;

- (id)_shadowPath;

- (double)_shadowRadius;

- (unsigned long long)arrowDirection;

- (double)arrowOffset;

@property(nonatomic) long long backgroundStyle;

- (void)dealloc;

- (void)didMoveToWindow;

- (_Bool)hasComponentViews;

- (id)initWithFrame:(struct CGRect)arg1;

@property(nonatomic, getter=isArrowVisible) _Bool arrowVisible;

@property(nonatomic, getter=isDebugModeEnabled) _Bool debugModeEnabled; // @synthesize debugModeEnabled=_debugMode;

- (_Bool)isPinned;

- (_Bool)isRightArrowPinnedToBottom;

- (_Bool)isRightArrowPinnedToTop;

- (void)layoutSubviews;

- (double)maxNonPinnedOffset;

- (double)minNonPinnedOffset;

- (void)motionBegan:(long long)arg1 withEvent:(id)arg2;

- (void)motionCancelled:(long long)arg1 withEvent:(id)arg2;

- (void)motionEnded:(long long)arg1 withEvent:(id)arg2;

@property(copy, nonatomic) UIColor *popoverBackgroundColor;

- (void)setArrowDirection:(unsigned long long)arg1;

- (void)setArrowOffset:(double)arg1;

- (void)setArrowVisible:(_Bool)arg1 animated:(_Bool)arg2;

- (void)setBackgroundStyle:(long long)arg1 animated:(_Bool)arg2;

@property(nonatomic) _Bool useShortMode; // @synthesize useShortMode;

- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;

- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;

- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;

- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;

- (_Bool)wouldPinForOffset:(double)arg1;



@end


