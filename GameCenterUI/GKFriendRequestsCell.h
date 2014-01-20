/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "GKCollectionViewCell.h"


@class GKLabel, GKPlayerMultiPhotoView, NSArray, NSDictionary, UIImageView;



@interface GKFriendRequestsCell : GKCollectionViewCell

{

    _Bool _didSetupLineLayoutConstraints;

    NSArray *_friendRequests;

    GKLabel *_titleLabel;

    GKLabel *_subtitleLabel;

    UIImageView *_caretView;

    GKPlayerMultiPhotoView *_iconView;

    NSDictionary *_metricsOverrides;

}



+ (id)padMetrics;

+ (id)phoneMetrics;

+ (void)registerCellClassesWithCollectionView:(id)arg1;

- (_Bool)canRemoveItem;

@property(retain, nonatomic) UIImageView *caretView; // @synthesize caretView=_caretView;

- (void)dealloc;

@property(nonatomic) _Bool didSetupLineLayoutConstraints; // @synthesize didSetupLineLayoutConstraints=_didSetupLineLayoutConstraints;

- (void)didUpdateModel;

@property(retain, nonatomic) NSArray *friendRequests; // @synthesize friendRequests=_friendRequests;

@property(retain, nonatomic) GKPlayerMultiPhotoView *iconView; // @synthesize iconView=_iconView;

- (id)initWithFrame:(struct CGRect)arg1;

@property(retain, nonatomic) NSDictionary *metricsOverrides; // @synthesize metricsOverrides=_metricsOverrides;

- (id)players;

- (void)prepareForReuse;

- (void)setPlayers:(id)arg1;

@property(retain, nonatomic) GKLabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;

@property(retain, nonatomic) GKLabel *titleLabel; // @synthesize titleLabel=_titleLabel;

- (void)updateConstraints;

- (void)updateLineLayoutConstraints;



@end

