/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "UIView.h"



@class EKDayOccurrenceView, UIColor;



@interface EKDayOccurrenceResizeHandleView : UIView

{

    EKDayOccurrenceView *_occurrenceView;

    UIColor *_baseColor;

}



- (void).cxx_destruct;

- (struct CGRect)_circleRect;

@property(retain, nonatomic) UIColor *baseColor; // @synthesize baseColor=_baseColor;

- (void)drawRect:(struct CGRect)arg1;

- (id)initWithFrame:(struct CGRect)arg1 occurrenceView:(id)arg2;

@property(readonly, nonatomic) EKDayOccurrenceView *occurrenceView; // @synthesize occurrenceView=_occurrenceView;

- (void)willMoveToSuperview:(id)arg1;



@end

