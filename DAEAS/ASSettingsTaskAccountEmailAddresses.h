/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "ASItem.h"


@class NSArray, NSMutableSet, NSString;



@interface ASSettingsTaskAccountEmailAddresses : ASItem

{

    NSMutableSet *_emailAddresses;

    NSString *_primarySMTPAddress;

}



+ (_Bool)acceptsTopLevelLeaves;

+ (id)asParseRules;

+ (_Bool)frontingBasicTypes;

+ (_Bool)notifyOfUnknownTokens;

+ (_Bool)parsingLeafNode;

+ (_Bool)parsingWithSubItems;

- (void)addEmailAddress:(id)arg1;

- (void)dealloc;

- (id)description;

@property(readonly, nonatomic) NSArray *emailAddresses;

- (void)parseASParseContext:(id)arg1 root:(id)arg2 parent:(id)arg3 callbackDict:(id)arg4 streamCallbackDict:(id)arg5 account:(id)arg6;

@property(readonly) NSString *primarySMTPAddress; // @synthesize primarySMTPAddress=_primarySMTPAddress;

- (void)setPrimarySMTPAddress:(id)arg1;



@end


