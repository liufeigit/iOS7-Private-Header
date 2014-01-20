/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "UIView.h"



#import "EKDayAllDayViewDelegate.h"

#import "EKDayTimeViewDelegate.h"

#import "EKDayViewContentDelegate.h"

#import "UIScrollViewDelegate.h"



@class EKDayAllDayView, EKDayTimeView, EKDayViewContent, EKEvent, NSArray, NSCalendar, NSDate, NSDateComponents, NSTimer, UIColor, UIImageView, UIScrollAnimation, UIScrollView;



@interface EKDayView : UIView <UIScrollViewDelegate, EKDayAllDayViewDelegate, EKDayViewContentDelegate, EKDayTimeViewDelegate>

{

    long long _orientation;

    double _dayStart;

    double _dayEnd;

    double _nextDSTTransition;

    _Bool _scrollbarShowsInside;

    _Bool _scrollingToOccurrence;

    _Bool _settingDate;

    _Bool _userScrolling;

    _Bool _scrollToOccurrencesOnNextReload;

    UIImageView *_topVerticalGridExtension;

    UIImageView *_bottomVerticalGridExtension;

    UIView *_bottomLine;

    NSArray *_existingTimedOcurrences;

    NSDate *_lastInspectedOccurrenceOnDate;

    struct CGSize _scrolledToFirstVisibleSecondForSize;

    EKDayAllDayView *_allDayView;

    EKDayViewContent *_dayContent;

    EKDayTimeView *_timeView;

    UIScrollAnimation *_scrollAnimation;

    UIScrollView *_scroller;

    NSTimer *_timeMarkerTimer;

    _Bool _allowsOccurrenceSelection;

    _Bool _alignsMidnightToTop;

    _Bool _shouldEverShowTimeIndicators;

    _Bool _usesVibrantGridDrawing;

    int _outlineStyle;

    id <EKDayViewDelegate> _delegate;

    id <EKDayViewDataSource> _dataSource;

    NSDateComponents *_displayDate;

    NSCalendar *_calendar;

    UIColor *_occurrenceTextBackgroundColor;

}



- (void).cxx_destruct;

- (void)_adjustForDateOrCalendarChange;

- (double)_adjustSecondBackwardForDSTHole:(double)arg1;

- (double)_adjustSecondForwardForDSTHole:(double)arg1;

- (void)_clearVerticalGridExtensionImageCache;

- (void)_createAllDayView;

- (void)_disposeAllDayView;

- (void)_finishedScrollToSecond;

- (id)_generateVerticalGridExtensionImage;

- (void)_invalidateMarkerTimer;

- (void)_localeChanged;

- (void)_notifyDelegateOfFinishedScrollingToOccurrence;

- (double)_positionOfSecond:(int)arg1;

- (void)_scrollToSecond:(int)arg1 animated:(_Bool)arg2 whenFinished:(id)arg3;

- (struct CGRect)_scrollerRect;

- (int)_secondAtPosition:(double)arg1;

- (CDStruct_79f9e052)_selectedDate;

- (void)_startMarkerTimer;

- (void)_stopScrolling;

- (void)_timeViewTapped:(id)arg1;

- (double)_verticalOffset;

- (void)addViewToScroller:(id)arg1 isAllDay:(_Bool)arg2;

- (void)adjustForSignificantTimeChange;

- (void)adjustFrameToSpanToMidnightFromStartDate:(id)arg1;

@property(nonatomic) _Bool alignsMidnightToTop; // @synthesize alignsMidnightToTop=_alignsMidnightToTop;

- (double)allDayRegionHeight;

@property(readonly, nonatomic) EKDayAllDayView *allDayView;

- (void)allDayView:(id)arg1 didSelectEvent:(id)arg2;

- (void)allDayViewDidLayoutSubviews:(id)arg1;

@property(nonatomic) _Bool allowsOccurrenceSelection; // @synthesize allowsOccurrenceSelection=_allowsOccurrenceSelection;

@property(nonatomic) _Bool allowsScrolling;

- (void)bringEventToFront:(id)arg1;

@property(copy, nonatomic) NSCalendar *calendar; // @synthesize calendar=_calendar;

- (struct CGRect)currentTimeRectInView:(id)arg1;

@property(nonatomic) __weak id <EKDayViewDataSource> dataSource; // @synthesize dataSource=_dataSource;

- (double)dateAtPoint:(struct CGPoint)arg1 isAllDay:(_Bool *)arg2;

- (double)dateAtPoint:(struct CGPoint)arg1 isAllDay:(_Bool *)arg2 requireAllDayRegionInsistence:(_Bool)arg3;

- (void)dayAllDayView:(id)arg1 occurrenceViewClicked:(id)arg2;

- (void)dayContentView:(id)arg1 atPoint:(struct CGPoint)arg2;

