/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





#import "SKUICacheCoding.h"



@class NSArray, NSMutableDictionary, NSString;



@interface SKUICompletionList : NSObject <SKUICacheCoding>

{

    NSArray *_completions;

    NSString *_title;

}



- (void).cxx_destruct;

@property(readonly, nonatomic) NSMutableDictionary *cacheRepresentation;

@property(readonly, nonatomic) NSArray *completions; // @synthesize completions=_completions;

- (id)initWithCacheRepresentation:(id)arg1;

- (id)initWithCompletionListDictionary:(id)arg1;

@property(readonly, nonatomic) NSString *title; // @synthesize title=_title;



@end


