/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "UIKeyboardEmojiCategoryBar.h"


@class NSArray;



__attribute__((visibility("hidden")))

@interface UIKeyboardEmojiCategoryBar_iPhone : UIKeyboardEmojiCategoryBar

{

    NSArray *_selectedImages;

    NSArray *_unselectedImages;

}



- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;

- (void)layoutSubviews;

- (void)releaseImagesAndViews;

- (void)updateSegmentAndDividers:(int)arg1;

- (void)updateSegmentImages;



@end

