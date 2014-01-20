/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "UIView.h"



@class EKDayAllDayView, EKDayView;



@interface EKDayViewWithGutters : UIView

{

    EKDayAllDayView *_leftAllDayView;

    EKDayAllDayView *_rightAllDayView;

    UIView *_leftGutter;

    UIView *_rightGutter;

    EKDayView *_dayView;

    double _gutterWidth;

    double _allDayHeight;

}



- (void).cxx_destruct;

- (id)_createAllDayView;

@property(nonatomic) double allDayHeight; // @synthesize allDayHeight=_allDayHeight;

@property(retain, nonatomic) EKDayView *dayView; // @synthesize dayView=_dayView;

@property(nonatomic) double gutterWidth; // @synthesize gutterWidth=_gutterWidth;

- (id)initWithFrame:(struct CGRect)arg1 dayView:(id)arg2;

@property(readonly, nonatomic) UIView *leftGutter; // @synthesize leftGutter=_leftGutter;

@property(readonly, nonatomic) UIView *rightGutter; // @synthesize rightGutter=_rightGutter;



@end

