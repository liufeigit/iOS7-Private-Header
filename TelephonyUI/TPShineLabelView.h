/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "UIView.h"



@class TPShineLabel, UILabel;



@interface TPShineLabelView : UIView

{

    UILabel *_backgroundLabel;

    TPShineLabel *_shineLabel;

}



@property(retain) UILabel *backgroundLabel; // @synthesize backgroundLabel=_backgroundLabel;

- (void)dealloc;

- (id)initWithFrame:(struct CGRect)arg1 labelText:(id)arg2 font:(id)arg3;

- (void)layoutSubviews;

@property(retain) TPShineLabel *shineLabel; // @synthesize shineLabel=_shineLabel;



@end


