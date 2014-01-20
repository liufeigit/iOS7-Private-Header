/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





#import "NSCopying.h"



@class NSNumber, NSString;



@interface NSURLComponents : NSObject <NSCopying>

{

}



+ (id)allocWithZone:(struct _NSZone *)arg1;

+ (id)componentsWithString:(id)arg1;

+ (id)componentsWithURL:(id)arg1 resolvingAgainstBaseURL:(_Bool)arg2;

- (id)URL;

- (id)URLRelativeToURL:(id)arg1;

- (id)copyWithZone:(struct _NSZone *)arg1;

@property(copy) NSString *fragment;

@property(copy) NSString *host;

- (id)init;

- (id)initWithString:(id)arg1;

- (id)initWithURL:(id)arg1 resolvingAgainstBaseURL:(_Bool)arg2;

@property(copy) NSString *password;

@property(copy) NSString *path;

@property(copy) NSString *percentEncodedFragment;

@property(copy) NSString *percentEncodedHost;

@property(copy) NSString *percentEncodedPassword;

@property(copy) NSString *percentEncodedPath;

@property(copy) NSString *percentEncodedQuery;

@property(copy) NSString *percentEncodedUser;

@property(copy) NSNumber *port;

@property(copy) NSString *query;

@property(copy) NSString *scheme;

@property(copy) NSString *user;



@end

