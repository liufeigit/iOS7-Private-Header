/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class NSMutableArray, NSObject<OS_dispatch_queue>;



@interface TRBrowser : NSObject

{

    NSObject<OS_dispatch_queue> *_accessQueue;

    NSMutableArray *_services;

    unsigned long long _browsingCount;

}



+ (id)sharedBrowser;

- (void).cxx_destruct;

- (void)TRXPCC_browserDidFindService:(id)arg1;

- (void)TRXPCC_browserDidRemoveService:(id)arg1;

- (void)_XPCClientConnectionDidInterruptNotification:(id)arg1;

- (id)_init;

- (void)dealloc;

- (void)getServicesWithCompletionHandler:(id)arg1;

- (id)init;

- (void)startBrowsing;

- (void)stopBrowsing;



@end


