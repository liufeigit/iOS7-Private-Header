/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





#import "IMConnectionMonitorDelegate.h"

#import "IMServiceSessionProtocol.h"

#import "IMSystemMonitorListener.h"



@class IMConnectionMonitor, IMDAccount, IMDService, IMSystemProxySettingsFetcher, IMTimer, NSArray, NSDictionary, NSMutableDictionary, NSMutableSet, NSRecursiveLock, NSString, NSTimer;



@interface IMDServiceSession : NSObject <IMSystemMonitorListener, IMConnectionMonitorDelegate, IMServiceSessionProtocol>

{

    NSRecursiveLock *_lock;

    IMDAccount *_account;

    NSString *_loginStatusMessage;

    NSMutableDictionary *_localProperties;

    NSMutableSet *_changedBuddies;

    NSMutableSet *_registeredChats;

    NSMutableDictionary *_groupChatIdentifierToChatRoomMap;

    NSMutableDictionary *_chatRoomToGroupChatIdentifierMap;

    NSMutableDictionary *_chatSuppressionFlagMap;

    NSMutableDictionary *_chatSuppressionTimerMap;

    NSMutableDictionary *_suppressedMessages;

    IMTimer *_messageRoutingTimer;

    NSTimer *_storageTimer;

    NSMutableSet *_messagesReceivedDuringStorage;

    IMConnectionMonitor *_connectionMonitor;

    NSTimer *_reconnectTimer;

    NSString *_loginID;

    NSString *_pwRequestID;

    IMSystemProxySettingsFetcher *_systemProxySettingsFetcher;

    int _buddyChangeLevel;

    unsigned int _loginStatus;

    int _disconnectReason;

    _Bool _activated;

    _Bool _saveKeychainPassword;

    _Bool _awaitingDataContext;

    _Bool _shouldReconnect;

    _Bool _badPass;

    IMDService *_service;

    NSMutableDictionary *_buddies;

    NSString *_proxyHost;

    NSString *_proxyAccount;

    NSString *_proxyPassword;

    NSString *_password;

    NSString *_serverHost;

    long long _proxyType;

    unsigned short _proxyPort;

    _Bool _useSSL;

    unsigned short _serverPort;

}



+ (id)_firewallUserNotificationForService:(id)arg1;

+ (void)initialize;

- (void)_abandonPWFetcher;

- (void)_abandonSystemProxySettingsFetcher;

- (void)_autoReconnectTimer:(id)arg1;

- (void)_callMonitorStateChanged:(id)arg1;

- (void)_clearAutoReconnectTimer;

- (void)_clearConnectionMonitor;

- (void)_clearDowngradeMarkersForChat:(id)arg1;

- (void)_data_connection_ready;

- (void)_didReceiveMessageReadForMessageID:(id)arg1 date:(id)arg2 attempts:(long long)arg3 completionBlock:(id)arg4;

- (void)_didReceiveMessageReadReceiptForMessageID:(id)arg1 date:(id)arg2 attempts:(long long)arg3 completionBlock:(id)arg4;

- (void)_doLoginIgnoringProxy:(_Bool)arg1;

- (void)_endMessageSuppressionForChatGUID:(id)arg1;

- (void)_forceSetLoginStatus:(unsigned int)arg1 message:(id)arg2 reason:(int)arg3 properties:(id)arg4;

- (void)_handleFirewallUserNotificationDidFinish:(id)arg1;

- (void)_handleRoutingWithDictionary:(id)arg1;

- (void)_login_checkUsernameAndPassword;

- (void)_login_serverSettingsReady;

- (void)_login_usernameAndPasswordReady;

- (void)_managedPrefsNotification:(id)arg1;

- (void)_mapRoomChatToGroupChat:(id *)arg1 style:(unsigned char *)arg2;

- (void)_markChatAsDowngraded:(id)arg1;

- (void)_networkChanged:(id)arg1;

- (id)_newHashForChat:(id)arg1 style:(unsigned char)arg2;

- (void)_processConnectionMonitorUpdate;

- (void)_processPotentialNetworkChange;

- (void)_reconnectIfNecessary;

- (void)_routingTimerFired;

- (void)_setAutoReconnectTimer;

- (void)_setPendingConnectionMonitorUpdate;

- (void)_setSuppressedMessage:(id)arg1 inChatWithGUID:(id)arg2;

- (void)_storageTimerFired;

- (void)_suppresionTimerFired:(id)arg1;

- (void)_updateConnectionMonitorFromAccountDefaultsIgnoringProxy:(_Bool)arg1;

- (void)_updateConnectionMonitorWithRemoteHost:(id)arg1;

- (void)_updateRoutingForMessageGUID:(id)arg1 chatGUID:(id)arg2 error:(unsigned int)arg3;

- (void)_updateRoutingTimerWithInterval:(double)arg1;

