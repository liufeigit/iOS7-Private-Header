/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class NSMutableDictionary;



__attribute__((visibility("hidden")))

@interface PBSlideState : NSObject

{

    NSMutableDictionary *mBuildOrderMap;

    unsigned int mCurrentGroupId;

}



- (void)addBuild:(id)arg1 order:(unsigned int)arg2;

- (id)buildOrderMap;

- (void)dealloc;

- (unsigned int)generateGroupId;

- (id)init;

- (void)reset;



@end


