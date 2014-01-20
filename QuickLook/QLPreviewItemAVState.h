/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





#import "NSSecureCoding.h"



@interface QLPreviewItemAVState : NSObject <NSSecureCoding>

{

    _Bool playing;

    double position;

    double duration;

}



+ (id)avStateWithPosition:(double)arg1 duration:(double)arg2 playing:(_Bool)arg3;

+ (_Bool)supportsSecureCoding;

- (id)description;

@property double duration; // @synthesize duration;

- (void)encodeWithCoder:(id)arg1;

- (id)initWithCoder:(id)arg1;

@property(getter=isPlaying) _Bool playing; // @synthesize playing;

@property double position; // @synthesize position;



@end

