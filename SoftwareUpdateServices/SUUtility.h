/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@interface SUUtility : NSObject

{

}



+ (id)URLIfFileExists:(id)arg1;

+ (id)addToDate:(id)arg1 numberOfDays:(long long)arg2;

+ (void)assignError:(id *)arg1 withCode:(long long)arg2;

+ (void)assignError:(id *)arg1 withError:(id)arg2 translate:(_Bool)arg3;

+ (_Bool)cellularDataIsEnabled;

+ (id)currentProductBuild;

+ (id)currentProductCategory;

+ (id)currentProductType;

+ (id)currentProductVersion;

+ (id)currentReleaseType;

+ (id)errorWithCode:(long long)arg1;

+ (id)errorWithCode:(long long)arg1 originalError:(id)arg2;

+ (id)gregorianCalendar;

+ (_Bool)hasCellularRadio;

+ (_Bool)hasEnoughDiskSpace:(unsigned long long)arg1;

+ (_Bool)isCellularDataCapable;

+ (_Bool)isDaemon;

+ (_Bool)isRestoringFromCloud;

+ (_Bool)isWiFiCapable;

+ (id)prettyPrintDate:(id)arg1;

+ (id)serialNumber;

+ (void)setIsDaemon:(_Bool)arg1;

+ (id)taskQueue;

+ (id)translateError:(id)arg1;

+ (id)translateError:(id)arg1 withAddedUserInfo:(id)arg2;

+ (long long)translateErrorCodeFromError:(id)arg1;



@end


