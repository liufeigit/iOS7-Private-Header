/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "CKMessagePart.h"


@class NSArray, NSString;



@interface CKAggregateMessagePart : CKMessagePart

{

    NSArray *_subparts;

}



+ (_Bool)shouldAggregateParts:(id)arg1;

- (Class)balloonViewClass;

- (id)compositionRepresentation;

- (void)dealloc;

- (id)initWithSubparts:(id)arg1;

- (id)pasteboardItems;

@property(copy, nonatomic) NSArray *subparts; // @synthesize subparts=_subparts;

- (id)text;

@property(readonly, nonatomic) NSString *title;

- (int)type;



@end

