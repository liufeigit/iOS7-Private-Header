/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class NSMutableArray;



__attribute__((visibility("hidden")))

@interface TSCH3DChartRepRenderQueue : NSObject

{

    NSMutableArray *mQueue;

    long long mCurrentPass;

    long long mPauseLevel;

}



+ (id)_singletonAlloc;

+ (id)allocWithZone:(struct _NSZone *)arg1;

+ (id)sharedInstance;

- (void)addRep:(id)arg1 front:(_Bool)arg2;

- (id)autorelease;

- (void)cancelCallback;

- (id)copyWithZone:(struct _NSZone *)arg1;

- (void)dealloc;

- (id)init;

- (void)modelInvalidated:(id)arg1;

- (void)pause;

- (oneway void)release;

- (void)removeRep:(id)arg1;

- (void)renderUpdate:(id)arg1;

- (void)requestCallbackWithDelay:(float)arg1;

- (void)resume;

- (id)retain;

- (unsigned long long)retainCount;

- (void)threadRemoveRep:(id)arg1;



@end


