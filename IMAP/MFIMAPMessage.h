/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "MFMailMessage.h"



@class NSArray;



@interface MFIMAPMessage : MFMailMessage

{

    unsigned long long _size;

    NSArray *_customFlags;

    unsigned int _uid;

    unsigned long long _uniqueRemoteId;

}



- (long long)compareByNumberWithMessage:(id)arg1;

- (id)customFlags;

- (void)dealloc;

- (id)description;

- (_Bool)hasTemporaryUid;

- (id)initWithFlags:(unsigned long long)arg1 customFlags:(id)arg2 size:(unsigned long long)arg3 uid:(unsigned int)arg4;

- (_Bool)isMessageContentsLocallyAvailable;

- (_Bool)isPartial;

- (id)mailboxName;

- (id)messageID;

- (unsigned long long)messageSize;

- (id)originalMailboxURL;

- (id)remoteID;

- (id)remoteMailboxURL;

- (void)setHasTemporaryUid:(_Bool)arg1;

- (void)setIsPartial:(_Bool)arg1;

- (void)setPreferredEncoding:(unsigned int)arg1;

- (void)setUid:(unsigned int)arg1;

- (void)setUniqueRemoteId:(unsigned long long)arg1;

- (unsigned int)uid;

- (unsigned long long)uniqueRemoteId;



@end


