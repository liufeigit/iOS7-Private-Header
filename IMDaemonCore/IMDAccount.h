/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





#import "IMSystemMonitorListener.h"



@class IMDService, IMDServiceSession, NSDictionary, NSMutableDictionary, NSString;



@interface IMDAccount : NSObject <IMSystemMonitorListener>

{

    NSMutableDictionary *_accountDefaults;

    NSString *_account;

    IMDService *_service;

    IMDServiceSession *_session;

    NSMutableDictionary *_myStatus;

    NSDictionary *_lastPostedStatus;

    _Bool _isLoading;

    _Bool _isManaged;

}



- (id)_registrationInfo;

- (void)_updateIdle;

@property(readonly, nonatomic) NSDictionary *accountDefaults; // @synthesize accountDefaults=_accountDefaults;

@property(readonly, nonatomic) NSString *accountID; // @synthesize accountID=_account;

@property(readonly, nonatomic) NSDictionary *accountInfoToPost;

- (void)changeStatus:(id)arg1;

- (void)createSessionIfNecessary;

- (void)dealloc;

- (id)initWithAccountID:(id)arg1 defaults:(id)arg2 service:(id)arg3;

@property(readonly, nonatomic) _Bool isActive;

@property(readonly, nonatomic) _Bool isDisabled;

@property(nonatomic) _Bool isLoading; // @synthesize isLoading=_isLoading;

@property(nonatomic) _Bool isManaged; // @synthesize isManaged=_isManaged;

@property(readonly, nonatomic) NSString *loginID;

- (void)postAccountCapabilities;

- (void)postAccountCapabilitiesToListener:(id)arg1;

@property(readonly, nonatomic) NSDictionary *registrationAlertInfo;

@property(readonly, nonatomic) int registrationError;

@property(readonly, nonatomic) int registrationStatus;

- (void)releaseSession;

@property(readonly, nonatomic) IMDService *service; // @synthesize service=_service;

@property(readonly, nonatomic) IMDServiceSession *session; // @synthesize session=_session;

- (void)setRegistrationStatus:(int)arg1 error:(int)arg2 alertInfo:(id)arg3;

@property(nonatomic) _Bool wasDisabledAutomatically;

@property(readonly, nonatomic) _Bool shouldPublishNowPlaying;

@property(readonly, nonatomic) NSDictionary *status;

@property(readonly, nonatomic) NSDictionary *statusToPost;

@property(readonly, nonatomic) NSDictionary *statusToSave;

- (void)systemDidBecomeIdle;

- (void)systemDidBecomeUnidle;

- (void)tunesController:(id)arg1 playerInfoChanged:(id)arg2;

- (void)writeAccountDefaults:(id)arg1;



@end


