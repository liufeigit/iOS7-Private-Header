/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "SADomainCommand.h"


@class NSNumber;



@interface SALocalSearchGetNavigationStatus : SADomainCommand

{

}



+ (id)getNavigationStatus;

+ (id)getNavigationStatusWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;

@property(copy, nonatomic) NSNumber *getRoute;

- (id)groupIdentifier;

- (_Bool)requiresResponse;



@end

