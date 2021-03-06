/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class NSString;



@interface WBSFluidProgressState : NSObject

{

    long long _fluidProgressType;

    NSString *_loadURL;

    double _webKitProgressValue;

    double _linearFunctionM;

    double _linearFunctionB;

    double _startTimeForFluidProgress;

    double _lastTimeProgressValueWasUpdated;

    long long _fluidProgressAnimationPhase;

    double _previousDestinationPosition;

    double _animationDuration;

    double _minProgressPosition;

    _Bool _hasCompletedLoad;

    _Bool _hasCanceledLoad;

    _Bool _hasCommittedLoad;

    _Bool _shouldAnimateUsingInitialPosition;

}



+ (double)_estimatedLoadTimeRemainingFromProgressValue:(double)arg1;

- (double)_adjustProgressPosition:(double)arg1;

- (double)_animationDuration;

- (double)_estimatedLoadTimeRemaining;

- (double)_fractionCompleteAtElapsedTime:(double)arg1;

- (double)_nextProgressPosition:(double)arg1;

- (void)_updateLinearFunction;

- (void)dealloc;

- (id)description;

@property long long fluidProgressAnimationPhase;

@property long long fluidProgressType; // @synthesize fluidProgressType=_fluidProgressType;

- (double)fluidProgressValue;

@property _Bool hasCanceledLoad; // @synthesize hasCanceledLoad=_hasCanceledLoad;

@property _Bool hasCommittedLoad; // @synthesize hasCommittedLoad=_hasCommittedLoad;

@property _Bool hasCompletedLoad; // @synthesize hasCompletedLoad=_hasCompletedLoad;

- (id)initWithType:(long long)arg1;

- (_Bool)isFluidProgressStalled;

@property(retain) NSString *loadURL; // @synthesize loadURL=_loadURL;

@property double minProgressPosition;

- (id)nextFluidProgressAnimation;

- (double)secondsElapsedSinceLoadBegan;

@property _Bool shouldAnimateUsingInitialPosition; // @synthesize shouldAnimateUsingInitialPosition=_shouldAnimateUsingInitialPosition;

- (void)setWebKitProgressValue:(double)arg1;



@end


