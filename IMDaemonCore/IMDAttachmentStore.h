/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@interface IMDAttachmentStore : NSObject

{

}



+ (id)sharedInstance;

- (id)attachmentWithGUID:(id)arg1;

- (_Bool)deleteAttachmentDataForTransfer:(id)arg1;

- (_Bool)deleteAttachmentWithGUID:(id)arg1;

- (_Bool)deleteAttachmentsWithGUIDs:(id)arg1;

- (_Bool)removeAttachment:(id)arg1 fromMessageWithGUID:(id)arg2;

- (_Bool)storeAttachment:(id)arg1 associateWithMessageWithGUID:(id)arg2;

- (_Bool)updateAttachment:(id)arg1;



@end

