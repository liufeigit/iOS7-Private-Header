/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "ML3Predicate.h"


@interface ML3PersistentIDsPredicate : ML3Predicate

{

    unsigned long long _count;

    long long *_persistentIDs;

    _Bool _shouldContain;

}



+ (id)predicateWithPersistentIDs:(const long long *)arg1 count:(unsigned long long)arg2 shouldContain:(_Bool)arg3;

- (void)appendSQLToMutableString:(id)arg1 entityClass:(Class)arg2;

- (id)databaseStatementParameters;

- (void)dealloc;

- (void)encodeWithCoder:(id)arg1;

- (unsigned long long)hash;

- (id)initWithCoder:(id)arg1;

- (id)initWithPersistentIDs:(const long long *)arg1 count:(unsigned long long)arg2 shouldContain:(_Bool)arg3;

- (_Bool)isEqual:(id)arg1;

@property(readonly, nonatomic) _Bool shouldContain; // @synthesize shouldContain=_shouldContain;



@end