@property(readonly, nonatomic) double dayEnd; // @synthesize dayEnd=_dayEnd;

- (void)dayOccurrenceViewClicked:(id)arg1 atPoint:(struct CGPoint)arg2;

@property(readonly, nonatomic) double dayStart; // @synthesize dayStart=_dayStart;

- (void)dayViewContent:(id)arg1 didCreateOccurrenceViews:(id)arg2;

- (void)dayViewContent:(id)arg1 didSelectEvent:(id)arg2;

- (void)dayViewContent:(id)arg1 didTapInEmptySpaceOnDay:(double)arg2;

- (void)dayViewContent:(id)arg1 didTapPinnedOccurrence:(id)arg2;

- (void)dealloc;

@property(nonatomic) __weak id <EKDayViewDelegate> delegate; // @synthesize delegate=_delegate;

- (id)description;

@property(retain, nonatomic) EKEvent *dimmedOccurrence;

@property(copy, nonatomic) NSDateComponents *displayDate; // @synthesize displayDate=_displayDate;

@property(nonatomic) _Bool eventsFillGrid;

@property(nonatomic) int firstVisibleSecond;

- (void)firstVisibleSecondChanged;

@property(retain, nonatomic) UIColor *gridLineColor;

- (void)highlightHour:(double)arg1;

- (double)highlightedHour;

@property(nonatomic) struct _NSRange hoursToRender;

- (id)initWithFrame:(struct CGRect)arg1 orientation:(long long)arg2 displayDate:(id)arg3 backgroundColor:(id)arg4 opaque:(_Bool)arg5 scrollbarShowsInside:(_Bool)arg6;

- (void)insertViewForEvent:(id)arg1 belowViewForOtherEvent:(id)arg2;

- (_Bool)isAllDayLabelHighlighted;

- (void)layoutSubviews;

@property(readonly, nonatomic) double leftContentInset;

@property(nonatomic) struct CGPoint normalizedContentOffset;

@property(nonatomic) int occurrenceBackgroundStyle;

@property(retain, nonatomic) UIColor *occurrenceLocationColor;

- (void)occurrencePressed:(id)arg1 onDay:(double)arg2;

@property(retain, nonatomic) UIColor *occurrenceTextBackgroundColor; // @synthesize occurrenceTextBackgroundColor=_occurrenceTextBackgroundColor;

@property(retain, nonatomic) UIColor *occurrenceTitleColor;

- (id)occurrenceViewAtPoint:(struct CGPoint)arg1;

- (id)occurrenceViewForEvent:(id)arg1;

@property(readonly, nonatomic) NSArray *occurrenceViews;

@property(nonatomic) int outlineStyle; // @synthesize outlineStyle=_outlineStyle;

- (struct CGPoint)pointAtDate:(double)arg1 isAllDay:(_Bool)arg2;

- (struct CGRect)rectForEvent:(id)arg1;

- (void)relayoutExistingTimedOccurrences;

- (void)reloadData;

- (void)removeFromSuperview;

- (void)resetLastSelectedOccurrencePoint;

@property(readonly, nonatomic) double scrollBarOffset;

- (void)scrollEventsIntoViewAnimated:(_Bool)arg1;

@property(readonly, nonatomic) double scrollOffset;

- (void)scrollToDate:(id)arg1 animated:(_Bool)arg2 whenFinished:(id)arg3;

- (void)scrollToEvent:(id)arg1 animated:(_Bool)arg2;

- (_Bool)scrollTowardPoint:(struct CGPoint)arg1;

- (void)scrollViewDidEndDecelerating:(id)arg1;

- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;

- (void)scrollViewDidEndScrollingAnimation:(id)arg1;

- (void)scrollViewDidScroll:(id)arg1;

- (void)scrollViewWillBeginDragging:(id)arg1;

- (void)selectEvent:(id)arg1;

- (id)selectedEvent;

- (void)setAllDayLabelHighlighted:(_Bool)arg1;

- (void)setOrientation:(long long)arg1;

- (void)setScrollerYInset:(double)arg1 keepingYPointVisible:(double)arg2;

@property(nonatomic) _Bool shouldEverShowTimeIndicators; // @synthesize shouldEverShowTimeIndicators=_shouldEverShowTimeIndicators;

@property(nonatomic) _Bool showsLeftBorder;

@property(nonatomic) _Bool showsTimeLine;

@property(nonatomic) _Bool showsTimeMarker;

@property(retain, nonatomic) UIColor *timeViewTextColor;

- (void)setTimeZone:(id)arg1;

@property(nonatomic) _Bool usesVibrantGridDrawing; // @synthesize usesVibrantGridDrawing=_usesVibrantGridDrawing;

- (void)updateMarkerPosition;

- (void)willMoveToSuperview:(id)arg1;

- (double)yPositionPerhapsMatchingAllDayOccurrence:(id)arg1;



@end

