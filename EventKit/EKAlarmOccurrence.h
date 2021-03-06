/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class EKObjectID, NSDate, NSString, NSTimeZone;



@interface EKAlarmOccurrence : NSObject

{

    EKObjectID *_alarmID;

    EKObjectID *_ownerID;

    NSDate *_ownerDate;

    NSTimeZone *_ownerTimeZone;

    NSDate *_fireDate;

    NSString *_externalID;

    NSDate *_acknowledgedDate;

}



+ (id)alarmOccurrenceWithAlarmID:(id)arg1 ownerID:(id)arg2 ownerDate:(id)arg3 ownerTimeZone:(id)arg4 fireDate:(id)arg5 externalID:(id)arg6 acknowledgedDate:(id)arg7;

@property(readonly, nonatomic) NSDate *acknowledgedDate; // @synthesize acknowledgedDate=_acknowledgedDate;

@property(readonly, nonatomic) EKObjectID *alarmID; // @synthesize alarmID=_alarmID;

- (void)dealloc;

- (id)dictionaryRepresentation;

- (void)encodeWithCoder:(id)arg1;

@property(readonly, nonatomic) NSString *externalID; // @synthesize externalID=_externalID;

@property(readonly, nonatomic) NSDate *fireDate; // @synthesize fireDate=_fireDate;

- (id)initWithAlarmID:(id)arg1 ownerID:(id)arg2 ownerDate:(id)arg3 ownerTimeZone:(id)arg4 fireDate:(id)arg5 externalID:(id)arg6 acknowledgedDate:(id)arg7;

- (id)initWithCoder:(id)arg1;

- (id)initWithDictionaryRepresentation:(id)arg1;

@property(readonly, nonatomic) NSDate *ownerDate; // @synthesize ownerDate=_ownerDate;

@property(readonly, nonatomic) EKObjectID *ownerID; // @synthesize ownerID=_ownerID;

@property(readonly, nonatomic) NSTimeZone *ownerTimeZone; // @synthesize ownerTimeZone=_ownerTimeZone;



@end


