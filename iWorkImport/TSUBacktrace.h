/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





__attribute__((visibility("hidden")))

@interface TSUBacktrace : NSObject

{

    void **_callstack;

    int _frames;

    int _initAdjustment;

}



+ (id)backtrace;

+ (id)callee;

+ (id)caller;

+ (id)new;

- (id)backtraceString;

- (id)callee;

- (id)caller;

- (id)callerAtIndex:(long long)arg1;

- (void)dealloc;

- (id)init;

- (id)initWithAdjustment:(int)arg1;

- (_Bool)isEqual:(id)arg1;



@end


