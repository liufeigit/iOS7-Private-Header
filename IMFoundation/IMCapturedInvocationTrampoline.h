/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "IMInvocationTrampoline.h"


@interface IMCapturedInvocationTrampoline : IMInvocationTrampoline

{

    id *_outInvocation;

}



- (void)forwardInvocation:(id)arg1;

- (id)initWithTarget:(id)arg1 outInvocation:(id *)arg2;



@end

