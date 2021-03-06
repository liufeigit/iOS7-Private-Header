/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "MFMailDelivery.h"


@class DAMailAccount, NSString;



@interface MFDADelivery : MFMailDelivery

{

    DAMailAccount *_DAMailAccount;

    NSString *_folderId;

    NSString *_accountId;

    NSString *_repliedMessageId;

    NSString *_forwardedMessageId;

    NSString *_repliedLongId;

    NSString *_forwardedLongId;

}



- (void)dealloc;

- (id)deliverSynchronously;

- (id)initWithHeaders:(id)arg1 HTML:(id)arg2 plainTextAlternative:(id)arg3 other:(id)arg4 charsets:(id)arg5;

- (id)initWithHeaders:(id)arg1 mixedContent:(id)arg2 textPartsAreHTML:(_Bool)arg3;

- (id)newMessageWriter;

- (void)setDAMailAccount:(id)arg1;



@end


