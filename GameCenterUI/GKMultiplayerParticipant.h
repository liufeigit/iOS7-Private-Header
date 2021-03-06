/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





#import "NSCopying.h"



@class GKPlayer;



@interface GKMultiplayerParticipant : NSObject <NSCopying>

{

    long long _type;

    long long _status;

    GKPlayer *_player;

}



- (id)copyWithZone:(struct _NSZone *)arg1;

- (void)dealloc;

- (id)description;

- (id)init;

- (_Bool)isEqual:(id)arg1;

@property(retain, nonatomic) GKPlayer *player; // @synthesize player=_player;

@property(nonatomic) long long status; // @synthesize status=_status;

@property(nonatomic) long long type; // @synthesize type=_type;



@end