- (void)_updateStorageTimerWithInterval:(double)arg1;

- (void)_wentOffline;

- (void)acceptSubscriptionRequest:(_Bool)arg1 from:(id)arg2;

@property(readonly, nonatomic) IMDAccount *account; // @synthesize account=_account;

@property(readonly, nonatomic) NSDictionary *accountDefaults;

- (void)accountDefaultsChanged:(id)arg1;

@property(readonly, nonatomic) NSString *accountID;

@property(readonly, nonatomic) _Bool accountNeedsLogin;

@property(readonly, nonatomic) _Bool accountNeedsPassword;

@property(readonly, nonatomic) _Bool accountShouldBeAlwaysLoggedIn;

- (void)addAliases:(id)arg1;

@property(readonly, nonatomic) NSArray *allBuddies;

- (id)allowList;

@property(readonly, nonatomic) _Bool allowedAsChild;

- (void)authenticateAccount;

- (void)autoLogin;

- (void)autoReconnect;

- (void)beginBuddyChanges;

- (_Bool)blockIdleStatus;

- (id)blockList;

- (unsigned int)blockingMode;

- (id)broadcaster;

- (id)broadcasterForACConferenceListeners;

- (id)broadcasterForAVConferenceListeners;

- (id)broadcasterForChatListeners;

- (id)broadcasterForChatObserverListeners;

- (id)broadcasterForListenersWithCapabilities:(unsigned int)arg1;

- (id)broadcasterForVCConferenceListeners;

@property(readonly, nonatomic) NSDictionary *buddyPictures;

@property(readonly) NSDictionary *buddyProperties;

- (_Bool)canMakeDowngradeRoutingChecks;

- (void)cancelVCRequestWithPerson:(id)arg1 properties:(id)arg2 conference:(id)arg3;

- (id)canonicalFormOfChatRoom:(id)arg1;

- (id)canonicalFormOfID:(id)arg1;

- (void)canonicalizeChatIdentifier:(id *)arg1 style:(unsigned char *)arg2;

- (unsigned long long)capabilities;

- (void)changeGroup:(id)arg1 changes:(id)arg2;

- (void)changeGroups:(id)arg1;

- (void)changeLocalProperty:(id)arg1 ofBuddy:(id)arg2 to:(id)arg3;

- (void)changeMyStatus:(id)arg1 changedKeys:(id)arg2;

- (void)changeProperty:(id)arg1 ofBuddy:(id)arg2 to:(id)arg3;

- (id)chatForChatIdentifier:(id)arg1 style:(unsigned char)arg2;

- (id)chatRoomForGroupChatIdentifier:(id)arg1;

- (void)clearLocalProperties;

- (void)clearPropertiesOfBuddy:(id)arg1;

- (void)connectionMonitorDidUpdate:(id)arg1;

- (void)dealloc;

- (void)declineInvitationToChat:(id)arg1 style:(unsigned char)arg2;

- (void)declineInvitationToChatID:(id)arg1 identifier:(id)arg2 style:(unsigned char)arg3;

- (id)defaultChatSuffix;

- (void)didChangeMemberStatus:(int)arg1 forHandle:(id)arg2 forChat:(id)arg3 style:(unsigned char)arg4;

- (void)didChangeMemberStatus:(int)arg1 forHandle:(id)arg2 unformattedNumber:(id)arg3 countryCode:(id)arg4 forChat:(id)arg5 style:(unsigned char)arg6;

- (void)didJoinChat:(id)arg1 style:(unsigned char)arg2;

- (void)didJoinChat:(id)arg1 style:(unsigned char)arg2 handleInfo:(id)arg3;

- (void)didLeaveChat:(id)arg1 style:(unsigned char)arg2;

- (void)didReceiveError:(unsigned int)arg1 forMessageID:(id)arg2 forceError:(_Bool)arg3;

- (void)didReceiveErrorMessage:(id)arg1 forChat:(id)arg2 style:(unsigned char)arg3;

- (void)didReceiveInvitation:(id)arg1 forChat:(id)arg2 style:(unsigned char)arg3;

- (void)didReceiveMessage:(id)arg1 forChat:(id)arg2 style:(unsigned char)arg3;

- (void)didReceiveMessageDeliveryReceiptForMessageID:(id)arg1 date:(id)arg2;

- (void)didReceiveMessageReadForMessageID:(id)arg1 date:(id)arg2 completionBlock:(id)arg3;

- (void)didReceiveMessageReadReceiptForMessageID:(id)arg1 date:(id)arg2 completionBlock:(id)arg3;

- (void)didReceiveReplaceMessageID:(int)arg1 forChat:(id)arg2 style:(unsigned char)arg3;

- (void)didSendMessage:(id)arg1 forChat:(id)arg2 style:(unsigned char)arg3;

