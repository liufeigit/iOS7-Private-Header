/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class BKSSignal, NSObject<OS_dispatch_queue>, NSObject<OS_xpc_object>, NSString;



@interface BKSBaseXPCClient : NSObject

{

    NSObject<OS_dispatch_queue> *_queue;

    NSObject<OS_xpc_object> *_connection;

    BKSSignal *_invalidationSignal;

    NSObject<OS_xpc_object> *_serverEndpoint;

    NSString *_serviceName;

}



- (id)_connection;

- (id)_errorFromMessageIfAny:(id)arg1;

- (id)_getStringFromMessage:(id)arg1 key:(char *)arg2;

- (_Bool)_isServerRegistered;

- (id)_notifyTokenName;

- (void)_sendMessage:(id)arg1 withReplyHandler:(void)arg2 waitForReply:(id)arg3 waitDuration:(void)arg4;

- (void)_setEndpoint:(id)arg1;

- (void)dealloc;

- (id)initWithEndpoint:(id)arg1;

- (id)initWithServiceName:(id)arg1;

- (id)initWithServiceName:(id)arg1 endpoint:(id)arg2;

- (void)invalidate;

- (void)queue_connectionWasCreated;

- (void)queue_connectionWasInvalidated;

- (void)queue_handleMessage:(id)arg1;

- (void)queue_invalidate;

- (void)queue_registerWithServerIfNecessary;

- (void)queue_reregister;

- (void)reconnectIfNecessary;



@end

