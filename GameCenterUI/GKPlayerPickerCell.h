/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "GKBasePlayerCell.h"


@class GKPlayerPickerInfo, UIImageView, UILabel;



@interface GKPlayerPickerCell : GKBasePlayerCell

{

    UILabel *_statusLabel;

    UILabel *_infoLabel;

    unsigned long long _selectionStatus;

    GKPlayerPickerInfo *_pickerInfo;

    UIImageView *_selectionView;

}



+ (Class)cellClassForPickerInfo:(id)arg1;

+ (void)registerCellClassesWithCollectionView:(id)arg1;

- (void)dealloc;

- (void)didUpdateModel;

@property(retain, nonatomic) UILabel *infoLabel; // @synthesize infoLabel=_infoLabel;

- (id)initWithFrame:(struct CGRect)arg1;

@property(retain, nonatomic) GKPlayerPickerInfo *pickerInfo; // @synthesize pickerInfo=_pickerInfo;

- (void)prepareForReuse;

@property(nonatomic) unsigned long long selectionStatus; // @synthesize selectionStatus=_selectionStatus;

@property(retain, nonatomic) UIImageView *selectionView; // @synthesize selectionView=_selectionView;

@property(retain, nonatomic) UILabel *statusLabel; // @synthesize statusLabel=_statusLabel;



@end

