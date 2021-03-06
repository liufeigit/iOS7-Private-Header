/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





#import "NSCopying.h"



@class NSString;



__attribute__((visibility("hidden")))

@interface EKTimeZone : NSObject <NSCopying>

{

    NSString *_name;

    void *_internal;

    long long _lastStart;

    long long _lastEnd;

    unsigned long long _lastIndex;

    double _offset;

}



+ (id)timeZoneWithNSTimeZone:(id)arg1;

+ (id)timeZoneWithName:(id)arg1;

- (id)NSTimeZone;

- (id)_abbreviationForIndex:(unsigned long long)arg1;

- (unsigned long long)_indexForAbsoluteTime:(double)arg1;

- (id)abbreviation;

- (id)abbreviationForAbsoluteTime:(double)arg1;

- (id)abbreviationForDate:(id)arg1;

- (id)copyWithZone:(struct _NSZone *)arg1;

- (void)dealloc;

- (id)description;

- (unsigned long long)hash;

- (id)initWithName:(id)arg1;

- (id)initWithOffset:(double)arg1 name:(id)arg2;

- (_Bool)isEqual:(id)arg1;

- (id)name;

- (double)nextDaylightSavingTimeTransitionAfterAbsoluteTime:(double)arg1;

- (double)secondsFromGMT;

- (double)secondsFromGMTForAbsoluteTime:(double)arg1;

- (double)secondsFromGMTForDate:(id)arg1;



@end


