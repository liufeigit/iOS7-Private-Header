/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "TSCH3DTile.h"


__attribute__((visibility("hidden")))

@interface TSCH3DRenderBlockTile : TSCH3DTile

{

    id mRenderBlock;

}



- (void)dealloc;

- (id)initWithBounds:(const box_80622335 *)arg1 renderBlock:(id)arg2;

- (_Bool)renderIntoContext:(struct CGContext *)arg1;



@end


