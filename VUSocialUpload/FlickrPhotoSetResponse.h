/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





#import "NSXMLParserDelegate.h"



@class FlickrPhotoSet, NSMutableArray, NSMutableString, NSString;



@interface FlickrPhotoSetResponse : NSObject <NSXMLParserDelegate>

{

    _Bool _success;

    NSString *_errorDescription;

    FlickrPhotoSet *_currentPhotoSet;

    NSMutableString *_dataString;

    long long _stage;

    NSMutableArray *_photoSets;

}



+ (id)responseWithData:(id)arg1;

- (void)dealloc;

- (id)initWithData:(id)arg1;

- (void)parser:(id)arg1 didEndElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4;

- (void)parser:(id)arg1 didStartElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4 attributes:(id)arg5;

- (void)parser:(id)arg1 foundCharacters:(id)arg2;

@property(retain, nonatomic) NSMutableArray *photoSets; // @synthesize photoSets=_photoSets;

@property(nonatomic) long long stage; // @synthesize stage=_stage;



@end

