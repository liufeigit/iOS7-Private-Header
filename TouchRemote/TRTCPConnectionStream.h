/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class NSInputStream, NSObject<OS_dispatch_queue>, NSOutputStream;



@interface TRTCPConnectionStream : NSObject

{

    NSObject<OS_dispatch_queue> *_connectionAccessQueue;

    NSInputStream *_readStream;

    NSObject<OS_dispatch_queue> *_readQueue;

    NSOutputStream *_writeStream;

    NSObject<OS_dispatch_queue> *_writeQueue;

    _Bool _closed;

    id <TRTCPConnectionStreamDelegate> _delegate;

}



- (void).cxx_destruct;

- (id)_initWithNetService:(id)arg1;

- (id)_initWithReadStream:(id)arg1 writeStream:(id)arg2 options:(long long)arg3;

- (id)_initWithReadStream:(id)arg1 writeStream:(id)arg2 peerPublicKey:(id)arg3 options:(long long)arg4;

- (void)close;

- (void)dealloc;

@property(nonatomic) __weak id <TRTCPConnectionStreamDelegate> delegate; // @synthesize delegate=_delegate;

@property(nonatomic, getter=isClosed) _Bool closed; // @synthesize closed=_closed;

- (void)readDataOfLength:(unsigned long long)arg1 completionHandler:(id)arg2;

- (void)writeData:(id)arg1 completionHandler:(id)arg2;



@end

