/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





#import "NSCopying.h"

#import "NSMutableCopying.h"

#import "NSSecureCoding.h"



@class NSURLRequestInternal;



@interface NSURLRequest : NSObject <NSSecureCoding, NSCopying, NSMutableCopying>

{

    NSURLRequestInternal *_internal;

}



+ (_Bool)allowsAnyHTTPSCertificateForHost:(id)arg1;

+ (id)allowsSpecificHTTPSCertificateForHost:(id)arg1;

+ (void)checkForSharedCookieStoreNeed:(struct _CFURLRequest *)arg1;

+ (double)defaultTimeoutInterval;

+ (id)requestWithURL:(id)arg1;

+ (id)requestWithURL:(id)arg1 cachePolicy:(unsigned long long)arg2 timeoutInterval:(double)arg3;

+ (void)setAllowsAnyHTTPSCertificate:(_Bool)arg1 forHost:(id)arg2;

+ (void)setAllowsSpecificHTTPSCertificate:(id)arg1 forHost:(id)arg2;

+ (void)setDefaultTimeoutInterval:(double)arg1;

+ (_Bool)supportsSecureCoding;

- (id)HTTPBody;

- (id)HTTPBodyStream;

- (id)HTTPContentType;

- (id)HTTPExtraCookies;

- (id)HTTPMethod;

- (id)HTTPReferrer;

- (_Bool)HTTPShouldHandleCookies;

- (_Bool)HTTPShouldUsePipelining;

- (id)HTTPUserAgent;

- (id)URL;

- (struct _CFURLRequest *)_CFURLRequest;

- (_Bool)_URLHasScheme:(id)arg1;

- (id)_copyReplacingURLWithURL:(id)arg1;

- (id)_initWithCFURLRequest:(struct _CFURLRequest *)arg1;

- (id)_propertyForKey:(id)arg1;

- (void)_removePropertyForKey:(id)arg1;

- (void)_setProperty:(id)arg1 forKey:(id)arg2;

- (id)allHTTPHeaderFields;

- (_Bool)allowsCellularAccess;

- (id)boundInterfaceIdentifier;

- (unsigned long long)cachePolicy;

- (id)contentDispositionEncodingFallbackArray;

- (id)copyWithZone:(struct _NSZone *)arg1;

- (void)dealloc;

- (id)description;

- (void)encodeWithCoder:(id)arg1;

- (unsigned long long)hash;

- (id)init;

- (id)initWithCoder:(id)arg1;

- (id)initWithURL:(id)arg1;

- (id)initWithURL:(id)arg1 cachePolicy:(unsigned long long)arg2 timeoutInterval:(double)arg3;

- (_Bool)isEqual:(id)arg1;

- (id)mainDocumentURL;

- (id)mutableCopyWithZone:(struct _NSZone *)arg1;

- (unsigned long long)networkServiceType;

- (double)timeoutInterval;

- (id)valueForHTTPHeaderField:(id)arg1;



@end


