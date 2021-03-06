/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





#import "SBFCancelable.h"



@class NSMutableArray;



@interface SBFCancelationToken : NSObject <SBFCancelable>

{

    _Bool _isCanceled;

    NSMutableArray *_cancelationBlocks;

}



+ (id)tokenWithCancelationBlock:(id)arg1;

+ (id)tokenWrappingCancelable:(id)arg1;

- (void)addCancelationBlock:(id)arg1;

- (void)callCancelationBlocks:(id)arg1;

- (void)cancel;

- (void)dealloc;

- (id)init;

- (_Bool)isCanceled;

- (id)nts_cancel;



@end