- (void)didSendMessageReadReceiptForMessageID:(id)arg1;

- (void)didUpdateChatStatus:(int)arg1 chat:(id)arg2 style:(unsigned char)arg3;

- (void)didUpdateChatStatus:(int)arg1 chat:(id)arg2 style:(unsigned char)arg3 handleInfo:(id)arg4;

- (void)disallowReconnection;

@property(readonly, nonatomic) NSString *displayName;

- (void)endBuddyChanges;

- (void)endMessageSuppression;

- (_Bool)equalID:(id)arg1 andID:(id)arg2;

- (id)groupChatIdentifierForChatRoom:(id)arg1;

- (id)groups;

- (_Bool)hasCapability:(unsigned long long)arg1;

- (void)holdBuddyUpdates;

- (id)initWithAccount:(id)arg1 service:(id)arg2;

- (void)invitePerson:(id)arg1 withMessage:(id)arg2 toChat:(id)arg3 style:(unsigned char)arg4;

- (void)invitePersonInfo:(id)arg1 withMessage:(id)arg2 toChat:(id)arg3 style:(unsigned char)arg4;

- (void)invitePersonInfo:(id)arg1 withMessage:(id)arg2 toChatID:(id)arg3 identifier:(id)arg4 style:(unsigned char)arg5;

@property(readonly, nonatomic) _Bool isActive;

- (_Bool)isAwaitingStorageTimer;

- (_Bool)isChatRegistered:(id)arg1 style:(unsigned char)arg2;

- (void)joinChat:(id)arg1 handleInfo:(id)arg2 style:(unsigned char)arg3 joinProperties:(id)arg4;

- (void)joinChat:(id)arg1 style:(unsigned char)arg2 joinProperties:(id)arg3;

- (void)joinChatID:(id)arg1 handleInfo:(id)arg2 identifier:(id)arg3 style:(unsigned char)arg4 joinProperties:(id)arg5;

- (void)leaveAllChats;

- (void)leaveChat:(id)arg1 style:(unsigned char)arg2;

- (void)leaveChatID:(id)arg1 identifier:(id)arg2 style:(unsigned char)arg3;

- (id)localPropertiesOfBuddy:(id)arg1;

- (id)localProperty:(id)arg1 ofBuddy:(id)arg2;

- (void)login;

- (id)loginID;

- (void)loginServiceSession;

- (void)logout;

- (void)logoutServiceSession;

- (void)markBuddiesAsChanged:(id)arg1;

@property(readonly, nonatomic) _Bool networkConditionsAllowLogin;

- (void)noteBadPassword;

- (void)noteItemFromStorage:(id)arg1;

- (void)noteLastItemFromStorage:(id)arg1;

- (void)noteMessagesMarkedAsReadForChatWithGUID:(id)arg1;

- (void)noteSuppressedMessageUpdate:(id)arg1;

- (void)notifyDidSendMessageID:(id)arg1;

@property(readonly, nonatomic) NSString *password; // @synthesize password=_password;

- (void)passwordUpdated;

- (id)pictureKeyForBuddy:(id)arg1;

- (id)pictureOfBuddy:(id)arg1;

- (void)processMessageForSending:(id)arg1 toChat:(id)arg2 style:(unsigned char)arg3 completionBlock:(id)arg4;

- (id)property:(id)arg1 ofBuddy:(id)arg2;

@property(readonly, nonatomic) NSString *proxyAccount; // @synthesize proxyAccount=_proxyAccount;

@property(readonly, nonatomic) NSString *proxyHost; // @synthesize proxyHost=_proxyHost;

@property(readonly, nonatomic) NSString *proxyPassword; // @synthesize proxyPassword=_proxyPassword;

@property(readonly, nonatomic) unsigned short proxyPort; // @synthesize proxyPort=_proxyPort;

@property(readonly, nonatomic) long long proxyType; // @synthesize proxyType=_proxyType;

- (void)refreshServiceCapabilities;

- (void)registerAccount;

- (void)registerChat:(id)arg1 style:(unsigned char)arg2;

- (void)registerChat:(id)arg1 style:(unsigned char)arg2 handleInfo:(id)arg3;

@property(readonly, nonatomic) NSDictionary *registrationAlertInfo;

@property(readonly, nonatomic) int registrationError;

@property(readonly, nonatomic) int registrationStatus;

- (void)relay:(id)arg1 sendCancel:(id)arg2 toPerson:(id)arg3;

- (void)relay:(id)arg1 sendInitateRequest:(id)arg2 toPerson:(id)arg3;

- (void)relay:(id)arg1 sendUpdate:(id)arg2 toPerson:(id)arg3;

- (void)removeAliases:(id)arg1;

- (void)renameGroup:(id)arg1 to:(id)arg2;

- (void)requestGroups;

