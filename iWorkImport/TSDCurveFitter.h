/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





__attribute__((visibility("hidden")))

@interface TSDCurveFitter : NSObject

{

    double mErrorDistance;

    long long mErrorIterations;

}



+ (id)curveFitter;

- (id)bezierPathFittingPointArray:(CDStruct_c3b9c2ee *)arg1 count:(long long)arg2;

- (id)bezierPathFittingPoints:(id)arg1;

@property(nonatomic) double errorDistance; // @synthesize errorDistance=mErrorDistance;

@property(nonatomic) long long errorIterations; // @synthesize errorIterations=mErrorIterations;

- (void)fitCurveToPointArray:(CDStruct_c3b9c2ee *)arg1 count:(long long)arg2 bezierCallback:(void *)arg3 context:(void *)arg4;

- (void)fitCurveToPoints:(id)arg1 bezierCallback:(void *)arg2 context:(void *)arg3;

- (id)init;



@end


