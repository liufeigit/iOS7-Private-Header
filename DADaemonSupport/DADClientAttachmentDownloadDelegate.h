/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "DADClientDelegate.h"


#import "DAEventsAttachmentDownloadConsumer.h"



@class NSString;



@interface DADClientAttachmentDownloadDelegate : DADClientDelegate <DAEventsAttachmentDownloadConsumer>

{

    NSString *_attachmentUUID;

    id _downloadID;

}



- (void)beginDownload;

- (void)dealloc;

- (void)downloadFinishedError:(id)arg1;

- (void)downloadProgressDownloadedByteCount:(long long)arg1 totalByteCount:(long long)arg2;

- (void)finishWithError:(id)arg1;

- (id)initWithAccountID:(id)arg1 attachmentUUID:(id)arg2 client:(id)arg3;



@end

