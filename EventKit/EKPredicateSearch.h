/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class EKEventStore, NSPredicate;



__attribute__((visibility("hidden")))

@interface EKPredicateSearch : NSObject

{

    Class _entityClass;

    NSPredicate *_predicate;

    EKEventStore *_store;

    _Bool _finished;

    id _callback;

    unsigned int _previous;

}



+ (id)searchWithEntityClass:(Class)arg1 predicate:(id)arg2 store:(id)arg3 callback:(id)arg4;

- (_Bool)_receivedData:(CDStruct_0a11227f [50])arg1 count:(int)arg2;

- (void)dealloc;

- (id)initWithEntityClass:(Class)arg1 predicate:(id)arg2 store:(id)arg3 callback:(id)arg4;

- (void)run;

- (id)startWithCompletion:(id)arg1;

- (void)terminate;



@end


