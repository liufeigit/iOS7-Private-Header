/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





#import "IDSAccountControllerDelegate.h"

#import "IDSConnectionDelegatePrivate.h"



@class IDSAccountController, NSArray, NSMapTable, NSMutableDictionary, NSSet, NSString;



@interface _IDSService : NSObject <IDSAccountControllerDelegate, IDSConnectionDelegatePrivate>

{

    IDSAccountController *_accountController;

    NSMutableDictionary *_uniqueIDToConnection;

    NSSet *_commands;

    NSString *_rerouteService;

    _Bool _everHadDelegate;

    NSMapTable *_delegateToInfo;

    id _delegateContext;

}



- (void)_callDelegatesWithBlock:(id)arg1;

- (void)_logConnectionMap;

- (void)_processAccountSet:(id)arg1;

- (void)_setupNewConnectionForAccount:(id)arg1;

- (void)_tearDownConnectionForUniqueID:(id)arg1;

- (void)accountController:(id)arg1 accountAdded:(id)arg2;

- (void)accountController:(id)arg1 accountDisabled:(id)arg2;

- (void)accountController:(id)arg1 accountEnabled:(id)arg2;

- (void)accountController:(id)arg1 accountRemoved:(id)arg2;

- (void)accountController:(id)arg1 accountsChanged:(id)arg2;

@property(readonly, nonatomic) NSSet *accounts;

- (void)addDelegate:(id)arg1 queue:(id)arg2;

- (void)connection:(id)arg1 devicesChanged:(id)arg2;

- (void)connection:(id)arg1 identifier:(id)arg2 didSendWithSuccess:(_Bool)arg3 error:(id)arg4;

- (void)connection:(id)arg1 incomingMessage:(id)arg2 fromID:(id)arg3;

- (void)connection:(id)arg1 incomingTopLevelMessage:(id)arg2 fromID:(id)arg3 messageContext:(id)arg4;

- (void)connection:(id)arg1 isActiveChanged:(_Bool)arg2;

- (void)connection:(id)arg1 messageIdentifier:(id)arg2 updatedWithResponseCode:(long long)arg3 error:(id)arg4 lastCall:(_Bool)arg5;

- (void)dealloc;

@property(readonly, nonatomic) NSArray *devices;

- (id)initWithService:(id)arg1 commands:(id)arg2 delegateContext:(id)arg3;

- (void)removeDelegate:(id)arg1;

- (void)requestKeepAlive;

- (_Bool)sendMessage:(id)arg1 fromAccount:(id)arg2 toDestinations:(id)arg3 priority:(long long)arg4 options:(id)arg5 identifier:(id *)arg6 error:(id *)arg7;

- (_Bool)sendServerMessage:(id)arg1 command:(id)arg2 fromAccount:(id)arg3;



@end


