/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "SADomainCommand.h"


#import "SADomainObjectCommand.h"



@class SADomainObject;



@interface SADomainObjectCreate : SADomainCommand <SADomainObjectCommand>

{

}



+ (id)domainObjectCreate;

+ (id)domainObjectCreateWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;

- (id)groupIdentifier;

@property(retain, nonatomic) SADomainObject *object;

- (_Bool)requiresResponse;



@end

