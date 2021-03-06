/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "NSInputStream.h"


__attribute__((visibility("hidden")))

@interface __NSCFInputStream : NSInputStream

{

}



+ (id)allocWithZone:(struct _NSZone *)arg1;

+ (_Bool)automaticallyNotifiesObserversForKey:(id)arg1;

- (_Bool)_isDeallocating;

- (void)_scheduleInCFRunLoop:(struct __CFRunLoop *)arg1 forMode:(struct __CFString *)arg2;

- (_Bool)_setCFClientFlags:(unsigned long long)arg1 callback:(void *)arg2 context:(CDStruct_4210025a *)arg3;

- (_Bool)_tryRetain;

- (void)_unscheduleFromCFRunLoop:(struct __CFRunLoop *)arg1 forMode:(struct __CFString *)arg2;

- (void)close;

- (id)delegate;

- (void)finalize;

- (_Bool)getBuffer:(char **)arg1 length:(unsigned long long *)arg2;

- (_Bool)hasBytesAvailable;

- (unsigned long long)hash;

- (id)initWithData:(id)arg1;

- (id)initWithFileAtPath:(id)arg1;

- (id)initWithURL:(id)arg1;

- (_Bool)isEqual:(id)arg1;

- (void)open;

- (id)propertyForKey:(id)arg1;

- (long long)read:(char *)arg1 maxLength:(unsigned long long)arg2;

- (oneway void)release;

- (void)removeFromRunLoop:(id)arg1 forMode:(id)arg2;

- (id)retain;

- (unsigned long long)retainCount;

- (void)scheduleInRunLoop:(id)arg1 forMode:(id)arg2;

- (void)setDelegate:(id)arg1;

- (_Bool)setProperty:(id)arg1 forKey:(id)arg2;

- (id)streamError;

- (unsigned long long)streamStatus;



@end


