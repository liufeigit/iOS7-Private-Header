/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class NSEntityDescription, NSPropertyDescription;



__attribute__((visibility("hidden")))

@interface _NSPropertyDescriptionProxy : NSObject

{

    id _sourceBuffer;

    NSPropertyDescription *_underlyingProperty;

    NSEntityDescription *_entityDescription;

    unsigned int _entitysReferenceIDForProperty;

}



+ (_Bool)resolveInstanceMethod:(SEL)arg1;

- (void)_createCachesAndOptimizeState;

- (unsigned int)_entitysReferenceID;

- (void)_setEntity:(id)arg1;

- (void)_setEntitysReferenceID:(unsigned int)arg1;

- (id)_underlyingProperty;

- (void)_versionHash:(char *)arg1 inStyle:(unsigned long long)arg2;

- (Class)class;

- (id)description;

- (void)encodeWithCoder:(id)arg1;

- (id)entity;

- (id)forwardingTargetForSelector:(SEL)arg1;

- (id)initWithCoder:(id)arg1;

- (id)initWithPropertyDescription:(id)arg1;

- (_Bool)isEqual:(id)arg1;

- (_Bool)isKindOfClass:(Class)arg1;

- (id)methodSignatureForSelector:(SEL)arg1;



@end

