/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class NSString;



__attribute__((visibility("hidden")))

@interface _UIPopoverViewArtworkLoader : NSObject

{

    long long _backgroundStyle;

    NSString *_backgroundSelector;

}



+ (id)backgroundSelectorForBackgroundStyle:(long long)arg1;

- (double)arrowBase;

- (double)arrowHeight;

- (double)arrowTopGradientEnd;

- (id)bottomArrowLeftEndCapView;

- (id)bottomArrowPinnedView;

- (id)bottomArrowRightEndCapView;

- (id)bottomArrowView;

- (double)bottomEndCapHeight;

- (double)capCornerRadius;

- (double)clampArrowBase;

- (struct CGRect)contentRectForRect:(struct CGRect)arg1 inImageOfSize:(struct CGSize)arg2;

- (struct CGRect)contentsCenterForRect:(struct CGRect)arg1 inImageOfSize:(struct CGSize)arg2;

- (void)dealloc;

- (id)initWithBackgroundStyle:(long long)arg1;

- (_Bool)modern;

- (double)noArrowTopGradientEnd;

- (id)rightArrowBottomEndCapView;

- (id)rightArrowPinnedBottomView;

- (id)rightArrowPinnedTopView;

- (id)rightArrowTopEndCapView;

- (id)rightArrowView;

- (double)shortArtArrowTopGradientEnd;

- (double)shortArtNoArrowTopGradientEnd;

- (double)shortArtRightArrowBase;

- (id)shortBottomArrowLeftEndCapView;

- (id)shortBottomArrowPinnedView;

- (id)shortBottomArrowRightEndCapView;

- (id)shortBottomArrowView;

- (id)shortRightArrowView;

- (id)shortTopArrowLeftEndCapView;

- (id)shortTopArrowPinnedView;

- (id)shortTopArrowRightEndCapView;

- (id)shortTopArrowView;

- (double)sideArrowStart;

- (id)templateImageForDirection:(id)arg1 shortArtwork:(_Bool)arg2;

- (id)topArrowLeftEndCapView;

- (id)topArrowPinnedView;

- (id)topArrowRightEndCapView;

- (double)topArrowStart;

- (id)topArrowView;

- (id)viewWithContentsImage:(id)arg1 rect:(struct CGRect)arg2 center:(struct CGRect)arg3 antialiasingMask:(unsigned int)arg4 directionSelector:(id)arg5;



@end

