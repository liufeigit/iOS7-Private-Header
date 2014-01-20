/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





#import "NSURLAuthenticationChallengeSender.h"



@class NSURLConnectionInternal;



@interface NSURLConnection : NSObject <NSURLAuthenticationChallengeSender>

{

    NSURLConnectionInternal *_internal;

}



+ (void)_resourceLoadLoop:(id)arg1;

+ (void)_setLoaderThreadPriority:(int)arg1;

+ (void)_setMIMETypesWithNoSizeLimit:(id)arg1;

+ (void)_setSweeperInterval:(unsigned long long)arg1;

+ (unsigned long long)_sweeperInterval;

+ (_Bool)canHandleRequest:(id)arg1;

+ (id)connectionWithRequest:(id)arg1 delegate:(id)arg2;

+ (struct __CFRunLoop *)resourceLoaderRunLoop;

+ (void)sendAsynchronousRequest:(id)arg1 queue:(id)arg2 completionHandler:(id)arg3;

+ (id)sendSynchronousRequest:(id)arg1 returningResponse:(id *)arg2 error:(id *)arg3;

- (id)_cfInternal;

- (id)_dlInternal;

- (id)_initWithRequest:(id)arg1 delegate:(id)arg2 usesCache:(_Bool)arg3 maxContentLength:(long long)arg4 startImmediately:(_Bool)arg5 connectionProperties:(id)arg6;

- (void)_resumeLoading;

- (void)_suspendLoading;

- (void)cancel;

- (void)cancelAuthenticationChallenge:(id)arg1;

- (id)connectionProperties;

- (void)continueWithoutCredentialForAuthenticationChallenge:(id)arg1;

- (id)currentRequest;

- (void)dealloc;

- (_Bool)defersCallbacks;

- (id)description;

- (void)download;

- (id)initWithRequest:(id)arg1 delegate:(id)arg2;

- (id)initWithRequest:(id)arg1 delegate:(id)arg2 startImmediately:(_Bool)arg3;

- (id)originalRequest;

- (void)performDefaultHandlingForAuthenticationChallenge:(id)arg1;

- (void)rejectProtectionSpaceAndContinueWithChallenge:(id)arg1;

- (void)scheduleInRunLoop:(id)arg1 forMode:(id)arg2;

- (void)setDefersCallbacks:(_Bool)arg1;

- (void)setDelegateQueue:(id)arg1;

- (void)start;

- (void)unscheduleFromRunLoop:(id)arg1 forMode:(id)arg2;

- (void)useCredential:(id)arg1 forAuthenticationChallenge:(id)arg2;



@end

