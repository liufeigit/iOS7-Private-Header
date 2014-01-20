/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





#import "NSFastEnumeration.h"



@class TSULinkedPointerSetEntry;



__attribute__((visibility("hidden")))

@interface TSUMutableLinkedPointerSet : NSObject <NSFastEnumeration>

{

    struct __CFDictionary *mDictionary;

    TSULinkedPointerSetEntry *mHead;

    TSULinkedPointerSetEntry *mTail;

}



- (void)addObject:(id)arg1;

- (id)array;

- (_Bool)containsObject:(id)arg1;

- (unsigned long long)count;

- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;

- (void)dealloc;

- (void)encodeToOwnedReferenceMessage:(RepeatedPtrField_a0d2dbe7 *)arg1 archiver:(id)arg2;

- (void)encodeToReferenceMessage:(RepeatedPtrField_a0d2dbe7 *)arg1 archiver:(id)arg2;

- (id)firstObject;

- (_Bool)hasObjects;

- (id)init;

- (void)insertFirstObject:(id)arg1;

- (_Bool)isEqual:(id)arg1;

- (id)objectEnumerator;

- (id)objectEnumeratorAfterObject:(id)arg1;

- (void)removeAllObjects;

- (void)removeObject:(id)arg1;

- (id)reverseObjectEnumerator;



@end

