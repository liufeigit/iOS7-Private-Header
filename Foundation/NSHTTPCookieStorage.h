/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class NSHTTPCookieStorageInternal;



@interface NSHTTPCookieStorage : NSObject

{

    NSHTTPCookieStorageInternal *_internal;

}



+ (id)sharedHTTPCookieStorage;

- (struct OpaqueCFHTTPCookieStorage *)_cookieStorage;

- (id)_initWithCFHTTPCookieStorage:(struct OpaqueCFHTTPCookieStorage *)arg1;

- (void)_readAcceptCookiesPreference;

- (void)_saveCookies;

- (void)_setPrivateBrowsingEnabled:(_Bool)arg1;

- (unsigned long long)cookieAcceptPolicy;

- (id)cookieRequestHeaderFieldsForURL:(id)arg1;

- (id)cookies;

- (id)cookiesForURL:(id)arg1;

- (void)dealloc;

- (void)deleteCookie:(id)arg1;

- (id)description;

- (id)init;

- (void)setCookie:(id)arg1;

- (void)setCookieAcceptPolicy:(unsigned long long)arg1;

- (void)setCookies:(id)arg1 forURL:(id)arg2 mainDocumentURL:(id)arg3;

- (void)setCookiesFromResponseHeader:(id)arg1 forURL:(id)arg2 policyBaseURL:(id)arg3;

- (id)sortedCookiesUsingDescriptors:(id)arg1;



@end


