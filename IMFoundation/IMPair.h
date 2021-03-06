/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





#import "NSCopying.h"



@interface IMPair : NSObject <NSCopying>

{

    id _first;

    id _second;

}



+ (id)pairWithFirst:(id)arg1 second:(id)arg2;

- (id)copyWithZone:(struct _NSZone *)arg1;

- (void)dealloc;

@property(retain) id first; // @synthesize first=_first;

- (unsigned long long)hash;

- (id)initWithFirst:(id)arg1 second:(id)arg2;

- (_Bool)isEqual:(id)arg1;

@property(retain) id second; // @synthesize second=_second;



@end


