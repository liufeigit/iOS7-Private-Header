/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@protocol EKDayViewContentDelegate <NSObject>

- (void)dayViewContent:(id)arg1 didTapInEmptySpaceOnDay:(double)arg2;

- (void)dayViewContent:(id)arg1 didTapPinnedOccurrence:(id)arg2;



@optional

- (void)dayViewContent:(id)arg1 didCreateOccurrenceViews:(id)arg2;

- (void)dayViewContent:(id)arg1 didSelectEvent:(id)arg2;

- (void)occurrencePressed:(id)arg1 onDay:(double)arg2;

@end

