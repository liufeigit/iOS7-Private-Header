/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "VGLProgram.h"


__attribute__((visibility("hidden")))

@interface VGLBuildingShadowProgram : VGLProgram

{

    int _uAlpha;

    float _alpha;

    int _uBrightness;

    float _brightness;

}



+ (id)fragName;

+ (id)vertName;

@property(nonatomic) float alpha; // @synthesize alpha=_alpha;

@property(nonatomic) float brightness; // @synthesize brightness=_brightness;

- (void)setup;



@end

