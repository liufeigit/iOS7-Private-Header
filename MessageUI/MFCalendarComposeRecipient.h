/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "MFComposeRecipient.h"


@class NSString;



@interface MFCalendarComposeRecipient : MFComposeRecipient

{

    NSString *_calAttendeeName;

    id _participant;

}



- (void)dealloc;

- (id)displayString;

- (unsigned long long)hash;

- (id)initWithComposeRecipient:(id)arg1;

- (_Bool)isEqual:(id)arg1;

@property(retain, nonatomic) id participant;

- (void)setCalAttendeeName:(id)arg1;



@end

