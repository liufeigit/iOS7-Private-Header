/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "CoreDAVGetAccountPropertiesTaskGroup.h"


@class NSSet;



@interface CardDAVGetAccountPropertiesTaskGroup : CoreDAVGetAccountPropertiesTaskGroup

{

    NSSet *_addressBookHomes;

    NSSet *_directoryGatewayURLs;

}



- (id)_copyAccountPropertiesPropFindElements;

- (void)_setPropertiesFromParsedResponses:(id)arg1;

@property(readonly) NSSet *addressBookHomes; // @synthesize addressBookHomes=_addressBookHomes;

- (void)dealloc;

- (id)description;

- (id)directoryGatewayURL;

@property(readonly) NSSet *directoryGatewayURLs; // @synthesize directoryGatewayURLs=_directoryGatewayURLs;

- (id)homeSet;



@end

