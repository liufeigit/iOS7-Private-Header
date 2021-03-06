/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "TSDGLParticleSystem.h"


__attribute__((visibility("hidden")))

@interface KNBuildFireworksSystem : TSDGLParticleSystem

{

    CDStruct_03942939 _startingColorRGB;

    _Bool _didDrawCenterBurst;

    double _lifeSpanMinDuration;

    double _colorRandomness;

    CDStruct_083b1a49 _lifeSpan;

    double _maxDistance;

    double _fireworkStartingPositionX;

    struct CGSize _randomParticleSizeMinMax;

    struct CGPoint _randomParticleSpeedMinMax;

    struct CGPoint _startingPoint;

}



+ (_Bool)willOverrideColors;

+ (_Bool)willOverrideStartingPoints;

- (CDStruct_f2e236b6)colorAtIndexPoint:(struct CGPoint)arg1;

@property(nonatomic) double colorRandomness; // @synthesize colorRandomness=_colorRandomness;

@property(nonatomic) _Bool didDrawCenterBurst; // @synthesize didDrawCenterBurst=_didDrawCenterBurst;

@property(nonatomic) double fireworkStartingPositionX; // @synthesize fireworkStartingPositionX=_fireworkStartingPositionX;

@property(nonatomic) CDStruct_b2fbf00d lifeSpan; // @synthesize lifeSpan=_lifeSpan;

- (CDStruct_b2fbf00d)lifeSpanAtIndexPoint:(struct CGPoint)arg1;

@property(nonatomic) double lifeSpanMinDuration; // @synthesize lifeSpanMinDuration=_lifeSpanMinDuration;

@property(nonatomic) double maxDistance; // @synthesize maxDistance=_maxDistance;

@property(nonatomic) struct CGSize randomParticleSizeMinMax; // @synthesize randomParticleSizeMinMax=_randomParticleSizeMinMax;

@property(nonatomic) struct CGPoint randomParticleSpeedMinMax; // @synthesize randomParticleSpeedMinMax=_randomParticleSpeedMinMax;

- (double)scaleAtIndexPoint:(struct CGPoint)arg1;

- (void)setupWithTexture:(id)arg1 particleTextureSize:(struct CGSize)arg2 reverseDrawOrder:(_Bool)arg3;

- (CDStruct_03942939)speedAtIndexPoint:(struct CGPoint)arg1;

- (double)speedMax;

@property(readonly, nonatomic) struct CGPoint startingPoint; // @synthesize startingPoint=_startingPoint;

- (struct CGPoint)startingPointAtIndexPoint:(struct CGPoint)arg1;



@end


