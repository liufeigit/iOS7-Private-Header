/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class NSObject<OS_dispatch_queue>;



@interface AVCallbackRegistry : NSObject

{

    struct __CFBag *_observers;

    NSObject<OS_dispatch_queue> *_readWriteQueue;

}



+ (void)initialize;

+ (id)sharedCallbackRegistry;

- (id)callbackObserver:(id)arg1;

- (void)dealloc;

- (void)finalize;

- (id)init;

- (void)registerCallbackObserver:(id)arg1;

- (void)unregisterCallbackObserver:(id)arg1;



@end


