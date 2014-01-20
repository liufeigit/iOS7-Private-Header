/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class MFMessageLibrary, NSString;



@interface MFMessageDetails : NSObject

{

    MFMessageLibrary *library;

    unsigned int libraryID;

    unsigned long long messageFlags;

    unsigned int uid;

    unsigned int encoding;

    _Bool isInvalid;

    unsigned int mailboxID;

    long long conversationHash;

    unsigned int dateReceived;

    unsigned int dateSent;

    NSString *externalID;

}



- (id)copyMessageInfo;

- (double)dateReceivedAsTimeIntervalSince1970;

- (double)dateSentAsTimeIntervalSince1970;

- (void)dealloc;

- (id)description;

- (id)externalID;

- (unsigned long long)hash;

- (id)init;

- (_Bool)isEqual:(id)arg1;

- (unsigned int)libraryID;

- (id)mailbox;

- (unsigned int)mailboxID;

- (unsigned long long)messageFlags;

- (id)messageID;

- (id)remoteID;

- (unsigned int)uid;



@end

