/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class AVCaptureAudioChannelInternal;



@interface AVCaptureAudioChannel : NSObject

{

    AVCaptureAudioChannelInternal *_internal;

}



@property(readonly, nonatomic) float averagePowerLevel;

- (void)dealloc;

- (id)initWithConnection:(id)arg1;

- (void)invalidate;

@property(readonly, nonatomic) float peakHoldLevel;



@end


