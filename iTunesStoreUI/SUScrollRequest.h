/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class NSValue;



@interface SUScrollRequest : NSObject

{

    _Bool _animated;

    id _completionHandler;

    NSValue *_contentOffsetValue;

    NSValue *_frameValue;

}



@property(copy, nonatomic) id completionHandler; // @synthesize completionHandler=_completionHandler;

@property(retain) NSValue *contentOffsetValue; // @synthesize contentOffsetValue=_contentOffsetValue;

- (void)dealloc;

@property(retain) NSValue *frameValue; // @synthesize frameValue=_frameValue;

@property(nonatomic, getter=isAnimated) _Bool animated; // @synthesize animated=_animated;



@end


