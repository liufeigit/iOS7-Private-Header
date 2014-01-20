/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "ODICycle.h"


__attribute__((visibility("hidden")))

@interface ODICycle7 : ODICycle

{

}



+ (void)addShapeForNode:(id)arg1 relativeBounds:(struct CGRect)arg2 state:(id)arg3;

+ (void)addShapeForTransition:(id)arg1 relativeBounds:(struct CGRect)arg2 rotation:(float)arg3 state:(id)arg4;

+ (_Bool)map1NodeWithState:(id)arg1;

+ (_Bool)map2NodeWithState:(id)arg1;

+ (struct CGRect)mapGSpaceWithState:(id)arg1;

+ (void)mapNode:(id)arg1 index:(unsigned int)arg2 state:(id)arg3;

+ (void)mapTransition:(id)arg1 index:(unsigned int)arg2 state:(id)arg3;

+ (struct CGSize)nodeSizeWithState:(id)arg1;



@end

