/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "SKAction.h"


@class NSArray;



__attribute__((visibility("hidden")))

@interface SKGroup : SKAction

{

    struct SKCGroup *_mycaction;

    NSArray *_actions;

}



+ (id)groupWithActions:(id)arg1;

- (void).cxx_destruct;

- (id)copyWithZone:(struct _NSZone *)arg1;

- (void)encodeWithCoder:(id)arg1;

- (_Bool)finished;

- (id)init;

- (id)initWithCoder:(id)arg1;

- (id)reversedAction;



@end


