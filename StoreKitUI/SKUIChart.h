/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class NSArray, NSString, NSURL;



@interface SKUIChart : NSObject

{

    NSArray *_items;

    _Bool _newsstand;

    NSURL *_seeAllURL;

    _Bool _showsIndexNumbers;

    NSString *_title;

}



- (void).cxx_destruct;

- (id)description;

- (id)initWithChartPageContext:(id)arg1;

- (id)initWithCustomPageContext:(id)arg1;

@property(readonly, nonatomic, getter=isNewsstand) _Bool newsstand; // @synthesize newsstand=_newsstand;

@property(readonly, nonatomic) NSArray *items; // @synthesize items=_items;

@property(readonly, nonatomic) NSURL *seeAllURL; // @synthesize seeAllURL=_seeAllURL;

@property(readonly, nonatomic) _Bool showsIndexNumbers; // @synthesize showsIndexNumbers=_showsIndexNumbers;

@property(readonly, nonatomic) NSString *title; // @synthesize title=_title;



@end

