/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@interface CPDistributedMessagingDelayedReplyContext : NSObject

{

    unsigned int _replyPort;

    _Bool _portPassing;

}



- (void)dealloc;

- (id)initWithReplyPort:(unsigned int)arg1 portPassing:(_Bool)arg2;

@property(nonatomic) _Bool portPassing; // @synthesize portPassing=_portPassing;

@property(nonatomic) unsigned int replyPort; // @synthesize replyPort=_replyPort;



@end

