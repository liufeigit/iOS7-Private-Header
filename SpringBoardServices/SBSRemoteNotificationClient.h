/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@interface SBSRemoteNotificationClient : NSObject

{

}



+ (unsigned int)_remoteNotificationServerPort;

+ (long long)enabledRemoteNotificationTypes;

+ (id)getNotificationUserInfoForToken:(int)arg1;

+ (id)getPendingNotificationUserInfo;

+ (void)getSupportedTypes:(id *)arg1 enabledTypes:(id *)arg2;

+ (_Bool)hasRegisteredBundleIdentifiers;

+ (_Bool)isSystemwideEnabled;

+ (void)registerForRemoteNotificationTypes:(long long)arg1;

+ (void)setEnabledNotificationTypes:(long long)arg1 forBundleIdentifier:(id)arg2;

+ (void)setSystemwideEnabled:(_Bool)arg1;



@end

