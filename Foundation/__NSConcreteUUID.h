/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "NSUUID.h"


__attribute__((visibility("hidden")))

@interface __NSConcreteUUID : NSUUID

{

    unsigned char _uuidBytes[16];

}



+ (_Bool)automaticallyNotifiesObserversForKey:(id)arg1;

- (id)UUIDString;

- (CDStruct_bd2f613f)_cfUUIDBytes;

- (Class)classForCoder;

- (id)copyWithZone:(struct _NSZone *)arg1;

- (id)description;

- (void)getUUIDBytes:(unsigned char [16])arg1;

- (id)init;

- (id)initWithUUIDBytes:(unsigned char [16])arg1;

- (id)initWithUUIDString:(id)arg1;

- (_Bool)isEqual:(id)arg1;



@end


