/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class NSString;



@interface AVFileValidator : NSObject

{

    struct AVFileValidatorPrivate *_priv;

    NSString *_validationRules;

}



- (void)cancel;

- (void)dealloc;

- (id)initWithURL:(id)arg1;

- (id)initWithURL:(id)arg1 options:(id)arg2;

- (_Bool)isCompleted;

- (_Bool)isStreaming;

- (id)notificationForFileCheckResult:(id)arg1;

- (void)postNotificationForCallback:(id)arg1;

- (float)progress;

@property(retain) NSString *validationRules; // @synthesize validationRules=_validationRules;

- (id)url;

- (void)validate;

- (id)validateBlocking:(_Bool)arg1;

- (void)validateForCameraRoll;

- (_Bool)validateSyncWithError:(id *)arg1;



@end

