/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class NSString;



@interface ADDataStore : NSObject

{

    NSString *_path;

    struct Database *_database;

}



- (void)dealloc;

- (_Bool)distributionsForKeyPrefix:(id)arg1 minDaysSince1970:(int)arg2 maxDaysSince1970:(int)arg3 rowHandler:(id)arg4;

- (_Bool)distributionsForKeyPrefix:(id)arg1 minDaysSince1970:(int)arg2 maxDaysSince1970:(int)arg3 withConsumer:(id)arg4;

- (id)initWithDefaultPath;

- (id)initWithPath:(id)arg1;

@property(readonly, nonatomic) NSString *path; // @synthesize path=_path;

- (_Bool)scalarsForKeyPrefix:(id)arg1 minDaysSince1970:(int)arg2 maxDaysSince1970:(int)arg3 rowHandler:(id)arg4;

- (_Bool)scalarsForKeyPrefix:(id)arg1 minDaysSince1970:(int)arg2 maxDaysSince1970:(int)arg3 withConsumer:(id)arg4;



@end

