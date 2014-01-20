/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@interface VKPlatform : NSObject

{

    unsigned long long _memSize;

    int _numCPUs;

    _Bool _proceduralRoadAlpha;

    _Bool _useCheapTrafficShader;

    _Bool _shouldUseTrafficAlphaHack;

    _Bool _supportsBuildingStrokes;

    _Bool _supports3DBuildingStrokes;

}



+ (id)sharedPlatform;

- (unsigned long long)_calculateMemSize;

- (void)_determineHardware;

@property(readonly, nonatomic) _Bool canMakeSharingThumbnails;

- (void)dealloc;

- (id)init;

@property(readonly, nonatomic) _Bool isPad;

@property(readonly, nonatomic) double mainScreenPPI;

@property(readonly, nonatomic) double mainScreenScale;

@property(readonly, nonatomic) unsigned long long memorySize; // @synthesize memorySize=_memSize;

@property(readonly, nonatomic) _Bool proceduralRoadAlpha; // @synthesize proceduralRoadAlpha=_proceduralRoadAlpha;

@property(readonly, nonatomic) _Bool roadsWithSimpleLineMeshesAvailable;

@property(readonly, nonatomic) _Bool shouldDrawWhenReady;

@property(readonly, nonatomic) _Bool shouldUseTrafficAlphaHack; // @synthesize shouldUseTrafficAlphaHack=_shouldUseTrafficAlphaHack;

@property(readonly, nonatomic) _Bool supports3DBuildingStrokes; // @synthesize supports3DBuildingStrokes=_supports3DBuildingStrokes;

@property(readonly, nonatomic) _Bool supportsBuildingStrokes; // @synthesize supportsBuildingStrokes=_supportsBuildingStrokes;

@property(readonly, nonatomic) _Bool supportsDepthDependentBuildings;

@property(readonly, nonatomic) _Bool supportsHiResBuildings;

@property(readonly, nonatomic) _Bool supportsHiResRTT;

@property(readonly, nonatomic) unsigned long long tileMaximumLimit;

- (unsigned long long)tileReserveLimit:(_Bool)arg1;

@property(readonly, nonatomic) _Bool useCheapTrafficShader; // @synthesize useCheapTrafficShader=_useCheapTrafficShader;



@end

