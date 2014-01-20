/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "UIImageView.h"



@class NSArray, NSMutableDictionary;



@interface GKPlayerMultiPhotoView : UIImageView

{

    NSArray *_players;

    NSMutableDictionary *_photoImages;

}



- (void)dealloc;

@property(retain, nonatomic) NSMutableDictionary *photoImages; // @synthesize photoImages=_photoImages;

@property(retain, nonatomic) NSArray *players; // @synthesize players=_players;

- (void)refreshPhotos;

- (void)updateImage;



@end

