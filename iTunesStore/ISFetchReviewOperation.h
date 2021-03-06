/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "ISOperation.h"


@class ISReview, NSURL;



@interface ISFetchReviewOperation : ISOperation

{

    long long _assetType;

    _Bool _backgroundReview;

    unsigned long long _itemIdentifier;

    unsigned long long _softwareVersionIdentifier;

    ISReview *_review;

    NSURL *_url;

}



- (void)_fetchReviewInformation;

@property long long assetType; // @synthesize assetType=_assetType;

- (void)dealloc;

@property(getter=isBackgroundReview) _Bool backgroundReview; // @synthesize backgroundReview=_backgroundReview;

@property unsigned long long itemIdentifier; // @synthesize itemIdentifier=_itemIdentifier;

@property(retain) ISReview *review; // @synthesize review=_review;

- (void)run;

@property unsigned long long softwareVersionIdentifier; // @synthesize softwareVersionIdentifier=_softwareVersionIdentifier;

@property(retain) NSURL *url; // @synthesize url=_url;



@end