- (void)requestProperty:(id)arg1 ofPerson:(id)arg2;

- (void)requestSubscriptionTo:(id)arg1;

- (void)requestVCWithPerson:(id)arg1 properties:(id)arg2 conference:(id)arg3;

- (void)respondToVCInvitationWithPerson:(id)arg1 properties:(id)arg2 conference:(id)arg3;

- (void)resumeBuddyUpdates;

- (void)sendAVMessageToPerson:(id)arg1 sessionID:(unsigned int)arg2 type:(unsigned int)arg3 userInfo:(id)arg4 conference:(id)arg5;

- (void)sendCommand:(id)arg1 withProperties:(id)arg2 toPerson:(id)arg3;

- (void)sendCounterProposalToPerson:(id)arg1 properties:(id)arg2 conference:(id)arg3;

- (void)sendFileTransfer:(id)arg1 toPerson:(id)arg2;

- (void)sendMessage:(id)arg1 toChat:(id)arg2 style:(unsigned char)arg3;

- (void)sendMessage:(id)arg1 toChatID:(id)arg2 identifier:(id)arg3 style:(unsigned char)arg4;

- (void)sendReadReceiptForMessage:(id)arg1 toChatID:(id)arg2 identifier:(id)arg3 style:(unsigned char)arg4;

- (void)sendVCUpdate:(id)arg1 toPerson:(id)arg2 conference:(id)arg3;

- (id)server;

@property(readonly, nonatomic) NSString *serverHost; // @synthesize serverHost=_serverHost;

@property(readonly, nonatomic) unsigned short serverPort; // @synthesize serverPort=_serverPort;

@property(readonly, nonatomic) IMDService *service; // @synthesize service=_service;

@property(readonly, nonatomic) int serviceDisconnectReason; // @synthesize serviceDisconnectReason=_disconnectReason;

@property(readonly, nonatomic) unsigned int serviceLoginStatus; // @synthesize serviceLoginStatus=_loginStatus;

@property(readonly, nonatomic) NSString *serviceLoginStatusMessage; // @synthesize serviceLoginStatusMessage=_loginStatusMessage;

- (void)serviceSessionDidLogin;

- (void)serviceSessionDidLogout;

- (void)serviceSessionDidLogoutWithMessage:(id)arg1 reason:(int)arg2 properties:(id)arg3;

- (void)sessionDidBecomeActive;

- (void)sessionWillBecomeInactive;

- (void)setAllowList:(id)arg1;

- (void)setBlockIdleStatus:(_Bool)arg1;

- (void)setBlockList:(id)arg1;

- (void)setBlockingMode:(unsigned int)arg1;

- (void)setIdleTime:(unsigned int)arg1;

- (void)setLoginStatus:(unsigned int)arg1 message:(id)arg2;

- (void)setLoginStatus:(unsigned int)arg1 message:(id)arg2 reason:(int)arg3 properties:(id)arg4;

- (void)setProperties:(id)arg1 ofParticipant:(id)arg2 inChat:(id)arg3 style:(unsigned char)arg4;

- (void)setProperties:(id)arg1 ofParticipant:(id)arg2 inChatID:(id)arg3 identifier:(id)arg4 style:(unsigned char)arg5;

- (void)setRegistrationStatus:(int)arg1 error:(int)arg2 alertInfo:(id)arg3;

- (void)setValue:(id)arg1 ofProperty:(id)arg2 ofPerson:(id)arg3;

- (_Bool)shouldImitateGroupChatUsingChatRooms;

- (void)startWatchingBuddy:(id)arg1;

- (void)stopWatchingBuddy:(id)arg1;

- (void)systemDidUnlock;

- (void)systemProxySettingsFetcher:(id)arg1 retrievedAccount:(id)arg2 password:(id)arg3;

- (void)systemProxySettingsFetcher:(id)arg1 retrievedHost:(id)arg2 port:(unsigned short)arg3 protocol:(long long)arg4;

- (void)unregisterAccount;

- (void)unregisterChat:(id)arg1 style:(unsigned char)arg2;

- (void)unvalidateAliases:(id)arg1;

- (void)updateAuthorizationCredentials:(id)arg1 token:(id)arg2;

- (void)updateConnectionMonitorWithLocalSocketAddress:(id)arg1 remoteSocketAddress:(id)arg2;

- (void)useChatRoom:(id)arg1 forGroupChatIdentifier:(id)arg2;

@property(readonly, nonatomic) _Bool useSSL; // @synthesize useSSL=_useSSL;

- (void)userNotificationDidFinish:(id)arg1;

- (void)validateAliases:(id)arg1;

- (void)validateProfile;

- (struct _FZChatRoomValidity)validityOfChatRoomName:(id)arg1;

- (_Bool)warnIfPortBlocked:(int)arg1 forAction:(id)arg2;



@end

