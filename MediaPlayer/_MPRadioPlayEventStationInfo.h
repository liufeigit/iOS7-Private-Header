/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class NSString;



@interface _MPRadioPlayEventStationInfo : NSObject

{

    NSString *_stationHash;

    long long _stationID;

}



- (void).cxx_destruct;

- (id)description;

- (unsigned long long)hash;

- (id)initWithStationID:(long long)arg1 stationHash:(id)arg2;

- (_Bool)isEqual:(id)arg1;

@property(readonly, nonatomic) NSString *stationHash; // @synthesize stationHash=_stationHash;

@property(readonly, nonatomic) long long stationID; // @synthesize stationID=_stationID;



@end

