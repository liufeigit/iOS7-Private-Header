/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





#import "NSCopying.h"



@interface CUIStyleEffectConfiguration : NSObject <NSCopying>

{

    long long _state;

    long long _presentationState;

    long long _value;

    _Bool _useSimplifiedEffect;

}



- (id)copyWithZone:(struct _NSZone *)arg1;

- (id)init;

@property(nonatomic) long long presentationState; // @synthesize presentationState=_presentationState;

@property(nonatomic) long long state; // @synthesize state=_state;

@property(nonatomic) _Bool useSimplifiedEffect; // @synthesize useSimplifiedEffect=_useSimplifiedEffect;

@property(nonatomic) long long value; // @synthesize value=_value;

- (_Bool)shouldIgnoreForegroundColor;



@end

