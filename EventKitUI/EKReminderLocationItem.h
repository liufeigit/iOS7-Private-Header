/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class EKStructuredLocation, NSDictionary;



@interface EKReminderLocationItem : NSObject

{

    _Bool _isLocationBeingDetermined;

    int _type;

    EKStructuredLocation *_location;

    NSDictionary *_addressDictionary;

}



- (void).cxx_destruct;

@property(retain, nonatomic) NSDictionary *addressDictionary; // @synthesize addressDictionary=_addressDictionary;

- (id)description;

@property(nonatomic) _Bool isLocationBeingDetermined; // @synthesize isLocationBeingDetermined=_isLocationBeingDetermined;

- (id)label;

@property(retain, nonatomic) EKStructuredLocation *location; // @synthesize location=_location;

- (void)reset;

@property(nonatomic) int type; // @synthesize type=_type;

- (id)stringForSubtitle;



@end

