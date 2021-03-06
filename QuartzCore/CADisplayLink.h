/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class CADisplay;



@interface CADisplayLink : NSObject

{

    void *_impl;

}



+ (id)displayLinkWithDisplay:(id)arg1 target:(id)arg2 selector:(SEL)arg3;

+ (id)displayLinkWithTarget:(id)arg1 selector:(SEL)arg2;

- (id)_initWithDisplayLinkItem:(struct DisplayLinkItem *)arg1;

- (void)addToRunLoop:(id)arg1 forMode:(id)arg2;

- (void)dealloc;

@property(readonly, nonatomic) CADisplay *display;

@property(readonly, nonatomic) double duration;

@property(nonatomic) long long frameInterval;

- (void)invalidate;

@property(nonatomic, getter=isPaused) _Bool paused;

- (void)removeFromRunLoop:(id)arg1 forMode:(id)arg2;

@property(retain, nonatomic) id userInfo;

@property(readonly, nonatomic) double timestamp;



@end


