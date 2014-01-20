/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class FCRFaceDetector, NSArray, NSMutableArray, NSMutableDictionary;



__attribute__((visibility("hidden")))

@interface CIBurstImageFaceAnalysisContext : NSObject

{

    NSMutableDictionary *curConfig;

    NSMutableDictionary *faceIdMapping;

    NSMutableDictionary *renameMapping;

    int faceIdCounter;

    FCRFaceDetector *faceDetector;

    NSArray *faces;

    double timeOfLastAnalyzedFrame;

    double timeBlinkDetectionDone;

    double timeFaceDetectionDone;

    _Bool forceFaceDetectionEnable;

    NSMutableArray *faceTimestampArray;

    double latestFaceTimestamp;

    double latestImageTimestamp;

    int lastFaceIndex;

}



- (void)addFaceToArray:(id)arg1;

- (void)addFacesToImageStat:(id)arg1 imageSize:(struct CGSize)arg2;

- (void)adjustFaceIdsForImageStat:(id)arg1;

- (void)calcFaceScores:(id)arg1;

- (void)calculateFaceFocusInImage:(id)arg1 imageStat:(id)arg2;

- (void)dealloc;

- (void)extractFacesFromMetadata:(id)arg1;

- (int)findFacesInImage:(id)arg1 imageStat:(id)arg2;

@property _Bool forceFaceDetectionEnable; // @synthesize forceFaceDetectionEnable;

- (id)init;

@property double latestFaceTimestamp; // @synthesize latestFaceTimestamp;

@property double timeBlinkDetectionDone; // @synthesize timeBlinkDetectionDone;

@property double timeFaceDetectionDone; // @synthesize timeFaceDetectionDone;

- (void)setupFaceDetector;



@end

