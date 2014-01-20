/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





#import "TSUReadChannel.h"

#import "TSUStreamReadChannel.h"



__attribute__((visibility("hidden")))

@interface TSUReadChannelToStreamReadChannelAdapter : NSObject <TSUReadChannel, TSUStreamReadChannel>

{

    id <TSUReadChannel> _readChannel;

}



- (void).cxx_destruct;

- (void)addBarrier:(id)arg1;

- (void)close;

- (id)initWithReadChannel:(id)arg1;

- (void)readFromOffset:(long long)arg1 length:(unsigned long long)arg2 queue:(id)arg3 handler:(id)arg4;

- (void)readWithQueue:(id)arg1 handler:(id)arg2;

- (void)setLowWater:(unsigned long long)arg1;



@end

