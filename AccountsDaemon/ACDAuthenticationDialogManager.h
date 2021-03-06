/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





#import "ACDAuthenticationDialogManagerProtocol.h"



@class ACDQueueDictionary, NSString, NSXPCListener;



@interface ACDAuthenticationDialogManager : NSObject <ACDAuthenticationDialogManagerProtocol>

{

    NSXPCListener *_authenticationDialogListener;

    ACDQueueDictionary *_dialogRequestQueues;

    NSString *_activeAccountID;

}



- (void).cxx_destruct;

- (_Bool)_confirmUserWantsToOpenAuthenticationURLForAccount:(id)arg1;

- (void)_launchDialogContainerAppForAccount:(id)arg1 shouldConfirm:(_Bool)arg2 completion:(id)arg3;

- (void)authenticationDialogCrashed;

- (void)authenticationDialogDidFinishWithSuccess:(_Bool)arg1;

- (void)contextForAuthenticationDialog:(id)arg1;

- (id)init;

- (void)openAuthenticationURL:(id)arg1 forAccount:(id)arg2 shouldConfirm:(_Bool)arg3 completion:(id)arg4;



@end


