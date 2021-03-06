/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "NSKnownKeysDictionary.h"


@class NSKnownKeysMappingStrategy;



__attribute__((visibility("hidden")))

@interface NSKnownKeysDictionary1 : NSKnownKeysDictionary

{

    int _cd_rc;

    int _count;

    NSKnownKeysMappingStrategy *_keySearch;

    id _values[0];

}



+ (_Bool)accessInstanceVariablesDirectly;

+ (id)alloc;

+ (id)allocWithZone:(struct _NSZone *)arg1;

+ (id)init;

+ (id)initForKeys:(id)arg1;

+ (id)initWithCapacity:(unsigned long long)arg1;

+ (id)initWithCoder:(id)arg1;

+ (id)initWithDictionary:(id)arg1;

+ (id)initWithDictionary:(id)arg1 copyItems:(_Bool)arg2;

+ (id)initWithObjects:(id *)arg1 forKeys:(id *)arg2 count:(unsigned long long)arg3;

+ (id)initWithSearchStrategy:(id)arg1;

+ (_Bool)supportsSecureCoding;

- (unsigned long long)_countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3 forKeys:(_Bool)arg4;

- (_Bool)_isDeallocating;

- (void)_recount;

- (void)_setValues:(id *)arg1 retain:(_Bool)arg2;

- (_Bool)_tryRetain;

- (unsigned long long)_valueCountByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;

- (void)addEntriesFromDictionary:(id)arg1;

- (id)allKeys;

- (id)allValues;

- (Class)classForArchiver;

- (Class)classForCoder;

- (id)copyWithZone:(struct _NSZone *)arg1;

- (unsigned long long)count;

- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;

- (void)dealloc;

- (void)encodeWithCoder:(id)arg1;

- (void)getKeys:(id *)arg1;

- (void)getObjects:(id *)arg1;

- (void)getObjects:(id *)arg1 andKeys:(id *)arg2;

- (_Bool)isEqualToDictionary:(id)arg1;

- (id)keyEnumerator;

- (const id *)knownKeyValuesPointer;

- (id)mapping;

- (id)mutableCopyWithZone:(struct _NSZone *)arg1;

- (id)objectEnumerator;

- (id)objectForKey:(id)arg1;

- (oneway void)release;

- (void)removeAllObjects;

- (void)removeObjectForKey:(id)arg1;

- (id)retain;

- (unsigned long long)retainCount;

- (void)setObject:(id)arg1 forKey:(id)arg2;

- (void)setValue:(id)arg1 atIndex:(unsigned long long)arg2;

- (void)setValues:(id *)arg1;

- (id)valueAtIndex:(unsigned long long)arg1;

- (const id *)values;



@end


