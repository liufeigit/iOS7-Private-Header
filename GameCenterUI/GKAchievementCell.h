/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "GKCollectionViewCell.h"


@class GKAchievementIconView, GKContiguousContainerView, GKLabel;



@interface GKAchievementCell : GKCollectionViewCell

{

    GKLabel *_titleLabel;

    GKLabel *_descriptionLabel;

    GKLabel *_valueLabel;

    GKLabel *_pointsLabel;

    GKAchievementIconView *_badgeView;

    GKContiguousContainerView *_textContainerView;

    GKContiguousContainerView *_pointsContainerView;

}



+ (double)defaultRowHeight;

@property(retain, nonatomic) GKAchievementIconView *badgeView; // @synthesize badgeView=_badgeView;

- (void)dealloc;

@property(retain, nonatomic) GKLabel *descriptionLabel; // @synthesize descriptionLabel=_descriptionLabel;

- (void)establishConstraints;

- (id)initWithFrame:(struct CGRect)arg1;

@property(retain, nonatomic) GKContiguousContainerView *pointsContainerView; // @synthesize pointsContainerView=_pointsContainerView;

@property(retain, nonatomic) GKLabel *pointsLabel; // @synthesize pointsLabel=_pointsLabel;

@property(retain, nonatomic) GKContiguousContainerView *textContainerView; // @synthesize textContainerView=_textContainerView;

@property(retain, nonatomic) GKLabel *titleLabel; // @synthesize titleLabel=_titleLabel;

@property(retain, nonatomic) GKLabel *valueLabel; // @synthesize valueLabel=_valueLabel;

- (void)setupForAchievement:(id)arg1 localAchievement:(id)arg2;



@end


