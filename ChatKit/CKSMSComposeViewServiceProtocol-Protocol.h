/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@protocol CKSMSComposeViewServiceProtocol <NSObject>

- (void)disableCameraAttachments;

- (void)forceCancelComposition;

- (void)forceMMS;

- (void)insertAttachmentWithURL:(id)arg1 andDescription:(id)arg2;

- (void)insertData:(id)arg1 MIMEType:(id)arg2 exportedFilename:(id)arg3;

- (void)insertFilename:(id)arg1 MIMEType:(id)arg2 exportedFilename:(id)arg3;

- (void)insertFilename:(id)arg1 MIMEType:(id)arg2 exportedFilename:(id)arg3 options:(id)arg4;

- (void)insertTextPart:(id)arg1;

- (void)setCanEditRecipients:(_Bool)arg1;

- (void)setPendingAddresses:(id)arg1;

- (void)setText:(id)arg1 addresses:(id)arg2;

- (void)setText:(id)arg1 subject:(id)arg2 addresses:(id)arg3;

- (void)setTextEntryContentsVisible:(_Bool)arg1;

- (void)setUICustomizationData:(id)arg1;

@end


