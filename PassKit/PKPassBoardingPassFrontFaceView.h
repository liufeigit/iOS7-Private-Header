/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "PKPassFrontFaceView.h"


@class UIImageView;



@interface PKPassBoardingPassFrontFaceView : PKPassFrontFaceView

{

    UIImageView *_transitImageView;

    UIImageView *_footerImageView;

}



- (id)_transitGlyphForTransitType:(long long)arg1;

- (void)createBodyContentViews;

- (void)dealloc;

- (void)layoutSubviews;

- (id)shortFaceTemplate;

- (id)shortScrunchedFaceTemplate;

- (id)tallFaceTemplate;



@end

