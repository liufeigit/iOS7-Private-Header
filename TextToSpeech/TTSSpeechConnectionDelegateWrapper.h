/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





#import "TTSSpeechServiceDelegate.h"



@class TTSSpeechClient, TTSSpeechConnection, TTSSpeechRequest;



@interface TTSSpeechConnectionDelegateWrapper : NSObject <TTSSpeechServiceDelegate>

{

    id <TTSSpeechConnectionDelegate> _delegate;

    TTSSpeechRequest *_request;

    TTSSpeechClient *_speechClient;

    TTSSpeechConnection *_connection;

}



- (void).cxx_destruct;

@property(nonatomic) __weak TTSSpeechConnection *connection; // @synthesize connection=_connection;

@property(nonatomic) __weak id <TTSSpeechConnectionDelegate> delegate; // @synthesize delegate=_delegate;

@property(retain, nonatomic) TTSSpeechRequest *request; // @synthesize request=_request;

@property(retain, nonatomic) TTSSpeechClient *speechClient; // @synthesize speechClient=_speechClient;

- (oneway void)speechRequestDidContinue;

- (oneway void)speechRequestDidPause;

- (oneway void)speechRequestDidStart;

- (oneway void)speechRequestDidStopWithSuccess:(_Bool)arg1 phonemesSpoken:(id)arg2 error:(id)arg3;

- (oneway void)speechRequestMark:(long long)arg1 didStartForRange:(struct _NSRange)arg2;



@end

