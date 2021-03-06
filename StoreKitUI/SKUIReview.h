/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





#import "SKUICacheCoding.h"



@class NSMutableDictionary, NSString;



@interface SKUIReview : NSObject <SKUICacheCoding>

{

    NSString *_body;

    NSString *_dateString;

    float _rating;

    NSString *_reviewer;

    NSString *_title;

}



- (void).cxx_destruct;

@property(readonly, nonatomic) NSString *body; // @synthesize body=_body;

@property(readonly, nonatomic) NSMutableDictionary *cacheRepresentation;

@property(readonly, nonatomic) NSString *dateString; // @synthesize dateString=_dateString;

- (id)formattedBylineWithClientContext:(id)arg1;

- (id)initWithCacheRepresentation:(id)arg1;

- (id)initWithReviewDictionary:(id)arg1;

@property(readonly, nonatomic) float rating; // @synthesize rating=_rating;

@property(readonly, nonatomic) NSString *reviewer; // @synthesize reviewer=_reviewer;

@property(readonly, nonatomic) NSString *title; // @synthesize title=_title;



@end


