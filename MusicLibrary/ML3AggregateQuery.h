/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "ML3Query.h"


@class NSString;



@interface ML3AggregateQuery : ML3Query

{

    Class _aggregateEntityClass;

    NSString *_foreignPersistentIDProperty;

}



- (void).cxx_destruct;

@property(readonly) Class aggregateEntityClass; // @synthesize aggregateEntityClass=_aggregateEntityClass;

- (unsigned long long)countOfEntities;

- (void)dealloc;

- (void)encodeWithCoder:(id)arg1;

- (Class)entityClass;

@property(readonly) NSString *foreignPersistentIDProperty; // @synthesize foreignPersistentIDProperty=_foreignPersistentIDProperty;

- (_Bool)hasEntities;

- (id)initWithCoder:(id)arg1;

- (id)initWithUnitQuery:(id)arg1 aggregateEntityClass:(Class)arg2 foreignPersistentIDProperty:(id)arg3;

- (id)persistentIDProperty;

- (id)selectPersistentIDsSQLAndProperties:(id)arg1 ordered:(_Bool)arg2;



@end

