/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@interface GKReachability : NSObject

{

    _Bool localWiFiRef;

    struct __SCNetworkReachability *reachabilityRef;

}



+ (id)_gkReachabilityForInternetConnection;

+ (id)_gkReachabilityForLocalWiFi;

+ (id)_gkReachabilityWithAddress:(const struct sockaddr_in *)arg1;

+ (id)_gkReachabilityWithHostName:(id)arg1;

- (_Bool)_gkConnectionRequired;

- (int)_gkCurrentReachabilityStatus;

- (_Bool)_gkStartNotifier;

- (void)_gkStopNotifier;

- (void)dealloc;

- (int)localWiFiStatusForFlags:(unsigned int)arg1;

- (int)networkStatusForFlags:(unsigned int)arg1;



@end


