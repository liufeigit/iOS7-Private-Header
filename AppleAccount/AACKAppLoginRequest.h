/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "AARequest.h"


@class NSDictionary, NSString;



@interface AACKAppLoginRequest : AARequest

{

    NSDictionary *_accountParameters;

    NSString *_personId;

    NSString *_token;

}



+ (Class)responseClass;

- (void).cxx_destruct;

- (id)initWithParameters:(id)arg1 personId:(id)arg2 token:(id)arg3;

- (id)urlRequest;

- (id)urlString;



@end


