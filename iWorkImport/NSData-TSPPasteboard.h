/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "NSData.h"



#import "TSPSplitableData.h"



@interface NSData (TSPPasteboard) <TSPSplitableData>

+ (id)dataFromDispatchData:(id)arg1;

- (void)splitDataWithMaxSize:(unsigned long long)arg1 subdataHandlerBlock:(id)arg2;

@end


