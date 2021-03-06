/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class VKAnimation, VKAttributedRouteMatch, VKPuckAnimatorLocationProjector, VKRunningCurve;



@interface VKPuckAnimator : NSObject

{

    id <VKPuckAnimatorTarget> _target;

    VKAnimation *_animation;

    VKRunningCurve *_curve;

    VKPuckAnimatorLocationProjector *_locationProjector;

    id <VKPuckAnimatorDelegate> _delegate;

    long long _pausedCount;

    _Bool _suspended;

    double _tracePlaybackSpeedMultiplier;

    VKAttributedRouteMatch *_lastProjectedLocation;

}



- (void)_step;

- (void)dealloc;

@property(nonatomic) id <VKPuckAnimatorDelegate> delegate; // @synthesize delegate=_delegate;

- (id)init;

@property(retain, nonatomic) VKAttributedRouteMatch *lastProjectedLocation; // @synthesize lastProjectedLocation=_lastProjectedLocation;

- (void)pause;

- (void)resume;

@property(retain, nonatomic) id <VKPuckAnimatorTarget> target; // @synthesize target=_target;

@property(nonatomic) double tracePlaybackSpeedMultiplier; // @synthesize tracePlaybackSpeedMultiplier=_tracePlaybackSpeedMultiplier;

- (void)start;

- (void)stop;

- (void)updateLocation:(id)arg1 routeMatch:(id)arg2;



@end


