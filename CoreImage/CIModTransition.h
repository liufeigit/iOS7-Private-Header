/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "CIFilter.h"


@class CIImage, CIVector, NSNumber;



__attribute__((visibility("hidden")))

@interface CIModTransition : CIFilter

{

    CIImage *inputImage;

    CIImage *inputTargetImage;

    CIVector *inputCenter;

    NSNumber *inputTime;

    NSNumber *inputAngle;

    NSNumber *inputRadius;

    NSNumber *inputCompression;

}



+ (id)customAttributes;

- (id)_kernel;

@property(retain, nonatomic) NSNumber *inputAngle; // @synthesize inputAngle;

@property(retain, nonatomic) CIVector *inputCenter; // @synthesize inputCenter;

@property(retain, nonatomic) NSNumber *inputCompression; // @synthesize inputCompression;

@property(retain, nonatomic) CIImage *inputImage; // @synthesize inputImage;

@property(retain, nonatomic) NSNumber *inputRadius; // @synthesize inputRadius;

@property(retain, nonatomic) CIImage *inputTargetImage; // @synthesize inputTargetImage;

@property(retain, nonatomic) NSNumber *inputTime; // @synthesize inputTime;

- (id)outputImage;

- (void)setDefaults;



@end

