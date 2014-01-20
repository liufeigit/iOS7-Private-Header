/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class EKEventStore, NSNumber, NSSet, NSString;



@interface EKOccurrenceCacheSearch : NSObject

{

    NSSet *_calendars;

    NSString *_searchTerm;

    EKEventStore *_store;

    id _callback;

    NSNumber *_replyID;

    _Bool _canceled;

}



+ (id)searchWithCalendars:(id)arg1 searchTerm:(id)arg2 store:(id)arg3 callback:(id)arg4;

- (void)cancel;

- (void)dealloc;

- (id)initWithCalendars:(id)arg1 searchTerm:(id)arg2 store:(id)arg3 callback:(id)arg4;

- (void)run;

- (id)searchTerm;



@end

