/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "SKAction.h"


__attribute__((visibility("hidden")))

@interface SKWait : SKAction

{

    struct SKCWait *_mycaction;

}



+ (id)waitForDuration:(double)arg1;

+ (id)waitForDuration:(double)arg1 withRange:(double)arg2;

- (void)encodeWithCoder:(id)arg1;

- (id)init;

- (id)initWithCoder:(id)arg1;

- (id)reversedAction;



@end


