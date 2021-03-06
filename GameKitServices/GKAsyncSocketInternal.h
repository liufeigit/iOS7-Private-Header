/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "GKAsyncSocket.h"


@class NSMutableData, NSObject<OS_dispatch_queue>, NSObject<OS_dispatch_source>, NSString;



__attribute__((visibility("hidden")))

@interface GKAsyncSocketInternal : GKAsyncSocket

{

    NSObject<OS_dispatch_source> *_receiveSource;

    NSObject<OS_dispatch_source> *_sendSource;

    _Bool _sendSourceSuspended;

    _Bool _invalidated;

    int _connectionSocket;

    NSMutableData *_dataToSend;

    id _receiveDataHandler;

    id _connectedHandler;

    NSObject<OS_dispatch_queue> *_syncQueue;

    NSObject<OS_dispatch_queue> *_targetQueue;

    NSString *_socketName;

}



- (void)closeConnectionNow;

- (id)connectedHandler;

- (void)dealloc;

- (id)init;

- (void)invalidate;

- (void)receiveData;

- (id)receiveDataHandler;

- (void)sendData;

- (void)sendData:(id)arg1 withCompletionHandler:(id)arg2;

- (void)setConnectedHandler:(id)arg1;

- (void)setReceiveDataHandler:(id)arg1;

- (void)setSocketName:(id)arg1;

- (void)setTargetQueue:(id)arg1;

- (_Bool)setupSourcesWithSocket:(int)arg1 receiveEventHandler:(id)arg2 sendEventHandler:(void)arg3;

- (id)socketName;

- (id)targetQueue;

- (void)tcpAttachSocketDescriptor:(int)arg1;

- (void)tcpConnectSockAddr:(const struct sockaddr *)arg1 port:(unsigned short)arg2;



@end


